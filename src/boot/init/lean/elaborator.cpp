// Lean compiler output
// Module: init.lean.elaborator
// Imports: init.lean.parser.module init.lean.expander init.lean.expr init.lean.options
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_token__map_insert___rarg(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__1;
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_current__command___boxed(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6;
obj* l_lean_elaborator_locally___rarg___lambda__2(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___boxed(obj*, obj*, obj*);
extern obj* l_lean_parser_command_variables;
extern "C" obj* lean_expr_mk_pi(obj*, uint8, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter(obj*);
obj* l_lean_elaborator_module_header_elaborate___closed__1;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(obj*, obj*, obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_level__get__app__args___main___closed__1;
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4___boxed(obj*, obj*);
obj* l_lean_elaborator_level__get__app__args___main(obj*, obj*, obj*);
obj* l_lean_elaborator_elab__def__like(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__3___boxed(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___boxed(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_sort(obj*);
obj* l_lean_elaborator_run___lambda__2(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20___boxed(obj*, obj*, obj*);
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(obj*, obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1(obj*);
obj* l_lean_elaborator_attrs__to__pexpr(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__except___rarg(obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader___rarg(obj*);
extern obj* l_lean_parser_command_attribute_has__view;
obj* l_lean_elaborator_namespace_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(obj*);
obj* l_lean_elaborator_match__spec___closed__1;
obj* l_lean_elaborator_resolve__context___main___closed__1;
obj* l_lean_elaborator_init__quot_elaborate___boxed(obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___rarg(obj*, obj*);
extern obj* l_lean_parser_level_leading_has__view;
extern obj* l_lean_parser_command_reserve__notation_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1(obj*, obj*);
obj* l_list_foldl___main___at_lean_expr_mk__app___spec__1(obj*, obj*);
obj* l_lean_elaborator_run___lambda__5(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run___closed__2;
obj* l_lean_elaborator_end__scope___lambda__3___closed__1;
obj* l_lean_elaborator_resolve__context___main___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_set__option_elaborate___boxed(obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_declaration;
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1;
obj* l_lean_elaborator_to__level(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg(obj*);
obj* l_lean_elaborator_get__namespace(obj*);
obj* l_lean_elaborator_level__add(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__7;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(obj*, obj*, obj*);
extern obj* l_lean_parser_command_export_has__view;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__33;
obj* l_lean_elaborator_to__pexpr___main___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(obj*, obj*);
obj* l_lean_elaborator_elaborator__config__coe__frontend__config___boxed(obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_include_elaborate(obj*, obj*, obj*);
uint8 l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__1___closed__1;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__6___boxed(obj*, obj*, obj*, obj*);
obj* l_list_filter__map___main___rarg(obj*, obj*);
extern obj* l_lean_parser_term_match_has__view;
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6___boxed(obj*, obj*);
obj* l_lean_elaborator_run___lambda__5___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_level__get__app__args(obj*, obj*, obj*);
extern obj* l_lean_parser_command_open;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__config__coe__frontend__config(obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___closed__1;
obj* l_lean_elaborator_elaborator__coe__coelaborator(obj*, obj*, obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__26;
obj* l_lean_kvmap_set__string(obj*, obj*, obj*);
obj* l_lean_parser_term_get__leading___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(obj*, obj*, obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3___boxed(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15(obj*, obj*);
obj* l_lean_elaborator_notation_elaborate__aux___closed__1;
obj* l_lean_elaborator_mk__eqns___closed__2;
obj* l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1(obj*, obj*);
obj* l_reader__t_lift___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__3(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___boxed(obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___boxed(obj*, obj*, obj*);
obj* l_list_reverse___rarg(obj*);
obj* l_lean_elaborator_run___lambda__4(obj*, obj*, obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__31;
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_register__notation__macro(obj*, obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_preresolve___main___boxed(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24___boxed(obj*, obj*, obj*);
obj* l_list_enum__from___main___rarg(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__state(obj*);
obj* l_lean_elaborator_variables_elaborate___closed__2;
uint8 l_lean_elaborator_match__precedence___main(obj*, obj*);
obj* l_lean_elaborator_with__current__command___boxed(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__39;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__16(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
obj* l_lean_parser_number_view_to__nat___main(obj*);
obj* l_lean_elaborator_run___closed__6;
extern obj* l_lean_parser_term_sort_has__view_x_27___lambda__1___closed__4;
extern obj* l_lean_parser_command_open_has__view;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind___rarg(obj*);
obj* l_lean_elaborator_resolve__context___boxed(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(obj*, obj*, obj*, obj*);
uint8 l_lean_parser_syntax_is__of__kind___main(obj*, obj*);
extern "C" obj* lean_expr_mk_lit(obj*);
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___boxed(obj*, obj*);
obj* l_lean_elaborator_run___lambda__8(obj*);
extern "C" obj* lean_expr_local(obj*, obj*, obj*, uint8);
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4___boxed(obj*, obj*);
extern obj* l_lean_expander_expand__bracketed__binder___main___closed__4;
obj* l_lean_parser_term_simple__binder_view_to__binder__info___main(obj*);
extern obj* l_lean_parser_command_set__option;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6___boxed(obj*, obj*, obj*);
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(obj*, obj*);
obj* l_lean_elaborator_max__recursion;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18___boxed(obj*, obj*, obj*);
obj* l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1___boxed(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___closed__1;
obj* l_lean_elaborator_elab__def__like___closed__1;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(obj*);
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__state___boxed(obj*);
obj* l_lean_elaborator_expr_mk__annotation___closed__1;
obj* l_list_zip___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__6;
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_check_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_expander_builtin__transformers;
obj* l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2;
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_old__elab__command___boxed(obj*, obj*, obj*, obj*);
uint8 l_coe__decidable__eq(uint8);
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(obj*, obj*, obj*);
extern obj* l_lean_parser_command_notation;
obj* l_lean_elaborator_current__command(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(obj*, obj*, obj*);
obj* l_lean_kvmap_set__name(obj*, obj*, obj*);
uint8 l_lean_elaborator_is__open__namespace(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___closed__3;
obj* l_lean_elaborator_elaborators;
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate(uint8, obj*, obj*, obj*);
extern obj* l_lean_parser_string__lit_has__view;
extern obj* l_lean_parser_term_pi_has__view;
obj* l_lean_elaborator_export_elaborate___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_find___rarg(obj*, obj*, obj*);
uint8 l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_resolve__context___main___lambda__1(obj*, obj*);
extern obj* l_lean_parser_command_universe_has__view;
extern "C" obj* lean_expr_mk_mdata(obj*, obj*);
obj* l_lean_elaborator_locally___rarg(obj*, obj*, obj*);
obj* l_state__t_monad__state___rarg(obj*);
obj* l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___boxed(obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
extern "C" obj* lean_expr_mk_lambda(obj*, uint8, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___boxed(obj*, obj*, obj*);
obj* l_lean_kvmap_set__nat(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
obj* l_lean_elaborator_declaration_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_to__level___main___closed__4;
obj* l_lean_elaborator_check_elaborate___closed__1;
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___boxed(obj*, obj*, obj*);
extern obj* l_lean_parser_command_include;
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(obj*, obj*, obj*);
obj* l_lean_environment_contains___boxed(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(obj*, obj*, obj*, obj*);
extern obj* l_lean_name_to__string___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(obj*, obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
extern "C" obj* lean_expr_mk_const(obj*, obj*);
extern obj* l_lean_parser_command_reserve__notation;
obj* l_lean_elaborator_elaborator__t_monad__reader___boxed(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___boxed(obj*, obj*, obj*, obj*);
obj* l_except__t_monad__except___rarg(obj*);
extern obj* l_lean_parser_term_have_has__view;
obj* l_lean_elaborator_init__quot_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
extern obj* l_lean_parser_command_variables_has__view;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13___boxed(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_kvmap_set__bool(obj*, obj*, uint8);
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__32;
obj* l_lean_elaborator_end__scope___lambda__1(obj*, obj*);
obj* l_lean_parser_number_view_of__nat(obj*);
obj* l_lean_parser_trie_insert___rarg(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4;
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_preresolve___main(obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind___rarg___closed__1;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(obj*, obj*);
uint8 l_option_is__some___main___rarg(obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__5;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1___boxed(obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_yield__to__outside___rarg(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__3;
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(obj*, obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(obj*, obj*);
obj* l_lean_elaborator_expr_mk__annotation(obj*, obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7(obj*, obj*, obj*);
obj* l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(obj*, obj*);
obj* l_lean_elaborator_get__namespace___boxed(obj*);
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_name_replace__prefix___main(obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate__aux___lambda__1(obj*, obj*);
obj* l_lean_elaborator_open_elaborate(obj*, obj*, obj*);
extern obj* l_lean_parser_command_section_has__view;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(obj*);
obj* l_lean_elaborator_mk__notation__kind___boxed(obj*);
obj* l_list_join___main___rarg(obj*);
obj* l_lean_elaborator_mangle__ident(obj*);
obj* l_lean_elaborator_universe_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(obj*, obj*, obj*);
extern obj* l_lean_parser_number_has__view;
obj* l_lean_elaborator_to__pexpr___main___closed__4;
obj* l_lean_elaborator_yield__to__outside___boxed(obj*, obj*);
obj* l_lean_parser_syntax_get__pos(obj*);
obj* l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(obj*, obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7;
extern "C" obj* level_mk_imax(obj*, obj*);
obj* l_lean_environment_mk__empty___boxed(obj*);
obj* l_lean_elaborator_attribute_elaborate___closed__2;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
obj* l_list_zip__with___main___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1;
obj* l_lean_elaborator_run___closed__3;
obj* l_lean_elaborator_reserve__notation_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_simple__binders__to__pexpr(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___closed__4;
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_is__open__namespace___boxed(obj*, obj*);
obj* l_lean_elaborator_locally___boxed(obj*);
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(obj*);
obj* l_lean_elaborator_commands_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__parser(obj*, obj*, obj*);
obj* l_lean_elaborator_match__open__spec(obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__1___boxed(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__11;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17___boxed(obj*, obj*);
obj* l_lean_elaborator_level__add___main___boxed(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__16;
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg(obj*, obj*, obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4___boxed(obj*, obj*);
obj* l_lean_name_to__string__with__sep___main(obj*, obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___boxed(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__17;
extern obj* l_lean_parser_module_header;
obj* l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(obj*);
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1___boxed(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__36;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(obj*);
obj* l_lean_elaborator_update__parser__config(obj*, obj*);
extern obj* l_lean_parser_no__kind;
obj* l_lean_elaborator_run___lambda__4___closed__1;
obj* l_lean_elaborator_level__add___boxed(obj*, obj*);
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__46;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9(obj*, obj*);
obj* l_monad__coroutine__trans___rarg(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__tokens(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__10;
obj* l_rbmap_insert___main___at_lean_elaborator_include_elaborate___spec__1(obj*, obj*, obj*);
uint8 l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___closed__2;
obj* l_lean_elaborator_run(obj*);
obj* l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1___boxed(obj*);
obj* l_lean_elaborator_match__precedence___boxed(obj*, obj*);
extern obj* l_lean_message__log_empty;
obj* l_lean_elaborator_register__notation__macro___boxed(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_export_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_yield__to__outside___rarg___boxed(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2___boxed(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12___boxed(obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__38;
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(obj*);
uint8 l_lean_elaborator_is__open__namespace___main(obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(obj*, obj*, obj*);
extern obj* l_char_has__repr___closed__1;
extern "C" obj* lean_environment_mk_empty(obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__except(obj*);
obj* l_coroutine_bind___main___rarg(obj*, obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___boxed(obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(obj*, obj*);
obj* l_lean_elaborator_include_elaborate___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(obj*, obj*, obj*);
extern obj* l_lean_expander_binding__annotation__update;
extern obj* l_lean_parser_command_attribute;
extern obj* l_lean_parser_term_let_has__view;
obj* l_lean_elaborator_ordered__rbmap_find___boxed(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3;
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(obj*, obj*, obj*, obj*);
extern "C" obj* level_mk_succ(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__45;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___boxed(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__14;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(obj*);
obj* l_lean_elaborator_get__namespace___rarg(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_universe_elaborate___closed__2;
obj* l_lean_elaborator_is__open__namespace___main___boxed(obj*, obj*);
extern obj* l_lean_parser_term_projection_has__view;
obj* l_lean_elaborator_variables_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__12;
obj* l_lean_elaborator_with__current__command(obj*);
obj* l_lean_parser_syntax_to__format___main(obj*);
obj* l_lean_name_append___main(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1;
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
extern obj* l_string_join___closed__1;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__3(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2___boxed(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__35;
obj* l_lean_elaborator_to__pexpr___main___closed__25;
obj* l_lean_elaborator_names__to__pexpr(obj*);
obj* l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(obj*, obj*);
extern obj* l_lean_parser_command_check_has__view;
obj* l_lean_elaborator_run___closed__4;
obj* l_lean_elaborator_elaborator__t_monad__except___boxed(obj*);
obj* l_lean_elaborator_elaborator__coe__coelaborator___boxed(obj*, obj*, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_set__option_elaborate(obj*, obj*, obj*);
obj* l_reader__t_read___rarg(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_resolve__context___main(obj*, obj*, obj*);
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_max__prec;
obj* l_lean_elaborator_notation_elaborate__aux(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7(obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__2___closed__2;
extern obj* l_lean_options_mk;
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_universe_elaborate___closed__1;
obj* l_monad__state__trans___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__20;
obj* l_lean_elaborator_run___lambda__3___closed__1;
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1;
obj* l_rbnode_balance2___main___rarg(obj*, obj*);
obj* l_lean_expander_get__opt__type___main(obj*);
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(obj*, obj*);
extern obj* l_lean_parser_term_struct__inst_has__view;
obj* l_coroutine_yield___rarg___boxed(obj*, obj*);
obj* l_lean_elaborator_run___lambda__7(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_lambda_has__view;
obj* l_lean_elaborator_mk__eqns___closed__1;
obj* l_lean_elaborator_commands_elaborate___main___lambda__3(obj*, obj*, uint8, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(obj*);
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(obj*);
obj* l_lean_elaborator_commands_elaborate___main(uint8, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8(obj*);
obj* l_lean_elaborator_run___lambda__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__1(uint8, obj*, obj*, obj*);
obj* l_lean_elaborator_resolve__context(obj*, obj*, obj*);
obj* l_lean_elaborator_with__current__command___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_except__t_monad___rarg(obj*);
extern "C" obj* lean_expr_mk_let(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_app_has__view;
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2___boxed(obj*, obj*);
obj* l_rbnode_find___main___at_lean_name__map_contains___spec__2___rarg(obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__6;
obj* l_reader__t_monad__reader__adapter___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__level___main(obj*, obj*, obj*);
extern obj* l_lean_parser_ident__univs_has__view;
obj* l_lean_elaborator_to__pexpr___main___closed__9;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(obj*);
obj* l_state__t_monad__except___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__2;
obj* l_reader__t_monad__except___rarg(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1___boxed(obj*, obj*);
extern obj* l_lean_parser_term_sort__app_has__view;
extern obj* l_lean_parser_term_explicit_has__view;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_current__command___rarg(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__7;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_prec__to__nat(obj*);
obj* l_lean_elaborator_end__scope___lambda__2___closed__1;
extern obj* l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
obj* l_state__t_lift___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__24;
obj* l_lean_elaborator_ordered__rbmap_insert___rarg(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_term_parser(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate(obj*, obj*, obj*);
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__13;
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__3;
obj* l_lean_elaborator_to__level___main___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__27;
obj* l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1___boxed(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__4(obj*, obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(obj*, obj*, obj*, obj*);
obj* l_state__t_monad___rarg(obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1;
obj* l_lean_format_pretty(obj*, obj*);
extern obj* l_lean_parser_command_namespace_has__view;
obj* l_lean_elaborator_preresolve___boxed(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__15;
obj* l_lean_elaborator_notation_elaborate___closed__2;
obj* l_lean_elaborator_to__pexpr___main___closed__18;
obj* l_lean_elaborator_elaborator__t_monad(obj*);
obj* l_lean_elaborator_end__scope___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2___boxed(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__1___boxed(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_inaccessible_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5___boxed(obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__2;
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___boxed(obj*);
obj* l_lean_elaborator_dummy;
obj* l_lean_elaborator_section_elaborate___lambda__1___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(obj*, obj*);
obj* l_lean_elaborator_run___closed__5;
extern obj* l_coroutine_monad___closed__1;
obj* l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_module_header_elaborate(obj*, obj*, obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_lean_parser_syntax_kind___main(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__2;
obj* l_lean_elaborator_infer__mod__to__pexpr___boxed(obj*);
obj* l_lean_elaborator_section_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_preresolve(obj*, obj*, obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
extern obj* l_lean_parser_module_header_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(obj*, obj*, obj*);
uint8 l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__1;
extern obj* l_lean_parser_command_section;
obj* l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__21;
uint8 l_lean_name_quick__lt(obj*, obj*);
extern "C" obj* level_mk_max(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___boxed(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_struct__inst__item_has__view;
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_match__precedence___main___boxed(obj*, obj*);
extern obj* l_lean_parser_term_borrowed_has__view;
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11___boxed(obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad___boxed(obj*);
obj* l_lean_parser_term_binders_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_find(obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_universe;
obj* l_lean_elaborator_to__pexpr___main___closed__19;
obj* l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(obj*);
extern obj* l_lean_parser_term_show_has__view;
obj* l_lean_elaborator_run___lambda__6(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_run___closed__1;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(obj*);
obj* l_lean_level_of__nat___main(obj*);
extern obj* l_lean_parser_syntax_reprint__lst___main___closed__1;
obj* l_lean_elaborator_end__scope___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__22;
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(obj*);
obj* l_lean_parser_term_binder__ident_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(obj*, obj*, obj*);
obj* l_rbnode_balance1___main___rarg(obj*, obj*);
obj* l_lean_elaborator_coelaborator__m_monad__coroutine;
obj* l_list_length__aux___main___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__8;
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___boxed(obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__43;
obj* l_lean_elaborator_attribute_elaborate___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(obj*);
uint8 l_lean_elaborator_match__precedence(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__23;
obj* l_lean_elaborator_elab__def__like___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_string_trim(obj*);
obj* l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__34;
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(obj*, obj*);
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___boxed(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(obj*, obj*, obj*);
extern obj* l_lean_parser_term_sort_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_locally(obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_register__notation__macro___spec__1(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
obj* l_lean_elaborator_to__level___main___closed__2;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(obj*, obj*, obj*);
extern obj* l_lean_parser_curr__lbp___rarg___lambda__3___closed__1;
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
obj* l_lean_elaborator_open_elaborate___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
obj* l_lean_elaborator_commands_elaborate___main___boxed(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_match__spec(obj*, obj*);
obj* l_lean_expander_mk__notation__transformer(obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__1___boxed(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__30;
obj* l_lean_expr_local___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__eqns(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10___boxed(obj*, obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__1(obj*);
obj* l_lean_elaborator_level__add___main(obj*, obj*);
obj* l_lean_elaborator_elaborate__command___boxed(obj*, obj*, obj*);
obj* l_reader__t_monad___rarg(obj*);
obj* l_lean_expr_mk__capp(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1___boxed(obj*, obj*, obj*);
extern "C" obj* level_mk_mvar(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__2(uint8, obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_app(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2(obj*, obj*);
obj* l_lean_elaborator_run___lambda__1___closed__1;
extern obj* l_lean_parser_command_declaration_has__view;
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
extern obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
obj* l_lean_elaborator_run___closed__7;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_kvmap_insert__core___main(obj*, obj*, obj*);
extern "C" obj* lean_name_mk_numeral(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__28;
obj* l_lean_elaborator_to__level___main___closed__3;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___boxed(obj*);
extern obj* l_lean_parser_command_end_has__view;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(obj*, obj*, obj*, obj*, obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13;
extern obj* l_lean_parser_term_anonymous__constructor_has__view;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2;
obj* l_lean_elaborator_to__pexpr___main___closed__37;
obj* l_lean_elaborator_attribute_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__7___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__6(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_init__quot;
obj* l_lean_elaborator_variables_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__41;
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(obj*);
obj* l_lean_elaborator_ident__univ__params__to__pexpr(obj*);
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(obj*, obj*);
obj* l_rbtree_to__list___rarg(obj*);
obj* l_lean_elaborator_elaborator__t_monad___rarg(obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_yield__to__outside(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__coe__coelaborator___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16___boxed(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21(obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3___closed__1;
obj* l_lean_elaborator_postprocess__notation__spec(obj*);
obj* l_lean_elaborator_elab__def__like___closed__2;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19___boxed(obj*, obj*);
extern obj* l_lean_parser_command_include_has__view;
extern obj* l_lean_parser_command_namespace;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___boxed(obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_elaborators___spec__2(obj*, obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(obj*);
obj* l_lean_elaborator_old__elab__command(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(obj*);
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___boxed(obj*);
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(obj*);
obj* l_lean_file__map_to__position(obj*, obj*);
extern "C" obj* level_mk_param(obj*);
uint8 l_rbnode_is__red___main___rarg(obj*);
extern "C" obj* lean_elaborator_elaborate_command(obj*, obj*, obj*);
obj* l_dlist_singleton___rarg(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(obj*, obj*, obj*);
extern obj* l_lean_expander_get__opt__type___main___closed__1;
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__10(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_level_trailing_has__view;
obj* l_lean_elaborator_no__kind_elaborate___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___closed__1;
obj* l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_append___rarg(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__5;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25___boxed(obj*, obj*);
obj* l_except__t_lift___rarg___boxed(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__29;
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5(obj*, obj*, obj*);
extern obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
extern obj* l_lean_expander_no__expansion___closed__1;
extern "C" obj* lean_expr_mk_bvar(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__40;
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1(obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(obj*);
extern "C" obj* lean_expr_mk_mvar(obj*, obj*);
obj* l_lean_parser_substring_of__string(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___closed__1;
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(obj*);
obj* l_lean_elaborator_command_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_prec__to__nat___main(obj*);
obj* l_lean_elaborator_with__current__command___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_string__lit_view_value(obj*);
obj* l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2___boxed(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__42;
extern "C" uint8 lean_environment_contains(obj*, obj*);
extern obj* l_lean_parser_command_notation_has__view;
extern obj* l_lean_parser_command_check;
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1(obj*, obj*);
extern obj* l_lean_parser_command_export;
obj* l_lean_elaborator_ordered__rbmap_of__list___boxed(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__state___rarg(obj*);
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__44;
obj* l_rbnode_set__black___main___rarg(obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(obj*);
obj* l___private_init_lean_parser_rec_1__run__aux___main___rarg(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
obj* l_lean_elaborator_init__quot_elaborate___closed__1;
obj* l_lean_elaborator_postprocess__notation__spec___closed__1;
extern obj* l_lean_parser_command_set__option_has__view;
obj* l_lean_environment_mk__empty___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean_environment_mk_empty(x_0);
return x_1;
}
}
obj* l_lean_environment_contains___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean_environment_contains(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_expr_local___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_3);
x_5 = lean_expr_local(x_0, x_1, x_2, x_4);
return x_5;
}
}
obj* l_lean_elaborator_elaborate__command___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean_elaborator_elaborate_command(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
return x_4;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_ordered__rbmap_empty(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
return x_4;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
lean::cnstr_set_scalar(x_6, sizeof(void*)*4, x_5);
x_7 = x_6;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_8 == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_1, 2);
x_15 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_2, x_11);
x_22 = lean::unbox(x_21);
if (x_22 == 0)
{
obj* x_26; uint8 x_27; 
lean::inc(x_2);
lean::inc(x_11);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_2);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
if (lean::is_scalar(x_17)) {
 x_31 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_31 = x_17;
}
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_15);
lean::cnstr_set_scalar(x_31, sizeof(void*)*4, x_8);
x_32 = x_31;
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_15, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_34 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_34 = x_17;
}
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_11);
lean::cnstr_set(x_34, 2, x_13);
lean::cnstr_set(x_34, 3, x_33);
lean::cnstr_set_scalar(x_34, sizeof(void*)*4, x_8);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_9, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_37 = x_17;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_11);
lean::cnstr_set(x_37, 2, x_13);
lean::cnstr_set(x_37, 3, x_15);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_8);
x_38 = x_37;
return x_38;
}
}
else
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_51; uint8 x_52; 
x_39 = lean::cnstr_get(x_1, 0);
x_41 = lean::cnstr_get(x_1, 1);
x_43 = lean::cnstr_get(x_1, 2);
x_45 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_47 = x_1;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_1);
 x_47 = lean::box(0);
}
lean::inc(x_41);
lean::inc(x_2);
lean::inc(x_0);
x_51 = lean::apply_2(x_0, x_2, x_41);
x_52 = lean::unbox(x_51);
if (x_52 == 0)
{
obj* x_56; uint8 x_57; 
lean::inc(x_2);
lean::inc(x_41);
lean::inc(x_0);
x_56 = lean::apply_2(x_0, x_41, x_2);
x_57 = lean::unbox(x_56);
if (x_57 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_41);
lean::dec(x_43);
if (lean::is_scalar(x_47)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_47;
}
lean::cnstr_set(x_61, 0, x_39);
lean::cnstr_set(x_61, 1, x_2);
lean::cnstr_set(x_61, 2, x_3);
lean::cnstr_set(x_61, 3, x_45);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_8);
x_62 = x_61;
return x_62;
}
else
{
uint8 x_63; 
x_63 = l_rbnode_is__red___main___rarg(x_45);
if (x_63 == 0)
{
obj* x_64; obj* x_65; obj* x_66; 
x_64 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_45, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_65 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_65 = x_47;
}
lean::cnstr_set(x_65, 0, x_39);
lean::cnstr_set(x_65, 1, x_41);
lean::cnstr_set(x_65, 2, x_43);
lean::cnstr_set(x_65, 3, x_64);
lean::cnstr_set_scalar(x_65, sizeof(void*)*4, x_8);
x_66 = x_65;
return x_66;
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_67 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_68 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_68 = x_47;
}
lean::cnstr_set(x_68, 0, x_39);
lean::cnstr_set(x_68, 1, x_41);
lean::cnstr_set(x_68, 2, x_43);
lean::cnstr_set(x_68, 3, x_67);
lean::cnstr_set_scalar(x_68, sizeof(void*)*4, x_8);
x_69 = x_68;
x_70 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_45, x_2, x_3);
x_71 = l_rbnode_balance2___main___rarg(x_69, x_70);
return x_71;
}
}
}
else
{
uint8 x_72; 
x_72 = l_rbnode_is__red___main___rarg(x_39);
if (x_72 == 0)
{
obj* x_73; obj* x_74; obj* x_75; 
x_73 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_39, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_74 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_74 = x_47;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_41);
lean::cnstr_set(x_74, 2, x_43);
lean::cnstr_set(x_74, 3, x_45);
lean::cnstr_set_scalar(x_74, sizeof(void*)*4, x_8);
x_75 = x_74;
return x_75;
}
else
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_76 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_77 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_77 = x_47;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_41);
lean::cnstr_set(x_77, 2, x_43);
lean::cnstr_set(x_77, 3, x_45);
lean::cnstr_set_scalar(x_77, sizeof(void*)*4, x_8);
x_78 = x_77;
x_79 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_39, x_2, x_3);
x_80 = l_rbnode_balance1___main___rarg(x_78, x_79);
return x_80;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg), 4, 0);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
lean::cnstr_set_scalar(x_6, sizeof(void*)*4, x_5);
x_7 = x_6;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_8 == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_1, 2);
x_15 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_2, x_11);
x_22 = lean::unbox(x_21);
if (x_22 == 0)
{
obj* x_26; uint8 x_27; 
lean::inc(x_2);
lean::inc(x_11);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_2);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
if (lean::is_scalar(x_17)) {
 x_31 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_31 = x_17;
}
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_15);
lean::cnstr_set_scalar(x_31, sizeof(void*)*4, x_8);
x_32 = x_31;
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_15, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_34 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_34 = x_17;
}
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_11);
lean::cnstr_set(x_34, 2, x_13);
lean::cnstr_set(x_34, 3, x_33);
lean::cnstr_set_scalar(x_34, sizeof(void*)*4, x_8);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_9, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_37 = x_17;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_11);
lean::cnstr_set(x_37, 2, x_13);
lean::cnstr_set(x_37, 3, x_15);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_8);
x_38 = x_37;
return x_38;
}
}
else
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_51; uint8 x_52; 
x_39 = lean::cnstr_get(x_1, 0);
x_41 = lean::cnstr_get(x_1, 1);
x_43 = lean::cnstr_get(x_1, 2);
x_45 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_47 = x_1;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_1);
 x_47 = lean::box(0);
}
lean::inc(x_41);
lean::inc(x_2);
lean::inc(x_0);
x_51 = lean::apply_2(x_0, x_2, x_41);
x_52 = lean::unbox(x_51);
if (x_52 == 0)
{
obj* x_56; uint8 x_57; 
lean::inc(x_2);
lean::inc(x_41);
lean::inc(x_0);
x_56 = lean::apply_2(x_0, x_41, x_2);
x_57 = lean::unbox(x_56);
if (x_57 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_41);
lean::dec(x_43);
if (lean::is_scalar(x_47)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_47;
}
lean::cnstr_set(x_61, 0, x_39);
lean::cnstr_set(x_61, 1, x_2);
lean::cnstr_set(x_61, 2, x_3);
lean::cnstr_set(x_61, 3, x_45);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_8);
x_62 = x_61;
return x_62;
}
else
{
uint8 x_63; 
x_63 = l_rbnode_is__red___main___rarg(x_45);
if (x_63 == 0)
{
obj* x_64; obj* x_65; obj* x_66; 
x_64 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_45, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_65 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_65 = x_47;
}
lean::cnstr_set(x_65, 0, x_39);
lean::cnstr_set(x_65, 1, x_41);
lean::cnstr_set(x_65, 2, x_43);
lean::cnstr_set(x_65, 3, x_64);
lean::cnstr_set_scalar(x_65, sizeof(void*)*4, x_8);
x_66 = x_65;
return x_66;
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_67 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_68 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_68 = x_47;
}
lean::cnstr_set(x_68, 0, x_39);
lean::cnstr_set(x_68, 1, x_41);
lean::cnstr_set(x_68, 2, x_43);
lean::cnstr_set(x_68, 3, x_67);
lean::cnstr_set_scalar(x_68, sizeof(void*)*4, x_8);
x_69 = x_68;
x_70 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_45, x_2, x_3);
x_71 = l_rbnode_balance2___main___rarg(x_69, x_70);
return x_71;
}
}
}
else
{
uint8 x_72; 
x_72 = l_rbnode_is__red___main___rarg(x_39);
if (x_72 == 0)
{
obj* x_73; obj* x_74; obj* x_75; 
x_73 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_39, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_74 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_74 = x_47;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_41);
lean::cnstr_set(x_74, 2, x_43);
lean::cnstr_set(x_74, 3, x_45);
lean::cnstr_set_scalar(x_74, sizeof(void*)*4, x_8);
x_75 = x_74;
return x_75;
}
else
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_76 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_77 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_77 = x_47;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_41);
lean::cnstr_set(x_77, 2, x_43);
lean::cnstr_set(x_77, 3, x_45);
lean::cnstr_set_scalar(x_77, sizeof(void*)*4, x_8);
x_78 = x_77;
x_79 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_39, x_2, x_3);
x_80 = l_rbnode_balance1___main___rarg(x_78, x_79);
return x_80;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg), 4, 0);
return x_3;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = l_rbnode_is__red___main___rarg(x_1);
if (x_4 == 0)
{
obj* x_5; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_1, x_2, x_3);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_1, x_2, x_3);
x_7 = l_rbnode_set__black___main___rarg(x_6);
return x_7;
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg), 4, 0);
return x_3;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg), 4, 0);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; 
lean::inc(x_3);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 2);
lean::inc(x_12);
lean::dec(x_1);
lean::inc(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_3);
x_17 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(x_0, x_10, x_2, x_16);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_12, x_18);
lean::dec(x_12);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_17);
lean::cnstr_set(x_21, 2, x_19);
return x_21;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_insert___rarg), 4, 0);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_ordered__rbmap_insert(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_6; 
lean::dec(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_19; uint8 x_20; 
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 2);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 3);
lean::inc(x_13);
lean::dec(x_2);
lean::inc(x_9);
lean::inc(x_3);
lean::inc(x_0);
x_19 = lean::apply_2(x_0, x_3, x_9);
x_20 = lean::unbox(x_19);
if (x_20 == 0)
{
obj* x_24; uint8 x_25; 
lean::dec(x_7);
lean::inc(x_3);
lean::inc(x_0);
x_24 = lean::apply_2(x_0, x_9, x_3);
x_25 = lean::unbox(x_24);
if (x_25 == 0)
{
obj* x_29; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_13);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_11);
return x_29;
}
else
{
lean::dec(x_11);
x_1 = x_0;
x_2 = x_13;
goto _start;
}
}
else
{
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_13);
x_1 = x_0;
x_2 = x_7;
goto _start;
}
}
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, lean::box(0), x_1, x_2);
return x_3;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg), 3, 0);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_6 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, lean::box(0), x_3, x_2);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_find(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_find___rarg), 3, 0);
return x_3;
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_ordered__rbmap_find(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
lean::cnstr_set_scalar(x_6, sizeof(void*)*4, x_5);
x_7 = x_6;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_8 == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_1, 2);
x_15 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_2, x_11);
x_22 = lean::unbox(x_21);
if (x_22 == 0)
{
obj* x_26; uint8 x_27; 
lean::inc(x_2);
lean::inc(x_11);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_2);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
if (lean::is_scalar(x_17)) {
 x_31 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_31 = x_17;
}
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_15);
lean::cnstr_set_scalar(x_31, sizeof(void*)*4, x_8);
x_32 = x_31;
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_15, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_34 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_34 = x_17;
}
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_11);
lean::cnstr_set(x_34, 2, x_13);
lean::cnstr_set(x_34, 3, x_33);
lean::cnstr_set_scalar(x_34, sizeof(void*)*4, x_8);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_9, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_37 = x_17;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_11);
lean::cnstr_set(x_37, 2, x_13);
lean::cnstr_set(x_37, 3, x_15);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_8);
x_38 = x_37;
return x_38;
}
}
else
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_51; uint8 x_52; 
x_39 = lean::cnstr_get(x_1, 0);
x_41 = lean::cnstr_get(x_1, 1);
x_43 = lean::cnstr_get(x_1, 2);
x_45 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_47 = x_1;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_1);
 x_47 = lean::box(0);
}
lean::inc(x_41);
lean::inc(x_2);
lean::inc(x_0);
x_51 = lean::apply_2(x_0, x_2, x_41);
x_52 = lean::unbox(x_51);
if (x_52 == 0)
{
obj* x_56; uint8 x_57; 
lean::inc(x_2);
lean::inc(x_41);
lean::inc(x_0);
x_56 = lean::apply_2(x_0, x_41, x_2);
x_57 = lean::unbox(x_56);
if (x_57 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_41);
lean::dec(x_43);
if (lean::is_scalar(x_47)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_47;
}
lean::cnstr_set(x_61, 0, x_39);
lean::cnstr_set(x_61, 1, x_2);
lean::cnstr_set(x_61, 2, x_3);
lean::cnstr_set(x_61, 3, x_45);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_8);
x_62 = x_61;
return x_62;
}
else
{
uint8 x_63; 
x_63 = l_rbnode_is__red___main___rarg(x_45);
if (x_63 == 0)
{
obj* x_64; obj* x_65; obj* x_66; 
x_64 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_45, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_65 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_65 = x_47;
}
lean::cnstr_set(x_65, 0, x_39);
lean::cnstr_set(x_65, 1, x_41);
lean::cnstr_set(x_65, 2, x_43);
lean::cnstr_set(x_65, 3, x_64);
lean::cnstr_set_scalar(x_65, sizeof(void*)*4, x_8);
x_66 = x_65;
return x_66;
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_67 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_68 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_68 = x_47;
}
lean::cnstr_set(x_68, 0, x_39);
lean::cnstr_set(x_68, 1, x_41);
lean::cnstr_set(x_68, 2, x_43);
lean::cnstr_set(x_68, 3, x_67);
lean::cnstr_set_scalar(x_68, sizeof(void*)*4, x_8);
x_69 = x_68;
x_70 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_45, x_2, x_3);
x_71 = l_rbnode_balance2___main___rarg(x_69, x_70);
return x_71;
}
}
}
else
{
uint8 x_72; 
x_72 = l_rbnode_is__red___main___rarg(x_39);
if (x_72 == 0)
{
obj* x_73; obj* x_74; obj* x_75; 
x_73 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_39, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_74 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_74 = x_47;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_41);
lean::cnstr_set(x_74, 2, x_43);
lean::cnstr_set(x_74, 3, x_45);
lean::cnstr_set_scalar(x_74, sizeof(void*)*4, x_8);
x_75 = x_74;
return x_75;
}
else
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_76 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_77 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_77 = x_47;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_41);
lean::cnstr_set(x_77, 2, x_43);
lean::cnstr_set(x_77, 3, x_45);
lean::cnstr_set_scalar(x_77, sizeof(void*)*4, x_8);
x_78 = x_77;
x_79 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_39, x_2, x_3);
x_80 = l_rbnode_balance1___main___rarg(x_78, x_79);
return x_80;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg), 4, 0);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
lean::cnstr_set_scalar(x_6, sizeof(void*)*4, x_5);
x_7 = x_6;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_8 == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_1, 2);
x_15 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_2, x_11);
x_22 = lean::unbox(x_21);
if (x_22 == 0)
{
obj* x_26; uint8 x_27; 
lean::inc(x_2);
lean::inc(x_11);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_2);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
if (lean::is_scalar(x_17)) {
 x_31 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_31 = x_17;
}
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_15);
lean::cnstr_set_scalar(x_31, sizeof(void*)*4, x_8);
x_32 = x_31;
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_15, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_34 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_34 = x_17;
}
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_11);
lean::cnstr_set(x_34, 2, x_13);
lean::cnstr_set(x_34, 3, x_33);
lean::cnstr_set_scalar(x_34, sizeof(void*)*4, x_8);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_9, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_37 = x_17;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_11);
lean::cnstr_set(x_37, 2, x_13);
lean::cnstr_set(x_37, 3, x_15);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_8);
x_38 = x_37;
return x_38;
}
}
else
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_51; uint8 x_52; 
x_39 = lean::cnstr_get(x_1, 0);
x_41 = lean::cnstr_get(x_1, 1);
x_43 = lean::cnstr_get(x_1, 2);
x_45 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_47 = x_1;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_1);
 x_47 = lean::box(0);
}
lean::inc(x_41);
lean::inc(x_2);
lean::inc(x_0);
x_51 = lean::apply_2(x_0, x_2, x_41);
x_52 = lean::unbox(x_51);
if (x_52 == 0)
{
obj* x_56; uint8 x_57; 
lean::inc(x_2);
lean::inc(x_41);
lean::inc(x_0);
x_56 = lean::apply_2(x_0, x_41, x_2);
x_57 = lean::unbox(x_56);
if (x_57 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_41);
lean::dec(x_43);
if (lean::is_scalar(x_47)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_47;
}
lean::cnstr_set(x_61, 0, x_39);
lean::cnstr_set(x_61, 1, x_2);
lean::cnstr_set(x_61, 2, x_3);
lean::cnstr_set(x_61, 3, x_45);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_8);
x_62 = x_61;
return x_62;
}
else
{
uint8 x_63; 
x_63 = l_rbnode_is__red___main___rarg(x_45);
if (x_63 == 0)
{
obj* x_64; obj* x_65; obj* x_66; 
x_64 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_45, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_65 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_65 = x_47;
}
lean::cnstr_set(x_65, 0, x_39);
lean::cnstr_set(x_65, 1, x_41);
lean::cnstr_set(x_65, 2, x_43);
lean::cnstr_set(x_65, 3, x_64);
lean::cnstr_set_scalar(x_65, sizeof(void*)*4, x_8);
x_66 = x_65;
return x_66;
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_67 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_68 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_68 = x_47;
}
lean::cnstr_set(x_68, 0, x_39);
lean::cnstr_set(x_68, 1, x_41);
lean::cnstr_set(x_68, 2, x_43);
lean::cnstr_set(x_68, 3, x_67);
lean::cnstr_set_scalar(x_68, sizeof(void*)*4, x_8);
x_69 = x_68;
x_70 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_45, x_2, x_3);
x_71 = l_rbnode_balance2___main___rarg(x_69, x_70);
return x_71;
}
}
}
else
{
uint8 x_72; 
x_72 = l_rbnode_is__red___main___rarg(x_39);
if (x_72 == 0)
{
obj* x_73; obj* x_74; obj* x_75; 
x_73 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_39, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_74 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_74 = x_47;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_41);
lean::cnstr_set(x_74, 2, x_43);
lean::cnstr_set(x_74, 3, x_45);
lean::cnstr_set_scalar(x_74, sizeof(void*)*4, x_8);
x_75 = x_74;
return x_75;
}
else
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_76 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_77 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_77 = x_47;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_41);
lean::cnstr_set(x_77, 2, x_43);
lean::cnstr_set(x_77, 3, x_45);
lean::cnstr_set_scalar(x_77, sizeof(void*)*4, x_8);
x_78 = x_77;
x_79 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_39, x_2, x_3);
x_80 = l_rbnode_balance1___main___rarg(x_78, x_79);
return x_80;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg), 4, 0);
return x_3;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = l_rbnode_is__red___main___rarg(x_1);
if (x_4 == 0)
{
obj* x_5; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_1, x_2, x_3);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_1, x_2, x_3);
x_7 = l_rbnode_set__black___main___rarg(x_6);
return x_7;
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg), 4, 0);
return x_3;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg), 4, 0);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; 
lean::inc(x_3);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 2);
lean::inc(x_12);
lean::dec(x_1);
lean::inc(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_3);
x_17 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(x_0, x_10, x_2, x_16);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_12, x_18);
lean::dec(x_12);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_17);
lean::cnstr_set(x_21, 2, x_19);
return x_21;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg), 4, 0);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
return x_4;
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; obj* x_15; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
lean::dec(x_2);
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::dec(x_4);
lean::inc(x_0);
x_15 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(x_0, x_1, x_9, x_11);
x_1 = x_15;
x_2 = x_6;
goto _start;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___rarg), 3, 0);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
x_3 = l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___rarg(x_0, x_2, x_1);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_of__list___rarg), 2, 0);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__6(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
return x_4;
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_ordered__rbmap_of__list(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__config__coe__frontend__config(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__config__coe__frontend__config___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_elaborator__config__coe__frontend__config(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = l_reader__t_monad___rarg(x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad___rarg), 1, 0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_elaborator__t_monad(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_read___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__reader___rarg), 1, 0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_elaborator__t_monad__reader(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = l_except__t_monad___rarg(x_0);
lean::inc(x_1);
x_3 = l_state__t_monad___rarg(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___boxed), 4, 3);
lean::closure_set(x_4, 0, lean::box(0));
lean::closure_set(x_4, 1, lean::box(0));
lean::closure_set(x_4, 2, x_3);
x_5 = l_state__t_monad__state___rarg(x_1);
x_6 = l_monad__state__trans___rarg(x_4, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__state___rarg), 1, 0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_elaborator__t_monad__state(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
lean::inc(x_0);
x_2 = l_except__t_monad___rarg(x_0);
x_3 = l_except__t_monad__except___rarg(x_0);
x_4 = l_state__t_monad__except___rarg(x_2, lean::box(0), x_3);
x_5 = l_reader__t_monad__except___rarg(x_4);
return x_5;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__except___rarg), 1, 0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_elaborator__t_monad__except(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::apply_4(x_1, x_0, x_2, x_3, x_4);
return x_5;
}
}
obj* l_lean_elaborator_command_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1), 5, 4);
lean::closure_set(x_4, 0, x_3);
lean::closure_set(x_4, 1, x_0);
lean::closure_set(x_4, 2, x_1);
lean::closure_set(x_4, 3, x_2);
return x_4;
}
}
obj* _init_l_lean_elaborator_coelaborator__m_monad__coroutine() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_0 = l_coroutine_monad___closed__1;
x_1 = l_lean_elaborator_elaborator__t_monad___rarg(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___boxed), 4, 3);
lean::closure_set(x_2, 0, lean::box(0));
lean::closure_set(x_2, 1, lean::box(0));
lean::closure_set(x_2, 2, x_1);
x_3 = l_except__t_monad___rarg(x_0);
lean::inc(x_3);
x_5 = l_state__t_monad___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___boxed), 4, 3);
lean::closure_set(x_6, 0, lean::box(0));
lean::closure_set(x_6, 1, lean::box(0));
lean::closure_set(x_6, 2, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_lift___rarg___boxed), 4, 1);
lean::closure_set(x_7, 0, x_3);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg___boxed), 3, 1);
lean::closure_set(x_8, 0, x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_yield___rarg___boxed), 2, 0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_11, 0, x_7);
lean::closure_set(x_11, 1, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_12, 0, x_6);
lean::closure_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_13, 0, x_2);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_monad__reader__adapter___boxed), 5, 4);
lean::closure_set(x_3, 0, lean::box(0));
lean::closure_set(x_3, 1, lean::box(0));
lean::closure_set(x_3, 2, lean::box(0));
lean::closure_set(x_3, 3, x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg), 1, 0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_elaborator__t_monad__reader__adapter(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_current__command___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
return x_4;
}
}
obj* l_lean_elaborator_current__command(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_elaborator_current__command___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_current__command(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_with__current__command___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::apply_4(x_1, x_2, x_3, x_4, x_0);
return x_6;
}
}
obj* l_lean_elaborator_with__current__command(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg___boxed), 6, 0);
return x_1;
}
}
obj* l_lean_elaborator_with__current__command___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_elaborator_with__current__command___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_elaborator_with__current__command___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_with__current__command(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::apply_2(x_0, x_2, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___boxed), 4, 0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_elaborator__m__coe__coelaborator__m(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_3 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_5 = x_1;
} else {
 lean::inc(x_3);
 lean::dec(x_1);
 x_5 = lean::box(0);
}
if (lean::is_scalar(x_5)) {
 x_6 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_6 = x_5;
}
lean::cnstr_set(x_6, 0, x_3);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::apply_1(x_0, x_8);
return x_11;
}
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::apply_3(x_0, x_3, x_1, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_9, 0, x_8);
return x_9;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__coe__coelaborator___lambda__1), 3, 2);
lean::closure_set(x_5, 0, x_0);
lean::closure_set(x_5, 1, x_2);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_elaborator__coe__coelaborator(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean_name_mk_numeral(x_0, x_2);
x_0 = x_7;
x_1 = x_4;
goto _start;
}
}
}
obj* l_lean_elaborator_mangle__ident(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 2);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 4);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(x_1, x_3);
return x_6;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_17; uint8 x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_lean_parser_syntax_get__pos(x_0);
x_13 = lean::mk_nat_obj(0u);
x_14 = l_option_get__or__else___main___rarg(x_12, x_13);
lean::dec(x_12);
x_16 = l_lean_file__map_to__position(x_9, x_14);
x_17 = lean::box(0);
x_18 = 2;
x_19 = l_string_join___closed__1;
x_20 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_17);
lean::cnstr_set(x_20, 3, x_19);
lean::cnstr_set(x_20, 4, x_1);
lean::cnstr_set_scalar(x_20, sizeof(void*)*5, x_18);
x_21 = x_20;
x_22 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
return x_22;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg___boxed), 4, 0);
return x_1;
}
}
obj* _init_l_lean_elaborator_level__get__app__args___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("level_get_app_args: unexpected input: ");
return x_0;
}
}
obj* l_lean_elaborator_level__get__app__args___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::inc(x_0);
x_4 = l_lean_parser_syntax_kind___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; 
lean::inc(x_0);
x_6 = l_lean_parser_syntax_to__format___main(x_0);
x_7 = lean::mk_nat_obj(80u);
x_8 = l_lean_format_pretty(x_6, x_7);
x_9 = l_lean_elaborator_level__get__app__args___main___closed__1;
x_10 = lean::string_append(x_9, x_8);
lean::dec(x_8);
x_12 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_10, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
return x_12;
}
else
{
obj* x_15; obj* x_18; uint8 x_19; 
x_15 = lean::cnstr_get(x_4, 0);
lean::inc(x_15);
lean::dec(x_4);
x_18 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
x_19 = lean_name_dec_eq(x_15, x_18);
if (x_19 == 0)
{
obj* x_20; uint8 x_21; 
x_20 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
x_21 = lean_name_dec_eq(x_15, x_20);
lean::dec(x_15);
if (x_21 == 0)
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_30; 
lean::inc(x_0);
x_24 = l_lean_parser_syntax_to__format___main(x_0);
x_25 = lean::mk_nat_obj(80u);
x_26 = l_lean_format_pretty(x_24, x_25);
x_27 = l_lean_elaborator_level__get__app__args___main___closed__1;
x_28 = lean::string_append(x_27, x_26);
lean::dec(x_26);
x_30 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_28, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
return x_30;
}
else
{
obj* x_33; obj* x_34; obj* x_38; 
x_33 = l_lean_parser_level_trailing_has__view;
x_34 = lean::cnstr_get(x_33, 0);
lean::inc(x_34);
lean::dec(x_33);
lean::inc(x_0);
x_38 = lean::apply_1(x_34, x_0);
if (lean::obj_tag(x_38) == 0)
{
obj* x_40; obj* x_43; obj* x_45; 
lean::dec(x_0);
x_40 = lean::cnstr_get(x_38, 0);
lean::inc(x_40);
lean::dec(x_38);
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = l_lean_elaborator_level__get__app__args___main(x_43, x_1, x_2);
if (lean::obj_tag(x_45) == 0)
{
obj* x_47; obj* x_49; obj* x_50; 
lean::dec(x_40);
x_47 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_49 = x_45;
} else {
 lean::inc(x_47);
 lean::dec(x_45);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_53; obj* x_54; obj* x_56; obj* x_58; obj* x_59; obj* x_61; obj* x_63; obj* x_64; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_53 = x_45;
} else {
 lean::inc(x_51);
 lean::dec(x_45);
 x_53 = lean::box(0);
}
x_54 = lean::cnstr_get(x_51, 0);
x_56 = lean::cnstr_get(x_51, 1);
if (lean::is_exclusive(x_51)) {
 x_58 = x_51;
} else {
 lean::inc(x_54);
 lean::inc(x_56);
 lean::dec(x_51);
 x_58 = lean::box(0);
}
x_59 = lean::cnstr_get(x_54, 0);
x_61 = lean::cnstr_get(x_54, 1);
if (lean::is_exclusive(x_54)) {
 x_63 = x_54;
} else {
 lean::inc(x_59);
 lean::inc(x_61);
 lean::dec(x_54);
 x_63 = lean::box(0);
}
x_64 = lean::cnstr_get(x_40, 1);
lean::inc(x_64);
lean::dec(x_40);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_64);
lean::cnstr_set(x_67, 1, x_61);
if (lean::is_scalar(x_63)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_63;
}
lean::cnstr_set(x_68, 0, x_59);
lean::cnstr_set(x_68, 1, x_67);
if (lean::is_scalar(x_58)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_58;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_53)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_53;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_1);
lean::dec(x_38);
x_73 = lean::box(0);
x_74 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_74, 0, x_0);
lean::cnstr_set(x_74, 1, x_73);
x_75 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_2);
x_76 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_76, 0, x_75);
return x_76;
}
}
}
else
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
lean::dec(x_1);
lean::dec(x_15);
x_79 = lean::box(0);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_0);
lean::cnstr_set(x_80, 1, x_79);
x_81 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_2);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
return x_82;
}
}
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_3);
return x_4;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_level__get__app__args(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_level__get__app__args___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_level__add___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; 
x_4 = lean::mk_nat_obj(1u);
x_5 = lean::nat_sub(x_1, x_4);
x_6 = l_lean_elaborator_level__add___main(x_0, x_5);
lean::dec(x_5);
x_8 = level_mk_succ(x_6);
return x_8;
}
else
{
lean::inc(x_0);
return x_0;
}
}
}
obj* l_lean_elaborator_level__add___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_level__add___main(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_level__add(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_level__add___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_level__add___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_level__add(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__level___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::inc(x_0);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_0, x_5);
x_9 = level_mk_max(x_3, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__level___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::inc(x_0);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_0, x_5);
x_9 = level_mk_imax(x_3, x_8);
return x_9;
}
}
}
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_name__map_contains___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_rbnode_find___main___at_lean_name__map_contains___spec__2___rarg(x_2, x_1);
return x_5;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_level: unexpected input: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed universe level");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = level_mk_mvar(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown universe variable '");
return x_0;
}
}
obj* l_lean_elaborator_to__level___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_elaborator_level__get__app__args___main(x_0, x_1, x_2);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_10 = x_5;
} else {
 lean::inc(x_8);
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_26; 
x_12 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 x_14 = x_5;
} else {
 lean::inc(x_12);
 lean::dec(x_5);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
x_20 = lean::cnstr_get(x_15, 0);
x_22 = lean::cnstr_get(x_15, 1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_set(x_15, 0, lean::box(0));
 lean::cnstr_set(x_15, 1, lean::box(0));
 x_24 = x_15;
} else {
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_15);
 x_24 = lean::box(0);
}
lean::inc(x_20);
x_26 = l_lean_parser_syntax_kind___main(x_20);
if (lean::obj_tag(x_26) == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_38; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_20);
lean::dec(x_22);
lean::inc(x_0);
x_32 = l_lean_parser_syntax_to__format___main(x_0);
x_33 = lean::mk_nat_obj(80u);
x_34 = l_lean_format_pretty(x_32, x_33);
x_35 = l_lean_elaborator_to__level___main___closed__1;
x_36 = lean::string_append(x_35, x_34);
lean::dec(x_34);
x_38 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_36, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_38;
}
else
{
obj* x_41; obj* x_44; uint8 x_45; 
x_41 = lean::cnstr_get(x_26, 0);
lean::inc(x_41);
lean::dec(x_26);
x_44 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
x_45 = lean_name_dec_eq(x_41, x_44);
if (x_45 == 0)
{
obj* x_48; uint8 x_49; 
lean::dec(x_14);
lean::dec(x_24);
x_48 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
x_49 = lean_name_dec_eq(x_41, x_48);
lean::dec(x_41);
if (x_49 == 0)
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_60; 
lean::dec(x_20);
lean::dec(x_22);
lean::inc(x_0);
x_54 = l_lean_parser_syntax_to__format___main(x_0);
x_55 = lean::mk_nat_obj(80u);
x_56 = l_lean_format_pretty(x_54, x_55);
x_57 = l_lean_elaborator_to__level___main___closed__1;
x_58 = lean::string_append(x_57, x_56);
lean::dec(x_56);
x_60 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_58, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_60;
}
else
{
obj* x_63; obj* x_64; obj* x_67; 
x_63 = l_lean_parser_level_trailing_has__view;
x_64 = lean::cnstr_get(x_63, 0);
lean::inc(x_64);
lean::dec(x_63);
x_67 = lean::apply_1(x_64, x_20);
if (lean::obj_tag(x_67) == 0)
{
obj* x_70; obj* x_71; 
lean::dec(x_67);
lean::dec(x_22);
x_70 = l_lean_elaborator_to__level___main___closed__2;
x_71 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_70, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_71;
}
else
{
if (lean::obj_tag(x_22) == 0)
{
obj* x_75; obj* x_78; obj* x_80; 
lean::dec(x_0);
x_75 = lean::cnstr_get(x_67, 0);
lean::inc(x_75);
lean::dec(x_67);
x_78 = lean::cnstr_get(x_75, 0);
lean::inc(x_78);
x_80 = l_lean_elaborator_to__level___main(x_78, x_1, x_17);
if (lean::obj_tag(x_80) == 0)
{
obj* x_82; obj* x_84; obj* x_85; 
lean::dec(x_75);
x_82 = lean::cnstr_get(x_80, 0);
if (lean::is_exclusive(x_80)) {
 x_84 = x_80;
} else {
 lean::inc(x_82);
 lean::dec(x_80);
 x_84 = lean::box(0);
}
if (lean::is_scalar(x_84)) {
 x_85 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_85 = x_84;
}
lean::cnstr_set(x_85, 0, x_82);
return x_85;
}
else
{
obj* x_86; obj* x_88; obj* x_89; obj* x_91; obj* x_93; obj* x_94; obj* x_97; obj* x_98; obj* x_101; obj* x_102; 
x_86 = lean::cnstr_get(x_80, 0);
if (lean::is_exclusive(x_80)) {
 x_88 = x_80;
} else {
 lean::inc(x_86);
 lean::dec(x_80);
 x_88 = lean::box(0);
}
x_89 = lean::cnstr_get(x_86, 0);
x_91 = lean::cnstr_get(x_86, 1);
if (lean::is_exclusive(x_86)) {
 x_93 = x_86;
} else {
 lean::inc(x_89);
 lean::inc(x_91);
 lean::dec(x_86);
 x_93 = lean::box(0);
}
x_94 = lean::cnstr_get(x_75, 2);
lean::inc(x_94);
lean::dec(x_75);
x_97 = l_lean_parser_number_view_to__nat___main(x_94);
x_98 = l_lean_elaborator_level__add___main(x_89, x_97);
lean::dec(x_97);
lean::dec(x_89);
if (lean::is_scalar(x_93)) {
 x_101 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_101 = x_93;
}
lean::cnstr_set(x_101, 0, x_98);
lean::cnstr_set(x_101, 1, x_91);
if (lean::is_scalar(x_88)) {
 x_102 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_102 = x_88;
}
lean::cnstr_set(x_102, 0, x_101);
return x_102;
}
}
else
{
obj* x_105; obj* x_106; 
lean::dec(x_67);
lean::dec(x_22);
x_105 = l_lean_elaborator_to__level___main___closed__2;
x_106 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_105, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_106;
}
}
}
}
else
{
obj* x_110; obj* x_111; obj* x_114; 
lean::dec(x_41);
x_110 = l_lean_parser_level_leading_has__view;
x_111 = lean::cnstr_get(x_110, 0);
lean::inc(x_111);
lean::dec(x_110);
x_114 = lean::apply_1(x_111, x_20);
switch (lean::obj_tag(x_114)) {
case 0:
{
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_114);
if (lean::obj_tag(x_22) == 0)
{
obj* x_118; obj* x_119; 
x_118 = l_lean_elaborator_to__level___main___closed__2;
x_119 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_118, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_119;
}
else
{
obj* x_123; obj* x_125; obj* x_129; 
lean::dec(x_0);
x_123 = lean::cnstr_get(x_22, 0);
lean::inc(x_123);
x_125 = lean::cnstr_get(x_22, 1);
lean::inc(x_125);
lean::dec(x_22);
lean::inc(x_1);
x_129 = l_lean_elaborator_to__level___main(x_123, x_1, x_17);
if (lean::obj_tag(x_129) == 0)
{
obj* x_132; obj* x_134; obj* x_135; 
lean::dec(x_1);
lean::dec(x_125);
x_132 = lean::cnstr_get(x_129, 0);
if (lean::is_exclusive(x_129)) {
 x_134 = x_129;
} else {
 lean::inc(x_132);
 lean::dec(x_129);
 x_134 = lean::box(0);
}
if (lean::is_scalar(x_134)) {
 x_135 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_135 = x_134;
}
lean::cnstr_set(x_135, 0, x_132);
return x_135;
}
else
{
obj* x_136; obj* x_139; obj* x_141; obj* x_144; 
x_136 = lean::cnstr_get(x_129, 0);
lean::inc(x_136);
lean::dec(x_129);
x_139 = lean::cnstr_get(x_136, 0);
lean::inc(x_139);
x_141 = lean::cnstr_get(x_136, 1);
lean::inc(x_141);
lean::dec(x_136);
x_144 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(x_125, x_1, x_141);
if (lean::obj_tag(x_144) == 0)
{
obj* x_146; obj* x_148; obj* x_149; 
lean::dec(x_139);
x_146 = lean::cnstr_get(x_144, 0);
if (lean::is_exclusive(x_144)) {
 x_148 = x_144;
} else {
 lean::inc(x_146);
 lean::dec(x_144);
 x_148 = lean::box(0);
}
if (lean::is_scalar(x_148)) {
 x_149 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_149 = x_148;
}
lean::cnstr_set(x_149, 0, x_146);
return x_149;
}
else
{
obj* x_150; obj* x_152; obj* x_153; obj* x_155; obj* x_157; obj* x_158; obj* x_160; obj* x_161; 
x_150 = lean::cnstr_get(x_144, 0);
if (lean::is_exclusive(x_144)) {
 x_152 = x_144;
} else {
 lean::inc(x_150);
 lean::dec(x_144);
 x_152 = lean::box(0);
}
x_153 = lean::cnstr_get(x_150, 0);
x_155 = lean::cnstr_get(x_150, 1);
if (lean::is_exclusive(x_150)) {
 x_157 = x_150;
} else {
 lean::inc(x_153);
 lean::inc(x_155);
 lean::dec(x_150);
 x_157 = lean::box(0);
}
x_158 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_139, x_153);
lean::dec(x_139);
if (lean::is_scalar(x_157)) {
 x_160 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_160 = x_157;
}
lean::cnstr_set(x_160, 0, x_158);
lean::cnstr_set(x_160, 1, x_155);
if (lean::is_scalar(x_152)) {
 x_161 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_161 = x_152;
}
lean::cnstr_set(x_161, 0, x_160);
return x_161;
}
}
}
}
case 1:
{
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_114);
if (lean::obj_tag(x_22) == 0)
{
obj* x_165; obj* x_166; 
x_165 = l_lean_elaborator_to__level___main___closed__2;
x_166 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_165, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_166;
}
else
{
obj* x_170; obj* x_172; obj* x_176; 
lean::dec(x_0);
x_170 = lean::cnstr_get(x_22, 0);
lean::inc(x_170);
x_172 = lean::cnstr_get(x_22, 1);
lean::inc(x_172);
lean::dec(x_22);
lean::inc(x_1);
x_176 = l_lean_elaborator_to__level___main(x_170, x_1, x_17);
if (lean::obj_tag(x_176) == 0)
{
obj* x_179; obj* x_181; obj* x_182; 
lean::dec(x_172);
lean::dec(x_1);
x_179 = lean::cnstr_get(x_176, 0);
if (lean::is_exclusive(x_176)) {
 x_181 = x_176;
} else {
 lean::inc(x_179);
 lean::dec(x_176);
 x_181 = lean::box(0);
}
if (lean::is_scalar(x_181)) {
 x_182 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_182 = x_181;
}
lean::cnstr_set(x_182, 0, x_179);
return x_182;
}
else
{
obj* x_183; obj* x_186; obj* x_188; obj* x_191; 
x_183 = lean::cnstr_get(x_176, 0);
lean::inc(x_183);
lean::dec(x_176);
x_186 = lean::cnstr_get(x_183, 0);
lean::inc(x_186);
x_188 = lean::cnstr_get(x_183, 1);
lean::inc(x_188);
lean::dec(x_183);
x_191 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(x_172, x_1, x_188);
if (lean::obj_tag(x_191) == 0)
{
obj* x_193; obj* x_195; obj* x_196; 
lean::dec(x_186);
x_193 = lean::cnstr_get(x_191, 0);
if (lean::is_exclusive(x_191)) {
 x_195 = x_191;
} else {
 lean::inc(x_193);
 lean::dec(x_191);
 x_195 = lean::box(0);
}
if (lean::is_scalar(x_195)) {
 x_196 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_196 = x_195;
}
lean::cnstr_set(x_196, 0, x_193);
return x_196;
}
else
{
obj* x_197; obj* x_199; obj* x_200; obj* x_202; obj* x_204; obj* x_205; obj* x_207; obj* x_208; 
x_197 = lean::cnstr_get(x_191, 0);
if (lean::is_exclusive(x_191)) {
 x_199 = x_191;
} else {
 lean::inc(x_197);
 lean::dec(x_191);
 x_199 = lean::box(0);
}
x_200 = lean::cnstr_get(x_197, 0);
x_202 = lean::cnstr_get(x_197, 1);
if (lean::is_exclusive(x_197)) {
 x_204 = x_197;
} else {
 lean::inc(x_200);
 lean::inc(x_202);
 lean::dec(x_197);
 x_204 = lean::box(0);
}
x_205 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_186, x_200);
lean::dec(x_186);
if (lean::is_scalar(x_204)) {
 x_207 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_207 = x_204;
}
lean::cnstr_set(x_207, 0, x_205);
lean::cnstr_set(x_207, 1, x_202);
if (lean::is_scalar(x_199)) {
 x_208 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_208 = x_199;
}
lean::cnstr_set(x_208, 0, x_207);
return x_208;
}
}
}
}
case 2:
{
lean::dec(x_114);
if (lean::obj_tag(x_22) == 0)
{
obj* x_212; obj* x_213; obj* x_214; 
lean::dec(x_1);
lean::dec(x_0);
x_212 = l_lean_elaborator_to__level___main___closed__3;
if (lean::is_scalar(x_24)) {
 x_213 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_213 = x_24;
}
lean::cnstr_set(x_213, 0, x_212);
lean::cnstr_set(x_213, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_214 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_214 = x_14;
}
lean::cnstr_set(x_214, 0, x_213);
return x_214;
}
else
{
obj* x_218; obj* x_219; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_22);
x_218 = l_lean_elaborator_to__level___main___closed__2;
x_219 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_218, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_219;
}
}
case 3:
{
obj* x_226; obj* x_227; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_22);
lean::dec(x_114);
x_226 = l_lean_elaborator_to__level___main___closed__2;
x_227 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_226, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_227;
}
case 4:
{
if (lean::obj_tag(x_22) == 0)
{
obj* x_232; obj* x_235; obj* x_236; obj* x_238; obj* x_239; 
lean::dec(x_1);
lean::dec(x_0);
x_232 = lean::cnstr_get(x_114, 0);
lean::inc(x_232);
lean::dec(x_114);
x_235 = l_lean_parser_number_view_to__nat___main(x_232);
x_236 = l_lean_level_of__nat___main(x_235);
lean::dec(x_235);
if (lean::is_scalar(x_24)) {
 x_238 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_238 = x_24;
}
lean::cnstr_set(x_238, 0, x_236);
lean::cnstr_set(x_238, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_239 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_239 = x_14;
}
lean::cnstr_set(x_239, 0, x_238);
return x_239;
}
else
{
obj* x_244; obj* x_245; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_22);
lean::dec(x_114);
x_244 = l_lean_elaborator_to__level___main___closed__2;
x_245 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_244, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_245;
}
}
default:
{
if (lean::obj_tag(x_22) == 0)
{
obj* x_248; obj* x_251; obj* x_252; obj* x_254; obj* x_257; 
x_248 = lean::cnstr_get(x_114, 0);
lean::inc(x_248);
lean::dec(x_114);
x_251 = l_lean_elaborator_mangle__ident(x_248);
x_252 = lean::cnstr_get(x_17, 4);
lean::inc(x_252);
x_254 = lean::cnstr_get(x_252, 1);
lean::inc(x_254);
lean::dec(x_252);
x_257 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_254, x_251);
if (lean::obj_tag(x_257) == 0)
{
obj* x_260; obj* x_261; obj* x_262; obj* x_263; obj* x_265; obj* x_266; obj* x_267; 
lean::dec(x_14);
lean::dec(x_24);
x_260 = l_lean_name_to__string___closed__1;
x_261 = l_lean_name_to__string__with__sep___main(x_260, x_251);
x_262 = l_lean_elaborator_to__level___main___closed__4;
x_263 = lean::string_append(x_262, x_261);
lean::dec(x_261);
x_265 = l_char_has__repr___closed__1;
x_266 = lean::string_append(x_263, x_265);
x_267 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_266, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_267;
}
else
{
obj* x_273; obj* x_274; obj* x_275; 
lean::dec(x_257);
lean::dec(x_1);
lean::dec(x_0);
x_273 = level_mk_param(x_251);
if (lean::is_scalar(x_24)) {
 x_274 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_274 = x_24;
}
lean::cnstr_set(x_274, 0, x_273);
lean::cnstr_set(x_274, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_275 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_275 = x_14;
}
lean::cnstr_set(x_275, 0, x_274);
return x_275;
}
}
else
{
obj* x_280; obj* x_281; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_22);
lean::dec(x_114);
x_280 = l_lean_elaborator_to__level___main___closed__2;
x_281 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_280, x_1, x_17);
lean::dec(x_17);
lean::dec(x_0);
return x_281;
}
}
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_to__level(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_to__level___main(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_expr_mk__annotation___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("annotation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_expr_mk__annotation(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::box(0);
x_3 = l_lean_elaborator_expr_mk__annotation___closed__1;
x_4 = l_lean_kvmap_set__name(x_2, x_3, x_0);
x_5 = lean_expr_mk_mdata(x_4, x_1);
return x_5;
}
}
obj* _init_l_lean_elaborator_dummy() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Prop");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean_expr_mk_const(x_2, x_3);
return x_4;
}
}
obj* _init_l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_14; obj* x_16; obj* x_20; uint8 x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_10 = x_1;
} else {
 lean::inc(x_8);
 lean::dec(x_1);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
lean::dec(x_4);
x_14 = lean::cnstr_get(x_6, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_6, 1);
lean::inc(x_16);
lean::dec(x_6);
lean::inc(x_0);
x_20 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(x_0, x_8);
x_21 = 4;
lean::inc(x_11);
x_23 = lean_expr_local(x_11, x_11, x_0, x_21);
x_24 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
x_25 = l_lean_elaborator_expr_mk__annotation(x_24, x_23);
x_26 = l_list_foldl___main___at_lean_expr_mk__app___spec__1(x_25, x_14);
x_27 = lean_expr_mk_app(x_26, x_16);
if (lean::is_scalar(x_10)) {
 x_28 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_28 = x_10;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_20);
return x_28;
}
}
}
obj* _init_l_lean_elaborator_mk__eqns___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_mk__eqns___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("pre_equations");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_mk__eqns(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(x_0, x_1);
x_3 = l_lean_elaborator_mk__eqns___closed__1;
x_4 = l_lean_expr_mk__capp(x_3, x_2);
x_5 = l_lean_elaborator_mk__eqns___closed__2;
x_6 = l_lean_elaborator_expr_mk__annotation(x_5, x_4);
return x_6;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::inc(x_0);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_0, x_5);
x_9 = lean_expr_mk_app(x_3, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::dec(x_7);
lean::inc(x_1);
x_16 = l_lean_elaborator_to__pexpr___main(x_12, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_22 = x_16;
} else {
 lean::inc(x_20);
 lean::dec(x_16);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_32; 
x_24 = lean::cnstr_get(x_16, 0);
lean::inc(x_24);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
x_32 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(x_9, x_1, x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_11);
lean::dec(x_27);
x_35 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_37 = x_32;
} else {
 lean::inc(x_35);
 lean::dec(x_32);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_39 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_41 = x_32;
} else {
 lean::inc(x_39);
 lean::dec(x_32);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 0);
x_44 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_46 = x_39;
} else {
 lean::inc(x_42);
 lean::inc(x_44);
 lean::dec(x_39);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_47 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_47 = x_11;
}
lean::cnstr_set(x_47, 0, x_27);
lean::cnstr_set(x_47, 1, x_42);
if (lean::is_scalar(x_46)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_46;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_44);
if (lean::is_scalar(x_41)) {
 x_49 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_49 = x_41;
}
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_match_fn");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_15; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::inc(x_1);
x_15 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(x_12, x_1, x_2);
if (lean::obj_tag(x_15) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_15, 0);
if (lean::is_exclusive(x_15)) {
 x_22 = x_15;
} else {
 lean::inc(x_20);
 lean::dec(x_15);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_31; obj* x_32; obj* x_36; 
x_24 = lean::cnstr_get(x_15, 0);
lean::inc(x_24);
lean::dec(x_15);
x_27 = lean::cnstr_get(x_24, 0);
x_29 = lean::cnstr_get(x_24, 1);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_set(x_24, 0, lean::box(0));
 lean::cnstr_set(x_24, 1, lean::box(0));
 x_31 = x_24;
} else {
 lean::inc(x_27);
 lean::inc(x_29);
 lean::dec(x_24);
 x_31 = lean::box(0);
}
x_32 = lean::cnstr_get(x_7, 2);
lean::inc(x_32);
lean::dec(x_7);
lean::inc(x_1);
x_36 = l_lean_elaborator_to__pexpr___main(x_32, x_1, x_29);
if (lean::obj_tag(x_36) == 0)
{
obj* x_42; obj* x_44; obj* x_45; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
lean::dec(x_27);
lean::dec(x_31);
x_42 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_44 = x_36;
} else {
 lean::inc(x_42);
 lean::dec(x_36);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_42);
return x_45;
}
else
{
obj* x_46; obj* x_49; obj* x_51; obj* x_53; obj* x_54; 
x_46 = lean::cnstr_get(x_36, 0);
lean::inc(x_46);
lean::dec(x_36);
x_49 = lean::cnstr_get(x_46, 0);
x_51 = lean::cnstr_get(x_46, 1);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_set(x_46, 0, lean::box(0));
 lean::cnstr_set(x_46, 1, lean::box(0));
 x_53 = x_46;
} else {
 lean::inc(x_49);
 lean::inc(x_51);
 lean::dec(x_46);
 x_53 = lean::box(0);
}
x_54 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(x_9, x_1, x_51);
if (lean::obj_tag(x_54) == 0)
{
obj* x_60; obj* x_62; obj* x_63; 
lean::dec(x_11);
lean::dec(x_27);
lean::dec(x_31);
lean::dec(x_49);
lean::dec(x_53);
x_60 = lean::cnstr_get(x_54, 0);
if (lean::is_exclusive(x_54)) {
 x_62 = x_54;
} else {
 lean::inc(x_60);
 lean::dec(x_54);
 x_62 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_63 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_63 = x_62;
}
lean::cnstr_set(x_63, 0, x_60);
return x_63;
}
else
{
obj* x_64; obj* x_66; obj* x_67; obj* x_69; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_64 = lean::cnstr_get(x_54, 0);
if (lean::is_exclusive(x_54)) {
 x_66 = x_54;
} else {
 lean::inc(x_64);
 lean::dec(x_54);
 x_66 = lean::box(0);
}
x_67 = lean::cnstr_get(x_64, 0);
x_69 = lean::cnstr_get(x_64, 1);
if (lean::is_exclusive(x_64)) {
 x_71 = x_64;
} else {
 lean::inc(x_67);
 lean::inc(x_69);
 lean::dec(x_64);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_27);
lean::cnstr_set(x_72, 1, x_49);
x_73 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1;
if (lean::is_scalar(x_53)) {
 x_74 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_74 = x_53;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_72);
if (lean::is_scalar(x_11)) {
 x_75 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_75 = x_11;
}
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_67);
if (lean::is_scalar(x_31)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_31;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_69);
if (lean::is_scalar(x_66)) {
 x_77 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_77 = x_66;
}
lean::cnstr_set(x_77, 0, x_76);
return x_77;
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::dec(x_7);
lean::inc(x_1);
x_16 = l_lean_elaborator_to__pexpr___main(x_12, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_22 = x_16;
} else {
 lean::inc(x_20);
 lean::dec(x_16);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_32; 
x_24 = lean::cnstr_get(x_16, 0);
lean::inc(x_24);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
x_32 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(x_9, x_1, x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_11);
lean::dec(x_27);
x_35 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_37 = x_32;
} else {
 lean::inc(x_35);
 lean::dec(x_32);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_39 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_41 = x_32;
} else {
 lean::inc(x_39);
 lean::dec(x_32);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 0);
x_44 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_46 = x_39;
} else {
 lean::inc(x_42);
 lean::inc(x_44);
 lean::dec(x_39);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_47 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_47 = x_11;
}
lean::cnstr_set(x_47, 0, x_27);
lean::cnstr_set(x_47, 1, x_42);
if (lean::is_scalar(x_46)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_46;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_44);
if (lean::is_scalar(x_41)) {
 x_49 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_49 = x_41;
}
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
}
}
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1, 0, x_0);
lean::cnstr_set(x_1, 1, x_0);
return x_1;
}
else
{
obj* x_2; obj* x_4; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; uint8 x_9; uint8 x_10; 
lean::dec(x_4);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = 1;
x_10 = l_coe__decidable__eq(x_9);
if (x_10 == 0)
{
obj* x_13; obj* x_14; 
lean::dec(x_7);
lean::dec(x_2);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_0);
return x_14;
}
else
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_15 = x_0;
} else {
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_7);
x_17 = lean::cnstr_get(x_16, 0);
x_19 = lean::cnstr_get(x_16, 1);
if (lean::is_exclusive(x_16)) {
 x_21 = x_16;
} else {
 lean::inc(x_17);
 lean::inc(x_19);
 lean::dec(x_16);
 x_21 = lean::box(0);
}
if (lean::is_scalar(x_15)) {
 x_22 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_22 = x_15;
}
lean::cnstr_set(x_22, 0, x_2);
lean::cnstr_set(x_22, 1, x_17);
if (lean::is_scalar(x_21)) {
 x_23 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_23 = x_21;
}
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_19);
return x_23;
}
}
else
{
obj* x_25; uint8 x_27; uint8 x_28; 
lean::dec(x_4);
x_25 = lean::cnstr_get(x_0, 1);
lean::inc(x_25);
x_27 = 0;
x_28 = l_coe__decidable__eq(x_27);
if (x_28 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_2);
lean::dec(x_25);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_0);
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; obj* x_41; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_33 = x_0;
} else {
 lean::dec(x_0);
 x_33 = lean::box(0);
}
x_34 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_25);
x_35 = lean::cnstr_get(x_34, 0);
x_37 = lean::cnstr_get(x_34, 1);
if (lean::is_exclusive(x_34)) {
 x_39 = x_34;
} else {
 lean::inc(x_35);
 lean::inc(x_37);
 lean::dec(x_34);
 x_39 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_40 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_40 = x_33;
}
lean::cnstr_set(x_40, 0, x_2);
lean::cnstr_set(x_40, 1, x_35);
if (lean::is_scalar(x_39)) {
 x_41 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_41 = x_39;
}
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_37);
return x_41;
}
}
}
}
}
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1, 0, x_0);
lean::cnstr_set(x_1, 1, x_0);
return x_1;
}
else
{
obj* x_2; obj* x_4; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; uint8 x_9; uint8 x_10; 
lean::dec(x_4);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = 0;
x_10 = l_coe__decidable__eq(x_9);
if (x_10 == 0)
{
obj* x_13; obj* x_14; 
lean::dec(x_7);
lean::dec(x_2);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_0);
return x_14;
}
else
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_15 = x_0;
} else {
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_7);
x_17 = lean::cnstr_get(x_16, 0);
x_19 = lean::cnstr_get(x_16, 1);
if (lean::is_exclusive(x_16)) {
 x_21 = x_16;
} else {
 lean::inc(x_17);
 lean::inc(x_19);
 lean::dec(x_16);
 x_21 = lean::box(0);
}
if (lean::is_scalar(x_15)) {
 x_22 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_22 = x_15;
}
lean::cnstr_set(x_22, 0, x_2);
lean::cnstr_set(x_22, 1, x_17);
if (lean::is_scalar(x_21)) {
 x_23 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_23 = x_21;
}
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_19);
return x_23;
}
}
else
{
obj* x_24; obj* x_27; 
x_24 = lean::cnstr_get(x_4, 0);
lean::inc(x_24);
lean::dec(x_4);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
if (lean::obj_tag(x_27) == 0)
{
obj* x_30; uint8 x_32; uint8 x_33; 
x_30 = lean::cnstr_get(x_0, 1);
lean::inc(x_30);
x_32 = 0;
x_33 = l_coe__decidable__eq(x_32);
if (x_33 == 0)
{
obj* x_36; obj* x_37; 
lean::dec(x_2);
lean::dec(x_30);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_0);
return x_37;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_38 = x_0;
} else {
 lean::dec(x_0);
 x_38 = lean::box(0);
}
x_39 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_30);
x_40 = lean::cnstr_get(x_39, 0);
x_42 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_44 = x_39;
} else {
 lean::inc(x_40);
 lean::inc(x_42);
 lean::dec(x_39);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_38;
}
lean::cnstr_set(x_45, 0, x_2);
lean::cnstr_set(x_45, 1, x_40);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_42);
return x_46;
}
}
else
{
obj* x_48; uint8 x_50; uint8 x_51; 
lean::dec(x_27);
x_48 = lean::cnstr_get(x_0, 1);
lean::inc(x_48);
x_50 = 1;
x_51 = l_coe__decidable__eq(x_50);
if (x_51 == 0)
{
obj* x_54; obj* x_55; 
lean::dec(x_2);
lean::dec(x_48);
x_54 = lean::box(0);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_0);
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_60; obj* x_62; obj* x_63; obj* x_64; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_56 = x_0;
} else {
 lean::dec(x_0);
 x_56 = lean::box(0);
}
x_57 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_48);
x_58 = lean::cnstr_get(x_57, 0);
x_60 = lean::cnstr_get(x_57, 1);
if (lean::is_exclusive(x_57)) {
 x_62 = x_57;
} else {
 lean::inc(x_58);
 lean::inc(x_60);
 lean::dec(x_57);
 x_62 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_56;
}
lean::cnstr_set(x_63, 0, x_2);
lean::cnstr_set(x_63, 1, x_58);
if (lean::is_scalar(x_62)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_62;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_60);
return x_64;
}
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unreachable");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_22; 
x_13 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_15 = x_1;
} else {
 lean::inc(x_13);
 lean::dec(x_1);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_10, 0);
lean::inc(x_16);
lean::dec(x_10);
x_19 = lean::cnstr_get(x_16, 2);
lean::inc(x_19);
lean::inc(x_2);
x_22 = l_lean_elaborator_to__pexpr___main(x_19, x_2, x_3);
if (lean::obj_tag(x_22) == 0)
{
obj* x_27; obj* x_29; obj* x_30; 
lean::dec(x_13);
lean::dec(x_15);
lean::dec(x_2);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_22, 0);
if (lean::is_exclusive(x_22)) {
 x_29 = x_22;
} else {
 lean::inc(x_27);
 lean::dec(x_22);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_31; obj* x_34; obj* x_36; obj* x_39; 
x_31 = lean::cnstr_get(x_22, 0);
lean::inc(x_31);
lean::dec(x_22);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
x_39 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_13, x_2, x_36);
if (lean::obj_tag(x_39) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_15);
lean::dec(x_34);
lean::dec(x_16);
x_43 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_45 = x_39;
} else {
 lean::inc(x_43);
 lean::dec(x_39);
 x_45 = lean::box(0);
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_47 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_49 = x_39;
} else {
 lean::inc(x_47);
 lean::dec(x_39);
 x_49 = lean::box(0);
}
x_50 = lean::cnstr_get(x_47, 0);
x_52 = lean::cnstr_get(x_47, 1);
if (lean::is_exclusive(x_47)) {
 x_54 = x_47;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::dec(x_47);
 x_54 = lean::box(0);
}
x_55 = lean::box(0);
x_56 = lean::cnstr_get(x_16, 0);
lean::inc(x_56);
lean::dec(x_16);
x_59 = l_lean_elaborator_mangle__ident(x_56);
x_60 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
x_61 = l_lean_kvmap_set__name(x_55, x_60, x_59);
x_62 = lean_expr_mk_mdata(x_61, x_34);
if (lean::is_scalar(x_15)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_15;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_50);
if (lean::is_scalar(x_54)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_54;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_52);
if (lean::is_scalar(x_49)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_49;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
}
}
else
{
obj* x_67; obj* x_69; obj* x_70; obj* x_72; 
lean::dec(x_10);
x_67 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_69 = x_1;
} else {
 lean::inc(x_67);
 lean::dec(x_1);
 x_69 = lean::box(0);
}
x_70 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_72 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_70, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_72) == 0)
{
obj* x_77; obj* x_79; obj* x_80; 
lean::dec(x_2);
lean::dec(x_69);
lean::dec(x_67);
x_77 = lean::cnstr_get(x_72, 0);
if (lean::is_exclusive(x_72)) {
 x_79 = x_72;
} else {
 lean::inc(x_77);
 lean::dec(x_72);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_77);
return x_80;
}
else
{
obj* x_81; obj* x_84; obj* x_86; obj* x_89; 
x_81 = lean::cnstr_get(x_72, 0);
lean::inc(x_81);
lean::dec(x_72);
x_84 = lean::cnstr_get(x_81, 0);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_81, 1);
lean::inc(x_86);
lean::dec(x_81);
x_89 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_67, x_2, x_86);
if (lean::obj_tag(x_89) == 0)
{
obj* x_92; obj* x_94; obj* x_95; 
lean::dec(x_69);
lean::dec(x_84);
x_92 = lean::cnstr_get(x_89, 0);
if (lean::is_exclusive(x_89)) {
 x_94 = x_89;
} else {
 lean::inc(x_92);
 lean::dec(x_89);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
return x_95;
}
else
{
obj* x_96; obj* x_98; obj* x_99; obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_96 = lean::cnstr_get(x_89, 0);
if (lean::is_exclusive(x_89)) {
 x_98 = x_89;
} else {
 lean::inc(x_96);
 lean::dec(x_89);
 x_98 = lean::box(0);
}
x_99 = lean::cnstr_get(x_96, 0);
x_101 = lean::cnstr_get(x_96, 1);
if (lean::is_exclusive(x_96)) {
 x_103 = x_96;
} else {
 lean::inc(x_99);
 lean::inc(x_101);
 lean::dec(x_96);
 x_103 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_104 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_104 = x_69;
}
lean::cnstr_set(x_104, 0, x_84);
lean::cnstr_set(x_104, 1, x_99);
if (lean::is_scalar(x_103)) {
 x_105 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_105 = x_103;
}
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_101);
if (lean::is_scalar(x_98)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_98;
}
lean::cnstr_set(x_106, 0, x_105);
return x_106;
}
}
}
}
}
}
obj* _init_l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean_expr_mk_sort(x_0);
return x_1;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_19; 
lean::dec(x_10);
x_14 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_16 = x_1;
} else {
 lean::inc(x_14);
 lean::dec(x_1);
 x_16 = lean::box(0);
}
x_17 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_19 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_17, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_19, 0);
if (lean::is_exclusive(x_19)) {
 x_26 = x_19;
} else {
 lean::inc(x_24);
 lean::dec(x_19);
 x_26 = lean::box(0);
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_31; obj* x_33; obj* x_36; 
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
lean::dec(x_19);
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
lean::dec(x_28);
x_36 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_14, x_2, x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_39; obj* x_41; obj* x_42; 
lean::dec(x_16);
lean::dec(x_31);
x_39 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_41 = x_36;
} else {
 lean::inc(x_39);
 lean::dec(x_36);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_39);
return x_42;
}
else
{
obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_43 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_45 = x_36;
} else {
 lean::inc(x_43);
 lean::dec(x_36);
 x_45 = lean::box(0);
}
x_46 = lean::cnstr_get(x_43, 0);
x_48 = lean::cnstr_get(x_43, 1);
if (lean::is_exclusive(x_43)) {
 x_50 = x_43;
} else {
 lean::inc(x_46);
 lean::inc(x_48);
 lean::dec(x_43);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_51 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_51 = x_16;
}
lean::cnstr_set(x_51, 0, x_31);
lean::cnstr_set(x_51, 1, x_46);
if (lean::is_scalar(x_50)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_50;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_48);
if (lean::is_scalar(x_45)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_45;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
else
{
obj* x_54; obj* x_57; 
x_54 = lean::cnstr_get(x_10, 0);
lean::inc(x_54);
lean::dec(x_10);
x_57 = lean::cnstr_get(x_54, 1);
lean::inc(x_57);
lean::dec(x_54);
if (lean::obj_tag(x_57) == 0)
{
obj* x_60; obj* x_62; obj* x_63; obj* x_65; 
x_60 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_62 = x_1;
} else {
 lean::inc(x_60);
 lean::dec(x_1);
 x_62 = lean::box(0);
}
x_63 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_65 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_63, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_65) == 0)
{
obj* x_70; obj* x_72; obj* x_73; 
lean::dec(x_2);
lean::dec(x_62);
lean::dec(x_60);
x_70 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 x_72 = x_65;
} else {
 lean::inc(x_70);
 lean::dec(x_65);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_70);
return x_73;
}
else
{
obj* x_74; obj* x_77; obj* x_79; obj* x_82; 
x_74 = lean::cnstr_get(x_65, 0);
lean::inc(x_74);
lean::dec(x_65);
x_77 = lean::cnstr_get(x_74, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_74, 1);
lean::inc(x_79);
lean::dec(x_74);
x_82 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_60, x_2, x_79);
if (lean::obj_tag(x_82) == 0)
{
obj* x_85; obj* x_87; obj* x_88; 
lean::dec(x_62);
lean::dec(x_77);
x_85 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 x_87 = x_82;
} else {
 lean::inc(x_85);
 lean::dec(x_82);
 x_87 = lean::box(0);
}
if (lean::is_scalar(x_87)) {
 x_88 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_88 = x_87;
}
lean::cnstr_set(x_88, 0, x_85);
return x_88;
}
else
{
obj* x_89; obj* x_91; obj* x_92; obj* x_94; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
x_89 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 x_91 = x_82;
} else {
 lean::inc(x_89);
 lean::dec(x_82);
 x_91 = lean::box(0);
}
x_92 = lean::cnstr_get(x_89, 0);
x_94 = lean::cnstr_get(x_89, 1);
if (lean::is_exclusive(x_89)) {
 x_96 = x_89;
} else {
 lean::inc(x_92);
 lean::inc(x_94);
 lean::dec(x_89);
 x_96 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_97 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_97 = x_62;
}
lean::cnstr_set(x_97, 0, x_77);
lean::cnstr_set(x_97, 1, x_92);
if (lean::is_scalar(x_96)) {
 x_98 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_98 = x_96;
}
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_94);
if (lean::is_scalar(x_91)) {
 x_99 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_99 = x_91;
}
lean::cnstr_set(x_99, 0, x_98);
return x_99;
}
}
}
else
{
obj* x_100; obj* x_102; obj* x_103; obj* x_107; 
x_100 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_102 = x_1;
} else {
 lean::inc(x_100);
 lean::dec(x_1);
 x_102 = lean::box(0);
}
x_103 = lean::cnstr_get(x_57, 0);
lean::inc(x_103);
lean::dec(x_57);
lean::inc(x_2);
x_107 = l_lean_elaborator_to__pexpr___main(x_103, x_2, x_3);
if (lean::obj_tag(x_107) == 0)
{
obj* x_111; obj* x_113; obj* x_114; 
lean::dec(x_2);
lean::dec(x_102);
lean::dec(x_100);
x_111 = lean::cnstr_get(x_107, 0);
if (lean::is_exclusive(x_107)) {
 x_113 = x_107;
} else {
 lean::inc(x_111);
 lean::dec(x_107);
 x_113 = lean::box(0);
}
if (lean::is_scalar(x_113)) {
 x_114 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_114 = x_113;
}
lean::cnstr_set(x_114, 0, x_111);
return x_114;
}
else
{
obj* x_115; obj* x_118; obj* x_120; obj* x_123; 
x_115 = lean::cnstr_get(x_107, 0);
lean::inc(x_115);
lean::dec(x_107);
x_118 = lean::cnstr_get(x_115, 0);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_115, 1);
lean::inc(x_120);
lean::dec(x_115);
x_123 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_100, x_2, x_120);
if (lean::obj_tag(x_123) == 0)
{
obj* x_126; obj* x_128; obj* x_129; 
lean::dec(x_102);
lean::dec(x_118);
x_126 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_128 = x_123;
} else {
 lean::inc(x_126);
 lean::dec(x_123);
 x_128 = lean::box(0);
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_126);
return x_129;
}
else
{
obj* x_130; obj* x_132; obj* x_133; obj* x_135; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_130 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_132 = x_123;
} else {
 lean::inc(x_130);
 lean::dec(x_123);
 x_132 = lean::box(0);
}
x_133 = lean::cnstr_get(x_130, 0);
x_135 = lean::cnstr_get(x_130, 1);
if (lean::is_exclusive(x_130)) {
 x_137 = x_130;
} else {
 lean::inc(x_133);
 lean::inc(x_135);
 lean::dec(x_130);
 x_137 = lean::box(0);
}
if (lean::is_scalar(x_102)) {
 x_138 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_138 = x_102;
}
lean::cnstr_set(x_138, 0, x_118);
lean::cnstr_set(x_138, 1, x_133);
if (lean::is_scalar(x_137)) {
 x_139 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_139 = x_137;
}
lean::cnstr_set(x_139, 0, x_138);
lean::cnstr_set(x_139, 1, x_135);
if (lean::is_scalar(x_132)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_132;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_22; 
x_13 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_15 = x_1;
} else {
 lean::inc(x_13);
 lean::dec(x_1);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_10, 0);
lean::inc(x_16);
lean::dec(x_10);
x_19 = lean::cnstr_get(x_16, 2);
lean::inc(x_19);
lean::inc(x_2);
x_22 = l_lean_elaborator_to__pexpr___main(x_19, x_2, x_3);
if (lean::obj_tag(x_22) == 0)
{
obj* x_27; obj* x_29; obj* x_30; 
lean::dec(x_13);
lean::dec(x_15);
lean::dec(x_2);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_22, 0);
if (lean::is_exclusive(x_22)) {
 x_29 = x_22;
} else {
 lean::inc(x_27);
 lean::dec(x_22);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_31; obj* x_34; obj* x_36; obj* x_39; 
x_31 = lean::cnstr_get(x_22, 0);
lean::inc(x_31);
lean::dec(x_22);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
x_39 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_13, x_2, x_36);
if (lean::obj_tag(x_39) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_15);
lean::dec(x_34);
lean::dec(x_16);
x_43 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_45 = x_39;
} else {
 lean::inc(x_43);
 lean::dec(x_39);
 x_45 = lean::box(0);
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_47 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_49 = x_39;
} else {
 lean::inc(x_47);
 lean::dec(x_39);
 x_49 = lean::box(0);
}
x_50 = lean::cnstr_get(x_47, 0);
x_52 = lean::cnstr_get(x_47, 1);
if (lean::is_exclusive(x_47)) {
 x_54 = x_47;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::dec(x_47);
 x_54 = lean::box(0);
}
x_55 = lean::box(0);
x_56 = lean::cnstr_get(x_16, 0);
lean::inc(x_56);
lean::dec(x_16);
x_59 = l_lean_elaborator_mangle__ident(x_56);
x_60 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
x_61 = l_lean_kvmap_set__name(x_55, x_60, x_59);
x_62 = lean_expr_mk_mdata(x_61, x_34);
if (lean::is_scalar(x_15)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_15;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_50);
if (lean::is_scalar(x_54)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_54;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_52);
if (lean::is_scalar(x_49)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_49;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
}
}
else
{
obj* x_67; obj* x_69; obj* x_70; obj* x_72; 
lean::dec(x_10);
x_67 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_69 = x_1;
} else {
 lean::inc(x_67);
 lean::dec(x_1);
 x_69 = lean::box(0);
}
x_70 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_72 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_70, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_72) == 0)
{
obj* x_77; obj* x_79; obj* x_80; 
lean::dec(x_2);
lean::dec(x_69);
lean::dec(x_67);
x_77 = lean::cnstr_get(x_72, 0);
if (lean::is_exclusive(x_72)) {
 x_79 = x_72;
} else {
 lean::inc(x_77);
 lean::dec(x_72);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_77);
return x_80;
}
else
{
obj* x_81; obj* x_84; obj* x_86; obj* x_89; 
x_81 = lean::cnstr_get(x_72, 0);
lean::inc(x_81);
lean::dec(x_72);
x_84 = lean::cnstr_get(x_81, 0);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_81, 1);
lean::inc(x_86);
lean::dec(x_81);
x_89 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_67, x_2, x_86);
if (lean::obj_tag(x_89) == 0)
{
obj* x_92; obj* x_94; obj* x_95; 
lean::dec(x_69);
lean::dec(x_84);
x_92 = lean::cnstr_get(x_89, 0);
if (lean::is_exclusive(x_89)) {
 x_94 = x_89;
} else {
 lean::inc(x_92);
 lean::dec(x_89);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
return x_95;
}
else
{
obj* x_96; obj* x_98; obj* x_99; obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_96 = lean::cnstr_get(x_89, 0);
if (lean::is_exclusive(x_89)) {
 x_98 = x_89;
} else {
 lean::inc(x_96);
 lean::dec(x_89);
 x_98 = lean::box(0);
}
x_99 = lean::cnstr_get(x_96, 0);
x_101 = lean::cnstr_get(x_96, 1);
if (lean::is_exclusive(x_96)) {
 x_103 = x_96;
} else {
 lean::inc(x_99);
 lean::inc(x_101);
 lean::dec(x_96);
 x_103 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_104 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_104 = x_69;
}
lean::cnstr_set(x_104, 0, x_84);
lean::cnstr_set(x_104, 1, x_99);
if (lean::is_scalar(x_103)) {
 x_105 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_105 = x_103;
}
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_101);
if (lean::is_scalar(x_98)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_98;
}
lean::cnstr_set(x_106, 0, x_105);
return x_106;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_19; 
lean::dec(x_10);
x_14 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_16 = x_1;
} else {
 lean::inc(x_14);
 lean::dec(x_1);
 x_16 = lean::box(0);
}
x_17 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_19 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_17, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_19, 0);
if (lean::is_exclusive(x_19)) {
 x_26 = x_19;
} else {
 lean::inc(x_24);
 lean::dec(x_19);
 x_26 = lean::box(0);
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_31; obj* x_33; obj* x_36; 
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
lean::dec(x_19);
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
lean::dec(x_28);
x_36 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_14, x_2, x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_39; obj* x_41; obj* x_42; 
lean::dec(x_16);
lean::dec(x_31);
x_39 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_41 = x_36;
} else {
 lean::inc(x_39);
 lean::dec(x_36);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_39);
return x_42;
}
else
{
obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_43 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_45 = x_36;
} else {
 lean::inc(x_43);
 lean::dec(x_36);
 x_45 = lean::box(0);
}
x_46 = lean::cnstr_get(x_43, 0);
x_48 = lean::cnstr_get(x_43, 1);
if (lean::is_exclusive(x_43)) {
 x_50 = x_43;
} else {
 lean::inc(x_46);
 lean::inc(x_48);
 lean::dec(x_43);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_51 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_51 = x_16;
}
lean::cnstr_set(x_51, 0, x_31);
lean::cnstr_set(x_51, 1, x_46);
if (lean::is_scalar(x_50)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_50;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_48);
if (lean::is_scalar(x_45)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_45;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
else
{
obj* x_54; obj* x_57; 
x_54 = lean::cnstr_get(x_10, 0);
lean::inc(x_54);
lean::dec(x_10);
x_57 = lean::cnstr_get(x_54, 1);
lean::inc(x_57);
lean::dec(x_54);
if (lean::obj_tag(x_57) == 0)
{
obj* x_60; obj* x_62; obj* x_63; obj* x_65; 
x_60 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_62 = x_1;
} else {
 lean::inc(x_60);
 lean::dec(x_1);
 x_62 = lean::box(0);
}
x_63 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_65 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_63, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_65) == 0)
{
obj* x_70; obj* x_72; obj* x_73; 
lean::dec(x_2);
lean::dec(x_62);
lean::dec(x_60);
x_70 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 x_72 = x_65;
} else {
 lean::inc(x_70);
 lean::dec(x_65);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_70);
return x_73;
}
else
{
obj* x_74; obj* x_77; obj* x_79; obj* x_82; 
x_74 = lean::cnstr_get(x_65, 0);
lean::inc(x_74);
lean::dec(x_65);
x_77 = lean::cnstr_get(x_74, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_74, 1);
lean::inc(x_79);
lean::dec(x_74);
x_82 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_60, x_2, x_79);
if (lean::obj_tag(x_82) == 0)
{
obj* x_85; obj* x_87; obj* x_88; 
lean::dec(x_62);
lean::dec(x_77);
x_85 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 x_87 = x_82;
} else {
 lean::inc(x_85);
 lean::dec(x_82);
 x_87 = lean::box(0);
}
if (lean::is_scalar(x_87)) {
 x_88 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_88 = x_87;
}
lean::cnstr_set(x_88, 0, x_85);
return x_88;
}
else
{
obj* x_89; obj* x_91; obj* x_92; obj* x_94; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
x_89 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 x_91 = x_82;
} else {
 lean::inc(x_89);
 lean::dec(x_82);
 x_91 = lean::box(0);
}
x_92 = lean::cnstr_get(x_89, 0);
x_94 = lean::cnstr_get(x_89, 1);
if (lean::is_exclusive(x_89)) {
 x_96 = x_89;
} else {
 lean::inc(x_92);
 lean::inc(x_94);
 lean::dec(x_89);
 x_96 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_97 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_97 = x_62;
}
lean::cnstr_set(x_97, 0, x_77);
lean::cnstr_set(x_97, 1, x_92);
if (lean::is_scalar(x_96)) {
 x_98 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_98 = x_96;
}
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_94);
if (lean::is_scalar(x_91)) {
 x_99 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_99 = x_91;
}
lean::cnstr_set(x_99, 0, x_98);
return x_99;
}
}
}
else
{
obj* x_100; obj* x_102; obj* x_103; obj* x_107; 
x_100 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_102 = x_1;
} else {
 lean::inc(x_100);
 lean::dec(x_1);
 x_102 = lean::box(0);
}
x_103 = lean::cnstr_get(x_57, 0);
lean::inc(x_103);
lean::dec(x_57);
lean::inc(x_2);
x_107 = l_lean_elaborator_to__pexpr___main(x_103, x_2, x_3);
if (lean::obj_tag(x_107) == 0)
{
obj* x_111; obj* x_113; obj* x_114; 
lean::dec(x_2);
lean::dec(x_102);
lean::dec(x_100);
x_111 = lean::cnstr_get(x_107, 0);
if (lean::is_exclusive(x_107)) {
 x_113 = x_107;
} else {
 lean::inc(x_111);
 lean::dec(x_107);
 x_113 = lean::box(0);
}
if (lean::is_scalar(x_113)) {
 x_114 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_114 = x_113;
}
lean::cnstr_set(x_114, 0, x_111);
return x_114;
}
else
{
obj* x_115; obj* x_118; obj* x_120; obj* x_123; 
x_115 = lean::cnstr_get(x_107, 0);
lean::inc(x_115);
lean::dec(x_107);
x_118 = lean::cnstr_get(x_115, 0);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_115, 1);
lean::inc(x_120);
lean::dec(x_115);
x_123 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_100, x_2, x_120);
if (lean::obj_tag(x_123) == 0)
{
obj* x_126; obj* x_128; obj* x_129; 
lean::dec(x_102);
lean::dec(x_118);
x_126 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_128 = x_123;
} else {
 lean::inc(x_126);
 lean::dec(x_123);
 x_128 = lean::box(0);
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_126);
return x_129;
}
else
{
obj* x_130; obj* x_132; obj* x_133; obj* x_135; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_130 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_132 = x_123;
} else {
 lean::inc(x_130);
 lean::dec(x_123);
 x_132 = lean::box(0);
}
x_133 = lean::cnstr_get(x_130, 0);
x_135 = lean::cnstr_get(x_130, 1);
if (lean::is_exclusive(x_130)) {
 x_137 = x_130;
} else {
 lean::inc(x_133);
 lean::inc(x_135);
 lean::dec(x_130);
 x_137 = lean::box(0);
}
if (lean::is_scalar(x_102)) {
 x_138 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_138 = x_102;
}
lean::cnstr_set(x_138, 0, x_118);
lean::cnstr_set(x_138, 1, x_133);
if (lean::is_scalar(x_137)) {
 x_139 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_139 = x_137;
}
lean::cnstr_set(x_139, 0, x_138);
lean::cnstr_set(x_139, 1, x_135);
if (lean::is_scalar(x_132)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_132;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_22; 
x_13 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_15 = x_1;
} else {
 lean::inc(x_13);
 lean::dec(x_1);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_10, 0);
lean::inc(x_16);
lean::dec(x_10);
x_19 = lean::cnstr_get(x_16, 2);
lean::inc(x_19);
lean::inc(x_2);
x_22 = l_lean_elaborator_to__pexpr___main(x_19, x_2, x_3);
if (lean::obj_tag(x_22) == 0)
{
obj* x_27; obj* x_29; obj* x_30; 
lean::dec(x_13);
lean::dec(x_15);
lean::dec(x_2);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_22, 0);
if (lean::is_exclusive(x_22)) {
 x_29 = x_22;
} else {
 lean::inc(x_27);
 lean::dec(x_22);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_31; obj* x_34; obj* x_36; obj* x_39; 
x_31 = lean::cnstr_get(x_22, 0);
lean::inc(x_31);
lean::dec(x_22);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
x_39 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_13, x_2, x_36);
if (lean::obj_tag(x_39) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_15);
lean::dec(x_34);
lean::dec(x_16);
x_43 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_45 = x_39;
} else {
 lean::inc(x_43);
 lean::dec(x_39);
 x_45 = lean::box(0);
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_47 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_49 = x_39;
} else {
 lean::inc(x_47);
 lean::dec(x_39);
 x_49 = lean::box(0);
}
x_50 = lean::cnstr_get(x_47, 0);
x_52 = lean::cnstr_get(x_47, 1);
if (lean::is_exclusive(x_47)) {
 x_54 = x_47;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::dec(x_47);
 x_54 = lean::box(0);
}
x_55 = lean::box(0);
x_56 = lean::cnstr_get(x_16, 0);
lean::inc(x_56);
lean::dec(x_16);
x_59 = l_lean_elaborator_mangle__ident(x_56);
x_60 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
x_61 = l_lean_kvmap_set__name(x_55, x_60, x_59);
x_62 = lean_expr_mk_mdata(x_61, x_34);
if (lean::is_scalar(x_15)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_15;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_50);
if (lean::is_scalar(x_54)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_54;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_52);
if (lean::is_scalar(x_49)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_49;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
}
}
else
{
obj* x_67; obj* x_69; obj* x_70; obj* x_72; 
lean::dec(x_10);
x_67 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_69 = x_1;
} else {
 lean::inc(x_67);
 lean::dec(x_1);
 x_69 = lean::box(0);
}
x_70 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_72 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_70, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_72) == 0)
{
obj* x_77; obj* x_79; obj* x_80; 
lean::dec(x_2);
lean::dec(x_69);
lean::dec(x_67);
x_77 = lean::cnstr_get(x_72, 0);
if (lean::is_exclusive(x_72)) {
 x_79 = x_72;
} else {
 lean::inc(x_77);
 lean::dec(x_72);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_77);
return x_80;
}
else
{
obj* x_81; obj* x_84; obj* x_86; obj* x_89; 
x_81 = lean::cnstr_get(x_72, 0);
lean::inc(x_81);
lean::dec(x_72);
x_84 = lean::cnstr_get(x_81, 0);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_81, 1);
lean::inc(x_86);
lean::dec(x_81);
x_89 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_67, x_2, x_86);
if (lean::obj_tag(x_89) == 0)
{
obj* x_92; obj* x_94; obj* x_95; 
lean::dec(x_69);
lean::dec(x_84);
x_92 = lean::cnstr_get(x_89, 0);
if (lean::is_exclusive(x_89)) {
 x_94 = x_89;
} else {
 lean::inc(x_92);
 lean::dec(x_89);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
return x_95;
}
else
{
obj* x_96; obj* x_98; obj* x_99; obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_96 = lean::cnstr_get(x_89, 0);
if (lean::is_exclusive(x_89)) {
 x_98 = x_89;
} else {
 lean::inc(x_96);
 lean::dec(x_89);
 x_98 = lean::box(0);
}
x_99 = lean::cnstr_get(x_96, 0);
x_101 = lean::cnstr_get(x_96, 1);
if (lean::is_exclusive(x_96)) {
 x_103 = x_96;
} else {
 lean::inc(x_99);
 lean::inc(x_101);
 lean::dec(x_96);
 x_103 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_104 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_104 = x_69;
}
lean::cnstr_set(x_104, 0, x_84);
lean::cnstr_set(x_104, 1, x_99);
if (lean::is_scalar(x_103)) {
 x_105 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_105 = x_103;
}
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_101);
if (lean::is_scalar(x_98)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_98;
}
lean::cnstr_set(x_106, 0, x_105);
return x_106;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_19; 
lean::dec(x_10);
x_14 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_16 = x_1;
} else {
 lean::inc(x_14);
 lean::dec(x_1);
 x_16 = lean::box(0);
}
x_17 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_19 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_17, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_19, 0);
if (lean::is_exclusive(x_19)) {
 x_26 = x_19;
} else {
 lean::inc(x_24);
 lean::dec(x_19);
 x_26 = lean::box(0);
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_31; obj* x_33; obj* x_36; 
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
lean::dec(x_19);
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
lean::dec(x_28);
x_36 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_14, x_2, x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_39; obj* x_41; obj* x_42; 
lean::dec(x_16);
lean::dec(x_31);
x_39 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_41 = x_36;
} else {
 lean::inc(x_39);
 lean::dec(x_36);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_39);
return x_42;
}
else
{
obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_43 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_45 = x_36;
} else {
 lean::inc(x_43);
 lean::dec(x_36);
 x_45 = lean::box(0);
}
x_46 = lean::cnstr_get(x_43, 0);
x_48 = lean::cnstr_get(x_43, 1);
if (lean::is_exclusive(x_43)) {
 x_50 = x_43;
} else {
 lean::inc(x_46);
 lean::inc(x_48);
 lean::dec(x_43);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_51 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_51 = x_16;
}
lean::cnstr_set(x_51, 0, x_31);
lean::cnstr_set(x_51, 1, x_46);
if (lean::is_scalar(x_50)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_50;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_48);
if (lean::is_scalar(x_45)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_45;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
else
{
obj* x_54; obj* x_57; 
x_54 = lean::cnstr_get(x_10, 0);
lean::inc(x_54);
lean::dec(x_10);
x_57 = lean::cnstr_get(x_54, 1);
lean::inc(x_57);
lean::dec(x_54);
if (lean::obj_tag(x_57) == 0)
{
obj* x_60; obj* x_62; obj* x_63; obj* x_65; 
x_60 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_62 = x_1;
} else {
 lean::inc(x_60);
 lean::dec(x_1);
 x_62 = lean::box(0);
}
x_63 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_65 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_63, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_65) == 0)
{
obj* x_70; obj* x_72; obj* x_73; 
lean::dec(x_2);
lean::dec(x_62);
lean::dec(x_60);
x_70 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 x_72 = x_65;
} else {
 lean::inc(x_70);
 lean::dec(x_65);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_70);
return x_73;
}
else
{
obj* x_74; obj* x_77; obj* x_79; obj* x_82; 
x_74 = lean::cnstr_get(x_65, 0);
lean::inc(x_74);
lean::dec(x_65);
x_77 = lean::cnstr_get(x_74, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_74, 1);
lean::inc(x_79);
lean::dec(x_74);
x_82 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_60, x_2, x_79);
if (lean::obj_tag(x_82) == 0)
{
obj* x_85; obj* x_87; obj* x_88; 
lean::dec(x_62);
lean::dec(x_77);
x_85 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 x_87 = x_82;
} else {
 lean::inc(x_85);
 lean::dec(x_82);
 x_87 = lean::box(0);
}
if (lean::is_scalar(x_87)) {
 x_88 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_88 = x_87;
}
lean::cnstr_set(x_88, 0, x_85);
return x_88;
}
else
{
obj* x_89; obj* x_91; obj* x_92; obj* x_94; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
x_89 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 x_91 = x_82;
} else {
 lean::inc(x_89);
 lean::dec(x_82);
 x_91 = lean::box(0);
}
x_92 = lean::cnstr_get(x_89, 0);
x_94 = lean::cnstr_get(x_89, 1);
if (lean::is_exclusive(x_89)) {
 x_96 = x_89;
} else {
 lean::inc(x_92);
 lean::inc(x_94);
 lean::dec(x_89);
 x_96 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_97 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_97 = x_62;
}
lean::cnstr_set(x_97, 0, x_77);
lean::cnstr_set(x_97, 1, x_92);
if (lean::is_scalar(x_96)) {
 x_98 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_98 = x_96;
}
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_94);
if (lean::is_scalar(x_91)) {
 x_99 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_99 = x_91;
}
lean::cnstr_set(x_99, 0, x_98);
return x_99;
}
}
}
else
{
obj* x_100; obj* x_102; obj* x_103; obj* x_107; 
x_100 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_102 = x_1;
} else {
 lean::inc(x_100);
 lean::dec(x_1);
 x_102 = lean::box(0);
}
x_103 = lean::cnstr_get(x_57, 0);
lean::inc(x_103);
lean::dec(x_57);
lean::inc(x_2);
x_107 = l_lean_elaborator_to__pexpr___main(x_103, x_2, x_3);
if (lean::obj_tag(x_107) == 0)
{
obj* x_111; obj* x_113; obj* x_114; 
lean::dec(x_2);
lean::dec(x_102);
lean::dec(x_100);
x_111 = lean::cnstr_get(x_107, 0);
if (lean::is_exclusive(x_107)) {
 x_113 = x_107;
} else {
 lean::inc(x_111);
 lean::dec(x_107);
 x_113 = lean::box(0);
}
if (lean::is_scalar(x_113)) {
 x_114 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_114 = x_113;
}
lean::cnstr_set(x_114, 0, x_111);
return x_114;
}
else
{
obj* x_115; obj* x_118; obj* x_120; obj* x_123; 
x_115 = lean::cnstr_get(x_107, 0);
lean::inc(x_115);
lean::dec(x_107);
x_118 = lean::cnstr_get(x_115, 0);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_115, 1);
lean::inc(x_120);
lean::dec(x_115);
x_123 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_100, x_2, x_120);
if (lean::obj_tag(x_123) == 0)
{
obj* x_126; obj* x_128; obj* x_129; 
lean::dec(x_102);
lean::dec(x_118);
x_126 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_128 = x_123;
} else {
 lean::inc(x_126);
 lean::dec(x_123);
 x_128 = lean::box(0);
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_126);
return x_129;
}
else
{
obj* x_130; obj* x_132; obj* x_133; obj* x_135; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_130 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_132 = x_123;
} else {
 lean::inc(x_130);
 lean::dec(x_123);
 x_132 = lean::box(0);
}
x_133 = lean::cnstr_get(x_130, 0);
x_135 = lean::cnstr_get(x_130, 1);
if (lean::is_exclusive(x_130)) {
 x_137 = x_130;
} else {
 lean::inc(x_133);
 lean::inc(x_135);
 lean::dec(x_130);
 x_137 = lean::box(0);
}
if (lean::is_scalar(x_102)) {
 x_138 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_138 = x_102;
}
lean::cnstr_set(x_138, 0, x_118);
lean::cnstr_set(x_138, 1, x_133);
if (lean::is_scalar(x_137)) {
 x_139 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_139 = x_137;
}
lean::cnstr_set(x_139, 0, x_138);
lean::cnstr_set(x_139, 1, x_135);
if (lean::is_scalar(x_132)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_132;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_22; 
x_13 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_15 = x_1;
} else {
 lean::inc(x_13);
 lean::dec(x_1);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_10, 0);
lean::inc(x_16);
lean::dec(x_10);
x_19 = lean::cnstr_get(x_16, 2);
lean::inc(x_19);
lean::inc(x_2);
x_22 = l_lean_elaborator_to__pexpr___main(x_19, x_2, x_3);
if (lean::obj_tag(x_22) == 0)
{
obj* x_27; obj* x_29; obj* x_30; 
lean::dec(x_13);
lean::dec(x_15);
lean::dec(x_2);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_22, 0);
if (lean::is_exclusive(x_22)) {
 x_29 = x_22;
} else {
 lean::inc(x_27);
 lean::dec(x_22);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_31; obj* x_34; obj* x_36; obj* x_39; 
x_31 = lean::cnstr_get(x_22, 0);
lean::inc(x_31);
lean::dec(x_22);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
x_39 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_13, x_2, x_36);
if (lean::obj_tag(x_39) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_15);
lean::dec(x_34);
lean::dec(x_16);
x_43 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_45 = x_39;
} else {
 lean::inc(x_43);
 lean::dec(x_39);
 x_45 = lean::box(0);
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_47 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_49 = x_39;
} else {
 lean::inc(x_47);
 lean::dec(x_39);
 x_49 = lean::box(0);
}
x_50 = lean::cnstr_get(x_47, 0);
x_52 = lean::cnstr_get(x_47, 1);
if (lean::is_exclusive(x_47)) {
 x_54 = x_47;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::dec(x_47);
 x_54 = lean::box(0);
}
x_55 = lean::box(0);
x_56 = lean::cnstr_get(x_16, 0);
lean::inc(x_56);
lean::dec(x_16);
x_59 = l_lean_elaborator_mangle__ident(x_56);
x_60 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
x_61 = l_lean_kvmap_set__name(x_55, x_60, x_59);
x_62 = lean_expr_mk_mdata(x_61, x_34);
if (lean::is_scalar(x_15)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_15;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_50);
if (lean::is_scalar(x_54)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_54;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_52);
if (lean::is_scalar(x_49)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_49;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
}
}
else
{
obj* x_67; obj* x_69; obj* x_70; obj* x_72; 
lean::dec(x_10);
x_67 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_69 = x_1;
} else {
 lean::inc(x_67);
 lean::dec(x_1);
 x_69 = lean::box(0);
}
x_70 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_72 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_70, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_72) == 0)
{
obj* x_77; obj* x_79; obj* x_80; 
lean::dec(x_2);
lean::dec(x_69);
lean::dec(x_67);
x_77 = lean::cnstr_get(x_72, 0);
if (lean::is_exclusive(x_72)) {
 x_79 = x_72;
} else {
 lean::inc(x_77);
 lean::dec(x_72);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_77);
return x_80;
}
else
{
obj* x_81; obj* x_84; obj* x_86; obj* x_89; 
x_81 = lean::cnstr_get(x_72, 0);
lean::inc(x_81);
lean::dec(x_72);
x_84 = lean::cnstr_get(x_81, 0);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_81, 1);
lean::inc(x_86);
lean::dec(x_81);
x_89 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_67, x_2, x_86);
if (lean::obj_tag(x_89) == 0)
{
obj* x_92; obj* x_94; obj* x_95; 
lean::dec(x_69);
lean::dec(x_84);
x_92 = lean::cnstr_get(x_89, 0);
if (lean::is_exclusive(x_89)) {
 x_94 = x_89;
} else {
 lean::inc(x_92);
 lean::dec(x_89);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
return x_95;
}
else
{
obj* x_96; obj* x_98; obj* x_99; obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_96 = lean::cnstr_get(x_89, 0);
if (lean::is_exclusive(x_89)) {
 x_98 = x_89;
} else {
 lean::inc(x_96);
 lean::dec(x_89);
 x_98 = lean::box(0);
}
x_99 = lean::cnstr_get(x_96, 0);
x_101 = lean::cnstr_get(x_96, 1);
if (lean::is_exclusive(x_96)) {
 x_103 = x_96;
} else {
 lean::inc(x_99);
 lean::inc(x_101);
 lean::dec(x_96);
 x_103 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_104 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_104 = x_69;
}
lean::cnstr_set(x_104, 0, x_84);
lean::cnstr_set(x_104, 1, x_99);
if (lean::is_scalar(x_103)) {
 x_105 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_105 = x_103;
}
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_101);
if (lean::is_scalar(x_98)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_98;
}
lean::cnstr_set(x_106, 0, x_105);
return x_106;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_19; 
lean::dec(x_10);
x_14 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_16 = x_1;
} else {
 lean::inc(x_14);
 lean::dec(x_1);
 x_16 = lean::box(0);
}
x_17 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_19 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_17, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_19, 0);
if (lean::is_exclusive(x_19)) {
 x_26 = x_19;
} else {
 lean::inc(x_24);
 lean::dec(x_19);
 x_26 = lean::box(0);
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_31; obj* x_33; obj* x_36; 
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
lean::dec(x_19);
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
lean::dec(x_28);
x_36 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_14, x_2, x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_39; obj* x_41; obj* x_42; 
lean::dec(x_16);
lean::dec(x_31);
x_39 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_41 = x_36;
} else {
 lean::inc(x_39);
 lean::dec(x_36);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_39);
return x_42;
}
else
{
obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_43 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_45 = x_36;
} else {
 lean::inc(x_43);
 lean::dec(x_36);
 x_45 = lean::box(0);
}
x_46 = lean::cnstr_get(x_43, 0);
x_48 = lean::cnstr_get(x_43, 1);
if (lean::is_exclusive(x_43)) {
 x_50 = x_43;
} else {
 lean::inc(x_46);
 lean::inc(x_48);
 lean::dec(x_43);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_51 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_51 = x_16;
}
lean::cnstr_set(x_51, 0, x_31);
lean::cnstr_set(x_51, 1, x_46);
if (lean::is_scalar(x_50)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_50;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_48);
if (lean::is_scalar(x_45)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_45;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
else
{
obj* x_54; obj* x_57; 
x_54 = lean::cnstr_get(x_10, 0);
lean::inc(x_54);
lean::dec(x_10);
x_57 = lean::cnstr_get(x_54, 1);
lean::inc(x_57);
lean::dec(x_54);
if (lean::obj_tag(x_57) == 0)
{
obj* x_60; obj* x_62; obj* x_63; obj* x_65; 
x_60 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_62 = x_1;
} else {
 lean::inc(x_60);
 lean::dec(x_1);
 x_62 = lean::box(0);
}
x_63 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
x_65 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_63, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_65) == 0)
{
obj* x_70; obj* x_72; obj* x_73; 
lean::dec(x_2);
lean::dec(x_62);
lean::dec(x_60);
x_70 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 x_72 = x_65;
} else {
 lean::inc(x_70);
 lean::dec(x_65);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_70);
return x_73;
}
else
{
obj* x_74; obj* x_77; obj* x_79; obj* x_82; 
x_74 = lean::cnstr_get(x_65, 0);
lean::inc(x_74);
lean::dec(x_65);
x_77 = lean::cnstr_get(x_74, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_74, 1);
lean::inc(x_79);
lean::dec(x_74);
x_82 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_60, x_2, x_79);
if (lean::obj_tag(x_82) == 0)
{
obj* x_85; obj* x_87; obj* x_88; 
lean::dec(x_62);
lean::dec(x_77);
x_85 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 x_87 = x_82;
} else {
 lean::inc(x_85);
 lean::dec(x_82);
 x_87 = lean::box(0);
}
if (lean::is_scalar(x_87)) {
 x_88 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_88 = x_87;
}
lean::cnstr_set(x_88, 0, x_85);
return x_88;
}
else
{
obj* x_89; obj* x_91; obj* x_92; obj* x_94; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
x_89 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 x_91 = x_82;
} else {
 lean::inc(x_89);
 lean::dec(x_82);
 x_91 = lean::box(0);
}
x_92 = lean::cnstr_get(x_89, 0);
x_94 = lean::cnstr_get(x_89, 1);
if (lean::is_exclusive(x_89)) {
 x_96 = x_89;
} else {
 lean::inc(x_92);
 lean::inc(x_94);
 lean::dec(x_89);
 x_96 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_97 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_97 = x_62;
}
lean::cnstr_set(x_97, 0, x_77);
lean::cnstr_set(x_97, 1, x_92);
if (lean::is_scalar(x_96)) {
 x_98 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_98 = x_96;
}
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_94);
if (lean::is_scalar(x_91)) {
 x_99 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_99 = x_91;
}
lean::cnstr_set(x_99, 0, x_98);
return x_99;
}
}
}
else
{
obj* x_100; obj* x_102; obj* x_103; obj* x_107; 
x_100 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_102 = x_1;
} else {
 lean::inc(x_100);
 lean::dec(x_1);
 x_102 = lean::box(0);
}
x_103 = lean::cnstr_get(x_57, 0);
lean::inc(x_103);
lean::dec(x_57);
lean::inc(x_2);
x_107 = l_lean_elaborator_to__pexpr___main(x_103, x_2, x_3);
if (lean::obj_tag(x_107) == 0)
{
obj* x_111; obj* x_113; obj* x_114; 
lean::dec(x_2);
lean::dec(x_102);
lean::dec(x_100);
x_111 = lean::cnstr_get(x_107, 0);
if (lean::is_exclusive(x_107)) {
 x_113 = x_107;
} else {
 lean::inc(x_111);
 lean::dec(x_107);
 x_113 = lean::box(0);
}
if (lean::is_scalar(x_113)) {
 x_114 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_114 = x_113;
}
lean::cnstr_set(x_114, 0, x_111);
return x_114;
}
else
{
obj* x_115; obj* x_118; obj* x_120; obj* x_123; 
x_115 = lean::cnstr_get(x_107, 0);
lean::inc(x_115);
lean::dec(x_107);
x_118 = lean::cnstr_get(x_115, 0);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_115, 1);
lean::inc(x_120);
lean::dec(x_115);
x_123 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_100, x_2, x_120);
if (lean::obj_tag(x_123) == 0)
{
obj* x_126; obj* x_128; obj* x_129; 
lean::dec(x_102);
lean::dec(x_118);
x_126 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_128 = x_123;
} else {
 lean::inc(x_126);
 lean::dec(x_123);
 x_128 = lean::box(0);
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_126);
return x_129;
}
else
{
obj* x_130; obj* x_132; obj* x_133; obj* x_135; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_130 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_132 = x_123;
} else {
 lean::inc(x_130);
 lean::dec(x_123);
 x_132 = lean::box(0);
}
x_133 = lean::cnstr_get(x_130, 0);
x_135 = lean::cnstr_get(x_130, 1);
if (lean::is_exclusive(x_130)) {
 x_137 = x_130;
} else {
 lean::inc(x_133);
 lean::inc(x_135);
 lean::dec(x_130);
 x_137 = lean::box(0);
}
if (lean::is_scalar(x_102)) {
 x_138 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_138 = x_102;
}
lean::cnstr_set(x_138, 0, x_118);
lean::cnstr_set(x_138, 1, x_133);
if (lean::is_scalar(x_137)) {
 x_139 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_139 = x_137;
}
lean::cnstr_set(x_139, 0, x_138);
lean::cnstr_set(x_139, 1, x_135);
if (lean::is_scalar(x_132)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_132;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__pexpr___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(x_4);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = lean::box(0);
x_13 = lean_name_mk_numeral(x_12, x_7);
x_14 = l_lean_kvmap_set__name(x_0, x_13, x_9);
x_0 = x_14;
x_1 = x_4;
goto _start;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__level___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = lean::box(0);
x_13 = lean_name_mk_numeral(x_12, x_7);
x_14 = l_lean_kvmap_set__name(x_0, x_13, x_9);
x_0 = x_14;
x_1 = x_4;
goto _start;
}
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unexpected: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("app");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("column");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("row");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed choice");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("choice");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("ident_univs");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__8() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("lambda");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__9() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("pi");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__10() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("sort_app");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__11() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("anonymous_constructor");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__12() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("hole");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("have");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__14() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("show");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__15() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("let");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__16() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("projection");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__17() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("explicit");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__18() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("inaccessible");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__19() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("borrowed");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__20() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("choice");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__21() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("struct_inst");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__22() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("match");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__23() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unexpected node: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__24() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("match");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__25() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("structure instance");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__26() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("catchall");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("struct");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__28() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = l_option_get__or__else___main___rarg(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__29() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unexpected item in structure instance notation");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__30() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("NOT_A_STRING");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__31() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("borrowed");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__32() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("innaccessible");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__33() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@@");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__34() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field_notation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__35() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed let");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__36() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("this");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__37() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean_expr_mk_bvar(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__38() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("show");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__39() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("have");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__40() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::mk_string("this");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = l_option_get__or__else___main___rarg(x_3, x_2);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__41() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = l_lean_elaborator_dummy;
x_2 = lean_expr_mk_mvar(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__42() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("anonymous_constructor");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__43() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = level_mk_succ(x_0);
x_2 = lean_expr_mk_sort(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__44() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed pi");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__45() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed lambda");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__46() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("annotation");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("preresolved");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* l_lean_elaborator_to__pexpr___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
switch (lean::obj_tag(x_0)) {
case 2:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_14; obj* x_16; obj* x_18; uint8 x_19; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_5, 1);
lean::inc(x_9);
lean::dec(x_5);
x_18 = l_lean_elaborator_to__pexpr___main___closed__7;
x_19 = lean_name_dec_eq(x_7, x_18);
if (x_19 == 0)
{
obj* x_20; uint8 x_21; 
x_20 = l_lean_elaborator_to__pexpr___main___closed__2;
x_21 = lean_name_dec_eq(x_7, x_20);
if (x_21 == 0)
{
obj* x_22; uint8 x_23; 
x_22 = l_lean_elaborator_to__pexpr___main___closed__8;
x_23 = lean_name_dec_eq(x_7, x_22);
if (x_23 == 0)
{
obj* x_24; uint8 x_25; 
x_24 = l_lean_elaborator_to__pexpr___main___closed__9;
x_25 = lean_name_dec_eq(x_7, x_24);
if (x_25 == 0)
{
obj* x_26; uint8 x_27; 
x_26 = l_lean_parser_term_sort_has__view_x_27___lambda__1___closed__4;
x_27 = lean_name_dec_eq(x_7, x_26);
if (x_27 == 0)
{
obj* x_28; uint8 x_29; 
x_28 = l_lean_elaborator_to__pexpr___main___closed__10;
x_29 = lean_name_dec_eq(x_7, x_28);
if (x_29 == 0)
{
obj* x_30; uint8 x_31; 
x_30 = l_lean_elaborator_to__pexpr___main___closed__11;
x_31 = lean_name_dec_eq(x_7, x_30);
if (x_31 == 0)
{
obj* x_32; uint8 x_33; 
x_32 = l_lean_elaborator_to__pexpr___main___closed__12;
x_33 = lean_name_dec_eq(x_7, x_32);
if (x_33 == 0)
{
obj* x_34; uint8 x_35; 
x_34 = l_lean_elaborator_to__pexpr___main___closed__13;
x_35 = lean_name_dec_eq(x_7, x_34);
if (x_35 == 0)
{
obj* x_36; uint8 x_37; 
x_36 = l_lean_elaborator_to__pexpr___main___closed__14;
x_37 = lean_name_dec_eq(x_7, x_36);
if (x_37 == 0)
{
obj* x_38; uint8 x_39; 
x_38 = l_lean_elaborator_to__pexpr___main___closed__15;
x_39 = lean_name_dec_eq(x_7, x_38);
if (x_39 == 0)
{
obj* x_40; uint8 x_41; 
x_40 = l_lean_elaborator_to__pexpr___main___closed__16;
x_41 = lean_name_dec_eq(x_7, x_40);
if (x_41 == 0)
{
obj* x_42; uint8 x_43; 
x_42 = l_lean_elaborator_to__pexpr___main___closed__17;
x_43 = lean_name_dec_eq(x_7, x_42);
if (x_43 == 0)
{
obj* x_44; uint8 x_45; 
x_44 = l_lean_elaborator_to__pexpr___main___closed__18;
x_45 = lean_name_dec_eq(x_7, x_44);
if (x_45 == 0)
{
obj* x_46; uint8 x_47; 
x_46 = l_lean_elaborator_to__pexpr___main___closed__19;
x_47 = lean_name_dec_eq(x_7, x_46);
if (x_47 == 0)
{
obj* x_48; uint8 x_49; 
x_48 = l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
x_49 = lean_name_dec_eq(x_7, x_48);
if (x_49 == 0)
{
obj* x_50; uint8 x_51; 
x_50 = l_lean_parser_curr__lbp___rarg___lambda__3___closed__1;
x_51 = lean_name_dec_eq(x_7, x_50);
if (x_51 == 0)
{
obj* x_52; uint8 x_53; 
x_52 = l_lean_elaborator_to__pexpr___main___closed__20;
x_53 = lean_name_dec_eq(x_7, x_52);
if (x_53 == 0)
{
obj* x_55; uint8 x_56; 
lean::dec(x_9);
x_55 = l_lean_elaborator_to__pexpr___main___closed__21;
x_56 = lean_name_dec_eq(x_7, x_55);
if (x_56 == 0)
{
obj* x_57; uint8 x_58; 
x_57 = l_lean_elaborator_to__pexpr___main___closed__22;
x_58 = lean_name_dec_eq(x_7, x_57);
if (x_58 == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_65; 
x_59 = l_lean_name_to__string___closed__1;
x_60 = l_lean_name_to__string__with__sep___main(x_59, x_7);
x_61 = l_lean_elaborator_to__pexpr___main___closed__23;
x_62 = lean::string_append(x_61, x_60);
lean::dec(x_60);
lean::inc(x_1);
x_65 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_62, x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_65) == 0)
{
obj* x_69; obj* x_71; obj* x_72; 
lean::dec(x_1);
lean::dec(x_0);
x_69 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 x_71 = x_65;
} else {
 lean::inc(x_69);
 lean::dec(x_65);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_69);
return x_72;
}
else
{
obj* x_73; obj* x_75; 
x_73 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 lean::cnstr_set(x_65, 0, lean::box(0));
 x_75 = x_65;
} else {
 lean::inc(x_73);
 lean::dec(x_65);
 x_75 = lean::box(0);
}
if (x_21 == 0)
{
obj* x_76; obj* x_78; obj* x_80; obj* x_81; 
x_76 = lean::cnstr_get(x_73, 0);
x_78 = lean::cnstr_get(x_73, 1);
if (lean::is_exclusive(x_73)) {
 lean::cnstr_set(x_73, 0, lean::box(0));
 lean::cnstr_set(x_73, 1, lean::box(0));
 x_80 = x_73;
} else {
 lean::inc(x_76);
 lean::inc(x_78);
 lean::dec(x_73);
 x_80 = lean::box(0);
}
x_81 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_81) == 0)
{
obj* x_84; obj* x_85; 
lean::dec(x_1);
if (lean::is_scalar(x_80)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_80;
}
lean::cnstr_set(x_84, 0, x_76);
lean::cnstr_set(x_84, 1, x_78);
if (lean::is_scalar(x_75)) {
 x_85 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_85 = x_75;
}
lean::cnstr_set(x_85, 0, x_84);
return x_85;
}
else
{
obj* x_86; obj* x_89; obj* x_92; obj* x_95; obj* x_96; obj* x_97; obj* x_99; obj* x_100; obj* x_101; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; 
x_86 = lean::cnstr_get(x_81, 0);
lean::inc(x_86);
lean::dec(x_81);
x_89 = lean::cnstr_get(x_1, 0);
lean::inc(x_89);
lean::dec(x_1);
x_92 = lean::cnstr_get(x_89, 2);
lean::inc(x_92);
lean::dec(x_89);
x_95 = l_lean_file__map_to__position(x_92, x_86);
x_96 = lean::box(0);
x_97 = lean::cnstr_get(x_95, 1);
lean::inc(x_97);
x_99 = l_lean_elaborator_to__pexpr___main___closed__3;
x_100 = l_lean_kvmap_set__nat(x_96, x_99, x_97);
x_101 = lean::cnstr_get(x_95, 0);
lean::inc(x_101);
lean::dec(x_95);
x_104 = l_lean_elaborator_to__pexpr___main___closed__4;
x_105 = l_lean_kvmap_set__nat(x_100, x_104, x_101);
x_106 = lean_expr_mk_mdata(x_105, x_76);
if (lean::is_scalar(x_80)) {
 x_107 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_107 = x_80;
}
lean::cnstr_set(x_107, 0, x_106);
lean::cnstr_set(x_107, 1, x_78);
if (lean::is_scalar(x_75)) {
 x_108 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_108 = x_75;
}
lean::cnstr_set(x_108, 0, x_107);
return x_108;
}
}
else
{
obj* x_111; obj* x_113; obj* x_115; obj* x_116; obj* x_117; 
lean::dec(x_1);
lean::dec(x_0);
x_111 = lean::cnstr_get(x_73, 0);
x_113 = lean::cnstr_get(x_73, 1);
if (lean::is_exclusive(x_73)) {
 x_115 = x_73;
} else {
 lean::inc(x_111);
 lean::inc(x_113);
 lean::dec(x_73);
 x_115 = lean::box(0);
}
if (lean::is_scalar(x_115)) {
 x_116 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_116 = x_115;
}
lean::cnstr_set(x_116, 0, x_111);
lean::cnstr_set(x_116, 1, x_113);
if (lean::is_scalar(x_75)) {
 x_117 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_117 = x_75;
}
lean::cnstr_set(x_117, 0, x_116);
return x_117;
}
}
}
else
{
obj* x_118; obj* x_119; obj* x_123; obj* x_124; obj* x_126; obj* x_128; 
x_118 = l_lean_parser_term_match_has__view;
x_119 = lean::cnstr_get(x_118, 0);
lean::inc(x_119);
lean::dec(x_118);
lean::inc(x_0);
x_123 = lean::apply_1(x_119, x_0);
x_124 = lean::cnstr_get(x_123, 5);
lean::inc(x_124);
x_126 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(x_124);
lean::inc(x_1);
x_128 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(x_126, x_1, x_2);
if (lean::obj_tag(x_128) == 0)
{
obj* x_130; obj* x_132; obj* x_133; 
lean::dec(x_123);
x_130 = lean::cnstr_get(x_128, 0);
if (lean::is_exclusive(x_128)) {
 x_132 = x_128;
} else {
 lean::inc(x_130);
 lean::dec(x_128);
 x_132 = lean::box(0);
}
if (lean::is_scalar(x_132)) {
 x_133 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_133 = x_132;
}
lean::cnstr_set(x_133, 0, x_130);
x_12 = x_133;
goto lbl_13;
}
else
{
obj* x_134; obj* x_137; obj* x_139; obj* x_142; obj* x_144; obj* x_147; 
x_134 = lean::cnstr_get(x_128, 0);
lean::inc(x_134);
lean::dec(x_128);
x_137 = lean::cnstr_get(x_134, 0);
lean::inc(x_137);
x_139 = lean::cnstr_get(x_134, 1);
lean::inc(x_139);
lean::dec(x_134);
x_142 = lean::cnstr_get(x_123, 2);
lean::inc(x_142);
x_144 = l_lean_expander_get__opt__type___main(x_142);
lean::dec(x_142);
lean::inc(x_1);
x_147 = l_lean_elaborator_to__pexpr___main(x_144, x_1, x_139);
if (lean::obj_tag(x_147) == 0)
{
obj* x_150; obj* x_152; obj* x_153; 
lean::dec(x_137);
lean::dec(x_123);
x_150 = lean::cnstr_get(x_147, 0);
if (lean::is_exclusive(x_147)) {
 x_152 = x_147;
} else {
 lean::inc(x_150);
 lean::dec(x_147);
 x_152 = lean::box(0);
}
if (lean::is_scalar(x_152)) {
 x_153 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_153 = x_152;
}
lean::cnstr_set(x_153, 0, x_150);
x_12 = x_153;
goto lbl_13;
}
else
{
obj* x_154; obj* x_157; obj* x_159; obj* x_162; 
x_154 = lean::cnstr_get(x_147, 0);
lean::inc(x_154);
lean::dec(x_147);
x_157 = lean::cnstr_get(x_154, 0);
lean::inc(x_157);
x_159 = lean::cnstr_get(x_154, 1);
lean::inc(x_159);
lean::dec(x_154);
x_162 = l_lean_elaborator_mk__eqns(x_157, x_137);
switch (lean::obj_tag(x_162)) {
case 10:
{
obj* x_163; obj* x_165; obj* x_168; obj* x_172; 
x_163 = lean::cnstr_get(x_162, 0);
lean::inc(x_163);
x_165 = lean::cnstr_get(x_162, 1);
lean::inc(x_165);
lean::dec(x_162);
x_168 = lean::cnstr_get(x_123, 1);
lean::inc(x_168);
lean::dec(x_123);
lean::inc(x_1);
x_172 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(x_168, x_1, x_159);
if (lean::obj_tag(x_172) == 0)
{
obj* x_175; obj* x_177; obj* x_178; 
lean::dec(x_163);
lean::dec(x_165);
x_175 = lean::cnstr_get(x_172, 0);
if (lean::is_exclusive(x_172)) {
 x_177 = x_172;
} else {
 lean::inc(x_175);
 lean::dec(x_172);
 x_177 = lean::box(0);
}
if (lean::is_scalar(x_177)) {
 x_178 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_178 = x_177;
}
lean::cnstr_set(x_178, 0, x_175);
x_12 = x_178;
goto lbl_13;
}
else
{
obj* x_179; obj* x_181; obj* x_182; obj* x_184; obj* x_186; obj* x_187; uint8 x_188; obj* x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_193; 
x_179 = lean::cnstr_get(x_172, 0);
if (lean::is_exclusive(x_172)) {
 x_181 = x_172;
} else {
 lean::inc(x_179);
 lean::dec(x_172);
 x_181 = lean::box(0);
}
x_182 = lean::cnstr_get(x_179, 0);
x_184 = lean::cnstr_get(x_179, 1);
if (lean::is_exclusive(x_179)) {
 x_186 = x_179;
} else {
 lean::inc(x_182);
 lean::inc(x_184);
 lean::dec(x_179);
 x_186 = lean::box(0);
}
x_187 = l_lean_elaborator_to__pexpr___main___closed__24;
x_188 = 1;
x_189 = l_lean_kvmap_set__bool(x_163, x_187, x_188);
x_190 = lean_expr_mk_mdata(x_189, x_165);
x_191 = l_list_foldl___main___at_lean_expr_mk__app___spec__1(x_190, x_182);
if (lean::is_scalar(x_186)) {
 x_192 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_192 = x_186;
}
lean::cnstr_set(x_192, 0, x_191);
lean::cnstr_set(x_192, 1, x_184);
if (lean::is_scalar(x_181)) {
 x_193 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_193 = x_181;
}
lean::cnstr_set(x_193, 0, x_192);
x_12 = x_193;
goto lbl_13;
}
}
default:
{
obj* x_196; obj* x_198; 
lean::dec(x_162);
lean::dec(x_123);
x_196 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
x_198 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_196, x_1, x_159);
lean::dec(x_159);
x_12 = x_198;
goto lbl_13;
}
}
}
}
}
}
else
{
obj* x_200; obj* x_201; obj* x_205; obj* x_206; obj* x_208; obj* x_209; obj* x_211; obj* x_214; obj* x_215; 
x_200 = l_lean_parser_term_struct__inst_has__view;
x_201 = lean::cnstr_get(x_200, 0);
lean::inc(x_201);
lean::dec(x_200);
lean::inc(x_0);
x_205 = lean::apply_1(x_201, x_0);
x_206 = lean::cnstr_get(x_205, 3);
lean::inc(x_206);
x_208 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_206);
x_209 = lean::cnstr_get(x_208, 0);
lean::inc(x_209);
x_211 = lean::cnstr_get(x_208, 1);
lean::inc(x_211);
lean::dec(x_208);
x_214 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_211);
x_215 = lean::cnstr_get(x_214, 1);
lean::inc(x_215);
if (lean::obj_tag(x_215) == 0)
{
obj* x_217; obj* x_221; 
x_217 = lean::cnstr_get(x_214, 0);
lean::inc(x_217);
lean::dec(x_214);
lean::inc(x_1);
x_221 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_209, x_1, x_2);
if (lean::obj_tag(x_221) == 0)
{
obj* x_227; obj* x_229; obj* x_230; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_217);
lean::dec(x_205);
x_227 = lean::cnstr_get(x_221, 0);
if (lean::is_exclusive(x_221)) {
 x_229 = x_221;
} else {
 lean::inc(x_227);
 lean::dec(x_221);
 x_229 = lean::box(0);
}
if (lean::is_scalar(x_229)) {
 x_230 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_230 = x_229;
}
lean::cnstr_set(x_230, 0, x_227);
return x_230;
}
else
{
obj* x_231; obj* x_234; obj* x_236; obj* x_239; obj* x_242; 
x_231 = lean::cnstr_get(x_221, 0);
lean::inc(x_231);
lean::dec(x_221);
x_234 = lean::cnstr_get(x_231, 0);
lean::inc(x_234);
x_236 = lean::cnstr_get(x_231, 1);
lean::inc(x_236);
lean::dec(x_231);
lean::inc(x_1);
x_242 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_217, x_1, x_236);
if (lean::obj_tag(x_242) == 0)
{
obj* x_248; obj* x_250; obj* x_251; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_205);
lean::dec(x_234);
x_248 = lean::cnstr_get(x_242, 0);
if (lean::is_exclusive(x_242)) {
 x_250 = x_242;
} else {
 lean::inc(x_248);
 lean::dec(x_242);
 x_250 = lean::box(0);
}
if (lean::is_scalar(x_250)) {
 x_251 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_251 = x_250;
}
lean::cnstr_set(x_251, 0, x_248);
return x_251;
}
else
{
obj* x_252; obj* x_255; 
x_252 = lean::cnstr_get(x_242, 0);
lean::inc(x_252);
lean::dec(x_242);
x_255 = lean::cnstr_get(x_205, 2);
lean::inc(x_255);
if (lean::obj_tag(x_255) == 0)
{
obj* x_257; obj* x_259; obj* x_261; obj* x_262; 
x_257 = lean::cnstr_get(x_252, 0);
x_259 = lean::cnstr_get(x_252, 1);
if (lean::is_exclusive(x_252)) {
 x_261 = x_252;
} else {
 lean::inc(x_257);
 lean::inc(x_259);
 lean::dec(x_252);
 x_261 = lean::box(0);
}
if (lean::is_scalar(x_261)) {
 x_262 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_262 = x_261;
}
lean::cnstr_set(x_262, 0, x_257);
lean::cnstr_set(x_262, 1, x_259);
x_239 = x_262;
goto lbl_240;
}
else
{
obj* x_263; obj* x_265; obj* x_268; obj* x_271; obj* x_275; 
x_263 = lean::cnstr_get(x_252, 0);
lean::inc(x_263);
x_265 = lean::cnstr_get(x_252, 1);
lean::inc(x_265);
lean::dec(x_252);
x_268 = lean::cnstr_get(x_255, 0);
lean::inc(x_268);
lean::dec(x_255);
x_271 = lean::cnstr_get(x_268, 0);
lean::inc(x_271);
lean::dec(x_268);
lean::inc(x_1);
x_275 = l_lean_elaborator_to__pexpr___main(x_271, x_1, x_265);
if (lean::obj_tag(x_275) == 0)
{
obj* x_282; obj* x_284; obj* x_285; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_205);
lean::dec(x_263);
lean::dec(x_234);
x_282 = lean::cnstr_get(x_275, 0);
if (lean::is_exclusive(x_275)) {
 x_284 = x_275;
} else {
 lean::inc(x_282);
 lean::dec(x_275);
 x_284 = lean::box(0);
}
if (lean::is_scalar(x_284)) {
 x_285 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_285 = x_284;
}
lean::cnstr_set(x_285, 0, x_282);
return x_285;
}
else
{
obj* x_286; obj* x_289; obj* x_291; obj* x_293; obj* x_294; obj* x_295; obj* x_296; obj* x_297; 
x_286 = lean::cnstr_get(x_275, 0);
lean::inc(x_286);
lean::dec(x_275);
x_289 = lean::cnstr_get(x_286, 0);
x_291 = lean::cnstr_get(x_286, 1);
if (lean::is_exclusive(x_286)) {
 x_293 = x_286;
} else {
 lean::inc(x_289);
 lean::inc(x_291);
 lean::dec(x_286);
 x_293 = lean::box(0);
}
x_294 = lean::box(0);
x_295 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_295, 0, x_289);
lean::cnstr_set(x_295, 1, x_294);
x_296 = l_list_append___rarg(x_263, x_295);
if (lean::is_scalar(x_293)) {
 x_297 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_297 = x_293;
}
lean::cnstr_set(x_297, 0, x_296);
lean::cnstr_set(x_297, 1, x_291);
x_239 = x_297;
goto lbl_240;
}
}
}
lbl_240:
{
obj* x_298; obj* x_300; obj* x_302; obj* x_303; obj* x_304; obj* x_305; obj* x_306; obj* x_307; obj* x_308; uint8 x_309; obj* x_310; obj* x_311; obj* x_314; obj* x_315; 
x_298 = lean::cnstr_get(x_239, 0);
x_300 = lean::cnstr_get(x_239, 1);
if (lean::is_exclusive(x_239)) {
 lean::cnstr_set(x_239, 0, lean::box(0));
 lean::cnstr_set(x_239, 1, lean::box(0));
 x_302 = x_239;
} else {
 lean::inc(x_298);
 lean::inc(x_300);
 lean::dec(x_239);
 x_302 = lean::box(0);
}
x_303 = lean::box(0);
x_304 = lean::mk_nat_obj(0u);
x_305 = l_list_length__aux___main___rarg(x_234, x_304);
x_306 = l_lean_elaborator_to__pexpr___main___closed__25;
x_307 = l_lean_kvmap_set__nat(x_303, x_306, x_305);
x_308 = l_lean_elaborator_to__pexpr___main___closed__26;
x_309 = 0;
x_310 = l_lean_kvmap_set__bool(x_307, x_308, x_309);
x_311 = lean::cnstr_get(x_205, 1);
lean::inc(x_311);
lean::dec(x_205);
x_314 = l_list_append___rarg(x_234, x_298);
x_315 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(x_314);
if (lean::obj_tag(x_311) == 0)
{
obj* x_316; obj* x_317; obj* x_318; obj* x_319; obj* x_320; 
x_316 = l_lean_elaborator_to__pexpr___main___closed__27;
x_317 = l_lean_elaborator_to__pexpr___main___closed__28;
x_318 = l_lean_kvmap_set__name(x_310, x_316, x_317);
x_319 = lean_expr_mk_mdata(x_318, x_315);
if (lean::is_scalar(x_302)) {
 x_320 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_320 = x_302;
}
lean::cnstr_set(x_320, 0, x_319);
lean::cnstr_set(x_320, 1, x_300);
x_14 = x_320;
goto lbl_15;
}
else
{
obj* x_321; obj* x_323; obj* x_324; obj* x_327; obj* x_328; obj* x_329; obj* x_330; obj* x_332; obj* x_333; obj* x_334; obj* x_335; 
x_321 = lean::cnstr_get(x_311, 0);
if (lean::is_exclusive(x_311)) {
 x_323 = x_311;
} else {
 lean::inc(x_321);
 lean::dec(x_311);
 x_323 = lean::box(0);
}
x_324 = lean::cnstr_get(x_321, 0);
lean::inc(x_324);
lean::dec(x_321);
x_327 = l_lean_elaborator_mangle__ident(x_324);
if (lean::is_scalar(x_323)) {
 x_328 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_328 = x_323;
}
lean::cnstr_set(x_328, 0, x_327);
x_329 = lean::box(0);
x_330 = l_option_get__or__else___main___rarg(x_328, x_329);
lean::dec(x_328);
x_332 = l_lean_elaborator_to__pexpr___main___closed__27;
x_333 = l_lean_kvmap_set__name(x_310, x_332, x_330);
x_334 = lean_expr_mk_mdata(x_333, x_315);
if (lean::is_scalar(x_302)) {
 x_335 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_335 = x_302;
}
lean::cnstr_set(x_335, 0, x_334);
lean::cnstr_set(x_335, 1, x_300);
x_14 = x_335;
goto lbl_15;
}
}
}
}
else
{
obj* x_336; obj* x_338; 
x_336 = lean::cnstr_get(x_215, 0);
lean::inc(x_336);
x_338 = lean::cnstr_get(x_336, 0);
lean::inc(x_338);
lean::dec(x_336);
if (lean::obj_tag(x_338) == 0)
{
obj* x_341; obj* x_342; obj* x_345; obj* x_346; obj* x_349; obj* x_350; obj* x_352; 
if (lean::is_exclusive(x_215)) {
 lean::cnstr_release(x_215, 0);
 lean::cnstr_release(x_215, 1);
 x_341 = x_215;
} else {
 lean::dec(x_215);
 x_341 = lean::box(0);
}
x_342 = lean::cnstr_get(x_214, 0);
lean::inc(x_342);
lean::dec(x_214);
x_345 = l_lean_parser_term_struct__inst__item_has__view;
x_346 = lean::cnstr_get(x_345, 1);
lean::inc(x_346);
lean::dec(x_345);
x_349 = lean::apply_1(x_346, x_338);
x_350 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_1);
x_352 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_349, x_350, x_1, x_2);
lean::dec(x_2);
lean::dec(x_349);
if (lean::obj_tag(x_352) == 0)
{
obj* x_362; obj* x_364; obj* x_365; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_341);
lean::dec(x_342);
lean::dec(x_209);
lean::dec(x_205);
x_362 = lean::cnstr_get(x_352, 0);
if (lean::is_exclusive(x_352)) {
 x_364 = x_352;
} else {
 lean::inc(x_362);
 lean::dec(x_352);
 x_364 = lean::box(0);
}
if (lean::is_scalar(x_364)) {
 x_365 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_365 = x_364;
}
lean::cnstr_set(x_365, 0, x_362);
return x_365;
}
else
{
obj* x_366; obj* x_369; obj* x_371; obj* x_375; 
x_366 = lean::cnstr_get(x_352, 0);
lean::inc(x_366);
lean::dec(x_352);
x_369 = lean::cnstr_get(x_366, 0);
lean::inc(x_369);
x_371 = lean::cnstr_get(x_366, 1);
lean::inc(x_371);
lean::dec(x_366);
lean::inc(x_1);
x_375 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_209, x_1, x_371);
if (lean::obj_tag(x_375) == 0)
{
obj* x_383; obj* x_385; obj* x_386; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_341);
lean::dec(x_342);
lean::dec(x_369);
lean::dec(x_205);
x_383 = lean::cnstr_get(x_375, 0);
if (lean::is_exclusive(x_375)) {
 x_385 = x_375;
} else {
 lean::inc(x_383);
 lean::dec(x_375);
 x_385 = lean::box(0);
}
if (lean::is_scalar(x_385)) {
 x_386 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_386 = x_385;
}
lean::cnstr_set(x_386, 0, x_383);
return x_386;
}
else
{
obj* x_387; obj* x_390; obj* x_392; obj* x_395; obj* x_398; 
x_387 = lean::cnstr_get(x_375, 0);
lean::inc(x_387);
lean::dec(x_375);
x_390 = lean::cnstr_get(x_387, 0);
lean::inc(x_390);
x_392 = lean::cnstr_get(x_387, 1);
lean::inc(x_392);
lean::dec(x_387);
lean::inc(x_1);
x_398 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_342, x_1, x_392);
if (lean::obj_tag(x_398) == 0)
{
obj* x_406; obj* x_408; obj* x_409; 
lean::dec(x_390);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_341);
lean::dec(x_369);
lean::dec(x_205);
x_406 = lean::cnstr_get(x_398, 0);
if (lean::is_exclusive(x_398)) {
 x_408 = x_398;
} else {
 lean::inc(x_406);
 lean::dec(x_398);
 x_408 = lean::box(0);
}
if (lean::is_scalar(x_408)) {
 x_409 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_409 = x_408;
}
lean::cnstr_set(x_409, 0, x_406);
return x_409;
}
else
{
obj* x_410; obj* x_413; 
x_410 = lean::cnstr_get(x_398, 0);
lean::inc(x_410);
lean::dec(x_398);
x_413 = lean::cnstr_get(x_205, 2);
lean::inc(x_413);
if (lean::obj_tag(x_413) == 0)
{
obj* x_416; obj* x_418; obj* x_420; obj* x_421; 
lean::dec(x_341);
x_416 = lean::cnstr_get(x_410, 0);
x_418 = lean::cnstr_get(x_410, 1);
if (lean::is_exclusive(x_410)) {
 x_420 = x_410;
} else {
 lean::inc(x_416);
 lean::inc(x_418);
 lean::dec(x_410);
 x_420 = lean::box(0);
}
if (lean::is_scalar(x_420)) {
 x_421 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_421 = x_420;
}
lean::cnstr_set(x_421, 0, x_416);
lean::cnstr_set(x_421, 1, x_418);
x_395 = x_421;
goto lbl_396;
}
else
{
obj* x_422; obj* x_424; obj* x_427; obj* x_430; obj* x_434; 
x_422 = lean::cnstr_get(x_410, 0);
lean::inc(x_422);
x_424 = lean::cnstr_get(x_410, 1);
lean::inc(x_424);
lean::dec(x_410);
x_427 = lean::cnstr_get(x_413, 0);
lean::inc(x_427);
lean::dec(x_413);
x_430 = lean::cnstr_get(x_427, 0);
lean::inc(x_430);
lean::dec(x_427);
lean::inc(x_1);
x_434 = l_lean_elaborator_to__pexpr___main(x_430, x_1, x_424);
if (lean::obj_tag(x_434) == 0)
{
obj* x_443; obj* x_445; obj* x_446; 
lean::dec(x_390);
lean::dec(x_7);
lean::dec(x_422);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_341);
lean::dec(x_369);
lean::dec(x_205);
x_443 = lean::cnstr_get(x_434, 0);
if (lean::is_exclusive(x_434)) {
 x_445 = x_434;
} else {
 lean::inc(x_443);
 lean::dec(x_434);
 x_445 = lean::box(0);
}
if (lean::is_scalar(x_445)) {
 x_446 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_446 = x_445;
}
lean::cnstr_set(x_446, 0, x_443);
return x_446;
}
else
{
obj* x_447; obj* x_450; obj* x_452; obj* x_454; obj* x_455; obj* x_456; obj* x_457; obj* x_458; 
x_447 = lean::cnstr_get(x_434, 0);
lean::inc(x_447);
lean::dec(x_434);
x_450 = lean::cnstr_get(x_447, 0);
x_452 = lean::cnstr_get(x_447, 1);
if (lean::is_exclusive(x_447)) {
 x_454 = x_447;
} else {
 lean::inc(x_450);
 lean::inc(x_452);
 lean::dec(x_447);
 x_454 = lean::box(0);
}
x_455 = lean::box(0);
if (lean::is_scalar(x_341)) {
 x_456 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_456 = x_341;
}
lean::cnstr_set(x_456, 0, x_450);
lean::cnstr_set(x_456, 1, x_455);
x_457 = l_list_append___rarg(x_422, x_456);
if (lean::is_scalar(x_454)) {
 x_458 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_458 = x_454;
}
lean::cnstr_set(x_458, 0, x_457);
lean::cnstr_set(x_458, 1, x_452);
x_395 = x_458;
goto lbl_396;
}
}
}
lbl_396:
{
obj* x_459; obj* x_461; obj* x_463; obj* x_464; obj* x_465; obj* x_466; obj* x_467; obj* x_468; obj* x_469; uint8 x_470; obj* x_471; obj* x_472; obj* x_475; obj* x_476; 
x_459 = lean::cnstr_get(x_395, 0);
x_461 = lean::cnstr_get(x_395, 1);
if (lean::is_exclusive(x_395)) {
 lean::cnstr_set(x_395, 0, lean::box(0));
 lean::cnstr_set(x_395, 1, lean::box(0));
 x_463 = x_395;
} else {
 lean::inc(x_459);
 lean::inc(x_461);
 lean::dec(x_395);
 x_463 = lean::box(0);
}
x_464 = lean::box(0);
x_465 = lean::mk_nat_obj(0u);
x_466 = l_list_length__aux___main___rarg(x_390, x_465);
x_467 = l_lean_elaborator_to__pexpr___main___closed__25;
x_468 = l_lean_kvmap_set__nat(x_464, x_467, x_466);
x_469 = l_lean_elaborator_to__pexpr___main___closed__26;
x_470 = lean::unbox(x_369);
x_471 = l_lean_kvmap_set__bool(x_468, x_469, x_470);
x_472 = lean::cnstr_get(x_205, 1);
lean::inc(x_472);
lean::dec(x_205);
x_475 = l_list_append___rarg(x_390, x_459);
x_476 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(x_475);
if (lean::obj_tag(x_472) == 0)
{
obj* x_477; obj* x_478; obj* x_479; obj* x_480; obj* x_481; 
x_477 = l_lean_elaborator_to__pexpr___main___closed__27;
x_478 = l_lean_elaborator_to__pexpr___main___closed__28;
x_479 = l_lean_kvmap_set__name(x_471, x_477, x_478);
x_480 = lean_expr_mk_mdata(x_479, x_476);
if (lean::is_scalar(x_463)) {
 x_481 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_481 = x_463;
}
lean::cnstr_set(x_481, 0, x_480);
lean::cnstr_set(x_481, 1, x_461);
x_14 = x_481;
goto lbl_15;
}
else
{
obj* x_482; obj* x_484; obj* x_485; obj* x_488; obj* x_489; obj* x_490; obj* x_491; obj* x_493; obj* x_494; obj* x_495; obj* x_496; 
x_482 = lean::cnstr_get(x_472, 0);
if (lean::is_exclusive(x_472)) {
 x_484 = x_472;
} else {
 lean::inc(x_482);
 lean::dec(x_472);
 x_484 = lean::box(0);
}
x_485 = lean::cnstr_get(x_482, 0);
lean::inc(x_485);
lean::dec(x_482);
x_488 = l_lean_elaborator_mangle__ident(x_485);
if (lean::is_scalar(x_484)) {
 x_489 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_489 = x_484;
}
lean::cnstr_set(x_489, 0, x_488);
x_490 = lean::box(0);
x_491 = l_option_get__or__else___main___rarg(x_489, x_490);
lean::dec(x_489);
x_493 = l_lean_elaborator_to__pexpr___main___closed__27;
x_494 = l_lean_kvmap_set__name(x_471, x_493, x_491);
x_495 = lean_expr_mk_mdata(x_494, x_476);
if (lean::is_scalar(x_463)) {
 x_496 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_496 = x_463;
}
lean::cnstr_set(x_496, 0, x_495);
lean::cnstr_set(x_496, 1, x_461);
x_14 = x_496;
goto lbl_15;
}
}
}
}
}
else
{
obj* x_497; obj* x_499; 
x_497 = lean::cnstr_get(x_215, 1);
if (lean::is_exclusive(x_215)) {
 lean::cnstr_release(x_215, 0);
 lean::cnstr_set(x_215, 1, lean::box(0));
 x_499 = x_215;
} else {
 lean::inc(x_497);
 lean::dec(x_215);
 x_499 = lean::box(0);
}
if (lean::obj_tag(x_497) == 0)
{
obj* x_501; obj* x_505; 
lean::dec(x_338);
x_501 = lean::cnstr_get(x_214, 0);
lean::inc(x_501);
lean::dec(x_214);
lean::inc(x_1);
x_505 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_209, x_1, x_2);
if (lean::obj_tag(x_505) == 0)
{
obj* x_512; obj* x_514; obj* x_515; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_205);
lean::dec(x_499);
lean::dec(x_501);
x_512 = lean::cnstr_get(x_505, 0);
if (lean::is_exclusive(x_505)) {
 x_514 = x_505;
} else {
 lean::inc(x_512);
 lean::dec(x_505);
 x_514 = lean::box(0);
}
if (lean::is_scalar(x_514)) {
 x_515 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_515 = x_514;
}
lean::cnstr_set(x_515, 0, x_512);
return x_515;
}
else
{
obj* x_516; obj* x_519; obj* x_521; obj* x_524; obj* x_527; 
x_516 = lean::cnstr_get(x_505, 0);
lean::inc(x_516);
lean::dec(x_505);
x_519 = lean::cnstr_get(x_516, 0);
lean::inc(x_519);
x_521 = lean::cnstr_get(x_516, 1);
lean::inc(x_521);
lean::dec(x_516);
lean::inc(x_1);
x_527 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_501, x_1, x_521);
if (lean::obj_tag(x_527) == 0)
{
obj* x_534; obj* x_536; obj* x_537; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_205);
lean::dec(x_499);
lean::dec(x_519);
x_534 = lean::cnstr_get(x_527, 0);
if (lean::is_exclusive(x_527)) {
 x_536 = x_527;
} else {
 lean::inc(x_534);
 lean::dec(x_527);
 x_536 = lean::box(0);
}
if (lean::is_scalar(x_536)) {
 x_537 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_537 = x_536;
}
lean::cnstr_set(x_537, 0, x_534);
return x_537;
}
else
{
obj* x_538; obj* x_541; 
x_538 = lean::cnstr_get(x_527, 0);
lean::inc(x_538);
lean::dec(x_527);
x_541 = lean::cnstr_get(x_205, 2);
lean::inc(x_541);
if (lean::obj_tag(x_541) == 0)
{
obj* x_544; obj* x_546; obj* x_548; obj* x_549; 
lean::dec(x_499);
x_544 = lean::cnstr_get(x_538, 0);
x_546 = lean::cnstr_get(x_538, 1);
if (lean::is_exclusive(x_538)) {
 x_548 = x_538;
} else {
 lean::inc(x_544);
 lean::inc(x_546);
 lean::dec(x_538);
 x_548 = lean::box(0);
}
if (lean::is_scalar(x_548)) {
 x_549 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_549 = x_548;
}
lean::cnstr_set(x_549, 0, x_544);
lean::cnstr_set(x_549, 1, x_546);
x_524 = x_549;
goto lbl_525;
}
else
{
obj* x_550; obj* x_552; obj* x_555; obj* x_558; obj* x_562; 
x_550 = lean::cnstr_get(x_538, 0);
lean::inc(x_550);
x_552 = lean::cnstr_get(x_538, 1);
lean::inc(x_552);
lean::dec(x_538);
x_555 = lean::cnstr_get(x_541, 0);
lean::inc(x_555);
lean::dec(x_541);
x_558 = lean::cnstr_get(x_555, 0);
lean::inc(x_558);
lean::dec(x_555);
lean::inc(x_1);
x_562 = l_lean_elaborator_to__pexpr___main(x_558, x_1, x_552);
if (lean::obj_tag(x_562) == 0)
{
obj* x_570; obj* x_572; obj* x_573; 
lean::dec(x_550);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_205);
lean::dec(x_499);
lean::dec(x_519);
x_570 = lean::cnstr_get(x_562, 0);
if (lean::is_exclusive(x_562)) {
 x_572 = x_562;
} else {
 lean::inc(x_570);
 lean::dec(x_562);
 x_572 = lean::box(0);
}
if (lean::is_scalar(x_572)) {
 x_573 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_573 = x_572;
}
lean::cnstr_set(x_573, 0, x_570);
return x_573;
}
else
{
obj* x_574; obj* x_577; obj* x_579; obj* x_581; obj* x_582; obj* x_583; obj* x_584; obj* x_585; 
x_574 = lean::cnstr_get(x_562, 0);
lean::inc(x_574);
lean::dec(x_562);
x_577 = lean::cnstr_get(x_574, 0);
x_579 = lean::cnstr_get(x_574, 1);
if (lean::is_exclusive(x_574)) {
 x_581 = x_574;
} else {
 lean::inc(x_577);
 lean::inc(x_579);
 lean::dec(x_574);
 x_581 = lean::box(0);
}
x_582 = lean::box(0);
if (lean::is_scalar(x_499)) {
 x_583 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_583 = x_499;
}
lean::cnstr_set(x_583, 0, x_577);
lean::cnstr_set(x_583, 1, x_582);
x_584 = l_list_append___rarg(x_550, x_583);
if (lean::is_scalar(x_581)) {
 x_585 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_585 = x_581;
}
lean::cnstr_set(x_585, 0, x_584);
lean::cnstr_set(x_585, 1, x_579);
x_524 = x_585;
goto lbl_525;
}
}
}
lbl_525:
{
obj* x_586; obj* x_588; obj* x_590; obj* x_591; obj* x_592; obj* x_593; obj* x_594; obj* x_595; obj* x_596; uint8 x_597; obj* x_598; obj* x_599; obj* x_602; obj* x_603; 
x_586 = lean::cnstr_get(x_524, 0);
x_588 = lean::cnstr_get(x_524, 1);
if (lean::is_exclusive(x_524)) {
 lean::cnstr_set(x_524, 0, lean::box(0));
 lean::cnstr_set(x_524, 1, lean::box(0));
 x_590 = x_524;
} else {
 lean::inc(x_586);
 lean::inc(x_588);
 lean::dec(x_524);
 x_590 = lean::box(0);
}
x_591 = lean::box(0);
x_592 = lean::mk_nat_obj(0u);
x_593 = l_list_length__aux___main___rarg(x_519, x_592);
x_594 = l_lean_elaborator_to__pexpr___main___closed__25;
x_595 = l_lean_kvmap_set__nat(x_591, x_594, x_593);
x_596 = l_lean_elaborator_to__pexpr___main___closed__26;
x_597 = 1;
x_598 = l_lean_kvmap_set__bool(x_595, x_596, x_597);
x_599 = lean::cnstr_get(x_205, 1);
lean::inc(x_599);
lean::dec(x_205);
x_602 = l_list_append___rarg(x_519, x_586);
x_603 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(x_602);
if (lean::obj_tag(x_599) == 0)
{
obj* x_604; obj* x_605; obj* x_606; obj* x_607; obj* x_608; 
x_604 = l_lean_elaborator_to__pexpr___main___closed__27;
x_605 = l_lean_elaborator_to__pexpr___main___closed__28;
x_606 = l_lean_kvmap_set__name(x_598, x_604, x_605);
x_607 = lean_expr_mk_mdata(x_606, x_603);
if (lean::is_scalar(x_590)) {
 x_608 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_608 = x_590;
}
lean::cnstr_set(x_608, 0, x_607);
lean::cnstr_set(x_608, 1, x_588);
x_14 = x_608;
goto lbl_15;
}
else
{
obj* x_609; obj* x_611; obj* x_612; obj* x_615; obj* x_616; obj* x_617; obj* x_618; obj* x_620; obj* x_621; obj* x_622; obj* x_623; 
x_609 = lean::cnstr_get(x_599, 0);
if (lean::is_exclusive(x_599)) {
 x_611 = x_599;
} else {
 lean::inc(x_609);
 lean::dec(x_599);
 x_611 = lean::box(0);
}
x_612 = lean::cnstr_get(x_609, 0);
lean::inc(x_612);
lean::dec(x_609);
x_615 = l_lean_elaborator_mangle__ident(x_612);
if (lean::is_scalar(x_611)) {
 x_616 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_616 = x_611;
}
lean::cnstr_set(x_616, 0, x_615);
x_617 = lean::box(0);
x_618 = l_option_get__or__else___main___rarg(x_616, x_617);
lean::dec(x_616);
x_620 = l_lean_elaborator_to__pexpr___main___closed__27;
x_621 = l_lean_kvmap_set__name(x_598, x_620, x_618);
x_622 = lean_expr_mk_mdata(x_621, x_603);
if (lean::is_scalar(x_590)) {
 x_623 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_623 = x_590;
}
lean::cnstr_set(x_623, 0, x_622);
lean::cnstr_set(x_623, 1, x_588);
x_14 = x_623;
goto lbl_15;
}
}
}
}
else
{
obj* x_625; obj* x_626; obj* x_629; obj* x_630; obj* x_633; obj* x_634; obj* x_636; 
lean::dec(x_499);
if (lean::is_exclusive(x_497)) {
 lean::cnstr_release(x_497, 0);
 lean::cnstr_release(x_497, 1);
 x_625 = x_497;
} else {
 lean::dec(x_497);
 x_625 = lean::box(0);
}
x_626 = lean::cnstr_get(x_214, 0);
lean::inc(x_626);
lean::dec(x_214);
x_629 = l_lean_parser_term_struct__inst__item_has__view;
x_630 = lean::cnstr_get(x_629, 1);
lean::inc(x_630);
lean::dec(x_629);
x_633 = lean::apply_1(x_630, x_338);
x_634 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_1);
x_636 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_633, x_634, x_1, x_2);
lean::dec(x_2);
lean::dec(x_633);
if (lean::obj_tag(x_636) == 0)
{
obj* x_646; obj* x_648; obj* x_649; 
lean::dec(x_625);
lean::dec(x_626);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_209);
lean::dec(x_205);
x_646 = lean::cnstr_get(x_636, 0);
if (lean::is_exclusive(x_636)) {
 x_648 = x_636;
} else {
 lean::inc(x_646);
 lean::dec(x_636);
 x_648 = lean::box(0);
}
if (lean::is_scalar(x_648)) {
 x_649 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_649 = x_648;
}
lean::cnstr_set(x_649, 0, x_646);
return x_649;
}
else
{
obj* x_650; obj* x_653; obj* x_655; obj* x_659; 
x_650 = lean::cnstr_get(x_636, 0);
lean::inc(x_650);
lean::dec(x_636);
x_653 = lean::cnstr_get(x_650, 0);
lean::inc(x_653);
x_655 = lean::cnstr_get(x_650, 1);
lean::inc(x_655);
lean::dec(x_650);
lean::inc(x_1);
x_659 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_209, x_1, x_655);
if (lean::obj_tag(x_659) == 0)
{
obj* x_667; obj* x_669; obj* x_670; 
lean::dec(x_625);
lean::dec(x_626);
lean::dec(x_653);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_205);
x_667 = lean::cnstr_get(x_659, 0);
if (lean::is_exclusive(x_659)) {
 x_669 = x_659;
} else {
 lean::inc(x_667);
 lean::dec(x_659);
 x_669 = lean::box(0);
}
if (lean::is_scalar(x_669)) {
 x_670 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_670 = x_669;
}
lean::cnstr_set(x_670, 0, x_667);
return x_670;
}
else
{
obj* x_671; obj* x_674; obj* x_676; obj* x_679; obj* x_682; 
x_671 = lean::cnstr_get(x_659, 0);
lean::inc(x_671);
lean::dec(x_659);
x_674 = lean::cnstr_get(x_671, 0);
lean::inc(x_674);
x_676 = lean::cnstr_get(x_671, 1);
lean::inc(x_676);
lean::dec(x_671);
lean::inc(x_1);
x_682 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_626, x_1, x_676);
if (lean::obj_tag(x_682) == 0)
{
obj* x_690; obj* x_692; obj* x_693; 
lean::dec(x_625);
lean::dec(x_653);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_205);
lean::dec(x_674);
x_690 = lean::cnstr_get(x_682, 0);
if (lean::is_exclusive(x_682)) {
 x_692 = x_682;
} else {
 lean::inc(x_690);
 lean::dec(x_682);
 x_692 = lean::box(0);
}
if (lean::is_scalar(x_692)) {
 x_693 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_693 = x_692;
}
lean::cnstr_set(x_693, 0, x_690);
return x_693;
}
else
{
obj* x_694; obj* x_697; 
x_694 = lean::cnstr_get(x_682, 0);
lean::inc(x_694);
lean::dec(x_682);
x_697 = lean::cnstr_get(x_205, 2);
lean::inc(x_697);
if (lean::obj_tag(x_697) == 0)
{
obj* x_700; obj* x_702; obj* x_704; obj* x_705; 
lean::dec(x_625);
x_700 = lean::cnstr_get(x_694, 0);
x_702 = lean::cnstr_get(x_694, 1);
if (lean::is_exclusive(x_694)) {
 x_704 = x_694;
} else {
 lean::inc(x_700);
 lean::inc(x_702);
 lean::dec(x_694);
 x_704 = lean::box(0);
}
if (lean::is_scalar(x_704)) {
 x_705 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_705 = x_704;
}
lean::cnstr_set(x_705, 0, x_700);
lean::cnstr_set(x_705, 1, x_702);
x_679 = x_705;
goto lbl_680;
}
else
{
obj* x_706; obj* x_708; obj* x_711; obj* x_714; obj* x_718; 
x_706 = lean::cnstr_get(x_694, 0);
lean::inc(x_706);
x_708 = lean::cnstr_get(x_694, 1);
lean::inc(x_708);
lean::dec(x_694);
x_711 = lean::cnstr_get(x_697, 0);
lean::inc(x_711);
lean::dec(x_697);
x_714 = lean::cnstr_get(x_711, 0);
lean::inc(x_714);
lean::dec(x_711);
lean::inc(x_1);
x_718 = l_lean_elaborator_to__pexpr___main(x_714, x_1, x_708);
if (lean::obj_tag(x_718) == 0)
{
obj* x_727; obj* x_729; obj* x_730; 
lean::dec(x_625);
lean::dec(x_653);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_706);
lean::dec(x_205);
lean::dec(x_674);
x_727 = lean::cnstr_get(x_718, 0);
if (lean::is_exclusive(x_718)) {
 x_729 = x_718;
} else {
 lean::inc(x_727);
 lean::dec(x_718);
 x_729 = lean::box(0);
}
if (lean::is_scalar(x_729)) {
 x_730 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_730 = x_729;
}
lean::cnstr_set(x_730, 0, x_727);
return x_730;
}
else
{
obj* x_731; obj* x_734; obj* x_736; obj* x_738; obj* x_739; obj* x_740; obj* x_741; obj* x_742; 
x_731 = lean::cnstr_get(x_718, 0);
lean::inc(x_731);
lean::dec(x_718);
x_734 = lean::cnstr_get(x_731, 0);
x_736 = lean::cnstr_get(x_731, 1);
if (lean::is_exclusive(x_731)) {
 x_738 = x_731;
} else {
 lean::inc(x_734);
 lean::inc(x_736);
 lean::dec(x_731);
 x_738 = lean::box(0);
}
x_739 = lean::box(0);
if (lean::is_scalar(x_625)) {
 x_740 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_740 = x_625;
}
lean::cnstr_set(x_740, 0, x_734);
lean::cnstr_set(x_740, 1, x_739);
x_741 = l_list_append___rarg(x_706, x_740);
if (lean::is_scalar(x_738)) {
 x_742 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_742 = x_738;
}
lean::cnstr_set(x_742, 0, x_741);
lean::cnstr_set(x_742, 1, x_736);
x_679 = x_742;
goto lbl_680;
}
}
}
lbl_680:
{
obj* x_743; obj* x_745; obj* x_747; obj* x_748; obj* x_749; obj* x_750; obj* x_751; obj* x_752; obj* x_753; uint8 x_754; obj* x_755; obj* x_756; obj* x_759; obj* x_760; 
x_743 = lean::cnstr_get(x_679, 0);
x_745 = lean::cnstr_get(x_679, 1);
if (lean::is_exclusive(x_679)) {
 lean::cnstr_set(x_679, 0, lean::box(0));
 lean::cnstr_set(x_679, 1, lean::box(0));
 x_747 = x_679;
} else {
 lean::inc(x_743);
 lean::inc(x_745);
 lean::dec(x_679);
 x_747 = lean::box(0);
}
x_748 = lean::box(0);
x_749 = lean::mk_nat_obj(0u);
x_750 = l_list_length__aux___main___rarg(x_674, x_749);
x_751 = l_lean_elaborator_to__pexpr___main___closed__25;
x_752 = l_lean_kvmap_set__nat(x_748, x_751, x_750);
x_753 = l_lean_elaborator_to__pexpr___main___closed__26;
x_754 = lean::unbox(x_653);
x_755 = l_lean_kvmap_set__bool(x_752, x_753, x_754);
x_756 = lean::cnstr_get(x_205, 1);
lean::inc(x_756);
lean::dec(x_205);
x_759 = l_list_append___rarg(x_674, x_743);
x_760 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(x_759);
if (lean::obj_tag(x_756) == 0)
{
obj* x_761; obj* x_762; obj* x_763; obj* x_764; obj* x_765; 
x_761 = l_lean_elaborator_to__pexpr___main___closed__27;
x_762 = l_lean_elaborator_to__pexpr___main___closed__28;
x_763 = l_lean_kvmap_set__name(x_755, x_761, x_762);
x_764 = lean_expr_mk_mdata(x_763, x_760);
if (lean::is_scalar(x_747)) {
 x_765 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_765 = x_747;
}
lean::cnstr_set(x_765, 0, x_764);
lean::cnstr_set(x_765, 1, x_745);
x_14 = x_765;
goto lbl_15;
}
else
{
obj* x_766; obj* x_768; obj* x_769; obj* x_772; obj* x_773; obj* x_774; obj* x_775; obj* x_777; obj* x_778; obj* x_779; obj* x_780; 
x_766 = lean::cnstr_get(x_756, 0);
if (lean::is_exclusive(x_756)) {
 x_768 = x_756;
} else {
 lean::inc(x_766);
 lean::dec(x_756);
 x_768 = lean::box(0);
}
x_769 = lean::cnstr_get(x_766, 0);
lean::inc(x_769);
lean::dec(x_766);
x_772 = l_lean_elaborator_mangle__ident(x_769);
if (lean::is_scalar(x_768)) {
 x_773 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_773 = x_768;
}
lean::cnstr_set(x_773, 0, x_772);
x_774 = lean::box(0);
x_775 = l_option_get__or__else___main___rarg(x_773, x_774);
lean::dec(x_773);
x_777 = l_lean_elaborator_to__pexpr___main___closed__27;
x_778 = l_lean_kvmap_set__name(x_755, x_777, x_775);
x_779 = lean_expr_mk_mdata(x_778, x_760);
if (lean::is_scalar(x_747)) {
 x_780 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_780 = x_747;
}
lean::cnstr_set(x_780, 0, x_779);
lean::cnstr_set(x_780, 1, x_745);
x_14 = x_780;
goto lbl_15;
}
}
}
}
}
}
}
}
}
else
{
obj* x_783; 
lean::inc(x_1);
lean::inc(x_9);
x_783 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(x_9, x_1, x_2);
if (lean::obj_tag(x_783) == 0)
{
obj* x_788; obj* x_790; obj* x_791; 
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_788 = lean::cnstr_get(x_783, 0);
if (lean::is_exclusive(x_783)) {
 x_790 = x_783;
} else {
 lean::inc(x_788);
 lean::dec(x_783);
 x_790 = lean::box(0);
}
if (lean::is_scalar(x_790)) {
 x_791 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_791 = x_790;
}
lean::cnstr_set(x_791, 0, x_788);
return x_791;
}
else
{
obj* x_792; obj* x_795; obj* x_797; obj* x_799; obj* x_800; obj* x_801; 
x_792 = lean::cnstr_get(x_783, 0);
lean::inc(x_792);
lean::dec(x_783);
x_795 = lean::cnstr_get(x_792, 0);
x_797 = lean::cnstr_get(x_792, 1);
if (lean::is_exclusive(x_792)) {
 x_799 = x_792;
} else {
 lean::inc(x_795);
 lean::inc(x_797);
 lean::dec(x_792);
 x_799 = lean::box(0);
}
x_800 = l_list_reverse___rarg(x_795);
if (lean::is_scalar(x_799)) {
 x_801 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_801 = x_799;
}
lean::cnstr_set(x_801, 0, x_800);
lean::cnstr_set(x_801, 1, x_797);
x_16 = x_801;
goto lbl_17;
}
}
}
else
{
obj* x_804; obj* x_805; obj* x_809; obj* x_810; obj* x_811; obj* x_812; obj* x_814; obj* x_815; 
lean::dec(x_9);
lean::dec(x_7);
x_804 = l_lean_parser_string__lit_has__view;
x_805 = lean::cnstr_get(x_804, 0);
lean::inc(x_805);
lean::dec(x_804);
lean::inc(x_0);
x_809 = lean::apply_1(x_805, x_0);
x_810 = l_lean_parser_string__lit_view_value(x_809);
x_811 = l_lean_elaborator_to__pexpr___main___closed__30;
x_812 = l_option_get__or__else___main___rarg(x_810, x_811);
lean::dec(x_810);
x_814 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_814, 0, x_812);
x_815 = lean_expr_mk_lit(x_814);
if (x_21 == 0)
{
obj* x_816; 
x_816 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_816) == 0)
{
obj* x_819; obj* x_820; 
lean::dec(x_1);
x_819 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_819, 0, x_815);
lean::cnstr_set(x_819, 1, x_2);
x_820 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_820, 0, x_819);
return x_820;
}
else
{
obj* x_821; obj* x_824; obj* x_827; obj* x_830; obj* x_831; obj* x_832; obj* x_834; obj* x_835; obj* x_836; obj* x_839; obj* x_840; obj* x_841; obj* x_842; obj* x_843; 
x_821 = lean::cnstr_get(x_816, 0);
lean::inc(x_821);
lean::dec(x_816);
x_824 = lean::cnstr_get(x_1, 0);
lean::inc(x_824);
lean::dec(x_1);
x_827 = lean::cnstr_get(x_824, 2);
lean::inc(x_827);
lean::dec(x_824);
x_830 = l_lean_file__map_to__position(x_827, x_821);
x_831 = lean::box(0);
x_832 = lean::cnstr_get(x_830, 1);
lean::inc(x_832);
x_834 = l_lean_elaborator_to__pexpr___main___closed__3;
x_835 = l_lean_kvmap_set__nat(x_831, x_834, x_832);
x_836 = lean::cnstr_get(x_830, 0);
lean::inc(x_836);
lean::dec(x_830);
x_839 = l_lean_elaborator_to__pexpr___main___closed__4;
x_840 = l_lean_kvmap_set__nat(x_835, x_839, x_836);
x_841 = lean_expr_mk_mdata(x_840, x_815);
x_842 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_842, 0, x_841);
lean::cnstr_set(x_842, 1, x_2);
x_843 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_843, 0, x_842);
return x_843;
}
}
else
{
obj* x_846; obj* x_847; 
lean::dec(x_1);
lean::dec(x_0);
x_846 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_846, 0, x_815);
lean::cnstr_set(x_846, 1, x_2);
x_847 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_847, 0, x_846);
return x_847;
}
}
}
else
{
obj* x_850; obj* x_851; obj* x_855; obj* x_856; obj* x_857; obj* x_858; 
lean::dec(x_9);
lean::dec(x_7);
x_850 = l_lean_parser_number_has__view;
x_851 = lean::cnstr_get(x_850, 0);
lean::inc(x_851);
lean::dec(x_850);
lean::inc(x_0);
x_855 = lean::apply_1(x_851, x_0);
x_856 = l_lean_parser_number_view_to__nat___main(x_855);
x_857 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_857, 0, x_856);
x_858 = lean_expr_mk_lit(x_857);
if (x_21 == 0)
{
obj* x_859; 
x_859 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_859) == 0)
{
obj* x_862; obj* x_863; 
lean::dec(x_1);
x_862 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_862, 0, x_858);
lean::cnstr_set(x_862, 1, x_2);
x_863 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_863, 0, x_862);
return x_863;
}
else
{
obj* x_864; obj* x_867; obj* x_870; obj* x_873; obj* x_874; obj* x_875; obj* x_877; obj* x_878; obj* x_879; obj* x_882; obj* x_883; obj* x_884; obj* x_885; obj* x_886; 
x_864 = lean::cnstr_get(x_859, 0);
lean::inc(x_864);
lean::dec(x_859);
x_867 = lean::cnstr_get(x_1, 0);
lean::inc(x_867);
lean::dec(x_1);
x_870 = lean::cnstr_get(x_867, 2);
lean::inc(x_870);
lean::dec(x_867);
x_873 = l_lean_file__map_to__position(x_870, x_864);
x_874 = lean::box(0);
x_875 = lean::cnstr_get(x_873, 1);
lean::inc(x_875);
x_877 = l_lean_elaborator_to__pexpr___main___closed__3;
x_878 = l_lean_kvmap_set__nat(x_874, x_877, x_875);
x_879 = lean::cnstr_get(x_873, 0);
lean::inc(x_879);
lean::dec(x_873);
x_882 = l_lean_elaborator_to__pexpr___main___closed__4;
x_883 = l_lean_kvmap_set__nat(x_878, x_882, x_879);
x_884 = lean_expr_mk_mdata(x_883, x_858);
x_885 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_885, 0, x_884);
lean::cnstr_set(x_885, 1, x_2);
x_886 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_886, 0, x_885);
return x_886;
}
}
else
{
obj* x_889; obj* x_890; 
lean::dec(x_1);
lean::dec(x_0);
x_889 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_889, 0, x_858);
lean::cnstr_set(x_889, 1, x_2);
x_890 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_890, 0, x_889);
return x_890;
}
}
}
else
{
obj* x_892; obj* x_893; obj* x_897; obj* x_898; obj* x_902; 
lean::dec(x_9);
x_892 = l_lean_parser_term_borrowed_has__view;
x_893 = lean::cnstr_get(x_892, 0);
lean::inc(x_893);
lean::dec(x_892);
lean::inc(x_0);
x_897 = lean::apply_1(x_893, x_0);
x_898 = lean::cnstr_get(x_897, 1);
lean::inc(x_898);
lean::dec(x_897);
lean::inc(x_1);
x_902 = l_lean_elaborator_to__pexpr___main(x_898, x_1, x_2);
if (lean::obj_tag(x_902) == 0)
{
obj* x_906; obj* x_908; obj* x_909; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_906 = lean::cnstr_get(x_902, 0);
if (lean::is_exclusive(x_902)) {
 x_908 = x_902;
} else {
 lean::inc(x_906);
 lean::dec(x_902);
 x_908 = lean::box(0);
}
if (lean::is_scalar(x_908)) {
 x_909 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_909 = x_908;
}
lean::cnstr_set(x_909, 0, x_906);
return x_909;
}
else
{
obj* x_910; obj* x_913; obj* x_915; obj* x_917; obj* x_918; obj* x_919; obj* x_920; 
x_910 = lean::cnstr_get(x_902, 0);
lean::inc(x_910);
lean::dec(x_902);
x_913 = lean::cnstr_get(x_910, 0);
x_915 = lean::cnstr_get(x_910, 1);
if (lean::is_exclusive(x_910)) {
 x_917 = x_910;
} else {
 lean::inc(x_913);
 lean::inc(x_915);
 lean::dec(x_910);
 x_917 = lean::box(0);
}
x_918 = l_lean_elaborator_to__pexpr___main___closed__31;
x_919 = l_lean_elaborator_expr_mk__annotation(x_918, x_913);
if (lean::is_scalar(x_917)) {
 x_920 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_920 = x_917;
}
lean::cnstr_set(x_920, 0, x_919);
lean::cnstr_set(x_920, 1, x_915);
x_14 = x_920;
goto lbl_15;
}
}
}
else
{
obj* x_922; obj* x_923; obj* x_927; obj* x_928; obj* x_932; 
lean::dec(x_9);
x_922 = l_lean_parser_term_inaccessible_has__view;
x_923 = lean::cnstr_get(x_922, 0);
lean::inc(x_923);
lean::dec(x_922);
lean::inc(x_0);
x_927 = lean::apply_1(x_923, x_0);
x_928 = lean::cnstr_get(x_927, 1);
lean::inc(x_928);
lean::dec(x_927);
lean::inc(x_1);
x_932 = l_lean_elaborator_to__pexpr___main(x_928, x_1, x_2);
if (lean::obj_tag(x_932) == 0)
{
obj* x_936; obj* x_938; obj* x_939; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_936 = lean::cnstr_get(x_932, 0);
if (lean::is_exclusive(x_932)) {
 x_938 = x_932;
} else {
 lean::inc(x_936);
 lean::dec(x_932);
 x_938 = lean::box(0);
}
if (lean::is_scalar(x_938)) {
 x_939 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_939 = x_938;
}
lean::cnstr_set(x_939, 0, x_936);
return x_939;
}
else
{
obj* x_940; obj* x_943; obj* x_945; obj* x_947; obj* x_948; obj* x_949; obj* x_950; 
x_940 = lean::cnstr_get(x_932, 0);
lean::inc(x_940);
lean::dec(x_932);
x_943 = lean::cnstr_get(x_940, 0);
x_945 = lean::cnstr_get(x_940, 1);
if (lean::is_exclusive(x_940)) {
 x_947 = x_940;
} else {
 lean::inc(x_943);
 lean::inc(x_945);
 lean::dec(x_940);
 x_947 = lean::box(0);
}
x_948 = l_lean_elaborator_to__pexpr___main___closed__32;
x_949 = l_lean_elaborator_expr_mk__annotation(x_948, x_943);
if (lean::is_scalar(x_947)) {
 x_950 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_950 = x_947;
}
lean::cnstr_set(x_950, 0, x_949);
lean::cnstr_set(x_950, 1, x_945);
x_14 = x_950;
goto lbl_15;
}
}
}
else
{
obj* x_952; obj* x_953; obj* x_957; obj* x_958; obj* x_960; obj* x_961; obj* x_964; obj* x_967; 
lean::dec(x_9);
x_952 = l_lean_parser_term_explicit_has__view;
x_953 = lean::cnstr_get(x_952, 0);
lean::inc(x_953);
lean::dec(x_952);
lean::inc(x_0);
x_957 = lean::apply_1(x_953, x_0);
x_958 = lean::cnstr_get(x_957, 0);
lean::inc(x_958);
x_960 = l_lean_parser_ident__univs_has__view;
x_961 = lean::cnstr_get(x_960, 1);
lean::inc(x_961);
lean::dec(x_960);
x_964 = lean::cnstr_get(x_957, 1);
lean::inc(x_964);
lean::dec(x_957);
x_967 = lean::apply_1(x_961, x_964);
if (lean::obj_tag(x_958) == 0)
{
obj* x_970; 
lean::dec(x_958);
lean::inc(x_1);
x_970 = l_lean_elaborator_to__pexpr___main(x_967, x_1, x_2);
if (lean::obj_tag(x_970) == 0)
{
obj* x_974; obj* x_976; obj* x_977; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_974 = lean::cnstr_get(x_970, 0);
if (lean::is_exclusive(x_970)) {
 x_976 = x_970;
} else {
 lean::inc(x_974);
 lean::dec(x_970);
 x_976 = lean::box(0);
}
if (lean::is_scalar(x_976)) {
 x_977 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_977 = x_976;
}
lean::cnstr_set(x_977, 0, x_974);
return x_977;
}
else
{
obj* x_978; obj* x_981; obj* x_983; obj* x_985; obj* x_986; obj* x_987; obj* x_988; 
x_978 = lean::cnstr_get(x_970, 0);
lean::inc(x_978);
lean::dec(x_970);
x_981 = lean::cnstr_get(x_978, 0);
x_983 = lean::cnstr_get(x_978, 1);
if (lean::is_exclusive(x_978)) {
 x_985 = x_978;
} else {
 lean::inc(x_981);
 lean::inc(x_983);
 lean::dec(x_978);
 x_985 = lean::box(0);
}
x_986 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
x_987 = l_lean_elaborator_expr_mk__annotation(x_986, x_981);
if (lean::is_scalar(x_985)) {
 x_988 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_988 = x_985;
}
lean::cnstr_set(x_988, 0, x_987);
lean::cnstr_set(x_988, 1, x_983);
x_14 = x_988;
goto lbl_15;
}
}
else
{
obj* x_991; 
lean::dec(x_958);
lean::inc(x_1);
x_991 = l_lean_elaborator_to__pexpr___main(x_967, x_1, x_2);
if (lean::obj_tag(x_991) == 0)
{
obj* x_995; obj* x_997; obj* x_998; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_995 = lean::cnstr_get(x_991, 0);
if (lean::is_exclusive(x_991)) {
 x_997 = x_991;
} else {
 lean::inc(x_995);
 lean::dec(x_991);
 x_997 = lean::box(0);
}
if (lean::is_scalar(x_997)) {
 x_998 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_998 = x_997;
}
lean::cnstr_set(x_998, 0, x_995);
return x_998;
}
else
{
obj* x_999; obj* x_1002; obj* x_1004; obj* x_1006; obj* x_1007; obj* x_1008; obj* x_1009; 
x_999 = lean::cnstr_get(x_991, 0);
lean::inc(x_999);
lean::dec(x_991);
x_1002 = lean::cnstr_get(x_999, 0);
x_1004 = lean::cnstr_get(x_999, 1);
if (lean::is_exclusive(x_999)) {
 x_1006 = x_999;
} else {
 lean::inc(x_1002);
 lean::inc(x_1004);
 lean::dec(x_999);
 x_1006 = lean::box(0);
}
x_1007 = l_lean_elaborator_to__pexpr___main___closed__33;
x_1008 = l_lean_elaborator_expr_mk__annotation(x_1007, x_1002);
if (lean::is_scalar(x_1006)) {
 x_1009 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1009 = x_1006;
}
lean::cnstr_set(x_1009, 0, x_1008);
lean::cnstr_set(x_1009, 1, x_1004);
x_14 = x_1009;
goto lbl_15;
}
}
}
}
else
{
obj* x_1011; obj* x_1012; obj* x_1016; obj* x_1017; 
lean::dec(x_9);
x_1011 = l_lean_parser_term_projection_has__view;
x_1012 = lean::cnstr_get(x_1011, 0);
lean::inc(x_1012);
lean::dec(x_1011);
lean::inc(x_0);
x_1016 = lean::apply_1(x_1012, x_0);
x_1017 = lean::cnstr_get(x_1016, 2);
lean::inc(x_1017);
if (lean::obj_tag(x_1017) == 0)
{
obj* x_1019; obj* x_1022; obj* x_1026; 
x_1019 = lean::cnstr_get(x_1016, 0);
lean::inc(x_1019);
lean::dec(x_1016);
x_1022 = lean::cnstr_get(x_1017, 0);
lean::inc(x_1022);
lean::dec(x_1017);
lean::inc(x_1);
x_1026 = l_lean_elaborator_to__pexpr___main(x_1019, x_1, x_2);
if (lean::obj_tag(x_1026) == 0)
{
obj* x_1031; obj* x_1033; obj* x_1034; 
lean::dec(x_1022);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1031 = lean::cnstr_get(x_1026, 0);
if (lean::is_exclusive(x_1026)) {
 x_1033 = x_1026;
} else {
 lean::inc(x_1031);
 lean::dec(x_1026);
 x_1033 = lean::box(0);
}
if (lean::is_scalar(x_1033)) {
 x_1034 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1034 = x_1033;
}
lean::cnstr_set(x_1034, 0, x_1031);
return x_1034;
}
else
{
obj* x_1035; obj* x_1038; obj* x_1040; obj* x_1042; obj* x_1043; obj* x_1046; obj* x_1047; obj* x_1048; obj* x_1049; obj* x_1050; obj* x_1051; 
x_1035 = lean::cnstr_get(x_1026, 0);
lean::inc(x_1035);
lean::dec(x_1026);
x_1038 = lean::cnstr_get(x_1035, 0);
x_1040 = lean::cnstr_get(x_1035, 1);
if (lean::is_exclusive(x_1035)) {
 x_1042 = x_1035;
} else {
 lean::inc(x_1038);
 lean::inc(x_1040);
 lean::dec(x_1035);
 x_1042 = lean::box(0);
}
x_1043 = lean::cnstr_get(x_1022, 2);
lean::inc(x_1043);
lean::dec(x_1022);
x_1046 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1046, 0, x_1043);
x_1047 = lean::box(0);
x_1048 = l_lean_elaborator_to__pexpr___main___closed__34;
x_1049 = l_lean_kvmap_insert__core___main(x_1047, x_1048, x_1046);
x_1050 = lean_expr_mk_mdata(x_1049, x_1038);
if (lean::is_scalar(x_1042)) {
 x_1051 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1051 = x_1042;
}
lean::cnstr_set(x_1051, 0, x_1050);
lean::cnstr_set(x_1051, 1, x_1040);
x_14 = x_1051;
goto lbl_15;
}
}
else
{
obj* x_1052; obj* x_1055; obj* x_1059; 
x_1052 = lean::cnstr_get(x_1016, 0);
lean::inc(x_1052);
lean::dec(x_1016);
x_1055 = lean::cnstr_get(x_1017, 0);
lean::inc(x_1055);
lean::dec(x_1017);
lean::inc(x_1);
x_1059 = l_lean_elaborator_to__pexpr___main(x_1052, x_1, x_2);
if (lean::obj_tag(x_1059) == 0)
{
obj* x_1064; obj* x_1066; obj* x_1067; 
lean::dec(x_1055);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1064 = lean::cnstr_get(x_1059, 0);
if (lean::is_exclusive(x_1059)) {
 x_1066 = x_1059;
} else {
 lean::inc(x_1064);
 lean::dec(x_1059);
 x_1066 = lean::box(0);
}
if (lean::is_scalar(x_1066)) {
 x_1067 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1067 = x_1066;
}
lean::cnstr_set(x_1067, 0, x_1064);
return x_1067;
}
else
{
obj* x_1068; obj* x_1071; obj* x_1073; obj* x_1075; obj* x_1076; obj* x_1077; obj* x_1078; obj* x_1079; obj* x_1080; obj* x_1081; obj* x_1082; 
x_1068 = lean::cnstr_get(x_1059, 0);
lean::inc(x_1068);
lean::dec(x_1059);
x_1071 = lean::cnstr_get(x_1068, 0);
x_1073 = lean::cnstr_get(x_1068, 1);
if (lean::is_exclusive(x_1068)) {
 x_1075 = x_1068;
} else {
 lean::inc(x_1071);
 lean::inc(x_1073);
 lean::dec(x_1068);
 x_1075 = lean::box(0);
}
x_1076 = l_lean_parser_number_view_to__nat___main(x_1055);
x_1077 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1077, 0, x_1076);
x_1078 = lean::box(0);
x_1079 = l_lean_elaborator_to__pexpr___main___closed__34;
x_1080 = l_lean_kvmap_insert__core___main(x_1078, x_1079, x_1077);
x_1081 = lean_expr_mk_mdata(x_1080, x_1071);
if (lean::is_scalar(x_1075)) {
 x_1082 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1082 = x_1075;
}
lean::cnstr_set(x_1082, 0, x_1081);
lean::cnstr_set(x_1082, 1, x_1073);
x_14 = x_1082;
goto lbl_15;
}
}
}
}
else
{
obj* x_1084; obj* x_1085; obj* x_1089; obj* x_1090; 
lean::dec(x_9);
x_1084 = l_lean_parser_term_let_has__view;
x_1085 = lean::cnstr_get(x_1084, 0);
lean::inc(x_1085);
lean::dec(x_1084);
lean::inc(x_0);
x_1089 = lean::apply_1(x_1085, x_0);
x_1090 = lean::cnstr_get(x_1089, 1);
lean::inc(x_1090);
if (lean::obj_tag(x_1090) == 0)
{
obj* x_1092; obj* x_1095; 
x_1092 = lean::cnstr_get(x_1090, 0);
lean::inc(x_1092);
lean::dec(x_1090);
x_1095 = lean::cnstr_get(x_1092, 1);
lean::inc(x_1095);
if (lean::obj_tag(x_1095) == 0)
{
obj* x_1097; 
x_1097 = lean::cnstr_get(x_1092, 2);
lean::inc(x_1097);
if (lean::obj_tag(x_1097) == 0)
{
obj* x_1101; obj* x_1103; 
lean::dec(x_1092);
lean::dec(x_1089);
x_1101 = l_lean_elaborator_to__pexpr___main___closed__35;
lean::inc(x_1);
x_1103 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1101, x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_1103) == 0)
{
obj* x_1108; obj* x_1110; obj* x_1111; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1108 = lean::cnstr_get(x_1103, 0);
if (lean::is_exclusive(x_1103)) {
 x_1110 = x_1103;
} else {
 lean::inc(x_1108);
 lean::dec(x_1103);
 x_1110 = lean::box(0);
}
if (lean::is_scalar(x_1110)) {
 x_1111 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1111 = x_1110;
}
lean::cnstr_set(x_1111, 0, x_1108);
return x_1111;
}
else
{
obj* x_1112; 
x_1112 = lean::cnstr_get(x_1103, 0);
lean::inc(x_1112);
lean::dec(x_1103);
x_14 = x_1112;
goto lbl_15;
}
}
else
{
obj* x_1115; obj* x_1118; obj* x_1121; obj* x_1125; 
x_1115 = lean::cnstr_get(x_1092, 0);
lean::inc(x_1115);
lean::dec(x_1092);
x_1118 = lean::cnstr_get(x_1097, 0);
lean::inc(x_1118);
lean::dec(x_1097);
x_1121 = lean::cnstr_get(x_1118, 1);
lean::inc(x_1121);
lean::dec(x_1118);
lean::inc(x_1);
x_1125 = l_lean_elaborator_to__pexpr___main(x_1121, x_1, x_2);
if (lean::obj_tag(x_1125) == 0)
{
obj* x_1131; obj* x_1133; obj* x_1134; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1115);
lean::dec(x_1089);
x_1131 = lean::cnstr_get(x_1125, 0);
if (lean::is_exclusive(x_1125)) {
 x_1133 = x_1125;
} else {
 lean::inc(x_1131);
 lean::dec(x_1125);
 x_1133 = lean::box(0);
}
if (lean::is_scalar(x_1133)) {
 x_1134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1134 = x_1133;
}
lean::cnstr_set(x_1134, 0, x_1131);
return x_1134;
}
else
{
obj* x_1135; obj* x_1138; obj* x_1140; obj* x_1143; obj* x_1146; 
x_1135 = lean::cnstr_get(x_1125, 0);
lean::inc(x_1135);
lean::dec(x_1125);
x_1138 = lean::cnstr_get(x_1135, 0);
lean::inc(x_1138);
x_1140 = lean::cnstr_get(x_1135, 1);
lean::inc(x_1140);
lean::dec(x_1135);
x_1143 = lean::cnstr_get(x_1089, 3);
lean::inc(x_1143);
lean::inc(x_1);
x_1146 = l_lean_elaborator_to__pexpr___main(x_1143, x_1, x_1140);
if (lean::obj_tag(x_1146) == 0)
{
obj* x_1153; obj* x_1155; obj* x_1156; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1115);
lean::dec(x_1089);
lean::dec(x_1138);
x_1153 = lean::cnstr_get(x_1146, 0);
if (lean::is_exclusive(x_1146)) {
 x_1155 = x_1146;
} else {
 lean::inc(x_1153);
 lean::dec(x_1146);
 x_1155 = lean::box(0);
}
if (lean::is_scalar(x_1155)) {
 x_1156 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1156 = x_1155;
}
lean::cnstr_set(x_1156, 0, x_1153);
return x_1156;
}
else
{
obj* x_1157; obj* x_1160; obj* x_1162; obj* x_1165; obj* x_1169; 
x_1157 = lean::cnstr_get(x_1146, 0);
lean::inc(x_1157);
lean::dec(x_1146);
x_1160 = lean::cnstr_get(x_1157, 0);
lean::inc(x_1160);
x_1162 = lean::cnstr_get(x_1157, 1);
lean::inc(x_1162);
lean::dec(x_1157);
x_1165 = lean::cnstr_get(x_1089, 5);
lean::inc(x_1165);
lean::dec(x_1089);
lean::inc(x_1);
x_1169 = l_lean_elaborator_to__pexpr___main(x_1165, x_1, x_1162);
if (lean::obj_tag(x_1169) == 0)
{
obj* x_1176; obj* x_1178; obj* x_1179; 
lean::dec(x_1160);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1115);
lean::dec(x_1138);
x_1176 = lean::cnstr_get(x_1169, 0);
if (lean::is_exclusive(x_1169)) {
 x_1178 = x_1169;
} else {
 lean::inc(x_1176);
 lean::dec(x_1169);
 x_1178 = lean::box(0);
}
if (lean::is_scalar(x_1178)) {
 x_1179 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1179 = x_1178;
}
lean::cnstr_set(x_1179, 0, x_1176);
return x_1179;
}
else
{
obj* x_1180; obj* x_1183; obj* x_1185; obj* x_1187; obj* x_1188; obj* x_1189; obj* x_1190; 
x_1180 = lean::cnstr_get(x_1169, 0);
lean::inc(x_1180);
lean::dec(x_1169);
x_1183 = lean::cnstr_get(x_1180, 0);
x_1185 = lean::cnstr_get(x_1180, 1);
if (lean::is_exclusive(x_1180)) {
 x_1187 = x_1180;
} else {
 lean::inc(x_1183);
 lean::inc(x_1185);
 lean::dec(x_1180);
 x_1187 = lean::box(0);
}
x_1188 = l_lean_elaborator_mangle__ident(x_1115);
x_1189 = lean_expr_mk_let(x_1188, x_1138, x_1160, x_1183);
if (lean::is_scalar(x_1187)) {
 x_1190 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1190 = x_1187;
}
lean::cnstr_set(x_1190, 0, x_1189);
lean::cnstr_set(x_1190, 1, x_1185);
x_14 = x_1190;
goto lbl_15;
}
}
}
}
}
else
{
obj* x_1194; obj* x_1196; 
lean::dec(x_1095);
lean::dec(x_1092);
lean::dec(x_1089);
x_1194 = l_lean_elaborator_to__pexpr___main___closed__35;
lean::inc(x_1);
x_1196 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1194, x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_1196) == 0)
{
obj* x_1201; obj* x_1203; obj* x_1204; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1201 = lean::cnstr_get(x_1196, 0);
if (lean::is_exclusive(x_1196)) {
 x_1203 = x_1196;
} else {
 lean::inc(x_1201);
 lean::dec(x_1196);
 x_1203 = lean::box(0);
}
if (lean::is_scalar(x_1203)) {
 x_1204 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1204 = x_1203;
}
lean::cnstr_set(x_1204, 0, x_1201);
return x_1204;
}
else
{
obj* x_1205; 
x_1205 = lean::cnstr_get(x_1196, 0);
lean::inc(x_1205);
lean::dec(x_1196);
x_14 = x_1205;
goto lbl_15;
}
}
}
else
{
obj* x_1210; obj* x_1212; 
lean::dec(x_1090);
lean::dec(x_1089);
x_1210 = l_lean_elaborator_to__pexpr___main___closed__35;
lean::inc(x_1);
x_1212 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1210, x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_1212) == 0)
{
obj* x_1217; obj* x_1219; obj* x_1220; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1217 = lean::cnstr_get(x_1212, 0);
if (lean::is_exclusive(x_1212)) {
 x_1219 = x_1212;
} else {
 lean::inc(x_1217);
 lean::dec(x_1212);
 x_1219 = lean::box(0);
}
if (lean::is_scalar(x_1219)) {
 x_1220 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1220 = x_1219;
}
lean::cnstr_set(x_1220, 0, x_1217);
return x_1220;
}
else
{
obj* x_1221; 
x_1221 = lean::cnstr_get(x_1212, 0);
lean::inc(x_1221);
lean::dec(x_1212);
x_14 = x_1221;
goto lbl_15;
}
}
}
}
else
{
obj* x_1225; obj* x_1226; obj* x_1230; obj* x_1231; obj* x_1234; 
lean::dec(x_9);
x_1225 = l_lean_parser_term_show_has__view;
x_1226 = lean::cnstr_get(x_1225, 0);
lean::inc(x_1226);
lean::dec(x_1225);
lean::inc(x_0);
x_1230 = lean::apply_1(x_1226, x_0);
x_1231 = lean::cnstr_get(x_1230, 1);
lean::inc(x_1231);
lean::inc(x_1);
x_1234 = l_lean_elaborator_to__pexpr___main(x_1231, x_1, x_2);
if (lean::obj_tag(x_1234) == 0)
{
obj* x_1239; obj* x_1241; obj* x_1242; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1230);
x_1239 = lean::cnstr_get(x_1234, 0);
if (lean::is_exclusive(x_1234)) {
 x_1241 = x_1234;
} else {
 lean::inc(x_1239);
 lean::dec(x_1234);
 x_1241 = lean::box(0);
}
if (lean::is_scalar(x_1241)) {
 x_1242 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1242 = x_1241;
}
lean::cnstr_set(x_1242, 0, x_1239);
return x_1242;
}
else
{
obj* x_1243; obj* x_1246; obj* x_1248; obj* x_1251; obj* x_1254; obj* x_1258; 
x_1243 = lean::cnstr_get(x_1234, 0);
lean::inc(x_1243);
lean::dec(x_1234);
x_1246 = lean::cnstr_get(x_1243, 0);
lean::inc(x_1246);
x_1248 = lean::cnstr_get(x_1243, 1);
lean::inc(x_1248);
lean::dec(x_1243);
x_1251 = lean::cnstr_get(x_1230, 3);
lean::inc(x_1251);
lean::dec(x_1230);
x_1254 = lean::cnstr_get(x_1251, 1);
lean::inc(x_1254);
lean::dec(x_1251);
lean::inc(x_1);
x_1258 = l_lean_elaborator_to__pexpr___main(x_1254, x_1, x_1248);
if (lean::obj_tag(x_1258) == 0)
{
obj* x_1263; obj* x_1265; obj* x_1266; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1246);
x_1263 = lean::cnstr_get(x_1258, 0);
if (lean::is_exclusive(x_1258)) {
 x_1265 = x_1258;
} else {
 lean::inc(x_1263);
 lean::dec(x_1258);
 x_1265 = lean::box(0);
}
if (lean::is_scalar(x_1265)) {
 x_1266 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1266 = x_1265;
}
lean::cnstr_set(x_1266, 0, x_1263);
return x_1266;
}
else
{
obj* x_1267; obj* x_1270; obj* x_1272; obj* x_1274; obj* x_1275; uint8 x_1276; obj* x_1277; obj* x_1278; obj* x_1279; obj* x_1280; obj* x_1281; obj* x_1282; 
x_1267 = lean::cnstr_get(x_1258, 0);
lean::inc(x_1267);
lean::dec(x_1258);
x_1270 = lean::cnstr_get(x_1267, 0);
x_1272 = lean::cnstr_get(x_1267, 1);
if (lean::is_exclusive(x_1267)) {
 x_1274 = x_1267;
} else {
 lean::inc(x_1270);
 lean::inc(x_1272);
 lean::dec(x_1267);
 x_1274 = lean::box(0);
}
x_1275 = l_lean_elaborator_to__pexpr___main___closed__36;
x_1276 = 0;
x_1277 = l_lean_elaborator_to__pexpr___main___closed__37;
x_1278 = lean_expr_mk_lambda(x_1275, x_1276, x_1246, x_1277);
x_1279 = lean_expr_mk_app(x_1278, x_1270);
x_1280 = l_lean_elaborator_to__pexpr___main___closed__38;
x_1281 = l_lean_elaborator_expr_mk__annotation(x_1280, x_1279);
if (lean::is_scalar(x_1274)) {
 x_1282 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1282 = x_1274;
}
lean::cnstr_set(x_1282, 0, x_1281);
lean::cnstr_set(x_1282, 1, x_1272);
x_14 = x_1282;
goto lbl_15;
}
}
}
}
else
{
obj* x_1284; obj* x_1285; obj* x_1289; obj* x_1290; obj* x_1292; 
lean::dec(x_9);
x_1284 = l_lean_parser_term_have_has__view;
x_1285 = lean::cnstr_get(x_1284, 0);
lean::inc(x_1285);
lean::dec(x_1284);
lean::inc(x_0);
x_1289 = lean::apply_1(x_1285, x_0);
x_1292 = lean::cnstr_get(x_1289, 1);
lean::inc(x_1292);
if (lean::obj_tag(x_1292) == 0)
{
obj* x_1294; obj* x_1296; obj* x_1299; 
x_1294 = lean::cnstr_get(x_1289, 2);
lean::inc(x_1294);
x_1296 = lean::cnstr_get(x_1289, 5);
lean::inc(x_1296);
lean::inc(x_1);
x_1299 = l_lean_elaborator_to__pexpr___main(x_1294, x_1, x_2);
if (lean::obj_tag(x_1299) == 0)
{
obj* x_1305; obj* x_1307; obj* x_1308; 
lean::dec(x_1296);
lean::dec(x_1289);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1305 = lean::cnstr_get(x_1299, 0);
if (lean::is_exclusive(x_1299)) {
 x_1307 = x_1299;
} else {
 lean::inc(x_1305);
 lean::dec(x_1299);
 x_1307 = lean::box(0);
}
if (lean::is_scalar(x_1307)) {
 x_1308 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1308 = x_1307;
}
lean::cnstr_set(x_1308, 0, x_1305);
return x_1308;
}
else
{
obj* x_1309; obj* x_1312; obj* x_1314; obj* x_1318; 
x_1309 = lean::cnstr_get(x_1299, 0);
lean::inc(x_1309);
lean::dec(x_1299);
x_1312 = lean::cnstr_get(x_1309, 0);
lean::inc(x_1312);
x_1314 = lean::cnstr_get(x_1309, 1);
lean::inc(x_1314);
lean::dec(x_1309);
lean::inc(x_1);
x_1318 = l_lean_elaborator_to__pexpr___main(x_1296, x_1, x_1314);
if (lean::obj_tag(x_1318) == 0)
{
obj* x_1324; obj* x_1326; obj* x_1327; 
lean::dec(x_1289);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1312);
x_1324 = lean::cnstr_get(x_1318, 0);
if (lean::is_exclusive(x_1318)) {
 x_1326 = x_1318;
} else {
 lean::inc(x_1324);
 lean::dec(x_1318);
 x_1326 = lean::box(0);
}
if (lean::is_scalar(x_1326)) {
 x_1327 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1327 = x_1326;
}
lean::cnstr_set(x_1327, 0, x_1324);
return x_1327;
}
else
{
obj* x_1328; obj* x_1331; obj* x_1333; obj* x_1335; obj* x_1336; uint8 x_1337; obj* x_1338; obj* x_1339; 
x_1328 = lean::cnstr_get(x_1318, 0);
lean::inc(x_1328);
lean::dec(x_1318);
x_1331 = lean::cnstr_get(x_1328, 0);
x_1333 = lean::cnstr_get(x_1328, 1);
if (lean::is_exclusive(x_1328)) {
 x_1335 = x_1328;
} else {
 lean::inc(x_1331);
 lean::inc(x_1333);
 lean::dec(x_1328);
 x_1335 = lean::box(0);
}
x_1336 = l_lean_elaborator_to__pexpr___main___closed__40;
x_1337 = 0;
x_1338 = lean_expr_mk_lambda(x_1336, x_1337, x_1312, x_1331);
if (lean::is_scalar(x_1335)) {
 x_1339 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1339 = x_1335;
}
lean::cnstr_set(x_1339, 0, x_1338);
lean::cnstr_set(x_1339, 1, x_1333);
x_1290 = x_1339;
goto lbl_1291;
}
}
}
else
{
obj* x_1340; obj* x_1342; obj* x_1344; obj* x_1346; obj* x_1348; 
x_1340 = lean::cnstr_get(x_1289, 2);
lean::inc(x_1340);
x_1342 = lean::cnstr_get(x_1289, 5);
lean::inc(x_1342);
x_1344 = lean::cnstr_get(x_1292, 0);
if (lean::is_exclusive(x_1292)) {
 lean::cnstr_set(x_1292, 0, lean::box(0));
 x_1346 = x_1292;
} else {
 lean::inc(x_1344);
 lean::dec(x_1292);
 x_1346 = lean::box(0);
}
lean::inc(x_1);
x_1348 = l_lean_elaborator_to__pexpr___main(x_1340, x_1, x_2);
if (lean::obj_tag(x_1348) == 0)
{
obj* x_1356; obj* x_1358; obj* x_1359; 
lean::dec(x_1289);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1344);
lean::dec(x_1346);
lean::dec(x_1342);
x_1356 = lean::cnstr_get(x_1348, 0);
if (lean::is_exclusive(x_1348)) {
 x_1358 = x_1348;
} else {
 lean::inc(x_1356);
 lean::dec(x_1348);
 x_1358 = lean::box(0);
}
if (lean::is_scalar(x_1358)) {
 x_1359 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1359 = x_1358;
}
lean::cnstr_set(x_1359, 0, x_1356);
return x_1359;
}
else
{
obj* x_1360; obj* x_1363; obj* x_1365; obj* x_1369; 
x_1360 = lean::cnstr_get(x_1348, 0);
lean::inc(x_1360);
lean::dec(x_1348);
x_1363 = lean::cnstr_get(x_1360, 0);
lean::inc(x_1363);
x_1365 = lean::cnstr_get(x_1360, 1);
lean::inc(x_1365);
lean::dec(x_1360);
lean::inc(x_1);
x_1369 = l_lean_elaborator_to__pexpr___main(x_1342, x_1, x_1365);
if (lean::obj_tag(x_1369) == 0)
{
obj* x_1377; obj* x_1379; obj* x_1380; 
lean::dec(x_1289);
lean::dec(x_1363);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1344);
lean::dec(x_1346);
x_1377 = lean::cnstr_get(x_1369, 0);
if (lean::is_exclusive(x_1369)) {
 x_1379 = x_1369;
} else {
 lean::inc(x_1377);
 lean::dec(x_1369);
 x_1379 = lean::box(0);
}
if (lean::is_scalar(x_1379)) {
 x_1380 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1380 = x_1379;
}
lean::cnstr_set(x_1380, 0, x_1377);
return x_1380;
}
else
{
obj* x_1381; obj* x_1384; obj* x_1386; obj* x_1388; obj* x_1389; obj* x_1392; obj* x_1393; obj* x_1394; obj* x_1395; uint8 x_1397; obj* x_1398; obj* x_1399; 
x_1381 = lean::cnstr_get(x_1369, 0);
lean::inc(x_1381);
lean::dec(x_1369);
x_1384 = lean::cnstr_get(x_1381, 0);
x_1386 = lean::cnstr_get(x_1381, 1);
if (lean::is_exclusive(x_1381)) {
 x_1388 = x_1381;
} else {
 lean::inc(x_1384);
 lean::inc(x_1386);
 lean::dec(x_1381);
 x_1388 = lean::box(0);
}
x_1389 = lean::cnstr_get(x_1344, 0);
lean::inc(x_1389);
lean::dec(x_1344);
x_1392 = l_lean_elaborator_mangle__ident(x_1389);
if (lean::is_scalar(x_1346)) {
 x_1393 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1393 = x_1346;
}
lean::cnstr_set(x_1393, 0, x_1392);
x_1394 = l_lean_elaborator_to__pexpr___main___closed__36;
x_1395 = l_option_get__or__else___main___rarg(x_1393, x_1394);
lean::dec(x_1393);
x_1397 = 0;
x_1398 = lean_expr_mk_lambda(x_1395, x_1397, x_1363, x_1384);
if (lean::is_scalar(x_1388)) {
 x_1399 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1399 = x_1388;
}
lean::cnstr_set(x_1399, 0, x_1398);
lean::cnstr_set(x_1399, 1, x_1386);
x_1290 = x_1399;
goto lbl_1291;
}
}
}
lbl_1291:
{
obj* x_1400; 
x_1400 = lean::cnstr_get(x_1289, 3);
lean::inc(x_1400);
lean::dec(x_1289);
if (lean::obj_tag(x_1400) == 0)
{
obj* x_1403; obj* x_1405; obj* x_1408; obj* x_1411; obj* x_1415; 
x_1403 = lean::cnstr_get(x_1290, 0);
lean::inc(x_1403);
x_1405 = lean::cnstr_get(x_1290, 1);
lean::inc(x_1405);
lean::dec(x_1290);
x_1408 = lean::cnstr_get(x_1400, 0);
lean::inc(x_1408);
lean::dec(x_1400);
x_1411 = lean::cnstr_get(x_1408, 1);
lean::inc(x_1411);
lean::dec(x_1408);
lean::inc(x_1);
x_1415 = l_lean_elaborator_to__pexpr___main(x_1411, x_1, x_1405);
if (lean::obj_tag(x_1415) == 0)
{
obj* x_1420; obj* x_1422; obj* x_1423; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1403);
x_1420 = lean::cnstr_get(x_1415, 0);
if (lean::is_exclusive(x_1415)) {
 x_1422 = x_1415;
} else {
 lean::inc(x_1420);
 lean::dec(x_1415);
 x_1422 = lean::box(0);
}
if (lean::is_scalar(x_1422)) {
 x_1423 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1423 = x_1422;
}
lean::cnstr_set(x_1423, 0, x_1420);
return x_1423;
}
else
{
obj* x_1424; obj* x_1427; obj* x_1429; obj* x_1431; obj* x_1432; obj* x_1433; obj* x_1434; obj* x_1435; 
x_1424 = lean::cnstr_get(x_1415, 0);
lean::inc(x_1424);
lean::dec(x_1415);
x_1427 = lean::cnstr_get(x_1424, 0);
x_1429 = lean::cnstr_get(x_1424, 1);
if (lean::is_exclusive(x_1424)) {
 x_1431 = x_1424;
} else {
 lean::inc(x_1427);
 lean::inc(x_1429);
 lean::dec(x_1424);
 x_1431 = lean::box(0);
}
x_1432 = l_lean_elaborator_to__pexpr___main___closed__39;
x_1433 = l_lean_elaborator_expr_mk__annotation(x_1432, x_1403);
x_1434 = lean_expr_mk_app(x_1433, x_1427);
if (lean::is_scalar(x_1431)) {
 x_1435 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1435 = x_1431;
}
lean::cnstr_set(x_1435, 0, x_1434);
lean::cnstr_set(x_1435, 1, x_1429);
x_14 = x_1435;
goto lbl_15;
}
}
else
{
obj* x_1436; obj* x_1438; obj* x_1441; obj* x_1444; obj* x_1447; obj* x_1451; 
x_1436 = lean::cnstr_get(x_1290, 0);
lean::inc(x_1436);
x_1438 = lean::cnstr_get(x_1290, 1);
lean::inc(x_1438);
lean::dec(x_1290);
x_1441 = lean::cnstr_get(x_1400, 0);
lean::inc(x_1441);
lean::dec(x_1400);
x_1444 = lean::cnstr_get(x_1441, 1);
lean::inc(x_1444);
lean::dec(x_1441);
x_1447 = lean::cnstr_get(x_1444, 1);
lean::inc(x_1447);
lean::dec(x_1444);
lean::inc(x_1);
x_1451 = l_lean_elaborator_to__pexpr___main(x_1447, x_1, x_1438);
if (lean::obj_tag(x_1451) == 0)
{
obj* x_1456; obj* x_1458; obj* x_1459; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1436);
x_1456 = lean::cnstr_get(x_1451, 0);
if (lean::is_exclusive(x_1451)) {
 x_1458 = x_1451;
} else {
 lean::inc(x_1456);
 lean::dec(x_1451);
 x_1458 = lean::box(0);
}
if (lean::is_scalar(x_1458)) {
 x_1459 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1459 = x_1458;
}
lean::cnstr_set(x_1459, 0, x_1456);
return x_1459;
}
else
{
obj* x_1460; obj* x_1463; obj* x_1465; obj* x_1467; obj* x_1468; obj* x_1469; obj* x_1470; obj* x_1471; 
x_1460 = lean::cnstr_get(x_1451, 0);
lean::inc(x_1460);
lean::dec(x_1451);
x_1463 = lean::cnstr_get(x_1460, 0);
x_1465 = lean::cnstr_get(x_1460, 1);
if (lean::is_exclusive(x_1460)) {
 x_1467 = x_1460;
} else {
 lean::inc(x_1463);
 lean::inc(x_1465);
 lean::dec(x_1460);
 x_1467 = lean::box(0);
}
x_1468 = l_lean_elaborator_to__pexpr___main___closed__39;
x_1469 = l_lean_elaborator_expr_mk__annotation(x_1468, x_1436);
x_1470 = lean_expr_mk_app(x_1469, x_1463);
if (lean::is_scalar(x_1467)) {
 x_1471 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1471 = x_1467;
}
lean::cnstr_set(x_1471, 0, x_1470);
lean::cnstr_set(x_1471, 1, x_1465);
x_14 = x_1471;
goto lbl_15;
}
}
}
}
}
else
{
lean::dec(x_9);
lean::dec(x_7);
if (x_21 == 0)
{
obj* x_1474; 
x_1474 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1474) == 0)
{
obj* x_1477; obj* x_1478; obj* x_1479; 
lean::dec(x_1);
x_1477 = l_lean_elaborator_to__pexpr___main___closed__41;
x_1478 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1478, 0, x_1477);
lean::cnstr_set(x_1478, 1, x_2);
x_1479 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1479, 0, x_1478);
return x_1479;
}
else
{
obj* x_1480; obj* x_1483; obj* x_1486; obj* x_1489; obj* x_1490; obj* x_1491; obj* x_1493; obj* x_1494; obj* x_1495; obj* x_1498; obj* x_1499; obj* x_1500; obj* x_1501; obj* x_1502; obj* x_1503; 
x_1480 = lean::cnstr_get(x_1474, 0);
lean::inc(x_1480);
lean::dec(x_1474);
x_1483 = lean::cnstr_get(x_1, 0);
lean::inc(x_1483);
lean::dec(x_1);
x_1486 = lean::cnstr_get(x_1483, 2);
lean::inc(x_1486);
lean::dec(x_1483);
x_1489 = l_lean_file__map_to__position(x_1486, x_1480);
x_1490 = lean::box(0);
x_1491 = lean::cnstr_get(x_1489, 1);
lean::inc(x_1491);
x_1493 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1494 = l_lean_kvmap_set__nat(x_1490, x_1493, x_1491);
x_1495 = lean::cnstr_get(x_1489, 0);
lean::inc(x_1495);
lean::dec(x_1489);
x_1498 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1499 = l_lean_kvmap_set__nat(x_1494, x_1498, x_1495);
x_1500 = l_lean_elaborator_to__pexpr___main___closed__41;
x_1501 = lean_expr_mk_mdata(x_1499, x_1500);
x_1502 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1502, 0, x_1501);
lean::cnstr_set(x_1502, 1, x_2);
x_1503 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1503, 0, x_1502);
return x_1503;
}
}
else
{
obj* x_1506; obj* x_1507; obj* x_1508; 
lean::dec(x_1);
lean::dec(x_0);
x_1506 = l_lean_elaborator_to__pexpr___main___closed__41;
x_1507 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1507, 0, x_1506);
lean::cnstr_set(x_1507, 1, x_2);
x_1508 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1508, 0, x_1507);
return x_1508;
}
}
}
else
{
obj* x_1510; obj* x_1511; obj* x_1515; obj* x_1516; obj* x_1519; obj* x_1520; obj* x_1521; obj* x_1523; 
lean::dec(x_9);
x_1510 = l_lean_parser_term_anonymous__constructor_has__view;
x_1511 = lean::cnstr_get(x_1510, 0);
lean::inc(x_1511);
lean::dec(x_1510);
lean::inc(x_0);
x_1515 = lean::apply_1(x_1511, x_0);
x_1516 = lean::cnstr_get(x_1515, 1);
lean::inc(x_1516);
lean::dec(x_1515);
x_1519 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(x_1516);
x_1520 = l_lean_expander_get__opt__type___main___closed__1;
x_1521 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_1520, x_1519);
lean::inc(x_1);
x_1523 = l_lean_elaborator_to__pexpr___main(x_1521, x_1, x_2);
if (lean::obj_tag(x_1523) == 0)
{
obj* x_1527; obj* x_1529; obj* x_1530; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1527 = lean::cnstr_get(x_1523, 0);
if (lean::is_exclusive(x_1523)) {
 x_1529 = x_1523;
} else {
 lean::inc(x_1527);
 lean::dec(x_1523);
 x_1529 = lean::box(0);
}
if (lean::is_scalar(x_1529)) {
 x_1530 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1530 = x_1529;
}
lean::cnstr_set(x_1530, 0, x_1527);
return x_1530;
}
else
{
obj* x_1531; obj* x_1534; obj* x_1536; obj* x_1538; obj* x_1539; obj* x_1540; obj* x_1541; 
x_1531 = lean::cnstr_get(x_1523, 0);
lean::inc(x_1531);
lean::dec(x_1523);
x_1534 = lean::cnstr_get(x_1531, 0);
x_1536 = lean::cnstr_get(x_1531, 1);
if (lean::is_exclusive(x_1531)) {
 x_1538 = x_1531;
} else {
 lean::inc(x_1534);
 lean::inc(x_1536);
 lean::dec(x_1531);
 x_1538 = lean::box(0);
}
x_1539 = l_lean_elaborator_to__pexpr___main___closed__42;
x_1540 = l_lean_elaborator_expr_mk__annotation(x_1539, x_1534);
if (lean::is_scalar(x_1538)) {
 x_1541 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1541 = x_1538;
}
lean::cnstr_set(x_1541, 0, x_1540);
lean::cnstr_set(x_1541, 1, x_1536);
x_14 = x_1541;
goto lbl_15;
}
}
}
else
{
obj* x_1543; obj* x_1544; obj* x_1548; obj* x_1549; obj* x_1550; obj* x_1553; obj* x_1555; 
lean::dec(x_9);
x_1543 = l_lean_parser_term_sort__app_has__view;
x_1544 = lean::cnstr_get(x_1543, 0);
lean::inc(x_1544);
lean::dec(x_1543);
lean::inc(x_0);
x_1548 = lean::apply_1(x_1544, x_0);
x_1549 = l_lean_parser_term_sort_has__view;
x_1550 = lean::cnstr_get(x_1549, 0);
lean::inc(x_1550);
lean::dec(x_1549);
x_1553 = lean::cnstr_get(x_1548, 0);
lean::inc(x_1553);
x_1555 = lean::apply_1(x_1550, x_1553);
if (lean::obj_tag(x_1555) == 0)
{
obj* x_1557; obj* x_1561; 
lean::dec(x_1555);
x_1557 = lean::cnstr_get(x_1548, 1);
lean::inc(x_1557);
lean::dec(x_1548);
lean::inc(x_1);
x_1561 = l_lean_elaborator_to__level___main(x_1557, x_1, x_2);
if (lean::obj_tag(x_1561) == 0)
{
obj* x_1565; obj* x_1567; obj* x_1568; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1565 = lean::cnstr_get(x_1561, 0);
if (lean::is_exclusive(x_1561)) {
 x_1567 = x_1561;
} else {
 lean::inc(x_1565);
 lean::dec(x_1561);
 x_1567 = lean::box(0);
}
if (lean::is_scalar(x_1567)) {
 x_1568 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1568 = x_1567;
}
lean::cnstr_set(x_1568, 0, x_1565);
return x_1568;
}
else
{
obj* x_1569; obj* x_1572; obj* x_1574; obj* x_1576; obj* x_1577; obj* x_1578; 
x_1569 = lean::cnstr_get(x_1561, 0);
lean::inc(x_1569);
lean::dec(x_1561);
x_1572 = lean::cnstr_get(x_1569, 0);
x_1574 = lean::cnstr_get(x_1569, 1);
if (lean::is_exclusive(x_1569)) {
 x_1576 = x_1569;
} else {
 lean::inc(x_1572);
 lean::inc(x_1574);
 lean::dec(x_1569);
 x_1576 = lean::box(0);
}
x_1577 = lean_expr_mk_sort(x_1572);
if (lean::is_scalar(x_1576)) {
 x_1578 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1578 = x_1576;
}
lean::cnstr_set(x_1578, 0, x_1577);
lean::cnstr_set(x_1578, 1, x_1574);
x_14 = x_1578;
goto lbl_15;
}
}
else
{
obj* x_1580; obj* x_1584; 
lean::dec(x_1555);
x_1580 = lean::cnstr_get(x_1548, 1);
lean::inc(x_1580);
lean::dec(x_1548);
lean::inc(x_1);
x_1584 = l_lean_elaborator_to__level___main(x_1580, x_1, x_2);
if (lean::obj_tag(x_1584) == 0)
{
obj* x_1588; obj* x_1590; obj* x_1591; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1588 = lean::cnstr_get(x_1584, 0);
if (lean::is_exclusive(x_1584)) {
 x_1590 = x_1584;
} else {
 lean::inc(x_1588);
 lean::dec(x_1584);
 x_1590 = lean::box(0);
}
if (lean::is_scalar(x_1590)) {
 x_1591 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1591 = x_1590;
}
lean::cnstr_set(x_1591, 0, x_1588);
return x_1591;
}
else
{
obj* x_1592; obj* x_1595; obj* x_1597; obj* x_1599; obj* x_1600; obj* x_1601; obj* x_1602; 
x_1592 = lean::cnstr_get(x_1584, 0);
lean::inc(x_1592);
lean::dec(x_1584);
x_1595 = lean::cnstr_get(x_1592, 0);
x_1597 = lean::cnstr_get(x_1592, 1);
if (lean::is_exclusive(x_1592)) {
 x_1599 = x_1592;
} else {
 lean::inc(x_1595);
 lean::inc(x_1597);
 lean::dec(x_1592);
 x_1599 = lean::box(0);
}
x_1600 = level_mk_succ(x_1595);
x_1601 = lean_expr_mk_sort(x_1600);
if (lean::is_scalar(x_1599)) {
 x_1602 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1602 = x_1599;
}
lean::cnstr_set(x_1602, 0, x_1601);
lean::cnstr_set(x_1602, 1, x_1597);
x_14 = x_1602;
goto lbl_15;
}
}
}
}
else
{
obj* x_1605; obj* x_1606; obj* x_1610; 
lean::dec(x_9);
lean::dec(x_7);
x_1605 = l_lean_parser_term_sort_has__view;
x_1606 = lean::cnstr_get(x_1605, 0);
lean::inc(x_1606);
lean::dec(x_1605);
lean::inc(x_0);
x_1610 = lean::apply_1(x_1606, x_0);
if (lean::obj_tag(x_1610) == 0)
{
lean::dec(x_1610);
if (x_21 == 0)
{
obj* x_1612; 
x_1612 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1612) == 0)
{
obj* x_1615; obj* x_1616; obj* x_1617; 
lean::dec(x_1);
x_1615 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
x_1616 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1616, 0, x_1615);
lean::cnstr_set(x_1616, 1, x_2);
x_1617 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1617, 0, x_1616);
return x_1617;
}
else
{
obj* x_1618; obj* x_1621; obj* x_1624; obj* x_1627; obj* x_1628; obj* x_1629; obj* x_1631; obj* x_1632; obj* x_1633; obj* x_1636; obj* x_1637; obj* x_1638; obj* x_1639; obj* x_1640; obj* x_1641; 
x_1618 = lean::cnstr_get(x_1612, 0);
lean::inc(x_1618);
lean::dec(x_1612);
x_1621 = lean::cnstr_get(x_1, 0);
lean::inc(x_1621);
lean::dec(x_1);
x_1624 = lean::cnstr_get(x_1621, 2);
lean::inc(x_1624);
lean::dec(x_1621);
x_1627 = l_lean_file__map_to__position(x_1624, x_1618);
x_1628 = lean::box(0);
x_1629 = lean::cnstr_get(x_1627, 1);
lean::inc(x_1629);
x_1631 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1632 = l_lean_kvmap_set__nat(x_1628, x_1631, x_1629);
x_1633 = lean::cnstr_get(x_1627, 0);
lean::inc(x_1633);
lean::dec(x_1627);
x_1636 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1637 = l_lean_kvmap_set__nat(x_1632, x_1636, x_1633);
x_1638 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
x_1639 = lean_expr_mk_mdata(x_1637, x_1638);
x_1640 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1640, 0, x_1639);
lean::cnstr_set(x_1640, 1, x_2);
x_1641 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1641, 0, x_1640);
return x_1641;
}
}
else
{
obj* x_1644; obj* x_1645; obj* x_1646; 
lean::dec(x_1);
lean::dec(x_0);
x_1644 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
x_1645 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1645, 0, x_1644);
lean::cnstr_set(x_1645, 1, x_2);
x_1646 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1646, 0, x_1645);
return x_1646;
}
}
else
{
lean::dec(x_1610);
if (x_21 == 0)
{
obj* x_1648; 
x_1648 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1648) == 0)
{
obj* x_1651; obj* x_1652; obj* x_1653; 
lean::dec(x_1);
x_1651 = l_lean_elaborator_to__pexpr___main___closed__43;
x_1652 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1652, 0, x_1651);
lean::cnstr_set(x_1652, 1, x_2);
x_1653 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1653, 0, x_1652);
return x_1653;
}
else
{
obj* x_1654; obj* x_1657; obj* x_1660; obj* x_1663; obj* x_1664; obj* x_1665; obj* x_1667; obj* x_1668; obj* x_1669; obj* x_1672; obj* x_1673; obj* x_1674; obj* x_1675; obj* x_1676; obj* x_1677; 
x_1654 = lean::cnstr_get(x_1648, 0);
lean::inc(x_1654);
lean::dec(x_1648);
x_1657 = lean::cnstr_get(x_1, 0);
lean::inc(x_1657);
lean::dec(x_1);
x_1660 = lean::cnstr_get(x_1657, 2);
lean::inc(x_1660);
lean::dec(x_1657);
x_1663 = l_lean_file__map_to__position(x_1660, x_1654);
x_1664 = lean::box(0);
x_1665 = lean::cnstr_get(x_1663, 1);
lean::inc(x_1665);
x_1667 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1668 = l_lean_kvmap_set__nat(x_1664, x_1667, x_1665);
x_1669 = lean::cnstr_get(x_1663, 0);
lean::inc(x_1669);
lean::dec(x_1663);
x_1672 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1673 = l_lean_kvmap_set__nat(x_1668, x_1672, x_1669);
x_1674 = l_lean_elaborator_to__pexpr___main___closed__43;
x_1675 = lean_expr_mk_mdata(x_1673, x_1674);
x_1676 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1676, 0, x_1675);
lean::cnstr_set(x_1676, 1, x_2);
x_1677 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1677, 0, x_1676);
return x_1677;
}
}
else
{
obj* x_1680; obj* x_1681; obj* x_1682; 
lean::dec(x_1);
lean::dec(x_0);
x_1680 = l_lean_elaborator_to__pexpr___main___closed__43;
x_1681 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1681, 0, x_1680);
lean::cnstr_set(x_1681, 1, x_2);
x_1682 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1682, 0, x_1681);
return x_1682;
}
}
}
}
else
{
obj* x_1684; obj* x_1685; obj* x_1689; obj* x_1690; 
lean::dec(x_9);
x_1684 = l_lean_parser_term_pi_has__view;
x_1685 = lean::cnstr_get(x_1684, 0);
lean::inc(x_1685);
lean::dec(x_1684);
lean::inc(x_0);
x_1689 = lean::apply_1(x_1685, x_0);
x_1690 = lean::cnstr_get(x_1689, 1);
lean::inc(x_1690);
if (lean::obj_tag(x_1690) == 0)
{
obj* x_1694; obj* x_1696; 
lean::dec(x_1690);
lean::dec(x_1689);
x_1694 = l_lean_elaborator_to__pexpr___main___closed__44;
lean::inc(x_1);
x_1696 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1694, x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_1696) == 0)
{
obj* x_1701; obj* x_1703; obj* x_1704; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1701 = lean::cnstr_get(x_1696, 0);
if (lean::is_exclusive(x_1696)) {
 x_1703 = x_1696;
} else {
 lean::inc(x_1701);
 lean::dec(x_1696);
 x_1703 = lean::box(0);
}
if (lean::is_scalar(x_1703)) {
 x_1704 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1704 = x_1703;
}
lean::cnstr_set(x_1704, 0, x_1701);
return x_1704;
}
else
{
obj* x_1705; 
x_1705 = lean::cnstr_get(x_1696, 0);
lean::inc(x_1705);
lean::dec(x_1696);
x_14 = x_1705;
goto lbl_15;
}
}
else
{
obj* x_1708; obj* x_1711; obj* x_1712; obj* x_1714; obj* x_1717; obj* x_1719; obj* x_1723; 
x_1708 = lean::cnstr_get(x_1690, 0);
lean::inc(x_1708);
lean::dec(x_1690);
x_1711 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_1708);
x_1712 = lean::cnstr_get(x_1711, 1);
lean::inc(x_1712);
x_1714 = lean::cnstr_get(x_1711, 0);
lean::inc(x_1714);
lean::dec(x_1711);
x_1717 = lean::cnstr_get(x_1712, 0);
lean::inc(x_1717);
x_1719 = lean::cnstr_get(x_1712, 1);
lean::inc(x_1719);
lean::dec(x_1712);
lean::inc(x_1);
x_1723 = l_lean_elaborator_to__pexpr___main(x_1719, x_1, x_2);
if (lean::obj_tag(x_1723) == 0)
{
obj* x_1730; obj* x_1732; obj* x_1733; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1717);
lean::dec(x_1714);
lean::dec(x_1689);
x_1730 = lean::cnstr_get(x_1723, 0);
if (lean::is_exclusive(x_1723)) {
 x_1732 = x_1723;
} else {
 lean::inc(x_1730);
 lean::dec(x_1723);
 x_1732 = lean::box(0);
}
if (lean::is_scalar(x_1732)) {
 x_1733 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1733 = x_1732;
}
lean::cnstr_set(x_1733, 0, x_1730);
return x_1733;
}
else
{
obj* x_1734; obj* x_1737; obj* x_1739; obj* x_1742; obj* x_1746; 
x_1734 = lean::cnstr_get(x_1723, 0);
lean::inc(x_1734);
lean::dec(x_1723);
x_1737 = lean::cnstr_get(x_1734, 0);
lean::inc(x_1737);
x_1739 = lean::cnstr_get(x_1734, 1);
lean::inc(x_1739);
lean::dec(x_1734);
x_1742 = lean::cnstr_get(x_1689, 3);
lean::inc(x_1742);
lean::dec(x_1689);
lean::inc(x_1);
x_1746 = l_lean_elaborator_to__pexpr___main(x_1742, x_1, x_1739);
if (lean::obj_tag(x_1746) == 0)
{
obj* x_1753; obj* x_1755; obj* x_1756; 
lean::dec(x_1737);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1717);
lean::dec(x_1714);
x_1753 = lean::cnstr_get(x_1746, 0);
if (lean::is_exclusive(x_1746)) {
 x_1755 = x_1746;
} else {
 lean::inc(x_1753);
 lean::dec(x_1746);
 x_1755 = lean::box(0);
}
if (lean::is_scalar(x_1755)) {
 x_1756 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1756 = x_1755;
}
lean::cnstr_set(x_1756, 0, x_1753);
return x_1756;
}
else
{
obj* x_1757; obj* x_1760; obj* x_1762; obj* x_1764; obj* x_1765; uint8 x_1766; obj* x_1767; obj* x_1768; 
x_1757 = lean::cnstr_get(x_1746, 0);
lean::inc(x_1757);
lean::dec(x_1746);
x_1760 = lean::cnstr_get(x_1757, 0);
x_1762 = lean::cnstr_get(x_1757, 1);
if (lean::is_exclusive(x_1757)) {
 x_1764 = x_1757;
} else {
 lean::inc(x_1760);
 lean::inc(x_1762);
 lean::dec(x_1757);
 x_1764 = lean::box(0);
}
x_1765 = l_lean_elaborator_mangle__ident(x_1717);
x_1766 = lean::unbox(x_1714);
x_1767 = lean_expr_mk_pi(x_1765, x_1766, x_1737, x_1760);
if (lean::is_scalar(x_1764)) {
 x_1768 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1768 = x_1764;
}
lean::cnstr_set(x_1768, 0, x_1767);
lean::cnstr_set(x_1768, 1, x_1762);
x_14 = x_1768;
goto lbl_15;
}
}
}
}
}
else
{
obj* x_1770; obj* x_1771; obj* x_1775; obj* x_1776; 
lean::dec(x_9);
x_1770 = l_lean_parser_term_lambda_has__view;
x_1771 = lean::cnstr_get(x_1770, 0);
lean::inc(x_1771);
lean::dec(x_1770);
lean::inc(x_0);
x_1775 = lean::apply_1(x_1771, x_0);
x_1776 = lean::cnstr_get(x_1775, 1);
lean::inc(x_1776);
if (lean::obj_tag(x_1776) == 0)
{
obj* x_1780; obj* x_1782; 
lean::dec(x_1776);
lean::dec(x_1775);
x_1780 = l_lean_elaborator_to__pexpr___main___closed__45;
lean::inc(x_1);
x_1782 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1780, x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_1782) == 0)
{
obj* x_1787; obj* x_1789; obj* x_1790; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1787 = lean::cnstr_get(x_1782, 0);
if (lean::is_exclusive(x_1782)) {
 x_1789 = x_1782;
} else {
 lean::inc(x_1787);
 lean::dec(x_1782);
 x_1789 = lean::box(0);
}
if (lean::is_scalar(x_1789)) {
 x_1790 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1790 = x_1789;
}
lean::cnstr_set(x_1790, 0, x_1787);
return x_1790;
}
else
{
obj* x_1791; 
x_1791 = lean::cnstr_get(x_1782, 0);
lean::inc(x_1791);
lean::dec(x_1782);
x_14 = x_1791;
goto lbl_15;
}
}
else
{
obj* x_1794; obj* x_1797; obj* x_1798; obj* x_1800; obj* x_1803; obj* x_1805; obj* x_1809; 
x_1794 = lean::cnstr_get(x_1776, 0);
lean::inc(x_1794);
lean::dec(x_1776);
x_1797 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_1794);
x_1798 = lean::cnstr_get(x_1797, 1);
lean::inc(x_1798);
x_1800 = lean::cnstr_get(x_1797, 0);
lean::inc(x_1800);
lean::dec(x_1797);
x_1803 = lean::cnstr_get(x_1798, 0);
lean::inc(x_1803);
x_1805 = lean::cnstr_get(x_1798, 1);
lean::inc(x_1805);
lean::dec(x_1798);
lean::inc(x_1);
x_1809 = l_lean_elaborator_to__pexpr___main(x_1805, x_1, x_2);
if (lean::obj_tag(x_1809) == 0)
{
obj* x_1816; obj* x_1818; obj* x_1819; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1800);
lean::dec(x_1803);
lean::dec(x_1775);
x_1816 = lean::cnstr_get(x_1809, 0);
if (lean::is_exclusive(x_1809)) {
 x_1818 = x_1809;
} else {
 lean::inc(x_1816);
 lean::dec(x_1809);
 x_1818 = lean::box(0);
}
if (lean::is_scalar(x_1818)) {
 x_1819 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1819 = x_1818;
}
lean::cnstr_set(x_1819, 0, x_1816);
return x_1819;
}
else
{
obj* x_1820; obj* x_1823; obj* x_1825; obj* x_1828; obj* x_1832; 
x_1820 = lean::cnstr_get(x_1809, 0);
lean::inc(x_1820);
lean::dec(x_1809);
x_1823 = lean::cnstr_get(x_1820, 0);
lean::inc(x_1823);
x_1825 = lean::cnstr_get(x_1820, 1);
lean::inc(x_1825);
lean::dec(x_1820);
x_1828 = lean::cnstr_get(x_1775, 3);
lean::inc(x_1828);
lean::dec(x_1775);
lean::inc(x_1);
x_1832 = l_lean_elaborator_to__pexpr___main(x_1828, x_1, x_1825);
if (lean::obj_tag(x_1832) == 0)
{
obj* x_1839; obj* x_1841; obj* x_1842; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1823);
lean::dec(x_1800);
lean::dec(x_1803);
x_1839 = lean::cnstr_get(x_1832, 0);
if (lean::is_exclusive(x_1832)) {
 x_1841 = x_1832;
} else {
 lean::inc(x_1839);
 lean::dec(x_1832);
 x_1841 = lean::box(0);
}
if (lean::is_scalar(x_1841)) {
 x_1842 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1842 = x_1841;
}
lean::cnstr_set(x_1842, 0, x_1839);
return x_1842;
}
else
{
obj* x_1843; obj* x_1846; obj* x_1848; obj* x_1850; obj* x_1851; uint8 x_1852; obj* x_1853; obj* x_1854; 
x_1843 = lean::cnstr_get(x_1832, 0);
lean::inc(x_1843);
lean::dec(x_1832);
x_1846 = lean::cnstr_get(x_1843, 0);
x_1848 = lean::cnstr_get(x_1843, 1);
if (lean::is_exclusive(x_1843)) {
 x_1850 = x_1843;
} else {
 lean::inc(x_1846);
 lean::inc(x_1848);
 lean::dec(x_1843);
 x_1850 = lean::box(0);
}
x_1851 = l_lean_elaborator_mangle__ident(x_1803);
x_1852 = lean::unbox(x_1800);
x_1853 = lean_expr_mk_lambda(x_1851, x_1852, x_1823, x_1846);
if (lean::is_scalar(x_1850)) {
 x_1854 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1854 = x_1850;
}
lean::cnstr_set(x_1854, 0, x_1853);
lean::cnstr_set(x_1854, 1, x_1848);
x_14 = x_1854;
goto lbl_15;
}
}
}
}
}
else
{
obj* x_1856; obj* x_1857; obj* x_1861; obj* x_1862; obj* x_1865; 
lean::dec(x_9);
x_1856 = l_lean_parser_term_app_has__view;
x_1857 = lean::cnstr_get(x_1856, 0);
lean::inc(x_1857);
lean::dec(x_1856);
lean::inc(x_0);
x_1861 = lean::apply_1(x_1857, x_0);
x_1862 = lean::cnstr_get(x_1861, 0);
lean::inc(x_1862);
lean::inc(x_1);
x_1865 = l_lean_elaborator_to__pexpr___main(x_1862, x_1, x_2);
if (lean::obj_tag(x_1865) == 0)
{
obj* x_1870; obj* x_1872; obj* x_1873; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1861);
x_1870 = lean::cnstr_get(x_1865, 0);
if (lean::is_exclusive(x_1865)) {
 x_1872 = x_1865;
} else {
 lean::inc(x_1870);
 lean::dec(x_1865);
 x_1872 = lean::box(0);
}
if (lean::is_scalar(x_1872)) {
 x_1873 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1873 = x_1872;
}
lean::cnstr_set(x_1873, 0, x_1870);
return x_1873;
}
else
{
obj* x_1874; obj* x_1877; obj* x_1879; obj* x_1882; obj* x_1886; 
x_1874 = lean::cnstr_get(x_1865, 0);
lean::inc(x_1874);
lean::dec(x_1865);
x_1877 = lean::cnstr_get(x_1874, 0);
lean::inc(x_1877);
x_1879 = lean::cnstr_get(x_1874, 1);
lean::inc(x_1879);
lean::dec(x_1874);
x_1882 = lean::cnstr_get(x_1861, 1);
lean::inc(x_1882);
lean::dec(x_1861);
lean::inc(x_1);
x_1886 = l_lean_elaborator_to__pexpr___main(x_1882, x_1, x_1879);
if (lean::obj_tag(x_1886) == 0)
{
obj* x_1891; obj* x_1893; obj* x_1894; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1877);
x_1891 = lean::cnstr_get(x_1886, 0);
if (lean::is_exclusive(x_1886)) {
 x_1893 = x_1886;
} else {
 lean::inc(x_1891);
 lean::dec(x_1886);
 x_1893 = lean::box(0);
}
if (lean::is_scalar(x_1893)) {
 x_1894 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1894 = x_1893;
}
lean::cnstr_set(x_1894, 0, x_1891);
return x_1894;
}
else
{
obj* x_1895; obj* x_1898; obj* x_1900; obj* x_1902; obj* x_1903; obj* x_1904; 
x_1895 = lean::cnstr_get(x_1886, 0);
lean::inc(x_1895);
lean::dec(x_1886);
x_1898 = lean::cnstr_get(x_1895, 0);
x_1900 = lean::cnstr_get(x_1895, 1);
if (lean::is_exclusive(x_1895)) {
 x_1902 = x_1895;
} else {
 lean::inc(x_1898);
 lean::inc(x_1900);
 lean::dec(x_1895);
 x_1902 = lean::box(0);
}
x_1903 = lean_expr_mk_app(x_1877, x_1898);
if (lean::is_scalar(x_1902)) {
 x_1904 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1904 = x_1902;
}
lean::cnstr_set(x_1904, 0, x_1903);
lean::cnstr_set(x_1904, 1, x_1900);
x_14 = x_1904;
goto lbl_15;
}
}
}
}
else
{
obj* x_1906; obj* x_1907; obj* x_1911; obj* x_1912; 
lean::dec(x_9);
x_1906 = l_lean_parser_ident__univs_has__view;
x_1907 = lean::cnstr_get(x_1906, 0);
lean::inc(x_1907);
lean::dec(x_1906);
lean::inc(x_0);
x_1911 = lean::apply_1(x_1907, x_0);
x_1912 = lean::cnstr_get(x_1911, 1);
lean::inc(x_1912);
if (lean::obj_tag(x_1912) == 0)
{
obj* x_1914; obj* x_1918; obj* x_1919; obj* x_1920; obj* x_1921; obj* x_1924; obj* x_1925; obj* x_1926; obj* x_1927; obj* x_1928; obj* x_1929; uint8 x_1930; 
x_1914 = lean::cnstr_get(x_1911, 0);
lean::inc(x_1914);
lean::dec(x_1911);
lean::inc(x_1914);
x_1918 = l_lean_elaborator_mangle__ident(x_1914);
x_1919 = lean::box(0);
x_1920 = lean_expr_mk_const(x_1918, x_1919);
x_1921 = lean::cnstr_get(x_1914, 3);
lean::inc(x_1921);
lean::dec(x_1914);
x_1924 = lean::mk_nat_obj(0u);
x_1925 = l_list_enum__from___main___rarg(x_1924, x_1921);
x_1926 = l_lean_elaborator_to__pexpr___main___closed__46;
x_1927 = l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(x_1926, x_1925);
x_1928 = lean_expr_mk_mdata(x_1927, x_1920);
x_1929 = l_lean_elaborator_to__pexpr___main___closed__2;
x_1930 = lean_name_dec_eq(x_7, x_1929);
lean::dec(x_7);
if (x_1930 == 0)
{
obj* x_1932; 
x_1932 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1932) == 0)
{
obj* x_1935; obj* x_1936; 
lean::dec(x_1);
x_1935 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1935, 0, x_1928);
lean::cnstr_set(x_1935, 1, x_2);
x_1936 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1936, 0, x_1935);
return x_1936;
}
else
{
obj* x_1937; obj* x_1940; obj* x_1943; obj* x_1946; obj* x_1947; obj* x_1949; obj* x_1950; obj* x_1951; obj* x_1954; obj* x_1955; obj* x_1956; obj* x_1957; obj* x_1958; 
x_1937 = lean::cnstr_get(x_1932, 0);
lean::inc(x_1937);
lean::dec(x_1932);
x_1940 = lean::cnstr_get(x_1, 0);
lean::inc(x_1940);
lean::dec(x_1);
x_1943 = lean::cnstr_get(x_1940, 2);
lean::inc(x_1943);
lean::dec(x_1940);
x_1946 = l_lean_file__map_to__position(x_1943, x_1937);
x_1947 = lean::cnstr_get(x_1946, 1);
lean::inc(x_1947);
x_1949 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1950 = l_lean_kvmap_set__nat(x_1919, x_1949, x_1947);
x_1951 = lean::cnstr_get(x_1946, 0);
lean::inc(x_1951);
lean::dec(x_1946);
x_1954 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1955 = l_lean_kvmap_set__nat(x_1950, x_1954, x_1951);
x_1956 = lean_expr_mk_mdata(x_1955, x_1928);
x_1957 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1957, 0, x_1956);
lean::cnstr_set(x_1957, 1, x_2);
x_1958 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1958, 0, x_1957);
return x_1958;
}
}
else
{
obj* x_1961; obj* x_1962; 
lean::dec(x_1);
lean::dec(x_0);
x_1961 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1961, 0, x_1928);
lean::cnstr_set(x_1961, 1, x_2);
x_1962 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1962, 0, x_1961);
return x_1962;
}
}
else
{
obj* x_1963; obj* x_1966; obj* x_1969; obj* x_1973; 
x_1963 = lean::cnstr_get(x_1911, 0);
lean::inc(x_1963);
lean::dec(x_1911);
x_1966 = lean::cnstr_get(x_1912, 0);
lean::inc(x_1966);
lean::dec(x_1912);
x_1969 = lean::cnstr_get(x_1966, 1);
lean::inc(x_1969);
lean::dec(x_1966);
lean::inc(x_1);
x_1973 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(x_1969, x_1, x_2);
if (lean::obj_tag(x_1973) == 0)
{
obj* x_1978; obj* x_1980; obj* x_1981; 
lean::dec(x_1963);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1978 = lean::cnstr_get(x_1973, 0);
if (lean::is_exclusive(x_1973)) {
 x_1980 = x_1973;
} else {
 lean::inc(x_1978);
 lean::dec(x_1973);
 x_1980 = lean::box(0);
}
if (lean::is_scalar(x_1980)) {
 x_1981 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1981 = x_1980;
}
lean::cnstr_set(x_1981, 0, x_1978);
return x_1981;
}
else
{
obj* x_1982; obj* x_1985; obj* x_1987; obj* x_1989; obj* x_1991; obj* x_1992; obj* x_1993; obj* x_1996; obj* x_1997; obj* x_1998; obj* x_1999; obj* x_2000; obj* x_2001; 
x_1982 = lean::cnstr_get(x_1973, 0);
lean::inc(x_1982);
lean::dec(x_1973);
x_1985 = lean::cnstr_get(x_1982, 0);
x_1987 = lean::cnstr_get(x_1982, 1);
if (lean::is_exclusive(x_1982)) {
 x_1989 = x_1982;
} else {
 lean::inc(x_1985);
 lean::inc(x_1987);
 lean::dec(x_1982);
 x_1989 = lean::box(0);
}
lean::inc(x_1963);
x_1991 = l_lean_elaborator_mangle__ident(x_1963);
x_1992 = lean_expr_mk_const(x_1991, x_1985);
x_1993 = lean::cnstr_get(x_1963, 3);
lean::inc(x_1993);
lean::dec(x_1963);
x_1996 = lean::mk_nat_obj(0u);
x_1997 = l_list_enum__from___main___rarg(x_1996, x_1993);
x_1998 = l_lean_elaborator_to__pexpr___main___closed__46;
x_1999 = l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(x_1998, x_1997);
x_2000 = lean_expr_mk_mdata(x_1999, x_1992);
if (lean::is_scalar(x_1989)) {
 x_2001 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2001 = x_1989;
}
lean::cnstr_set(x_2001, 0, x_2000);
lean::cnstr_set(x_2001, 1, x_1987);
x_14 = x_2001;
goto lbl_15;
}
}
}
lbl_13:
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_2005; obj* x_2007; obj* x_2008; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_2005 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_2007 = x_12;
} else {
 lean::inc(x_2005);
 lean::dec(x_12);
 x_2007 = lean::box(0);
}
if (lean::is_scalar(x_2007)) {
 x_2008 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2008 = x_2007;
}
lean::cnstr_set(x_2008, 0, x_2005);
return x_2008;
}
else
{
obj* x_2009; obj* x_2011; obj* x_2012; obj* x_2014; obj* x_2016; obj* x_2017; uint8 x_2018; 
x_2009 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_set(x_12, 0, lean::box(0));
 x_2011 = x_12;
} else {
 lean::inc(x_2009);
 lean::dec(x_12);
 x_2011 = lean::box(0);
}
x_2012 = lean::cnstr_get(x_2009, 0);
x_2014 = lean::cnstr_get(x_2009, 1);
if (lean::is_exclusive(x_2009)) {
 lean::cnstr_set(x_2009, 0, lean::box(0));
 lean::cnstr_set(x_2009, 1, lean::box(0));
 x_2016 = x_2009;
} else {
 lean::inc(x_2012);
 lean::inc(x_2014);
 lean::dec(x_2009);
 x_2016 = lean::box(0);
}
x_2017 = l_lean_elaborator_to__pexpr___main___closed__2;
x_2018 = lean_name_dec_eq(x_7, x_2017);
lean::dec(x_7);
if (x_2018 == 0)
{
obj* x_2020; 
x_2020 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_2020) == 0)
{
obj* x_2023; obj* x_2024; 
lean::dec(x_1);
if (lean::is_scalar(x_2016)) {
 x_2023 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2023 = x_2016;
}
lean::cnstr_set(x_2023, 0, x_2012);
lean::cnstr_set(x_2023, 1, x_2014);
if (lean::is_scalar(x_2011)) {
 x_2024 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2024 = x_2011;
}
lean::cnstr_set(x_2024, 0, x_2023);
return x_2024;
}
else
{
obj* x_2025; obj* x_2028; obj* x_2031; obj* x_2034; obj* x_2035; obj* x_2036; obj* x_2038; obj* x_2039; obj* x_2040; obj* x_2043; obj* x_2044; obj* x_2045; obj* x_2046; obj* x_2047; 
x_2025 = lean::cnstr_get(x_2020, 0);
lean::inc(x_2025);
lean::dec(x_2020);
x_2028 = lean::cnstr_get(x_1, 0);
lean::inc(x_2028);
lean::dec(x_1);
x_2031 = lean::cnstr_get(x_2028, 2);
lean::inc(x_2031);
lean::dec(x_2028);
x_2034 = l_lean_file__map_to__position(x_2031, x_2025);
x_2035 = lean::box(0);
x_2036 = lean::cnstr_get(x_2034, 1);
lean::inc(x_2036);
x_2038 = l_lean_elaborator_to__pexpr___main___closed__3;
x_2039 = l_lean_kvmap_set__nat(x_2035, x_2038, x_2036);
x_2040 = lean::cnstr_get(x_2034, 0);
lean::inc(x_2040);
lean::dec(x_2034);
x_2043 = l_lean_elaborator_to__pexpr___main___closed__4;
x_2044 = l_lean_kvmap_set__nat(x_2039, x_2043, x_2040);
x_2045 = lean_expr_mk_mdata(x_2044, x_2012);
if (lean::is_scalar(x_2016)) {
 x_2046 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2046 = x_2016;
}
lean::cnstr_set(x_2046, 0, x_2045);
lean::cnstr_set(x_2046, 1, x_2014);
if (lean::is_scalar(x_2011)) {
 x_2047 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2047 = x_2011;
}
lean::cnstr_set(x_2047, 0, x_2046);
return x_2047;
}
}
else
{
obj* x_2050; obj* x_2051; 
lean::dec(x_1);
lean::dec(x_0);
if (lean::is_scalar(x_2016)) {
 x_2050 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2050 = x_2016;
}
lean::cnstr_set(x_2050, 0, x_2012);
lean::cnstr_set(x_2050, 1, x_2014);
if (lean::is_scalar(x_2011)) {
 x_2051 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2051 = x_2011;
}
lean::cnstr_set(x_2051, 0, x_2050);
return x_2051;
}
}
}
lbl_15:
{
obj* x_2052; obj* x_2054; obj* x_2056; obj* x_2057; uint8 x_2058; 
x_2052 = lean::cnstr_get(x_14, 0);
x_2054 = lean::cnstr_get(x_14, 1);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_set(x_14, 0, lean::box(0));
 lean::cnstr_set(x_14, 1, lean::box(0));
 x_2056 = x_14;
} else {
 lean::inc(x_2052);
 lean::inc(x_2054);
 lean::dec(x_14);
 x_2056 = lean::box(0);
}
x_2057 = l_lean_elaborator_to__pexpr___main___closed__2;
x_2058 = lean_name_dec_eq(x_7, x_2057);
lean::dec(x_7);
if (x_2058 == 0)
{
obj* x_2060; 
x_2060 = l_lean_parser_syntax_get__pos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_2060) == 0)
{
obj* x_2063; obj* x_2064; 
lean::dec(x_1);
if (lean::is_scalar(x_2056)) {
 x_2063 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2063 = x_2056;
}
lean::cnstr_set(x_2063, 0, x_2052);
lean::cnstr_set(x_2063, 1, x_2054);
x_2064 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2064, 0, x_2063);
return x_2064;
}
else
{
obj* x_2065; obj* x_2068; obj* x_2071; obj* x_2074; obj* x_2075; obj* x_2076; obj* x_2078; obj* x_2079; obj* x_2080; obj* x_2083; obj* x_2084; obj* x_2085; obj* x_2086; obj* x_2087; 
x_2065 = lean::cnstr_get(x_2060, 0);
lean::inc(x_2065);
lean::dec(x_2060);
x_2068 = lean::cnstr_get(x_1, 0);
lean::inc(x_2068);
lean::dec(x_1);
x_2071 = lean::cnstr_get(x_2068, 2);
lean::inc(x_2071);
lean::dec(x_2068);
x_2074 = l_lean_file__map_to__position(x_2071, x_2065);
x_2075 = lean::box(0);
x_2076 = lean::cnstr_get(x_2074, 1);
lean::inc(x_2076);
x_2078 = l_lean_elaborator_to__pexpr___main___closed__3;
x_2079 = l_lean_kvmap_set__nat(x_2075, x_2078, x_2076);
x_2080 = lean::cnstr_get(x_2074, 0);
lean::inc(x_2080);
lean::dec(x_2074);
x_2083 = l_lean_elaborator_to__pexpr___main___closed__4;
x_2084 = l_lean_kvmap_set__nat(x_2079, x_2083, x_2080);
x_2085 = lean_expr_mk_mdata(x_2084, x_2052);
if (lean::is_scalar(x_2056)) {
 x_2086 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2086 = x_2056;
}
lean::cnstr_set(x_2086, 0, x_2085);
lean::cnstr_set(x_2086, 1, x_2054);
x_2087 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2087, 0, x_2086);
return x_2087;
}
}
else
{
obj* x_2090; obj* x_2091; 
lean::dec(x_1);
lean::dec(x_0);
if (lean::is_scalar(x_2056)) {
 x_2090 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2090 = x_2056;
}
lean::cnstr_set(x_2090, 0, x_2052);
lean::cnstr_set(x_2090, 1, x_2054);
x_2091 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2091, 0, x_2090);
return x_2091;
}
}
lbl_17:
{
obj* x_2092; 
x_2092 = lean::cnstr_get(x_16, 0);
lean::inc(x_2092);
if (lean::obj_tag(x_2092) == 0)
{
obj* x_2095; obj* x_2098; obj* x_2100; 
lean::dec(x_9);
x_2095 = lean::cnstr_get(x_16, 1);
lean::inc(x_2095);
lean::dec(x_16);
x_2098 = l_lean_elaborator_to__pexpr___main___closed__5;
lean::inc(x_1);
x_2100 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_2098, x_1, x_2095);
lean::dec(x_2095);
if (lean::obj_tag(x_2100) == 0)
{
obj* x_2105; obj* x_2107; obj* x_2108; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_2105 = lean::cnstr_get(x_2100, 0);
if (lean::is_exclusive(x_2100)) {
 x_2107 = x_2100;
} else {
 lean::inc(x_2105);
 lean::dec(x_2100);
 x_2107 = lean::box(0);
}
if (lean::is_scalar(x_2107)) {
 x_2108 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2108 = x_2107;
}
lean::cnstr_set(x_2108, 0, x_2105);
return x_2108;
}
else
{
obj* x_2109; 
x_2109 = lean::cnstr_get(x_2100, 0);
lean::inc(x_2109);
lean::dec(x_2100);
x_14 = x_2109;
goto lbl_15;
}
}
else
{
obj* x_2112; obj* x_2114; obj* x_2115; obj* x_2117; obj* x_2120; obj* x_2121; obj* x_2122; obj* x_2124; obj* x_2125; obj* x_2126; obj* x_2127; obj* x_2129; obj* x_2130; 
x_2112 = lean::cnstr_get(x_16, 1);
if (lean::is_exclusive(x_16)) {
 lean::cnstr_release(x_16, 0);
 x_2114 = x_16;
} else {
 lean::inc(x_2112);
 lean::dec(x_16);
 x_2114 = lean::box(0);
}
x_2115 = lean::cnstr_get(x_2092, 0);
lean::inc(x_2115);
x_2117 = lean::cnstr_get(x_2092, 1);
lean::inc(x_2117);
lean::dec(x_2092);
x_2120 = lean::box(0);
x_2121 = lean::mk_nat_obj(0u);
x_2122 = l_list_length__aux___main___rarg(x_9, x_2121);
lean::dec(x_9);
x_2124 = l_lean_elaborator_to__pexpr___main___closed__6;
x_2125 = l_lean_kvmap_set__nat(x_2120, x_2124, x_2122);
x_2126 = l_list_reverse___rarg(x_2117);
x_2127 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_2115, x_2126);
lean::dec(x_2115);
x_2129 = lean_expr_mk_mdata(x_2125, x_2127);
if (lean::is_scalar(x_2114)) {
 x_2130 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2130 = x_2114;
}
lean::cnstr_set(x_2130, 0, x_2129);
lean::cnstr_set(x_2130, 1, x_2112);
x_14 = x_2130;
goto lbl_15;
}
}
}
default:
{
obj* x_2131; 
x_2131 = lean::box(0);
x_3 = x_2131;
goto lbl_4;
}
}
lbl_4:
{
obj* x_2134; obj* x_2135; obj* x_2136; obj* x_2137; obj* x_2138; obj* x_2140; 
lean::dec(x_3);
lean::inc(x_0);
x_2134 = l_lean_parser_syntax_to__format___main(x_0);
x_2135 = lean::mk_nat_obj(80u);
x_2136 = l_lean_format_pretty(x_2134, x_2135);
x_2137 = l_lean_elaborator_to__pexpr___main___closed__1;
x_2138 = lean::string_append(x_2137, x_2136);
lean::dec(x_2136);
x_2140 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_2138, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
return x_2140;
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_lean_elaborator_to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_to__pexpr___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_get__namespace___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = lean::cnstr_get(x_0, 4);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_1, 4);
lean::inc(x_3);
lean::dec(x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_12; obj* x_13; 
x_9 = lean::cnstr_get(x_3, 0);
lean::inc(x_9);
lean::dec(x_3);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_9);
lean::cnstr_set(x_12, 1, x_0);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
}
}
obj* l_lean_elaborator_get__namespace(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_get__namespace___rarg), 1, 0);
return x_1;
}
}
obj* l_lean_elaborator_get__namespace___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_get__namespace(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_lean_name_quick__lt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = l_lean_name_quick__lt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = l_lean_name_quick__lt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = l_lean_name_quick__lt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_32);
lean::dec(x_30);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_rbnode_is__red___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_48 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_48 = x_36;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_30);
lean::cnstr_set(x_48, 2, x_32);
lean::cnstr_set(x_48, 3, x_47);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_6);
x_49 = x_48;
x_50 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_34, x_1, x_2);
x_51 = l_rbnode_balance2___main___rarg(x_49, x_50);
return x_51;
}
}
}
else
{
uint8 x_52; 
x_52 = l_rbnode_is__red___main___rarg(x_28);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_54 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_54 = x_36;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_30);
lean::cnstr_set(x_54, 2, x_32);
lean::cnstr_set(x_54, 3, x_34);
lean::cnstr_set_scalar(x_54, sizeof(void*)*4, x_6);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_57 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_57 = x_36;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_30);
lean::cnstr_set(x_57, 2, x_32);
lean::cnstr_set(x_57, 3, x_34);
lean::cnstr_set_scalar(x_57, sizeof(void*)*4, x_6);
x_58 = x_57;
x_59 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_28, x_1, x_2);
x_60 = l_rbnode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l_rbnode_is__red___main___rarg(x_0);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_0, x_1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_0, x_1, x_2);
x_6 = l_rbnode_set__black___main___rarg(x_5);
return x_6;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_11);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_18);
return x_20;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(x_0, x_7, x_9);
x_0 = x_12;
x_1 = x_4;
goto _start;
}
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6;
return x_0;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
x_2 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(x_1, x_0);
return x_2;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_lean_name_quick__lt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = l_lean_name_quick__lt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = l_lean_name_quick__lt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = l_lean_name_quick__lt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_32);
lean::dec(x_30);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_rbnode_is__red___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_48 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_48 = x_36;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_30);
lean::cnstr_set(x_48, 2, x_32);
lean::cnstr_set(x_48, 3, x_47);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_6);
x_49 = x_48;
x_50 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_34, x_1, x_2);
x_51 = l_rbnode_balance2___main___rarg(x_49, x_50);
return x_51;
}
}
}
else
{
uint8 x_52; 
x_52 = l_rbnode_is__red___main___rarg(x_28);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_54 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_54 = x_36;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_30);
lean::cnstr_set(x_54, 2, x_32);
lean::cnstr_set(x_54, 3, x_34);
lean::cnstr_set_scalar(x_54, sizeof(void*)*4, x_6);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_57 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_57 = x_36;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_30);
lean::cnstr_set(x_57, 2, x_32);
lean::cnstr_set(x_57, 3, x_34);
lean::cnstr_set_scalar(x_57, sizeof(void*)*4, x_6);
x_58 = x_57;
x_59 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_28, x_1, x_2);
x_60 = l_rbnode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l_rbnode_is__red___main___rarg(x_0);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_0, x_1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_0, x_1, x_2);
x_6 = l_rbnode_set__black___main___rarg(x_5);
return x_6;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_11);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_18);
return x_20;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(x_0, x_7, x_9);
x_0 = x_12;
x_1 = x_4;
goto _start;
}
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1() {
_start:
{
obj* x_0; 
x_0 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13;
return x_0;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
x_2 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(x_1, x_0);
return x_2;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_lean_name_quick__lt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = l_lean_name_quick__lt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = l_lean_name_quick__lt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = l_lean_name_quick__lt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_32);
lean::dec(x_30);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_rbnode_is__red___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_48 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_48 = x_36;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_30);
lean::cnstr_set(x_48, 2, x_32);
lean::cnstr_set(x_48, 3, x_47);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_6);
x_49 = x_48;
x_50 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_34, x_1, x_2);
x_51 = l_rbnode_balance2___main___rarg(x_49, x_50);
return x_51;
}
}
}
else
{
uint8 x_52; 
x_52 = l_rbnode_is__red___main___rarg(x_28);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_54 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_54 = x_36;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_30);
lean::cnstr_set(x_54, 2, x_32);
lean::cnstr_set(x_54, 3, x_34);
lean::cnstr_set_scalar(x_54, sizeof(void*)*4, x_6);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_57 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_57 = x_36;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_30);
lean::cnstr_set(x_57, 2, x_32);
lean::cnstr_set(x_57, 3, x_34);
lean::cnstr_set_scalar(x_57, sizeof(void*)*4, x_6);
x_58 = x_57;
x_59 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_28, x_1, x_2);
x_60 = l_rbnode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l_rbnode_is__red___main___rarg(x_0);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_0, x_1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_0, x_1, x_2);
x_6 = l_rbnode_set__black___main___rarg(x_5);
return x_6;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_1, x_2);
return x_3;
}
}
obj* l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(x_4);
x_8 = lean::box(0);
x_9 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_7, x_2, x_8);
return x_9;
}
}
}
obj* l_lean_elaborator_old__elab__command(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
lean::inc(x_3);
x_8 = l_lean_elaborator_get__namespace___rarg(x_3);
switch (lean::obj_tag(x_1)) {
case 10:
{
obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_30; obj* x_31; obj* x_32; 
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 1);
lean::inc(x_13);
lean::dec(x_1);
x_16 = lean::cnstr_get(x_4, 2);
lean::inc(x_16);
x_18 = l_lean_parser_syntax_get__pos(x_0);
x_19 = lean::mk_nat_obj(0u);
x_20 = l_option_get__or__else___main___rarg(x_18, x_19);
lean::dec(x_18);
x_22 = l_lean_file__map_to__position(x_16, x_20);
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
x_25 = l_lean_elaborator_to__pexpr___main___closed__3;
x_26 = l_lean_kvmap_set__nat(x_11, x_25, x_23);
x_27 = lean::cnstr_get(x_22, 0);
lean::inc(x_27);
lean::dec(x_22);
x_30 = l_lean_elaborator_to__pexpr___main___closed__4;
x_31 = l_lean_kvmap_set__nat(x_26, x_30, x_27);
x_32 = lean_expr_mk_mdata(x_31, x_13);
x_9 = x_32;
goto lbl_10;
}
default:
{
x_9 = x_1;
goto lbl_10;
}
}
lbl_10:
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_9);
x_36 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_38 = x_8;
} else {
 lean::inc(x_36);
 lean::dec(x_8);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_48; obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_59; obj* x_62; obj* x_63; obj* x_65; obj* x_68; obj* x_69; obj* x_71; obj* x_72; obj* x_74; obj* x_76; obj* x_77; obj* x_80; 
x_40 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_set(x_8, 0, lean::box(0));
 x_42 = x_8;
} else {
 lean::inc(x_40);
 lean::dec(x_8);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_48 = lean::cnstr_get(x_4, 0);
lean::inc(x_48);
lean::dec(x_4);
x_51 = lean::cnstr_get(x_3, 8);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_3, 9);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_3, 4);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_55, 1);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_57, 0);
lean::inc(x_59);
lean::dec(x_57);
x_62 = l_list_reverse___rarg(x_59);
x_63 = lean::cnstr_get(x_55, 2);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_63, 0);
lean::inc(x_65);
lean::dec(x_63);
x_68 = l_list_reverse___rarg(x_65);
x_69 = lean::cnstr_get(x_55, 3);
lean::inc(x_69);
x_71 = l_rbtree_to__list___rarg(x_69);
x_72 = lean::cnstr_get(x_55, 6);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_3, 10);
lean::inc(x_74);
x_76 = lean::alloc_cnstr(0, 8, 0);
lean::cnstr_set(x_76, 0, x_51);
lean::cnstr_set(x_76, 1, x_53);
lean::cnstr_set(x_76, 2, x_62);
lean::cnstr_set(x_76, 3, x_68);
lean::cnstr_set(x_76, 4, x_71);
lean::cnstr_set(x_76, 5, x_72);
lean::cnstr_set(x_76, 6, x_74);
lean::cnstr_set(x_76, 7, x_43);
x_77 = lean_elaborator_elaborate_command(x_48, x_9, x_76);
lean::dec(x_76);
lean::dec(x_48);
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
if (lean::obj_tag(x_80) == 0)
{
obj* x_84; obj* x_86; obj* x_87; obj* x_89; obj* x_91; obj* x_93; obj* x_95; obj* x_97; obj* x_99; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_108; obj* x_111; obj* x_112; obj* x_113; obj* x_114; 
lean::dec(x_3);
lean::dec(x_55);
x_84 = lean::cnstr_get(x_77, 1);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 x_86 = x_77;
} else {
 lean::inc(x_84);
 lean::dec(x_77);
 x_86 = lean::box(0);
}
x_87 = lean::cnstr_get(x_45, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_45, 1);
lean::inc(x_89);
x_91 = lean::cnstr_get(x_45, 2);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_45, 3);
lean::inc(x_93);
x_95 = lean::cnstr_get(x_45, 4);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_45, 5);
lean::inc(x_97);
x_99 = l_list_append___rarg(x_84, x_97);
x_100 = lean::cnstr_get(x_45, 6);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_45, 7);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_45, 8);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_45, 9);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_45, 10);
lean::inc(x_108);
lean::dec(x_45);
x_111 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_111, 0, x_87);
lean::cnstr_set(x_111, 1, x_89);
lean::cnstr_set(x_111, 2, x_91);
lean::cnstr_set(x_111, 3, x_93);
lean::cnstr_set(x_111, 4, x_95);
lean::cnstr_set(x_111, 5, x_99);
lean::cnstr_set(x_111, 6, x_100);
lean::cnstr_set(x_111, 7, x_102);
lean::cnstr_set(x_111, 8, x_104);
lean::cnstr_set(x_111, 9, x_106);
lean::cnstr_set(x_111, 10, x_108);
x_112 = lean::box(0);
if (lean::is_scalar(x_86)) {
 x_113 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_113 = x_86;
}
lean::cnstr_set(x_113, 0, x_112);
lean::cnstr_set(x_113, 1, x_111);
if (lean::is_scalar(x_42)) {
 x_114 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_114 = x_42;
}
lean::cnstr_set(x_114, 0, x_113);
return x_114;
}
else
{
obj* x_116; obj* x_118; obj* x_119; obj* x_122; obj* x_124; obj* x_126; obj* x_128; obj* x_130; obj* x_132; obj* x_134; obj* x_135; obj* x_136; obj* x_138; obj* x_139; obj* x_140; obj* x_142; obj* x_143; obj* x_145; obj* x_148; obj* x_150; obj* x_151; obj* x_153; obj* x_155; obj* x_158; obj* x_160; obj* x_162; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; 
lean::dec(x_45);
x_116 = lean::cnstr_get(x_77, 1);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 x_118 = x_77;
} else {
 lean::inc(x_116);
 lean::dec(x_77);
 x_118 = lean::box(0);
}
x_119 = lean::cnstr_get(x_80, 0);
lean::inc(x_119);
lean::dec(x_80);
x_122 = lean::cnstr_get(x_3, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_3, 1);
lean::inc(x_124);
x_126 = lean::cnstr_get(x_3, 2);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_3, 3);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_55, 0);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_119, 2);
lean::inc(x_132);
x_134 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
x_135 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(x_134, x_132);
x_136 = lean::cnstr_get(x_119, 3);
lean::inc(x_136);
x_138 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
x_139 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(x_138, x_136);
x_140 = lean::cnstr_get(x_119, 4);
lean::inc(x_140);
x_142 = l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(x_140);
x_143 = lean::cnstr_get(x_55, 4);
lean::inc(x_143);
x_145 = lean::cnstr_get(x_55, 5);
lean::inc(x_145);
lean::dec(x_55);
x_148 = lean::cnstr_get(x_119, 5);
lean::inc(x_148);
x_150 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_150, 0, x_130);
lean::cnstr_set(x_150, 1, x_135);
lean::cnstr_set(x_150, 2, x_139);
lean::cnstr_set(x_150, 3, x_142);
lean::cnstr_set(x_150, 4, x_143);
lean::cnstr_set(x_150, 5, x_145);
lean::cnstr_set(x_150, 6, x_148);
x_151 = lean::cnstr_get(x_3, 5);
lean::inc(x_151);
x_153 = lean::cnstr_get(x_3, 6);
lean::inc(x_153);
x_155 = lean::cnstr_get(x_3, 7);
lean::inc(x_155);
lean::dec(x_3);
x_158 = lean::cnstr_get(x_119, 0);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_119, 1);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_119, 6);
lean::inc(x_162);
lean::dec(x_119);
x_165 = l_list_append___rarg(x_116, x_151);
x_166 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_166, 0, x_122);
lean::cnstr_set(x_166, 1, x_124);
lean::cnstr_set(x_166, 2, x_126);
lean::cnstr_set(x_166, 3, x_128);
lean::cnstr_set(x_166, 4, x_150);
lean::cnstr_set(x_166, 5, x_165);
lean::cnstr_set(x_166, 6, x_153);
lean::cnstr_set(x_166, 7, x_155);
lean::cnstr_set(x_166, 8, x_158);
lean::cnstr_set(x_166, 9, x_160);
lean::cnstr_set(x_166, 10, x_162);
x_167 = lean::box(0);
if (lean::is_scalar(x_118)) {
 x_168 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_168 = x_118;
}
lean::cnstr_set(x_168, 0, x_167);
lean::cnstr_set(x_168, 1, x_166);
if (lean::is_scalar(x_42)) {
 x_169 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_169 = x_42;
}
lean::cnstr_set(x_169, 0, x_168);
return x_169;
}
}
}
}
}
obj* l_lean_elaborator_old__elab__command___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_old__elab__command(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::box(0);
x_8 = lean_expr_mk_const(x_2, x_7);
x_9 = l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_6;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_names__to__pexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(x_0);
x_2 = l_lean_elaborator_mk__eqns___closed__1;
x_3 = l_lean_expr_mk__capp(x_2, x_1);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__pexpr___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_15; obj* x_18; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::dec(x_7);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::inc(x_1);
x_18 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(x_15, x_1, x_2);
if (lean::obj_tag(x_18) == 0)
{
obj* x_23; obj* x_25; obj* x_26; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
lean::dec(x_12);
x_23 = lean::cnstr_get(x_18, 0);
if (lean::is_exclusive(x_18)) {
 x_25 = x_18;
} else {
 lean::inc(x_23);
 lean::dec(x_18);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
return x_26;
}
else
{
obj* x_27; obj* x_30; obj* x_32; obj* x_35; 
x_27 = lean::cnstr_get(x_18, 0);
lean::inc(x_27);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_27, 1);
lean::inc(x_32);
lean::dec(x_27);
x_35 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(x_9, x_1, x_32);
if (lean::obj_tag(x_35) == 0)
{
obj* x_39; obj* x_41; obj* x_42; 
lean::dec(x_11);
lean::dec(x_12);
lean::dec(x_30);
x_39 = lean::cnstr_get(x_35, 0);
if (lean::is_exclusive(x_35)) {
 x_41 = x_35;
} else {
 lean::inc(x_39);
 lean::dec(x_35);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_39);
return x_42;
}
else
{
obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_54; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_43 = lean::cnstr_get(x_35, 0);
if (lean::is_exclusive(x_35)) {
 x_45 = x_35;
} else {
 lean::inc(x_43);
 lean::dec(x_35);
 x_45 = lean::box(0);
}
x_46 = lean::cnstr_get(x_43, 0);
x_48 = lean::cnstr_get(x_43, 1);
if (lean::is_exclusive(x_43)) {
 x_50 = x_43;
} else {
 lean::inc(x_46);
 lean::inc(x_48);
 lean::dec(x_43);
 x_50 = lean::box(0);
}
x_51 = lean::cnstr_get(x_12, 0);
lean::inc(x_51);
lean::dec(x_12);
x_54 = lean::cnstr_get(x_51, 2);
lean::inc(x_54);
lean::dec(x_51);
x_57 = l_lean_expr_mk__capp(x_54, x_30);
if (lean::is_scalar(x_11)) {
 x_58 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_58 = x_11;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_46);
if (lean::is_scalar(x_50)) {
 x_59 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_59 = x_50;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_48);
if (lean::is_scalar(x_45)) {
 x_60 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_60 = x_45;
}
lean::cnstr_set(x_60, 0, x_59);
return x_60;
}
}
}
}
}
obj* l_lean_elaborator_attrs__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_6 = x_3;
} else {
 lean::inc(x_4);
 lean::dec(x_3);
 x_6 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_8 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_8, 0);
x_13 = lean::cnstr_get(x_8, 1);
if (lean::is_exclusive(x_8)) {
 x_15 = x_8;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_8);
 x_15 = lean::box(0);
}
x_16 = l_lean_elaborator_mk__eqns___closed__1;
x_17 = l_lean_expr_mk__capp(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_15;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_13);
if (lean::is_scalar(x_10)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_10;
}
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("noncomputable");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("meta");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("private");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = 1;
x_5 = l_lean_kvmap_set__bool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("protected");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = 1;
x_5 = l_lean_kvmap_set__bool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("doc_string");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("private");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("protected");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_decl__modifiers__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_8; uint8 x_10; obj* x_12; uint8 x_14; obj* x_16; obj* x_19; 
x_3 = lean::box(0);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 3);
lean::inc(x_8);
x_10 = l_option_is__some___main___rarg(x_8);
lean::dec(x_8);
x_12 = lean::cnstr_get(x_0, 4);
lean::inc(x_12);
x_14 = l_option_is__some___main___rarg(x_12);
lean::dec(x_12);
x_16 = lean::cnstr_get(x_0, 1);
lean::inc(x_16);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
if (lean::obj_tag(x_6) == 0)
{
x_19 = x_3;
goto lbl_20;
}
else
{
obj* x_21; 
x_21 = lean::cnstr_get(x_6, 0);
lean::inc(x_21);
lean::dec(x_6);
if (lean::obj_tag(x_21) == 0)
{
obj* x_25; 
lean::dec(x_21);
x_25 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
x_19 = x_25;
goto lbl_20;
}
else
{
obj* x_27; 
lean::dec(x_21);
x_27 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
x_19 = x_27;
goto lbl_20;
}
}
}
else
{
obj* x_28; obj* x_31; 
x_28 = lean::cnstr_get(x_4, 0);
lean::inc(x_28);
lean::dec(x_4);
x_31 = lean::cnstr_get(x_28, 1);
lean::inc(x_31);
lean::dec(x_28);
if (lean::obj_tag(x_31) == 0)
{
if (lean::obj_tag(x_6) == 0)
{
x_19 = x_3;
goto lbl_20;
}
else
{
obj* x_34; 
x_34 = lean::cnstr_get(x_6, 0);
lean::inc(x_34);
lean::dec(x_6);
if (lean::obj_tag(x_34) == 0)
{
obj* x_38; 
lean::dec(x_34);
x_38 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
x_19 = x_38;
goto lbl_20;
}
else
{
obj* x_40; 
lean::dec(x_34);
x_40 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
x_19 = x_40;
goto lbl_20;
}
}
}
else
{
obj* x_41; obj* x_44; obj* x_47; obj* x_48; 
x_41 = lean::cnstr_get(x_31, 0);
lean::inc(x_41);
lean::dec(x_31);
x_44 = lean::cnstr_get(x_41, 1);
lean::inc(x_44);
lean::dec(x_41);
x_47 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__5;
x_48 = l_lean_kvmap_set__string(x_3, x_47, x_44);
if (lean::obj_tag(x_6) == 0)
{
x_19 = x_48;
goto lbl_20;
}
else
{
obj* x_49; 
x_49 = lean::cnstr_get(x_6, 0);
lean::inc(x_49);
lean::dec(x_6);
if (lean::obj_tag(x_49) == 0)
{
obj* x_53; uint8 x_54; obj* x_55; 
lean::dec(x_49);
x_53 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__6;
x_54 = 1;
x_55 = l_lean_kvmap_set__bool(x_48, x_53, x_54);
x_19 = x_55;
goto lbl_20;
}
else
{
obj* x_57; uint8 x_58; obj* x_59; 
lean::dec(x_49);
x_57 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__7;
x_58 = 1;
x_59 = l_lean_kvmap_set__bool(x_48, x_57, x_58);
x_19 = x_59;
goto lbl_20;
}
}
}
}
lbl_20:
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_60 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__1;
x_61 = l_lean_kvmap_set__bool(x_19, x_60, x_10);
x_62 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__2;
x_63 = l_lean_kvmap_set__bool(x_61, x_62, x_14);
if (lean::obj_tag(x_16) == 0)
{
obj* x_64; 
x_64 = l_lean_elaborator_attrs__to__pexpr(x_3, x_1, x_2);
if (lean::obj_tag(x_64) == 0)
{
obj* x_66; obj* x_68; obj* x_69; 
lean::dec(x_63);
x_66 = lean::cnstr_get(x_64, 0);
if (lean::is_exclusive(x_64)) {
 x_68 = x_64;
} else {
 lean::inc(x_66);
 lean::dec(x_64);
 x_68 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_69 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_69 = x_68;
}
lean::cnstr_set(x_69, 0, x_66);
return x_69;
}
else
{
obj* x_70; obj* x_72; obj* x_73; obj* x_75; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_70 = lean::cnstr_get(x_64, 0);
if (lean::is_exclusive(x_64)) {
 x_72 = x_64;
} else {
 lean::inc(x_70);
 lean::dec(x_64);
 x_72 = lean::box(0);
}
x_73 = lean::cnstr_get(x_70, 0);
x_75 = lean::cnstr_get(x_70, 1);
if (lean::is_exclusive(x_70)) {
 x_77 = x_70;
} else {
 lean::inc(x_73);
 lean::inc(x_75);
 lean::dec(x_70);
 x_77 = lean::box(0);
}
x_78 = lean_expr_mk_mdata(x_63, x_73);
if (lean::is_scalar(x_77)) {
 x_79 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_79 = x_77;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_75);
if (lean::is_scalar(x_72)) {
 x_80 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_80 = x_72;
}
lean::cnstr_set(x_80, 0, x_79);
return x_80;
}
}
else
{
obj* x_81; obj* x_84; obj* x_87; 
x_81 = lean::cnstr_get(x_16, 0);
lean::inc(x_81);
lean::dec(x_16);
x_84 = lean::cnstr_get(x_81, 1);
lean::inc(x_84);
lean::dec(x_81);
x_87 = l_lean_elaborator_attrs__to__pexpr(x_84, x_1, x_2);
if (lean::obj_tag(x_87) == 0)
{
obj* x_89; obj* x_91; obj* x_92; 
lean::dec(x_63);
x_89 = lean::cnstr_get(x_87, 0);
if (lean::is_exclusive(x_87)) {
 x_91 = x_87;
} else {
 lean::inc(x_89);
 lean::dec(x_87);
 x_91 = lean::box(0);
}
if (lean::is_scalar(x_91)) {
 x_92 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_92 = x_91;
}
lean::cnstr_set(x_92, 0, x_89);
return x_92;
}
else
{
obj* x_93; obj* x_95; obj* x_96; obj* x_98; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
x_93 = lean::cnstr_get(x_87, 0);
if (lean::is_exclusive(x_87)) {
 x_95 = x_87;
} else {
 lean::inc(x_93);
 lean::dec(x_87);
 x_95 = lean::box(0);
}
x_96 = lean::cnstr_get(x_93, 0);
x_98 = lean::cnstr_get(x_93, 1);
if (lean::is_exclusive(x_93)) {
 x_100 = x_93;
} else {
 lean::inc(x_96);
 lean::inc(x_98);
 lean::dec(x_93);
 x_100 = lean::box(0);
}
x_101 = lean_expr_mk_mdata(x_63, x_96);
if (lean::is_scalar(x_100)) {
 x_102 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_102 = x_100;
}
lean::cnstr_set(x_102, 0, x_101);
lean::cnstr_set(x_102, 1, x_98);
if (lean::is_scalar(x_95)) {
 x_103 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_103 = x_95;
}
lean::cnstr_set(x_103, 0, x_102);
return x_103;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = level_mk_param(x_7);
x_9 = l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_6;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_ident__univ__params__to__pexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = l_lean_elaborator_mangle__ident(x_1);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::box(0);
x_8 = lean_expr_mk_const(x_3, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_12; obj* x_15; obj* x_16; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
x_15 = l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(x_12);
x_16 = lean_expr_mk_const(x_3, x_15);
return x_16;
}
}
}
obj* l_lean_elaborator_locally___rarg___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 4);
lean::inc(x_1);
return x_1;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_23; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 5);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 6);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_1, 7);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_1, 8);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_1, 9);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 10);
lean::inc(x_20);
lean::dec(x_1);
x_23 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_23, 0, x_2);
lean::cnstr_set(x_23, 1, x_4);
lean::cnstr_set(x_23, 2, x_6);
lean::cnstr_set(x_23, 3, x_8);
lean::cnstr_set(x_23, 4, x_0);
lean::cnstr_set(x_23, 5, x_10);
lean::cnstr_set(x_23, 6, x_12);
lean::cnstr_set(x_23, 7, x_14);
lean::cnstr_set(x_23, 8, x_16);
lean::cnstr_set(x_23, 9, x_18);
lean::cnstr_set(x_23, 10, x_20);
return x_23;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 2);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_1);
x_7 = lean::apply_1(x_3, x_6);
return x_7;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__3___boxed), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::apply_4(x_1, lean::box(0), lean::box(0), x_2, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_locally___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__1___boxed), 1, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_20; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_1, 0);
lean::inc(x_14);
x_16 = l_lean_elaborator_locally___rarg___closed__1;
x_17 = lean::apply_4(x_11, lean::box(0), lean::box(0), x_16, x_14);
lean::inc(x_3);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__4), 4, 3);
lean::closure_set(x_19, 0, x_1);
lean::closure_set(x_19, 1, x_3);
lean::closure_set(x_19, 2, x_2);
x_20 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_17, x_19);
return x_20;
}
}
obj* l_lean_elaborator_locally(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg), 3, 0);
return x_1;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_locally___rarg___lambda__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_locally___rarg___lambda__3(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_elaborator_locally___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_locally(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_18; obj* x_20; obj* x_24; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_7);
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
lean::dec(x_12);
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
lean::dec(x_13);
lean::inc(x_1);
x_24 = l_lean_elaborator_to__pexpr___main(x_20, x_1, x_2);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_32 = x_24;
} else {
 lean::inc(x_30);
 lean::dec(x_24);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
lean::dec(x_24);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(x_9, x_1, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_49; obj* x_50; 
lean::dec(x_15);
lean::dec(x_11);
lean::dec(x_37);
lean::dec(x_18);
x_47 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_49 = x_42;
} else {
 lean::inc(x_47);
 lean::dec(x_42);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_53; obj* x_54; obj* x_56; obj* x_58; obj* x_59; uint8 x_60; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_51 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_53 = x_42;
} else {
 lean::inc(x_51);
 lean::dec(x_42);
 x_53 = lean::box(0);
}
x_54 = lean::cnstr_get(x_51, 0);
x_56 = lean::cnstr_get(x_51, 1);
if (lean::is_exclusive(x_51)) {
 x_58 = x_51;
} else {
 lean::inc(x_54);
 lean::inc(x_56);
 lean::dec(x_51);
 x_58 = lean::box(0);
}
x_59 = l_lean_elaborator_mangle__ident(x_18);
x_60 = lean::unbox(x_15);
lean::inc(x_59);
x_62 = lean_expr_local(x_59, x_59, x_37, x_60);
if (lean::is_scalar(x_11)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_11;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_54);
if (lean::is_scalar(x_58)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_58;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_56);
if (lean::is_scalar(x_53)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_53;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
}
}
}
}
obj* l_lean_elaborator_simple__binders__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_6 = x_3;
} else {
 lean::inc(x_4);
 lean::dec(x_3);
 x_6 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_8 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_8, 0);
x_13 = lean::cnstr_get(x_8, 1);
if (lean::is_exclusive(x_8)) {
 x_15 = x_8;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_8);
 x_15 = lean::box(0);
}
x_16 = l_lean_elaborator_mk__eqns___closed__1;
x_17 = l_lean_expr_mk__capp(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_15;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_13);
if (lean::is_scalar(x_10)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_10;
}
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__pexpr___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_17; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_13 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
x_14 = lean::cnstr_get(x_9, 1);
lean::inc(x_14);
lean::inc(x_2);
x_17 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(x_14, x_2, x_3);
if (lean::obj_tag(x_17) == 0)
{
obj* x_23; obj* x_25; obj* x_26; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
x_23 = lean::cnstr_get(x_17, 0);
if (lean::is_exclusive(x_17)) {
 x_25 = x_17;
} else {
 lean::inc(x_23);
 lean::dec(x_17);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
return x_26;
}
else
{
obj* x_27; obj* x_30; obj* x_32; obj* x_34; obj* x_35; obj* x_39; 
x_27 = lean::cnstr_get(x_17, 0);
lean::inc(x_27);
lean::dec(x_17);
x_30 = lean::cnstr_get(x_27, 0);
x_32 = lean::cnstr_get(x_27, 1);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_set(x_27, 0, lean::box(0));
 lean::cnstr_set(x_27, 1, lean::box(0));
 x_34 = x_27;
} else {
 lean::inc(x_30);
 lean::inc(x_32);
 lean::dec(x_27);
 x_34 = lean::box(0);
}
x_35 = lean::cnstr_get(x_9, 3);
lean::inc(x_35);
lean::dec(x_9);
lean::inc(x_2);
x_39 = l_lean_elaborator_to__pexpr___main(x_35, x_2, x_32);
if (lean::obj_tag(x_39) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
lean::dec(x_30);
lean::dec(x_34);
x_46 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_48 = x_39;
} else {
 lean::inc(x_46);
 lean::dec(x_39);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_53; obj* x_55; obj* x_56; obj* x_58; obj* x_60; obj* x_61; 
x_50 = lean::cnstr_get(x_39, 0);
lean::inc(x_50);
lean::dec(x_39);
x_53 = lean::cnstr_get(x_0, 0);
lean::inc(x_53);
x_55 = l_lean_elaborator_mangle__ident(x_53);
x_56 = lean::cnstr_get(x_50, 0);
x_58 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 lean::cnstr_set(x_50, 0, lean::box(0));
 lean::cnstr_set(x_50, 1, lean::box(0));
 x_60 = x_50;
} else {
 lean::inc(x_56);
 lean::inc(x_58);
 lean::dec(x_50);
 x_60 = lean::box(0);
}
x_61 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(x_0, x_11, x_2, x_58);
if (lean::obj_tag(x_61) == 0)
{
obj* x_68; obj* x_70; obj* x_71; 
lean::dec(x_13);
lean::dec(x_30);
lean::dec(x_34);
lean::dec(x_60);
lean::dec(x_55);
lean::dec(x_56);
x_68 = lean::cnstr_get(x_61, 0);
if (lean::is_exclusive(x_61)) {
 x_70 = x_61;
} else {
 lean::inc(x_68);
 lean::dec(x_61);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_68);
return x_71;
}
else
{
obj* x_72; obj* x_74; obj* x_75; obj* x_77; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
x_72 = lean::cnstr_get(x_61, 0);
if (lean::is_exclusive(x_61)) {
 x_74 = x_61;
} else {
 lean::inc(x_72);
 lean::dec(x_61);
 x_74 = lean::box(0);
}
x_75 = lean::cnstr_get(x_72, 0);
x_77 = lean::cnstr_get(x_72, 1);
if (lean::is_exclusive(x_72)) {
 x_79 = x_72;
} else {
 lean::inc(x_75);
 lean::inc(x_77);
 lean::dec(x_72);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_30);
lean::cnstr_set(x_80, 1, x_56);
if (lean::is_scalar(x_60)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_60;
}
lean::cnstr_set(x_81, 0, x_55);
lean::cnstr_set(x_81, 1, x_80);
if (lean::is_scalar(x_13)) {
 x_82 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_82 = x_13;
}
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_75);
if (lean::is_scalar(x_34)) {
 x_83 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_83 = x_34;
}
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_77);
if (lean::is_scalar(x_74)) {
 x_84 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_84 = x_74;
}
lean::cnstr_set(x_84, 0, x_83);
return x_84;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_11);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_18);
return x_20;
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
lean::inc(x_2);
x_8 = level_mk_param(x_2);
x_9 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_2, x_8);
x_0 = x_9;
x_1 = x_4;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_elaborator_elab__def__like___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("elab_def_like: unexpected input");
return x_0;
}
}
obj* _init_l_lean_elaborator_elab__def__like___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("defs");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elab__def__like(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; 
x_6 = lean::cnstr_get(x_2, 3);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_15; obj* x_16; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_lean_elaborator_elab__def__like___closed__1;
x_16 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_15, x_4, x_5);
lean::dec(x_5);
return x_16;
}
else
{
obj* x_18; obj* x_20; obj* x_22; obj* x_25; obj* x_28; obj* x_32; 
x_18 = lean::cnstr_get(x_2, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_2, 2);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 4);
lean::inc(x_22);
lean::dec(x_2);
x_25 = lean::cnstr_get(x_6, 1);
lean::inc(x_25);
lean::dec(x_6);
x_28 = lean::cnstr_get(x_8, 0);
lean::inc(x_28);
lean::dec(x_8);
lean::inc(x_4);
x_32 = l_lean_elaborator_decl__modifiers__to__pexpr(x_1, x_4, x_5);
if (lean::obj_tag(x_32) == 0)
{
obj* x_40; obj* x_42; obj* x_43; 
lean::dec(x_20);
lean::dec(x_22);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_18);
lean::dec(x_25);
lean::dec(x_28);
x_40 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_42 = x_32;
} else {
 lean::inc(x_40);
 lean::dec(x_32);
 x_42 = lean::box(0);
}
if (lean::is_scalar(x_42)) {
 x_43 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_43 = x_42;
}
lean::cnstr_set(x_43, 0, x_40);
return x_43;
}
else
{
obj* x_44; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_44 = lean::cnstr_get(x_32, 0);
lean::inc(x_44);
lean::dec(x_32);
x_47 = lean::cnstr_get(x_44, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_44, 1);
lean::inc(x_49);
lean::dec(x_44);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_53, 0, x_3);
x_54 = lean_expr_mk_lit(x_53);
if (lean::obj_tag(x_18) == 0)
{
obj* x_58; obj* x_61; 
x_58 = l_lean_expander_get__opt__type___main(x_25);
lean::dec(x_25);
lean::inc(x_4);
x_61 = l_lean_elaborator_to__pexpr___main(x_58, x_4, x_49);
if (lean::obj_tag(x_18) == 0)
{
if (lean::obj_tag(x_61) == 0)
{
obj* x_68; obj* x_70; obj* x_71; 
lean::dec(x_20);
lean::dec(x_22);
lean::dec(x_4);
lean::dec(x_47);
lean::dec(x_28);
lean::dec(x_54);
x_68 = lean::cnstr_get(x_61, 0);
if (lean::is_exclusive(x_61)) {
 x_70 = x_61;
} else {
 lean::inc(x_68);
 lean::dec(x_61);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_68);
return x_71;
}
else
{
obj* x_72; 
x_72 = lean::cnstr_get(x_61, 0);
lean::inc(x_72);
lean::dec(x_61);
x_55 = x_52;
x_56 = x_72;
goto lbl_57;
}
}
else
{
if (lean::obj_tag(x_61) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_20);
lean::dec(x_22);
lean::dec(x_4);
lean::dec(x_47);
lean::dec(x_28);
lean::dec(x_54);
x_81 = lean::cnstr_get(x_61, 0);
if (lean::is_exclusive(x_61)) {
 x_83 = x_61;
} else {
 lean::inc(x_81);
 lean::dec(x_61);
 x_83 = lean::box(0);
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_88; obj* x_91; obj* x_94; 
x_85 = lean::cnstr_get(x_18, 0);
lean::inc(x_85);
lean::dec(x_18);
x_88 = lean::cnstr_get(x_61, 0);
lean::inc(x_88);
lean::dec(x_61);
x_91 = lean::cnstr_get(x_85, 1);
lean::inc(x_91);
lean::dec(x_85);
x_94 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(x_91);
x_55 = x_94;
x_56 = x_88;
goto lbl_57;
}
}
}
else
{
obj* x_95; obj* x_97; obj* x_99; obj* x_101; obj* x_103; obj* x_105; obj* x_107; obj* x_109; obj* x_111; obj* x_115; obj* x_116; obj* x_117; obj* x_119; obj* x_121; obj* x_123; obj* x_125; obj* x_128; obj* x_129; obj* x_131; obj* x_133; obj* x_135; obj* x_137; obj* x_139; obj* x_142; obj* x_143; obj* x_146; 
x_95 = lean::cnstr_get(x_18, 0);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_49, 0);
lean::inc(x_97);
x_99 = lean::cnstr_get(x_49, 1);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_49, 2);
lean::inc(x_101);
x_103 = lean::cnstr_get(x_49, 3);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_49, 4);
lean::inc(x_105);
x_107 = lean::cnstr_get(x_105, 0);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_105, 1);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_95, 1);
lean::inc(x_111);
lean::dec(x_95);
lean::inc(x_111);
x_115 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(x_111);
x_116 = l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(x_109, x_115);
x_117 = lean::cnstr_get(x_105, 2);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_105, 3);
lean::inc(x_119);
x_121 = lean::cnstr_get(x_105, 4);
lean::inc(x_121);
x_123 = lean::cnstr_get(x_105, 5);
lean::inc(x_123);
x_125 = lean::cnstr_get(x_105, 6);
lean::inc(x_125);
lean::dec(x_105);
x_128 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_128, 0, x_107);
lean::cnstr_set(x_128, 1, x_116);
lean::cnstr_set(x_128, 2, x_117);
lean::cnstr_set(x_128, 3, x_119);
lean::cnstr_set(x_128, 4, x_121);
lean::cnstr_set(x_128, 5, x_123);
lean::cnstr_set(x_128, 6, x_125);
x_129 = lean::cnstr_get(x_49, 5);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_49, 6);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_49, 7);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_49, 8);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_49, 9);
lean::inc(x_137);
x_139 = lean::cnstr_get(x_49, 10);
lean::inc(x_139);
lean::dec(x_49);
x_142 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_142, 0, x_97);
lean::cnstr_set(x_142, 1, x_99);
lean::cnstr_set(x_142, 2, x_101);
lean::cnstr_set(x_142, 3, x_103);
lean::cnstr_set(x_142, 4, x_128);
lean::cnstr_set(x_142, 5, x_129);
lean::cnstr_set(x_142, 6, x_131);
lean::cnstr_set(x_142, 7, x_133);
lean::cnstr_set(x_142, 8, x_135);
lean::cnstr_set(x_142, 9, x_137);
lean::cnstr_set(x_142, 10, x_139);
x_143 = l_lean_expander_get__opt__type___main(x_25);
lean::dec(x_25);
lean::inc(x_4);
x_146 = l_lean_elaborator_to__pexpr___main(x_143, x_4, x_142);
if (lean::obj_tag(x_18) == 0)
{
lean::dec(x_111);
if (lean::obj_tag(x_146) == 0)
{
obj* x_154; obj* x_156; obj* x_157; 
lean::dec(x_20);
lean::dec(x_22);
lean::dec(x_4);
lean::dec(x_47);
lean::dec(x_28);
lean::dec(x_54);
x_154 = lean::cnstr_get(x_146, 0);
if (lean::is_exclusive(x_146)) {
 x_156 = x_146;
} else {
 lean::inc(x_154);
 lean::dec(x_146);
 x_156 = lean::box(0);
}
if (lean::is_scalar(x_156)) {
 x_157 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_157 = x_156;
}
lean::cnstr_set(x_157, 0, x_154);
return x_157;
}
else
{
obj* x_158; 
x_158 = lean::cnstr_get(x_146, 0);
lean::inc(x_158);
lean::dec(x_146);
x_55 = x_52;
x_56 = x_158;
goto lbl_57;
}
}
else
{
lean::dec(x_18);
if (lean::obj_tag(x_146) == 0)
{
obj* x_169; obj* x_171; obj* x_172; 
lean::dec(x_20);
lean::dec(x_22);
lean::dec(x_4);
lean::dec(x_47);
lean::dec(x_28);
lean::dec(x_54);
lean::dec(x_111);
x_169 = lean::cnstr_get(x_146, 0);
if (lean::is_exclusive(x_146)) {
 x_171 = x_146;
} else {
 lean::inc(x_169);
 lean::dec(x_146);
 x_171 = lean::box(0);
}
if (lean::is_scalar(x_171)) {
 x_172 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_172 = x_171;
}
lean::cnstr_set(x_172, 0, x_169);
return x_172;
}
else
{
obj* x_173; obj* x_176; 
x_173 = lean::cnstr_get(x_146, 0);
lean::inc(x_173);
lean::dec(x_146);
x_176 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(x_111);
x_55 = x_176;
x_56 = x_173;
goto lbl_57;
}
}
}
lbl_57:
{
obj* x_177; obj* x_179; obj* x_181; obj* x_182; obj* x_183; obj* x_185; uint8 x_186; obj* x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_193; 
x_177 = lean::cnstr_get(x_56, 0);
x_179 = lean::cnstr_get(x_56, 1);
if (lean::is_exclusive(x_56)) {
 lean::cnstr_set(x_56, 0, lean::box(0));
 lean::cnstr_set(x_56, 1, lean::box(0));
 x_181 = x_56;
} else {
 lean::inc(x_177);
 lean::inc(x_179);
 lean::dec(x_56);
 x_181 = lean::box(0);
}
x_182 = l_lean_elaborator_names__to__pexpr(x_55);
x_183 = lean::cnstr_get(x_20, 0);
lean::inc(x_183);
x_185 = l_lean_elaborator_mangle__ident(x_183);
x_186 = 4;
lean::inc(x_177);
lean::inc(x_185);
x_189 = lean_expr_local(x_185, x_185, x_177, x_186);
x_190 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_190, 0, x_189);
lean::cnstr_set(x_190, 1, x_52);
x_191 = l_lean_elaborator_mk__eqns___closed__1;
x_192 = l_lean_expr_mk__capp(x_191, x_190);
switch (lean::obj_tag(x_22)) {
case 0:
{
obj* x_198; obj* x_201; obj* x_205; 
lean::dec(x_177);
lean::dec(x_181);
lean::dec(x_20);
x_198 = lean::cnstr_get(x_22, 0);
lean::inc(x_198);
lean::dec(x_22);
x_201 = lean::cnstr_get(x_198, 1);
lean::inc(x_201);
lean::dec(x_198);
lean::inc(x_4);
x_205 = l_lean_elaborator_to__pexpr___main(x_201, x_4, x_179);
if (lean::obj_tag(x_205) == 0)
{
obj* x_212; obj* x_214; obj* x_215; 
lean::dec(x_192);
lean::dec(x_182);
lean::dec(x_4);
lean::dec(x_47);
lean::dec(x_28);
lean::dec(x_54);
x_212 = lean::cnstr_get(x_205, 0);
if (lean::is_exclusive(x_205)) {
 x_214 = x_205;
} else {
 lean::inc(x_212);
 lean::dec(x_205);
 x_214 = lean::box(0);
}
if (lean::is_scalar(x_214)) {
 x_215 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_215 = x_214;
}
lean::cnstr_set(x_215, 0, x_212);
return x_215;
}
else
{
obj* x_216; 
x_216 = lean::cnstr_get(x_205, 0);
lean::inc(x_216);
lean::dec(x_205);
x_193 = x_216;
goto lbl_194;
}
}
case 1:
{
obj* x_221; obj* x_222; 
lean::dec(x_20);
lean::dec(x_22);
x_221 = l_lean_elaborator_mk__eqns(x_177, x_52);
if (lean::is_scalar(x_181)) {
 x_222 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_222 = x_181;
}
lean::cnstr_set(x_222, 0, x_221);
lean::cnstr_set(x_222, 1, x_179);
x_193 = x_222;
goto lbl_194;
}
default:
{
obj* x_224; obj* x_228; 
lean::dec(x_181);
x_224 = lean::cnstr_get(x_22, 0);
lean::inc(x_224);
lean::dec(x_22);
lean::inc(x_4);
x_228 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(x_20, x_224, x_4, x_179);
if (lean::obj_tag(x_228) == 0)
{
obj* x_236; obj* x_238; obj* x_239; 
lean::dec(x_177);
lean::dec(x_192);
lean::dec(x_182);
lean::dec(x_4);
lean::dec(x_47);
lean::dec(x_28);
lean::dec(x_54);
x_236 = lean::cnstr_get(x_228, 0);
if (lean::is_exclusive(x_228)) {
 x_238 = x_228;
} else {
 lean::inc(x_236);
 lean::dec(x_228);
 x_238 = lean::box(0);
}
if (lean::is_scalar(x_238)) {
 x_239 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_239 = x_238;
}
lean::cnstr_set(x_239, 0, x_236);
return x_239;
}
else
{
obj* x_240; obj* x_243; obj* x_245; obj* x_247; obj* x_248; obj* x_249; 
x_240 = lean::cnstr_get(x_228, 0);
lean::inc(x_240);
lean::dec(x_228);
x_243 = lean::cnstr_get(x_240, 0);
x_245 = lean::cnstr_get(x_240, 1);
if (lean::is_exclusive(x_240)) {
 x_247 = x_240;
} else {
 lean::inc(x_243);
 lean::inc(x_245);
 lean::dec(x_240);
 x_247 = lean::box(0);
}
x_248 = l_lean_elaborator_mk__eqns(x_177, x_243);
if (lean::is_scalar(x_247)) {
 x_249 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_249 = x_247;
}
lean::cnstr_set(x_249, 0, x_248);
lean::cnstr_set(x_249, 1, x_245);
x_193 = x_249;
goto lbl_194;
}
}
}
lbl_194:
{
obj* x_250; obj* x_252; obj* x_256; 
x_250 = lean::cnstr_get(x_193, 0);
lean::inc(x_250);
x_252 = lean::cnstr_get(x_193, 1);
lean::inc(x_252);
lean::dec(x_193);
lean::inc(x_4);
x_256 = l_lean_elaborator_simple__binders__to__pexpr(x_28, x_4, x_252);
if (lean::obj_tag(x_256) == 0)
{
obj* x_263; obj* x_265; obj* x_266; 
lean::dec(x_192);
lean::dec(x_182);
lean::dec(x_250);
lean::dec(x_4);
lean::dec(x_47);
lean::dec(x_54);
x_263 = lean::cnstr_get(x_256, 0);
if (lean::is_exclusive(x_256)) {
 x_265 = x_256;
} else {
 lean::inc(x_263);
 lean::dec(x_256);
 x_265 = lean::box(0);
}
if (lean::is_scalar(x_265)) {
 x_266 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_266 = x_265;
}
lean::cnstr_set(x_266, 0, x_263);
return x_266;
}
else
{
obj* x_267; obj* x_270; obj* x_272; obj* x_275; obj* x_276; obj* x_277; obj* x_278; obj* x_279; obj* x_280; obj* x_281; obj* x_282; obj* x_283; obj* x_284; 
x_267 = lean::cnstr_get(x_256, 0);
lean::inc(x_267);
lean::dec(x_256);
x_270 = lean::cnstr_get(x_267, 0);
lean::inc(x_270);
x_272 = lean::cnstr_get(x_267, 1);
lean::inc(x_272);
lean::dec(x_267);
x_275 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_275, 0, x_250);
lean::cnstr_set(x_275, 1, x_52);
x_276 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_276, 0, x_270);
lean::cnstr_set(x_276, 1, x_275);
x_277 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_277, 0, x_192);
lean::cnstr_set(x_277, 1, x_276);
x_278 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_278, 0, x_182);
lean::cnstr_set(x_278, 1, x_277);
x_279 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_279, 0, x_54);
lean::cnstr_set(x_279, 1, x_278);
x_280 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_280, 0, x_47);
lean::cnstr_set(x_280, 1, x_279);
x_281 = l_lean_expr_mk__capp(x_191, x_280);
x_282 = l_lean_elaborator_elab__def__like___closed__2;
x_283 = lean_expr_mk_mdata(x_282, x_281);
x_284 = l_lean_elaborator_old__elab__command(x_0, x_283, x_4, x_272);
return x_284;
}
}
}
}
}
}
}
obj* l_lean_elaborator_elab__def__like___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_elaborator_elab__def__like(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_0);
return x_6;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(2u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* l_lean_elaborator_infer__mod__to__pexpr(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_lean_elaborator_infer__mod__to__pexpr___closed__1;
return x_1;
}
else
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_lean_elaborator_infer__mod__to__pexpr___closed__2;
return x_3;
}
else
{
obj* x_4; 
x_4 = l_lean_elaborator_infer__mod__to__pexpr___closed__3;
return x_4;
}
}
}
}
obj* l_lean_elaborator_infer__mod__to__pexpr___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_infer__mod__to__pexpr(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("declaration.elaborate: unexpected input");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; 
x_8 = lean::cnstr_get(x_1, 0);
x_10 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_12 = x_1;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_1);
 x_12 = lean::box(0);
}
x_15 = lean::cnstr_get(x_8, 3);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_15, 0);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_22; obj* x_24; 
lean::dec(x_15);
lean::dec(x_8);
lean::dec(x_17);
x_22 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
x_24 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_22, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_29 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_31 = x_24;
} else {
 lean::inc(x_29);
 lean::dec(x_24);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; 
x_33 = lean::cnstr_get(x_24, 0);
lean::inc(x_33);
lean::dec(x_24);
x_13 = x_33;
goto lbl_14;
}
}
else
{
obj* x_36; 
x_36 = lean::cnstr_get(x_17, 0);
lean::inc(x_36);
lean::dec(x_17);
if (lean::obj_tag(x_36) == 0)
{
obj* x_39; 
x_39 = lean::cnstr_get(x_15, 1);
lean::inc(x_39);
lean::dec(x_15);
if (lean::obj_tag(x_39) == 0)
{
obj* x_43; obj* x_45; 
lean::dec(x_8);
x_43 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
x_45 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_43, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_45) == 0)
{
obj* x_50; obj* x_52; obj* x_53; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_50 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_52 = x_45;
} else {
 lean::inc(x_50);
 lean::dec(x_45);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
return x_53;
}
else
{
obj* x_54; 
x_54 = lean::cnstr_get(x_45, 0);
lean::inc(x_54);
lean::dec(x_45);
x_13 = x_54;
goto lbl_14;
}
}
else
{
obj* x_57; obj* x_60; obj* x_64; 
x_57 = lean::cnstr_get(x_39, 0);
lean::inc(x_57);
lean::dec(x_39);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
lean::dec(x_57);
lean::inc(x_2);
x_64 = l_lean_elaborator_to__pexpr___main(x_60, x_2, x_3);
if (lean::obj_tag(x_64) == 0)
{
obj* x_69; obj* x_71; obj* x_72; 
lean::dec(x_8);
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_69 = lean::cnstr_get(x_64, 0);
if (lean::is_exclusive(x_64)) {
 x_71 = x_64;
} else {
 lean::inc(x_69);
 lean::dec(x_64);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_69);
return x_72;
}
else
{
obj* x_73; obj* x_76; obj* x_78; obj* x_80; obj* x_81; obj* x_84; uint8 x_85; obj* x_87; obj* x_88; 
x_73 = lean::cnstr_get(x_64, 0);
lean::inc(x_73);
lean::dec(x_64);
x_76 = lean::cnstr_get(x_73, 0);
x_78 = lean::cnstr_get(x_73, 1);
if (lean::is_exclusive(x_73)) {
 x_80 = x_73;
} else {
 lean::inc(x_76);
 lean::inc(x_78);
 lean::dec(x_73);
 x_80 = lean::box(0);
}
x_81 = lean::cnstr_get(x_8, 1);
lean::inc(x_81);
lean::dec(x_8);
x_84 = l_lean_elaborator_mangle__ident(x_81);
x_85 = 0;
lean::inc(x_84);
x_87 = lean_expr_local(x_84, x_84, x_76, x_85);
if (lean::is_scalar(x_80)) {
 x_88 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_88 = x_80;
}
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_78);
x_13 = x_88;
goto lbl_14;
}
}
}
else
{
obj* x_92; obj* x_94; 
lean::dec(x_15);
lean::dec(x_8);
lean::dec(x_36);
x_92 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
x_94 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_92, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_94) == 0)
{
obj* x_99; obj* x_101; obj* x_102; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_99 = lean::cnstr_get(x_94, 0);
if (lean::is_exclusive(x_94)) {
 x_101 = x_94;
} else {
 lean::inc(x_99);
 lean::dec(x_94);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
return x_102;
}
else
{
obj* x_103; 
x_103 = lean::cnstr_get(x_94, 0);
lean::inc(x_103);
lean::dec(x_94);
x_13 = x_103;
goto lbl_14;
}
}
}
lbl_14:
{
obj* x_106; obj* x_108; obj* x_111; 
x_106 = lean::cnstr_get(x_13, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_13, 1);
lean::inc(x_108);
lean::dec(x_13);
x_111 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_10, x_2, x_108);
if (lean::obj_tag(x_111) == 0)
{
obj* x_114; obj* x_116; obj* x_117; 
lean::dec(x_12);
lean::dec(x_106);
x_114 = lean::cnstr_get(x_111, 0);
if (lean::is_exclusive(x_111)) {
 x_116 = x_111;
} else {
 lean::inc(x_114);
 lean::dec(x_111);
 x_116 = lean::box(0);
}
if (lean::is_scalar(x_116)) {
 x_117 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_117 = x_116;
}
lean::cnstr_set(x_117, 0, x_114);
return x_117;
}
else
{
obj* x_118; obj* x_120; obj* x_121; obj* x_123; obj* x_125; obj* x_126; obj* x_127; obj* x_128; 
x_118 = lean::cnstr_get(x_111, 0);
if (lean::is_exclusive(x_111)) {
 x_120 = x_111;
} else {
 lean::inc(x_118);
 lean::dec(x_111);
 x_120 = lean::box(0);
}
x_121 = lean::cnstr_get(x_118, 0);
x_123 = lean::cnstr_get(x_118, 1);
if (lean::is_exclusive(x_118)) {
 x_125 = x_118;
} else {
 lean::inc(x_121);
 lean::inc(x_123);
 lean::dec(x_118);
 x_125 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_126 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_126 = x_12;
}
lean::cnstr_set(x_126, 0, x_106);
lean::cnstr_set(x_126, 1, x_121);
if (lean::is_scalar(x_125)) {
 x_127 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_127 = x_125;
}
lean::cnstr_set(x_127, 0, x_126);
lean::cnstr_set(x_127, 1, x_123);
if (lean::is_scalar(x_120)) {
 x_128 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_128 = x_120;
}
lean::cnstr_set(x_128, 0, x_127);
return x_128;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_12; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_lean_elaborator_infer__mod__to__pexpr(x_7);
lean::dec(x_7);
x_12 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
lean::inc(x_2);
x_8 = level_mk_param(x_2);
x_9 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_2, x_8);
x_0 = x_9;
x_1 = x_4;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::dec(x_7);
lean::inc(x_1);
x_16 = l_lean_elaborator_to__pexpr___main(x_12, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_22 = x_16;
} else {
 lean::inc(x_20);
 lean::dec(x_16);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_32; 
x_24 = lean::cnstr_get(x_16, 0);
lean::inc(x_24);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
x_32 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(x_9, x_1, x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_11);
lean::dec(x_27);
x_35 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_37 = x_32;
} else {
 lean::inc(x_35);
 lean::dec(x_32);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_39 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_41 = x_32;
} else {
 lean::inc(x_39);
 lean::dec(x_32);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 0);
x_44 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_46 = x_39;
} else {
 lean::inc(x_42);
 lean::inc(x_44);
 lean::dec(x_39);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_47 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_47 = x_11;
}
lean::cnstr_set(x_47, 0, x_27);
lean::cnstr_set(x_47, 1, x_42);
if (lean::is_scalar(x_46)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_46;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_44);
if (lean::is_scalar(x_41)) {
 x_49 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_49 = x_41;
}
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; 
x_8 = lean::cnstr_get(x_1, 0);
x_10 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_12 = x_1;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_1);
 x_12 = lean::box(0);
}
switch (lean::obj_tag(x_8)) {
case 0:
{
obj* x_15; obj* x_18; 
x_15 = lean::cnstr_get(x_8, 0);
lean::inc(x_15);
lean::dec(x_8);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
lean::dec(x_15);
if (lean::obj_tag(x_18) == 0)
{
obj* x_22; obj* x_24; 
lean::dec(x_18);
x_22 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
x_24 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_22, x_2, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_29 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_31 = x_24;
} else {
 lean::inc(x_29);
 lean::dec(x_24);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; 
x_33 = lean::cnstr_get(x_24, 0);
lean::inc(x_33);
lean::dec(x_24);
x_13 = x_33;
goto lbl_14;
}
}
else
{
obj* x_36; uint8 x_39; obj* x_40; obj* x_41; obj* x_42; 
x_36 = lean::cnstr_get(x_18, 0);
lean::inc(x_36);
lean::dec(x_18);
x_39 = 0;
x_40 = lean::box(x_39);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_36);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_3);
x_13 = x_42;
goto lbl_14;
}
}
case 1:
{
obj* x_43; obj* x_46; uint8 x_49; obj* x_50; obj* x_51; obj* x_52; 
x_43 = lean::cnstr_get(x_8, 0);
lean::inc(x_43);
lean::dec(x_8);
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
lean::dec(x_43);
x_49 = 1;
x_50 = lean::box(x_49);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_46);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_3);
x_13 = x_52;
goto lbl_14;
}
case 2:
{
obj* x_53; obj* x_56; uint8 x_59; obj* x_60; obj* x_61; obj* x_62; 
x_53 = lean::cnstr_get(x_8, 0);
lean::inc(x_53);
lean::dec(x_8);
x_56 = lean::cnstr_get(x_53, 1);
lean::inc(x_56);
lean::dec(x_53);
x_59 = 2;
x_60 = lean::box(x_59);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_56);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_3);
x_13 = x_62;
goto lbl_14;
}
default:
{
obj* x_63; obj* x_66; uint8 x_69; obj* x_70; obj* x_71; obj* x_72; 
x_63 = lean::cnstr_get(x_8, 0);
lean::inc(x_63);
lean::dec(x_8);
x_66 = lean::cnstr_get(x_63, 1);
lean::inc(x_66);
lean::dec(x_63);
x_69 = 3;
x_70 = lean::box(x_69);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_66);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_71);
lean::cnstr_set(x_72, 1, x_3);
x_13 = x_72;
goto lbl_14;
}
}
lbl_14:
{
obj* x_73; obj* x_75; obj* x_78; obj* x_80; obj* x_83; obj* x_85; obj* x_88; obj* x_91; 
x_73 = lean::cnstr_get(x_13, 0);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_13, 1);
lean::inc(x_75);
lean::dec(x_13);
x_78 = lean::cnstr_get(x_73, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_73, 1);
lean::inc(x_80);
lean::dec(x_73);
x_83 = lean::cnstr_get(x_80, 2);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_83, 1);
lean::inc(x_85);
lean::dec(x_83);
x_88 = l_lean_expander_get__opt__type___main(x_85);
lean::dec(x_85);
lean::inc(x_2);
x_91 = l_lean_elaborator_to__pexpr___main(x_88, x_2, x_75);
if (lean::obj_tag(x_91) == 0)
{
obj* x_97; obj* x_99; obj* x_100; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_80);
lean::dec(x_78);
x_97 = lean::cnstr_get(x_91, 0);
if (lean::is_exclusive(x_91)) {
 x_99 = x_91;
} else {
 lean::inc(x_97);
 lean::dec(x_91);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; 
x_101 = lean::cnstr_get(x_91, 0);
lean::inc(x_101);
lean::dec(x_91);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
x_109 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_10, x_2, x_106);
if (lean::obj_tag(x_109) == 0)
{
obj* x_114; obj* x_116; obj* x_117; 
lean::dec(x_12);
lean::dec(x_80);
lean::dec(x_78);
lean::dec(x_104);
x_114 = lean::cnstr_get(x_109, 0);
if (lean::is_exclusive(x_109)) {
 x_116 = x_109;
} else {
 lean::inc(x_114);
 lean::dec(x_109);
 x_116 = lean::box(0);
}
if (lean::is_scalar(x_116)) {
 x_117 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_117 = x_116;
}
lean::cnstr_set(x_117, 0, x_114);
return x_117;
}
else
{
obj* x_118; obj* x_120; obj* x_121; obj* x_123; obj* x_125; obj* x_126; obj* x_127; uint8 x_128; obj* x_129; obj* x_130; obj* x_132; obj* x_133; obj* x_134; obj* x_137; obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; 
x_118 = lean::cnstr_get(x_109, 0);
if (lean::is_exclusive(x_109)) {
 x_120 = x_109;
} else {
 lean::inc(x_118);
 lean::dec(x_109);
 x_120 = lean::box(0);
}
x_121 = lean::cnstr_get(x_118, 0);
x_123 = lean::cnstr_get(x_118, 1);
if (lean::is_exclusive(x_118)) {
 x_125 = x_118;
} else {
 lean::inc(x_121);
 lean::inc(x_123);
 lean::dec(x_118);
 x_125 = lean::box(0);
}
x_126 = l_lean_elaborator_mk__eqns___closed__1;
x_127 = l_lean_elaborator_dummy;
x_128 = lean::unbox(x_78);
x_129 = lean_expr_local(x_126, x_126, x_127, x_128);
x_130 = lean::cnstr_get(x_80, 0);
lean::inc(x_130);
x_132 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(x_130);
x_133 = l_lean_elaborator_names__to__pexpr(x_132);
x_134 = lean::cnstr_get(x_80, 1);
lean::inc(x_134);
lean::dec(x_80);
x_137 = l_lean_elaborator_infer__mod__to__pexpr(x_134);
lean::dec(x_134);
x_139 = lean::box(0);
if (lean::is_scalar(x_12)) {
 x_140 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_140 = x_12;
}
lean::cnstr_set(x_140, 0, x_104);
lean::cnstr_set(x_140, 1, x_139);
x_141 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_141, 0, x_137);
lean::cnstr_set(x_141, 1, x_140);
x_142 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_142, 0, x_133);
lean::cnstr_set(x_142, 1, x_141);
x_143 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_143, 0, x_129);
lean::cnstr_set(x_143, 1, x_142);
x_144 = l_lean_expr_mk__capp(x_126, x_143);
x_145 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_145, 0, x_144);
lean::cnstr_set(x_145, 1, x_121);
if (lean::is_scalar(x_125)) {
 x_146 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_146 = x_125;
}
lean::cnstr_set(x_146, 0, x_145);
lean::cnstr_set(x_146, 1, x_123);
if (lean::is_scalar(x_120)) {
 x_147 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_147 = x_120;
}
lean::cnstr_set(x_147, 0, x_146);
return x_147;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
lean::inc(x_2);
x_8 = level_mk_param(x_2);
x_9 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_2, x_8);
x_0 = x_9;
x_1 = x_4;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string(".");
x_2 = lean::box(0);
x_3 = l_lean_name_to__string__with__sep___main(x_1, x_2);
lean::dec(x_1);
x_5 = l_lean_parser_substring_of__string(x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_2);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_0);
return x_8;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("def");
x_2 = l_string_trim(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("constant");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("inductives");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_lean_elaborator_infer__mod__to__pexpr(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("structure");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("mk");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_12; obj* x_13; 
x_3 = lean::cnstr_get(x_2, 4);
lean::inc(x_3);
x_7 = l_lean_parser_command_declaration_has__view;
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
lean::dec(x_7);
lean::inc(x_0);
x_12 = lean::apply_1(x_8, x_0);
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
switch (lean::obj_tag(x_13)) {
case 0:
{
obj* x_15; obj* x_18; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
switch (lean::obj_tag(x_18)) {
case 0:
{
obj* x_21; obj* x_24; obj* x_25; 
lean::dec(x_18);
x_21 = lean::cnstr_get(x_12, 0);
lean::inc(x_21);
lean::dec(x_12);
x_24 = lean::mk_nat_obj(1u);
x_25 = l_lean_elaborator_elab__def__like(x_0, x_21, x_15, x_24, x_1, x_2);
lean::dec(x_0);
x_5 = x_25;
goto lbl_6;
}
case 1:
{
obj* x_28; obj* x_31; obj* x_32; 
lean::dec(x_18);
x_28 = lean::cnstr_get(x_12, 0);
lean::inc(x_28);
lean::dec(x_12);
x_31 = lean::mk_nat_obj(5u);
x_32 = l_lean_elaborator_elab__def__like(x_0, x_28, x_15, x_31, x_1, x_2);
lean::dec(x_0);
x_5 = x_32;
goto lbl_6;
}
default:
{
obj* x_35; obj* x_38; obj* x_39; 
lean::dec(x_18);
x_35 = lean::cnstr_get(x_12, 0);
lean::inc(x_35);
lean::dec(x_12);
x_38 = lean::mk_nat_obj(0u);
x_39 = l_lean_elaborator_elab__def__like(x_0, x_35, x_15, x_38, x_1, x_2);
lean::dec(x_0);
x_5 = x_39;
goto lbl_6;
}
}
}
case 1:
{
obj* x_41; obj* x_44; obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_60; obj* x_61; obj* x_62; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_41 = lean::cnstr_get(x_13, 0);
lean::inc(x_41);
lean::dec(x_13);
x_44 = lean::cnstr_get(x_12, 0);
lean::inc(x_44);
lean::dec(x_12);
x_47 = lean::box(0);
x_48 = lean::cnstr_get(x_41, 1);
lean::inc(x_48);
x_50 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
x_51 = l_option_get__or__else___main___rarg(x_48, x_50);
lean::dec(x_48);
x_53 = lean::cnstr_get(x_41, 2);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_53, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_53, 1);
lean::inc(x_57);
lean::dec(x_53);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_57);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_55);
lean::cnstr_set(x_61, 1, x_60);
x_62 = lean::cnstr_get(x_41, 3);
lean::inc(x_62);
lean::dec(x_41);
x_65 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
x_66 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_47);
lean::cnstr_set(x_66, 2, x_51);
lean::cnstr_set(x_66, 3, x_61);
lean::cnstr_set(x_66, 4, x_62);
x_67 = lean::mk_nat_obj(3u);
x_68 = l_lean_elaborator_elab__def__like(x_0, x_44, x_66, x_67, x_1, x_2);
lean::dec(x_0);
x_5 = x_68;
goto lbl_6;
}
case 2:
{
obj* x_70; obj* x_73; obj* x_76; obj* x_77; obj* x_79; obj* x_81; obj* x_84; obj* x_85; obj* x_86; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_70 = lean::cnstr_get(x_13, 0);
lean::inc(x_70);
lean::dec(x_13);
x_73 = lean::cnstr_get(x_12, 0);
lean::inc(x_73);
lean::dec(x_12);
x_76 = lean::box(0);
x_77 = lean::cnstr_get(x_70, 1);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_77, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_77, 1);
lean::inc(x_81);
lean::dec(x_77);
x_84 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_84, 0, x_81);
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_79);
lean::cnstr_set(x_85, 1, x_84);
x_86 = lean::cnstr_get(x_70, 2);
lean::inc(x_86);
lean::dec(x_70);
x_89 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
x_90 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
x_91 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_91, 0, x_89);
lean::cnstr_set(x_91, 1, x_76);
lean::cnstr_set(x_91, 2, x_90);
lean::cnstr_set(x_91, 3, x_85);
lean::cnstr_set(x_91, 4, x_86);
x_92 = lean::mk_nat_obj(2u);
x_93 = l_lean_elaborator_elab__def__like(x_0, x_73, x_91, x_92, x_1, x_2);
lean::dec(x_0);
x_5 = x_93;
goto lbl_6;
}
case 3:
{
obj* x_95; obj* x_98; obj* x_100; 
x_95 = lean::cnstr_get(x_13, 0);
lean::inc(x_95);
lean::dec(x_13);
x_98 = lean::cnstr_get(x_95, 2);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_98, 0);
lean::inc(x_100);
if (lean::obj_tag(x_100) == 0)
{
obj* x_106; obj* x_107; 
lean::dec(x_12);
lean::dec(x_98);
lean::dec(x_100);
lean::dec(x_95);
x_106 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_107 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_106, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
x_5 = x_107;
goto lbl_6;
}
else
{
obj* x_110; 
x_110 = lean::cnstr_get(x_100, 0);
lean::inc(x_110);
lean::dec(x_100);
if (lean::obj_tag(x_110) == 0)
{
obj* x_113; obj* x_116; obj* x_119; obj* x_123; 
x_113 = lean::cnstr_get(x_95, 1);
lean::inc(x_113);
lean::dec(x_95);
x_116 = lean::cnstr_get(x_98, 1);
lean::inc(x_116);
lean::dec(x_98);
x_119 = lean::cnstr_get(x_12, 0);
lean::inc(x_119);
lean::dec(x_12);
lean::inc(x_1);
x_123 = l_lean_elaborator_decl__modifiers__to__pexpr(x_119, x_1, x_2);
if (lean::obj_tag(x_123) == 0)
{
obj* x_128; obj* x_130; obj* x_131; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_113);
lean::dec(x_116);
x_128 = lean::cnstr_get(x_123, 0);
if (lean::is_exclusive(x_123)) {
 x_130 = x_123;
} else {
 lean::inc(x_128);
 lean::dec(x_123);
 x_130 = lean::box(0);
}
if (lean::is_scalar(x_130)) {
 x_131 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_131 = x_130;
}
lean::cnstr_set(x_131, 0, x_128);
x_5 = x_131;
goto lbl_6;
}
else
{
obj* x_132; obj* x_135; obj* x_137; obj* x_140; obj* x_144; 
x_132 = lean::cnstr_get(x_123, 0);
lean::inc(x_132);
lean::dec(x_123);
x_135 = lean::cnstr_get(x_132, 0);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_132, 1);
lean::inc(x_137);
lean::dec(x_132);
x_140 = lean::cnstr_get(x_116, 1);
lean::inc(x_140);
lean::dec(x_116);
lean::inc(x_1);
x_144 = l_lean_elaborator_to__pexpr___main(x_140, x_1, x_137);
if (lean::obj_tag(x_144) == 0)
{
obj* x_149; obj* x_151; obj* x_152; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_135);
lean::dec(x_113);
x_149 = lean::cnstr_get(x_144, 0);
if (lean::is_exclusive(x_144)) {
 x_151 = x_144;
} else {
 lean::inc(x_149);
 lean::dec(x_144);
 x_151 = lean::box(0);
}
if (lean::is_scalar(x_151)) {
 x_152 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_152 = x_151;
}
lean::cnstr_set(x_152, 0, x_149);
x_5 = x_152;
goto lbl_6;
}
else
{
obj* x_153; obj* x_156; obj* x_158; obj* x_161; obj* x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; 
x_153 = lean::cnstr_get(x_144, 0);
lean::inc(x_153);
lean::dec(x_144);
x_156 = lean::cnstr_get(x_153, 0);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_153, 1);
lean::inc(x_158);
lean::dec(x_153);
x_161 = lean::box(0);
x_162 = l_lean_elaborator_ident__univ__params__to__pexpr(x_113);
x_163 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_163, 0, x_156);
lean::cnstr_set(x_163, 1, x_161);
x_164 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_164, 0, x_162);
lean::cnstr_set(x_164, 1, x_163);
x_165 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_165, 0, x_135);
lean::cnstr_set(x_165, 1, x_164);
x_166 = l_lean_elaborator_mk__eqns___closed__1;
x_167 = l_lean_expr_mk__capp(x_166, x_165);
x_168 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3;
x_169 = lean_expr_mk_mdata(x_168, x_167);
x_170 = l_lean_elaborator_old__elab__command(x_0, x_169, x_1, x_158);
lean::dec(x_0);
x_5 = x_170;
goto lbl_6;
}
}
}
else
{
obj* x_176; obj* x_177; 
lean::dec(x_12);
lean::dec(x_98);
lean::dec(x_95);
lean::dec(x_110);
x_176 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_177 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_176, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
x_5 = x_177;
goto lbl_6;
}
}
}
case 4:
{
obj* x_180; obj* x_183; 
x_180 = lean::cnstr_get(x_13, 0);
lean::inc(x_180);
lean::dec(x_13);
x_183 = lean::cnstr_get(x_180, 0);
lean::inc(x_183);
if (lean::obj_tag(x_183) == 0)
{
obj* x_185; obj* x_187; 
x_185 = lean::cnstr_get(x_180, 4);
lean::inc(x_185);
x_187 = lean::cnstr_get(x_185, 0);
lean::inc(x_187);
if (lean::obj_tag(x_187) == 0)
{
obj* x_193; obj* x_194; 
lean::dec(x_185);
lean::dec(x_180);
lean::dec(x_187);
lean::dec(x_12);
x_193 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_194 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_193, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
x_5 = x_194;
goto lbl_6;
}
else
{
obj* x_197; obj* x_199; obj* x_201; obj* x_204; obj* x_207; obj* x_210; obj* x_215; 
x_197 = lean::cnstr_get(x_180, 2);
lean::inc(x_197);
x_199 = lean::cnstr_get(x_180, 3);
lean::inc(x_199);
x_201 = lean::cnstr_get(x_180, 6);
lean::inc(x_201);
lean::dec(x_180);
x_204 = lean::cnstr_get(x_185, 1);
lean::inc(x_204);
lean::dec(x_185);
x_207 = lean::cnstr_get(x_187, 0);
lean::inc(x_207);
lean::dec(x_187);
x_210 = lean::cnstr_get(x_12, 0);
lean::inc(x_210);
lean::dec(x_12);
lean::inc(x_1);
lean::inc(x_210);
x_215 = l_lean_elaborator_decl__modifiers__to__pexpr(x_210, x_1, x_2);
if (lean::obj_tag(x_215) == 0)
{
obj* x_224; obj* x_226; obj* x_227; 
lean::dec(x_199);
lean::dec(x_201);
lean::dec(x_210);
lean::dec(x_197);
lean::dec(x_207);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_204);
x_224 = lean::cnstr_get(x_215, 0);
if (lean::is_exclusive(x_215)) {
 x_226 = x_215;
} else {
 lean::inc(x_224);
 lean::dec(x_215);
 x_226 = lean::box(0);
}
if (lean::is_scalar(x_226)) {
 x_227 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_227 = x_226;
}
lean::cnstr_set(x_227, 0, x_224);
x_5 = x_227;
goto lbl_6;
}
else
{
obj* x_228; obj* x_231; obj* x_233; obj* x_236; obj* x_237; obj* x_239; 
x_228 = lean::cnstr_get(x_215, 0);
lean::inc(x_228);
lean::dec(x_215);
x_231 = lean::cnstr_get(x_228, 0);
lean::inc(x_231);
x_233 = lean::cnstr_get(x_228, 1);
lean::inc(x_233);
lean::dec(x_228);
x_236 = lean::box(0);
x_239 = lean::cnstr_get(x_210, 1);
lean::inc(x_239);
lean::dec(x_210);
if (lean::obj_tag(x_239) == 0)
{
x_237 = x_236;
goto lbl_238;
}
else
{
obj* x_242; obj* x_245; 
x_242 = lean::cnstr_get(x_239, 0);
lean::inc(x_242);
lean::dec(x_239);
x_245 = lean::cnstr_get(x_242, 1);
lean::inc(x_245);
lean::dec(x_242);
x_237 = x_245;
goto lbl_238;
}
lbl_238:
{
obj* x_249; 
lean::inc(x_1);
x_249 = l_lean_elaborator_attrs__to__pexpr(x_237, x_1, x_233);
if (lean::obj_tag(x_249) == 0)
{
obj* x_258; obj* x_260; obj* x_261; 
lean::dec(x_199);
lean::dec(x_201);
lean::dec(x_231);
lean::dec(x_197);
lean::dec(x_207);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_204);
x_258 = lean::cnstr_get(x_249, 0);
if (lean::is_exclusive(x_249)) {
 x_260 = x_249;
} else {
 lean::inc(x_258);
 lean::dec(x_249);
 x_260 = lean::box(0);
}
if (lean::is_scalar(x_260)) {
 x_261 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_261 = x_260;
}
lean::cnstr_set(x_261, 0, x_258);
x_5 = x_261;
goto lbl_6;
}
else
{
obj* x_262; obj* x_265; obj* x_267; obj* x_270; obj* x_271; obj* x_272; obj* x_273; obj* x_274; 
x_262 = lean::cnstr_get(x_249, 0);
lean::inc(x_262);
lean::dec(x_249);
x_265 = lean::cnstr_get(x_262, 0);
lean::inc(x_265);
x_267 = lean::cnstr_get(x_262, 1);
lean::inc(x_267);
lean::dec(x_262);
x_270 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_270, 0, x_265);
lean::cnstr_set(x_270, 1, x_236);
x_271 = l_lean_elaborator_mk__eqns___closed__1;
x_272 = l_lean_expr_mk__capp(x_271, x_270);
if (lean::obj_tag(x_197) == 0)
{
obj* x_276; obj* x_279; 
x_276 = l_lean_expander_get__opt__type___main(x_204);
lean::dec(x_204);
lean::inc(x_1);
x_279 = l_lean_elaborator_to__pexpr___main(x_276, x_1, x_267);
if (lean::obj_tag(x_197) == 0)
{
if (lean::obj_tag(x_279) == 0)
{
obj* x_287; obj* x_289; obj* x_290; 
lean::dec(x_199);
lean::dec(x_201);
lean::dec(x_231);
lean::dec(x_272);
lean::dec(x_207);
lean::dec(x_1);
lean::dec(x_0);
x_287 = lean::cnstr_get(x_279, 0);
if (lean::is_exclusive(x_279)) {
 x_289 = x_279;
} else {
 lean::inc(x_287);
 lean::dec(x_279);
 x_289 = lean::box(0);
}
if (lean::is_scalar(x_289)) {
 x_290 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_290 = x_289;
}
lean::cnstr_set(x_290, 0, x_287);
x_5 = x_290;
goto lbl_6;
}
else
{
obj* x_291; 
x_291 = lean::cnstr_get(x_279, 0);
lean::inc(x_291);
lean::dec(x_279);
x_273 = x_236;
x_274 = x_291;
goto lbl_275;
}
}
else
{
if (lean::obj_tag(x_279) == 0)
{
obj* x_301; obj* x_303; obj* x_304; 
lean::dec(x_199);
lean::dec(x_201);
lean::dec(x_231);
lean::dec(x_272);
lean::dec(x_207);
lean::dec(x_1);
lean::dec(x_0);
x_301 = lean::cnstr_get(x_279, 0);
if (lean::is_exclusive(x_279)) {
 x_303 = x_279;
} else {
 lean::inc(x_301);
 lean::dec(x_279);
 x_303 = lean::box(0);
}
if (lean::is_scalar(x_303)) {
 x_304 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_304 = x_303;
}
lean::cnstr_set(x_304, 0, x_301);
x_5 = x_304;
goto lbl_6;
}
else
{
obj* x_305; obj* x_308; obj* x_311; obj* x_314; 
x_305 = lean::cnstr_get(x_197, 0);
lean::inc(x_305);
lean::dec(x_197);
x_308 = lean::cnstr_get(x_279, 0);
lean::inc(x_308);
lean::dec(x_279);
x_311 = lean::cnstr_get(x_305, 1);
lean::inc(x_311);
lean::dec(x_305);
x_314 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(x_311);
x_273 = x_314;
x_274 = x_308;
goto lbl_275;
}
}
}
else
{
obj* x_315; obj* x_317; obj* x_319; obj* x_321; obj* x_323; obj* x_325; obj* x_327; obj* x_329; obj* x_331; obj* x_335; obj* x_336; obj* x_337; obj* x_339; obj* x_341; obj* x_343; obj* x_345; obj* x_348; obj* x_349; obj* x_351; obj* x_353; obj* x_355; obj* x_357; obj* x_359; obj* x_362; obj* x_363; obj* x_366; 
x_315 = lean::cnstr_get(x_197, 0);
lean::inc(x_315);
x_317 = lean::cnstr_get(x_267, 0);
lean::inc(x_317);
x_319 = lean::cnstr_get(x_267, 1);
lean::inc(x_319);
x_321 = lean::cnstr_get(x_267, 2);
lean::inc(x_321);
x_323 = lean::cnstr_get(x_267, 3);
lean::inc(x_323);
x_325 = lean::cnstr_get(x_267, 4);
lean::inc(x_325);
x_327 = lean::cnstr_get(x_325, 0);
lean::inc(x_327);
x_329 = lean::cnstr_get(x_325, 1);
lean::inc(x_329);
x_331 = lean::cnstr_get(x_315, 1);
lean::inc(x_331);
lean::dec(x_315);
lean::inc(x_331);
x_335 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(x_331);
x_336 = l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(x_329, x_335);
x_337 = lean::cnstr_get(x_325, 2);
lean::inc(x_337);
x_339 = lean::cnstr_get(x_325, 3);
lean::inc(x_339);
x_341 = lean::cnstr_get(x_325, 4);
lean::inc(x_341);
x_343 = lean::cnstr_get(x_325, 5);
lean::inc(x_343);
x_345 = lean::cnstr_get(x_325, 6);
lean::inc(x_345);
lean::dec(x_325);
x_348 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_348, 0, x_327);
lean::cnstr_set(x_348, 1, x_336);
lean::cnstr_set(x_348, 2, x_337);
lean::cnstr_set(x_348, 3, x_339);
lean::cnstr_set(x_348, 4, x_341);
lean::cnstr_set(x_348, 5, x_343);
lean::cnstr_set(x_348, 6, x_345);
x_349 = lean::cnstr_get(x_267, 5);
lean::inc(x_349);
x_351 = lean::cnstr_get(x_267, 6);
lean::inc(x_351);
x_353 = lean::cnstr_get(x_267, 7);
lean::inc(x_353);
x_355 = lean::cnstr_get(x_267, 8);
lean::inc(x_355);
x_357 = lean::cnstr_get(x_267, 9);
lean::inc(x_357);
x_359 = lean::cnstr_get(x_267, 10);
lean::inc(x_359);
lean::dec(x_267);
x_362 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_362, 0, x_317);
lean::cnstr_set(x_362, 1, x_319);
lean::cnstr_set(x_362, 2, x_321);
lean::cnstr_set(x_362, 3, x_323);
lean::cnstr_set(x_362, 4, x_348);
lean::cnstr_set(x_362, 5, x_349);
lean::cnstr_set(x_362, 6, x_351);
lean::cnstr_set(x_362, 7, x_353);
lean::cnstr_set(x_362, 8, x_355);
lean::cnstr_set(x_362, 9, x_357);
lean::cnstr_set(x_362, 10, x_359);
x_363 = l_lean_expander_get__opt__type___main(x_204);
lean::dec(x_204);
lean::inc(x_1);
x_366 = l_lean_elaborator_to__pexpr___main(x_363, x_1, x_362);
if (lean::obj_tag(x_197) == 0)
{
lean::dec(x_331);
if (lean::obj_tag(x_366) == 0)
{
obj* x_375; obj* x_377; obj* x_378; 
lean::dec(x_199);
lean::dec(x_201);
lean::dec(x_231);
lean::dec(x_272);
lean::dec(x_207);
lean::dec(x_1);
lean::dec(x_0);
x_375 = lean::cnstr_get(x_366, 0);
if (lean::is_exclusive(x_366)) {
 x_377 = x_366;
} else {
 lean::inc(x_375);
 lean::dec(x_366);
 x_377 = lean::box(0);
}
if (lean::is_scalar(x_377)) {
 x_378 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_378 = x_377;
}
lean::cnstr_set(x_378, 0, x_375);
x_5 = x_378;
goto lbl_6;
}
else
{
obj* x_379; 
x_379 = lean::cnstr_get(x_366, 0);
lean::inc(x_379);
lean::dec(x_366);
x_273 = x_236;
x_274 = x_379;
goto lbl_275;
}
}
else
{
lean::dec(x_197);
if (lean::obj_tag(x_366) == 0)
{
obj* x_391; obj* x_393; obj* x_394; 
lean::dec(x_199);
lean::dec(x_201);
lean::dec(x_231);
lean::dec(x_272);
lean::dec(x_207);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_331);
x_391 = lean::cnstr_get(x_366, 0);
if (lean::is_exclusive(x_366)) {
 x_393 = x_366;
} else {
 lean::inc(x_391);
 lean::dec(x_366);
 x_393 = lean::box(0);
}
if (lean::is_scalar(x_393)) {
 x_394 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_394 = x_393;
}
lean::cnstr_set(x_394, 0, x_391);
x_5 = x_394;
goto lbl_6;
}
else
{
obj* x_395; obj* x_398; 
x_395 = lean::cnstr_get(x_366, 0);
lean::inc(x_395);
lean::dec(x_366);
x_398 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(x_331);
x_273 = x_398;
x_274 = x_395;
goto lbl_275;
}
}
}
lbl_275:
{
obj* x_399; obj* x_401; obj* x_405; 
x_399 = lean::cnstr_get(x_274, 0);
lean::inc(x_399);
x_401 = lean::cnstr_get(x_274, 1);
lean::inc(x_401);
lean::dec(x_274);
lean::inc(x_1);
x_405 = l_lean_elaborator_simple__binders__to__pexpr(x_207, x_1, x_401);
if (lean::obj_tag(x_405) == 0)
{
obj* x_414; obj* x_416; obj* x_417; 
lean::dec(x_199);
lean::dec(x_201);
lean::dec(x_231);
lean::dec(x_272);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_273);
lean::dec(x_399);
x_414 = lean::cnstr_get(x_405, 0);
if (lean::is_exclusive(x_405)) {
 x_416 = x_405;
} else {
 lean::inc(x_414);
 lean::dec(x_405);
 x_416 = lean::box(0);
}
if (lean::is_scalar(x_416)) {
 x_417 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_417 = x_416;
}
lean::cnstr_set(x_417, 0, x_414);
x_5 = x_417;
goto lbl_6;
}
else
{
obj* x_418; obj* x_421; obj* x_423; obj* x_428; 
x_418 = lean::cnstr_get(x_405, 0);
lean::inc(x_418);
lean::dec(x_405);
x_421 = lean::cnstr_get(x_418, 0);
lean::inc(x_421);
x_423 = lean::cnstr_get(x_418, 1);
lean::inc(x_423);
lean::dec(x_418);
lean::inc(x_1);
lean::inc(x_201);
x_428 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_201, x_1, x_423);
if (lean::obj_tag(x_428) == 0)
{
obj* x_438; obj* x_440; obj* x_441; 
lean::dec(x_199);
lean::dec(x_201);
lean::dec(x_231);
lean::dec(x_272);
lean::dec(x_421);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_273);
lean::dec(x_399);
x_438 = lean::cnstr_get(x_428, 0);
if (lean::is_exclusive(x_428)) {
 x_440 = x_428;
} else {
 lean::inc(x_438);
 lean::dec(x_428);
 x_440 = lean::box(0);
}
if (lean::is_scalar(x_440)) {
 x_441 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_441 = x_440;
}
lean::cnstr_set(x_441, 0, x_438);
x_5 = x_441;
goto lbl_6;
}
else
{
obj* x_442; obj* x_445; obj* x_447; obj* x_450; obj* x_451; obj* x_454; uint8 x_455; obj* x_457; obj* x_458; obj* x_459; obj* x_460; obj* x_461; obj* x_462; obj* x_463; obj* x_464; obj* x_465; obj* x_466; obj* x_467; obj* x_468; obj* x_469; obj* x_470; obj* x_471; obj* x_472; obj* x_473; obj* x_474; obj* x_475; obj* x_476; obj* x_477; 
x_442 = lean::cnstr_get(x_428, 0);
lean::inc(x_442);
lean::dec(x_428);
x_445 = lean::cnstr_get(x_442, 0);
lean::inc(x_445);
x_447 = lean::cnstr_get(x_442, 1);
lean::inc(x_447);
lean::dec(x_442);
x_450 = l_lean_elaborator_names__to__pexpr(x_273);
x_451 = lean::cnstr_get(x_199, 0);
lean::inc(x_451);
lean::dec(x_199);
x_454 = l_lean_elaborator_mangle__ident(x_451);
x_455 = 0;
lean::inc(x_454);
x_457 = lean_expr_local(x_454, x_454, x_399, x_455);
x_458 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_458, 0, x_457);
lean::cnstr_set(x_458, 1, x_236);
x_459 = l_lean_expr_mk__capp(x_271, x_458);
x_460 = l_lean_expr_mk__capp(x_271, x_445);
x_461 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_461, 0, x_460);
lean::cnstr_set(x_461, 1, x_236);
x_462 = l_lean_expr_mk__capp(x_271, x_461);
x_463 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(x_201);
x_464 = l_lean_expr_mk__capp(x_271, x_463);
x_465 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_465, 0, x_464);
lean::cnstr_set(x_465, 1, x_236);
x_466 = l_lean_expr_mk__capp(x_271, x_465);
x_467 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_467, 0, x_466);
lean::cnstr_set(x_467, 1, x_236);
x_468 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_468, 0, x_462);
lean::cnstr_set(x_468, 1, x_467);
x_469 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_469, 0, x_421);
lean::cnstr_set(x_469, 1, x_468);
x_470 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_470, 0, x_459);
lean::cnstr_set(x_470, 1, x_469);
x_471 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_471, 0, x_450);
lean::cnstr_set(x_471, 1, x_470);
x_472 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_472, 0, x_272);
lean::cnstr_set(x_472, 1, x_471);
x_473 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_473, 0, x_231);
lean::cnstr_set(x_473, 1, x_472);
x_474 = l_lean_expr_mk__capp(x_271, x_473);
x_475 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4;
x_476 = lean_expr_mk_mdata(x_475, x_474);
x_477 = l_lean_elaborator_old__elab__command(x_0, x_476, x_1, x_447);
lean::dec(x_0);
x_5 = x_477;
goto lbl_6;
}
}
}
}
}
}
}
}
else
{
obj* x_482; obj* x_483; 
lean::dec(x_183);
lean::dec(x_180);
lean::dec(x_12);
x_482 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_483 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_482, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
x_5 = x_483;
goto lbl_6;
}
}
default:
{
obj* x_486; obj* x_489; 
x_486 = lean::cnstr_get(x_13, 0);
lean::inc(x_486);
lean::dec(x_13);
x_489 = lean::cnstr_get(x_486, 0);
lean::inc(x_489);
if (lean::obj_tag(x_489) == 0)
{
obj* x_492; obj* x_494; 
lean::dec(x_489);
x_492 = lean::cnstr_get(x_486, 3);
lean::inc(x_492);
x_494 = lean::cnstr_get(x_492, 0);
lean::inc(x_494);
if (lean::obj_tag(x_494) == 0)
{
obj* x_500; obj* x_501; 
lean::dec(x_486);
lean::dec(x_12);
lean::dec(x_492);
lean::dec(x_494);
x_500 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_501 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_500, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
x_5 = x_501;
goto lbl_6;
}
else
{
obj* x_504; obj* x_506; obj* x_508; obj* x_510; obj* x_512; obj* x_515; obj* x_518; obj* x_521; obj* x_525; 
x_504 = lean::cnstr_get(x_486, 1);
lean::inc(x_504);
x_506 = lean::cnstr_get(x_486, 2);
lean::inc(x_506);
x_508 = lean::cnstr_get(x_486, 4);
lean::inc(x_508);
x_510 = lean::cnstr_get(x_486, 6);
lean::inc(x_510);
x_512 = lean::cnstr_get(x_486, 7);
lean::inc(x_512);
lean::dec(x_486);
x_515 = lean::cnstr_get(x_492, 1);
lean::inc(x_515);
lean::dec(x_492);
x_518 = lean::cnstr_get(x_494, 0);
lean::inc(x_518);
lean::dec(x_494);
x_521 = lean::cnstr_get(x_12, 0);
lean::inc(x_521);
lean::dec(x_12);
lean::inc(x_1);
x_525 = l_lean_elaborator_decl__modifiers__to__pexpr(x_521, x_1, x_2);
if (lean::obj_tag(x_525) == 0)
{
obj* x_535; obj* x_537; obj* x_538; 
lean::dec(x_515);
lean::dec(x_518);
lean::dec(x_510);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_512);
lean::dec(x_506);
lean::dec(x_504);
lean::dec(x_508);
x_535 = lean::cnstr_get(x_525, 0);
if (lean::is_exclusive(x_525)) {
 x_537 = x_525;
} else {
 lean::inc(x_535);
 lean::dec(x_525);
 x_537 = lean::box(0);
}
if (lean::is_scalar(x_537)) {
 x_538 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_538 = x_537;
}
lean::cnstr_set(x_538, 0, x_535);
x_5 = x_538;
goto lbl_6;
}
else
{
obj* x_539; obj* x_542; obj* x_544; obj* x_547; obj* x_548; obj* x_549; 
x_539 = lean::cnstr_get(x_525, 0);
lean::inc(x_539);
lean::dec(x_525);
x_542 = lean::cnstr_get(x_539, 0);
lean::inc(x_542);
x_544 = lean::cnstr_get(x_539, 1);
lean::inc(x_544);
lean::dec(x_539);
x_547 = lean::box(0);
if (lean::obj_tag(x_504) == 0)
{
obj* x_551; obj* x_554; 
x_551 = l_lean_expander_get__opt__type___main(x_515);
lean::dec(x_515);
lean::inc(x_1);
x_554 = l_lean_elaborator_to__pexpr___main(x_551, x_1, x_544);
if (lean::obj_tag(x_504) == 0)
{
if (lean::obj_tag(x_554) == 0)
{
obj* x_563; obj* x_565; obj* x_566; 
lean::dec(x_518);
lean::dec(x_510);
lean::dec(x_542);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_512);
lean::dec(x_506);
lean::dec(x_508);
x_563 = lean::cnstr_get(x_554, 0);
if (lean::is_exclusive(x_554)) {
 x_565 = x_554;
} else {
 lean::inc(x_563);
 lean::dec(x_554);
 x_565 = lean::box(0);
}
if (lean::is_scalar(x_565)) {
 x_566 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_566 = x_565;
}
lean::cnstr_set(x_566, 0, x_563);
x_5 = x_566;
goto lbl_6;
}
else
{
obj* x_567; 
x_567 = lean::cnstr_get(x_554, 0);
lean::inc(x_567);
lean::dec(x_554);
x_548 = x_547;
x_549 = x_567;
goto lbl_550;
}
}
else
{
if (lean::obj_tag(x_554) == 0)
{
obj* x_578; obj* x_580; obj* x_581; 
lean::dec(x_518);
lean::dec(x_510);
lean::dec(x_542);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_512);
lean::dec(x_506);
lean::dec(x_508);
x_578 = lean::cnstr_get(x_554, 0);
if (lean::is_exclusive(x_554)) {
 x_580 = x_554;
} else {
 lean::inc(x_578);
 lean::dec(x_554);
 x_580 = lean::box(0);
}
if (lean::is_scalar(x_580)) {
 x_581 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_581 = x_580;
}
lean::cnstr_set(x_581, 0, x_578);
x_5 = x_581;
goto lbl_6;
}
else
{
obj* x_582; obj* x_585; obj* x_588; obj* x_591; 
x_582 = lean::cnstr_get(x_504, 0);
lean::inc(x_582);
lean::dec(x_504);
x_585 = lean::cnstr_get(x_554, 0);
lean::inc(x_585);
lean::dec(x_554);
x_588 = lean::cnstr_get(x_582, 1);
lean::inc(x_588);
lean::dec(x_582);
x_591 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(x_588);
x_548 = x_591;
x_549 = x_585;
goto lbl_550;
}
}
}
else
{
obj* x_592; obj* x_594; obj* x_596; obj* x_598; obj* x_600; obj* x_602; obj* x_604; obj* x_606; obj* x_608; obj* x_612; obj* x_613; obj* x_614; obj* x_616; obj* x_618; obj* x_620; obj* x_622; obj* x_625; obj* x_626; obj* x_628; obj* x_630; obj* x_632; obj* x_634; obj* x_636; obj* x_639; obj* x_640; obj* x_643; 
x_592 = lean::cnstr_get(x_504, 0);
lean::inc(x_592);
x_594 = lean::cnstr_get(x_544, 0);
lean::inc(x_594);
x_596 = lean::cnstr_get(x_544, 1);
lean::inc(x_596);
x_598 = lean::cnstr_get(x_544, 2);
lean::inc(x_598);
x_600 = lean::cnstr_get(x_544, 3);
lean::inc(x_600);
x_602 = lean::cnstr_get(x_544, 4);
lean::inc(x_602);
x_604 = lean::cnstr_get(x_602, 0);
lean::inc(x_604);
x_606 = lean::cnstr_get(x_602, 1);
lean::inc(x_606);
x_608 = lean::cnstr_get(x_592, 1);
lean::inc(x_608);
lean::dec(x_592);
lean::inc(x_608);
x_612 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(x_608);
x_613 = l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(x_606, x_612);
x_614 = lean::cnstr_get(x_602, 2);
lean::inc(x_614);
x_616 = lean::cnstr_get(x_602, 3);
lean::inc(x_616);
x_618 = lean::cnstr_get(x_602, 4);
lean::inc(x_618);
x_620 = lean::cnstr_get(x_602, 5);
lean::inc(x_620);
x_622 = lean::cnstr_get(x_602, 6);
lean::inc(x_622);
lean::dec(x_602);
x_625 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_625, 0, x_604);
lean::cnstr_set(x_625, 1, x_613);
lean::cnstr_set(x_625, 2, x_614);
lean::cnstr_set(x_625, 3, x_616);
lean::cnstr_set(x_625, 4, x_618);
lean::cnstr_set(x_625, 5, x_620);
lean::cnstr_set(x_625, 6, x_622);
x_626 = lean::cnstr_get(x_544, 5);
lean::inc(x_626);
x_628 = lean::cnstr_get(x_544, 6);
lean::inc(x_628);
x_630 = lean::cnstr_get(x_544, 7);
lean::inc(x_630);
x_632 = lean::cnstr_get(x_544, 8);
lean::inc(x_632);
x_634 = lean::cnstr_get(x_544, 9);
lean::inc(x_634);
x_636 = lean::cnstr_get(x_544, 10);
lean::inc(x_636);
lean::dec(x_544);
x_639 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_639, 0, x_594);
lean::cnstr_set(x_639, 1, x_596);
lean::cnstr_set(x_639, 2, x_598);
lean::cnstr_set(x_639, 3, x_600);
lean::cnstr_set(x_639, 4, x_625);
lean::cnstr_set(x_639, 5, x_626);
lean::cnstr_set(x_639, 6, x_628);
lean::cnstr_set(x_639, 7, x_630);
lean::cnstr_set(x_639, 8, x_632);
lean::cnstr_set(x_639, 9, x_634);
lean::cnstr_set(x_639, 10, x_636);
x_640 = l_lean_expander_get__opt__type___main(x_515);
lean::dec(x_515);
lean::inc(x_1);
x_643 = l_lean_elaborator_to__pexpr___main(x_640, x_1, x_639);
if (lean::obj_tag(x_504) == 0)
{
lean::dec(x_608);
if (lean::obj_tag(x_643) == 0)
{
obj* x_653; obj* x_655; obj* x_656; 
lean::dec(x_518);
lean::dec(x_510);
lean::dec(x_542);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_512);
lean::dec(x_506);
lean::dec(x_508);
x_653 = lean::cnstr_get(x_643, 0);
if (lean::is_exclusive(x_643)) {
 x_655 = x_643;
} else {
 lean::inc(x_653);
 lean::dec(x_643);
 x_655 = lean::box(0);
}
if (lean::is_scalar(x_655)) {
 x_656 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_656 = x_655;
}
lean::cnstr_set(x_656, 0, x_653);
x_5 = x_656;
goto lbl_6;
}
else
{
obj* x_657; 
x_657 = lean::cnstr_get(x_643, 0);
lean::inc(x_657);
lean::dec(x_643);
x_548 = x_547;
x_549 = x_657;
goto lbl_550;
}
}
else
{
lean::dec(x_504);
if (lean::obj_tag(x_643) == 0)
{
obj* x_670; obj* x_672; obj* x_673; 
lean::dec(x_518);
lean::dec(x_510);
lean::dec(x_542);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_512);
lean::dec(x_506);
lean::dec(x_508);
lean::dec(x_608);
x_670 = lean::cnstr_get(x_643, 0);
if (lean::is_exclusive(x_643)) {
 x_672 = x_643;
} else {
 lean::inc(x_670);
 lean::dec(x_643);
 x_672 = lean::box(0);
}
if (lean::is_scalar(x_672)) {
 x_673 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_673 = x_672;
}
lean::cnstr_set(x_673, 0, x_670);
x_5 = x_673;
goto lbl_6;
}
else
{
obj* x_674; obj* x_677; 
x_674 = lean::cnstr_get(x_643, 0);
lean::inc(x_674);
lean::dec(x_643);
x_677 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(x_608);
x_548 = x_677;
x_549 = x_674;
goto lbl_550;
}
}
}
lbl_550:
{
obj* x_678; obj* x_680; obj* x_684; 
x_678 = lean::cnstr_get(x_549, 0);
lean::inc(x_678);
x_680 = lean::cnstr_get(x_549, 1);
lean::inc(x_680);
lean::dec(x_549);
lean::inc(x_1);
x_684 = l_lean_elaborator_simple__binders__to__pexpr(x_518, x_1, x_680);
if (lean::obj_tag(x_684) == 0)
{
obj* x_694; obj* x_696; obj* x_697; 
lean::dec(x_510);
lean::dec(x_542);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_512);
lean::dec(x_506);
lean::dec(x_508);
lean::dec(x_548);
lean::dec(x_678);
x_694 = lean::cnstr_get(x_684, 0);
if (lean::is_exclusive(x_684)) {
 x_696 = x_684;
} else {
 lean::inc(x_694);
 lean::dec(x_684);
 x_696 = lean::box(0);
}
if (lean::is_scalar(x_696)) {
 x_697 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_697 = x_696;
}
lean::cnstr_set(x_697, 0, x_694);
x_5 = x_697;
goto lbl_6;
}
else
{
obj* x_698; obj* x_701; obj* x_703; obj* x_706; obj* x_707; obj* x_710; obj* x_711; uint8 x_712; obj* x_714; obj* x_715; 
x_698 = lean::cnstr_get(x_684, 0);
lean::inc(x_698);
lean::dec(x_684);
x_701 = lean::cnstr_get(x_698, 0);
lean::inc(x_701);
x_703 = lean::cnstr_get(x_698, 1);
lean::inc(x_703);
lean::dec(x_698);
x_706 = l_lean_elaborator_names__to__pexpr(x_548);
x_707 = lean::cnstr_get(x_506, 0);
lean::inc(x_707);
lean::dec(x_506);
x_710 = l_lean_elaborator_mangle__ident(x_707);
x_711 = l_lean_elaborator_dummy;
x_712 = 0;
lean::inc(x_710);
x_714 = lean_expr_local(x_710, x_710, x_711, x_712);
if (lean::obj_tag(x_508) == 0)
{
x_715 = x_547;
goto lbl_716;
}
else
{
obj* x_717; obj* x_720; 
x_717 = lean::cnstr_get(x_508, 0);
lean::inc(x_717);
lean::dec(x_508);
x_720 = lean::cnstr_get(x_717, 1);
lean::inc(x_720);
lean::dec(x_717);
x_715 = x_720;
goto lbl_716;
}
lbl_716:
{
obj* x_724; 
lean::inc(x_1);
x_724 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(x_715, x_1, x_703);
if (lean::obj_tag(x_724) == 0)
{
obj* x_734; obj* x_736; obj* x_737; 
lean::dec(x_706);
lean::dec(x_714);
lean::dec(x_510);
lean::dec(x_542);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_512);
lean::dec(x_678);
lean::dec(x_701);
x_734 = lean::cnstr_get(x_724, 0);
if (lean::is_exclusive(x_724)) {
 x_736 = x_724;
} else {
 lean::inc(x_734);
 lean::dec(x_724);
 x_736 = lean::box(0);
}
if (lean::is_scalar(x_736)) {
 x_737 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_737 = x_736;
}
lean::cnstr_set(x_737, 0, x_734);
x_5 = x_737;
goto lbl_6;
}
else
{
obj* x_738; obj* x_741; obj* x_743; obj* x_746; obj* x_747; obj* x_749; obj* x_750; 
x_738 = lean::cnstr_get(x_724, 0);
lean::inc(x_738);
lean::dec(x_724);
x_741 = lean::cnstr_get(x_738, 0);
lean::inc(x_741);
x_743 = lean::cnstr_get(x_738, 1);
lean::inc(x_743);
lean::dec(x_738);
x_746 = l_lean_elaborator_mk__eqns___closed__1;
x_747 = l_lean_expr_mk__capp(x_746, x_741);
lean::inc(x_1);
x_749 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_512, x_1, x_743);
if (lean::obj_tag(x_510) == 0)
{
obj* x_752; 
x_752 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7;
x_750 = x_752;
goto lbl_751;
}
else
{
obj* x_753; obj* x_755; obj* x_758; 
x_753 = lean::cnstr_get(x_510, 0);
lean::inc(x_753);
x_755 = lean::cnstr_get(x_753, 0);
lean::inc(x_755);
lean::dec(x_753);
x_758 = l_lean_elaborator_mangle__ident(x_755);
x_750 = x_758;
goto lbl_751;
}
lbl_751:
{
obj* x_760; 
lean::inc(x_750);
x_760 = lean_expr_local(x_750, x_750, x_711, x_712);
if (lean::obj_tag(x_510) == 0)
{
if (lean::obj_tag(x_749) == 0)
{
obj* x_770; obj* x_772; obj* x_773; 
lean::dec(x_747);
lean::dec(x_760);
lean::dec(x_706);
lean::dec(x_714);
lean::dec(x_542);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_678);
lean::dec(x_701);
x_770 = lean::cnstr_get(x_749, 0);
if (lean::is_exclusive(x_749)) {
 x_772 = x_749;
} else {
 lean::inc(x_770);
 lean::dec(x_749);
 x_772 = lean::box(0);
}
if (lean::is_scalar(x_772)) {
 x_773 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_773 = x_772;
}
lean::cnstr_set(x_773, 0, x_770);
x_5 = x_773;
goto lbl_6;
}
else
{
obj* x_774; obj* x_777; obj* x_779; obj* x_782; obj* x_783; obj* x_784; obj* x_785; obj* x_786; obj* x_787; obj* x_788; obj* x_789; obj* x_790; obj* x_791; obj* x_792; obj* x_793; obj* x_794; obj* x_795; obj* x_796; 
x_774 = lean::cnstr_get(x_749, 0);
lean::inc(x_774);
lean::dec(x_749);
x_777 = lean::cnstr_get(x_774, 0);
lean::inc(x_777);
x_779 = lean::cnstr_get(x_774, 1);
lean::inc(x_779);
lean::dec(x_774);
x_782 = l_lean_expr_mk__capp(x_746, x_777);
x_783 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_783, 0, x_782);
lean::cnstr_set(x_783, 1, x_547);
x_784 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5;
x_785 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_785, 0, x_784);
lean::cnstr_set(x_785, 1, x_783);
x_786 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_786, 0, x_760);
lean::cnstr_set(x_786, 1, x_785);
x_787 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_787, 0, x_678);
lean::cnstr_set(x_787, 1, x_786);
x_788 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_788, 0, x_747);
lean::cnstr_set(x_788, 1, x_787);
x_789 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_789, 0, x_701);
lean::cnstr_set(x_789, 1, x_788);
x_790 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_790, 0, x_714);
lean::cnstr_set(x_790, 1, x_789);
x_791 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_791, 0, x_706);
lean::cnstr_set(x_791, 1, x_790);
x_792 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_792, 0, x_542);
lean::cnstr_set(x_792, 1, x_791);
x_793 = l_lean_expr_mk__capp(x_746, x_792);
x_794 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
x_795 = lean_expr_mk_mdata(x_794, x_793);
x_796 = l_lean_elaborator_old__elab__command(x_0, x_795, x_1, x_779);
lean::dec(x_0);
x_5 = x_796;
goto lbl_6;
}
}
else
{
if (lean::obj_tag(x_749) == 0)
{
obj* x_808; obj* x_810; obj* x_811; 
lean::dec(x_747);
lean::dec(x_760);
lean::dec(x_706);
lean::dec(x_714);
lean::dec(x_510);
lean::dec(x_542);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_678);
lean::dec(x_701);
x_808 = lean::cnstr_get(x_749, 0);
if (lean::is_exclusive(x_749)) {
 x_810 = x_749;
} else {
 lean::inc(x_808);
 lean::dec(x_749);
 x_810 = lean::box(0);
}
if (lean::is_scalar(x_810)) {
 x_811 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_811 = x_810;
}
lean::cnstr_set(x_811, 0, x_808);
x_5 = x_811;
goto lbl_6;
}
else
{
obj* x_812; obj* x_815; obj* x_818; obj* x_820; obj* x_823; obj* x_826; obj* x_828; obj* x_829; obj* x_830; obj* x_831; obj* x_832; obj* x_833; obj* x_834; obj* x_835; obj* x_836; obj* x_837; obj* x_838; obj* x_839; obj* x_840; obj* x_841; 
x_812 = lean::cnstr_get(x_749, 0);
lean::inc(x_812);
lean::dec(x_749);
x_815 = lean::cnstr_get(x_510, 0);
lean::inc(x_815);
lean::dec(x_510);
x_818 = lean::cnstr_get(x_812, 0);
lean::inc(x_818);
x_820 = lean::cnstr_get(x_812, 1);
lean::inc(x_820);
lean::dec(x_812);
x_823 = lean::cnstr_get(x_815, 1);
lean::inc(x_823);
lean::dec(x_815);
x_826 = l_lean_elaborator_infer__mod__to__pexpr(x_823);
lean::dec(x_823);
x_828 = l_lean_expr_mk__capp(x_746, x_818);
x_829 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_829, 0, x_828);
lean::cnstr_set(x_829, 1, x_547);
x_830 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_830, 0, x_826);
lean::cnstr_set(x_830, 1, x_829);
x_831 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_831, 0, x_760);
lean::cnstr_set(x_831, 1, x_830);
x_832 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_832, 0, x_678);
lean::cnstr_set(x_832, 1, x_831);
x_833 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_833, 0, x_747);
lean::cnstr_set(x_833, 1, x_832);
x_834 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_834, 0, x_701);
lean::cnstr_set(x_834, 1, x_833);
x_835 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_835, 0, x_714);
lean::cnstr_set(x_835, 1, x_834);
x_836 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_836, 0, x_706);
lean::cnstr_set(x_836, 1, x_835);
x_837 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_837, 0, x_542);
lean::cnstr_set(x_837, 1, x_836);
x_838 = l_lean_expr_mk__capp(x_746, x_837);
x_839 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
x_840 = lean_expr_mk_mdata(x_839, x_838);
x_841 = l_lean_elaborator_old__elab__command(x_0, x_840, x_1, x_820);
lean::dec(x_0);
x_5 = x_841;
goto lbl_6;
}
}
}
}
}
}
}
}
}
}
else
{
obj* x_846; obj* x_847; 
lean::dec(x_489);
lean::dec(x_486);
lean::dec(x_12);
x_846 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_847 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_846, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
x_5 = x_847;
goto lbl_6;
}
}
}
lbl_6:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_851; obj* x_853; obj* x_854; 
lean::dec(x_3);
x_851 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_853 = x_5;
} else {
 lean::inc(x_851);
 lean::dec(x_5);
 x_853 = lean::box(0);
}
if (lean::is_scalar(x_853)) {
 x_854 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_854 = x_853;
}
lean::cnstr_set(x_854, 0, x_851);
return x_854;
}
else
{
obj* x_855; obj* x_857; obj* x_858; obj* x_860; obj* x_861; obj* x_863; obj* x_865; obj* x_867; obj* x_869; obj* x_871; obj* x_873; obj* x_875; obj* x_877; obj* x_879; obj* x_882; obj* x_883; obj* x_884; obj* x_885; 
x_855 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_857 = x_5;
} else {
 lean::inc(x_855);
 lean::dec(x_5);
 x_857 = lean::box(0);
}
x_858 = lean::cnstr_get(x_855, 1);
if (lean::is_exclusive(x_855)) {
 lean::cnstr_release(x_855, 0);
 x_860 = x_855;
} else {
 lean::inc(x_858);
 lean::dec(x_855);
 x_860 = lean::box(0);
}
x_861 = lean::cnstr_get(x_858, 0);
lean::inc(x_861);
x_863 = lean::cnstr_get(x_858, 1);
lean::inc(x_863);
x_865 = lean::cnstr_get(x_858, 2);
lean::inc(x_865);
x_867 = lean::cnstr_get(x_858, 3);
lean::inc(x_867);
x_869 = lean::cnstr_get(x_858, 5);
lean::inc(x_869);
x_871 = lean::cnstr_get(x_858, 6);
lean::inc(x_871);
x_873 = lean::cnstr_get(x_858, 7);
lean::inc(x_873);
x_875 = lean::cnstr_get(x_858, 8);
lean::inc(x_875);
x_877 = lean::cnstr_get(x_858, 9);
lean::inc(x_877);
x_879 = lean::cnstr_get(x_858, 10);
lean::inc(x_879);
lean::dec(x_858);
x_882 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_882, 0, x_861);
lean::cnstr_set(x_882, 1, x_863);
lean::cnstr_set(x_882, 2, x_865);
lean::cnstr_set(x_882, 3, x_867);
lean::cnstr_set(x_882, 4, x_3);
lean::cnstr_set(x_882, 5, x_869);
lean::cnstr_set(x_882, 6, x_871);
lean::cnstr_set(x_882, 7, x_873);
lean::cnstr_set(x_882, 8, x_875);
lean::cnstr_set(x_882, 9, x_877);
lean::cnstr_set(x_882, 10, x_879);
x_883 = lean::box(0);
if (lean::is_scalar(x_860)) {
 x_884 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_884 = x_860;
}
lean::cnstr_set(x_884, 0, x_883);
lean::cnstr_set(x_884, 1, x_882);
if (lean::is_scalar(x_857)) {
 x_885 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_885 = x_857;
}
lean::cnstr_set(x_885, 0, x_884);
return x_885;
}
}
}
}
obj* l_lean_elaborator_declaration_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_name__map_contains___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_rbnode_find___main___at_lean_name__map_contains___spec__2___rarg(x_2, x_1);
return x_5;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_11);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_18);
return x_20;
}
}
obj* l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; 
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_14; obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_27; uint8 x_28; 
x_6 = lean::cnstr_get(x_0, 0);
x_8 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_10 = x_0;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_0);
 x_10 = lean::box(0);
}
lean::inc(x_6);
x_14 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_6);
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
lean::dec(x_14);
x_20 = lean::cnstr_get(x_15, 0);
x_22 = lean::cnstr_get(x_15, 1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_set(x_15, 0, lean::box(0));
 lean::cnstr_set(x_15, 1, lean::box(0));
 x_24 = x_15;
} else {
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_15);
 x_24 = lean::box(0);
}
x_27 = l_lean_expander_binding__annotation__update;
x_28 = l_lean_parser_syntax_is__of__kind___main(x_27, x_22);
lean::dec(x_22);
if (x_28 == 0)
{
uint8 x_32; obj* x_33; obj* x_34; 
lean::dec(x_17);
lean::dec(x_20);
x_32 = 1;
x_33 = lean::box(x_32);
if (lean::is_scalar(x_24)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_24;
}
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_2);
x_11 = x_34;
goto lbl_12;
}
else
{
obj* x_36; 
lean::dec(x_24);
x_36 = lean::box(0);
x_25 = x_36;
goto lbl_26;
}
lbl_12:
{
obj* x_37; obj* x_39; obj* x_42; 
x_37 = lean::cnstr_get(x_11, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_11, 1);
lean::inc(x_39);
lean::dec(x_11);
x_42 = l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(x_8, x_1, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_6);
lean::dec(x_10);
lean::dec(x_37);
x_46 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_48 = x_42;
} else {
 lean::inc(x_46);
 lean::dec(x_42);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_52; uint8 x_53; 
x_50 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 lean::cnstr_set(x_42, 0, lean::box(0));
 x_52 = x_42;
} else {
 lean::inc(x_50);
 lean::dec(x_42);
 x_52 = lean::box(0);
}
x_53 = lean::unbox(x_37);
if (x_53 == 0)
{
obj* x_56; obj* x_58; obj* x_60; obj* x_61; obj* x_62; 
lean::dec(x_6);
lean::dec(x_10);
x_56 = lean::cnstr_get(x_50, 0);
x_58 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_60 = x_50;
} else {
 lean::inc(x_56);
 lean::inc(x_58);
 lean::dec(x_50);
 x_60 = lean::box(0);
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_56);
lean::cnstr_set(x_61, 1, x_58);
if (lean::is_scalar(x_52)) {
 x_62 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_62 = x_52;
}
lean::cnstr_set(x_62, 0, x_61);
return x_62;
}
else
{
obj* x_63; obj* x_65; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_63 = lean::cnstr_get(x_50, 0);
x_65 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_67 = x_50;
} else {
 lean::inc(x_63);
 lean::inc(x_65);
 lean::dec(x_50);
 x_67 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_10;
}
lean::cnstr_set(x_68, 0, x_6);
lean::cnstr_set(x_68, 1, x_63);
if (lean::is_scalar(x_67)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_67;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_65);
if (lean::is_scalar(x_52)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_52;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
lbl_26:
{
obj* x_72; obj* x_73; obj* x_75; obj* x_78; 
lean::dec(x_25);
x_72 = l_lean_elaborator_mangle__ident(x_20);
x_73 = lean::cnstr_get(x_2, 4);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_73, 2);
lean::inc(x_75);
lean::inc(x_75);
x_78 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_75, x_72);
if (lean::obj_tag(x_78) == 0)
{
obj* x_82; obj* x_83; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_92; 
lean::dec(x_17);
lean::dec(x_75);
lean::dec(x_73);
x_82 = lean::box(0);
x_83 = l_lean_name_to__string___closed__1;
lean::inc(x_72);
x_85 = l_lean_name_to__string__with__sep___main(x_83, x_72);
x_86 = l_lean_parser_substring_of__string(x_85);
x_87 = lean::box(0);
x_88 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_88, 0, x_82);
lean::cnstr_set(x_88, 1, x_86);
lean::cnstr_set(x_88, 2, x_72);
lean::cnstr_set(x_88, 3, x_87);
lean::cnstr_set(x_88, 4, x_87);
x_89 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_89, 0, x_88);
x_90 = l_string_join___closed__1;
lean::inc(x_1);
x_92 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_89, x_90, x_1, x_2);
lean::dec(x_2);
lean::dec(x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_99; obj* x_101; obj* x_102; 
lean::dec(x_6);
lean::dec(x_10);
lean::dec(x_8);
lean::dec(x_1);
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
return x_102;
}
else
{
obj* x_103; obj* x_106; obj* x_108; uint8 x_109; obj* x_110; obj* x_111; 
x_103 = lean::cnstr_get(x_92, 0);
lean::inc(x_103);
lean::dec(x_92);
x_106 = lean::cnstr_get(x_103, 1);
if (lean::is_exclusive(x_103)) {
 lean::cnstr_release(x_103, 0);
 x_108 = x_103;
} else {
 lean::inc(x_106);
 lean::dec(x_103);
 x_108 = lean::box(0);
}
x_109 = 0;
x_110 = lean::box(x_109);
if (lean::is_scalar(x_108)) {
 x_111 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_111 = x_108;
}
lean::cnstr_set(x_111, 0, x_110);
lean::cnstr_set(x_111, 1, x_106);
x_11 = x_111;
goto lbl_12;
}
}
else
{
obj* x_112; obj* x_115; obj* x_117; obj* x_118; obj* x_120; obj* x_122; obj* x_124; obj* x_126; obj* x_128; obj* x_130; obj* x_132; obj* x_135; uint8 x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_141; obj* x_143; obj* x_145; obj* x_148; obj* x_149; obj* x_151; obj* x_153; obj* x_155; obj* x_157; obj* x_159; obj* x_162; uint8 x_163; obj* x_164; obj* x_165; 
x_112 = lean::cnstr_get(x_78, 0);
lean::inc(x_112);
lean::dec(x_78);
x_115 = lean::cnstr_get(x_112, 1);
if (lean::is_exclusive(x_112)) {
 lean::cnstr_release(x_112, 0);
 x_117 = x_112;
} else {
 lean::inc(x_115);
 lean::dec(x_112);
 x_117 = lean::box(0);
}
x_118 = lean::cnstr_get(x_2, 0);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_2, 1);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_2, 2);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_2, 3);
lean::inc(x_124);
x_126 = lean::cnstr_get(x_73, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_73, 1);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_115, 0);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_115, 1);
lean::inc(x_132);
lean::dec(x_115);
x_135 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_135, 0, x_130);
lean::cnstr_set(x_135, 1, x_132);
x_136 = lean::unbox(x_17);
lean::cnstr_set_scalar(x_135, sizeof(void*)*2, x_136);
x_137 = x_135;
x_138 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(x_75, x_72, x_137);
x_139 = lean::cnstr_get(x_73, 3);
lean::inc(x_139);
x_141 = lean::cnstr_get(x_73, 4);
lean::inc(x_141);
x_143 = lean::cnstr_get(x_73, 5);
lean::inc(x_143);
x_145 = lean::cnstr_get(x_73, 6);
lean::inc(x_145);
lean::dec(x_73);
x_148 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_148, 0, x_126);
lean::cnstr_set(x_148, 1, x_128);
lean::cnstr_set(x_148, 2, x_138);
lean::cnstr_set(x_148, 3, x_139);
lean::cnstr_set(x_148, 4, x_141);
lean::cnstr_set(x_148, 5, x_143);
lean::cnstr_set(x_148, 6, x_145);
x_149 = lean::cnstr_get(x_2, 5);
lean::inc(x_149);
x_151 = lean::cnstr_get(x_2, 6);
lean::inc(x_151);
x_153 = lean::cnstr_get(x_2, 7);
lean::inc(x_153);
x_155 = lean::cnstr_get(x_2, 8);
lean::inc(x_155);
x_157 = lean::cnstr_get(x_2, 9);
lean::inc(x_157);
x_159 = lean::cnstr_get(x_2, 10);
lean::inc(x_159);
lean::dec(x_2);
x_162 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_162, 0, x_118);
lean::cnstr_set(x_162, 1, x_120);
lean::cnstr_set(x_162, 2, x_122);
lean::cnstr_set(x_162, 3, x_124);
lean::cnstr_set(x_162, 4, x_148);
lean::cnstr_set(x_162, 5, x_149);
lean::cnstr_set(x_162, 6, x_151);
lean::cnstr_set(x_162, 7, x_153);
lean::cnstr_set(x_162, 8, x_155);
lean::cnstr_set(x_162, 9, x_157);
lean::cnstr_set(x_162, 10, x_159);
x_163 = 0;
x_164 = lean::box(x_163);
if (lean::is_scalar(x_117)) {
 x_165 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_165 = x_117;
}
lean::cnstr_set(x_165, 0, x_164);
lean::cnstr_set(x_165, 1, x_162);
x_11 = x_165;
goto lbl_12;
}
}
}
}
}
obj* _init_l_lean_elaborator_variables_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("variables.elaborate: unexpected input");
return x_0;
}
}
obj* _init_l_lean_elaborator_variables_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("variables");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* l_lean_elaborator_variables_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; 
x_3 = l_lean_parser_command_variables_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_13; obj* x_15; 
lean::dec(x_9);
x_13 = l_lean_elaborator_variables_elaborate___closed__1;
lean::inc(x_1);
x_15 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_13, x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_21; obj* x_22; 
lean::dec(x_1);
lean::dec(x_0);
x_19 = lean::cnstr_get(x_15, 0);
if (lean::is_exclusive(x_15)) {
 x_21 = x_15;
} else {
 lean::inc(x_19);
 lean::dec(x_15);
 x_21 = lean::box(0);
}
if (lean::is_scalar(x_21)) {
 x_22 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_22 = x_21;
}
lean::cnstr_set(x_22, 0, x_19);
return x_22;
}
else
{
obj* x_23; obj* x_26; obj* x_28; obj* x_32; 
x_23 = lean::cnstr_get(x_15, 0);
lean::inc(x_23);
lean::dec(x_15);
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_23, 1);
lean::inc(x_28);
lean::dec(x_23);
lean::inc(x_1);
x_32 = l_lean_elaborator_simple__binders__to__pexpr(x_26, x_1, x_28);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_1);
lean::dec(x_0);
x_35 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_37 = x_32;
} else {
 lean::inc(x_35);
 lean::dec(x_32);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_42; obj* x_44; obj* x_47; obj* x_48; obj* x_49; 
x_39 = lean::cnstr_get(x_32, 0);
lean::inc(x_39);
lean::dec(x_32);
x_42 = lean::cnstr_get(x_39, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_39, 1);
lean::inc(x_44);
lean::dec(x_39);
x_47 = l_lean_elaborator_variables_elaborate___closed__2;
x_48 = lean_expr_mk_mdata(x_47, x_42);
x_49 = l_lean_elaborator_old__elab__command(x_0, x_48, x_1, x_44);
lean::dec(x_0);
return x_49;
}
}
}
else
{
obj* x_51; obj* x_55; 
x_51 = lean::cnstr_get(x_9, 0);
lean::inc(x_51);
lean::dec(x_9);
lean::inc(x_1);
x_55 = l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(x_51, x_1, x_2);
if (lean::obj_tag(x_55) == 0)
{
obj* x_58; obj* x_60; obj* x_61; 
lean::dec(x_1);
lean::dec(x_0);
x_58 = lean::cnstr_get(x_55, 0);
if (lean::is_exclusive(x_55)) {
 x_60 = x_55;
} else {
 lean::inc(x_58);
 lean::dec(x_55);
 x_60 = lean::box(0);
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_58);
return x_61;
}
else
{
obj* x_62; obj* x_65; obj* x_67; obj* x_71; 
x_62 = lean::cnstr_get(x_55, 0);
lean::inc(x_62);
lean::dec(x_55);
x_65 = lean::cnstr_get(x_62, 0);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_62, 1);
lean::inc(x_67);
lean::dec(x_62);
lean::inc(x_1);
x_71 = l_lean_elaborator_simple__binders__to__pexpr(x_65, x_1, x_67);
if (lean::obj_tag(x_71) == 0)
{
obj* x_74; obj* x_76; obj* x_77; 
lean::dec(x_1);
lean::dec(x_0);
x_74 = lean::cnstr_get(x_71, 0);
if (lean::is_exclusive(x_71)) {
 x_76 = x_71;
} else {
 lean::inc(x_74);
 lean::dec(x_71);
 x_76 = lean::box(0);
}
if (lean::is_scalar(x_76)) {
 x_77 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_77 = x_76;
}
lean::cnstr_set(x_77, 0, x_74);
return x_77;
}
else
{
obj* x_78; obj* x_81; obj* x_83; obj* x_86; obj* x_87; obj* x_88; 
x_78 = lean::cnstr_get(x_71, 0);
lean::inc(x_78);
lean::dec(x_71);
x_81 = lean::cnstr_get(x_78, 0);
lean::inc(x_81);
x_83 = lean::cnstr_get(x_78, 1);
lean::inc(x_83);
lean::dec(x_78);
x_86 = l_lean_elaborator_variables_elaborate___closed__2;
x_87 = lean_expr_mk_mdata(x_86, x_81);
x_88 = l_lean_elaborator_old__elab__command(x_0, x_87, x_1, x_83);
lean::dec(x_0);
return x_88;
}
}
}
}
}
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_include_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = lean::box(0);
x_9 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_7, x_8);
x_0 = x_9;
x_1 = x_4;
goto _start;
}
}
}
obj* l_lean_elaborator_include_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_3 = l_lean_parser_command_include_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 3);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_2, 4);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_16, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_16, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_7, 1);
lean::inc(x_26);
lean::dec(x_7);
x_29 = l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(x_24, x_26);
x_30 = lean::cnstr_get(x_16, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_16, 5);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_16, 6);
lean::inc(x_34);
lean::dec(x_16);
x_37 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_20);
lean::cnstr_set(x_37, 2, x_22);
lean::cnstr_set(x_37, 3, x_29);
lean::cnstr_set(x_37, 4, x_30);
lean::cnstr_set(x_37, 5, x_32);
lean::cnstr_set(x_37, 6, x_34);
x_38 = lean::cnstr_get(x_2, 5);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_2, 6);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_2, 7);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_2, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 10);
lean::inc(x_48);
lean::dec(x_2);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_8);
lean::cnstr_set(x_51, 1, x_10);
lean::cnstr_set(x_51, 2, x_12);
lean::cnstr_set(x_51, 3, x_14);
lean::cnstr_set(x_51, 4, x_37);
lean::cnstr_set(x_51, 5, x_38);
lean::cnstr_set(x_51, 6, x_40);
lean::cnstr_set(x_51, 7, x_42);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
obj* l_lean_elaborator_include_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_include_elaborate(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* _init_l_lean_elaborator_module_header_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not implemented: imports");
return x_0;
}
}
obj* l_lean_elaborator_module_header_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; 
x_3 = l_lean_parser_module_header_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; obj* x_13; 
lean::dec(x_8);
x_12 = l_lean_elaborator_module_header_elaborate___closed__1;
x_13 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_12, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
return x_13;
}
else
{
obj* x_17; 
lean::dec(x_9);
x_17 = lean::cnstr_get(x_8, 1);
lean::inc(x_17);
lean::dec(x_8);
if (lean::obj_tag(x_17) == 0)
{
obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_1);
lean::dec(x_0);
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_17);
x_26 = l_lean_elaborator_module_header_elaborate___closed__1;
x_27 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_26, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
return x_27;
}
}
}
}
obj* l_lean_elaborator_prec__to__nat___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::mk_nat_obj(0u);
return x_1;
}
else
{
obj* x_2; obj* x_5; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_5);
return x_8;
}
}
}
obj* l_lean_elaborator_prec__to__nat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_prec__to__nat___main(x_0);
return x_1;
}
}
obj* _init_l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_tokens: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
lean::dec(x_3);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_13 = l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1;
return x_13;
}
else
{
obj* x_14; obj* x_17; obj* x_20; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_49; 
x_14 = lean::cnstr_get(x_1, 1);
lean::inc(x_14);
lean::dec(x_1);
x_17 = lean::cnstr_get(x_5, 3);
lean::inc(x_17);
lean::dec(x_5);
x_20 = lean::cnstr_get(x_8, 0);
lean::inc(x_20);
lean::dec(x_8);
x_23 = lean::cnstr_get(x_0, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_23, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_23, 1);
lean::inc(x_27);
lean::dec(x_23);
x_30 = lean::cnstr_get(x_20, 1);
lean::inc(x_30);
lean::dec(x_20);
x_33 = l_string_trim(x_30);
x_34 = l_lean_elaborator_prec__to__nat___main(x_17);
x_35 = lean::box(0);
lean::inc(x_33);
x_37 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set(x_37, 1, x_34);
lean::cnstr_set(x_37, 2, x_35);
x_38 = l_lean_parser_trie_insert___rarg(x_27, x_33, x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_25);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::cnstr_get(x_0, 1);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_0, 2);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_0, 3);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_0, 4);
lean::inc(x_46);
lean::dec(x_0);
x_49 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_49, 0, x_39);
lean::cnstr_set(x_49, 1, x_40);
lean::cnstr_set(x_49, 2, x_42);
lean::cnstr_set(x_49, 3, x_44);
lean::cnstr_set(x_49, 4, x_46);
x_0 = x_49;
x_1 = x_14;
goto _start;
}
}
}
}
obj* l_lean_elaborator_command__parser__config_register__notation__tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(x_1, x_2);
return x_5;
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg), 1, 0);
return x_1;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_binder__ident_parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_binders_parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_parser: unimplemented");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_parser: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_lean_expander_expand__bracketed__binder___main___closed__4;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_11 = lean::cnstr_get(x_2, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
lean::dec(x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; 
lean::dec(x_2);
x_17 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
x_7 = x_17;
goto lbl_8;
}
else
{
obj* x_18; obj* x_21; obj* x_24; obj* x_26; obj* x_27; obj* x_28; 
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
lean::dec(x_13);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
x_24 = l_string_trim(x_21);
lean::inc(x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_26, 0, x_24);
x_27 = lean::mk_nat_obj(0u);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1___boxed), 8, 3);
lean::closure_set(x_28, 0, x_24);
lean::closure_set(x_28, 1, x_27);
lean::closure_set(x_28, 2, x_26);
x_9 = x_28;
goto lbl_10;
}
lbl_8:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_31; obj* x_33; obj* x_34; 
lean::dec(x_6);
lean::dec(x_4);
x_31 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_33 = x_7;
} else {
 lean::inc(x_31);
 lean::dec(x_7);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
return x_34;
}
else
{
obj* x_35; obj* x_38; 
x_35 = lean::cnstr_get(x_7, 0);
lean::inc(x_35);
lean::dec(x_7);
x_38 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(x_4);
if (lean::obj_tag(x_38) == 0)
{
obj* x_41; obj* x_43; obj* x_44; 
lean::dec(x_6);
lean::dec(x_35);
x_41 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_43 = x_38;
} else {
 lean::inc(x_41);
 lean::dec(x_38);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_47; obj* x_48; obj* x_49; 
x_45 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_47 = x_38;
} else {
 lean::inc(x_45);
 lean::dec(x_38);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_48 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_48 = x_6;
}
lean::cnstr_set(x_48, 0, x_35);
lean::cnstr_set(x_48, 1, x_45);
if (lean::is_scalar(x_47)) {
 x_49 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_49 = x_47;
}
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
lbl_10:
{
obj* x_50; obj* x_52; 
x_52 = lean::cnstr_get(x_2, 1);
lean::inc(x_52);
lean::dec(x_2);
if (lean::obj_tag(x_52) == 0)
{
obj* x_55; 
x_55 = l_lean_expander_no__expansion___closed__1;
x_50 = x_55;
goto lbl_51;
}
else
{
obj* x_56; 
x_56 = lean::cnstr_get(x_52, 0);
lean::inc(x_56);
lean::dec(x_52);
switch (lean::obj_tag(x_56)) {
case 0:
{
obj* x_60; 
lean::dec(x_56);
x_60 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1;
x_50 = x_60;
goto lbl_51;
}
case 1:
{
obj* x_62; 
lean::dec(x_56);
x_62 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2;
x_50 = x_62;
goto lbl_51;
}
default:
{
obj* x_63; obj* x_66; 
x_63 = lean::cnstr_get(x_56, 0);
lean::inc(x_63);
lean::dec(x_56);
x_66 = lean::cnstr_get(x_63, 1);
lean::inc(x_66);
lean::dec(x_63);
if (lean::obj_tag(x_66) == 0)
{
obj* x_69; 
x_69 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3;
x_50 = x_69;
goto lbl_51;
}
else
{
obj* x_70; obj* x_72; obj* x_73; 
x_70 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 lean::cnstr_set(x_66, 0, lean::box(0));
 x_72 = x_66;
} else {
 lean::inc(x_70);
 lean::dec(x_66);
 x_72 = lean::box(0);
}
x_73 = lean::cnstr_get(x_70, 1);
lean::inc(x_73);
lean::dec(x_70);
switch (lean::obj_tag(x_73)) {
case 0:
{
obj* x_76; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_76 = lean::cnstr_get(x_73, 0);
lean::inc(x_76);
lean::dec(x_73);
x_79 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_76);
x_80 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_80, 0, x_79);
if (lean::is_scalar(x_72)) {
 x_81 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_81 = x_72;
}
lean::cnstr_set(x_81, 0, x_80);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
x_50 = x_82;
goto lbl_51;
}
case 2:
{
obj* x_83; obj* x_86; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_83 = lean::cnstr_get(x_73, 0);
lean::inc(x_83);
lean::dec(x_73);
x_86 = lean::cnstr_get(x_83, 2);
lean::inc(x_86);
lean::dec(x_83);
x_89 = l_lean_elaborator_prec__to__nat___main(x_86);
x_90 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_90, 0, x_89);
if (lean::is_scalar(x_72)) {
 x_91 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_91 = x_72;
}
lean::cnstr_set(x_91, 0, x_90);
x_92 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_92, 0, x_91);
x_50 = x_92;
goto lbl_51;
}
default:
{
obj* x_95; 
lean::dec(x_73);
lean::dec(x_72);
x_95 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
x_50 = x_95;
goto lbl_51;
}
}
}
}
}
}
lbl_51:
{
if (lean::obj_tag(x_50) == 0)
{
obj* x_97; obj* x_99; obj* x_100; 
lean::dec(x_9);
x_97 = lean::cnstr_get(x_50, 0);
if (lean::is_exclusive(x_50)) {
 x_99 = x_50;
} else {
 lean::inc(x_97);
 lean::dec(x_50);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_97);
x_7 = x_100;
goto lbl_8;
}
else
{
obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_101 = lean::cnstr_get(x_50, 0);
if (lean::is_exclusive(x_50)) {
 x_103 = x_50;
} else {
 lean::inc(x_101);
 lean::dec(x_50);
 x_103 = lean::box(0);
}
x_104 = l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(x_101);
x_105 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_105, 0, x_9);
lean::cnstr_set(x_105, 1, x_104);
if (lean::is_scalar(x_103)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_103;
}
lean::cnstr_set(x_106, 0, x_105);
x_7 = x_106;
goto lbl_8;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_2);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
}
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = lean::apply_5(x_0, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4___boxed), 7, 1);
lean::closure_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4___boxed), 7, 1);
lean::closure_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_get__leading___boxed), 6, 0);
return x_0;
}
}
obj* l_lean_elaborator_command__parser__config_register__notation__parser(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 2);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::inc(x_5);
x_8 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_14 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_16 = x_8;
} else {
 lean::inc(x_14);
 lean::dec(x_8);
 x_16 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_20; obj* x_21; 
x_18 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_set(x_8, 0, lean::box(0));
 x_20 = x_8;
} else {
 lean::inc(x_18);
 lean::dec(x_8);
 x_20 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_29; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_18);
lean::dec(x_20);
x_29 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_36; 
x_30 = lean::cnstr_get(x_5, 0);
lean::inc(x_30);
lean::dec(x_5);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
lean::dec(x_30);
x_36 = lean::cnstr_get(x_33, 1);
lean::inc(x_36);
lean::dec(x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_45; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_18);
lean::dec(x_20);
x_45 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
return x_45;
}
else
{
obj* x_46; obj* x_49; obj* x_52; 
x_46 = lean::cnstr_get(x_36, 0);
lean::inc(x_46);
lean::dec(x_36);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
x_52 = l_string_trim(x_49);
x_21 = x_52;
goto lbl_22;
}
}
lbl_22:
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(x_18);
x_54 = l_list_join___main___rarg(x_53);
x_55 = lean::cnstr_get(x_1, 0);
lean::inc(x_55);
lean::dec(x_1);
if (lean::obj_tag(x_55) == 0)
{
obj* x_58; 
x_58 = lean::cnstr_get(x_3, 0);
lean::inc(x_58);
lean::dec(x_3);
if (lean::obj_tag(x_58) == 0)
{
obj* x_61; obj* x_63; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_71; obj* x_73; obj* x_76; obj* x_77; 
x_61 = lean::cnstr_get(x_2, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_2, 1);
lean::inc(x_63);
x_65 = lean::box(0);
x_66 = lean_name_mk_string(x_65, x_21);
x_67 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_67, 0, x_0);
lean::closure_set(x_67, 1, x_54);
x_68 = l_lean_parser_token__map_insert___rarg(x_63, x_66, x_67);
x_69 = lean::cnstr_get(x_2, 2);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_2, 3);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_2, 4);
lean::inc(x_73);
lean::dec(x_2);
x_76 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_76, 0, x_61);
lean::cnstr_set(x_76, 1, x_68);
lean::cnstr_set(x_76, 2, x_69);
lean::cnstr_set(x_76, 3, x_71);
lean::cnstr_set(x_76, 4, x_73);
if (lean::is_scalar(x_20)) {
 x_77 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_77 = x_20;
}
lean::cnstr_set(x_77, 0, x_76);
return x_77;
}
else
{
obj* x_79; obj* x_81; obj* x_83; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_94; obj* x_97; obj* x_98; 
lean::dec(x_58);
x_79 = lean::cnstr_get(x_2, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_2, 1);
lean::inc(x_81);
x_83 = lean::cnstr_get(x_2, 2);
lean::inc(x_83);
x_85 = lean::box(0);
x_86 = lean_name_mk_string(x_85, x_21);
x_87 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(x_54);
x_88 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
x_89 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_87);
x_90 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3), 8, 2);
lean::closure_set(x_90, 0, x_0);
lean::closure_set(x_90, 1, x_89);
x_91 = l_lean_parser_token__map_insert___rarg(x_83, x_86, x_90);
x_92 = lean::cnstr_get(x_2, 3);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_2, 4);
lean::inc(x_94);
lean::dec(x_2);
x_97 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_97, 0, x_79);
lean::cnstr_set(x_97, 1, x_81);
lean::cnstr_set(x_97, 2, x_91);
lean::cnstr_set(x_97, 3, x_92);
lean::cnstr_set(x_97, 4, x_94);
if (lean::is_scalar(x_20)) {
 x_98 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_98 = x_20;
}
lean::cnstr_set(x_98, 0, x_97);
return x_98;
}
}
else
{
obj* x_100; 
lean::dec(x_55);
x_100 = lean::cnstr_get(x_3, 0);
lean::inc(x_100);
lean::dec(x_3);
if (lean::obj_tag(x_100) == 0)
{
obj* x_103; obj* x_105; obj* x_107; obj* x_109; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_118; obj* x_119; 
x_103 = lean::cnstr_get(x_2, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_2, 1);
lean::inc(x_105);
x_107 = lean::cnstr_get(x_2, 2);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_2, 3);
lean::inc(x_109);
x_111 = lean::box(0);
x_112 = lean_name_mk_string(x_111, x_21);
x_113 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_113, 0, x_0);
lean::closure_set(x_113, 1, x_54);
x_114 = l_lean_parser_token__map_insert___rarg(x_109, x_112, x_113);
x_115 = lean::cnstr_get(x_2, 4);
lean::inc(x_115);
lean::dec(x_2);
x_118 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_118, 0, x_103);
lean::cnstr_set(x_118, 1, x_105);
lean::cnstr_set(x_118, 2, x_107);
lean::cnstr_set(x_118, 3, x_114);
lean::cnstr_set(x_118, 4, x_115);
if (lean::is_scalar(x_20)) {
 x_119 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_119 = x_20;
}
lean::cnstr_set(x_119, 0, x_118);
return x_119;
}
else
{
obj* x_121; obj* x_123; obj* x_125; obj* x_127; obj* x_129; obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
lean::dec(x_100);
x_121 = lean::cnstr_get(x_2, 0);
lean::inc(x_121);
x_123 = lean::cnstr_get(x_2, 1);
lean::inc(x_123);
x_125 = lean::cnstr_get(x_2, 2);
lean::inc(x_125);
x_127 = lean::cnstr_get(x_2, 3);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_2, 4);
lean::inc(x_129);
lean::dec(x_2);
x_132 = lean::box(0);
x_133 = lean_name_mk_string(x_132, x_21);
x_134 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(x_54);
x_135 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
x_136 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_136, 0, x_135);
lean::cnstr_set(x_136, 1, x_134);
x_137 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3), 8, 2);
lean::closure_set(x_137, 0, x_0);
lean::closure_set(x_137, 1, x_136);
x_138 = l_lean_parser_token__map_insert___rarg(x_129, x_133, x_137);
x_139 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_139, 0, x_121);
lean::cnstr_set(x_139, 1, x_123);
lean::cnstr_set(x_139, 2, x_125);
lean::cnstr_set(x_139, 3, x_127);
lean::cnstr_set(x_139, 4, x_138);
if (lean::is_scalar(x_20)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_20;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
}
}
}
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_1);
return x_7;
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; 
lean::dec(x_2);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_12; obj* x_14; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
lean::dec(x_1);
x_12 = lean::cnstr_get(x_7, 2);
lean::inc(x_12);
x_14 = l_lean_elaborator_command__parser__config_register__notation__tokens(x_12, x_0);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_18; obj* x_19; obj* x_22; obj* x_24; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
lean::dec(x_14);
x_18 = l_lean_parser_command_reserve__notation_has__view;
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
x_22 = lean::apply_1(x_19, x_7);
lean::inc(x_2);
x_24 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_22, x_15, x_2, x_3);
lean::dec(x_3);
lean::dec(x_22);
if (lean::obj_tag(x_24) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_9);
lean::dec(x_2);
x_29 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_31 = x_24;
} else {
 lean::inc(x_29);
 lean::dec(x_24);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_38; 
x_33 = lean::cnstr_get(x_24, 0);
lean::inc(x_33);
lean::dec(x_24);
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_33, 1);
lean::inc(x_38);
lean::dec(x_33);
x_0 = x_36;
x_1 = x_9;
x_3 = x_38;
goto _start;
}
}
else
{
obj* x_43; 
lean::dec(x_7);
x_43 = lean::cnstr_get(x_14, 0);
lean::inc(x_43);
lean::dec(x_14);
x_0 = x_43;
x_1 = x_9;
goto _start;
}
}
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; 
lean::dec(x_2);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_12; obj* x_14; obj* x_16; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
lean::dec(x_1);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_12, 2);
lean::inc(x_14);
x_16 = l_lean_elaborator_command__parser__config_register__notation__tokens(x_14, x_0);
if (lean::obj_tag(x_16) == 0)
{
obj* x_18; obj* x_21; obj* x_22; obj* x_25; obj* x_27; 
lean::dec(x_7);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
lean::dec(x_16);
x_21 = l_lean_parser_command_notation_has__view;
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
x_25 = lean::apply_1(x_22, x_12);
lean::inc(x_2);
x_27 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_25, x_18, x_2, x_3);
lean::dec(x_3);
lean::dec(x_25);
if (lean::obj_tag(x_27) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_9);
lean::dec(x_2);
x_32 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 x_34 = x_27;
} else {
 lean::inc(x_32);
 lean::dec(x_27);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_39; obj* x_41; 
x_36 = lean::cnstr_get(x_27, 0);
lean::inc(x_36);
lean::dec(x_27);
x_39 = lean::cnstr_get(x_36, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_36, 1);
lean::inc(x_41);
lean::dec(x_36);
x_0 = x_39;
x_1 = x_9;
x_3 = x_41;
goto _start;
}
}
else
{
obj* x_45; obj* x_48; obj* x_52; 
x_45 = lean::cnstr_get(x_16, 0);
lean::inc(x_45);
lean::dec(x_16);
x_48 = lean::cnstr_get(x_7, 0);
lean::inc(x_48);
lean::dec(x_7);
lean::inc(x_12);
x_52 = l_lean_elaborator_command__parser__config_register__notation__parser(x_48, x_12, x_45);
if (lean::obj_tag(x_52) == 0)
{
obj* x_53; obj* x_56; obj* x_57; obj* x_60; obj* x_62; 
x_53 = lean::cnstr_get(x_52, 0);
lean::inc(x_53);
lean::dec(x_52);
x_56 = l_lean_parser_command_notation_has__view;
x_57 = lean::cnstr_get(x_56, 1);
lean::inc(x_57);
lean::dec(x_56);
x_60 = lean::apply_1(x_57, x_12);
lean::inc(x_2);
x_62 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_60, x_53, x_2, x_3);
lean::dec(x_3);
lean::dec(x_60);
if (lean::obj_tag(x_62) == 0)
{
obj* x_67; obj* x_69; obj* x_70; 
lean::dec(x_9);
lean::dec(x_2);
x_67 = lean::cnstr_get(x_62, 0);
if (lean::is_exclusive(x_62)) {
 x_69 = x_62;
} else {
 lean::inc(x_67);
 lean::dec(x_62);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_67);
return x_70;
}
else
{
obj* x_71; obj* x_74; obj* x_76; 
x_71 = lean::cnstr_get(x_62, 0);
lean::inc(x_71);
lean::dec(x_62);
x_74 = lean::cnstr_get(x_71, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_71, 1);
lean::inc(x_76);
lean::dec(x_71);
x_0 = x_74;
x_1 = x_9;
x_3 = x_76;
goto _start;
}
}
else
{
obj* x_81; 
lean::dec(x_12);
x_81 = lean::cnstr_get(x_52, 0);
lean::inc(x_81);
lean::dec(x_52);
x_0 = x_81;
x_1 = x_9;
goto _start;
}
}
}
}
}
obj* l_lean_elaborator_update__parser__config(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::inc(x_1);
lean::inc(x_0);
lean::inc(x_6);
x_11 = l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(x_4, x_6, x_0, x_1);
if (lean::obj_tag(x_11) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_6);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_16 = lean::cnstr_get(x_11, 0);
if (lean::is_exclusive(x_11)) {
 x_18 = x_11;
} else {
 lean::inc(x_16);
 lean::dec(x_11);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_25; obj* x_28; obj* x_30; obj* x_32; obj* x_35; obj* x_36; 
x_20 = lean::cnstr_get(x_11, 0);
lean::inc(x_20);
lean::dec(x_11);
x_23 = lean::cnstr_get(x_20, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
lean::dec(x_20);
x_28 = lean::cnstr_get(x_1, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_1, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_30, 0);
lean::inc(x_32);
lean::inc(x_28);
x_35 = l_list_append___rarg(x_28, x_32);
x_36 = l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(x_23, x_35, x_0, x_25);
if (lean::obj_tag(x_36) == 0)
{
obj* x_42; obj* x_44; obj* x_45; 
lean::dec(x_30);
lean::dec(x_6);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_28);
x_42 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_44 = x_36;
} else {
 lean::inc(x_42);
 lean::dec(x_36);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_42);
return x_45;
}
else
{
obj* x_46; obj* x_48; obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_58; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_68; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_46 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_48 = x_36;
} else {
 lean::inc(x_46);
 lean::dec(x_36);
 x_48 = lean::box(0);
}
x_49 = lean::cnstr_get(x_46, 0);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 1);
 x_51 = x_46;
} else {
 lean::inc(x_49);
 lean::dec(x_46);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_1, 2);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_1, 3);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_1, 5);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_2, 1);
lean::inc(x_58);
lean::dec(x_2);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_49);
lean::cnstr_set(x_61, 1, x_58);
x_62 = lean::cnstr_get(x_1, 7);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_1, 8);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_1, 9);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_1, 10);
lean::inc(x_68);
lean::dec(x_1);
x_71 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_71, 0, x_6);
lean::cnstr_set(x_71, 1, x_28);
lean::cnstr_set(x_71, 2, x_52);
lean::cnstr_set(x_71, 3, x_54);
lean::cnstr_set(x_71, 4, x_30);
lean::cnstr_set(x_71, 5, x_56);
lean::cnstr_set(x_71, 6, x_61);
lean::cnstr_set(x_71, 7, x_62);
lean::cnstr_set(x_71, 8, x_64);
lean::cnstr_set(x_71, 9, x_66);
lean::cnstr_set(x_71, 10, x_68);
x_72 = lean::box(0);
if (lean::is_scalar(x_51)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_51;
}
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_71);
if (lean::is_scalar(x_48)) {
 x_74 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_74 = x_48;
}
lean::cnstr_set(x_74, 0, x_73);
return x_74;
}
}
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 4);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 6);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 7);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_0, 8);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_0, 9);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 10);
lean::inc(x_20);
lean::dec(x_0);
x_23 = l_lean_message__log_empty;
x_24 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_24, 0, x_2);
lean::cnstr_set(x_24, 1, x_4);
lean::cnstr_set(x_24, 2, x_6);
lean::cnstr_set(x_24, 3, x_8);
lean::cnstr_set(x_24, 4, x_10);
lean::cnstr_set(x_24, 5, x_23);
lean::cnstr_set(x_24, 6, x_12);
lean::cnstr_set(x_24, 7, x_14);
lean::cnstr_set(x_24, 8, x_16);
lean::cnstr_set(x_24, 9, x_18);
lean::cnstr_set(x_24, 10, x_20);
x_25 = lean::box(0);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_24);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
return x_28;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_4; 
lean::inc(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_3, 0, x_0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l_lean_elaborator_yield__to__outside(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_yield__to__outside___rarg___lambda__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_yield__to__outside___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_yield__to__outside___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_yield__to__outside(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_postprocess__notation__spec___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string(":");
x_2 = l_string_trim(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = l_lean_parser_max__prec;
x_6 = l_lean_parser_number_view_of__nat(x_5);
x_7 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_4);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
}
obj* l_lean_elaborator_postprocess__notation__spec(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
if (lean::obj_tag(x_3) == 0)
{
return x_0;
}
else
{
obj* x_5; obj* x_7; obj* x_9; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_11 = x_0;
} else {
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_14 = x_3;
} else {
 lean::inc(x_12);
 lean::dec(x_3);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_17 = x_5;
} else {
 lean::inc(x_15);
 lean::dec(x_5);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_7, 0);
x_20 = lean::cnstr_get(x_7, 1);
x_22 = lean::cnstr_get(x_7, 2);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 3);
 x_24 = x_7;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_7);
 x_24 = lean::box(0);
}
x_25 = l_lean_elaborator_postprocess__notation__spec___closed__1;
if (lean::is_scalar(x_24)) {
 x_26 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_26 = x_24;
}
lean::cnstr_set(x_26, 0, x_18);
lean::cnstr_set(x_26, 1, x_20);
lean::cnstr_set(x_26, 2, x_22);
lean::cnstr_set(x_26, 3, x_25);
if (lean::is_scalar(x_17)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_17;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_15);
if (lean::is_scalar(x_14)) {
 x_28 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_28 = x_14;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_12);
if (lean::is_scalar(x_11)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_11;
}
lean::cnstr_set(x_29, 0, x_1);
lean::cnstr_set(x_29, 1, x_28);
return x_29;
}
else
{
lean::dec(x_7);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_3);
return x_0;
}
}
}
else
{
lean::dec(x_1);
return x_0;
}
}
}
obj* l_lean_elaborator_reserve__notation_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_41; obj* x_42; 
x_3 = l_lean_parser_command_reserve__notation_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 2);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_elaborator_postprocess__notation__spec(x_12);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_10);
lean::cnstr_set(x_16, 2, x_15);
x_17 = lean::cnstr_get(x_2, 0);
lean::inc(x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_17);
x_20 = lean::cnstr_get(x_2, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 4);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_2, 5);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_2, 6);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_2, 7);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_2, 8);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_2, 9);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_2, 10);
lean::inc(x_38);
lean::dec(x_2);
x_41 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_41, 0, x_19);
lean::cnstr_set(x_41, 1, x_20);
lean::cnstr_set(x_41, 2, x_22);
lean::cnstr_set(x_41, 3, x_24);
lean::cnstr_set(x_41, 4, x_26);
lean::cnstr_set(x_41, 5, x_28);
lean::cnstr_set(x_41, 6, x_30);
lean::cnstr_set(x_41, 7, x_32);
lean::cnstr_set(x_41, 8, x_34);
lean::cnstr_set(x_41, 9, x_36);
lean::cnstr_set(x_41, 10, x_38);
x_42 = l_lean_elaborator_update__parser__config(x_1, x_41);
return x_42;
}
}
uint8 l_lean_elaborator_match__precedence___main(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8 x_4; 
lean::dec(x_1);
x_4 = 1;
return x_4;
}
}
else
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_6; 
lean::dec(x_0);
x_6 = 0;
return x_6;
}
else
{
obj* x_7; obj* x_10; obj* x_13; obj* x_16; obj* x_17; obj* x_20; uint8 x_21; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_7, 1);
lean::inc(x_13);
lean::dec(x_7);
x_16 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_13);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
lean::dec(x_10);
x_20 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_17);
x_21 = lean::nat_dec_eq(x_16, x_20);
lean::dec(x_20);
lean::dec(x_16);
if (x_21 == 0)
{
uint8 x_24; 
x_24 = 0;
return x_24;
}
else
{
uint8 x_25; 
x_25 = 1;
return x_25;
}
}
}
}
}
obj* l_lean_elaborator_match__precedence___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_match__precedence___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_elaborator_match__precedence(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_lean_elaborator_match__precedence___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_match__precedence___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_match__precedence(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_lean_parser_syntax_reprint__lst___main___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_20; 
lean::dec(x_11);
lean::dec(x_6);
lean::dec(x_9);
lean::dec(x_4);
lean::dec(x_2);
x_20 = lean::box(0);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_27; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_36; 
x_21 = lean::cnstr_get(x_2, 1);
lean::inc(x_21);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_11, 3);
lean::inc(x_24);
lean::dec(x_11);
x_27 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_set(x_13, 0, lean::box(0));
 x_29 = x_13;
} else {
 lean::inc(x_27);
 lean::dec(x_13);
 x_29 = lean::box(0);
}
x_30 = lean::cnstr_get(x_21, 0);
lean::inc(x_30);
x_36 = lean::cnstr_get(x_30, 1);
lean::inc(x_36);
if (lean::obj_tag(x_36) == 0)
{
obj* x_46; 
lean::dec(x_6);
lean::dec(x_29);
lean::dec(x_30);
lean::dec(x_9);
lean::dec(x_4);
lean::dec(x_21);
lean::dec(x_24);
lean::dec(x_27);
x_46 = lean::box(0);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_52; obj* x_55; obj* x_56; obj* x_59; uint8 x_60; 
x_47 = lean::cnstr_get(x_30, 3);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_36, 0);
lean::inc(x_49);
lean::dec(x_36);
x_52 = lean::cnstr_get(x_27, 1);
lean::inc(x_52);
lean::dec(x_27);
x_55 = l_string_trim(x_52);
x_56 = lean::cnstr_get(x_49, 1);
lean::inc(x_56);
lean::dec(x_49);
x_59 = l_string_trim(x_56);
x_60 = lean::string_dec_eq(x_55, x_59);
lean::dec(x_59);
lean::dec(x_55);
if (x_60 == 0)
{
obj* x_71; 
lean::dec(x_6);
lean::dec(x_29);
lean::dec(x_30);
lean::dec(x_9);
lean::dec(x_4);
lean::dec(x_21);
lean::dec(x_24);
lean::dec(x_47);
x_71 = lean::box(0);
return x_71;
}
else
{
uint8 x_72; 
x_72 = l_lean_elaborator_match__precedence___main(x_24, x_47);
if (x_72 == 0)
{
obj* x_79; 
lean::dec(x_6);
lean::dec(x_29);
lean::dec(x_30);
lean::dec(x_9);
lean::dec(x_4);
lean::dec(x_21);
x_79 = lean::box(0);
return x_79;
}
else
{
obj* x_80; 
x_80 = lean::box(0);
x_34 = x_80;
goto lbl_35;
}
}
}
lbl_33:
{
if (lean::obj_tag(x_32) == 0)
{
obj* x_84; 
lean::dec(x_6);
lean::dec(x_30);
lean::dec(x_4);
x_84 = lean::box(0);
return x_84;
}
else
{
obj* x_85; obj* x_88; 
x_85 = lean::cnstr_get(x_32, 0);
lean::inc(x_85);
lean::dec(x_32);
x_88 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_88, 0, x_30);
lean::cnstr_set(x_88, 1, x_85);
x_7 = x_88;
goto lbl_8;
}
}
lbl_35:
{
obj* x_90; 
lean::dec(x_34);
x_90 = lean::cnstr_get(x_9, 1);
lean::inc(x_90);
lean::dec(x_9);
if (lean::obj_tag(x_90) == 0)
{
obj* x_93; 
x_93 = lean::cnstr_get(x_21, 1);
lean::inc(x_93);
lean::dec(x_21);
if (lean::obj_tag(x_93) == 0)
{
obj* x_96; 
if (lean::is_scalar(x_29)) {
 x_96 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_96 = x_29;
}
lean::cnstr_set(x_96, 0, x_93);
x_32 = x_96;
goto lbl_33;
}
else
{
obj* x_99; 
lean::dec(x_29);
lean::dec(x_93);
x_99 = lean::box(0);
x_32 = x_99;
goto lbl_33;
}
}
else
{
obj* x_101; obj* x_103; 
lean::dec(x_29);
x_101 = lean::cnstr_get(x_90, 0);
if (lean::is_exclusive(x_90)) {
 lean::cnstr_set(x_90, 0, lean::box(0));
 x_103 = x_90;
} else {
 lean::inc(x_101);
 lean::dec(x_90);
 x_103 = lean::box(0);
}
switch (lean::obj_tag(x_101)) {
case 0:
{
obj* x_104; 
x_104 = lean::cnstr_get(x_21, 1);
lean::inc(x_104);
lean::dec(x_21);
if (lean::obj_tag(x_104) == 0)
{
obj* x_109; 
lean::dec(x_101);
lean::dec(x_103);
x_109 = lean::box(0);
x_32 = x_109;
goto lbl_33;
}
else
{
obj* x_110; 
x_110 = lean::cnstr_get(x_104, 0);
lean::inc(x_110);
switch (lean::obj_tag(x_110)) {
case 0:
{
obj* x_112; obj* x_115; obj* x_118; obj* x_121; uint8 x_124; 
x_112 = lean::cnstr_get(x_101, 0);
lean::inc(x_112);
lean::dec(x_101);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
lean::dec(x_110);
x_118 = lean::cnstr_get(x_112, 1);
lean::inc(x_118);
lean::dec(x_112);
x_121 = lean::cnstr_get(x_115, 1);
lean::inc(x_121);
lean::dec(x_115);
x_124 = l_lean_elaborator_match__precedence___main(x_118, x_121);
if (x_124 == 0)
{
obj* x_127; 
lean::dec(x_104);
lean::dec(x_103);
x_127 = lean::box(0);
x_32 = x_127;
goto lbl_33;
}
else
{
obj* x_128; 
if (lean::is_scalar(x_103)) {
 x_128 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_128 = x_103;
}
lean::cnstr_set(x_128, 0, x_104);
x_32 = x_128;
goto lbl_33;
}
}
default:
{
obj* x_133; 
lean::dec(x_104);
lean::dec(x_110);
lean::dec(x_101);
lean::dec(x_103);
x_133 = lean::box(0);
x_32 = x_133;
goto lbl_33;
}
}
}
}
case 1:
{
obj* x_134; 
x_134 = lean::cnstr_get(x_21, 1);
lean::inc(x_134);
lean::dec(x_21);
if (lean::obj_tag(x_134) == 0)
{
obj* x_139; 
lean::dec(x_101);
lean::dec(x_103);
x_139 = lean::box(0);
x_32 = x_139;
goto lbl_33;
}
else
{
obj* x_140; 
x_140 = lean::cnstr_get(x_134, 0);
lean::inc(x_140);
switch (lean::obj_tag(x_140)) {
case 1:
{
obj* x_142; obj* x_145; obj* x_148; obj* x_151; uint8 x_154; 
x_142 = lean::cnstr_get(x_101, 0);
lean::inc(x_142);
lean::dec(x_101);
x_145 = lean::cnstr_get(x_140, 0);
lean::inc(x_145);
lean::dec(x_140);
x_148 = lean::cnstr_get(x_142, 1);
lean::inc(x_148);
lean::dec(x_142);
x_151 = lean::cnstr_get(x_145, 1);
lean::inc(x_151);
lean::dec(x_145);
x_154 = l_lean_elaborator_match__precedence___main(x_148, x_151);
if (x_154 == 0)
{
obj* x_157; 
lean::dec(x_103);
lean::dec(x_134);
x_157 = lean::box(0);
x_32 = x_157;
goto lbl_33;
}
else
{
obj* x_158; 
if (lean::is_scalar(x_103)) {
 x_158 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_158 = x_103;
}
lean::cnstr_set(x_158, 0, x_134);
x_32 = x_158;
goto lbl_33;
}
}
default:
{
obj* x_163; 
lean::dec(x_101);
lean::dec(x_103);
lean::dec(x_140);
lean::dec(x_134);
x_163 = lean::box(0);
x_32 = x_163;
goto lbl_33;
}
}
}
}
default:
{
obj* x_164; obj* x_166; obj* x_167; obj* x_169; 
x_164 = lean::cnstr_get(x_101, 0);
if (lean::is_exclusive(x_101)) {
 lean::cnstr_set(x_101, 0, lean::box(0));
 x_166 = x_101;
} else {
 lean::inc(x_164);
 lean::dec(x_101);
 x_166 = lean::box(0);
}
x_169 = lean::cnstr_get(x_21, 1);
lean::inc(x_169);
lean::dec(x_21);
if (lean::obj_tag(x_169) == 0)
{
obj* x_175; 
lean::dec(x_164);
lean::dec(x_166);
lean::dec(x_103);
x_175 = lean::box(0);
x_32 = x_175;
goto lbl_33;
}
else
{
obj* x_176; obj* x_178; 
x_176 = lean::cnstr_get(x_169, 0);
if (lean::is_exclusive(x_169)) {
 lean::cnstr_set(x_169, 0, lean::box(0));
 x_178 = x_169;
} else {
 lean::inc(x_176);
 lean::dec(x_169);
 x_178 = lean::box(0);
}
switch (lean::obj_tag(x_176)) {
case 2:
{
obj* x_179; obj* x_182; obj* x_184; 
x_179 = lean::cnstr_get(x_176, 0);
lean::inc(x_179);
lean::dec(x_176);
x_182 = lean::cnstr_get(x_164, 1);
lean::inc(x_182);
if (lean::obj_tag(x_182) == 0)
{
obj* x_186; 
x_186 = lean::cnstr_get(x_179, 1);
lean::inc(x_186);
lean::dec(x_179);
if (lean::obj_tag(x_186) == 0)
{
obj* x_190; 
lean::dec(x_178);
x_190 = lean::box(0);
x_167 = x_190;
goto lbl_168;
}
else
{
obj* x_191; obj* x_193; 
x_191 = lean::cnstr_get(x_186, 0);
lean::inc(x_191);
x_193 = lean::cnstr_get(x_191, 1);
lean::inc(x_193);
lean::dec(x_191);
switch (lean::obj_tag(x_193)) {
case 0:
{
obj* x_197; 
lean::dec(x_193);
if (lean::is_scalar(x_178)) {
 x_197 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_197 = x_178;
}
lean::cnstr_set(x_197, 0, x_186);
x_167 = x_197;
goto lbl_168;
}
default:
{
obj* x_201; 
lean::dec(x_193);
lean::dec(x_186);
lean::dec(x_178);
x_201 = lean::box(0);
x_167 = x_201;
goto lbl_168;
}
}
}
}
else
{
obj* x_203; obj* x_205; 
lean::dec(x_178);
x_203 = lean::cnstr_get(x_182, 0);
lean::inc(x_203);
x_205 = lean::cnstr_get(x_203, 1);
lean::inc(x_205);
lean::dec(x_203);
x_184 = x_205;
goto lbl_185;
}
lbl_185:
{
switch (lean::obj_tag(x_184)) {
case 0:
{
obj* x_208; 
x_208 = lean::cnstr_get(x_179, 1);
lean::inc(x_208);
lean::dec(x_179);
if (lean::obj_tag(x_208) == 0)
{
obj* x_213; 
lean::dec(x_184);
lean::dec(x_182);
x_213 = lean::box(0);
x_167 = x_213;
goto lbl_168;
}
else
{
obj* x_214; obj* x_216; obj* x_217; 
x_214 = lean::cnstr_get(x_208, 0);
if (lean::is_exclusive(x_208)) {
 lean::cnstr_set(x_208, 0, lean::box(0));
 x_216 = x_208;
} else {
 lean::inc(x_214);
 lean::dec(x_208);
 x_216 = lean::box(0);
}
x_217 = lean::cnstr_get(x_214, 1);
lean::inc(x_217);
lean::dec(x_214);
switch (lean::obj_tag(x_217)) {
case 0:
{
obj* x_220; obj* x_223; obj* x_226; obj* x_227; uint8 x_228; 
x_220 = lean::cnstr_get(x_184, 0);
lean::inc(x_220);
lean::dec(x_184);
x_223 = lean::cnstr_get(x_217, 0);
lean::inc(x_223);
lean::dec(x_217);
x_226 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_220);
x_227 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_223);
x_228 = lean::nat_dec_eq(x_226, x_227);
lean::dec(x_227);
lean::dec(x_226);
if (x_228 == 0)
{
obj* x_233; 
lean::dec(x_216);
lean::dec(x_182);
x_233 = lean::box(0);
x_167 = x_233;
goto lbl_168;
}
else
{
obj* x_234; 
if (lean::is_scalar(x_216)) {
 x_234 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_234 = x_216;
}
lean::cnstr_set(x_234, 0, x_182);
x_167 = x_234;
goto lbl_168;
}
}
default:
{
obj* x_239; 
lean::dec(x_216);
lean::dec(x_184);
lean::dec(x_217);
lean::dec(x_182);
x_239 = lean::box(0);
x_167 = x_239;
goto lbl_168;
}
}
}
}
default:
{
obj* x_243; 
lean::dec(x_184);
lean::dec(x_179);
lean::dec(x_182);
x_243 = lean::box(0);
x_167 = x_243;
goto lbl_168;
}
}
}
}
default:
{
obj* x_249; 
lean::dec(x_164);
lean::dec(x_178);
lean::dec(x_166);
lean::dec(x_176);
lean::dec(x_103);
x_249 = lean::box(0);
x_32 = x_249;
goto lbl_33;
}
}
}
lbl_168:
{
if (lean::obj_tag(x_167) == 0)
{
obj* x_253; 
lean::dec(x_164);
lean::dec(x_166);
lean::dec(x_103);
x_253 = lean::box(0);
x_32 = x_253;
goto lbl_33;
}
else
{
obj* x_254; obj* x_256; obj* x_257; obj* x_260; obj* x_261; obj* x_262; obj* x_263; 
x_254 = lean::cnstr_get(x_167, 0);
if (lean::is_exclusive(x_167)) {
 x_256 = x_167;
} else {
 lean::inc(x_254);
 lean::dec(x_167);
 x_256 = lean::box(0);
}
x_257 = lean::cnstr_get(x_164, 0);
lean::inc(x_257);
lean::dec(x_164);
x_260 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_260, 0, x_257);
lean::cnstr_set(x_260, 1, x_254);
if (lean::is_scalar(x_166)) {
 x_261 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_261 = x_166;
}
lean::cnstr_set(x_261, 0, x_260);
if (lean::is_scalar(x_256)) {
 x_262 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_262 = x_256;
}
lean::cnstr_set(x_262, 0, x_261);
if (lean::is_scalar(x_103)) {
 x_263 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_263 = x_103;
}
lean::cnstr_set(x_263, 0, x_262);
x_32 = x_263;
goto lbl_33;
}
}
}
}
}
}
}
lbl_8:
{
obj* x_264; 
x_264 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(x_4);
if (lean::obj_tag(x_264) == 0)
{
obj* x_267; 
lean::dec(x_6);
lean::dec(x_7);
x_267 = lean::box(0);
return x_267;
}
else
{
obj* x_268; obj* x_270; obj* x_271; obj* x_272; 
x_268 = lean::cnstr_get(x_264, 0);
if (lean::is_exclusive(x_264)) {
 x_270 = x_264;
} else {
 lean::inc(x_268);
 lean::dec(x_264);
 x_270 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_271 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_271 = x_6;
}
lean::cnstr_set(x_271, 0, x_7);
lean::cnstr_set(x_271, 1, x_268);
if (lean::is_scalar(x_270)) {
 x_272 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_272 = x_270;
}
lean::cnstr_set(x_272, 0, x_271);
return x_272;
}
}
}
}
}
obj* _init_l_lean_elaborator_match__spec___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_list_zip___rarg___lambda__1), 2, 0);
return x_0;
}
}
obj* l_lean_elaborator_match__spec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; uint8 x_6; obj* x_7; uint8 x_9; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_6 = l_option_is__some___main___rarg(x_2);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = l_option_is__some___main___rarg(x_7);
lean::dec(x_7);
if (x_6 == 0)
{
if (x_9 == 0)
{
obj* x_11; 
x_11 = lean::box(0);
x_4 = x_11;
goto lbl_5;
}
else
{
obj* x_15; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_15 = lean::box(0);
return x_15;
}
}
else
{
if (x_9 == 0)
{
obj* x_19; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_19 = lean::box(0);
return x_19;
}
else
{
obj* x_20; 
x_20 = lean::box(0);
x_4 = x_20;
goto lbl_5;
}
}
lbl_5:
{
obj* x_22; obj* x_25; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_4);
x_22 = lean::cnstr_get(x_0, 1);
lean::inc(x_22);
lean::dec(x_0);
x_25 = lean::cnstr_get(x_1, 1);
lean::inc(x_25);
lean::dec(x_1);
x_28 = l_lean_elaborator_match__spec___closed__1;
x_29 = l_list_zip__with___main___rarg(x_28, x_22, x_25);
x_30 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(x_29);
if (lean::obj_tag(x_30) == 0)
{
obj* x_32; 
lean::dec(x_2);
x_32 = lean::box(0);
return x_32;
}
else
{
obj* x_33; obj* x_35; obj* x_36; obj* x_37; 
x_33 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_2);
lean::cnstr_set(x_36, 1, x_33);
if (lean::is_scalar(x_35)) {
 x_37 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_37 = x_35;
}
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
}
}
}
obj* l_lean_elaborator_notation_elaborate__aux___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 2);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_1, 2);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_lean_elaborator_match__spec(x_2, x_5);
return x_8;
}
}
obj* _init_l_lean_elaborator_notation_elaborate__aux___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid notation, matches multiple reserved notations");
return x_0;
}
}
obj* l_lean_elaborator_notation_elaborate__aux(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; 
lean::inc(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_notation_elaborate__aux___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = l_list_filter__map___main___rarg(x_4, x_5);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_1);
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 2);
lean::inc(x_13);
x_15 = l_lean_elaborator_postprocess__notation__spec(x_13);
x_16 = lean::cnstr_get(x_0, 3);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_0, 4);
lean::inc(x_18);
lean::dec(x_0);
x_21 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_11);
lean::cnstr_set(x_21, 2, x_15);
lean::cnstr_set(x_21, 3, x_16);
lean::cnstr_set(x_21, 4, x_18);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
return x_23;
}
else
{
obj* x_24; 
x_24 = lean::cnstr_get(x_7, 1);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_27; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_1);
x_27 = lean::cnstr_get(x_7, 0);
lean::inc(x_27);
lean::dec(x_7);
x_30 = lean::cnstr_get(x_0, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_0, 1);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_0, 3);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_0, 4);
lean::inc(x_36);
lean::dec(x_0);
x_39 = l_lean_elaborator_postprocess__notation__spec(x_27);
x_40 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_40, 0, x_30);
lean::cnstr_set(x_40, 1, x_32);
lean::cnstr_set(x_40, 2, x_39);
lean::cnstr_set(x_40, 3, x_34);
lean::cnstr_set(x_40, 4, x_36);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_2);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_41);
return x_42;
}
else
{
obj* x_45; obj* x_46; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_7);
lean::dec(x_24);
x_45 = l_lean_parser_command_notation_has__view;
x_46 = lean::cnstr_get(x_45, 1);
lean::inc(x_46);
lean::dec(x_45);
x_49 = lean::apply_1(x_46, x_0);
x_50 = l_lean_elaborator_notation_elaborate__aux___closed__1;
x_51 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_49, x_50, x_1, x_2);
lean::dec(x_2);
lean::dec(x_49);
if (lean::obj_tag(x_51) == 0)
{
obj* x_54; obj* x_56; obj* x_57; 
x_54 = lean::cnstr_get(x_51, 0);
if (lean::is_exclusive(x_51)) {
 x_56 = x_51;
} else {
 lean::inc(x_54);
 lean::dec(x_51);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_54);
return x_57;
}
else
{
obj* x_58; obj* x_60; obj* x_61; obj* x_63; obj* x_65; obj* x_66; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_75; obj* x_78; obj* x_79; obj* x_80; 
x_58 = lean::cnstr_get(x_51, 0);
if (lean::is_exclusive(x_51)) {
 x_60 = x_51;
} else {
 lean::inc(x_58);
 lean::dec(x_51);
 x_60 = lean::box(0);
}
x_61 = lean::cnstr_get(x_58, 0);
x_63 = lean::cnstr_get(x_58, 1);
if (lean::is_exclusive(x_58)) {
 x_65 = x_58;
} else {
 lean::inc(x_61);
 lean::inc(x_63);
 lean::dec(x_58);
 x_65 = lean::box(0);
}
x_66 = lean::cnstr_get(x_61, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_61, 1);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_61, 2);
lean::inc(x_70);
x_72 = l_lean_elaborator_postprocess__notation__spec(x_70);
x_73 = lean::cnstr_get(x_61, 3);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_61, 4);
lean::inc(x_75);
lean::dec(x_61);
x_78 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_78, 0, x_66);
lean::cnstr_set(x_78, 1, x_68);
lean::cnstr_set(x_78, 2, x_72);
lean::cnstr_set(x_78, 3, x_73);
lean::cnstr_set(x_78, 4, x_75);
if (lean::is_scalar(x_65)) {
 x_79 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_79 = x_65;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_63);
if (lean::is_scalar(x_60)) {
 x_80 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_80 = x_60;
}
lean::cnstr_set(x_80, 0, x_79);
return x_80;
}
}
}
}
}
obj* _init_l_lean_elaborator_mk__notation__kind___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_notation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_mk__notation__kind___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_5, x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 5);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_0, 7);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 8);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_0, 9);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_0, 10);
lean::inc(x_23);
lean::dec(x_0);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_1);
lean::cnstr_set(x_26, 1, x_3);
lean::cnstr_set(x_26, 2, x_8);
lean::cnstr_set(x_26, 3, x_9);
lean::cnstr_set(x_26, 4, x_11);
lean::cnstr_set(x_26, 5, x_13);
lean::cnstr_set(x_26, 6, x_15);
lean::cnstr_set(x_26, 7, x_17);
lean::cnstr_set(x_26, 8, x_19);
lean::cnstr_set(x_26, 9, x_21);
lean::cnstr_set(x_26, 10, x_23);
x_27 = l_lean_elaborator_mk__notation__kind___rarg___closed__1;
x_28 = lean_name_mk_numeral(x_27, x_5);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_26);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
return x_30;
}
}
obj* l_lean_elaborator_mk__notation__kind(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_mk__notation__kind___rarg), 1, 0);
return x_1;
}
}
obj* l_lean_elaborator_mk__notation__kind___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_mk__notation__kind(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_register__notation__macro___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_register__notation__macro(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_mk__notation__kind___rarg(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; obj* x_7; obj* x_8; 
lean::dec(x_0);
x_5 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_7 = x_3;
} else {
 lean::inc(x_5);
 lean::dec(x_3);
 x_7 = lean::box(0);
}
if (lean::is_scalar(x_7)) {
 x_8 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_8 = x_7;
}
lean::cnstr_set(x_8, 0, x_5);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; 
x_9 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_11 = x_3;
} else {
 lean::inc(x_9);
 lean::dec(x_3);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 x_16 = x_9;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_9);
 x_16 = lean::box(0);
}
lean::inc(x_12);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_12);
lean::cnstr_set(x_18, 1, x_0);
lean::inc(x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_mk__notation__transformer), 3, 1);
lean::closure_set(x_20, 0, x_18);
x_21 = lean::cnstr_get(x_14, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_14, 1);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_14, 2);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_14, 3);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_14, 4);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_14, 5);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_14, 6);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_14, 7);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_35, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_35, 1);
lean::inc(x_39);
lean::dec(x_35);
x_42 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_39, x_12, x_20);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_37);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::cnstr_get(x_14, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_14, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_14, 10);
lean::inc(x_48);
lean::dec(x_14);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_21);
lean::cnstr_set(x_51, 1, x_23);
lean::cnstr_set(x_51, 2, x_25);
lean::cnstr_set(x_51, 3, x_27);
lean::cnstr_set(x_51, 4, x_29);
lean::cnstr_set(x_51, 5, x_31);
lean::cnstr_set(x_51, 6, x_33);
lean::cnstr_set(x_51, 7, x_43);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
if (lean::is_scalar(x_16)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_16;
}
lean::cnstr_set(x_52, 0, x_18);
lean::cnstr_set(x_52, 1, x_51);
if (lean::is_scalar(x_11)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_11;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
obj* l_lean_elaborator_register__notation__macro___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_register__notation__macro(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
uint8 l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_1; 
x_1 = 0;
return x_1;
}
else
{
obj* x_2; obj* x_3; uint8 x_4; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 0);
x_3 = lean::cnstr_get(x_0, 1);
x_4 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_3);
x_5 = lean::cnstr_get(x_2, 1);
if (lean::obj_tag(x_5) == 0)
{
return x_4;
}
else
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 0);
switch (lean::obj_tag(x_6)) {
case 2:
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_6, 0);
x_8 = lean::cnstr_get(x_7, 1);
if (lean::obj_tag(x_8) == 0)
{
return x_4;
}
else
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_8, 0);
x_10 = lean::cnstr_get(x_9, 1);
switch (lean::obj_tag(x_10)) {
case 3:
{
uint8 x_11; 
x_11 = 1;
return x_11;
}
default:
{
return x_4;
}
}
}
}
default:
{
return x_4;
}
}
}
}
}
}
obj* _init_l_lean_elaborator_notation_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_notation_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ignoring notation using 'fold' action");
return x_0;
}
}
obj* l_lean_elaborator_notation_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; obj* x_12; uint8 x_15; 
x_3 = l_lean_parser_command_notation_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::apply_1(x_4, x_0);
x_10 = lean::cnstr_get(x_7, 2);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
lean::dec(x_10);
x_15 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_12);
lean::dec(x_12);
if (x_15 == 0)
{
obj* x_17; 
x_17 = lean::box(0);
x_8 = x_17;
goto lbl_9;
}
else
{
obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_32; obj* x_35; obj* x_36; uint8 x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_7);
x_19 = lean::cnstr_get(x_2, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 3);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_2, 4);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_1, 0);
lean::inc(x_29);
lean::dec(x_1);
x_32 = lean::cnstr_get(x_29, 0);
lean::inc(x_32);
lean::dec(x_29);
x_35 = lean::box(0);
x_36 = l_lean_elaborator_notation_elaborate___closed__1;
x_37 = 1;
x_38 = l_string_join___closed__1;
x_39 = l_lean_elaborator_notation_elaborate___closed__2;
x_40 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_40, 0, x_32);
lean::cnstr_set(x_40, 1, x_36);
lean::cnstr_set(x_40, 2, x_35);
lean::cnstr_set(x_40, 3, x_38);
lean::cnstr_set(x_40, 4, x_39);
lean::cnstr_set_scalar(x_40, sizeof(void*)*5, x_37);
x_41 = x_40;
x_42 = lean::cnstr_get(x_2, 5);
lean::inc(x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_41);
lean::cnstr_set(x_44, 1, x_42);
x_45 = lean::cnstr_get(x_2, 6);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_2, 7);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 8);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 9);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_2, 10);
lean::inc(x_53);
lean::dec(x_2);
x_56 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_56, 0, x_19);
lean::cnstr_set(x_56, 1, x_21);
lean::cnstr_set(x_56, 2, x_23);
lean::cnstr_set(x_56, 3, x_25);
lean::cnstr_set(x_56, 4, x_27);
lean::cnstr_set(x_56, 5, x_44);
lean::cnstr_set(x_56, 6, x_45);
lean::cnstr_set(x_56, 7, x_47);
lean::cnstr_set(x_56, 8, x_49);
lean::cnstr_set(x_56, 9, x_51);
lean::cnstr_set(x_56, 10, x_53);
x_57 = lean::box(0);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_56);
x_59 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
lbl_9:
{
obj* x_62; 
lean::dec(x_8);
lean::inc(x_1);
x_62 = l_lean_elaborator_notation_elaborate__aux(x_7, x_1, x_2);
if (lean::obj_tag(x_62) == 0)
{
obj* x_64; obj* x_66; obj* x_67; 
lean::dec(x_1);
x_64 = lean::cnstr_get(x_62, 0);
if (lean::is_exclusive(x_62)) {
 x_66 = x_62;
} else {
 lean::inc(x_64);
 lean::dec(x_62);
 x_66 = lean::box(0);
}
if (lean::is_scalar(x_66)) {
 x_67 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_67 = x_66;
}
lean::cnstr_set(x_67, 0, x_64);
return x_67;
}
else
{
obj* x_68; obj* x_71; obj* x_73; obj* x_77; 
x_68 = lean::cnstr_get(x_62, 0);
lean::inc(x_68);
lean::dec(x_62);
x_71 = lean::cnstr_get(x_68, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_68, 1);
lean::inc(x_73);
lean::dec(x_68);
lean::inc(x_71);
x_77 = l_lean_elaborator_register__notation__macro(x_71, x_1, x_73);
if (lean::obj_tag(x_77) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_1);
lean::dec(x_71);
x_80 = lean::cnstr_get(x_77, 0);
if (lean::is_exclusive(x_77)) {
 x_82 = x_77;
} else {
 lean::inc(x_80);
 lean::dec(x_77);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; 
x_84 = lean::cnstr_get(x_77, 0);
lean::inc(x_84);
lean::dec(x_77);
x_87 = lean::cnstr_get(x_71, 0);
lean::inc(x_87);
lean::dec(x_71);
if (lean::obj_tag(x_87) == 0)
{
obj* x_90; obj* x_92; obj* x_95; obj* x_97; obj* x_99; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_108; obj* x_110; obj* x_112; obj* x_114; obj* x_116; obj* x_119; obj* x_120; 
x_90 = lean::cnstr_get(x_84, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_84, 1);
lean::inc(x_92);
lean::dec(x_84);
x_95 = lean::cnstr_get(x_92, 0);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_92, 1);
lean::inc(x_97);
x_99 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_99, 0, x_90);
lean::cnstr_set(x_99, 1, x_97);
x_100 = lean::cnstr_get(x_92, 2);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_92, 3);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_92, 4);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_92, 5);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_92, 6);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_92, 7);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_92, 8);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_92, 9);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_92, 10);
lean::inc(x_116);
lean::dec(x_92);
x_119 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_119, 0, x_95);
lean::cnstr_set(x_119, 1, x_99);
lean::cnstr_set(x_119, 2, x_100);
lean::cnstr_set(x_119, 3, x_102);
lean::cnstr_set(x_119, 4, x_104);
lean::cnstr_set(x_119, 5, x_106);
lean::cnstr_set(x_119, 6, x_108);
lean::cnstr_set(x_119, 7, x_110);
lean::cnstr_set(x_119, 8, x_112);
lean::cnstr_set(x_119, 9, x_114);
lean::cnstr_set(x_119, 10, x_116);
x_120 = l_lean_elaborator_update__parser__config(x_1, x_119);
return x_120;
}
else
{
obj* x_122; obj* x_124; obj* x_127; obj* x_129; obj* x_131; obj* x_133; obj* x_135; obj* x_137; obj* x_139; obj* x_140; obj* x_142; obj* x_144; obj* x_146; obj* x_148; obj* x_150; obj* x_153; obj* x_154; obj* x_156; obj* x_158; obj* x_160; obj* x_162; obj* x_164; obj* x_167; obj* x_168; 
lean::dec(x_87);
x_122 = lean::cnstr_get(x_84, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_84, 1);
lean::inc(x_124);
lean::dec(x_84);
x_127 = lean::cnstr_get(x_124, 0);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_124, 1);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_124, 2);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_124, 3);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_124, 4);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_135, 0);
lean::inc(x_137);
x_139 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_139, 0, x_122);
lean::cnstr_set(x_139, 1, x_137);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
x_142 = lean::cnstr_get(x_135, 2);
lean::inc(x_142);
x_144 = lean::cnstr_get(x_135, 3);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_135, 4);
lean::inc(x_146);
x_148 = lean::cnstr_get(x_135, 5);
lean::inc(x_148);
x_150 = lean::cnstr_get(x_135, 6);
lean::inc(x_150);
lean::dec(x_135);
x_153 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_153, 0, x_139);
lean::cnstr_set(x_153, 1, x_140);
lean::cnstr_set(x_153, 2, x_142);
lean::cnstr_set(x_153, 3, x_144);
lean::cnstr_set(x_153, 4, x_146);
lean::cnstr_set(x_153, 5, x_148);
lean::cnstr_set(x_153, 6, x_150);
x_154 = lean::cnstr_get(x_124, 5);
lean::inc(x_154);
x_156 = lean::cnstr_get(x_124, 6);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_124, 7);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_124, 8);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_124, 9);
lean::inc(x_162);
x_164 = lean::cnstr_get(x_124, 10);
lean::inc(x_164);
lean::dec(x_124);
x_167 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_167, 0, x_127);
lean::cnstr_set(x_167, 1, x_129);
lean::cnstr_set(x_167, 2, x_131);
lean::cnstr_set(x_167, 3, x_133);
lean::cnstr_set(x_167, 4, x_153);
lean::cnstr_set(x_167, 5, x_154);
lean::cnstr_set(x_167, 6, x_156);
lean::cnstr_set(x_167, 7, x_158);
lean::cnstr_set(x_167, 8, x_160);
lean::cnstr_set(x_167, 9, x_162);
lean::cnstr_set(x_167, 10, x_164);
x_168 = l_lean_elaborator_update__parser__config(x_1, x_167);
return x_168;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_0);
x_2 = lean::box(x_1);
lean::dec(x_0);
return x_2;
}
}
obj* _init_l_lean_elaborator_universe_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("a universe named '");
return x_0;
}
}
obj* _init_l_lean_elaborator_universe_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("' has already been declared in this scope");
return x_0;
}
}
obj* l_lean_elaborator_universe_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; obj* x_12; obj* x_13; obj* x_15; obj* x_18; 
x_3 = l_lean_parser_command_universe_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
x_12 = l_lean_elaborator_mangle__ident(x_9);
x_13 = lean::cnstr_get(x_2, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 1);
lean::inc(x_15);
lean::inc(x_15);
x_18 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_15, x_12);
if (lean::obj_tag(x_18) == 0)
{
obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_32; obj* x_33; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_52; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
lean::dec(x_1);
lean::dec(x_0);
x_21 = lean::cnstr_get(x_2, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 1);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 2);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_2, 3);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_13, 0);
lean::inc(x_29);
lean::inc(x_12);
x_32 = level_mk_param(x_12);
x_33 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_15, x_12, x_32);
x_34 = lean::cnstr_get(x_13, 2);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_13, 3);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_13, 4);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_13, 5);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_13, 6);
lean::inc(x_42);
lean::dec(x_13);
x_45 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_45, 0, x_29);
lean::cnstr_set(x_45, 1, x_33);
lean::cnstr_set(x_45, 2, x_34);
lean::cnstr_set(x_45, 3, x_36);
lean::cnstr_set(x_45, 4, x_38);
lean::cnstr_set(x_45, 5, x_40);
lean::cnstr_set(x_45, 6, x_42);
x_46 = lean::cnstr_get(x_2, 5);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 6);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_2, 7);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_2, 8);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_2, 9);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_2, 10);
lean::inc(x_56);
lean::dec(x_2);
x_59 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_59, 0, x_21);
lean::cnstr_set(x_59, 1, x_23);
lean::cnstr_set(x_59, 2, x_25);
lean::cnstr_set(x_59, 3, x_27);
lean::cnstr_set(x_59, 4, x_45);
lean::cnstr_set(x_59, 5, x_46);
lean::cnstr_set(x_59, 6, x_48);
lean::cnstr_set(x_59, 7, x_50);
lean::cnstr_set(x_59, 8, x_52);
lean::cnstr_set(x_59, 9, x_54);
lean::cnstr_set(x_59, 10, x_56);
x_60 = lean::box(0);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_59);
x_62 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_62, 0, x_61);
return x_62;
}
else
{
obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_71; obj* x_72; obj* x_73; 
lean::dec(x_15);
lean::dec(x_13);
lean::dec(x_18);
x_66 = l_lean_name_to__string___closed__1;
x_67 = l_lean_name_to__string__with__sep___main(x_66, x_12);
x_68 = l_lean_elaborator_universe_elaborate___closed__1;
x_69 = lean::string_append(x_68, x_67);
lean::dec(x_67);
x_71 = l_lean_elaborator_universe_elaborate___closed__2;
x_72 = lean::string_append(x_69, x_71);
x_73 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_1, x_2);
lean::dec(x_2);
lean::dec(x_0);
return x_73;
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown identifier '");
return x_0;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'attribute' command, identifier is ambiguous");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_27; 
x_11 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_13 = x_0;
} else {
 lean::inc(x_11);
 lean::dec(x_0);
 x_13 = lean::box(0);
}
lean::inc(x_7);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_7);
x_16 = lean::cnstr_get(x_7, 2);
lean::inc(x_16);
lean::dec(x_7);
x_19 = l_lean_name_to__string___closed__1;
x_20 = l_lean_name_to__string__with__sep___main(x_19, x_16);
x_21 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1;
x_22 = lean::string_append(x_21, x_20);
lean::dec(x_20);
x_24 = l_char_has__repr___closed__1;
x_25 = lean::string_append(x_22, x_24);
lean::inc(x_1);
x_27 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_15, x_25, x_1, x_2);
lean::dec(x_2);
lean::dec(x_15);
if (lean::obj_tag(x_27) == 0)
{
obj* x_33; obj* x_35; obj* x_36; 
lean::dec(x_13);
lean::dec(x_1);
lean::dec(x_11);
x_33 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 x_35 = x_27;
} else {
 lean::inc(x_33);
 lean::dec(x_27);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_33);
return x_36;
}
else
{
obj* x_37; obj* x_40; obj* x_42; obj* x_45; 
x_37 = lean::cnstr_get(x_27, 0);
lean::inc(x_37);
lean::dec(x_27);
x_40 = lean::cnstr_get(x_37, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_37, 1);
lean::inc(x_42);
lean::dec(x_37);
x_45 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_11, x_1, x_42);
if (lean::obj_tag(x_45) == 0)
{
obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_13);
lean::dec(x_40);
x_48 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_50 = x_45;
} else {
 lean::inc(x_48);
 lean::dec(x_45);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_48);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_52 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_54 = x_45;
} else {
 lean::inc(x_52);
 lean::dec(x_45);
 x_54 = lean::box(0);
}
x_55 = lean::cnstr_get(x_52, 0);
x_57 = lean::cnstr_get(x_52, 1);
if (lean::is_exclusive(x_52)) {
 x_59 = x_52;
} else {
 lean::inc(x_55);
 lean::inc(x_57);
 lean::dec(x_52);
 x_59 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_60 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_60 = x_13;
}
lean::cnstr_set(x_60, 0, x_40);
lean::cnstr_set(x_60, 1, x_55);
if (lean::is_scalar(x_59)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_59;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_57);
if (lean::is_scalar(x_54)) {
 x_62 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_62 = x_54;
}
lean::cnstr_set(x_62, 0, x_61);
return x_62;
}
}
}
else
{
obj* x_63; 
x_63 = lean::cnstr_get(x_9, 1);
lean::inc(x_63);
if (lean::obj_tag(x_63) == 0)
{
obj* x_66; obj* x_69; obj* x_71; obj* x_72; 
lean::dec(x_7);
x_66 = lean::cnstr_get(x_0, 1);
lean::inc(x_66);
lean::dec(x_0);
x_69 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_set(x_9, 0, lean::box(0));
 lean::cnstr_release(x_9, 1);
 x_71 = x_9;
} else {
 lean::inc(x_69);
 lean::dec(x_9);
 x_71 = lean::box(0);
}
x_72 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_66, x_1, x_2);
if (lean::obj_tag(x_72) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_71);
lean::dec(x_69);
x_75 = lean::cnstr_get(x_72, 0);
if (lean::is_exclusive(x_72)) {
 x_77 = x_72;
} else {
 lean::inc(x_75);
 lean::dec(x_72);
 x_77 = lean::box(0);
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
x_79 = lean::cnstr_get(x_72, 0);
if (lean::is_exclusive(x_72)) {
 x_81 = x_72;
} else {
 lean::inc(x_79);
 lean::dec(x_72);
 x_81 = lean::box(0);
}
x_82 = lean::cnstr_get(x_79, 0);
x_84 = lean::cnstr_get(x_79, 1);
if (lean::is_exclusive(x_79)) {
 x_86 = x_79;
} else {
 lean::inc(x_82);
 lean::inc(x_84);
 lean::dec(x_79);
 x_86 = lean::box(0);
}
x_87 = lean::box(0);
x_88 = lean_expr_mk_const(x_69, x_87);
if (lean::is_scalar(x_71)) {
 x_89 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_89 = x_71;
}
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_82);
if (lean::is_scalar(x_86)) {
 x_90 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_90 = x_86;
}
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_84);
if (lean::is_scalar(x_81)) {
 x_91 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_91 = x_81;
}
lean::cnstr_set(x_91, 0, x_90);
return x_91;
}
}
else
{
obj* x_93; obj* x_94; obj* x_97; obj* x_98; obj* x_100; 
lean::dec(x_9);
if (lean::is_exclusive(x_63)) {
 lean::cnstr_release(x_63, 0);
 lean::cnstr_release(x_63, 1);
 x_93 = x_63;
} else {
 lean::dec(x_63);
 x_93 = lean::box(0);
}
x_94 = lean::cnstr_get(x_0, 1);
lean::inc(x_94);
lean::dec(x_0);
x_97 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_97, 0, x_7);
x_98 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2;
lean::inc(x_1);
x_100 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_97, x_98, x_1, x_2);
lean::dec(x_2);
lean::dec(x_97);
if (lean::obj_tag(x_100) == 0)
{
obj* x_106; obj* x_108; obj* x_109; 
lean::dec(x_1);
lean::dec(x_93);
lean::dec(x_94);
x_106 = lean::cnstr_get(x_100, 0);
if (lean::is_exclusive(x_100)) {
 x_108 = x_100;
} else {
 lean::inc(x_106);
 lean::dec(x_100);
 x_108 = lean::box(0);
}
if (lean::is_scalar(x_108)) {
 x_109 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_109 = x_108;
}
lean::cnstr_set(x_109, 0, x_106);
return x_109;
}
else
{
obj* x_110; obj* x_113; obj* x_115; obj* x_118; 
x_110 = lean::cnstr_get(x_100, 0);
lean::inc(x_110);
lean::dec(x_100);
x_113 = lean::cnstr_get(x_110, 0);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_110, 1);
lean::inc(x_115);
lean::dec(x_110);
x_118 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_94, x_1, x_115);
if (lean::obj_tag(x_118) == 0)
{
obj* x_121; obj* x_123; obj* x_124; 
lean::dec(x_113);
lean::dec(x_93);
x_121 = lean::cnstr_get(x_118, 0);
if (lean::is_exclusive(x_118)) {
 x_123 = x_118;
} else {
 lean::inc(x_121);
 lean::dec(x_118);
 x_123 = lean::box(0);
}
if (lean::is_scalar(x_123)) {
 x_124 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_124 = x_123;
}
lean::cnstr_set(x_124, 0, x_121);
return x_124;
}
else
{
obj* x_125; obj* x_127; obj* x_128; obj* x_130; obj* x_132; obj* x_133; obj* x_134; obj* x_135; 
x_125 = lean::cnstr_get(x_118, 0);
if (lean::is_exclusive(x_118)) {
 x_127 = x_118;
} else {
 lean::inc(x_125);
 lean::dec(x_118);
 x_127 = lean::box(0);
}
x_128 = lean::cnstr_get(x_125, 0);
x_130 = lean::cnstr_get(x_125, 1);
if (lean::is_exclusive(x_125)) {
 x_132 = x_125;
} else {
 lean::inc(x_128);
 lean::inc(x_130);
 lean::dec(x_125);
 x_132 = lean::box(0);
}
if (lean::is_scalar(x_93)) {
 x_133 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_133 = x_93;
}
lean::cnstr_set(x_133, 0, x_113);
lean::cnstr_set(x_133, 1, x_128);
if (lean::is_scalar(x_132)) {
 x_134 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_134 = x_132;
}
lean::cnstr_set(x_134, 0, x_133);
lean::cnstr_set(x_134, 1, x_130);
if (lean::is_scalar(x_127)) {
 x_135 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_135 = x_127;
}
lean::cnstr_set(x_135, 0, x_134);
return x_135;
}
}
}
}
}
}
}
obj* _init_l_lean_elaborator_attribute_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("attribute");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_attribute_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("local");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_attribute_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; obj* x_12; 
x_3 = l_lean_parser_command_attribute_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 3);
lean::inc(x_9);
lean::inc(x_1);
x_12 = l_lean_elaborator_attrs__to__pexpr(x_9, x_1, x_2);
if (lean::obj_tag(x_12) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_0);
x_16 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_18 = x_12;
} else {
 lean::inc(x_16);
 lean::dec(x_12);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_25; obj* x_28; obj* x_31; 
x_20 = lean::cnstr_get(x_12, 0);
lean::inc(x_20);
lean::dec(x_12);
x_23 = lean::cnstr_get(x_20, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
lean::dec(x_20);
x_28 = lean::cnstr_get(x_8, 5);
lean::inc(x_28);
lean::inc(x_1);
x_31 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_28, x_1, x_25);
if (lean::obj_tag(x_31) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_23);
x_36 = lean::cnstr_get(x_31, 0);
if (lean::is_exclusive(x_31)) {
 x_38 = x_31;
} else {
 lean::inc(x_36);
 lean::dec(x_31);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_43; obj* x_45; obj* x_48; uint8 x_51; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_40 = lean::cnstr_get(x_31, 0);
lean::inc(x_40);
lean::dec(x_31);
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_48 = lean::cnstr_get(x_8, 0);
lean::inc(x_48);
lean::dec(x_8);
x_51 = l_option_is__some___main___rarg(x_48);
lean::dec(x_48);
x_53 = l_lean_elaborator_attribute_elaborate___closed__1;
x_54 = l_lean_elaborator_attribute_elaborate___closed__2;
x_55 = l_lean_kvmap_set__bool(x_53, x_54, x_51);
x_56 = l_lean_elaborator_mk__eqns___closed__1;
x_57 = l_lean_expr_mk__capp(x_56, x_43);
x_58 = lean_expr_mk_app(x_23, x_57);
x_59 = lean_expr_mk_mdata(x_55, x_58);
x_60 = l_lean_elaborator_old__elab__command(x_0, x_59, x_1, x_45);
lean::dec(x_0);
return x_60;
}
}
}
}
obj* _init_l_lean_elaborator_check_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("#check");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* l_lean_elaborator_check_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; obj* x_13; 
x_3 = l_lean_parser_command_check_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
lean::inc(x_1);
x_13 = l_lean_elaborator_to__pexpr___main(x_9, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_1);
lean::dec(x_0);
x_16 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_18 = x_13;
} else {
 lean::inc(x_16);
 lean::dec(x_13);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_25; obj* x_28; obj* x_29; obj* x_30; 
x_20 = lean::cnstr_get(x_13, 0);
lean::inc(x_20);
lean::dec(x_13);
x_23 = lean::cnstr_get(x_20, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
lean::dec(x_20);
x_28 = l_lean_elaborator_check_elaborate___closed__1;
x_29 = lean_expr_mk_mdata(x_28, x_23);
x_30 = l_lean_elaborator_old__elab__command(x_0, x_29, x_1, x_25);
lean::dec(x_0);
return x_30;
}
}
}
obj* l_lean_elaborator_open_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_3 = l_lean_parser_command_open_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 3);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_2, 4);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_16, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_16, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_16, 4);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_16, 5);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_7, 1);
lean::inc(x_30);
lean::dec(x_7);
x_33 = l_list_append___rarg(x_28, x_30);
x_34 = lean::cnstr_get(x_16, 6);
lean::inc(x_34);
lean::dec(x_16);
x_37 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_20);
lean::cnstr_set(x_37, 2, x_22);
lean::cnstr_set(x_37, 3, x_24);
lean::cnstr_set(x_37, 4, x_26);
lean::cnstr_set(x_37, 5, x_33);
lean::cnstr_set(x_37, 6, x_34);
x_38 = lean::cnstr_get(x_2, 5);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_2, 6);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_2, 7);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_2, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 10);
lean::inc(x_48);
lean::dec(x_2);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_8);
lean::cnstr_set(x_51, 1, x_10);
lean::cnstr_set(x_51, 2, x_12);
lean::cnstr_set(x_51, 3, x_14);
lean::cnstr_set(x_51, 4, x_37);
lean::cnstr_set(x_51, 5, x_38);
lean::cnstr_set(x_51, 6, x_40);
lean::cnstr_set(x_51, 7, x_42);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
obj* l_lean_elaborator_open_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_open_elaborate(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
lean::inc(x_0);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_4);
x_11 = l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_8;
}
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_lean_elaborator_export_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_get__namespace___rarg(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; obj* x_7; obj* x_8; 
lean::dec(x_0);
x_5 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_7 = x_3;
} else {
 lean::inc(x_5);
 lean::dec(x_3);
 x_7 = lean::box(0);
}
if (lean::is_scalar(x_7)) {
 x_8 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_8 = x_7;
}
lean::cnstr_set(x_8, 0, x_5);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_21; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_9 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_11 = x_3;
} else {
 lean::inc(x_9);
 lean::dec(x_3);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 x_16 = x_9;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_9);
 x_16 = lean::box(0);
}
x_17 = l_lean_parser_command_export_has__view;
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
lean::dec(x_17);
x_21 = lean::apply_1(x_18, x_0);
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_14, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_14, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_14, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_21, 1);
lean::inc(x_30);
lean::dec(x_21);
x_33 = l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(x_12, x_30);
x_34 = l_list_append___rarg(x_28, x_33);
x_35 = lean::cnstr_get(x_14, 4);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_14, 5);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_14, 6);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_14, 7);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_14, 8);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_14, 9);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_14, 10);
lean::inc(x_47);
lean::dec(x_14);
x_50 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_50, 0, x_22);
lean::cnstr_set(x_50, 1, x_24);
lean::cnstr_set(x_50, 2, x_26);
lean::cnstr_set(x_50, 3, x_34);
lean::cnstr_set(x_50, 4, x_35);
lean::cnstr_set(x_50, 5, x_37);
lean::cnstr_set(x_50, 6, x_39);
lean::cnstr_set(x_50, 7, x_41);
lean::cnstr_set(x_50, 8, x_43);
lean::cnstr_set(x_50, 9, x_45);
lean::cnstr_set(x_50, 10, x_47);
x_51 = lean::box(0);
if (lean::is_scalar(x_16)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_16;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_50);
if (lean::is_scalar(x_11)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_11;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
obj* l_lean_elaborator_export_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_export_elaborate(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* _init_l_lean_elaborator_init__quot_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("init_quot");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
x_7 = l_lean_elaborator_dummy;
x_8 = lean_expr_mk_mdata(x_6, x_7);
return x_8;
}
}
obj* l_lean_elaborator_init__quot_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_lean_elaborator_init__quot_elaborate___closed__1;
x_4 = l_lean_elaborator_old__elab__command(x_0, x_3, x_1, x_2);
return x_4;
}
}
obj* l_lean_elaborator_init__quot_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_init__quot_elaborate(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_lean_elaborator_set__option_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; 
x_3 = l_lean_parser_command_set__option_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 2);
lean::inc(x_8);
switch (lean::obj_tag(x_8)) {
case 0:
{
obj* x_10; 
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_14; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_45; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_55; uint8 x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
lean::dec(x_10);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
lean::dec(x_7);
x_17 = lean::cnstr_get(x_14, 2);
lean::inc(x_17);
lean::dec(x_14);
x_20 = lean::cnstr_get(x_2, 4);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_20, 6);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 1);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_2, 2);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_2, 3);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_20, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_20, 1);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_20, 2);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_20, 3);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_20, 4);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_20, 5);
lean::inc(x_42);
lean::dec(x_20);
x_45 = lean::cnstr_get(x_2, 5);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_2, 6);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 7);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 8);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_2, 9);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_2, 10);
lean::inc(x_55);
lean::dec(x_2);
x_58 = 1;
x_59 = l_lean_kvmap_set__bool(x_22, x_17, x_58);
x_60 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_60, 0, x_32);
lean::cnstr_set(x_60, 1, x_34);
lean::cnstr_set(x_60, 2, x_36);
lean::cnstr_set(x_60, 3, x_38);
lean::cnstr_set(x_60, 4, x_40);
lean::cnstr_set(x_60, 5, x_42);
lean::cnstr_set(x_60, 6, x_59);
x_61 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_61, 0, x_24);
lean::cnstr_set(x_61, 1, x_26);
lean::cnstr_set(x_61, 2, x_28);
lean::cnstr_set(x_61, 3, x_30);
lean::cnstr_set(x_61, 4, x_60);
lean::cnstr_set(x_61, 5, x_45);
lean::cnstr_set(x_61, 6, x_47);
lean::cnstr_set(x_61, 7, x_49);
lean::cnstr_set(x_61, 8, x_51);
lean::cnstr_set(x_61, 9, x_53);
lean::cnstr_set(x_61, 10, x_55);
x_62 = lean::box(0);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_61);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_63);
return x_64;
}
else
{
obj* x_66; obj* x_69; obj* x_72; obj* x_74; obj* x_76; obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_86; obj* x_88; obj* x_90; obj* x_92; obj* x_94; obj* x_97; obj* x_99; obj* x_101; obj* x_103; obj* x_105; obj* x_107; uint8 x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; 
lean::dec(x_10);
x_66 = lean::cnstr_get(x_7, 1);
lean::inc(x_66);
lean::dec(x_7);
x_69 = lean::cnstr_get(x_66, 2);
lean::inc(x_69);
lean::dec(x_66);
x_72 = lean::cnstr_get(x_2, 4);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_72, 6);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_2, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_2, 1);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_2, 2);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_2, 3);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_72, 0);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_72, 1);
lean::inc(x_86);
x_88 = lean::cnstr_get(x_72, 2);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_72, 3);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_72, 4);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_72, 5);
lean::inc(x_94);
lean::dec(x_72);
x_97 = lean::cnstr_get(x_2, 5);
lean::inc(x_97);
x_99 = lean::cnstr_get(x_2, 6);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_2, 7);
lean::inc(x_101);
x_103 = lean::cnstr_get(x_2, 8);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_2, 9);
lean::inc(x_105);
x_107 = lean::cnstr_get(x_2, 10);
lean::inc(x_107);
lean::dec(x_2);
x_110 = 0;
x_111 = l_lean_kvmap_set__bool(x_74, x_69, x_110);
x_112 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_112, 0, x_84);
lean::cnstr_set(x_112, 1, x_86);
lean::cnstr_set(x_112, 2, x_88);
lean::cnstr_set(x_112, 3, x_90);
lean::cnstr_set(x_112, 4, x_92);
lean::cnstr_set(x_112, 5, x_94);
lean::cnstr_set(x_112, 6, x_111);
x_113 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_113, 0, x_76);
lean::cnstr_set(x_113, 1, x_78);
lean::cnstr_set(x_113, 2, x_80);
lean::cnstr_set(x_113, 3, x_82);
lean::cnstr_set(x_113, 4, x_112);
lean::cnstr_set(x_113, 5, x_97);
lean::cnstr_set(x_113, 6, x_99);
lean::cnstr_set(x_113, 7, x_101);
lean::cnstr_set(x_113, 8, x_103);
lean::cnstr_set(x_113, 9, x_105);
lean::cnstr_set(x_113, 10, x_107);
x_114 = lean::box(0);
x_115 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_115, 0, x_114);
lean::cnstr_set(x_115, 1, x_113);
x_116 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_116, 0, x_115);
return x_116;
}
}
case 1:
{
obj* x_117; obj* x_120; obj* x_123; obj* x_125; obj* x_127; obj* x_129; obj* x_131; obj* x_133; obj* x_135; obj* x_137; obj* x_139; obj* x_141; obj* x_143; obj* x_145; obj* x_148; obj* x_150; obj* x_152; obj* x_154; obj* x_156; obj* x_158; obj* x_161; obj* x_164; 
x_117 = lean::cnstr_get(x_7, 1);
lean::inc(x_117);
lean::dec(x_7);
x_120 = lean::cnstr_get(x_117, 2);
lean::inc(x_120);
lean::dec(x_117);
x_123 = lean::cnstr_get(x_2, 4);
lean::inc(x_123);
x_125 = lean::cnstr_get(x_123, 6);
lean::inc(x_125);
x_127 = lean::cnstr_get(x_2, 0);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_2, 1);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_2, 2);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_2, 3);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_123, 0);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_123, 1);
lean::inc(x_137);
x_139 = lean::cnstr_get(x_123, 2);
lean::inc(x_139);
x_141 = lean::cnstr_get(x_123, 3);
lean::inc(x_141);
x_143 = lean::cnstr_get(x_123, 4);
lean::inc(x_143);
x_145 = lean::cnstr_get(x_123, 5);
lean::inc(x_145);
lean::dec(x_123);
x_148 = lean::cnstr_get(x_2, 5);
lean::inc(x_148);
x_150 = lean::cnstr_get(x_2, 6);
lean::inc(x_150);
x_152 = lean::cnstr_get(x_2, 7);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_2, 8);
lean::inc(x_154);
x_156 = lean::cnstr_get(x_2, 9);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_2, 10);
lean::inc(x_158);
lean::dec(x_2);
x_161 = lean::cnstr_get(x_8, 0);
lean::inc(x_161);
lean::dec(x_8);
x_164 = l_lean_parser_string__lit_view_value(x_161);
if (lean::obj_tag(x_164) == 0)
{
obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; 
lean::dec(x_120);
x_166 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_166, 0, x_135);
lean::cnstr_set(x_166, 1, x_137);
lean::cnstr_set(x_166, 2, x_139);
lean::cnstr_set(x_166, 3, x_141);
lean::cnstr_set(x_166, 4, x_143);
lean::cnstr_set(x_166, 5, x_145);
lean::cnstr_set(x_166, 6, x_125);
x_167 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_167, 0, x_127);
lean::cnstr_set(x_167, 1, x_129);
lean::cnstr_set(x_167, 2, x_131);
lean::cnstr_set(x_167, 3, x_133);
lean::cnstr_set(x_167, 4, x_166);
lean::cnstr_set(x_167, 5, x_148);
lean::cnstr_set(x_167, 6, x_150);
lean::cnstr_set(x_167, 7, x_152);
lean::cnstr_set(x_167, 8, x_154);
lean::cnstr_set(x_167, 9, x_156);
lean::cnstr_set(x_167, 10, x_158);
x_168 = lean::box(0);
x_169 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_169, 0, x_168);
lean::cnstr_set(x_169, 1, x_167);
x_170 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_170, 0, x_169);
return x_170;
}
else
{
obj* x_171; obj* x_174; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
x_171 = lean::cnstr_get(x_164, 0);
lean::inc(x_171);
lean::dec(x_164);
x_174 = l_lean_kvmap_set__string(x_125, x_120, x_171);
x_175 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_175, 0, x_135);
lean::cnstr_set(x_175, 1, x_137);
lean::cnstr_set(x_175, 2, x_139);
lean::cnstr_set(x_175, 3, x_141);
lean::cnstr_set(x_175, 4, x_143);
lean::cnstr_set(x_175, 5, x_145);
lean::cnstr_set(x_175, 6, x_174);
x_176 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_176, 0, x_127);
lean::cnstr_set(x_176, 1, x_129);
lean::cnstr_set(x_176, 2, x_131);
lean::cnstr_set(x_176, 3, x_133);
lean::cnstr_set(x_176, 4, x_175);
lean::cnstr_set(x_176, 5, x_148);
lean::cnstr_set(x_176, 6, x_150);
lean::cnstr_set(x_176, 7, x_152);
lean::cnstr_set(x_176, 8, x_154);
lean::cnstr_set(x_176, 9, x_156);
lean::cnstr_set(x_176, 10, x_158);
x_177 = lean::box(0);
x_178 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_178, 0, x_177);
lean::cnstr_set(x_178, 1, x_176);
x_179 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_179, 0, x_178);
return x_179;
}
}
default:
{
obj* x_180; obj* x_183; obj* x_186; obj* x_188; obj* x_190; obj* x_192; obj* x_194; obj* x_196; obj* x_198; obj* x_200; obj* x_202; obj* x_204; obj* x_206; obj* x_208; obj* x_211; obj* x_213; obj* x_215; obj* x_217; obj* x_219; obj* x_221; obj* x_224; obj* x_227; obj* x_228; obj* x_229; obj* x_230; obj* x_231; obj* x_232; obj* x_233; 
x_180 = lean::cnstr_get(x_7, 1);
lean::inc(x_180);
lean::dec(x_7);
x_183 = lean::cnstr_get(x_180, 2);
lean::inc(x_183);
lean::dec(x_180);
x_186 = lean::cnstr_get(x_2, 4);
lean::inc(x_186);
x_188 = lean::cnstr_get(x_186, 6);
lean::inc(x_188);
x_190 = lean::cnstr_get(x_2, 0);
lean::inc(x_190);
x_192 = lean::cnstr_get(x_2, 1);
lean::inc(x_192);
x_194 = lean::cnstr_get(x_2, 2);
lean::inc(x_194);
x_196 = lean::cnstr_get(x_2, 3);
lean::inc(x_196);
x_198 = lean::cnstr_get(x_186, 0);
lean::inc(x_198);
x_200 = lean::cnstr_get(x_186, 1);
lean::inc(x_200);
x_202 = lean::cnstr_get(x_186, 2);
lean::inc(x_202);
x_204 = lean::cnstr_get(x_186, 3);
lean::inc(x_204);
x_206 = lean::cnstr_get(x_186, 4);
lean::inc(x_206);
x_208 = lean::cnstr_get(x_186, 5);
lean::inc(x_208);
lean::dec(x_186);
x_211 = lean::cnstr_get(x_2, 5);
lean::inc(x_211);
x_213 = lean::cnstr_get(x_2, 6);
lean::inc(x_213);
x_215 = lean::cnstr_get(x_2, 7);
lean::inc(x_215);
x_217 = lean::cnstr_get(x_2, 8);
lean::inc(x_217);
x_219 = lean::cnstr_get(x_2, 9);
lean::inc(x_219);
x_221 = lean::cnstr_get(x_2, 10);
lean::inc(x_221);
lean::dec(x_2);
x_224 = lean::cnstr_get(x_8, 0);
lean::inc(x_224);
lean::dec(x_8);
x_227 = l_lean_parser_number_view_to__nat___main(x_224);
x_228 = l_lean_kvmap_set__nat(x_188, x_183, x_227);
x_229 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_229, 0, x_198);
lean::cnstr_set(x_229, 1, x_200);
lean::cnstr_set(x_229, 2, x_202);
lean::cnstr_set(x_229, 3, x_204);
lean::cnstr_set(x_229, 4, x_206);
lean::cnstr_set(x_229, 5, x_208);
lean::cnstr_set(x_229, 6, x_228);
x_230 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_230, 0, x_190);
lean::cnstr_set(x_230, 1, x_192);
lean::cnstr_set(x_230, 2, x_194);
lean::cnstr_set(x_230, 3, x_196);
lean::cnstr_set(x_230, 4, x_229);
lean::cnstr_set(x_230, 5, x_211);
lean::cnstr_set(x_230, 6, x_213);
lean::cnstr_set(x_230, 7, x_215);
lean::cnstr_set(x_230, 8, x_217);
lean::cnstr_set(x_230, 9, x_219);
lean::cnstr_set(x_230, 10, x_221);
x_231 = lean::box(0);
x_232 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_232, 0, x_231);
lean::cnstr_set(x_232, 1, x_230);
x_233 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_233, 0, x_232);
return x_233;
}
}
}
}
obj* l_lean_elaborator_set__option_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_set__option_elaborate(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_18; obj* x_19; uint8 x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
lean::dec(x_6);
x_14 = l_lean_parser_syntax_get__pos(x_0);
x_15 = lean::mk_nat_obj(0u);
x_16 = l_option_get__or__else___main___rarg(x_14, x_15);
lean::dec(x_14);
x_18 = l_lean_file__map_to__position(x_11, x_16);
x_19 = lean::box(0);
x_20 = 2;
x_21 = l_string_join___closed__1;
x_22 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_22, 0, x_9);
lean::cnstr_set(x_22, 1, x_18);
lean::cnstr_set(x_22, 2, x_19);
lean::cnstr_set(x_22, 3, x_21);
lean::cnstr_set(x_22, 4, x_1);
lean::cnstr_set_scalar(x_22, sizeof(void*)*5, x_20);
x_23 = x_22;
x_24 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
x_25 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
return x_25;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___boxed), 6, 0);
return x_1;
}
}
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(x_0, x_1, x_2, x_4);
return x_7;
}
}
obj* _init_l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_command_elaborate), 3, 0);
return x_0;
}
}
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 1);
lean::inc(x_12);
lean::dec(x_0);
x_15 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1;
lean::inc(x_2);
lean::inc(x_1);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg___boxed), 6, 5);
lean::closure_set(x_18, 0, x_10);
lean::closure_set(x_18, 1, x_15);
lean::closure_set(x_18, 2, x_1);
lean::closure_set(x_18, 3, x_2);
lean::closure_set(x_18, 4, x_3);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1), 4, 3);
lean::closure_set(x_19, 0, x_12);
lean::closure_set(x_19, 1, x_1);
lean::closure_set(x_19, 2, x_2);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_20, 0, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_21, 0, x_18);
lean::closure_set(x_21, 1, x_20);
return x_21;
}
}
}
obj* _init_l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("no_kind.elaborate: unreachable");
return x_0;
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_6; obj* x_7; 
x_6 = l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1;
x_7 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_1, x_6, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_2);
return x_7;
}
else
{
obj* x_11; obj* x_14; obj* x_17; obj* x_18; 
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
x_17 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(x_14, x_2, x_3, x_4);
x_18 = lean::apply_1(x_17, x_5);
return x_18;
}
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_3);
x_9 = l_lean_parser_syntax_as__node___main(x_3);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate___lambda__1___boxed), 6, 5);
lean::closure_set(x_10, 0, x_9);
lean::closure_set(x_10, 1, x_3);
lean::closure_set(x_10, 2, x_0);
lean::closure_set(x_10, 3, x_1);
lean::closure_set(x_10, 4, x_5);
return x_10;
}
}
obj* l_lean_elaborator_no__kind_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate___lambda__2), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_4);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_elaborator_no__kind_elaborate___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__1(uint8 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = l_lean_elaborator_commands_elaborate___main(x_0, x_1, x_2, x_4);
return x_7;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__2(uint8 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___boxed), 2, 1);
lean::closure_set(x_7, 0, x_4);
x_8 = lean::box(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__1___boxed), 4, 3);
lean::closure_set(x_9, 0, x_8);
lean::closure_set(x_9, 1, x_1);
lean::closure_set(x_9, 2, x_2);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_11, 0, x_7);
lean::closure_set(x_11, 1, x_10);
return x_11;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__3___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("end");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__3___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("module");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("eoi");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__3___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of input, expected 'end'");
return x_0;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__3___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'end', there is no open scope to end");
return x_0;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__3(obj* x_0, obj* x_1, uint8 x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_12; 
x_4 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_set(x_3, 0, lean::box(0));
 lean::cnstr_set(x_3, 1, lean::box(0));
 x_8 = x_3;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_3);
 x_8 = lean::box(0);
}
lean::inc(x_4);
x_12 = l_lean_parser_syntax_as__node___main(x_4);
if (lean::obj_tag(x_12) == 0)
{
obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_4);
lean::dec(x_8);
x_15 = lean::box(0);
lean::inc(x_1);
lean::inc(x_0);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1), 5, 4);
lean::closure_set(x_18, 0, x_15);
lean::closure_set(x_18, 1, x_0);
lean::closure_set(x_18, 2, x_1);
lean::closure_set(x_18, 3, x_6);
x_19 = lean::box(x_2);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__2___boxed), 4, 3);
lean::closure_set(x_20, 0, x_19);
lean::closure_set(x_20, 1, x_0);
lean::closure_set(x_20, 2, x_1);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_21, 0, x_20);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_22, 0, x_18);
lean::closure_set(x_22, 1, x_21);
return x_22;
}
else
{
obj* x_23; obj* x_26; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
lean::dec(x_12);
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
lean::dec(x_23);
x_9 = x_26;
goto lbl_10;
}
lbl_10:
{
obj* x_29; uint8 x_30; 
x_29 = l_lean_elaborator_commands_elaborate___main___lambda__3___closed__1;
x_30 = lean_name_dec_eq(x_9, x_29);
if (x_30 == 0)
{
obj* x_31; uint8 x_32; 
x_31 = l_lean_elaborator_commands_elaborate___main___lambda__3___closed__2;
x_32 = lean_name_dec_eq(x_9, x_31);
lean::dec(x_9);
if (x_32 == 0)
{
obj* x_36; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_4);
lean::dec(x_8);
x_36 = lean::box(0);
lean::inc(x_1);
lean::inc(x_0);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1), 5, 4);
lean::closure_set(x_39, 0, x_36);
lean::closure_set(x_39, 1, x_0);
lean::closure_set(x_39, 2, x_1);
lean::closure_set(x_39, 3, x_6);
x_40 = lean::box(x_2);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__2___boxed), 4, 3);
lean::closure_set(x_41, 0, x_40);
lean::closure_set(x_41, 1, x_0);
lean::closure_set(x_41, 2, x_1);
x_42 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_42, 0, x_41);
x_43 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_43, 0, x_39);
lean::closure_set(x_43, 1, x_42);
return x_43;
}
else
{
if (x_2 == 0)
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
x_47 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_8;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_6);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_48);
x_50 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_50, 0, x_49);
return x_50;
}
else
{
obj* x_52; obj* x_53; 
lean::dec(x_8);
x_52 = l_lean_elaborator_commands_elaborate___main___lambda__3___closed__3;
x_53 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___boxed), 6, 5);
lean::closure_set(x_53, 0, x_4);
lean::closure_set(x_53, 1, x_52);
lean::closure_set(x_53, 2, x_0);
lean::closure_set(x_53, 3, x_1);
lean::closure_set(x_53, 4, x_6);
return x_53;
}
}
}
else
{
lean::dec(x_9);
if (x_2 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_8);
x_56 = l_lean_elaborator_commands_elaborate___main___lambda__3___closed__4;
x_57 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___boxed), 6, 5);
lean::closure_set(x_57, 0, x_4);
lean::closure_set(x_57, 1, x_56);
lean::closure_set(x_57, 2, x_0);
lean::closure_set(x_57, 3, x_1);
lean::closure_set(x_57, 4, x_6);
return x_57;
}
else
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
x_61 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_62 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_62 = x_8;
}
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_6);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
x_64 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_64, 0, x_63);
return x_64;
}
}
}
}
}
obj* l_lean_elaborator_commands_elaborate___main(uint8 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = lean::box(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__3___boxed), 4, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_2);
lean::closure_set(x_6, 2, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_4);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_0);
x_5 = l_lean_elaborator_commands_elaborate___main___lambda__1(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_0);
x_5 = l_lean_elaborator_commands_elaborate___main___lambda__2(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_2);
x_5 = l_lean_elaborator_commands_elaborate___main___lambda__3(x_0, x_1, x_4, x_3);
return x_5;
}
}
obj* l_lean_elaborator_commands_elaborate___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_0);
x_5 = l_lean_elaborator_commands_elaborate___main(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_elaborator_commands_elaborate(uint8 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_commands_elaborate___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_lean_elaborator_commands_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_0);
x_5 = l_lean_elaborator_commands_elaborate(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_elaborator_end__scope___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_6 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::apply_1(x_0, x_2);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_10, 0, x_9);
return x_10;
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of ");
return x_0;
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__2___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(", expected name '");
return x_0;
}
}
obj* l_lean_elaborator_end__scope___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; 
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 lean::cnstr_set(x_4, 1, lean::box(0));
 x_9 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
x_17 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_9;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_7);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_20, 0, x_19);
return x_20;
}
else
{
obj* x_22; 
lean::dec(x_9);
x_22 = lean::box(0);
x_10 = x_22;
goto lbl_11;
}
}
else
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_25; 
lean::dec(x_12);
lean::dec(x_9);
x_25 = lean::box(0);
x_10 = x_25;
goto lbl_11;
}
else
{
obj* x_26; obj* x_29; obj* x_30; uint8 x_31; 
x_26 = lean::cnstr_get(x_12, 0);
lean::inc(x_26);
lean::dec(x_12);
x_29 = lean::cnstr_get(x_1, 0);
x_30 = l_lean_elaborator_mangle__ident(x_26);
x_31 = lean_name_dec_eq(x_30, x_29);
lean::dec(x_30);
if (x_31 == 0)
{
obj* x_34; 
lean::dec(x_9);
x_34 = lean::box(0);
x_10 = x_34;
goto lbl_11;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
x_38 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_9;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_7);
x_40 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_40, 0, x_39);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_41, 0, x_40);
return x_41;
}
}
}
lbl_11:
{
obj* x_43; obj* x_44; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_10);
x_43 = l_lean_parser_command_end_has__view;
x_44 = lean::cnstr_get(x_43, 1);
lean::inc(x_44);
lean::dec(x_43);
x_47 = lean::apply_1(x_44, x_5);
x_48 = l_lean_elaborator_end__scope___lambda__2___closed__1;
x_49 = lean::string_append(x_48, x_0);
x_50 = l_lean_elaborator_end__scope___lambda__2___closed__2;
x_51 = lean::string_append(x_49, x_50);
x_52 = lean::box(0);
x_53 = l_option_get__or__else___main___rarg(x_1, x_52);
x_54 = l_lean_name_to__string___closed__1;
x_55 = l_lean_name_to__string__with__sep___main(x_54, x_53);
x_56 = lean::string_append(x_51, x_55);
lean::dec(x_55);
x_58 = l_char_has__repr___closed__1;
x_59 = lean::string_append(x_56, x_58);
x_60 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___boxed), 6, 5);
lean::closure_set(x_60, 0, x_47);
lean::closure_set(x_60, 1, x_59);
lean::closure_set(x_60, 2, x_2);
lean::closure_set(x_60, 3, x_3);
lean::closure_set(x_60, 4, x_7);
return x_60;
}
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__3___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_end_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_elaborator_end__scope___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_11 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 x_13 = x_0;
} else {
 lean::inc(x_11);
 lean::dec(x_0);
 x_13 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_14 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_14 = x_13;
}
lean::cnstr_set(x_14, 0, x_11);
x_15 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
return x_15;
}
else
{
obj* x_16; obj* x_19; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_16 = lean::cnstr_get(x_0, 0);
lean::inc(x_16);
lean::dec(x_0);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
lean::dec(x_16);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_22, 0, x_19);
x_23 = l_lean_elaborator_end__scope___lambda__3___closed__1;
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_24, 0, x_22);
lean::closure_set(x_24, 1, x_23);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__2___boxed), 5, 4);
lean::closure_set(x_25, 0, x_1);
lean::closure_set(x_25, 1, x_2);
lean::closure_set(x_25, 2, x_3);
lean::closure_set(x_25, 3, x_4);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_26, 0, x_25);
x_27 = l_coroutine_bind___main___rarg(x_24, x_26, x_5);
return x_27;
}
}
}
obj* l_lean_elaborator_end__scope(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; 
lean::inc(x_3);
x_6 = l_lean_elaborator_update__parser__config(x_3, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__3), 6, 5);
lean::closure_set(x_7, 0, x_6);
lean::closure_set(x_7, 1, x_0);
lean::closure_set(x_7, 2, x_1);
lean::closure_set(x_7, 3, x_2);
lean::closure_set(x_7, 4, x_3);
return x_7;
}
}
obj* l_lean_elaborator_end__scope___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_elaborator_end__scope___lambda__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
return x_5;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::apply_4(x_0, x_4, x_1, x_2, x_6);
return x_9;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_3);
lean::inc(x_2);
x_7 = lean::apply_3(x_0, x_2, x_3, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1), 4, 3);
lean::closure_set(x_8, 0, x_1);
lean::closure_set(x_8, 1, x_2);
lean::closure_set(x_8, 2, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = 1;
x_5 = l_lean_elaborator_commands_elaborate___main(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_2 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_4 = x_1;
} else {
 lean::inc(x_2);
 lean::dec(x_1);
 x_4 = lean::box(0);
}
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 5);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_2, 7);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_2, 8);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 9);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 10);
lean::inc(x_23);
lean::dec(x_2);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_7);
lean::cnstr_set(x_26, 2, x_9);
lean::cnstr_set(x_26, 3, x_11);
lean::cnstr_set(x_26, 4, x_0);
lean::cnstr_set(x_26, 5, x_13);
lean::cnstr_set(x_26, 6, x_15);
lean::cnstr_set(x_26, 7, x_17);
lean::cnstr_set(x_26, 8, x_19);
lean::cnstr_set(x_26, 9, x_21);
lean::cnstr_set(x_26, 10, x_23);
x_27 = lean::box(0);
if (lean::is_scalar(x_4)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_4;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_30, 0, x_29);
return x_30;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___boxed), 2, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_5 = lean::cnstr_get(x_0, 4);
lean::inc(x_5);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3___closed__1;
x_8 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_7, x_1, x_2, x_3, x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2), 2, 1);
lean::closure_set(x_9, 0, x_5);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = l_coroutine_bind___main___rarg(x_8, x_10, x_4);
return x_11;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1___boxed), 4, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3), 5, 4);
lean::closure_set(x_4, 0, x_2);
lean::closure_set(x_4, 1, x_3);
lean::closure_set(x_4, 2, x_0);
lean::closure_set(x_4, 3, x_1);
return x_4;
}
}
obj* _init_l_lean_elaborator_section_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("section");
return x_0;
}
}
obj* l_lean_elaborator_section_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; obj* x_10; obj* x_11; obj* x_12; 
x_7 = lean::cnstr_get(x_3, 1);
lean::inc(x_7);
lean::dec(x_3);
x_10 = lean::box(0);
x_11 = l_lean_elaborator_section_elaborate___lambda__1___closed__1;
x_12 = l_lean_elaborator_end__scope(x_11, x_10, x_1, x_2, x_7);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
lean::dec(x_3);
x_16 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_18 = x_4;
} else {
 lean::inc(x_16);
 lean::dec(x_4);
 x_18 = lean::box(0);
}
x_19 = l_lean_elaborator_mangle__ident(x_16);
if (lean::is_scalar(x_18)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_18;
}
lean::cnstr_set(x_20, 0, x_19);
x_21 = l_lean_elaborator_section_elaborate___lambda__1___closed__1;
x_22 = l_lean_elaborator_end__scope(x_21, x_20, x_1, x_2, x_13);
return x_22;
}
}
}
obj* l_lean_elaborator_section_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3), 5, 4);
lean::closure_set(x_11, 0, x_5);
lean::closure_set(x_11, 1, x_8);
lean::closure_set(x_11, 2, x_0);
lean::closure_set(x_11, 3, x_1);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate___lambda__1), 4, 3);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_0);
lean::closure_set(x_12, 2, x_1);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_section_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_section_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_elaborator_section_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = l_lean_elaborator_section_elaborate___closed__1;
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate___lambda__2), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_9; obj* x_11; obj* x_12; obj* x_13; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_9 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 x_11 = x_0;
} else {
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_12 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_12 = x_11;
}
lean::cnstr_set(x_12, 0, x_9);
x_13 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
else
{
obj* x_14; obj* x_17; obj* x_19; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_43; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_63; obj* x_65; obj* x_67; obj* x_70; uint8 x_71; obj* x_72; obj* x_73; 
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
lean::dec(x_0);
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_14, 1);
lean::inc(x_19);
lean::dec(x_14);
x_22 = lean::cnstr_get(x_19, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_19, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_19, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_19, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_19, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_30, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_30, 1);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_30, 2);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_30, 3);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_1, 1);
lean::inc(x_40);
lean::dec(x_1);
x_43 = lean::cnstr_get(x_40, 2);
lean::inc(x_43);
lean::dec(x_40);
x_46 = l_lean_name_append___main(x_17, x_43);
lean::dec(x_17);
x_48 = lean::cnstr_get(x_30, 4);
lean::inc(x_48);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_46);
lean::cnstr_set(x_50, 1, x_48);
x_51 = lean::cnstr_get(x_30, 5);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_30, 6);
lean::inc(x_53);
lean::dec(x_30);
x_56 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_56, 0, x_32);
lean::cnstr_set(x_56, 1, x_34);
lean::cnstr_set(x_56, 2, x_36);
lean::cnstr_set(x_56, 3, x_38);
lean::cnstr_set(x_56, 4, x_50);
lean::cnstr_set(x_56, 5, x_51);
lean::cnstr_set(x_56, 6, x_53);
x_57 = lean::cnstr_get(x_19, 5);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_19, 6);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_19, 7);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_19, 8);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_19, 9);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_19, 10);
lean::inc(x_67);
lean::dec(x_19);
x_70 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_70, 0, x_22);
lean::cnstr_set(x_70, 1, x_24);
lean::cnstr_set(x_70, 2, x_26);
lean::cnstr_set(x_70, 3, x_28);
lean::cnstr_set(x_70, 4, x_56);
lean::cnstr_set(x_70, 5, x_57);
lean::cnstr_set(x_70, 6, x_59);
lean::cnstr_set(x_70, 7, x_61);
lean::cnstr_set(x_70, 8, x_63);
lean::cnstr_set(x_70, 9, x_65);
lean::cnstr_set(x_70, 10, x_67);
x_71 = 1;
x_72 = l_lean_elaborator_commands_elaborate___main(x_71, x_2, x_3, x_70);
x_73 = lean::apply_1(x_72, x_4);
return x_73;
}
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = l_lean_elaborator_get__namespace___rarg(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1), 5, 4);
lean::closure_set(x_6, 0, x_5);
lean::closure_set(x_6, 1, x_0);
lean::closure_set(x_6, 2, x_2);
lean::closure_set(x_6, 3, x_3);
return x_6;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_5 = lean::cnstr_get(x_0, 4);
lean::inc(x_5);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3___closed__1;
x_8 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_7, x_1, x_2, x_3, x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2), 2, 1);
lean::closure_set(x_9, 0, x_5);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = l_coroutine_bind___main___rarg(x_8, x_10, x_4);
return x_11;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2___boxed), 5, 1);
lean::closure_set(x_4, 0, x_0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3), 5, 4);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_1);
lean::closure_set(x_5, 3, x_2);
return x_5;
}
}
obj* _init_l_lean_elaborator_namespace_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("namespace");
return x_0;
}
}
obj* l_lean_elaborator_namespace_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 2);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_10);
x_14 = l_lean_elaborator_namespace_elaborate___lambda__1___closed__1;
x_15 = l_lean_elaborator_end__scope(x_14, x_13, x_1, x_2, x_4);
return x_15;
}
}
obj* l_lean_elaborator_namespace_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_1);
lean::inc(x_0);
lean::inc(x_3);
x_11 = l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(x_3, x_0, x_1, x_5);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate___lambda__1), 4, 3);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_0);
lean::closure_set(x_12, 2, x_1);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_namespace_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_namespace_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_elaborator_namespace_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = l_lean_elaborator_namespace_elaborate___closed__1;
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate___lambda__2), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
return x_5;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_lean_name_quick__lt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = l_lean_name_quick__lt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = l_lean_name_quick__lt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = l_lean_name_quick__lt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_32);
lean::dec(x_30);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_rbnode_is__red___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_48 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_48 = x_36;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_30);
lean::cnstr_set(x_48, 2, x_32);
lean::cnstr_set(x_48, 3, x_47);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_6);
x_49 = x_48;
x_50 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_34, x_1, x_2);
x_51 = l_rbnode_balance2___main___rarg(x_49, x_50);
return x_51;
}
}
}
else
{
uint8 x_52; 
x_52 = l_rbnode_is__red___main___rarg(x_28);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_54 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_54 = x_36;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_30);
lean::cnstr_set(x_54, 2, x_32);
lean::cnstr_set(x_54, 3, x_34);
lean::cnstr_set_scalar(x_54, sizeof(void*)*4, x_6);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_57 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_57 = x_36;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_30);
lean::cnstr_set(x_57, 2, x_32);
lean::cnstr_set(x_57, 3, x_34);
lean::cnstr_set_scalar(x_57, sizeof(void*)*4, x_6);
x_58 = x_57;
x_59 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_28, x_1, x_2);
x_60 = l_rbnode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l_rbnode_is__red___main___rarg(x_0);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_0, x_1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_0, x_1, x_2);
x_6 = l_rbnode_set__black___main___rarg(x_5);
return x_6;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_elaborators___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(x_0, x_7, x_9);
x_0 = x_12;
x_1 = x_4;
goto _start;
}
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_module_header_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_notation_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_reserve__notation_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_universe_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_variables_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_include_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11___boxed), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_attribute_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_open_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17___boxed), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_export_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19___boxed), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_check_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_init__quot_elaborate___closed__1;
x_8 = l_lean_elaborator_old__elab__command(x_2, x_7, x_0, x_4);
lean::dec(x_2);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_10, 0, x_8);
return x_10;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_set__option_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25___boxed), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_0 = l_lean_parser_module_header;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2___boxed), 3, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = l_lean_parser_command_notation;
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4___boxed), 3, 0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = l_lean_parser_command_reserve__notation;
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6___boxed), 3, 0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = l_lean_parser_command_universe;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8___boxed), 3, 0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = l_lean_parser_no__kind;
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate), 3, 0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = l_lean_parser_command_section;
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate), 3, 0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_lean_parser_command_namespace;
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate), 3, 0);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_lean_parser_command_variables;
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10___boxed), 3, 0);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_lean_parser_command_include;
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12___boxed), 3, 0);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_lean_parser_command_declaration;
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14___boxed), 3, 0);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_lean_parser_command_attribute;
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16___boxed), 3, 0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_lean_parser_command_open;
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18___boxed), 3, 0);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_34);
x_36 = l_lean_parser_command_export;
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20___boxed), 3, 0);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
x_39 = l_lean_parser_command_check;
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22___boxed), 3, 0);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_lean_parser_command_init__quot;
x_43 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24___boxed), 3, 0);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_43);
x_45 = l_lean_parser_command_set__option;
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26___boxed), 3, 0);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_45);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::box(0);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_48);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_44);
lean::cnstr_set(x_50, 1, x_49);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_41);
lean::cnstr_set(x_51, 1, x_50);
x_52 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_52, 0, x_38);
lean::cnstr_set(x_52, 1, x_51);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_35);
lean::cnstr_set(x_53, 1, x_52);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_32);
lean::cnstr_set(x_54, 1, x_53);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_29);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_26);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_23);
lean::cnstr_set(x_57, 1, x_56);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_20);
lean::cnstr_set(x_58, 1, x_57);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_17);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_14);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_11);
lean::cnstr_set(x_61, 1, x_60);
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_8);
lean::cnstr_set(x_62, 1, x_61);
x_63 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_63, 0, x_5);
lean::cnstr_set(x_63, 1, x_62);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_2);
lean::cnstr_set(x_64, 1, x_63);
x_65 = lean::box(0);
x_66 = l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(x_65, x_64);
return x_66;
}
}
obj* _init_l_lean_elaborator_elaborators() {
_start:
{
obj* x_0; 
x_0 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1;
return x_0;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
uint8 l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
obj* x_3; obj* x_4; uint8 x_5; 
x_3 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
x_5 = lean_name_dec_eq(x_0, x_3);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_0, x_4);
if (x_6 == 0)
{
uint8 x_7; 
x_7 = 0;
return x_7;
}
else
{
uint8 x_8; 
x_8 = 1;
return x_8;
}
}
else
{
uint8 x_9; 
x_9 = 1;
return x_9;
}
}
}
}
uint8 l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; uint8 x_7; 
x_3 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
x_5 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_5, 2);
x_7 = lean_name_dec_eq(x_6, x_0);
if (x_7 == 0)
{
x_1 = x_4;
goto _start;
}
else
{
uint8 x_9; 
x_9 = 1;
return x_9;
}
}
}
}
uint8 l_lean_elaborator_is__open__namespace___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::box(0);
x_3 = lean_name_dec_eq(x_1, x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; uint8 x_6; 
x_4 = lean::cnstr_get(x_0, 4);
x_5 = lean::cnstr_get(x_4, 4);
x_6 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; uint8 x_8; 
x_7 = lean::cnstr_get(x_4, 5);
x_8 = l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(x_1, x_7);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = 0;
return x_9;
}
else
{
uint8 x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8 x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8 x_12; 
x_12 = 1;
return x_12;
}
}
}
obj* l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_elaborator_is__open__namespace___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_is__open__namespace___main(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
uint8 l_lean_elaborator_is__open__namespace(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_lean_elaborator_is__open__namespace___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_is__open__namespace___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_is__open__namespace(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
uint8 l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
obj* x_3; obj* x_4; obj* x_5; uint8 x_6; 
x_3 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
x_5 = lean::cnstr_get(x_3, 2);
x_6 = lean_name_dec_eq(x_0, x_5);
if (x_6 == 0)
{
x_1 = x_4;
goto _start;
}
else
{
uint8 x_8; 
x_8 = 1;
return x_8;
}
}
}
}
obj* l_lean_elaborator_match__open__spec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 2);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_7; obj* x_10; obj* x_12; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_4, 2);
lean::inc(x_7);
lean::dec(x_4);
x_10 = l_lean_name_append___main(x_7, x_0);
lean::dec(x_7);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_18; uint8 x_21; 
x_13 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 x_15 = x_2;
} else {
 lean::inc(x_13);
 lean::dec(x_2);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 2);
lean::inc(x_18);
lean::dec(x_16);
x_21 = lean_name_dec_eq(x_0, x_18);
lean::dec(x_18);
if (x_21 == 0)
{
obj* x_23; uint8 x_26; 
x_23 = lean::cnstr_get(x_13, 2);
lean::inc(x_23);
lean::dec(x_13);
x_26 = l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(x_0, x_23);
lean::dec(x_23);
if (x_26 == 0)
{
obj* x_31; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_15);
x_31 = lean::box(0);
return x_31;
}
else
{
obj* x_32; obj* x_35; obj* x_38; obj* x_40; 
x_32 = lean::cnstr_get(x_1, 0);
lean::inc(x_32);
lean::dec(x_1);
x_35 = lean::cnstr_get(x_32, 2);
lean::inc(x_35);
lean::dec(x_32);
x_38 = l_lean_name_append___main(x_35, x_0);
lean::dec(x_35);
if (lean::is_scalar(x_15)) {
 x_40 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_40 = x_15;
}
lean::cnstr_set(x_40, 0, x_38);
return x_40;
}
}
else
{
obj* x_42; obj* x_45; obj* x_48; obj* x_50; 
lean::dec(x_13);
x_42 = lean::cnstr_get(x_1, 0);
lean::inc(x_42);
lean::dec(x_1);
x_45 = lean::cnstr_get(x_42, 2);
lean::inc(x_45);
lean::dec(x_42);
x_48 = l_lean_name_append___main(x_45, x_0);
lean::dec(x_45);
if (lean::is_scalar(x_15)) {
 x_50 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_50 = x_15;
}
lean::cnstr_set(x_50, 0, x_48);
return x_50;
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; uint8 x_12; 
x_4 = lean::cnstr_get(x_2, 0);
x_6 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_8 = x_2;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_2);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_1, 8);
lean::inc(x_0);
x_11 = l_lean_name_append___main(x_4, x_0);
x_12 = lean_environment_contains(x_9, x_11);
lean::dec(x_11);
if (x_12 == 0)
{
lean::dec(x_8);
lean::dec(x_4);
x_2 = x_6;
goto _start;
}
else
{
obj* x_17; obj* x_18; 
x_17 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_1, x_6);
if (lean::is_scalar(x_8)) {
 x_18 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_18 = x_8;
}
lean::cnstr_set(x_18, 0, x_4);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; uint8 x_8; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_6 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_0, 8);
x_8 = lean_environment_contains(x_7, x_2);
if (x_8 == 0)
{
lean::dec(x_6);
lean::dec(x_2);
x_1 = x_4;
goto _start;
}
else
{
obj* x_12; obj* x_13; 
x_12 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_0, x_4);
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_2);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; uint8 x_9; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_6 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = l_lean_elaborator_is__open__namespace___main(x_0, x_7);
lean::dec(x_7);
if (x_9 == 0)
{
lean::dec(x_6);
lean::dec(x_2);
x_1 = x_4;
goto _start;
}
else
{
obj* x_14; obj* x_15; 
x_14 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_0, x_4);
if (lean::is_scalar(x_6)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_6;
}
lean::cnstr_set(x_15, 0, x_2);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; uint8 x_8; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_6 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_0, 8);
x_8 = lean_environment_contains(x_7, x_2);
if (x_8 == 0)
{
lean::dec(x_6);
lean::dec(x_2);
x_1 = x_4;
goto _start;
}
else
{
obj* x_12; obj* x_13; 
x_12 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_0, x_4);
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_2);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
}
obj* l_lean_elaborator_resolve__context___main___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = l_lean_elaborator_match__open__spec(x_0, x_2);
return x_5;
}
}
obj* _init_l_lean_elaborator_resolve__context___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_root_");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_resolve__context___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 4);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 2);
lean::inc(x_5);
x_7 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_5, x_0);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_3, 4);
lean::inc(x_8);
lean::inc(x_0);
x_11 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_2, x_8);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; uint8 x_18; obj* x_21; obj* x_22; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_12 = l_lean_elaborator_resolve__context___main___closed__1;
x_13 = lean::box(0);
lean::inc(x_0);
x_15 = l_lean_name_replace__prefix___main(x_0, x_12, x_13);
x_16 = lean::cnstr_get(x_2, 8);
lean::inc(x_16);
x_18 = lean_environment_contains(x_16, x_15);
lean::dec(x_16);
lean::inc(x_0);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_match__open__spec), 2, 1);
lean::closure_set(x_21, 0, x_0);
x_22 = lean::cnstr_get(x_3, 5);
lean::inc(x_22);
lean::dec(x_3);
x_25 = l_list_filter__map___main___rarg(x_21, x_22);
x_26 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_2, x_25);
x_27 = lean::cnstr_get(x_2, 3);
lean::inc(x_27);
x_29 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_2, x_27);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_resolve__context___main___lambda__1), 2, 1);
lean::closure_set(x_30, 0, x_0);
x_31 = l_list_filter__map___main___rarg(x_30, x_29);
x_32 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_2, x_31);
if (x_18 == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_15);
x_34 = l_list_append___rarg(x_11, x_26);
x_35 = l_list_append___rarg(x_34, x_32);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_2);
x_37 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_15);
lean::cnstr_set(x_38, 1, x_11);
x_39 = l_list_append___rarg(x_38, x_26);
x_40 = l_list_append___rarg(x_39, x_32);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_2);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_41);
return x_42;
}
}
else
{
obj* x_44; obj* x_46; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::dec(x_3);
x_44 = lean::cnstr_get(x_11, 0);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 1);
 x_46 = x_11;
} else {
 lean::inc(x_44);
 lean::dec(x_11);
 x_46 = lean::box(0);
}
x_47 = l_lean_name_append___main(x_44, x_0);
lean::dec(x_44);
x_49 = lean::box(0);
if (lean::is_scalar(x_46)) {
 x_50 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_50 = x_46;
}
lean::cnstr_set(x_50, 0, x_47);
lean::cnstr_set(x_50, 1, x_49);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_2);
x_52 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_52, 0, x_51);
return x_52;
}
}
else
{
obj* x_55; obj* x_58; obj* x_60; obj* x_61; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_3);
lean::dec(x_0);
x_55 = lean::cnstr_get(x_7, 0);
lean::inc(x_55);
lean::dec(x_7);
x_58 = lean::cnstr_get(x_55, 1);
if (lean::is_exclusive(x_55)) {
 lean::cnstr_release(x_55, 0);
 x_60 = x_55;
} else {
 lean::inc(x_58);
 lean::dec(x_55);
 x_60 = lean::box(0);
}
x_61 = lean::cnstr_get(x_58, 0);
lean::inc(x_61);
lean::dec(x_58);
x_64 = lean::box(0);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set(x_65, 1, x_64);
if (lean::is_scalar(x_60)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_60;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_2);
x_67 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_67, 0, x_66);
return x_67;
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_lean_elaborator_resolve__context___main___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_resolve__context___main(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_elaborator_resolve__context(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_resolve__context___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_resolve__context___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_resolve__context(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 0);
x_8 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_10 = x_0;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_0);
 x_10 = lean::box(0);
}
x_11 = l_lean_elaborator_preresolve___main(x_6, x_1, x_2);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_8);
lean::dec(x_10);
x_14 = lean::cnstr_get(x_11, 0);
if (lean::is_exclusive(x_11)) {
 x_16 = x_11;
} else {
 lean::inc(x_14);
 lean::dec(x_11);
 x_16 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_21; obj* x_23; obj* x_26; 
x_18 = lean::cnstr_get(x_11, 0);
lean::inc(x_18);
lean::dec(x_11);
x_21 = lean::cnstr_get(x_18, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_18, 1);
lean::inc(x_23);
lean::dec(x_18);
x_26 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_8, x_1, x_23);
if (lean::obj_tag(x_26) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_10);
lean::dec(x_21);
x_29 = lean::cnstr_get(x_26, 0);
if (lean::is_exclusive(x_26)) {
 x_31 = x_26;
} else {
 lean::inc(x_29);
 lean::dec(x_26);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_33 = lean::cnstr_get(x_26, 0);
if (lean::is_exclusive(x_26)) {
 x_35 = x_26;
} else {
 lean::inc(x_33);
 lean::dec(x_26);
 x_35 = lean::box(0);
}
x_36 = lean::cnstr_get(x_33, 0);
x_38 = lean::cnstr_get(x_33, 1);
if (lean::is_exclusive(x_33)) {
 x_40 = x_33;
} else {
 lean::inc(x_36);
 lean::inc(x_38);
 lean::dec(x_33);
 x_40 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_41 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_41 = x_10;
}
lean::cnstr_set(x_41, 0, x_21);
lean::cnstr_set(x_41, 1, x_36);
if (lean::is_scalar(x_40)) {
 x_42 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_42 = x_40;
}
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_38);
if (lean::is_scalar(x_35)) {
 x_43 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_43 = x_35;
}
lean::cnstr_set(x_43, 0, x_42);
return x_43;
}
}
}
}
}
obj* l_lean_elaborator_preresolve___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 1:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; 
x_3 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 x_5 = x_0;
} else {
 lean::inc(x_3);
 lean::dec(x_0);
 x_5 = lean::box(0);
}
lean::inc(x_3);
x_7 = l_lean_elaborator_mangle__ident(x_3);
x_8 = l_lean_elaborator_resolve__context___main(x_7, x_1, x_2);
if (lean::obj_tag(x_8) == 0)
{
obj* x_11; obj* x_13; obj* x_14; 
lean::dec(x_5);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_13 = x_8;
} else {
 lean::inc(x_11);
 lean::dec(x_8);
 x_13 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_14 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_14 = x_13;
}
lean::cnstr_set(x_14, 0, x_11);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_32; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_15 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_17 = x_8;
} else {
 lean::inc(x_15);
 lean::dec(x_8);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_15, 0);
x_20 = lean::cnstr_get(x_15, 1);
if (lean::is_exclusive(x_15)) {
 x_22 = x_15;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::dec(x_15);
 x_22 = lean::box(0);
}
x_23 = lean::cnstr_get(x_3, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_3, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_3, 2);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_3, 3);
lean::inc(x_29);
x_31 = l_list_append___rarg(x_18, x_29);
x_32 = lean::cnstr_get(x_3, 4);
lean::inc(x_32);
lean::dec(x_3);
x_35 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_35, 0, x_23);
lean::cnstr_set(x_35, 1, x_25);
lean::cnstr_set(x_35, 2, x_27);
lean::cnstr_set(x_35, 3, x_31);
lean::cnstr_set(x_35, 4, x_32);
if (lean::is_scalar(x_5)) {
 x_36 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_36 = x_5;
}
lean::cnstr_set(x_36, 0, x_35);
if (lean::is_scalar(x_22)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_22;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_20);
if (lean::is_scalar(x_17)) {
 x_38 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_38 = x_17;
}
lean::cnstr_set(x_38, 0, x_37);
return x_38;
}
}
case 2:
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; 
x_39 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 x_41 = x_0;
} else {
 lean::inc(x_39);
 lean::dec(x_0);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
x_44 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_42, x_1, x_2);
if (lean::obj_tag(x_44) == 0)
{
obj* x_47; obj* x_49; obj* x_50; 
lean::dec(x_39);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_44, 0);
if (lean::is_exclusive(x_44)) {
 x_49 = x_44;
} else {
 lean::inc(x_47);
 lean::dec(x_44);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_53; obj* x_54; obj* x_56; obj* x_58; obj* x_59; obj* x_61; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_51 = lean::cnstr_get(x_44, 0);
if (lean::is_exclusive(x_44)) {
 x_53 = x_44;
} else {
 lean::inc(x_51);
 lean::dec(x_44);
 x_53 = lean::box(0);
}
x_54 = lean::cnstr_get(x_51, 0);
x_56 = lean::cnstr_get(x_51, 1);
if (lean::is_exclusive(x_51)) {
 x_58 = x_51;
} else {
 lean::inc(x_54);
 lean::inc(x_56);
 lean::dec(x_51);
 x_58 = lean::box(0);
}
x_59 = lean::cnstr_get(x_39, 0);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_39, 2);
lean::inc(x_61);
lean::dec(x_39);
x_64 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_64, 0, x_59);
lean::cnstr_set(x_64, 1, x_54);
lean::cnstr_set(x_64, 2, x_61);
if (lean::is_scalar(x_41)) {
 x_65 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_65 = x_41;
}
lean::cnstr_set(x_65, 0, x_64);
if (lean::is_scalar(x_58)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_58;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_56);
if (lean::is_scalar(x_53)) {
 x_67 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_67 = x_53;
}
lean::cnstr_set(x_67, 0, x_66);
return x_67;
}
}
default:
{
obj* x_68; obj* x_69; 
x_68 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_68, 0, x_0);
lean::cnstr_set(x_68, 1, x_2);
x_69 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_69, 0, x_68);
return x_69;
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_elaborator_preresolve___main___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_preresolve___main(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_elaborator_preresolve(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_preresolve___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_preresolve___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_preresolve(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* _init_l_lean_elaborator_max__recursion() {
_start:
{
obj* x_0; 
x_0 = lean::mk_nat_obj(100u);
return x_0;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_6, 0, x_5);
return x_6;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg___boxed), 4, 0);
return x_1;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_name__map_contains___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l___private_init_lean_parser_rec_1__run__aux___main___rarg(x_0, x_1, x_2, x_3);
x_7 = lean::apply_2(x_6, x_4, x_5);
return x_7;
}
}
obj* l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6___boxed), 6, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_2);
lean::closure_set(x_6, 2, x_3);
x_7 = lean::apply_3(x_0, x_6, x_4, x_5);
return x_7;
}
}
obj* _init_l_lean_elaborator_run___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint8 x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string("foo");
x_5 = 2;
x_6 = lean::mk_string("");
x_7 = lean::mk_string("elaborator.run: out of fuel");
x_8 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_2);
lean::cnstr_set(x_8, 2, x_3);
lean::cnstr_set(x_8, 3, x_6);
lean::cnstr_set(x_8, 4, x_7);
lean::cnstr_set_scalar(x_8, sizeof(void*)*5, x_5);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_elaborator_run___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 5);
lean::inc(x_13);
x_15 = l_lean_elaborator_run___lambda__1___closed__1;
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_13);
x_17 = lean::cnstr_get(x_2, 6);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_2, 7);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 8);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 9);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 10);
lean::inc(x_25);
lean::dec(x_2);
x_28 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_28, 0, x_3);
lean::cnstr_set(x_28, 1, x_5);
lean::cnstr_set(x_28, 2, x_7);
lean::cnstr_set(x_28, 3, x_9);
lean::cnstr_set(x_28, 4, x_11);
lean::cnstr_set(x_28, 5, x_16);
lean::cnstr_set(x_28, 6, x_17);
lean::cnstr_set(x_28, 7, x_19);
lean::cnstr_set(x_28, 8, x_21);
lean::cnstr_set(x_28, 9, x_23);
lean::cnstr_set(x_28, 10, x_25);
x_29 = lean::box(0);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_28);
x_31 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_31, 0, x_30);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_32, 0, x_31);
return x_32;
}
}
obj* l_lean_elaborator_run___lambda__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_2 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_4 = x_1;
} else {
 lean::inc(x_2);
 lean::dec(x_1);
 x_4 = lean::box(0);
}
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 5);
lean::inc(x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_2);
lean::cnstr_set(x_17, 1, x_15);
x_18 = lean::cnstr_get(x_0, 6);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 7);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_0, 8);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_0, 9);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_0, 10);
lean::inc(x_26);
lean::dec(x_0);
x_29 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_29, 0, x_5);
lean::cnstr_set(x_29, 1, x_7);
lean::cnstr_set(x_29, 2, x_9);
lean::cnstr_set(x_29, 3, x_11);
lean::cnstr_set(x_29, 4, x_13);
lean::cnstr_set(x_29, 5, x_17);
lean::cnstr_set(x_29, 6, x_18);
lean::cnstr_set(x_29, 7, x_20);
lean::cnstr_set(x_29, 8, x_22);
lean::cnstr_set(x_29, 9, x_24);
lean::cnstr_set(x_29, 10, x_26);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
if (lean::is_scalar(x_4)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_4;
 lean::cnstr_set_tag(x_4, 1);
}
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_33, 0, x_32);
return x_33;
}
else
{
obj* x_35; 
lean::dec(x_0);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_35, 0, x_1);
return x_35;
}
}
}
obj* _init_l_lean_elaborator_run___lambda__3___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown command: ");
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_16; 
x_10 = l_lean_name_to__string___closed__1;
x_11 = l_lean_name_to__string__with__sep___main(x_10, x_3);
x_12 = l_lean_elaborator_run___lambda__3___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
lean::inc(x_0);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___boxed), 6, 5);
lean::closure_set(x_16, 0, x_4);
lean::closure_set(x_16, 1, x_13);
lean::closure_set(x_16, 2, x_5);
lean::closure_set(x_16, 3, x_6);
lean::closure_set(x_16, 4, x_0);
x_8 = x_16;
goto lbl_9;
}
else
{
obj* x_19; obj* x_23; 
lean::dec(x_4);
lean::dec(x_3);
x_19 = lean::cnstr_get(x_2, 0);
lean::inc(x_19);
lean::dec(x_2);
lean::inc(x_0);
x_23 = lean::apply_3(x_19, x_5, x_6, x_0);
x_8 = x_23;
goto lbl_9;
}
lbl_9:
{
obj* x_24; 
x_24 = lean::apply_1(x_8, x_7);
if (lean::obj_tag(x_24) == 0)
{
obj* x_26; obj* x_28; 
lean::dec(x_1);
x_26 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_set(x_24, 0, lean::box(0));
 x_28 = x_24;
} else {
 lean::inc(x_26);
 lean::dec(x_24);
 x_28 = lean::box(0);
}
if (lean::obj_tag(x_26) == 0)
{
obj* x_29; obj* x_31; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_29 = lean::cnstr_get(x_26, 0);
if (lean::is_exclusive(x_26)) {
 x_31 = x_26;
} else {
 lean::inc(x_29);
 lean::dec(x_26);
 x_31 = lean::box(0);
}
x_32 = lean::cnstr_get(x_0, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_0, 1);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_0, 2);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_0, 3);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_0, 4);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_0, 5);
lean::inc(x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_29);
lean::cnstr_set(x_44, 1, x_42);
x_45 = lean::cnstr_get(x_0, 6);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_0, 7);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_0, 8);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_0, 9);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_0, 10);
lean::inc(x_53);
lean::dec(x_0);
x_56 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_56, 0, x_32);
lean::cnstr_set(x_56, 1, x_34);
lean::cnstr_set(x_56, 2, x_36);
lean::cnstr_set(x_56, 3, x_38);
lean::cnstr_set(x_56, 4, x_40);
lean::cnstr_set(x_56, 5, x_44);
lean::cnstr_set(x_56, 6, x_45);
lean::cnstr_set(x_56, 7, x_47);
lean::cnstr_set(x_56, 8, x_49);
lean::cnstr_set(x_56, 9, x_51);
lean::cnstr_set(x_56, 10, x_53);
x_57 = lean::box(0);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_56);
if (lean::is_scalar(x_31)) {
 x_59 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_59 = x_31;
 lean::cnstr_set_tag(x_31, 1);
}
lean::cnstr_set(x_59, 0, x_58);
if (lean::is_scalar(x_28)) {
 x_60 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_60 = x_28;
}
lean::cnstr_set(x_60, 0, x_59);
return x_60;
}
else
{
obj* x_62; 
lean::dec(x_0);
if (lean::is_scalar(x_28)) {
 x_62 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_62 = x_28;
}
lean::cnstr_set(x_62, 0, x_26);
return x_62;
}
}
else
{
obj* x_64; obj* x_66; obj* x_68; obj* x_69; obj* x_70; 
lean::dec(x_0);
x_64 = lean::cnstr_get(x_24, 0);
x_66 = lean::cnstr_get(x_24, 1);
if (lean::is_exclusive(x_24)) {
 x_68 = x_24;
} else {
 lean::inc(x_64);
 lean::inc(x_66);
 lean::dec(x_24);
 x_68 = lean::box(0);
}
x_69 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_69, 0, x_66);
lean::closure_set(x_69, 1, x_1);
if (lean::is_scalar(x_68)) {
 x_70 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_70 = x_68;
}
lean::cnstr_set(x_70, 0, x_64);
lean::cnstr_set(x_70, 1, x_69);
return x_70;
}
}
}
}
obj* _init_l_lean_elaborator_run___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not a command: ");
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; 
lean::inc(x_0);
x_6 = l_lean_parser_syntax_to__format___main(x_0);
x_7 = lean::mk_nat_obj(80u);
x_8 = l_lean_format_pretty(x_6, x_7);
x_9 = l_lean_elaborator_run___lambda__4___closed__1;
x_10 = lean::string_append(x_9, x_8);
lean::dec(x_8);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___boxed), 6, 5);
lean::closure_set(x_12, 0, x_0);
lean::closure_set(x_12, 1, x_10);
lean::closure_set(x_12, 2, x_2);
lean::closure_set(x_12, 3, x_3);
lean::closure_set(x_12, 4, x_4);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_19; obj* x_20; obj* x_22; obj* x_23; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
lean::dec(x_13);
x_19 = l_lean_elaborator_elaborators;
x_20 = l_rbnode_find___main___at_lean_name__map_contains___spec__2___rarg(x_19, x_16);
lean::inc(x_4);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__2), 2, 1);
lean::closure_set(x_22, 0, x_4);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__3), 8, 7);
lean::closure_set(x_23, 0, x_4);
lean::closure_set(x_23, 1, x_22);
lean::closure_set(x_23, 2, x_20);
lean::closure_set(x_23, 3, x_16);
lean::closure_set(x_23, 4, x_0);
lean::closure_set(x_23, 5, x_2);
lean::closure_set(x_23, 6, x_3);
return x_23;
}
}
}
obj* l_lean_elaborator_run___lambda__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 x_10 = x_0;
} else {
 lean::inc(x_8);
 lean::dec(x_0);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
x_12 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_18; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_13 = lean::cnstr_get(x_0, 0);
lean::inc(x_13);
lean::dec(x_0);
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_13, 1);
lean::inc(x_18);
lean::dec(x_13);
lean::inc(x_1);
x_22 = l_lean_parser_syntax_as__node___main(x_1);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg___boxed), 4, 1);
lean::closure_set(x_23, 0, x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__4), 5, 1);
lean::closure_set(x_24, 0, x_1);
x_25 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_23, x_24, x_2, x_3, x_18);
x_26 = lean::apply_1(x_25, x_16);
return x_26;
}
}
}
obj* l_lean_elaborator_run___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_3);
x_9 = l_lean_elaborator_preresolve___main(x_3, x_0, x_5);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__5___boxed), 5, 4);
lean::closure_set(x_10, 0, x_9);
lean::closure_set(x_10, 1, x_3);
lean::closure_set(x_10, 2, x_1);
lean::closure_set(x_10, 3, x_0);
return x_10;
}
}
obj* l_lean_elaborator_run___lambda__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__6), 3, 2);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_elaborator__coe__coelaborator___spec__1___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_lean_elaborator_run___lambda__8(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = l_lean_message__log_empty;
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_10; obj* x_13; obj* x_16; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::cnstr_get(x_10, 5);
lean::inc(x_13);
lean::dec(x_10);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_16, 0, x_13);
return x_16;
}
}
}
obj* _init_l_lean_elaborator_run___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_string("trace");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("as_messages");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = l_lean_options_mk;
x_8 = 1;
x_9 = l_lean_kvmap_set__bool(x_7, x_6, x_8);
x_10 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1;
x_11 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2;
x_12 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_10);
lean::cnstr_set(x_12, 2, x_11);
lean::cnstr_set(x_12, 3, x_1);
lean::cnstr_set(x_12, 4, x_0);
lean::cnstr_set(x_12, 5, x_0);
lean::cnstr_set(x_12, 6, x_9);
return x_12;
}
}
obj* _init_l_lean_elaborator_run___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean_environment_mk_empty(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_run___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint32 x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_ngen");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("fixme");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = 0;
x_6 = lean::alloc_cnstr(0, 1, 4);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set_scalar(x_6, sizeof(void*)*1, x_5);
x_7 = x_6;
return x_7;
}
}
obj* _init_l_lean_elaborator_run___closed__4() {
_start:
{
uint8 x_0; obj* x_1; obj* x_2; 
x_0 = 0;
x_1 = lean::box(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___boxed), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_run___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__1___boxed), 3, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__7___boxed), 4, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__7() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__8), 1, 0);
return x_0;
}
}
obj* l_lean_elaborator_run(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_1 = lean::box(0);
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = l_lean_expander_builtin__transformers;
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::mk_nat_obj(0u);
x_9 = l_lean_elaborator_run___closed__1;
x_10 = l_lean_message__log_empty;
x_11 = l_lean_elaborator_run___closed__2;
x_12 = l_lean_elaborator_run___closed__3;
x_13 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_13, 0, x_1);
lean::cnstr_set(x_13, 1, x_1);
lean::cnstr_set(x_13, 2, x_8);
lean::cnstr_set(x_13, 3, x_1);
lean::cnstr_set(x_13, 4, x_9);
lean::cnstr_set(x_13, 5, x_10);
lean::cnstr_set(x_13, 6, x_2);
lean::cnstr_set(x_13, 7, x_7);
lean::cnstr_set(x_13, 8, x_11);
lean::cnstr_set(x_13, 9, x_12);
lean::cnstr_set(x_13, 10, x_8);
x_14 = l_lean_elaborator_run___closed__4;
x_15 = l_lean_elaborator_run___closed__5;
x_16 = l_lean_elaborator_run___closed__6;
x_17 = l_lean_elaborator_max__recursion;
x_18 = l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(x_14, x_15, x_16, x_17, x_0, x_13);
x_19 = l_lean_elaborator_run___closed__7;
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_20, 0, x_18);
lean::closure_set(x_20, 1, x_19);
return x_20;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_1);
lean::dec(x_2);
return x_4;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_reader__t_pure___at_lean_elaborator_run___spec__3(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_find___main___at_lean_elaborator_run___spec__4(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_elaborator_run___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_run___lambda__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_elaborator_run___lambda__5___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_elaborator_run___lambda__5(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_elaborator_run___lambda__7___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_elaborator_run___lambda__7(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
void initialize_init_lean_parser_module();
void initialize_init_lean_expander();
void initialize_init_lean_expr();
void initialize_init_lean_options();
static bool _G_initialized = false;
void initialize_init_lean_elaborator() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_module();
 initialize_init_lean_expander();
 initialize_init_lean_expr();
 initialize_init_lean_options();
 l_lean_elaborator_ordered__rbmap_empty___closed__1 = _init_l_lean_elaborator_ordered__rbmap_empty___closed__1();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___closed__1);
 l_lean_elaborator_coelaborator__m_monad__coroutine = _init_l_lean_elaborator_coelaborator__m_monad__coroutine();
lean::mark_persistent(l_lean_elaborator_coelaborator__m_monad__coroutine);
 l_lean_elaborator_level__get__app__args___main___closed__1 = _init_l_lean_elaborator_level__get__app__args___main___closed__1();
lean::mark_persistent(l_lean_elaborator_level__get__app__args___main___closed__1);
 l_lean_elaborator_to__level___main___closed__1 = _init_l_lean_elaborator_to__level___main___closed__1();
lean::mark_persistent(l_lean_elaborator_to__level___main___closed__1);
 l_lean_elaborator_to__level___main___closed__2 = _init_l_lean_elaborator_to__level___main___closed__2();
lean::mark_persistent(l_lean_elaborator_to__level___main___closed__2);
 l_lean_elaborator_to__level___main___closed__3 = _init_l_lean_elaborator_to__level___main___closed__3();
lean::mark_persistent(l_lean_elaborator_to__level___main___closed__3);
 l_lean_elaborator_to__level___main___closed__4 = _init_l_lean_elaborator_to__level___main___closed__4();
lean::mark_persistent(l_lean_elaborator_to__level___main___closed__4);
 l_lean_elaborator_expr_mk__annotation___closed__1 = _init_l_lean_elaborator_expr_mk__annotation___closed__1();
lean::mark_persistent(l_lean_elaborator_expr_mk__annotation___closed__1);
 l_lean_elaborator_dummy = _init_l_lean_elaborator_dummy();
lean::mark_persistent(l_lean_elaborator_dummy);
 l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1 = _init_l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1();
lean::mark_persistent(l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1);
 l_lean_elaborator_mk__eqns___closed__1 = _init_l_lean_elaborator_mk__eqns___closed__1();
lean::mark_persistent(l_lean_elaborator_mk__eqns___closed__1);
 l_lean_elaborator_mk__eqns___closed__2 = _init_l_lean_elaborator_mk__eqns___closed__2();
lean::mark_persistent(l_lean_elaborator_mk__eqns___closed__2);
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1);
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1);
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2);
 l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1 = _init_l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1();
lean::mark_persistent(l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1);
 l_lean_elaborator_to__pexpr___main___closed__1 = _init_l_lean_elaborator_to__pexpr___main___closed__1();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__1);
 l_lean_elaborator_to__pexpr___main___closed__2 = _init_l_lean_elaborator_to__pexpr___main___closed__2();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__2);
 l_lean_elaborator_to__pexpr___main___closed__3 = _init_l_lean_elaborator_to__pexpr___main___closed__3();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__3);
 l_lean_elaborator_to__pexpr___main___closed__4 = _init_l_lean_elaborator_to__pexpr___main___closed__4();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__4);
 l_lean_elaborator_to__pexpr___main___closed__5 = _init_l_lean_elaborator_to__pexpr___main___closed__5();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__5);
 l_lean_elaborator_to__pexpr___main___closed__6 = _init_l_lean_elaborator_to__pexpr___main___closed__6();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__6);
 l_lean_elaborator_to__pexpr___main___closed__7 = _init_l_lean_elaborator_to__pexpr___main___closed__7();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__7);
 l_lean_elaborator_to__pexpr___main___closed__8 = _init_l_lean_elaborator_to__pexpr___main___closed__8();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__8);
 l_lean_elaborator_to__pexpr___main___closed__9 = _init_l_lean_elaborator_to__pexpr___main___closed__9();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__9);
 l_lean_elaborator_to__pexpr___main___closed__10 = _init_l_lean_elaborator_to__pexpr___main___closed__10();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__10);
 l_lean_elaborator_to__pexpr___main___closed__11 = _init_l_lean_elaborator_to__pexpr___main___closed__11();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__11);
 l_lean_elaborator_to__pexpr___main___closed__12 = _init_l_lean_elaborator_to__pexpr___main___closed__12();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__12);
 l_lean_elaborator_to__pexpr___main___closed__13 = _init_l_lean_elaborator_to__pexpr___main___closed__13();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__13);
 l_lean_elaborator_to__pexpr___main___closed__14 = _init_l_lean_elaborator_to__pexpr___main___closed__14();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__14);
 l_lean_elaborator_to__pexpr___main___closed__15 = _init_l_lean_elaborator_to__pexpr___main___closed__15();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__15);
 l_lean_elaborator_to__pexpr___main___closed__16 = _init_l_lean_elaborator_to__pexpr___main___closed__16();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__16);
 l_lean_elaborator_to__pexpr___main___closed__17 = _init_l_lean_elaborator_to__pexpr___main___closed__17();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__17);
 l_lean_elaborator_to__pexpr___main___closed__18 = _init_l_lean_elaborator_to__pexpr___main___closed__18();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__18);
 l_lean_elaborator_to__pexpr___main___closed__19 = _init_l_lean_elaborator_to__pexpr___main___closed__19();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__19);
 l_lean_elaborator_to__pexpr___main___closed__20 = _init_l_lean_elaborator_to__pexpr___main___closed__20();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__20);
 l_lean_elaborator_to__pexpr___main___closed__21 = _init_l_lean_elaborator_to__pexpr___main___closed__21();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__21);
 l_lean_elaborator_to__pexpr___main___closed__22 = _init_l_lean_elaborator_to__pexpr___main___closed__22();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__22);
 l_lean_elaborator_to__pexpr___main___closed__23 = _init_l_lean_elaborator_to__pexpr___main___closed__23();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__23);
 l_lean_elaborator_to__pexpr___main___closed__24 = _init_l_lean_elaborator_to__pexpr___main___closed__24();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__24);
 l_lean_elaborator_to__pexpr___main___closed__25 = _init_l_lean_elaborator_to__pexpr___main___closed__25();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__25);
 l_lean_elaborator_to__pexpr___main___closed__26 = _init_l_lean_elaborator_to__pexpr___main___closed__26();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__26);
 l_lean_elaborator_to__pexpr___main___closed__27 = _init_l_lean_elaborator_to__pexpr___main___closed__27();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__27);
 l_lean_elaborator_to__pexpr___main___closed__28 = _init_l_lean_elaborator_to__pexpr___main___closed__28();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__28);
 l_lean_elaborator_to__pexpr___main___closed__29 = _init_l_lean_elaborator_to__pexpr___main___closed__29();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__29);
 l_lean_elaborator_to__pexpr___main___closed__30 = _init_l_lean_elaborator_to__pexpr___main___closed__30();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__30);
 l_lean_elaborator_to__pexpr___main___closed__31 = _init_l_lean_elaborator_to__pexpr___main___closed__31();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__31);
 l_lean_elaborator_to__pexpr___main___closed__32 = _init_l_lean_elaborator_to__pexpr___main___closed__32();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__32);
 l_lean_elaborator_to__pexpr___main___closed__33 = _init_l_lean_elaborator_to__pexpr___main___closed__33();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__33);
 l_lean_elaborator_to__pexpr___main___closed__34 = _init_l_lean_elaborator_to__pexpr___main___closed__34();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__34);
 l_lean_elaborator_to__pexpr___main___closed__35 = _init_l_lean_elaborator_to__pexpr___main___closed__35();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__35);
 l_lean_elaborator_to__pexpr___main___closed__36 = _init_l_lean_elaborator_to__pexpr___main___closed__36();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__36);
 l_lean_elaborator_to__pexpr___main___closed__37 = _init_l_lean_elaborator_to__pexpr___main___closed__37();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__37);
 l_lean_elaborator_to__pexpr___main___closed__38 = _init_l_lean_elaborator_to__pexpr___main___closed__38();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__38);
 l_lean_elaborator_to__pexpr___main___closed__39 = _init_l_lean_elaborator_to__pexpr___main___closed__39();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__39);
 l_lean_elaborator_to__pexpr___main___closed__40 = _init_l_lean_elaborator_to__pexpr___main___closed__40();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__40);
 l_lean_elaborator_to__pexpr___main___closed__41 = _init_l_lean_elaborator_to__pexpr___main___closed__41();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__41);
 l_lean_elaborator_to__pexpr___main___closed__42 = _init_l_lean_elaborator_to__pexpr___main___closed__42();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__42);
 l_lean_elaborator_to__pexpr___main___closed__43 = _init_l_lean_elaborator_to__pexpr___main___closed__43();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__43);
 l_lean_elaborator_to__pexpr___main___closed__44 = _init_l_lean_elaborator_to__pexpr___main___closed__44();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__44);
 l_lean_elaborator_to__pexpr___main___closed__45 = _init_l_lean_elaborator_to__pexpr___main___closed__45();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__45);
 l_lean_elaborator_to__pexpr___main___closed__46 = _init_l_lean_elaborator_to__pexpr___main___closed__46();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__46);
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6);
 l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1 = _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1);
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13);
 l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1 = _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__1 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__1();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__1);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__2 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__2();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__2);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__3 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__3();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__3);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__4 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__4();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__4);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__5 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__5();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__5);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__6 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__6();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__6);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__7 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__7();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__7);
 l_lean_elaborator_locally___rarg___closed__1 = _init_l_lean_elaborator_locally___rarg___closed__1();
lean::mark_persistent(l_lean_elaborator_locally___rarg___closed__1);
 l_lean_elaborator_elab__def__like___closed__1 = _init_l_lean_elaborator_elab__def__like___closed__1();
lean::mark_persistent(l_lean_elaborator_elab__def__like___closed__1);
 l_lean_elaborator_elab__def__like___closed__2 = _init_l_lean_elaborator_elab__def__like___closed__2();
lean::mark_persistent(l_lean_elaborator_elab__def__like___closed__2);
 l_lean_elaborator_infer__mod__to__pexpr___closed__1 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__1();
lean::mark_persistent(l_lean_elaborator_infer__mod__to__pexpr___closed__1);
 l_lean_elaborator_infer__mod__to__pexpr___closed__2 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__2();
lean::mark_persistent(l_lean_elaborator_infer__mod__to__pexpr___closed__2);
 l_lean_elaborator_infer__mod__to__pexpr___closed__3 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__3();
lean::mark_persistent(l_lean_elaborator_infer__mod__to__pexpr___closed__3);
 l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7);
 l_lean_elaborator_variables_elaborate___closed__1 = _init_l_lean_elaborator_variables_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_variables_elaborate___closed__1);
 l_lean_elaborator_variables_elaborate___closed__2 = _init_l_lean_elaborator_variables_elaborate___closed__2();
lean::mark_persistent(l_lean_elaborator_variables_elaborate___closed__2);
 l_lean_elaborator_module_header_elaborate___closed__1 = _init_l_lean_elaborator_module_header_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_module_header_elaborate___closed__1);
 l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1 = _init_l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1();
lean::mark_persistent(l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5);
 l_lean_elaborator_command__parser__config_register__notation__parser___closed__1 = _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__1();
lean::mark_persistent(l_lean_elaborator_command__parser__config_register__notation__parser___closed__1);
 l_lean_elaborator_postprocess__notation__spec___closed__1 = _init_l_lean_elaborator_postprocess__notation__spec___closed__1();
lean::mark_persistent(l_lean_elaborator_postprocess__notation__spec___closed__1);
 l_lean_elaborator_match__spec___closed__1 = _init_l_lean_elaborator_match__spec___closed__1();
lean::mark_persistent(l_lean_elaborator_match__spec___closed__1);
 l_lean_elaborator_notation_elaborate__aux___closed__1 = _init_l_lean_elaborator_notation_elaborate__aux___closed__1();
lean::mark_persistent(l_lean_elaborator_notation_elaborate__aux___closed__1);
 l_lean_elaborator_mk__notation__kind___rarg___closed__1 = _init_l_lean_elaborator_mk__notation__kind___rarg___closed__1();
lean::mark_persistent(l_lean_elaborator_mk__notation__kind___rarg___closed__1);
 l_lean_elaborator_notation_elaborate___closed__1 = _init_l_lean_elaborator_notation_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_notation_elaborate___closed__1);
 l_lean_elaborator_notation_elaborate___closed__2 = _init_l_lean_elaborator_notation_elaborate___closed__2();
lean::mark_persistent(l_lean_elaborator_notation_elaborate___closed__2);
 l_lean_elaborator_universe_elaborate___closed__1 = _init_l_lean_elaborator_universe_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_universe_elaborate___closed__1);
 l_lean_elaborator_universe_elaborate___closed__2 = _init_l_lean_elaborator_universe_elaborate___closed__2();
lean::mark_persistent(l_lean_elaborator_universe_elaborate___closed__2);
 l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1);
 l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2);
 l_lean_elaborator_attribute_elaborate___closed__1 = _init_l_lean_elaborator_attribute_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_attribute_elaborate___closed__1);
 l_lean_elaborator_attribute_elaborate___closed__2 = _init_l_lean_elaborator_attribute_elaborate___closed__2();
lean::mark_persistent(l_lean_elaborator_attribute_elaborate___closed__2);
 l_lean_elaborator_check_elaborate___closed__1 = _init_l_lean_elaborator_check_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_check_elaborate___closed__1);
 l_lean_elaborator_init__quot_elaborate___closed__1 = _init_l_lean_elaborator_init__quot_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_init__quot_elaborate___closed__1);
 l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1 = _init_l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1();
lean::mark_persistent(l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1);
 l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1();
lean::mark_persistent(l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1);
 l_lean_elaborator_commands_elaborate___main___lambda__3___closed__1 = _init_l_lean_elaborator_commands_elaborate___main___lambda__3___closed__1();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__3___closed__1);
 l_lean_elaborator_commands_elaborate___main___lambda__3___closed__2 = _init_l_lean_elaborator_commands_elaborate___main___lambda__3___closed__2();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__3___closed__2);
 l_lean_elaborator_commands_elaborate___main___lambda__3___closed__3 = _init_l_lean_elaborator_commands_elaborate___main___lambda__3___closed__3();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__3___closed__3);
 l_lean_elaborator_commands_elaborate___main___lambda__3___closed__4 = _init_l_lean_elaborator_commands_elaborate___main___lambda__3___closed__4();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__3___closed__4);
 l_lean_elaborator_end__scope___lambda__2___closed__1 = _init_l_lean_elaborator_end__scope___lambda__2___closed__1();
lean::mark_persistent(l_lean_elaborator_end__scope___lambda__2___closed__1);
 l_lean_elaborator_end__scope___lambda__2___closed__2 = _init_l_lean_elaborator_end__scope___lambda__2___closed__2();
lean::mark_persistent(l_lean_elaborator_end__scope___lambda__2___closed__2);
 l_lean_elaborator_end__scope___lambda__3___closed__1 = _init_l_lean_elaborator_end__scope___lambda__3___closed__1();
lean::mark_persistent(l_lean_elaborator_end__scope___lambda__3___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3___closed__1();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1);
 l_lean_elaborator_section_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_section_elaborate___lambda__1___closed__1();
lean::mark_persistent(l_lean_elaborator_section_elaborate___lambda__1___closed__1);
 l_lean_elaborator_section_elaborate___closed__1 = _init_l_lean_elaborator_section_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_section_elaborate___closed__1);
 l_lean_elaborator_namespace_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_namespace_elaborate___lambda__1___closed__1();
lean::mark_persistent(l_lean_elaborator_namespace_elaborate___lambda__1___closed__1);
 l_lean_elaborator_namespace_elaborate___closed__1 = _init_l_lean_elaborator_namespace_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_namespace_elaborate___closed__1);
 l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1 = _init_l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1();
lean::mark_persistent(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1);
 l_lean_elaborator_elaborators = _init_l_lean_elaborator_elaborators();
lean::mark_persistent(l_lean_elaborator_elaborators);
 l_lean_elaborator_resolve__context___main___closed__1 = _init_l_lean_elaborator_resolve__context___main___closed__1();
lean::mark_persistent(l_lean_elaborator_resolve__context___main___closed__1);
 l_lean_elaborator_max__recursion = _init_l_lean_elaborator_max__recursion();
lean::mark_persistent(l_lean_elaborator_max__recursion);
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1);
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2);
 l_lean_elaborator_run___lambda__1___closed__1 = _init_l_lean_elaborator_run___lambda__1___closed__1();
lean::mark_persistent(l_lean_elaborator_run___lambda__1___closed__1);
 l_lean_elaborator_run___lambda__3___closed__1 = _init_l_lean_elaborator_run___lambda__3___closed__1();
lean::mark_persistent(l_lean_elaborator_run___lambda__3___closed__1);
 l_lean_elaborator_run___lambda__4___closed__1 = _init_l_lean_elaborator_run___lambda__4___closed__1();
lean::mark_persistent(l_lean_elaborator_run___lambda__4___closed__1);
 l_lean_elaborator_run___closed__1 = _init_l_lean_elaborator_run___closed__1();
lean::mark_persistent(l_lean_elaborator_run___closed__1);
 l_lean_elaborator_run___closed__2 = _init_l_lean_elaborator_run___closed__2();
lean::mark_persistent(l_lean_elaborator_run___closed__2);
 l_lean_elaborator_run___closed__3 = _init_l_lean_elaborator_run___closed__3();
lean::mark_persistent(l_lean_elaborator_run___closed__3);
 l_lean_elaborator_run___closed__4 = _init_l_lean_elaborator_run___closed__4();
lean::mark_persistent(l_lean_elaborator_run___closed__4);
 l_lean_elaborator_run___closed__5 = _init_l_lean_elaborator_run___closed__5();
lean::mark_persistent(l_lean_elaborator_run___closed__5);
 l_lean_elaborator_run___closed__6 = _init_l_lean_elaborator_run___closed__6();
lean::mark_persistent(l_lean_elaborator_run___closed__6);
 l_lean_elaborator_run___closed__7 = _init_l_lean_elaborator_run___closed__7();
lean::mark_persistent(l_lean_elaborator_run___closed__7);
}
