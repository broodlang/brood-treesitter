#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_text = 1,
  sym_comment = 2,
  anon_sym_LT = 3,
  anon_sym_area = 4,
  anon_sym_base = 5,
  anon_sym_br = 6,
  anon_sym_col = 7,
  anon_sym_embed = 8,
  anon_sym_hr = 9,
  anon_sym_img = 10,
  anon_sym_input = 11,
  anon_sym_link = 12,
  anon_sym_meta = 13,
  anon_sym_param = 14,
  anon_sym_source = 15,
  anon_sym_track = 16,
  anon_sym_wbr = 17,
  anon_sym_GT = 18,
  anon_sym_SLASH_GT = 19,
  anon_sym_LT_SLASH = 20,
  sym_tag_name = 21,
  anon_sym_EQ = 22,
  sym_attribute_name = 23,
  anon_sym_DQUOTE = 24,
  sym_attribute_text = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  sym_interp_string = 28,
  sym_interp_text = 29,
  sym_document = 30,
  sym__node = 31,
  sym_element = 32,
  sym_full_element = 33,
  sym_void_element = 34,
  sym_self_closing_element = 35,
  sym_start_tag = 36,
  sym_end_tag = 37,
  sym_attribute = 38,
  sym__attribute_value = 39,
  sym_quoted_value = 40,
  sym_interpolation = 41,
  sym__interp_part = 42,
  sym_interp_braces = 43,
  aux_sym_document_repeat1 = 44,
  aux_sym_void_element_repeat1 = 45,
  aux_sym_quoted_value_repeat1 = 46,
  aux_sym_interpolation_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_GT] = ">",
  [anon_sym_SLASH_GT] = "/>",
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
  [aux_sym_void_element_repeat1] = "void_element_repeat1",
  [aux_sym_quoted_value_repeat1] = "quoted_value_repeat1",
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
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
  [aux_sym_void_element_repeat1] = aux_sym_void_element_repeat1,
  [aux_sym_quoted_value_repeat1] = aux_sym_quoted_value_repeat1,
  [aux_sym_interpolation_repeat1] = aux_sym_interpolation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
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
  [aux_sym_void_element_repeat1] = {
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
  [11] = 8,
  [12] = 8,
  [13] = 13,
  [14] = 10,
  [15] = 10,
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
  [43] = 16,
  [44] = 24,
  [45] = 16,
  [46] = 24,
  [47] = 47,
  [48] = 48,
  [49] = 49,
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
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '"', 79,
        '/', 16,
        '<', 19,
        '=', 77,
        '>', 34,
        'a', 67,
        'b', 37,
        'c', 62,
        'e', 60,
        'h', 65,
        'i', 58,
        'l', 54,
        'm', 48,
        'p', 42,
        's', 63,
        't', 68,
        'w', 44,
        '{', 82,
        '}', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 79,
        '>', 34,
        'a', 67,
        'b', 37,
        'c', 62,
        'e', 60,
        'h', 65,
        'i', 58,
        'l', 54,
        'm', 48,
        'p', 42,
        's', 63,
        't', 68,
        'w', 44,
        '{', 82,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '{') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(11);
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
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(18);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 12:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '{') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_area);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_br);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_col);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_embed);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_hr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_img);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_track);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_wbr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_attribute_name);
      if ((!eof && set_contains(sym_attribute_name_character_set_1, 9, lookahead))) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_attribute_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_interp_string);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_interp_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_interp_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(48),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_full_element] = STATE(18),
    [sym_void_element] = STATE(18),
    [sym_self_closing_element] = STATE(18),
    [sym_start_tag] = STATE(3),
    [sym_interpolation] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(13), 1,
      sym_tag_name,
    ACTIONS(11), 14,
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
  [20] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_end_tag,
    ACTIONS(15), 2,
      sym_text,
      sym_comment,
    STATE(18), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(4), 4,
      sym__node,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [51] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_start_tag,
    STATE(22), 1,
      sym_end_tag,
    ACTIONS(19), 2,
      sym_text,
      sym_comment,
    STATE(18), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(5), 4,
      sym__node,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [82] = 7,
    ACTIONS(26), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_start_tag,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(23), 2,
      sym_text,
      sym_comment,
    STATE(18), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(5), 4,
      sym__node,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [111] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_start_tag,
    ACTIONS(19), 2,
      sym_text,
      sym_comment,
    STATE(18), 3,
      sym_full_element,
      sym_void_element,
      sym_self_closing_element,
    STATE(5), 4,
      sym__node,
      sym_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [139] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      sym_interp_string,
    ACTIONS(40), 1,
      sym_interp_text,
    STATE(13), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [157] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      sym_interp_string,
    ACTIONS(40), 1,
      sym_interp_text,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [175] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      sym_interp_string,
    ACTIONS(48), 1,
      sym_interp_text,
    STATE(7), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [193] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_interp_string,
    ACTIONS(54), 1,
      sym_interp_text,
    STATE(11), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [211] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      sym_interp_string,
    ACTIONS(40), 1,
      sym_interp_text,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [229] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      sym_interp_string,
    ACTIONS(40), 1,
      sym_interp_text,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [247] = 5,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym_interp_string,
    ACTIONS(68), 1,
      sym_interp_text,
    STATE(13), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [265] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_interp_string,
    ACTIONS(75), 1,
      sym_interp_text,
    STATE(8), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [283] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym_interp_string,
    ACTIONS(81), 1,
      sym_interp_text,
    STATE(12), 3,
      sym__interp_part,
      sym_interp_braces,
      aux_sym_interpolation_repeat1,
  [301] = 2,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [312] = 2,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [323] = 2,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [334] = 2,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [345] = 2,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [356] = 2,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [367] = 2,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [378] = 2,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [389] = 2,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [400] = 2,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [411] = 3,
    ACTIONS(125), 1,
      sym_attribute_name,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(36), 2,
      sym_attribute,
      aux_sym_void_element_repeat1,
  [423] = 4,
    ACTIONS(125), 1,
      sym_attribute_name,
    ACTIONS(127), 1,
      anon_sym_GT,
    ACTIONS(129), 1,
      anon_sym_SLASH_GT,
    STATE(30), 2,
      sym_attribute,
      aux_sym_void_element_repeat1,
  [437] = 2,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(131), 4,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [447] = 3,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(40), 3,
      sym__attribute_value,
      sym_quoted_value,
      sym_interpolation,
  [459] = 4,
    ACTIONS(125), 1,
      sym_attribute_name,
    ACTIONS(139), 1,
      anon_sym_GT,
    ACTIONS(141), 1,
      anon_sym_SLASH_GT,
    STATE(31), 2,
      sym_attribute,
      aux_sym_void_element_repeat1,
  [473] = 3,
    ACTIONS(145), 1,
      sym_attribute_name,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 2,
      sym_attribute,
      aux_sym_void_element_repeat1,
  [485] = 2,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(148), 4,
      sym_text,
      sym_comment,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [495] = 4,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      sym_attribute_text,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(35), 2,
      sym_interpolation,
      aux_sym_quoted_value_repeat1,
  [509] = 4,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      sym_attribute_text,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(34), 2,
      sym_interpolation,
      aux_sym_quoted_value_repeat1,
  [523] = 4,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      sym_attribute_text,
    STATE(34), 2,
      sym_interpolation,
      aux_sym_quoted_value_repeat1,
  [537] = 3,
    ACTIONS(125), 1,
      sym_attribute_name,
    ACTIONS(170), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 2,
      sym_attribute,
      aux_sym_void_element_repeat1,
  [549] = 2,
    ACTIONS(174), 1,
      sym_interp_text,
    ACTIONS(172), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_interp_string,
  [558] = 2,
    ACTIONS(178), 1,
      sym_interp_text,
    ACTIONS(176), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_interp_string,
  [567] = 2,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(180), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [576] = 1,
    ACTIONS(184), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [582] = 1,
    ACTIONS(186), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [588] = 1,
    ACTIONS(188), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [594] = 1,
    ACTIONS(83), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [600] = 1,
    ACTIONS(115), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [606] = 2,
    ACTIONS(83), 1,
      sym_attribute_text,
    ACTIONS(85), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [614] = 2,
    ACTIONS(115), 1,
      sym_attribute_text,
    ACTIONS(117), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [622] = 1,
    ACTIONS(190), 1,
      sym_tag_name,
  [626] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [630] = 1,
    ACTIONS(194), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 247,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 345,
  [SMALL_STATE(21)] = 356,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 378,
  [SMALL_STATE(24)] = 389,
  [SMALL_STATE(25)] = 400,
  [SMALL_STATE(26)] = 411,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 437,
  [SMALL_STATE(29)] = 447,
  [SMALL_STATE(30)] = 459,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 485,
  [SMALL_STATE(33)] = 495,
  [SMALL_STATE(34)] = 509,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 537,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 558,
  [SMALL_STATE(39)] = 567,
  [SMALL_STATE(40)] = 576,
  [SMALL_STATE(41)] = 582,
  [SMALL_STATE(42)] = 588,
  [SMALL_STATE(43)] = 594,
  [SMALL_STATE(44)] = 600,
  [SMALL_STATE(45)] = 606,
  [SMALL_STATE(46)] = 614,
  [SMALL_STATE(47)] = 622,
  [SMALL_STATE(48)] = 626,
  [SMALL_STATE(49)] = 630,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_element, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_element, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_element, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_element, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_void_element_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_void_element_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_value_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_value_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interp_braces, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_braces, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interp_braces, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_braces, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
