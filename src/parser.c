#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_pn_prefix = 1,
  sym_comment = 2,
  anon_sym_DOT = 3,
  anon_sym_ATprefix = 4,
  anon_sym_ATbase = 5,
  aux_sym_sparql_base_token1 = 6,
  aux_sym_sparql_prefix_token1 = 7,
  anon_sym_SEMI = 8,
  anon_sym_COMMA = 9,
  anon_sym_a = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_LT = 15,
  aux_sym_iri_reference_token1 = 16,
  anon_sym_GT = 17,
  sym_integer = 18,
  sym_decimal = 19,
  sym_double = 20,
  anon_sym_DQUOTE = 21,
  aux_sym__string_literal_quote_token1 = 22,
  aux_sym__string_literal_quote_token2 = 23,
  anon_sym_SQUOTE = 24,
  aux_sym__string_literal_single_quote_token1 = 25,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 26,
  anon_sym_SQUOTE_SQUOTE = 27,
  aux_sym__string_literal_long_single_quote_token1 = 28,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 29,
  anon_sym_DQUOTE_DQUOTE = 30,
  aux_sym__string_literal_long_quote_token1 = 31,
  anon_sym_CARET_CARET = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  anon_sym_COLON = 35,
  anon_sym__COLON = 36,
  aux_sym_blank_node_label_token1 = 37,
  sym_lang_tag = 38,
  sym_echar = 39,
  sym_anon = 40,
  sym_pn_local = 41,
  anon_sym_LT_LT = 42,
  anon_sym_GT_GT = 43,
  anon_sym_LBRACE_PIPE = 44,
  anon_sym_PIPE_RBRACE = 45,
  sym_turtle_doc = 46,
  sym_statement = 47,
  sym_directive = 48,
  sym_prefix_id = 49,
  sym_base = 50,
  sym_sparql_base = 51,
  sym_sparql_prefix = 52,
  sym_triples = 53,
  sym_property_list = 54,
  sym_property = 55,
  sym_object_list = 56,
  sym_predicate = 57,
  sym_subject = 58,
  sym__object = 59,
  sym__literal = 60,
  sym_blank_node_property_list = 61,
  sym_collection = 62,
  sym_object_collection = 63,
  sym__numeric_literal = 64,
  sym_string = 65,
  sym_iri_reference = 66,
  sym__string_literal_quote = 67,
  sym__string_literal_single_quote = 68,
  sym__string_literal_long_single_quote = 69,
  sym__string_literal_long_quote = 70,
  sym_rdf_literal = 71,
  sym_boolean_literal = 72,
  sym__iri = 73,
  sym_prefixed_name = 74,
  sym__blank_node = 75,
  sym_namespace = 76,
  sym_blank_node_label = 77,
  sym_quoted_triple = 78,
  sym_qt_subject = 79,
  sym_qt_object = 80,
  sym_annotation = 81,
  aux_sym_turtle_doc_repeat1 = 82,
  aux_sym_property_list_repeat1 = 83,
  aux_sym_object_list_repeat1 = 84,
  aux_sym_object_collection_repeat1 = 85,
  aux_sym__string_literal_quote_repeat1 = 86,
  aux_sym__string_literal_single_quote_repeat1 = 87,
  aux_sym__string_literal_long_single_quote_repeat1 = 88,
  aux_sym__string_literal_long_quote_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_pn_prefix] = "pn_prefix",
  [sym_comment] = "comment",
  [anon_sym_DOT] = ".",
  [anon_sym_ATprefix] = "@prefix",
  [anon_sym_ATbase] = "@base",
  [aux_sym_sparql_base_token1] = "BASE",
  [aux_sym_sparql_prefix_token1] = "PREFIX",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_a] = "a",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT] = "<",
  [aux_sym_iri_reference_token1] = "iri_reference_token1",
  [anon_sym_GT] = ">",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [sym_double] = "double",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_literal_quote_token1] = "_string_literal_quote_token1",
  [aux_sym__string_literal_quote_token2] = "_string_literal_quote_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_literal_single_quote_token1] = "_string_literal_single_quote_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [aux_sym__string_literal_long_single_quote_token1] = "_string_literal_long_single_quote_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [aux_sym__string_literal_long_quote_token1] = "_string_literal_long_quote_token1",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON] = ":",
  [anon_sym__COLON] = "_:",
  [aux_sym_blank_node_label_token1] = "blank_node_label_token1",
  [sym_lang_tag] = "lang_tag",
  [sym_echar] = "echar",
  [sym_anon] = "anon",
  [sym_pn_local] = "pn_local",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LBRACE_PIPE] = "{|",
  [anon_sym_PIPE_RBRACE] = "|}",
  [sym_turtle_doc] = "turtle_doc",
  [sym_statement] = "statement",
  [sym_directive] = "directive",
  [sym_prefix_id] = "prefix_id",
  [sym_base] = "base",
  [sym_sparql_base] = "sparql_base",
  [sym_sparql_prefix] = "sparql_prefix",
  [sym_triples] = "triples",
  [sym_property_list] = "property_list",
  [sym_property] = "property",
  [sym_object_list] = "object_list",
  [sym_predicate] = "predicate",
  [sym_subject] = "subject",
  [sym__object] = "_object",
  [sym__literal] = "_literal",
  [sym_blank_node_property_list] = "blank_node_property_list",
  [sym_collection] = "collection",
  [sym_object_collection] = "object_collection",
  [sym__numeric_literal] = "_numeric_literal",
  [sym_string] = "string",
  [sym_iri_reference] = "iri_reference",
  [sym__string_literal_quote] = "_string_literal_quote",
  [sym__string_literal_single_quote] = "_string_literal_single_quote",
  [sym__string_literal_long_single_quote] = "_string_literal_long_single_quote",
  [sym__string_literal_long_quote] = "_string_literal_long_quote",
  [sym_rdf_literal] = "rdf_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym__iri] = "_iri",
  [sym_prefixed_name] = "prefixed_name",
  [sym__blank_node] = "_blank_node",
  [sym_namespace] = "namespace",
  [sym_blank_node_label] = "blank_node_label",
  [sym_quoted_triple] = "quoted_triple",
  [sym_qt_subject] = "qt_subject",
  [sym_qt_object] = "qt_object",
  [sym_annotation] = "annotation",
  [aux_sym_turtle_doc_repeat1] = "turtle_doc_repeat1",
  [aux_sym_property_list_repeat1] = "property_list_repeat1",
  [aux_sym_object_list_repeat1] = "object_list_repeat1",
  [aux_sym_object_collection_repeat1] = "object_collection_repeat1",
  [aux_sym__string_literal_quote_repeat1] = "_string_literal_quote_repeat1",
  [aux_sym__string_literal_single_quote_repeat1] = "_string_literal_single_quote_repeat1",
  [aux_sym__string_literal_long_single_quote_repeat1] = "_string_literal_long_single_quote_repeat1",
  [aux_sym__string_literal_long_quote_repeat1] = "_string_literal_long_quote_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_pn_prefix] = sym_pn_prefix,
  [sym_comment] = sym_comment,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_ATprefix] = anon_sym_ATprefix,
  [anon_sym_ATbase] = anon_sym_ATbase,
  [aux_sym_sparql_base_token1] = aux_sym_sparql_base_token1,
  [aux_sym_sparql_prefix_token1] = aux_sym_sparql_prefix_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_iri_reference_token1] = aux_sym_iri_reference_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [sym_double] = sym_double,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_literal_quote_token1] = aux_sym__string_literal_quote_token1,
  [aux_sym__string_literal_quote_token2] = aux_sym__string_literal_quote_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_literal_single_quote_token1] = aux_sym__string_literal_single_quote_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym__string_literal_long_single_quote_token1] = aux_sym__string_literal_long_single_quote_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [aux_sym__string_literal_long_quote_token1] = aux_sym__string_literal_long_quote_token1,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym__COLON] = anon_sym__COLON,
  [aux_sym_blank_node_label_token1] = aux_sym_blank_node_label_token1,
  [sym_lang_tag] = sym_lang_tag,
  [sym_echar] = sym_echar,
  [sym_anon] = sym_anon,
  [sym_pn_local] = sym_pn_local,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LBRACE_PIPE] = anon_sym_LBRACE_PIPE,
  [anon_sym_PIPE_RBRACE] = anon_sym_PIPE_RBRACE,
  [sym_turtle_doc] = sym_turtle_doc,
  [sym_statement] = sym_statement,
  [sym_directive] = sym_directive,
  [sym_prefix_id] = sym_prefix_id,
  [sym_base] = sym_base,
  [sym_sparql_base] = sym_sparql_base,
  [sym_sparql_prefix] = sym_sparql_prefix,
  [sym_triples] = sym_triples,
  [sym_property_list] = sym_property_list,
  [sym_property] = sym_property,
  [sym_object_list] = sym_object_list,
  [sym_predicate] = sym_predicate,
  [sym_subject] = sym_subject,
  [sym__object] = sym__object,
  [sym__literal] = sym__literal,
  [sym_blank_node_property_list] = sym_blank_node_property_list,
  [sym_collection] = sym_collection,
  [sym_object_collection] = sym_object_collection,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym_string] = sym_string,
  [sym_iri_reference] = sym_iri_reference,
  [sym__string_literal_quote] = sym__string_literal_quote,
  [sym__string_literal_single_quote] = sym__string_literal_single_quote,
  [sym__string_literal_long_single_quote] = sym__string_literal_long_single_quote,
  [sym__string_literal_long_quote] = sym__string_literal_long_quote,
  [sym_rdf_literal] = sym_rdf_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__iri] = sym__iri,
  [sym_prefixed_name] = sym_prefixed_name,
  [sym__blank_node] = sym__blank_node,
  [sym_namespace] = sym_namespace,
  [sym_blank_node_label] = sym_blank_node_label,
  [sym_quoted_triple] = sym_quoted_triple,
  [sym_qt_subject] = sym_qt_subject,
  [sym_qt_object] = sym_qt_object,
  [sym_annotation] = sym_annotation,
  [aux_sym_turtle_doc_repeat1] = aux_sym_turtle_doc_repeat1,
  [aux_sym_property_list_repeat1] = aux_sym_property_list_repeat1,
  [aux_sym_object_list_repeat1] = aux_sym_object_list_repeat1,
  [aux_sym_object_collection_repeat1] = aux_sym_object_collection_repeat1,
  [aux_sym__string_literal_quote_repeat1] = aux_sym__string_literal_quote_repeat1,
  [aux_sym__string_literal_single_quote_repeat1] = aux_sym__string_literal_single_quote_repeat1,
  [aux_sym__string_literal_long_single_quote_repeat1] = aux_sym__string_literal_long_single_quote_repeat1,
  [aux_sym__string_literal_long_quote_repeat1] = aux_sym__string_literal_long_quote_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_pn_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATbase] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sparql_base_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sparql_prefix_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_iri_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_quote_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_single_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_long_single_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_long_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_blank_node_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_lang_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_echar] = {
    .visible = true,
    .named = true,
  },
  [sym_anon] = {
    .visible = true,
    .named = true,
  },
  [sym_pn_local] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_turtle_doc] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_id] = {
    .visible = true,
    .named = true,
  },
  [sym_base] = {
    .visible = true,
    .named = true,
  },
  [sym_sparql_base] = {
    .visible = true,
    .named = true,
  },
  [sym_sparql_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_triples] = {
    .visible = true,
    .named = true,
  },
  [sym_property_list] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_object_list] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym__object] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_blank_node_property_list] = {
    .visible = true,
    .named = true,
  },
  [sym_collection] = {
    .visible = true,
    .named = true,
  },
  [sym_object_collection] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_iri_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_single_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_long_single_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_long_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_rdf_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__iri] = {
    .visible = false,
    .named = true,
  },
  [sym_prefixed_name] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_node] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_node_label] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_triple] = {
    .visible = true,
    .named = true,
  },
  [sym_qt_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_qt_object] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_turtle_doc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_collection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_single_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_long_single_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_long_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_datatype = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_datatype] = "datatype",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
  [1] =
    {field_datatype, 1},
    {field_datatype, 2},
    {field_value, 0},
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
  [48] = 29,
  [49] = 49,
  [50] = 31,
  [51] = 32,
  [52] = 30,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
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
  [76] = 32,
  [77] = 77,
  [78] = 78,
  [79] = 30,
  [80] = 31,
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
  [108] = 103,
  [109] = 103,
};

