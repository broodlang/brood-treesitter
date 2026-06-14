#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_DOT = 1,
  anon_sym_GT = 2,
  anon_sym_SLASH_GT = 3,
  anon_sym_LT_SLASH_DOT = 4,
  sym_component_name = 5,
  sym_text = 6,
  sym_comment = 7,
  anon_sym_LT = 8,
  anon_sym_area = 9,
  anon_sym_base = 10,
  anon_sym_br = 11,
  anon_sym_col = 12,
  anon_sym_embed = 13,
  anon_sym_hr = 14,
  anon_sym_img = 15,
  anon_sym_input = 16,
  anon_sym_link = 17,
  anon_sym_meta = 18,
  anon_sym_param = 19,
  anon_sym_source = 20,
  anon_sym_track = 21,
  anon_sym_wbr = 22,
  anon_sym_LT_SLASH = 23,
  sym_tag_name = 24,
  anon_sym_EQ = 25,
  sym_attribute_name = 26,
  anon_sym_DQUOTE = 27,
  sym_attribute_text = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  sym_interp_string = 31,
  sym_interp_text = 32,
  sym_document = 33,
  sym__node = 34,
  sym_component = 35,
  sym_component_open = 36,
  sym_component_self_closing = 37,
  sym_component_close = 38,
  sym_element = 39,
  sym_full_element = 40,
  sym_void_element = 41,
  sym_self_closing_element = 42,
  sym_start_tag = 43,
  sym_end_tag = 44,
  sym_attribute = 45,
  sym__attribute_value = 46,
  sym_quoted_value = 47,
  sym_interpolation = 48,
  sym__interp_part = 49,
  sym_interp_braces = 50,
  aux_sym_document_repeat1 = 51,
  aux_sym_component_open_repeat1 = 52,
  aux_sym_quoted_value_repeat1 = 53,
  aux_sym_interpolation_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_DOT] = "<.",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH_DOT] = "</.",
  [sym_component_name] = "component_name",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [anon_sym_LT] = "<",
  [anon_sym_area] = "tag_name",
  [anon_sym_base] = "tag_name",
  [anon_sym_br] = "tag_name",
  [anon_sym_col] = "tag_name",
  [anon_sym_embed] = "tag_name",
  [anon_sym_hr] = "tag_name",
  [anon_sym_img] = "tag_name",
  [anon_sym_input] = "tag_name",
  [anon_sym_link] = "tag_name",
  [anon_sym_meta] = "tag_name",
  [anon_sym_param] = "tag_name",
  [anon_sym_source] = "tag_name",
  [anon_sym_track] = "tag_name",
  [anon_sym_wbr] = "tag_name",
  [anon_sym_LT_SLASH] = "</",
  [sym_tag_name] = "tag_name",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_DQUOTE] = "\"",
  [sym_attribute_text] = "attribute_text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_interp_string] = "interp_string",
  [sym_interp_text] = "interp_text",
  [sym_document] = "document",
  [sym__node] = "_node",
  [sym_component] = "component",
  [sym_component_open] = "component_open",
  [sym_component_self_closing] = "component_self_closing",
  [sym_component_close] = "component_close",
  [sym_element] = "element",
  [sym_full_element] = "full_element",
  [sym_void_element] = "void_element",
  [sym_self_closing_element] = "self_closing_element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_attribute] = "attribute",
  [sym__attribute_value] = "_attribute_value",
  [sym_quoted_value] = "quoted_value",
  [sym_interpolation] = "interpolation",
  [sym__interp_part] = "_interp_part",
  [sym_interp_braces] = "interp_braces",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_component_open_repeat1] = "component_open_repeat1",
  [aux_sym_quoted_value_repeat1] = "quoted_value_repeat1",
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_DOT] = anon_sym_LT_DOT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH_DOT] = anon_sym_LT_SLASH_DOT,
  [sym_component_name] = sym_component_name,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_area] = sym_tag_name,
  [anon_sym_base] = sym_tag_name,
  [anon_sym_br] = sym_tag_name,
  [anon_sym_col] = sym_tag_name,
  [anon_sym_embed] = sym_tag_name,
  [anon_sym_hr] = sym_tag_name,
  [anon_sym_img] = sym_tag_name,
  [anon_sym_input] = sym_tag_name,
  [anon_sym_link] = sym_tag_name,
  [anon_sym_meta] = sym_tag_name,
  [anon_sym_param] = sym_tag_name,
  [anon_sym_source] = sym_tag_name,
  [anon_sym_track] = sym_tag_name,
  [anon_sym_wbr] = sym_tag_name,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_attribute_text] = sym_attribute_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_interp_string] = sym_interp_string,
  [sym_interp_text] = sym_interp_text,
  [sym_document] = sym_document,
  [sym__node] = sym__node,
  [sym_component] = sym_component,
  [sym_component_open] = sym_component_open,
  [sym_component_self_closing] = sym_component_self_closing,
  [sym_component_close] = sym_component_close,
  [sym_element] = sym_element,
  [sym_full_element] = sym_full_element,
  [sym_void_element] = sym_void_element,
  [sym_self_closing_element] = sym_self_closing_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_attribute] = sym_attribute,
  [sym__attribute_value] = sym__attribute_value,
  [sym_quoted_value] = sym_quoted_value,
  [sym_interpolation] = sym_interpolation,
  [sym__interp_part] = sym__interp_part,
  [sym_interp_braces] = sym_interp_braces,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_component_open_repeat1] = aux_sym_component_open_repeat1,
  [aux_sym_quoted_value_repeat1] = aux_sym_quoted_value_repeat1,
  [aux_sym_interpolation_repeat1] = aux_sym_interpolation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_area] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_br] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_col] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_embed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_img] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_track] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wbr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_interp_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interp_text] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_component_open] = {
    .visible = true,
    .named = true,
  },
  [sym_component_self_closing] = {
    .visible = true,
    .named = true,
  },
  [sym_component_close] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_full_element] = {
    .visible = true,
    .named = true,
  },
  [sym_void_element] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_value] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__interp_part] = {
    .visible = false,
    .named = true,
  },
  [sym_interp_braces] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [29] = 26,
  [30] = 30,
  [31] = 25,
  [32] = 25,
  [33] = 26,
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
  [54] = 20,
  [55] = 55,
  [56] = 10,
  [57] = 10,
  [58] = 20,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static TSCharacterRange sym_attribute_name_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'#', '&'}, {'(', '.'}, {'0', '<'}, {'?', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '"', 89,
        '/', 25,
        '<', 28,
        '=', 87,
        '>', 21,
        'a', 77,
        'b', 47,
        'c', 72,
        'e', 70,
        'h', 75,
        'i', 68,
        'l', 64,
        'm', 58,
        'p', 52,
        's', 73,
        't', 78,
        'w', 54,
        '{', 92,
        '}', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 89,
        '>', 21,
        'a', 77,
        'b', 47,
        'c', 72,
        'e', 70,
        'h', 75,
        'i', 68,
        'l', 64,
        'm', 58,
        'p', 52,
        's', 73,
        't', 78,
        'w', 54,
        '{', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '{') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '{') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '{') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(27);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 15:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '{') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_area);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_br);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_col);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_embed);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_hr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_img);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_track);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_wbr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_attribute_name);
      if ((!eof && set_contains(sym_attribute_name_character_set_1, 9, lookahead))) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_attribute_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_interp_string);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_interp_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_interp_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(96);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_DOT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH_DOT] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_area] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_br] = ACTIONS(1),
    [anon_sym_col] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_hr] = ACTIONS(1),
    [anon_sym_img] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_track] = ACTIONS(1),
    [anon_sym_wbr] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(60),
    [sym__node] = STATE(7),
    [sym_component] = STATE(7),
    [sym_component_open] = STATE(4),
    [sym_component_self_closing] = STATE(15),
    [sym_element] = STATE(7),
    [sym_full_element] = STATE(12),
    [sym_void_element] = STATE(12),
    [sym_self_closing_element] = STATE(12),
    [sym_start_tag] = STATE(5),
    [sym_interpolation] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_DOT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      anon_sym_LT_DOT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(24), 1,
      anon_sym_LT_SLASH,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_component_open,
    STATE(5), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_component_self_closing,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH_DOT,
    ACTIONS(18), 2,
      sym_text,
      sym_comment,
    STATE(12), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(2), 5,
      sym__node,
      sym_component,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [42] = 11,
    ACTIONS(5), 1,
      anon_sym_LT_DOT,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH_DOT,
    STATE(4), 1,
      sym_component_open,
    STATE(5), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_component_self_closing,
    STATE(18), 1,
      sym_component_close,
    ACTIONS(31), 2,
      sym_text,
      sym_comment,
    STATE(12), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(2), 5,
      sym__node,
      sym_component,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [83] = 11,
    ACTIONS(5), 1,
      anon_sym_LT_DOT,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH_DOT,
    STATE(4), 1,
      sym_component_open,
    STATE(5), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_component_close,
    STATE(15), 1,
      sym_component_self_closing,
    ACTIONS(33), 2,
      sym_text,
      sym_comment,
    STATE(12), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(3), 5,
      sym__node,
      sym_component,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [124] = 11,
    ACTIONS(5), 1,
      anon_sym_LT_DOT,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_component_open,
    STATE(5), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_end_tag,
    STATE(15), 1,
      sym_component_self_closing,
    ACTIONS(35), 2,
      sym_text,
      sym_comment,
    STATE(12), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(6), 5,
      sym__node,
      sym_component,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [165] = 11,
    ACTIONS(5), 1,
      anon_sym_LT_DOT,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_component_open,
    STATE(5), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_component_self_closing,
    STATE(19), 1,
      sym_end_tag,
    ACTIONS(31), 2,
      sym_text,
      sym_comment,
    STATE(12), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(2), 5,
      sym__node,
      sym_component,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [206] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_DOT,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_component_open,
    STATE(5), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_component_self_closing,
    ACTIONS(31), 2,
      sym_text,
      sym_comment,
    STATE(12), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(2), 5,
      sym__node,
      sym_component,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [244] = 2,
    ACTIONS(43), 1,
      sym_tag_name,
    ACTIONS(41), 14,
      anon_sym_area,
      anon_sym_base,
      anon_sym_br,
      anon_sym_col,
      anon_sym_embed,
      anon_sym_hr,
      anon_sym_img,
      anon_sym_input,
      anon_sym_link,
      anon_sym_meta,
      anon_sym_param,
      anon_sym_source,
      anon_sym_track,
      anon_sym_wbr,
  [264] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [277] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [290] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [303] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [316] = 2,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [329] = 2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [342] = 2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [355] = 2,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [368] = 2,
    ACTIONS(79), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [381] = 2,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [394] = 2,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [407] = 2,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [420] = 2,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [433] = 2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [446] = 2,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [459] = 2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_LT_SLASH,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [472] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      sym_interp_string,
    ACTIONS(115), 1,
      sym_interp_text,
    STATE(26), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [490] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym_interp_string,
    ACTIONS(121), 1,
      sym_interp_text,
    STATE(28), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [508] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_interp_string,
    ACTIONS(121), 1,
      sym_interp_text,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(28), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [526] = 5,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      sym_interp_string,
    ACTIONS(133), 1,
      sym_interp_text,
    STATE(28), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [544] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_interp_string,
    ACTIONS(121), 1,
      sym_interp_text,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(28), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [562] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_interp_string,
    ACTIONS(142), 1,
      sym_interp_text,
    STATE(27), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [580] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      sym_interp_string,
    ACTIONS(148), 1,
      sym_interp_text,
    STATE(29), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [598] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      sym_interp_string,
    ACTIONS(154), 1,
      sym_interp_text,
    STATE(33), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [616] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_interp_string,
    ACTIONS(121), 1,
      sym_interp_text,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(28), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [634] = 2,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(158), 5,
      anon_sym_LT_DOT,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [645] = 2,
    ACTIONS(164), 1,
      anon_sym_LT,
    ACTIONS(162), 5,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [656] = 2,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(166), 5,
      anon_sym_LT_DOT,
      anon_sym_LT_SLASH_DOT,
      sym_text,
      sym_comment,
      anon_sym_LBRACE,
  [667] = 2,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(170), 5,
      anon_sym_LT_DOT,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [678] = 4,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      sym_attribute_text,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(38), 2,
      sym_interpolation,
      aux_sym_quoted_value_repeat1,
  [692] = 4,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_attribute_text,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(47), 2,
      sym_interpolation,
      aux_sym_quoted_value_repeat1,
  [706] = 4,
    ACTIONS(188), 1,
      anon_sym_GT,
    ACTIONS(190), 1,
      anon_sym_SLASH_GT,
    ACTIONS(192), 1,
      sym_attribute_name,
    STATE(44), 2,
      sym_attribute,
      aux_sym_component_open_repeat1,
  [720] = 3,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(55), 3,
      sym__attribute_value,
      sym_quoted_value,
      sym_interpolation,
  [732] = 4,
    ACTIONS(192), 1,
      sym_attribute_name,
    ACTIONS(198), 1,
      anon_sym_GT,
    ACTIONS(200), 1,
      anon_sym_SLASH_GT,
    STATE(44), 2,
      sym_attribute,
      aux_sym_component_open_repeat1,
  [746] = 4,
    ACTIONS(192), 1,
      sym_attribute_name,
    ACTIONS(202), 1,
      anon_sym_GT,
    ACTIONS(204), 1,
      anon_sym_SLASH_GT,
    STATE(40), 2,
      sym_attribute,
      aux_sym_component_open_repeat1,
  [760] = 3,
    ACTIONS(208), 1,
      sym_attribute_name,
    ACTIONS(206), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(44), 2,
      sym_attribute,
      aux_sym_component_open_repeat1,
  [772] = 3,
    ACTIONS(192), 1,
      sym_attribute_name,
    ACTIONS(211), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(44), 2,
      sym_attribute,
      aux_sym_component_open_repeat1,
  [784] = 3,
    ACTIONS(192), 1,
      sym_attribute_name,
    ACTIONS(213), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(45), 2,
      sym_attribute,
      aux_sym_component_open_repeat1,
  [796] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_attribute_text,
    STATE(38), 2,
      sym_interpolation,
      aux_sym_quoted_value_repeat1,
  [810] = 4,
    ACTIONS(192), 1,
      sym_attribute_name,
    ACTIONS(219), 1,
      anon_sym_GT,
    ACTIONS(221), 1,
      anon_sym_SLASH_GT,
    STATE(42), 2,
      sym_attribute,
      aux_sym_component_open_repeat1,
  [824] = 2,
    ACTIONS(225), 1,
      sym_interp_text,
    ACTIONS(223), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_interp_string,
  [833] = 2,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(227), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [842] = 2,
    ACTIONS(233), 1,
      sym_interp_text,
    ACTIONS(231), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_interp_string,
  [851] = 1,
    ACTIONS(235), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [857] = 1,
    ACTIONS(237), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [863] = 1,
    ACTIONS(89), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [869] = 1,
    ACTIONS(239), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [875] = 1,
    ACTIONS(49), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [881] = 2,
    ACTIONS(49), 1,
      sym_attribute_text,
    ACTIONS(51), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [889] = 2,
    ACTIONS(89), 1,
      sym_attribute_text,
    ACTIONS(91), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [897] = 1,
    ACTIONS(241), 1,
      sym_tag_name,
  [901] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [905] = 1,
    ACTIONS(245), 1,
      anon_sym_GT,
  [909] = 1,
    ACTIONS(247), 1,
      sym_component_name,
  [913] = 1,
    ACTIONS(249), 1,
      sym_component_name,
  [917] = 1,
    ACTIONS(251), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 303,
  [SMALL_STATE(13)] = 316,
  [SMALL_STATE(14)] = 329,
  [SMALL_STATE(15)] = 342,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 368,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 394,
  [SMALL_STATE(20)] = 407,
  [SMALL_STATE(21)] = 420,
  [SMALL_STATE(22)] = 433,
  [SMALL_STATE(23)] = 446,
  [SMALL_STATE(24)] = 459,
  [SMALL_STATE(25)] = 472,
  [SMALL_STATE(26)] = 490,
  [SMALL_STATE(27)] = 508,
  [SMALL_STATE(28)] = 526,
  [SMALL_STATE(29)] = 544,
  [SMALL_STATE(30)] = 562,
  [SMALL_STATE(31)] = 580,
  [SMALL_STATE(32)] = 598,
  [SMALL_STATE(33)] = 616,
  [SMALL_STATE(34)] = 634,
  [SMALL_STATE(35)] = 645,
  [SMALL_STATE(36)] = 656,
  [SMALL_STATE(37)] = 667,
  [SMALL_STATE(38)] = 678,
  [SMALL_STATE(39)] = 692,
  [SMALL_STATE(40)] = 706,
  [SMALL_STATE(41)] = 720,
  [SMALL_STATE(42)] = 732,
  [SMALL_STATE(43)] = 746,
  [SMALL_STATE(44)] = 760,
  [SMALL_STATE(45)] = 772,
  [SMALL_STATE(46)] = 784,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 810,
  [SMALL_STATE(49)] = 824,
  [SMALL_STATE(50)] = 833,
  [SMALL_STATE(51)] = 842,
  [SMALL_STATE(52)] = 851,
  [SMALL_STATE(53)] = 857,
  [SMALL_STATE(54)] = 863,
  [SMALL_STATE(55)] = 869,
  [SMALL_STATE(56)] = 875,
  [SMALL_STATE(57)] = 881,
  [SMALL_STATE(58)] = 889,
  [SMALL_STATE(59)] = 897,
  [SMALL_STATE(60)] = 901,
  [SMALL_STATE(61)] = 905,
  [SMALL_STATE(62)] = 909,
  [SMALL_STATE(63)] = 913,
  [SMALL_STATE(64)] = 917,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_element, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_element, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_self_closing, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_self_closing, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_element, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_element, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_self_closing, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_self_closing, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_close, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_close, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_open, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_open, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_open, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_open, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_value_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_value_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_open_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_open_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interp_braces, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_braces, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interp_braces, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_braces, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bml(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
