const PREC = {
    condExpr: 1,
    or: 2,
    and: 3,
    bitor: 4,
    bitxnor: 5,
    bitxor: 6,
    bitand: 7,
    equality: 8,
    comparison: 9,
    shift: 10,
    addition: 11,
    multiplication: 12,
    unaryxnor: 13,
    unaryxor: 14,
    unarynor: 15,
    unaryor: 16,
    unarynand: 17,
    unaryand: 18,
    unaryplus: 19,
};

module.exports = grammar({
    name : 'Bluespec',

    extras : $ => [/\s/, $.line_comment, $.block_comment],

    externals : $ => [$.block_comment, $.stringLiteral],

    word: $ => $.ident,

    rules : {
        source_file : $ => $.package,
        package : $ =>
                    seq('package', field('name', $.capitalIdent), ';',
                        repeat($.exportDecl), repeat($.importDecl),
                        repeat($.packageStmt), 'endpackage',
                        optional(seq(':', $.capitalIdent))),

        exportDecl : $ => seq('export', sepBy1(',', $._exportItem), ';'),
        _exportItem : $ => choice(
                        seq($.capitalIdent, '::', '*'), $.capitalIdent,
                        $.ident),

        importDecl : $ => seq('import', sepBy1(',', $._importItem), ';'),
        _importItem : $ => seq($.capitalIdent, '::', '*'),

        // TODO: fix
        packageStmt : $ => choice(
                        seq(optional($.attributeInstances), $.moduleDef),
                        $.interfaceDecl),
        // $.interfaceDecl, $.typeDecl, $.varDecl, $.varAssign,
        // seq(optional($.attributeInstances), $.functionDef),
        // $.typeclassDef, $.typeclassInstanceDef,
        // $.externModuleImport),

        attributeInstances : $ => repeat1($._attributeInstance),
        _attributeInstance : $ => seq('(*', sepBy(',', $.attrSpec), '*)'),
        attrSpec : $ =>
                     seq(choice($.ident, $.capitalIdent),
                         optional(seq('=', $.expression))),

        // Expressions
        expression : $ => choice($.condExpr, $._operatorExpr, $._exprPrimary),
        condExpr : $ => prec(PREC.condExpr,
                     seq(sepBy1('&&&', $._exprOrConditionPattern), '?',
                         $.expression, ':', $.expression)),
        _exprOrConditionPattern : $ => choice(
                                    $.expression,
                                    seq($.expression, 'matches', $.pattern)),
        _exprPrimary : $ => choice(
                         $.ident, $.realLiteral, $.intLiteral, $.stringLiteral,
                         $.systemFunctionCall, seq('(', $.expression, ')'),
                         '?' /* TODO: and more*/),
        systemFunctionCall : $ => choice('$time', '$stime'),

        _operatorExpr : $ => choice($.binaryExpression, $.unaryExpression),

        binaryExpression: $ => {
            const table = [
              [PREC.or, '||'],
              [PREC.and, '&&'],
              [PREC.bitor, '|'],
              [PREC.bitxnor, choice('^~', '~^')],
              [PREC.bitxor, '^'],
              [PREC.bitand, '&'],
              [PREC.equality, choice('==', '!=')],
              [PREC.comparison, choice('<=', '>=', '<', '>')],
              [PREC.shift, choice('<<', '>>')],
              [PREC.addition, choice('+', '-')],
              [PREC.multiplication, choice('*', '/', '%')],
            ];

            return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
              field('left', $.expression),
              field('operator', operator),
              field('right', $.expression),
            ))));
        },

        unaryExpression: $ => {
            const table = [
              [PREC.unaryxnor, choice('^~', '~^')],
              [PREC.unaryxor, '^'],
              [PREC.unarynor, '~|'],
              [PREC.unaryor, '|'],
              [PREC.unarynand, '~&'],
              [PREC.unaryand, '&'],
              [PREC.unaryplus, choice('+', '-', '!', '~')],
            ];

            return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
              field('operator', operator),
              field('arg', $.expression),
            ))));
        },

        // Patterns
        pattern : $ => choice(
                    seq('.', $.ident), '.*', $.intLiteral, $.capitalIdent,
                    $.taggedUnionPattern, $.structPattern, $.tuplePattern),
        taggedUnionPattern : $ => seq('tagged', $.capitalIdent, $.pattern),
        structPattern : $ =>
                          seq('tagged', $.capitalIdent, '{',
                              sepBy1(',', seq($.ident, ':', $.pattern)), '}'),
        tuplePattern : $ => seq('{', sepBy1(',', $.pattern), '}'),

        // Module definitions
        moduleDef : $ =>
                      seq($.moduleProto, repeat($.moduleStmt), 'endmodule',
                          optional(seq(':', $.ident))),

        moduleProto : $ => seq(
                        'module', optional(seq('[', $.type, ']')),
                        field('name', $.ident),
                        optional(
                            seq('#', '(',
                                field(
                                    'formalParams',
                                    sepBy1(',', $.moduleFormalParam)),
                                ')')),
                        '(', optional(field('formalArgs', $.moduleFormalArgs)),
                        ')', optional($.provisos), ';'),

        moduleFormalParam : $ =>
                              seq(optional('parameter'), field('type', $.type),
                                  field('ident', $.ident)),
        moduleFormalArgs : $ =>
                             choice($.type, sepBy1(',', seq($.type, $.ident))),

        // TODO module statements (If, Case, BeginEndStmt...)
        moduleStmt : $ => choice(
                       $.moduleInst, $.methodDef, $.subinterfaceDef, $.rule,
                       $.varDecl, $.varAssign, $.varDo, $.varDeclDo,
                       $.functionDef, $.functionStmt, $.systemTaskStmt,
                       seq('(', $.expression, ')'), $.returnStmt),

        // Module instantiation
        moduleInst : $ => seq(field('moduleType', $.type), field('instanceIdent', $.ident), '<-', $._moduleApp,';'),
        _moduleApp : $ => seq(
                       field('moduleIdent', $.ident), '(', sepBy(',', $.moduleActualParamArg), ')'),
        moduleActualParamArg : $ => choice(
                                 $.expression, seq('clocked_by', $.expression),
                                 seq('reset_by', $.expression)),

        // TODO: All these
        methodDef : $ => 'methodDef',
        subinterfaceDef : $ => 'subinterfaceDef',
        rule : $ => 'rule',
        varDecl : $ => 'varDecl',
        varAssign : $ => 'varAssign',
        varDo : $ => 'varDo',
        varDeclDo : $ => 'varDeclDo',
        functionDef : $ => 'functionDef',
        functionStmt : $ => 'functionStmt',
        systemTaskStmt : $ => 'systemTaskStmt',
        returnStmt : $ => 'returnStmt',

        // provisos
        provisos : $ => seq('provisos', '(', sepBy1(',', $.proviso), ')'),
        proviso : $ => seq($.capitalIdent, '#(', sepBy1(',', $.type), ')'),

        // Interface declarations
        interfaceDecl : $ =>
                          seq(optional($.attributeInstances), 'interface',
                              field('name', $.typeDefType), ';',
                              repeat($.interfaceMemberDecl), 'endinterface',
                              optional(seq(':', $.capitalIdent))),

        typeDefType : $ => seq($.capitalIdent, optional($.typeFormals)),
        typeFormals : $ => seq('#', '(', sepBy1(',', $._typeFormal), ')'),
        _typeFormal : $ => seq(optional('numeric'), 'type', $.capitalIdent),

        interfaceMemberDecl : $ => choice($.methodProto, $.subinterfaceDecl),

        methodProto : $ => seq(
                        optional($.attributeInstances), 'method',
                        field('retType', $.type), field('name', $.ident),
                        optional(seq(
                            '(', field('args', sepBy(',', $.methodProtoFormal)),
                            ')')),
                        ';'),
        methodProtoFormal : $ => seq(
                              optional($.attributeInstances), $.type, $.ident),

        subinterfaceDecl : $ =>
                             seq(optional($.attributeInstances), 'interface',
                                 $.typeDefType, field('name', $.ident), ';'),

        // Comments
        line_comment : _ => token(seq('//', /.*/)),

        // Identifiers
        capitalIdent : $ => /[A-Z][a-zA-Z$_0-9]*/,
        systemIdent : $ => /\$[a-zA-Z$_0-9]*/,
        ident : $ => /[a-z][a-zA-Z$_0-9]*/,

        // Types
        type : $ => choice(
                 $._typePrimary,
                 seq($._typePrimary, '(', sepBy(',', $.type), ')')),
        _typePrimary : $ => choice(
                         seq($.capitalIdent,
                             optional(seq('#', '(', sepBy(',', $.type), ')'))),
                         $._typeNat,
                         seq('bit', '[', $._typeNat, ':', $._typeNat, ']'),
                         'int'),
        _typeNat : $ => /[-+]?[0-9][0-9_]*/,

        // Int literals
        intLiteral : $ => choice(
                       '\'0', '\'1', $._sizedIntLiteral, $._unsizedIntLiteral),

        _sizedIntLiteral : $ => choice(
                             $._sizedIntDecLiteral, $._sizedIntHexLiteral,
                             $._sizedIntOctLiteral, $._sizedIntBinLiteral),

        _sizedIntDecLiteral : $ => /[0-9]*\'[Dd][0-9][0-9_]*/,
        _sizedIntHexLiteral : $ => /[0-9]*\'[Hh][0-9a-fA-F][0-9a-fA-F_]*/,
        _sizedIntOctLiteral : $ => /[0-9]*\'[Oo][0-7][0-7_]*/,
        _sizedIntBinLiteral : $ => /[0-9]*\'[Bb][01][01_]*/,

        _unsizedIntLiteral : $ => choice(
                               $._unsizedIntDefLiteral, $._unsizedIntDecLiteral,
                               $._unsizedIntHexLiteral, $._unsizedIntOctLiteral,
                               $._unsizedIntBinLiteral),

        _unsizedIntDefLiteral : $ => /[-+]?[0-9][0-9_]*/,
        _unsizedIntDecLiteral : $ => /[-+]?\'[Dd][0-9][0-9_]*/,
        _unsizedIntHexLiteral : $ => /[-+]?\'[Hh][0-9a-fA-F][0-9a-fA-F_]*/,
        _unsizedIntOctLiteral : $ => /[-+]?\'[Oo][0-7][0-7_]*/,
        _unsizedIntBinLiteral : $ => /[-+]?\'[Bb][01][01_]*/,

        // Real literals
        realLiteral : $ => choice(
                        /[0-9][0-9_]*(\.[0-9_]+)?[eE][-+]?[0-9_]+/,
                        /[0-9][0-9_]*\.[0-9_]*/),
    }
});

function sepBy1(sep, rule) {
    return seq(rule, repeat(prec.left(seq(sep, rule))));
}

function sepBy(sep, rule) {
    return optional(sepBy1(sep, rule));
}