static inline bool aux_sym_blank_node_label_token1_character_set_1(int32_t c) {
  return (c < 895
    ? (c < 192
      ? (c < '_'
        ? (c < 'A'
          ? (c >= '0' && c <= '9')
          : c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))
      : (c <= 214 || (c < 248
        ? (c >= 216 && c <= 246)
        : (c <= 767 || (c >= 880 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c >= 8204 && c <= 8205)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_prefix_character_set_1(int32_t c) {
  return (c < 8204
    ? (c < 216
      ? (c < 'a'
        ? (c >= 'A' && c <= 'Z')
        : (c <= 'z' || (c >= 192 && c <= 214)))
      : (c <= 246 || (c < 880
        ? (c >= 248 && c <= 767)
        : (c <= 893 || (c >= 895 && c <= 8191)))))
    : (c <= 8205 || (c < 63744
      ? (c < 11264
        ? (c >= 8304 && c <= 8591)
        : (c <= 12271 || (c >= 12289 && c <= 55295)))
      : (c <= 64975 || (c < 65536
        ? (c >= 65008 && c <= 65533)
        : c <= 983039)))));
}

static inline bool sym_pn_local_character_set_1(int32_t c) {
  return (c < 895
    ? (c < 192
      ? (c < '_'
        ? (c < 'A'
          ? (c >= '0' && c <= ':')
          : c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))
      : (c <= 214 || (c < 248
        ? (c >= 216 && c <= 246)
        : (c <= 767 || (c >= 880 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c >= 8204 && c <= 8205)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_2(int32_t c) {
  return (c < 248
    ? (c < 'a'
      ? (c < 'A'
        ? (c < ':'
          ? c == '-'
          : c <= ':')
        : (c <= 'D' || (c < '_'
          ? (c >= 'F' && c <= 'Z')
          : c <= '_')))
      : (c <= 'd' || (c < 192
        ? (c < 183
          ? (c >= 'f' && c <= 'z')
          : c <= 183)
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8255
        ? (c < 8204
          ? (c >= 895 && c <= 8191)
          : c <= 8205)
        : (c <= 8256 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 65008
        ? (c < 63744
          ? (c >= 12289 && c <= 55295)
          : c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_3(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= '9')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_4(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < '0'
          ? c == '-'
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_5(int32_t c) {
  return (c < 895
    ? (c < 183
      ? (c < '_'
        ? (c < 'A'
          ? c == ':'
          : c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))
      : (c <= 183 || (c < 216
        ? (c >= 192 && c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static inline bool sym_pn_local_character_set_6(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'A'
        ? (c < ':'
          ? c == '-'
          : c <= ':')
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c < 192
          ? c == 183
          : c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c < 8255
          ? (c >= 8204 && c <= 8205)
          : c <= 8256)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
      : (c <= 55295 || (c < 65008
        ? (c >= 63744 && c <= 64975)
        : (c <= 65533 || (c >= 65536 && c <= 983039)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(21);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '_') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(21);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(79);
      if (sym_pn_local_character_set_1(lookahead)) ADVANCE(135);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(37);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == '<') ADVANCE(89);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(78);
      if (aux_sym_blank_node_label_token1_character_set_1(lookahead)) ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_2(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(134);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 24:
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == '^') ADVANCE(118);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == '|') ADVANCE(138);
      END_STATE();
    case 37:
      if (lookahead == '}') ADVANCE(139);
      END_STATE();
    case 38:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == ']') ADVANCE(127);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(135);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 62:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 64:
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(128);
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 65:
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(123);
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(21);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(21);
      if (sym_pn_prefix_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATprefix);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATbase);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == ']') ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(136);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token1);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__string_literal_quote_token2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(20);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__string_literal_single_quote_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__string_literal_single_quote_token1);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__string_literal_long_single_quote_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__string_literal_long_single_quote_token1);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      if (lookahead == '"') ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__string_literal_long_quote_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__string_literal_long_quote_token1);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_blank_node_label_token1);
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(123);
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_lang_tag);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_echar);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_anon);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_pn_prefix);
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(128);
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(19);
      if (sym_pn_local_character_set_5(lookahead)) ADVANCE(135);
      if (lookahead == '\\') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_2(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_2(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_6(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_3(lookahead)) ADVANCE(134);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_pn_local);
      if (lookahead == '%') ADVANCE(48);
      if (sym_pn_local_character_set_4(lookahead)) ADVANCE(135);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACE_PIPE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_sparql_base_token1);
      END_STATE();
    case 17:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 19:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_sparql_prefix_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 67},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 67},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 91},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pn_prefix] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ATprefix] = ACTIONS(1),
    [anon_sym_ATbase] = ACTIONS(1),
    [aux_sym_sparql_base_token1] = ACTIONS(1),
    [aux_sym_sparql_prefix_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__string_literal_quote_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym__COLON] = ACTIONS(1),
    [sym_echar] = ACTIONS(1),
    [sym_anon] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_turtle_doc] = STATE(102),
    [sym_statement] = STATE(8),
    [sym_directive] = STATE(41),
    [sym_prefix_id] = STATE(40),
    [sym_base] = STATE(40),
    [sym_sparql_base] = STATE(40),
    [sym_sparql_prefix] = STATE(40),
    [sym_triples] = STATE(99),
    [sym_subject] = STATE(44),
    [sym_blank_node_property_list] = STATE(43),
    [sym_collection] = STATE(85),
    [sym_iri_reference] = STATE(85),
    [sym__iri] = STATE(85),
    [sym_prefixed_name] = STATE(85),
    [sym__blank_node] = STATE(85),
    [sym_namespace] = STATE(76),
    [sym_blank_node_label] = STATE(85),
    [sym_quoted_triple] = STATE(85),
    [aux_sym_turtle_doc_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_pn_prefix] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_ATprefix] = ACTIONS(9),
    [anon_sym_ATbase] = ACTIONS(11),
    [aux_sym_sparql_base_token1] = ACTIONS(13),
    [aux_sym_sparql_prefix_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym__COLON] = ACTIONS(25),
    [sym_anon] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      sym_pn_prefix,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym_string,
    STATE(32), 1,
      sym_namespace,
    STATE(101), 1,
      sym_object_collection,
    ACTIONS(35), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(37), 2,
      sym_double,
      sym_anon,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(3), 14,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
      aux_sym_object_collection_repeat1,
  [83] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      sym_pn_prefix,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_string,
    STATE(32), 1,
      sym_namespace,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(55), 2,
      sym_double,
      sym_anon,
    STATE(16), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(4), 14,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
      aux_sym_object_collection_repeat1,
  [163] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_pn_prefix,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_COLON,
    ACTIONS(95), 1,
      anon_sym__COLON,
    ACTIONS(98), 1,
      anon_sym_LT_LT,
    STATE(29), 1,
      sym_string,
    STATE(32), 1,
      sym_namespace,
    ACTIONS(71), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(74), 2,
      sym_double,
      sym_anon,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(4), 14,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
      aux_sym_object_collection_repeat1,
  [243] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(101), 1,
      sym_pn_prefix,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym_string,
    STATE(51), 1,
      sym_namespace,
    STATE(83), 1,
      sym_object_list,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(105), 2,
      sym_double,
      sym_anon,
    STATE(16), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(49), 13,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
  [322] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(101), 1,
      sym_pn_prefix,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym_string,
    STATE(51), 1,
      sym_namespace,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(111), 2,
      sym_double,
      sym_anon,
    STATE(16), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(54), 13,
      sym__object,
      sym__literal,
      sym_blank_node_property_list,
      sym_collection,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
  [398] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(101), 1,
      sym_pn_prefix,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym_string,
    STATE(51), 1,
      sym_namespace,
    STATE(95), 1,
      sym_qt_object,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 2,
      sym_integer,
      sym_decimal,
    ACTIONS(115), 2,
      sym_double,
      sym_anon,
    STATE(16), 4,
      sym__string_literal_quote,
      sym__string_literal_single_quote,
      sym__string_literal_long_single_quote,
      sym__string_literal_long_quote,
    STATE(94), 10,
      sym__literal,
      sym__numeric_literal,
      sym_iri_reference,
      sym_rdf_literal,
      sym_boolean_literal,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
  [468] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pn_prefix,
    ACTIONS(9), 1,
      anon_sym_ATprefix,
    ACTIONS(11), 1,
      anon_sym_ATbase,
    ACTIONS(13), 1,
      aux_sym_sparql_base_token1,
    ACTIONS(15), 1,
      aux_sym_sparql_prefix_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(27), 1,
      sym_anon,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_directive,
    STATE(43), 1,
      sym_blank_node_property_list,
    STATE(44), 1,
      sym_subject,
    STATE(76), 1,
      sym_namespace,
    STATE(99), 1,
      sym_triples,
    STATE(9), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(40), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(85), 7,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
  [545] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym_pn_prefix,
    ACTIONS(124), 1,
      anon_sym_ATprefix,
    ACTIONS(127), 1,
      anon_sym_ATbase,
    ACTIONS(130), 1,
      aux_sym_sparql_base_token1,
    ACTIONS(133), 1,
      aux_sym_sparql_prefix_token1,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      anon_sym__COLON,
    ACTIONS(151), 1,
      sym_anon,
    ACTIONS(154), 1,
      anon_sym_LT_LT,
    STATE(41), 1,
      sym_directive,
    STATE(43), 1,
      sym_blank_node_property_list,
    STATE(44), 1,
      sym_subject,
    STATE(76), 1,
      sym_namespace,
    STATE(99), 1,
      sym_triples,
    STATE(9), 2,
      sym_statement,
      aux_sym_turtle_doc_repeat1,
    STATE(40), 4,
      sym_prefix_id,
      sym_base,
      sym_sparql_base,
      sym_sparql_prefix,
    STATE(85), 7,
      sym_collection,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
  [622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 13,
      anon_sym_DOT,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_a,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(157), 18,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(163), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(167), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(171), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(175), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(179), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(183), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(187), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(191), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(195), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_CARET_CARET,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_lang_tag,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 11,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(199), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 11,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(203), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 11,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(207), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(211), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(215), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 11,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(219), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 10,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(223), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 11,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(227), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 11,
      anon_sym_DOT,
      anon_sym_a,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(231), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_CARET_CARET,
    ACTIONS(239), 1,
      sym_lang_tag,
    ACTIONS(233), 9,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
    ACTIONS(235), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
  [1308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
      anon_sym_LT_LT,
    ACTIONS(241), 13,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      sym_double,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
      anon_sym_LT_LT,
    ACTIONS(245), 13,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      sym_double,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
      sym_pn_local,
  [1362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_pn_local,
    ACTIONS(251), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_anon,
      anon_sym_LT_LT,
    ACTIONS(249), 12,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      sym_double,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_pn_prefix,
  [1391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 8,
      anon_sym_LPAREN,
      sym_double,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
    ACTIONS(255), 9,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_integer,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_pn_prefix,
  [1416] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_pn_prefix,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_a,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(5), 1,
      sym_predicate,
    STATE(32), 1,
      sym_namespace,
    STATE(84), 1,
      sym_property,
    STATE(33), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
    ACTIONS(259), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [1452] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym__COLON,
    ACTIONS(29), 1,
      anon_sym_LT_LT,
    ACTIONS(265), 1,
      sym_pn_prefix,
    ACTIONS(267), 1,
      sym_anon,
    STATE(47), 1,
      sym_qt_subject,
    STATE(76), 1,
      sym_namespace,
    STATE(82), 6,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
      sym__blank_node,
      sym_blank_node_label,
      sym_quoted_triple,
  [1488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_pn_prefix,
    ACTIONS(269), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 5,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_pn_prefix,
    ACTIONS(273), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
  [1530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_pn_prefix,
    ACTIONS(277), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
  [1551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_pn_prefix,
    ACTIONS(281), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_pn_prefix,
    ACTIONS(285), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_pn_prefix,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
  [1614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      aux_sym_sparql_base_token1,
      aux_sym_sparql_prefix_token1,
      anon_sym_LBRACK,
      anon_sym_LT,
      sym_pn_prefix,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_ATprefix,
      anon_sym_ATbase,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym__COLON,
      sym_anon,
      anon_sym_LT_LT,
  [1635] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_pn_prefix,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_a,
    ACTIONS(263), 1,
      anon_sym_LT,
    ACTIONS(297), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_predicate,
    STATE(32), 1,
      sym_namespace,
    STATE(68), 1,
      sym_property,
    STATE(107), 1,
      sym_property_list,
    STATE(33), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1671] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_pn_prefix,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_a,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(5), 1,
      sym_predicate,
    STATE(32), 1,
      sym_namespace,
    STATE(68), 1,
      sym_property,
    STATE(107), 1,
      sym_property_list,
    STATE(33), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1704] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_pn_prefix,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_a,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(5), 1,
      sym_predicate,
    STATE(32), 1,
      sym_namespace,
    STATE(68), 1,
      sym_property,
    STATE(96), 1,
      sym_property_list,
    STATE(33), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1737] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_pn_prefix,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_a,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(5), 1,
      sym_predicate,
    STATE(32), 1,
      sym_namespace,
    STATE(68), 1,
      sym_property,
    STATE(100), 1,
      sym_property_list,
    STATE(33), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1770] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_pn_prefix,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_a,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_predicate,
    STATE(32), 1,
      sym_namespace,
    STATE(33), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [1797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_lang_tag,
    ACTIONS(299), 1,
      anon_sym_CARET_CARET,
    ACTIONS(235), 7,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_LBRACE_PIPE,
    STATE(64), 1,
      sym_annotation,
    STATE(67), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(301), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [1838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_pn_local,
    ACTIONS(251), 7,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_pn_local,
      anon_sym_GT_GT,
      anon_sym_LBRACE_PIPE,
      anon_sym_PIPE_RBRACE,
  [1882] = 6,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(319), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(53), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(311), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(314), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE_PIPE,
    STATE(74), 1,
      sym_annotation,
    ACTIONS(322), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [1920] = 6,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(330), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(56), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(324), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
    ACTIONS(326), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [1941] = 6,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(340), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(56), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(332), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
    ACTIONS(335), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [1962] = 6,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(349), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(53), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(343), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(345), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [1983] = 6,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(355), 1,
      aux_sym__string_literal_long_single_quote_token1,
    STATE(55), 1,
      aux_sym__string_literal_long_single_quote_repeat1,
    ACTIONS(326), 2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(351), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2004] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LT,
    ACTIONS(357), 1,
      sym_pn_prefix,
    STATE(32), 1,
      sym_namespace,
    STATE(23), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [2025] = 6,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(363), 1,
      aux_sym__string_literal_long_quote_token1,
    STATE(57), 1,
      aux_sym__string_literal_long_quote_repeat1,
    ACTIONS(343), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(359), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2046] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LT,
    ACTIONS(365), 1,
      sym_pn_prefix,
    STATE(51), 1,
      sym_namespace,
    STATE(23), 3,
      sym_iri_reference,
      sym__iri,
      sym_prefixed_name,
  [2067] = 3,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym__string_literal_long_quote_token1,
    ACTIONS(317), 5,
      anon_sym_DQUOTE,
      aux_sym__string_literal_quote_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DQUOTE_DQUOTE,
      sym_echar,
  [2081] = 3,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym__string_literal_long_single_quote_token1,
    ACTIONS(338), 5,
      aux_sym__string_literal_quote_token2,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
      sym_echar,
  [2095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(371), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(373), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(322), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_object_list_repeat1,
    ACTIONS(371), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(378), 3,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2185] = 5,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      aux_sym__string_literal_quote_token1,
    STATE(81), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(388), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2202] = 5,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(78), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(390), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2219] = 5,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      aux_sym__string_literal_quote_token1,
    STATE(70), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(400), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2236] = 5,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(71), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(402), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(410), 3,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT,
    ACTIONS(253), 1,
      sym_pn_local,
    ACTIONS(249), 3,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
  [2294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(415), 3,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2309] = 5,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      aux_sym__string_literal_single_quote_token1,
    STATE(78), 1,
      aux_sym__string_literal_single_quote_repeat1,
    ACTIONS(417), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(241), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [2339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LT,
    ACTIONS(245), 4,
      anon_sym_a,
      anon_sym_COLON,
      sym_pn_prefix,
      sym_pn_local,
  [2352] = 5,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      aux_sym__string_literal_quote_token1,
    STATE(81), 1,
      aux_sym__string_literal_quote_repeat1,
    ACTIONS(430), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_COLON,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_RBRACE,
  [2401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_a,
      sym_pn_prefix,
    ACTIONS(441), 2,
      anon_sym_LT,
      anon_sym_COLON,
  [2413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(265), 1,
      sym_pn_prefix,
    STATE(90), 1,
      sym_namespace,
  [2426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(265), 1,
      sym_pn_prefix,
    STATE(91), 1,
      sym_namespace,
  [2439] = 3,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym__string_literal_long_quote_token1,
    ACTIONS(443), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2450] = 3,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym__string_literal_long_single_quote_token1,
    ACTIONS(447), 2,
      aux_sym__string_literal_quote_token2,
      sym_echar,
  [2461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym_iri_reference,
  [2471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(97), 1,
      sym_iri_reference,
  [2481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym_iri_reference,
  [2491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(98), 1,
      sym_iri_reference,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_GT_GT,
  [2508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_GT_GT,
  [2515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_PIPE_RBRACE,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_DOT,
  [2529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_DOT,
  [2536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DOT,
  [2543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
  [2550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [2571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      aux_sym_blank_node_label_token1,
  [2578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_GT,
  [2585] = 2,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(475), 1,
      aux_sym_iri_reference_token1,
  [2592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_DOT,
  [2599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COLON,
  [2606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 163,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 398,
  [SMALL_STATE(8)] = 468,
  [SMALL_STATE(9)] = 545,
  [SMALL_STATE(10)] = 622,
  [SMALL_STATE(11)] = 661,
  [SMALL_STATE(12)] = 696,
  [SMALL_STATE(13)] = 731,
  [SMALL_STATE(14)] = 766,
  [SMALL_STATE(15)] = 801,
  [SMALL_STATE(16)] = 836,
  [SMALL_STATE(17)] = 871,
  [SMALL_STATE(18)] = 906,
  [SMALL_STATE(19)] = 941,
  [SMALL_STATE(20)] = 976,
  [SMALL_STATE(21)] = 1010,
  [SMALL_STATE(22)] = 1044,
  [SMALL_STATE(23)] = 1078,
  [SMALL_STATE(24)] = 1111,
  [SMALL_STATE(25)] = 1144,
  [SMALL_STATE(26)] = 1177,
  [SMALL_STATE(27)] = 1210,
  [SMALL_STATE(28)] = 1243,
  [SMALL_STATE(29)] = 1276,
  [SMALL_STATE(30)] = 1308,
  [SMALL_STATE(31)] = 1335,
  [SMALL_STATE(32)] = 1362,
  [SMALL_STATE(33)] = 1391,
  [SMALL_STATE(34)] = 1416,
  [SMALL_STATE(35)] = 1452,
  [SMALL_STATE(36)] = 1488,
  [SMALL_STATE(37)] = 1509,
  [SMALL_STATE(38)] = 1530,
  [SMALL_STATE(39)] = 1551,
  [SMALL_STATE(40)] = 1572,
  [SMALL_STATE(41)] = 1593,
  [SMALL_STATE(42)] = 1614,
  [SMALL_STATE(43)] = 1635,
  [SMALL_STATE(44)] = 1671,
  [SMALL_STATE(45)] = 1704,
  [SMALL_STATE(46)] = 1737,
  [SMALL_STATE(47)] = 1770,
  [SMALL_STATE(48)] = 1797,
  [SMALL_STATE(49)] = 1816,
  [SMALL_STATE(50)] = 1838,
  [SMALL_STATE(51)] = 1852,
  [SMALL_STATE(52)] = 1868,
  [SMALL_STATE(53)] = 1882,
  [SMALL_STATE(54)] = 1903,
  [SMALL_STATE(55)] = 1920,
  [SMALL_STATE(56)] = 1941,
  [SMALL_STATE(57)] = 1962,
  [SMALL_STATE(58)] = 1983,
  [SMALL_STATE(59)] = 2004,
  [SMALL_STATE(60)] = 2025,
  [SMALL_STATE(61)] = 2046,
  [SMALL_STATE(62)] = 2067,
  [SMALL_STATE(63)] = 2081,
  [SMALL_STATE(64)] = 2095,
  [SMALL_STATE(65)] = 2111,
  [SMALL_STATE(66)] = 2127,
  [SMALL_STATE(67)] = 2143,
  [SMALL_STATE(68)] = 2159,
  [SMALL_STATE(69)] = 2174,
  [SMALL_STATE(70)] = 2185,
  [SMALL_STATE(71)] = 2202,
  [SMALL_STATE(72)] = 2219,
  [SMALL_STATE(73)] = 2236,
  [SMALL_STATE(74)] = 2253,
  [SMALL_STATE(75)] = 2264,
  [SMALL_STATE(76)] = 2279,
  [SMALL_STATE(77)] = 2294,
  [SMALL_STATE(78)] = 2309,
  [SMALL_STATE(79)] = 2326,
  [SMALL_STATE(80)] = 2339,
  [SMALL_STATE(81)] = 2352,
  [SMALL_STATE(82)] = 2369,
  [SMALL_STATE(83)] = 2381,
  [SMALL_STATE(84)] = 2391,
  [SMALL_STATE(85)] = 2401,
  [SMALL_STATE(86)] = 2413,
  [SMALL_STATE(87)] = 2426,
  [SMALL_STATE(88)] = 2439,
  [SMALL_STATE(89)] = 2450,
  [SMALL_STATE(90)] = 2461,
  [SMALL_STATE(91)] = 2471,
  [SMALL_STATE(92)] = 2481,
  [SMALL_STATE(93)] = 2491,
  [SMALL_STATE(94)] = 2501,
  [SMALL_STATE(95)] = 2508,
  [SMALL_STATE(96)] = 2515,
  [SMALL_STATE(97)] = 2522,
  [SMALL_STATE(98)] = 2529,
  [SMALL_STATE(99)] = 2536,
  [SMALL_STATE(100)] = 2543,
  [SMALL_STATE(101)] = 2550,
  [SMALL_STATE(102)] = 2557,
  [SMALL_STATE(103)] = 2564,
  [SMALL_STATE(104)] = 2571,
  [SMALL_STATE(105)] = 2578,
  [SMALL_STATE(106)] = 2585,
  [SMALL_STATE(107)] = 2592,
  [SMALL_STATE(108)] = 2599,
  [SMALL_STATE(109)] = 2606,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_collection, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(108),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(46),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(106),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(72),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(73),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(58),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(60),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(24),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(30),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(104),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_collection_repeat1, 2), SHIFT_REPEAT(35),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turtle_doc, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(103),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(87),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(93),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(92),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(86),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(46),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(106),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(79),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(104),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(85),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_turtle_doc_repeat1, 2), SHIFT_REPEAT(35),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_quote, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_quote, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single_quote, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single_quote, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_quote, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_quote, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single_quote, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single_quote, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_single_quote, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_single_quote, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_single_quote, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_single_quote, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_quote, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_quote, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_long_quote, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_long_quote, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_label, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_label, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_triple, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_triple, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 3, .production_id = 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 2, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_node_property_list, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_node_property_list, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rdf_literal, 1, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixed_name, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixed_name, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_prefix, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_prefix, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparql_base, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparql_base, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_id, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_id, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2), SHIFT_REPEAT(88),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2), SHIFT_REPEAT(53),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2), SHIFT_REPEAT(53),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2), SHIFT_REPEAT(56),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2), SHIFT_REPEAT(89),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2), SHIFT_REPEAT(56),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_long_quote_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_long_single_quote_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_list, 3),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 2), SHIFT_REPEAT(6),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_list_repeat1, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2), SHIFT_REPEAT(34),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 2),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2), SHIFT_REPEAT(78),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_single_quote_repeat1, 2), SHIFT_REPEAT(78),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2), SHIFT_REPEAT(81),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_quote_repeat1, 2), SHIFT_REPEAT(81),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qt_subject, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qt_subject, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qt_object, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [467] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triples, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_turtle(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_pn_prefix,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
