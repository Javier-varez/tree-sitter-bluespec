module.exports = grammar({
    name : 'Bluespec',

    extras : $ => [/\s/, $.line_comment, $.block_comment],

    externals : $ => [$.block_comment],

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

        // TODO
        expression : $ => 'expression',

        // TODO
        moduleDef : $ => 'modDef',

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
                         seq('bit', '[', $._typeNat, ':', $._typeNat, ']')),
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
    return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
    return optional(sepBy1(sep, rule));
}
