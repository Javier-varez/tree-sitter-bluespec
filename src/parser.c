#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_package = 1,
  anon_sym_SEMI = 2,
  anon_sym_endpackage = 3,
  anon_sym_COLON = 4,
  anon_sym_export = 5,
  anon_sym_COMMA = 6,
  anon_sym_COLON_COLON = 7,
  anon_sym_STAR = 8,
  anon_sym_import = 9,
  anon_sym_LPAREN_STAR = 10,
  anon_sym_STAR_RPAREN = 11,
  anon_sym_EQ = 12,
  sym_expression = 13,
  sym_moduleDef = 14,
  anon_sym_interface = 15,
  anon_sym_endinterface = 16,
  anon_sym_POUND = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_numeric = 20,
  anon_sym_type = 21,
  anon_sym_method = 22,
  sym_line_comment = 23,
  sym_capitalIdent = 24,
  sym_systemIdent = 25,
  sym_ident = 26,
  anon_sym_bit = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  aux_sym__typeNat_token1 = 30,
  anon_sym_SQUOTE0 = 31,
  anon_sym_SQUOTE1 = 32,
  sym__sizedIntDecLiteral = 33,
  sym__sizedIntHexLiteral = 34,
  sym__sizedIntOctLiteral = 35,
  sym__sizedIntBinLiteral = 36,
  sym__unsizedIntDecLiteral = 37,
  sym__unsizedIntHexLiteral = 38,
  sym__unsizedIntOctLiteral = 39,
  sym__unsizedIntBinLiteral = 40,
  aux_sym_realLiteral_token2 = 41,
  sym_block_comment = 42,
  sym_source_file = 43,
  sym_package = 44,
  sym_exportDecl = 45,
  sym__exportItem = 46,
  sym_importDecl = 47,
  sym__importItem = 48,
  sym_packageStmt = 49,
  sym_attributeInstances = 50,
  sym__attributeInstance = 51,
  sym_attrSpec = 52,
  sym_interfaceDecl = 53,
  sym_typeDefType = 54,
  sym_typeFormals = 55,
  sym__typeFormal = 56,
  sym_interfaceMemberDecl = 57,
  sym_methodProto = 58,
  sym_methodProtoFormal = 59,
  sym_subinterfaceDecl = 60,
  sym_type = 61,
  sym__typePrimary = 62,
  sym__typeNat = 63,
  aux_sym_package_repeat1 = 64,
  aux_sym_package_repeat2 = 65,
  aux_sym_package_repeat3 = 66,
  aux_sym_exportDecl_repeat1 = 67,
  aux_sym_importDecl_repeat1 = 68,
  aux_sym_attributeInstances_repeat1 = 69,
  aux_sym__attributeInstance_repeat1 = 70,
  aux_sym_interfaceDecl_repeat1 = 71,
  aux_sym_typeFormals_repeat1 = 72,
  aux_sym_methodProto_repeat1 = 73,
  aux_sym_type_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_endpackage] = "endpackage",
  [anon_sym_COLON] = ":",
  [anon_sym_export] = "export",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_STAR] = "*",
  [anon_sym_import] = "import",
  [anon_sym_LPAREN_STAR] = "(*",
  [anon_sym_STAR_RPAREN] = "*)",
  [anon_sym_EQ] = "=",
  [sym_expression] = "expression",
  [sym_moduleDef] = "moduleDef",
  [anon_sym_interface] = "interface",
  [anon_sym_endinterface] = "endinterface",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_numeric] = "numeric",
  [anon_sym_type] = "type",
  [anon_sym_method] = "method",
  [sym_line_comment] = "line_comment",
  [sym_capitalIdent] = "capitalIdent",
  [sym_systemIdent] = "systemIdent",
  [sym_ident] = "ident",
  [anon_sym_bit] = "bit",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__typeNat_token1] = "_typeNat_token1",
  [anon_sym_SQUOTE0] = "'0",
  [anon_sym_SQUOTE1] = "'1",
  [sym__sizedIntDecLiteral] = "_sizedIntDecLiteral",
  [sym__sizedIntHexLiteral] = "_sizedIntHexLiteral",
  [sym__sizedIntOctLiteral] = "_sizedIntOctLiteral",
  [sym__sizedIntBinLiteral] = "_sizedIntBinLiteral",
  [sym__unsizedIntDecLiteral] = "_unsizedIntDecLiteral",
  [sym__unsizedIntHexLiteral] = "_unsizedIntHexLiteral",
  [sym__unsizedIntOctLiteral] = "_unsizedIntOctLiteral",
  [sym__unsizedIntBinLiteral] = "_unsizedIntBinLiteral",
  [aux_sym_realLiteral_token2] = "realLiteral_token2",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym_package] = "package",
  [sym_exportDecl] = "exportDecl",
  [sym__exportItem] = "_exportItem",
  [sym_importDecl] = "importDecl",
  [sym__importItem] = "_importItem",
  [sym_packageStmt] = "packageStmt",
  [sym_attributeInstances] = "attributeInstances",
  [sym__attributeInstance] = "_attributeInstance",
  [sym_attrSpec] = "attrSpec",
  [sym_interfaceDecl] = "interfaceDecl",
  [sym_typeDefType] = "typeDefType",
  [sym_typeFormals] = "typeFormals",
  [sym__typeFormal] = "_typeFormal",
  [sym_interfaceMemberDecl] = "interfaceMemberDecl",
  [sym_methodProto] = "methodProto",
  [sym_methodProtoFormal] = "methodProtoFormal",
  [sym_subinterfaceDecl] = "subinterfaceDecl",
  [sym_type] = "type",
  [sym__typePrimary] = "_typePrimary",
  [sym__typeNat] = "_typeNat",
  [aux_sym_package_repeat1] = "package_repeat1",
  [aux_sym_package_repeat2] = "package_repeat2",
  [aux_sym_package_repeat3] = "package_repeat3",
  [aux_sym_exportDecl_repeat1] = "exportDecl_repeat1",
  [aux_sym_importDecl_repeat1] = "importDecl_repeat1",
  [aux_sym_attributeInstances_repeat1] = "attributeInstances_repeat1",
  [aux_sym__attributeInstance_repeat1] = "_attributeInstance_repeat1",
  [aux_sym_interfaceDecl_repeat1] = "interfaceDecl_repeat1",
  [aux_sym_typeFormals_repeat1] = "typeFormals_repeat1",
  [aux_sym_methodProto_repeat1] = "methodProto_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_endpackage] = anon_sym_endpackage,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_expression] = sym_expression,
  [sym_moduleDef] = sym_moduleDef,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_endinterface] = anon_sym_endinterface,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_numeric] = anon_sym_numeric,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_method] = anon_sym_method,
  [sym_line_comment] = sym_line_comment,
  [sym_capitalIdent] = sym_capitalIdent,
  [sym_systemIdent] = sym_systemIdent,
  [sym_ident] = sym_ident,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__typeNat_token1] = aux_sym__typeNat_token1,
  [anon_sym_SQUOTE0] = anon_sym_SQUOTE0,
  [anon_sym_SQUOTE1] = anon_sym_SQUOTE1,
  [sym__sizedIntDecLiteral] = sym__sizedIntDecLiteral,
  [sym__sizedIntHexLiteral] = sym__sizedIntHexLiteral,
  [sym__sizedIntOctLiteral] = sym__sizedIntOctLiteral,
  [sym__sizedIntBinLiteral] = sym__sizedIntBinLiteral,
  [sym__unsizedIntDecLiteral] = sym__unsizedIntDecLiteral,
  [sym__unsizedIntHexLiteral] = sym__unsizedIntHexLiteral,
  [sym__unsizedIntOctLiteral] = sym__unsizedIntOctLiteral,
  [sym__unsizedIntBinLiteral] = sym__unsizedIntBinLiteral,
  [aux_sym_realLiteral_token2] = aux_sym_realLiteral_token2,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym_package] = sym_package,
  [sym_exportDecl] = sym_exportDecl,
  [sym__exportItem] = sym__exportItem,
  [sym_importDecl] = sym_importDecl,
  [sym__importItem] = sym__importItem,
  [sym_packageStmt] = sym_packageStmt,
  [sym_attributeInstances] = sym_attributeInstances,
  [sym__attributeInstance] = sym__attributeInstance,
  [sym_attrSpec] = sym_attrSpec,
  [sym_interfaceDecl] = sym_interfaceDecl,
  [sym_typeDefType] = sym_typeDefType,
  [sym_typeFormals] = sym_typeFormals,
  [sym__typeFormal] = sym__typeFormal,
  [sym_interfaceMemberDecl] = sym_interfaceMemberDecl,
  [sym_methodProto] = sym_methodProto,
  [sym_methodProtoFormal] = sym_methodProtoFormal,
  [sym_subinterfaceDecl] = sym_subinterfaceDecl,
  [sym_type] = sym_type,
  [sym__typePrimary] = sym__typePrimary,
  [sym__typeNat] = sym__typeNat,
  [aux_sym_package_repeat1] = aux_sym_package_repeat1,
  [aux_sym_package_repeat2] = aux_sym_package_repeat2,
  [aux_sym_package_repeat3] = aux_sym_package_repeat3,
  [aux_sym_exportDecl_repeat1] = aux_sym_exportDecl_repeat1,
  [aux_sym_importDecl_repeat1] = aux_sym_importDecl_repeat1,
  [aux_sym_attributeInstances_repeat1] = aux_sym_attributeInstances_repeat1,
  [aux_sym__attributeInstance_repeat1] = aux_sym__attributeInstance_repeat1,
  [aux_sym_interfaceDecl_repeat1] = aux_sym_interfaceDecl_repeat1,
  [aux_sym_typeFormals_repeat1] = aux_sym_typeFormals_repeat1,
  [aux_sym_methodProto_repeat1] = aux_sym_methodProto_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleDef] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endinterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numeric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_capitalIdent] = {
    .visible = true,
    .named = true,
  },
  [sym_systemIdent] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__typeNat_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE1] = {
    .visible = true,
    .named = false,
  },
  [sym__sizedIntDecLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__sizedIntHexLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__sizedIntOctLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__sizedIntBinLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__unsizedIntDecLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__unsizedIntHexLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__unsizedIntOctLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__unsizedIntBinLiteral] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_realLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_exportDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__exportItem] = {
    .visible = false,
    .named = true,
  },
  [sym_importDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__importItem] = {
    .visible = false,
    .named = true,
  },
  [sym_packageStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeInstances] = {
    .visible = true,
    .named = true,
  },
  [sym__attributeInstance] = {
    .visible = false,
    .named = true,
  },
  [sym_attrSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_interfaceDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_typeDefType] = {
    .visible = true,
    .named = true,
  },
  [sym_typeFormals] = {
    .visible = true,
    .named = true,
  },
  [sym__typeFormal] = {
    .visible = false,
    .named = true,
  },
  [sym_interfaceMemberDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_methodProto] = {
    .visible = true,
    .named = true,
  },
  [sym_methodProtoFormal] = {
    .visible = true,
    .named = true,
  },
  [sym_subinterfaceDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__typePrimary] = {
    .visible = false,
    .named = true,
  },
  [sym__typeNat] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exportDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_importDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributeInstances_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributeInstance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interfaceDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typeFormals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_methodProto_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_name = 2,
  field_retType = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_name] = "name",
  [field_retType] = "retType",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 2},
    {field_retType, 1},
  [4] =
    {field_name, 3},
  [5] =
    {field_name, 3},
    {field_retType, 2},
  [7] =
    {field_args, 4},
    {field_name, 2},
    {field_retType, 1},
  [10] =
    {field_args, 4},
    {field_args, 5},
    {field_name, 2},
    {field_retType, 1},
  [14] =
    {field_args, 5},
    {field_name, 3},
    {field_retType, 2},
  [17] =
    {field_args, 5},
    {field_args, 6},
    {field_name, 3},
    {field_retType, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == ']') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 't') ADVANCE(76);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(101);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(125);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(130);
      END_STATE();
    case 80:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(134);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(129);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(133);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(32);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_endpackage);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_moduleDef);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_endinterface);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(101);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_numeric);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_capitalIdent);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_systemIdent);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__typeNat_token1);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '_') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__typeNat_token1);
      if (lookahead == '.') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__typeNat_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE0);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SQUOTE1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__sizedIntDecLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__sizedIntHexLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__sizedIntOctLiteral);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__sizedIntBinLiteral);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__unsizedIntDecLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__unsizedIntHexLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__unsizedIntOctLiteral);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__unsizedIntBinLiteral);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_realLiteral_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 88, .external_lex_state = 1},
  [3] = {.lex_state = 88, .external_lex_state = 1},
  [4] = {.lex_state = 88, .external_lex_state = 1},
  [5] = {.lex_state = 88, .external_lex_state = 1},
  [6] = {.lex_state = 88, .external_lex_state = 1},
  [7] = {.lex_state = 88, .external_lex_state = 1},
  [8] = {.lex_state = 88, .external_lex_state = 1},
  [9] = {.lex_state = 88, .external_lex_state = 1},
  [10] = {.lex_state = 88, .external_lex_state = 1},
  [11] = {.lex_state = 88, .external_lex_state = 1},
  [12] = {.lex_state = 88, .external_lex_state = 1},
  [13] = {.lex_state = 88, .external_lex_state = 1},
  [14] = {.lex_state = 88, .external_lex_state = 1},
  [15] = {.lex_state = 88, .external_lex_state = 1},
  [16] = {.lex_state = 88, .external_lex_state = 1},
  [17] = {.lex_state = 88, .external_lex_state = 1},
  [18] = {.lex_state = 88, .external_lex_state = 1},
  [19] = {.lex_state = 88, .external_lex_state = 1},
  [20] = {.lex_state = 88, .external_lex_state = 1},
  [21] = {.lex_state = 88, .external_lex_state = 1},
  [22] = {.lex_state = 88, .external_lex_state = 1},
  [23] = {.lex_state = 88, .external_lex_state = 1},
  [24] = {.lex_state = 88, .external_lex_state = 1},
  [25] = {.lex_state = 88, .external_lex_state = 1},
  [26] = {.lex_state = 88, .external_lex_state = 1},
  [27] = {.lex_state = 88, .external_lex_state = 1},
  [28] = {.lex_state = 88, .external_lex_state = 1},
  [29] = {.lex_state = 88, .external_lex_state = 1},
  [30] = {.lex_state = 88, .external_lex_state = 1},
  [31] = {.lex_state = 88, .external_lex_state = 1},
  [32] = {.lex_state = 88, .external_lex_state = 1},
  [33] = {.lex_state = 88, .external_lex_state = 1},
  [34] = {.lex_state = 88, .external_lex_state = 1},
  [35] = {.lex_state = 1, .external_lex_state = 1},
  [36] = {.lex_state = 88, .external_lex_state = 1},
  [37] = {.lex_state = 88, .external_lex_state = 1},
  [38] = {.lex_state = 88, .external_lex_state = 1},
  [39] = {.lex_state = 88, .external_lex_state = 1},
  [40] = {.lex_state = 88, .external_lex_state = 1},
  [41] = {.lex_state = 88, .external_lex_state = 1},
  [42] = {.lex_state = 1, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 88, .external_lex_state = 1},
  [45] = {.lex_state = 1, .external_lex_state = 1},
  [46] = {.lex_state = 88, .external_lex_state = 1},
  [47] = {.lex_state = 88, .external_lex_state = 1},
  [48] = {.lex_state = 88, .external_lex_state = 1},
  [49] = {.lex_state = 88, .external_lex_state = 1},
  [50] = {.lex_state = 88, .external_lex_state = 1},
  [51] = {.lex_state = 88, .external_lex_state = 1},
  [52] = {.lex_state = 88, .external_lex_state = 1},
  [53] = {.lex_state = 1, .external_lex_state = 1},
  [54] = {.lex_state = 88, .external_lex_state = 1},
  [55] = {.lex_state = 88, .external_lex_state = 1},
  [56] = {.lex_state = 88, .external_lex_state = 1},
  [57] = {.lex_state = 1, .external_lex_state = 1},
  [58] = {.lex_state = 88, .external_lex_state = 1},
  [59] = {.lex_state = 88, .external_lex_state = 1},
  [60] = {.lex_state = 88, .external_lex_state = 1},
  [61] = {.lex_state = 1, .external_lex_state = 1},
  [62] = {.lex_state = 88, .external_lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 1, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 88, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 88, .external_lex_state = 1},
  [75] = {.lex_state = 1, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 1, .external_lex_state = 1},
  [78] = {.lex_state = 1, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 1, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 88, .external_lex_state = 1},
  [85] = {.lex_state = 88, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 1, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 1, .external_lex_state = 1},
  [95] = {.lex_state = 1, .external_lex_state = 1},
  [96] = {.lex_state = 88, .external_lex_state = 1},
  [97] = {.lex_state = 88, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 1, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 88, .external_lex_state = 1},
  [106] = {.lex_state = 1, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 88, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 1, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 1, .external_lex_state = 1},
  [117] = {.lex_state = 88, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 88, .external_lex_state = 1},
  [123] = {.lex_state = 88, .external_lex_state = 1},
  [124] = {.lex_state = 88, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 88, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 1, .external_lex_state = 1},
  [137] = {.lex_state = 1, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 1, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 5, .external_lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 5, .external_lex_state = 1},
  [148] = {.lex_state = 1, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 1},
  [152] = {.lex_state = 0, .external_lex_state = 1},
  [153] = {.lex_state = 1, .external_lex_state = 1},
  [154] = {.lex_state = 1, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 1, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 1},
  [160] = {.lex_state = 1, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 1, .external_lex_state = 1},
  [165] = {.lex_state = 0, .external_lex_state = 1},
  [166] = {.lex_state = 0, .external_lex_state = 1},
  [167] = {.lex_state = 0, .external_lex_state = 1},
  [168] = {.lex_state = 0, .external_lex_state = 1},
  [169] = {.lex_state = 0, .external_lex_state = 1},
  [170] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token_block_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_endpackage] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LPAREN_STAR] = ACTIONS(1),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [sym_moduleDef] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_endinterface] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_numeric] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_capitalIdent] = ACTIONS(1),
    [sym_systemIdent] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__typeNat_token1] = ACTIONS(1),
    [anon_sym_SQUOTE0] = ACTIONS(1),
    [anon_sym_SQUOTE1] = ACTIONS(1),
    [sym__sizedIntDecLiteral] = ACTIONS(1),
    [sym__sizedIntHexLiteral] = ACTIONS(1),
    [sym__sizedIntOctLiteral] = ACTIONS(1),
    [sym__sizedIntBinLiteral] = ACTIONS(1),
    [sym__unsizedIntDecLiteral] = ACTIONS(1),
    [sym__unsizedIntHexLiteral] = ACTIONS(1),
    [sym__unsizedIntOctLiteral] = ACTIONS(1),
    [sym__unsizedIntBinLiteral] = ACTIONS(1),
    [aux_sym_realLiteral_token2] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(170),
    [sym_package] = STATE(168),
    [anon_sym_package] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      anon_sym_endpackage,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      sym_moduleDef,
    ACTIONS(17), 1,
      anon_sym_interface,
    STATE(51), 1,
      sym_interfaceDecl,
    STATE(103), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym_exportDecl,
      aux_sym_package_repeat1,
    STATE(4), 2,
      sym_importDecl,
      aux_sym_package_repeat2,
    STATE(17), 2,
      sym_packageStmt,
      aux_sym_package_repeat3,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
  [45] = 13,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      sym_moduleDef,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_endpackage,
    STATE(51), 1,
      sym_interfaceDecl,
    STATE(103), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(5), 2,
      sym_importDecl,
      aux_sym_package_repeat2,
    STATE(16), 2,
      sym_packageStmt,
      aux_sym_package_repeat3,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(20), 2,
      sym_exportDecl,
      aux_sym_package_repeat1,
  [90] = 11,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      sym_moduleDef,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_endpackage,
    STATE(51), 1,
      sym_interfaceDecl,
    STATE(103), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(16), 2,
      sym_packageStmt,
      aux_sym_package_repeat3,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(26), 2,
      sym_importDecl,
      aux_sym_package_repeat2,
  [128] = 11,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      sym_moduleDef,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(21), 1,
      anon_sym_endpackage,
    STATE(51), 1,
      sym_interfaceDecl,
    STATE(103), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(14), 2,
      sym_packageStmt,
      aux_sym_package_repeat3,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(26), 2,
      sym_importDecl,
      aux_sym_package_repeat2,
  [166] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    STATE(29), 1,
      sym_attributeInstances,
    STATE(90), 1,
      sym_methodProtoFormal,
    STATE(136), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [203] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_attributeInstances,
    STATE(70), 1,
      sym_methodProtoFormal,
    STATE(136), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [240] = 10,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    STATE(29), 1,
      sym_attributeInstances,
    STATE(104), 1,
      sym_methodProtoFormal,
    STATE(136), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [274] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(33), 1,
      anon_sym_interface,
    ACTIONS(35), 1,
      anon_sym_endinterface,
    ACTIONS(37), 1,
      anon_sym_method,
    STATE(126), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(10), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(47), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [306] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(33), 1,
      anon_sym_interface,
    ACTIONS(37), 1,
      anon_sym_method,
    ACTIONS(39), 1,
      anon_sym_endinterface,
    STATE(126), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(13), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(47), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [338] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(33), 1,
      anon_sym_interface,
    ACTIONS(37), 1,
      anon_sym_method,
    ACTIONS(41), 1,
      anon_sym_endinterface,
    STATE(126), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(13), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(47), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [370] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(33), 1,
      anon_sym_interface,
    ACTIONS(37), 1,
      anon_sym_method,
    ACTIONS(43), 1,
      anon_sym_endinterface,
    STATE(126), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(11), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(47), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [402] = 9,
    ACTIONS(45), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(48), 1,
      anon_sym_interface,
    ACTIONS(51), 1,
      anon_sym_endinterface,
    ACTIONS(53), 1,
      anon_sym_method,
    STATE(126), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(13), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    STATE(47), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [434] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      sym_moduleDef,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(56), 1,
      anon_sym_endpackage,
    STATE(51), 1,
      sym_interfaceDecl,
    STATE(103), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_packageStmt,
      aux_sym_package_repeat3,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
  [465] = 9,
    ACTIONS(58), 1,
      anon_sym_endpackage,
    ACTIONS(60), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(63), 1,
      sym_moduleDef,
    ACTIONS(66), 1,
      anon_sym_interface,
    STATE(51), 1,
      sym_interfaceDecl,
    STATE(103), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_packageStmt,
      aux_sym_package_repeat3,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
  [496] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      sym_moduleDef,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(21), 1,
      anon_sym_endpackage,
    STATE(51), 1,
      sym_interfaceDecl,
    STATE(103), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_packageStmt,
      aux_sym_package_repeat3,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
  [527] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      sym_moduleDef,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_endpackage,
    STATE(51), 1,
      sym_interfaceDecl,
    STATE(103), 1,
      sym_attributeInstances,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_packageStmt,
      aux_sym_package_repeat3,
    STATE(19), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
  [558] = 4,
    ACTIONS(69), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(18), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    ACTIONS(72), 6,
      sym_moduleDef,
      anon_sym_interface,
      anon_sym_method,
      sym_capitalIdent,
      anon_sym_bit,
      aux_sym__typeNat_token1,
  [578] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(18), 2,
      sym__attributeInstance,
      aux_sym_attributeInstances_repeat1,
    ACTIONS(74), 6,
      sym_moduleDef,
      anon_sym_interface,
      anon_sym_method,
      sym_capitalIdent,
      anon_sym_bit,
      aux_sym__typeNat_token1,
  [598] = 4,
    ACTIONS(78), 1,
      anon_sym_export,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(20), 2,
      sym_exportDecl,
      aux_sym_package_repeat1,
    ACTIONS(76), 5,
      anon_sym_endpackage,
      anon_sym_import,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [617] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(81), 7,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
      anon_sym_method,
      sym_capitalIdent,
      anon_sym_bit,
      aux_sym__typeNat_token1,
  [631] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(83), 7,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
      anon_sym_method,
      sym_capitalIdent,
      anon_sym_bit,
      aux_sym__typeNat_token1,
  [645] = 7,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [669] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(87), 7,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
      anon_sym_method,
      sym_capitalIdent,
      anon_sym_bit,
      aux_sym__typeNat_token1,
  [683] = 7,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [707] = 4,
    ACTIONS(93), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(26), 2,
      sym_importDecl,
      aux_sym_package_repeat2,
    ACTIONS(91), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [725] = 6,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    STATE(153), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [746] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(96), 6,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [759] = 6,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    STATE(148), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [780] = 6,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    STATE(109), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [801] = 6,
    ACTIONS(25), 1,
      sym_capitalIdent,
    ACTIONS(27), 1,
      anon_sym_bit,
    ACTIONS(29), 1,
      aux_sym__typeNat_token1,
    STATE(164), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym__typePrimary,
      sym__typeNat,
  [822] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(98), 6,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [835] = 3,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(100), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [849] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(104), 5,
      anon_sym_endpackage,
      anon_sym_import,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [861] = 3,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(106), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_ident,
  [875] = 3,
    ACTIONS(112), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(110), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [889] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(114), 5,
      anon_sym_endpackage,
      anon_sym_import,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [901] = 3,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(116), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [915] = 3,
    ACTIONS(122), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(120), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [929] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(124), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [940] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(126), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [951] = 4,
    ACTIONS(128), 1,
      anon_sym_STAR_RPAREN,
    STATE(84), 1,
      sym_attrSpec,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(130), 2,
      sym_capitalIdent,
      sym_ident,
  [966] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(132), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_ident,
  [977] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(134), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [988] = 3,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(136), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ident,
  [1001] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(140), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1012] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(142), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1023] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(144), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1034] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(146), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [1045] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1056] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(150), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [1067] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(152), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [1078] = 4,
    ACTIONS(156), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_typeFormals,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(154), 2,
      anon_sym_SEMI,
      sym_ident,
  [1093] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1104] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1115] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(162), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1126] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(164), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_ident,
  [1137] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(166), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1148] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(168), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [1159] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(170), 4,
      anon_sym_endpackage,
      anon_sym_LPAREN_STAR,
      sym_moduleDef,
      anon_sym_interface,
  [1170] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_ident,
  [1181] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(174), 4,
      anon_sym_LPAREN_STAR,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1192] = 4,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_importDecl_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1206] = 4,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_importDecl_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1220] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ident,
  [1230] = 4,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_exportDecl_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1244] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1258] = 4,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_STAR_RPAREN,
    STATE(68), 1,
      aux_sym__attributeInstance_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1272] = 4,
    ACTIONS(201), 1,
      anon_sym_numeric,
    ACTIONS(203), 1,
      anon_sym_type,
    STATE(82), 1,
      sym__typeFormal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1286] = 4,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_methodProto_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1300] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1314] = 4,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_methodProto_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1328] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1342] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_STAR_RPAREN,
    STATE(68), 1,
      aux_sym__attributeInstance_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1356] = 3,
    STATE(124), 1,
      sym_attrSpec,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(130), 2,
      sym_capitalIdent,
      sym_ident,
  [1368] = 4,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_exportDecl_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1382] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(223), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ident,
  [1392] = 4,
    ACTIONS(225), 1,
      sym_capitalIdent,
    ACTIONS(227), 1,
      sym_ident,
    STATE(119), 1,
      sym__exportItem,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1406] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1420] = 4,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_methodProto_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1434] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(233), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ident,
  [1444] = 4,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_typeFormals_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1458] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_typeFormals_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1472] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_STAR_RPAREN,
    STATE(74), 1,
      aux_sym__attributeInstance_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1486] = 3,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_STAR_RPAREN,
  [1498] = 4,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      aux_sym_importDecl_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1512] = 4,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1526] = 4,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_exportDecl_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1540] = 3,
    ACTIONS(261), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(259), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1552] = 4,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_methodProto_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1566] = 4,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_methodProto_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1580] = 4,
    ACTIONS(201), 1,
      anon_sym_numeric,
    ACTIONS(203), 1,
      anon_sym_type,
    STATE(115), 1,
      sym__typeFormal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1594] = 4,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_typeFormals_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1608] = 4,
    ACTIONS(225), 1,
      sym_capitalIdent,
    ACTIONS(272), 1,
      sym_ident,
    STATE(88), 1,
      sym__exportItem,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1622] = 3,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1633] = 3,
    ACTIONS(278), 1,
      aux_sym__typeNat_token1,
    STATE(146), 1,
      sym__typeNat,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1644] = 3,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1655] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1664] = 3,
    ACTIONS(286), 1,
      sym_capitalIdent,
    STATE(154), 1,
      sym_typeDefType,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1675] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(288), 2,
      anon_sym_SEMI,
      sym_ident,
  [1684] = 3,
    ACTIONS(290), 1,
      sym_capitalIdent,
    STATE(86), 1,
      sym__importItem,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1695] = 3,
    ACTIONS(286), 1,
      sym_capitalIdent,
    STATE(155), 1,
      sym_typeDefType,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1706] = 3,
    ACTIONS(292), 1,
      sym_moduleDef,
    ACTIONS(294), 1,
      anon_sym_interface,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1717] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1726] = 3,
    ACTIONS(296), 1,
      aux_sym__typeNat_token1,
    STATE(134), 1,
      sym__typeNat,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1737] = 3,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1748] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1757] = 3,
    ACTIONS(286), 1,
      sym_capitalIdent,
    STATE(140), 1,
      sym_typeDefType,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1768] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1777] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1786] = 3,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1797] = 3,
    ACTIONS(290), 1,
      sym_capitalIdent,
    STATE(121), 1,
      sym__importItem,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1808] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(310), 2,
      anon_sym_SEMI,
      sym_ident,
  [1817] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1826] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1835] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(314), 2,
      anon_sym_SEMI,
      sym_ident,
  [1844] = 3,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1855] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(320), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1864] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(187), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1873] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(322), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1882] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(180), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1891] = 3,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1902] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_STAR_RPAREN,
  [1911] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_STAR_RPAREN,
  [1920] = 3,
    ACTIONS(286), 1,
      sym_capitalIdent,
    STATE(137), 1,
      sym_typeDefType,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1931] = 3,
    ACTIONS(330), 1,
      anon_sym_interface,
    ACTIONS(332), 1,
      anon_sym_method,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1942] = 2,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1950] = 2,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1958] = 2,
    ACTIONS(336), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1966] = 2,
    ACTIONS(338), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1974] = 2,
    ACTIONS(340), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1982] = 2,
    ACTIONS(342), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1990] = 2,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1998] = 2,
    ACTIONS(346), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2006] = 2,
    ACTIONS(348), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2014] = 2,
    ACTIONS(350), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2022] = 2,
    ACTIONS(352), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2030] = 2,
    ACTIONS(354), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2038] = 2,
    ACTIONS(356), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2046] = 2,
    ACTIONS(358), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2054] = 2,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2062] = 2,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2070] = 2,
    ACTIONS(364), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2078] = 2,
    ACTIONS(366), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2086] = 2,
    ACTIONS(368), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2094] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2102] = 2,
    ACTIONS(370), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2110] = 2,
    ACTIONS(372), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2118] = 2,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2126] = 2,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2134] = 2,
    ACTIONS(376), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2142] = 2,
    ACTIONS(378), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2150] = 2,
    ACTIONS(380), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2158] = 2,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2166] = 2,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2174] = 2,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2182] = 2,
    ACTIONS(388), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2190] = 2,
    ACTIONS(390), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2198] = 2,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2206] = 2,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2214] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2222] = 2,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2230] = 2,
    ACTIONS(400), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2238] = 2,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2246] = 2,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2254] = 2,
    ACTIONS(406), 1,
      sym_capitalIdent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2262] = 2,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2270] = 2,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2278] = 2,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2286] = 2,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 274,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 338,
  [SMALL_STATE(12)] = 370,
  [SMALL_STATE(13)] = 402,
  [SMALL_STATE(14)] = 434,
  [SMALL_STATE(15)] = 465,
  [SMALL_STATE(16)] = 496,
  [SMALL_STATE(17)] = 527,
  [SMALL_STATE(18)] = 558,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 617,
  [SMALL_STATE(22)] = 631,
  [SMALL_STATE(23)] = 645,
  [SMALL_STATE(24)] = 669,
  [SMALL_STATE(25)] = 683,
  [SMALL_STATE(26)] = 707,
  [SMALL_STATE(27)] = 725,
  [SMALL_STATE(28)] = 746,
  [SMALL_STATE(29)] = 759,
  [SMALL_STATE(30)] = 780,
  [SMALL_STATE(31)] = 801,
  [SMALL_STATE(32)] = 822,
  [SMALL_STATE(33)] = 835,
  [SMALL_STATE(34)] = 849,
  [SMALL_STATE(35)] = 861,
  [SMALL_STATE(36)] = 875,
  [SMALL_STATE(37)] = 889,
  [SMALL_STATE(38)] = 901,
  [SMALL_STATE(39)] = 915,
  [SMALL_STATE(40)] = 929,
  [SMALL_STATE(41)] = 940,
  [SMALL_STATE(42)] = 951,
  [SMALL_STATE(43)] = 966,
  [SMALL_STATE(44)] = 977,
  [SMALL_STATE(45)] = 988,
  [SMALL_STATE(46)] = 1001,
  [SMALL_STATE(47)] = 1012,
  [SMALL_STATE(48)] = 1023,
  [SMALL_STATE(49)] = 1034,
  [SMALL_STATE(50)] = 1045,
  [SMALL_STATE(51)] = 1056,
  [SMALL_STATE(52)] = 1067,
  [SMALL_STATE(53)] = 1078,
  [SMALL_STATE(54)] = 1093,
  [SMALL_STATE(55)] = 1104,
  [SMALL_STATE(56)] = 1115,
  [SMALL_STATE(57)] = 1126,
  [SMALL_STATE(58)] = 1137,
  [SMALL_STATE(59)] = 1148,
  [SMALL_STATE(60)] = 1159,
  [SMALL_STATE(61)] = 1170,
  [SMALL_STATE(62)] = 1181,
  [SMALL_STATE(63)] = 1192,
  [SMALL_STATE(64)] = 1206,
  [SMALL_STATE(65)] = 1220,
  [SMALL_STATE(66)] = 1230,
  [SMALL_STATE(67)] = 1244,
  [SMALL_STATE(68)] = 1258,
  [SMALL_STATE(69)] = 1272,
  [SMALL_STATE(70)] = 1286,
  [SMALL_STATE(71)] = 1300,
  [SMALL_STATE(72)] = 1314,
  [SMALL_STATE(73)] = 1328,
  [SMALL_STATE(74)] = 1342,
  [SMALL_STATE(75)] = 1356,
  [SMALL_STATE(76)] = 1368,
  [SMALL_STATE(77)] = 1382,
  [SMALL_STATE(78)] = 1392,
  [SMALL_STATE(79)] = 1406,
  [SMALL_STATE(80)] = 1420,
  [SMALL_STATE(81)] = 1434,
  [SMALL_STATE(82)] = 1444,
  [SMALL_STATE(83)] = 1458,
  [SMALL_STATE(84)] = 1472,
  [SMALL_STATE(85)] = 1486,
  [SMALL_STATE(86)] = 1498,
  [SMALL_STATE(87)] = 1512,
  [SMALL_STATE(88)] = 1526,
  [SMALL_STATE(89)] = 1540,
  [SMALL_STATE(90)] = 1552,
  [SMALL_STATE(91)] = 1566,
  [SMALL_STATE(92)] = 1580,
  [SMALL_STATE(93)] = 1594,
  [SMALL_STATE(94)] = 1608,
  [SMALL_STATE(95)] = 1622,
  [SMALL_STATE(96)] = 1633,
  [SMALL_STATE(97)] = 1644,
  [SMALL_STATE(98)] = 1655,
  [SMALL_STATE(99)] = 1664,
  [SMALL_STATE(100)] = 1675,
  [SMALL_STATE(101)] = 1684,
  [SMALL_STATE(102)] = 1695,
  [SMALL_STATE(103)] = 1706,
  [SMALL_STATE(104)] = 1717,
  [SMALL_STATE(105)] = 1726,
  [SMALL_STATE(106)] = 1737,
  [SMALL_STATE(107)] = 1748,
  [SMALL_STATE(108)] = 1757,
  [SMALL_STATE(109)] = 1768,
  [SMALL_STATE(110)] = 1777,
  [SMALL_STATE(111)] = 1786,
  [SMALL_STATE(112)] = 1797,
  [SMALL_STATE(113)] = 1808,
  [SMALL_STATE(114)] = 1817,
  [SMALL_STATE(115)] = 1826,
  [SMALL_STATE(116)] = 1835,
  [SMALL_STATE(117)] = 1844,
  [SMALL_STATE(118)] = 1855,
  [SMALL_STATE(119)] = 1864,
  [SMALL_STATE(120)] = 1873,
  [SMALL_STATE(121)] = 1882,
  [SMALL_STATE(122)] = 1891,
  [SMALL_STATE(123)] = 1902,
  [SMALL_STATE(124)] = 1911,
  [SMALL_STATE(125)] = 1920,
  [SMALL_STATE(126)] = 1931,
  [SMALL_STATE(127)] = 1942,
  [SMALL_STATE(128)] = 1950,
  [SMALL_STATE(129)] = 1958,
  [SMALL_STATE(130)] = 1966,
  [SMALL_STATE(131)] = 1974,
  [SMALL_STATE(132)] = 1982,
  [SMALL_STATE(133)] = 1990,
  [SMALL_STATE(134)] = 1998,
  [SMALL_STATE(135)] = 2006,
  [SMALL_STATE(136)] = 2014,
  [SMALL_STATE(137)] = 2022,
  [SMALL_STATE(138)] = 2030,
  [SMALL_STATE(139)] = 2038,
  [SMALL_STATE(140)] = 2046,
  [SMALL_STATE(141)] = 2054,
  [SMALL_STATE(142)] = 2062,
  [SMALL_STATE(143)] = 2070,
  [SMALL_STATE(144)] = 2078,
  [SMALL_STATE(145)] = 2086,
  [SMALL_STATE(146)] = 2094,
  [SMALL_STATE(147)] = 2102,
  [SMALL_STATE(148)] = 2110,
  [SMALL_STATE(149)] = 2118,
  [SMALL_STATE(150)] = 2126,
  [SMALL_STATE(151)] = 2134,
  [SMALL_STATE(152)] = 2142,
  [SMALL_STATE(153)] = 2150,
  [SMALL_STATE(154)] = 2158,
  [SMALL_STATE(155)] = 2166,
  [SMALL_STATE(156)] = 2174,
  [SMALL_STATE(157)] = 2182,
  [SMALL_STATE(158)] = 2190,
  [SMALL_STATE(159)] = 2198,
  [SMALL_STATE(160)] = 2206,
  [SMALL_STATE(161)] = 2214,
  [SMALL_STATE(162)] = 2222,
  [SMALL_STATE(163)] = 2230,
  [SMALL_STATE(164)] = 2238,
  [SMALL_STATE(165)] = 2246,
  [SMALL_STATE(166)] = 2254,
  [SMALL_STATE(167)] = 2262,
  [SMALL_STATE(168)] = 2270,
  [SMALL_STATE(169)] = 2278,
  [SMALL_STATE(170)] = 2286,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(42),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(125),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(31),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat3, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat3, 2), SHIFT_REPEAT(42),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat3, 2), SHIFT_REPEAT(51),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat3, 2), SHIFT_REPEAT(102),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributeInstances_repeat1, 2), SHIFT_REPEAT(42),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributeInstances_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeInstances, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2), SHIFT_REPEAT(94),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attributeInstance, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attributeInstance, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attributeInstance, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(101),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 5, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typePrimary, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 5, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 6, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 4, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 4, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subinterfaceDecl, 5, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typePrimary, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 8, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 7, .production_id = 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceMemberDecl, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 9, .production_id = 9),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageStmt, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 5, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageStmt, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 6, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 8, .production_id = 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subinterfaceDecl, 4, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 6, .production_id = 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typePrimary, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 7, .production_id = 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 7, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 7, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typePrimary, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 8, .production_id = 8),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2), SHIFT_REPEAT(112),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2), SHIFT_REPEAT(78),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributeInstance_repeat1, 2), SHIFT_REPEAT(75),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributeInstance_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeFormals_repeat1, 2), SHIFT_REPEAT(92),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeFormals_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrSpec, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(30),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportItem, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_methodProto_repeat1, 2), SHIFT_REPEAT(8),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_methodProto_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 4, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typeFormal, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormals, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormal, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormal, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 5, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typeFormal, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormals, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 6, .production_id = 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportItem, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__importItem, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 7, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrSpec, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 9, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 8, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [414] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_Bluespec_external_scanner_create(void);
void tree_sitter_Bluespec_external_scanner_destroy(void *);
bool tree_sitter_Bluespec_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_Bluespec_external_scanner_serialize(void *, char *);
void tree_sitter_Bluespec_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Bluespec(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_Bluespec_external_scanner_create,
      tree_sitter_Bluespec_external_scanner_destroy,
      tree_sitter_Bluespec_external_scanner_scan,
      tree_sitter_Bluespec_external_scanner_serialize,
      tree_sitter_Bluespec_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
