#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  BLOCK_COMMENT,
};

void *tree_sitter_Bluespec_external_scanner_create() { return NULL; }

void tree_sitter_Bluespec_external_scanner_destroy(void *p) {}

void tree_sitter_Bluespec_external_scanner_reset(void *p) {}

unsigned tree_sitter_Bluespec_external_scanner_serialize(void *p,
                                                         char *buffer) {
  return 0;
}

void tree_sitter_Bluespec_external_scanner_deserialize(void *p, const char *b,
                                                       unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_Bluespec_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols) {
  if (!valid_symbols[BLOCK_COMMENT]) {
    return false;
  }

  // Skip whitespace
  while (lexer->lookahead == ' ' || lexer->lookahead == '\n' ||
         lexer->lookahead == '\r' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead == '/') {
    advance(lexer);
    if (lexer->lookahead != '*') return false;
    advance(lexer);

    bool after_star = false;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;

        case '*':
          advance(lexer);
          after_star = true;
          break;

        case '/':
          if (after_star) {
            advance(lexer);
            lexer->result_symbol = BLOCK_COMMENT;
            return true;
          }
          advance(lexer);
          after_star = false;
          break;

        default:
          advance(lexer);
          after_star = false;
          break;
      }
    }
  }

  return false;
}
