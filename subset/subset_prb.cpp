# include <cmath>
# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <ctime>

using namespace std;

# include "subset.hpp"

int main ( );

void asm_enum_test ( );
void asm_triangle_test ( );
void bell_test ( );
void catalan_test ( );
void catalan_row_next_test ( );
void cfrac_to_rat_test ( );
void cfrac_to_rfrac_test ( );
void change_greedy_test ( );
void change_next_test ( );
void chinese_check_test ( );
void chinese_to_i4_test ( );
void comb_next_test ( );
void comb_row_next_test ( );
void comb_unrank_test ( );
void comp_enum_test ( );
void comp_next_test ( );
void comp_next_grlex_test ( );
void comp_random_test ( );
void comp_random_grlex_test ( );
void comp_rank_grlex_test ( );
void comp_to_ksub_test ( );
void comp_unrank_grlex_test ( );
void compnz_next_test ( );
void compnz_random_test ( );
void compnz_to_ksub_test ( );
void congruence_test ( );
void count_pose_random_test ( );
void debruijn_test ( );
void dec_add_test ( );
void dec_div_test ( );
void dec_mul_test ( );
void dec_round_test ( );
void dec_to_r8_test ( );
void dec_to_rat_test ( );
void dec_to_s_test ( );
void dec_width_test ( );
void decmat_det_test ( );
void decmat_print_test ( );
void derange_enum_test ( );
void derange_enum2_test ( );
void derange_enum3_test ( );
void derange0_back_next_test ( );
void derange0_check_test ( );
void derange0_weed_next_test ( );
void digraph_arc_euler_test ( );
void digraph_arc_print_test ( );
void diophantine_test ( );
void diophantine_solution_minimize_test ( );
void dvec_add_test ( );
void dvec_complementx_test ( );
void dvec_mul_test ( );
void dvec_print_test ( );
void dvec_sub_test ( );
void dvec_to_i4_test ( );
void equiv_next_test ( );
void equiv_next2_test ( );
void equiv_print_test ( );
void equiv_print2_test ( );
void equiv_random_test ( );
void euler_row_test ( );
void frobenius_number_order2_test ( );
void gray_next_test ( );
void gray_rank_test ( );
void gray_rank2_test ( );
void gray_unrank_test ( );
void gray_unrank2_test ( );
void i4_bclr_test ( );
void i4_bset_test ( );
void i4_btest_test ( );
void i4_choose_test ( );
void i4_factor_test ( );
void i4_fall_test ( );
void i4_gcd_test ( );
void i4_huge_test ( );
void i4_log_10_test ( );
void i4_modp_test ( );
void i4_moebius_test ( );
void i4_partition_conj_test ( );
void i4_partition_count_test ( );
void i4_partition_count2_test ( );
void i4_partition_next_test ( );
void i4_partition_next2_test ( );
void i4_partition_print_test ( );
void i4_partition_random_test ( );
void i4_partitions_next_test ( );
void i4_rise_test ( );
void i4_sqrt_test ( );
void i4_sqrt_cf_test ( );
void i4_to_chinese_test ( );
void i4_to_dvec_test ( );
void i4_to_i4poly_test ( );
void i4_to_van_der_corput_test ( );
void i4mat_01_rowcolsum_test ( );
void i4mat_u1_inverse_test ( );
void i4mat_perm0_test ( );
void i4mat_2perm0_test ( );
void i4poly_test ( );
void i4poly_add_test ( );
void i4poly_cyclo_test ( );
void i4poly_degree_test ( );
void i4poly_dif_test ( );
void i4poly_div_test ( );
void i4poly_mul_test ( );
void i4poly_print_test ( );
void i4poly_to_i4_test ( );
void i4vec_backtrack_test ( );
void i4vec_descends_test ( );
void i4vec_frac_test ( );
void i4vec_index_test ( );
void i4vec_maxloc_last_test ( );
void i4vec_pairwise_prime_test ( );
void i4vec_reverse_test ( );
void i4vec_sort_bubble_a_test ( );
void i4vec_sort_heap_index_d_test ( );
void i4vec_transpose_print_test ( );
void i4vec_uniform_ab_test ( );
void index_box_next_2d_test ( );
void index_box_next_3d_test ( );
void index_box2_next_2d_test ( );
void index_box2_next_3d_test ( );
void index_next0_test ( );
void index_next1_test ( );
void index_next2_test ( );
void index_rank0_test ( );
void index_rank1_test ( );
void index_rank2_test ( );
void index_unrank0_test ( );
void index_unrank1_test ( );
void index_unrank2_test ( );
void inverse_mod_n_test ( );
void inversion_to_perm0_test ( );
void involute_enum_test ( );
void jfrac_to_rfrac_test ( );
void josephus_test ( );
void ksub_next_test ( );
void ksub_next2_test ( );
void ksub_next3_test ( );
void ksub_next4_test ( );
void ksub_random_test ( );
void ksub_random2_test ( );
void ksub_random3_test ( );
void ksub_random4_test ( );
void ksub_random5_test ( );
void ksub_rank_test ( );
void ksub_to_comp_test ( );
void ksub_to_compnz_test ( );
void ksub_unrank_test ( );
void l4vec_next_test ( );
void matrix_product_opt_test ( );
void moebius_matrix_test ( );
void monomial_count_test ( );
void monomial_counts_test ( );
void morse_thue_test ( );
void multinomial_coef1_test ( );
void multinomial_coef2_test ( );
void multiperm_enum_test ( );
void multiperm_next_test ( );
void nim_sum_test ( );
void padovan_test ( );
void pell_basic_test ( );
void pell_next_test ( );
void pent_enum_test ( );
void perm_ascend_test ( );
void perm_fixed_enum_test ( );
void perm0_break_count_test ( );
void perm0_check_test ( );
void perm0_cycle_test ( );
void perm0_distance_test ( );
void perm0_free_test ( );
void perm0_inverse_test ( );
void perm0_inverse2_test ( );
void perm0_inverse3_new_test ( );
void perm0_lex_next_test ( );
void perm0_mul_test ( );
void perm0_next_test ( );
void perm0_next2_test ( );
void perm0_next3_test ( );
void perm0_print_test ( );
void perm0_random_test ( );
void perm0_random2_test ( );
void perm0_rank_test ( );
void perm0_sign_test ( );
void perm0_to_equiv_test ( );
void perm0_to_inversion_test ( );
void perm0_to_ytb_test ( );
void perm0_unrank_test ( );
void perm1_canon_to_cycle_test ( );
void perm1_check_test ( );
void perm1_cycle_to_canon_test ( );
void perm1_cycle_to_index_test ( );
void perm1_index_to_cycle_test ( );
void perm1_print_test ( );
void perrin_test ( );
void pord_check_test ( );
void power_mod_test ( );
void power_series1_test ( );
void power_series2_test ( );
void power_series3_test ( );
void power_series4_test ( );
void prime_test ( );
void pythag_triple_next_test ( );
void r8_agm_test ( );
void r8_choose_test ( );
void r8_epsilon_test ( );
void r8_fall_test ( );
void r8_rise_test ( );
void r8_to_cfrac_test ( );
void r8_to_dec_test ( );
void r8_to_rat_test ( );
void r8mat_det_test ( );
void r8mat_perm0_test ( );
void r8mat_2perm0_test ( );
void r8mat_permanent_test ( );
void r8poly_test ( );
void r8poly_add_test ( );
void r8poly_degree_test ( );
void r8poly_dif_test ( );
void r8poly_div_test ( );
void r8poly_f2p_test ( );
void r8poly_fval_test ( );
void r8poly_mul_test ( );
void r8poly_n2p_test ( );
void r8poly_nval_test ( );
void r8poly_nx_test ( );
void r8poly_p2f_test ( );
void r8poly_p2n_test ( );
void r8poly_p2t_test ( );
void r8poly_power_test ( );
void r8poly_print_test ( );
void r8poly_pval_test ( );
void r8poly_t2p_test ( );
void r8vec_backtrack_test ( );
void r8vec_frac_test ( );
void r8vec_mirror_next_test ( );
void rat_add_test ( );
void rat_div_test ( );
void rat_farey_test ( );
void rat_farey2_test ( );
void rat_mul_test ( );
void rat_normalize_test ( );
void rat_sum_formula_test ( );
void rat_to_cfrac_test ( );
void rat_to_dec_test ( );
void rat_to_r8_test ( );
void rat_to_s_test ( );
void rat_width_test ( );
void ratmat_det_test ( );
void ratmat_print_test ( );
void regro_next_test ( );
void rfrac_to_cfrac_test ( );
void rfrac_to_jfrac_test ( );
void schroeder_test ( );
void sort_heap_external_test ( );
void subset_by_size_next_test ( );
void subset_lex_next_test ( );
void subset_gray_next_test ( );
void subset_random_test ( );
void subset_gray_rank_test ( );
void subset_gray_unrank_test ( );
void subcomp_next_test ( );
void subcompnz_next_test ( );
void subcompnz2_next_test ( );
void subtriangle_next_test ( );
void thue_binary_next_test ( );
void thue_ternary_next_test ( );
void triang_test ( );
void tuple_next_test ( );
void tuple_next_fast_test ( );
void tuple_next_ge_test ( );
void tuple_next2_test ( );
void ubvec_add_test ( );
void ubvec_print_test ( );
void ubvec_to_ui4_test ( );
void ubvec_xor_test ( );
void ui4_to_ubvec_test ( );
void vec_colex_next_test ( );
void vec_colex_next2_test ( );
void vec_colex_next3_test ( );
void vec_gray_next_test ( );
void vec_gray_rank_test ( );
void vec_gray_unrank_test ( );
void vec_lex_next_test ( );
void vec_random_test ( );
void vector_constrained_next_test ( );
void vector_constrained_next2_test ( );
void vector_constrained_next3_test ( );
void vector_constrained_next4_test ( );
void vector_constrained_next5_test ( );
void vector_constrained_next6_test ( );
void vector_constrained_next7_test ( );
void vector_next_test ( );
void ytb_enum_test ( );
void ytb_next_test ( );
void ytb_random_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for SUBSET_PRB.
//
//  Discussion:
//
//    SUBSET_PRB tests the SUBSET library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "SUBSET_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the SUBSET library.\n";

  asm_enum_test ( );
  asm_triangle_test ( );
  bell_test ( );
  catalan_test ( );
  catalan_row_next_test ( );
  cfrac_to_rat_test ( );
  cfrac_to_rfrac_test ( );
  change_greedy_test ( );
  change_next_test ( );
  chinese_check_test ( );
  chinese_to_i4_test ( );
  comb_next_test ( );
  comb_row_next_test ( );
  comb_unrank_test ( );
  comp_enum_test ( );
  comp_next_test ( );
  comp_next_grlex_test ( );
  comp_random_test ( );
  comp_random_grlex_test ( );
  comp_rank_grlex_test ( );
  comp_to_ksub_test ( );
  comp_unrank_grlex_test ( );
  compnz_next_test ( );
  compnz_random_test ( );
  compnz_to_ksub_test ( );
  congruence_test ( );
  count_pose_random_test ( );
  debruijn_test ( );
  dec_add_test ( );
  dec_div_test ( );
  dec_mul_test ( );
  dec_round_test ( );
  dec_to_r8_test ( );
  dec_to_rat_test ( );
  dec_to_s_test ( );
  dec_width_test ( );
  decmat_det_test ( );
  decmat_print_test ( );
  derange_enum_test ( );
  derange_enum2_test ( );
  derange_enum3_test ( );
  derange0_back_next_test ( );
  derange0_check_test ( );
  derange0_weed_next_test ( );
  digraph_arc_euler_test ( );
  digraph_arc_print_test ( );
  diophantine_test ( );
  diophantine_solution_minimize_test ( );
  dvec_add_test ( );
  dvec_complementx_test ( );
  dvec_mul_test ( );
  dvec_print_test ( );
  dvec_sub_test ( );
  dvec_to_i4_test ( );
  equiv_next_test ( );
  equiv_next2_test ( );
  equiv_print_test ( );
  equiv_print2_test ( );
  equiv_random_test ( );
  euler_row_test ( );
  frobenius_number_order2_test ( );
  gray_next_test ( );
  gray_rank_test ( );
  gray_rank2_test ( );
  gray_unrank_test ( );
  gray_unrank2_test ( );
  i4_bclr_test ( );
  i4_bset_test ( );
  i4_btest_test ( );
  i4_choose_test ( );
  i4_factor_test ( );
  i4_fall_test ( );
  i4_gcd_test ( );
  i4_huge_test ( );
  i4_log_10_test ( );
  i4_modp_test ( );
  i4_moebius_test ( );
  i4_partition_conj_test ( );
  i4_partition_count_test ( );
  i4_partition_count2_test ( );
  i4_partition_next_test ( );
  i4_partition_next2_test ( );
  i4_partition_print_test ( );
  i4_partition_random_test ( );
  i4_partitions_next_test ( );
  i4_rise_test ( );
  i4_sqrt_test ( );
  i4_sqrt_cf_test ( );
  i4_to_chinese_test ( );
  i4_to_dvec_test ( );
  i4_to_i4poly_test ( );
  i4_to_van_der_corput_test ( );
  i4mat_01_rowcolsum_test ( );
  i4mat_u1_inverse_test ( );
  i4mat_perm0_test ( );
  i4mat_2perm0_test ( );
  i4poly_test ( );
  i4poly_add_test ( );
  i4poly_cyclo_test ( );
  i4poly_degree_test ( );
  i4poly_dif_test ( );
  i4poly_div_test ( );
  i4poly_mul_test ( );
  i4poly_print_test ( );
  i4poly_to_i4_test ( );
  i4vec_backtrack_test ( );
  i4vec_descends_test ( );
  i4vec_frac_test ( );
  i4vec_index_test ( );
  i4vec_maxloc_last_test ( );
  i4vec_pairwise_prime_test ( );
  i4vec_reverse_test ( );
  i4vec_sort_bubble_a_test ( );
  i4vec_sort_heap_index_d_test ( );
  i4vec_transpose_print_test ( );
  i4vec_uniform_ab_test ( );
  index_box_next_2d_test ( );
  index_box_next_3d_test ( );
  index_box2_next_2d_test ( );
  index_box2_next_3d_test ( );
  index_next0_test ( );
  index_next1_test ( );
  index_next2_test ( );
  index_rank0_test ( );
  index_rank1_test ( );
  index_rank2_test ( );
  index_unrank0_test ( );
  index_unrank1_test ( );
  index_unrank2_test ( );
  inverse_mod_n_test ( );
  inversion_to_perm0_test ( );
  involute_enum_test ( );
  jfrac_to_rfrac_test ( );
  josephus_test ( );
  ksub_next_test ( );
  ksub_next2_test ( );
  ksub_next3_test ( );
  ksub_next4_test ( );
  ksub_random_test ( );
  ksub_random2_test ( );
  ksub_random3_test ( );
  ksub_random4_test ( );
  ksub_random5_test ( );
  ksub_rank_test ( );
  ksub_to_comp_test ( );
  ksub_to_compnz_test ( );
  ksub_unrank_test ( );
  l4vec_next_test ( );
  matrix_product_opt_test ( );
  moebius_matrix_test ( );
  monomial_count_test ( );
  monomial_counts_test ( );
  morse_thue_test ( );
  multinomial_coef1_test ( );
  multinomial_coef2_test ( );
  multiperm_enum_test ( );
  multiperm_next_test ( );
  nim_sum_test ( );
  padovan_test ( );
  pell_basic_test ( );
  pell_next_test ( );
  pent_enum_test ( );
  perm_ascend_test ( );
  perm_fixed_enum_test ( );
  perm0_break_count_test ( );
  perm0_check_test ( );
  perm0_cycle_test ( );
  perm0_distance_test ( );
  perm0_free_test ( );
  perm0_inverse_test ( );
  perm0_inverse2_test ( );
  perm0_inverse3_new_test ( );
  perm0_lex_next_test ( );
  perm0_mul_test ( );
  perm0_next_test ( );
  perm0_next2_test ( );
  perm0_next3_test ( );
  perm0_print_test ( );
  perm0_random_test ( );
  perm0_random2_test ( );
  perm0_rank_test ( );
  perm0_sign_test ( );
  perm0_to_equiv_test ( );
  perm0_to_inversion_test ( );
  perm0_to_ytb_test ( );
  perm0_unrank_test ( );
  perm1_canon_to_cycle_test ( );
  perm1_check_test ( );
  perm1_cycle_to_canon_test ( );
  perm1_cycle_to_index_test ( );
  perm1_index_to_cycle_test ( );
  perm1_print_test ( );
  perrin_test ( );
  pord_check_test ( );
  power_mod_test ( );
  power_series1_test ( );
  power_series2_test ( );
  power_series3_test ( );
  power_series4_test ( );
  prime_test ( );
  pythag_triple_next_test ( );
  r8_agm_test ( );
  r8_choose_test ( );
  r8_epsilon_test ( );
  r8_fall_test ( );
  r8_rise_test ( );
  r8_to_cfrac_test ( );
  r8_to_dec_test ( );
  r8_to_rat_test ( );
  r8mat_det_test ( );
  r8mat_perm0_test ( );
  r8mat_2perm0_test ( );
  r8mat_permanent_test ( );
  r8poly_test ( );
  r8poly_add_test ( );
  r8poly_degree_test ( );
  r8poly_dif_test ( );
  r8poly_div_test ( );
  r8poly_f2p_test ( );
  r8poly_fval_test ( );
  r8poly_mul_test ( );
  r8poly_n2p_test ( );
  r8poly_nval_test ( );
  r8poly_nx_test ( );
  r8poly_p2f_test ( );
  r8poly_p2n_test ( );
  r8poly_p2t_test ( );
  r8poly_power_test ( );
  r8poly_print_test ( );
  r8poly_pval_test ( );
  r8poly_t2p_test ( );
  r8vec_backtrack_test ( );
  r8vec_frac_test ( );
  r8vec_mirror_next_test ( );
  rat_add_test ( );
  rat_div_test ( );
  rat_farey_test ( );
  rat_farey2_test ( );
  rat_mul_test ( );
  rat_normalize_test ( );
  rat_sum_formula_test ( );
  rat_to_cfrac_test ( );
  rat_to_dec_test ( );
  rat_to_r8_test ( );
  rat_to_s_test ( );
  rat_width_test ( );
  ratmat_det_test ( );
  ratmat_print_test ( );
  regro_next_test ( );
  rfrac_to_cfrac_test ( );
  rfrac_to_jfrac_test ( );
  schroeder_test ( );
  sort_heap_external_test ( );
  subset_by_size_next_test ( );
  subset_lex_next_test ( );
  subset_gray_next_test ( );
  subset_random_test ( );
  subset_gray_rank_test ( );
  subset_gray_unrank_test ( );
  subcomp_next_test ( );
  subcompnz_next_test ( );
  subcompnz2_next_test ( );
  subtriangle_next_test ( );
  thue_binary_next_test ( );
  thue_ternary_next_test ( );
  triang_test ( );
  tuple_next_test ( );
  tuple_next_fast_test ( );
  tuple_next_ge_test ( );
  tuple_next2_test ( );
  ubvec_add_test ( );
  ubvec_print_test ( );
  ubvec_to_ui4_test ( );
  ubvec_xor_test ( );
  ui4_to_ubvec_test ( );
  vec_colex_next_test ( );
  vec_colex_next2_test ( );
  vec_colex_next3_test ( );
  vec_gray_next_test ( );
  vec_gray_rank_test ( );
  vec_gray_unrank_test ( );
  vec_lex_next_test ( );
  vec_random_test ( );
  vector_constrained_next_test ( );
  vector_constrained_next2_test ( );
  vector_constrained_next3_test ( );
  vector_constrained_next4_test ( );
  vector_constrained_next5_test ( );
  vector_constrained_next6_test ( );
  vector_constrained_next7_test ( );
  vector_next_test ( );
  ytb_enum_test ( );
  ytb_next_test ( );
  ytb_random_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "SUBSET_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void asm_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ASM_ENUM_TEST tests ASM_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int n;

  cout << "\n";
  cout << "ASM_ENUM_TEST\n";
  cout << "  ASM_ENUM returns the number of alternating sign\n";
  cout << "  matrices of a given order.\n";

  cout << "\n";

  for ( n = 0; n <= 7; n++ )
  {
    cout << setw(4) << n << "  "
         << setw(6) << asm_enum ( n ) << "\n";
  }

  return;
}
//****************************************************************************80

void asm_triangle_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ASM_TRIANGLE_TEST tests ASM_TRIANGLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 7

  int a[N_MAX+1];
  int i;
  int n;

  cout << "\n";
  cout << "ASM_TRIANGLE_TEST\n";
  cout << "  ASM_TRIANGLE returns a row of the alternating sign\n";
  cout << "  matrix triangle.\n";
  cout << "\n";

  for ( n = 0; n <= N_MAX; n++ )
  {
    asm_triangle ( n, a );
    cout << setw(4) << n << "  ";
    for ( i = 0; i <= n; i++ )
    {
      cout << setw(8) << a[i] << "  ";
    }
    cout << "\n";
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void bell_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BELL_TEST tests BELL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int c;
  int *c2;
  int n;
  int n_data;

  cout << "\n";
  cout << "BELL_TEST\n";
  cout << "  BELL computes Bell numbers.\n";
  cout << "\n";
  cout << "  N  exact C(I)  computed C(I)\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bell_values ( n_data, n, c );

    if ( n_data == 0 )
    {
      break;
    }

    c2 = new int[n+1];

    bell ( n, c2 );

    cout                 << "  "
         << setw(4) << n << "  "
         << setw(8) << c << "  "
         << setw(8) << c2[n] << "\n";

    delete [] c2;
  }

  return;
}
//****************************************************************************80

void catalan_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CATALAN_TEST tests CATALAN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int c;
  int *c2;
  int n;
  int n_data;

  cout << "\n";
  cout << "CATALAN_TEST\n";
  cout << "  CATALAN computes Catalan numbers.\n";
  cout << "\n";
  cout << "  N  exact C(I)  computed C(I)\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    catalan_values ( n_data, n, c );

    if ( n_data == 0 )
    {
      break;
    }

    c2 = new int[n+1];

    catalan ( n, c2 );

    cout                     << "  "
         << setw(4) << n     << "  "
         << setw(8) << c     << "  "
         << setw(8) << c2[n] << "\n";

    delete [] c2;

  }

  return;
}
//****************************************************************************80

void catalan_row_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CATALAN_ROW_NEXT_TEST tests CATALAN_ROW_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 10

  int c[N_MAX+1];
  int i;
  int n;
  bool next;

  cout << "\n";
  cout << "CATALAN_ROW_NEXT_TEST\n";
  cout << "  CATALAN_ROW_NEXT computes a row of the Catalan triangle.\n";
  cout << "\n";
  cout << "  First, compute row 7:\n";

  next = false;
  n = 7;
  catalan_row_next ( next, n, c );

  cout << setw(4) << n << "  ";
  for ( i = 0; i <= n; i++ )
  {
    cout << setw(8) << c[i] << "  ";
  }
  cout << "\n";

  cout << "\n";
  cout << "  Now compute rows consecutively, one at a time:\n";
  cout << "\n";

  next = false;

  for ( n = 0; n <= N_MAX; n++ )
  {
    catalan_row_next ( next, n, c );
    next = true;

    cout << setw(4) << n << "  ";
    for ( i = 0; i <= n; i++ )
    {
      cout << setw(6) << c[i] << "  ";
    }
    cout << "\n";

  }

  return;
# undef N_MAX
}
//****************************************************************************80

void cfrac_to_rat_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CFRAC_TO_RAT_TEST tests CFRAC_TO_RAT.
//
//  Discussion:
//
//    Compute the continued fraction form of 4096/15625.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define M 10

  int a[M];
  int bot = 15625;
  bool error;
  int i;
  int n;
  int p[M];
  int q[M];
  int top = 4096;

  cout << "\n";
  cout << "CFRAC_TO_RAT_TEST\n";
  cout << "  CFRAC_TO_RAT continued fraction => fraction.\n";
  cout << "\n";
  cout << "  Regular fraction is " << top << "/" << bot << "\n";

  rat_to_cfrac ( top, bot, M, n, a, error );
 
  i4vec1_print ( n, a, "  Continued fraction coefficients:" );

  cfrac_to_rat ( n, a, p, q );
 
  cout << "\n";
  cout << "  The continued fraction convergents.\n";
  cout << "  The last row contains the value of the continued\n";
  cout << "  fraction, written as a common fraction.\n";
  cout << "\n";
  cout << "  I, P(I), Q(I), P(I)/Q(I)\n";
  cout << "\n";

  for ( i = 0; i < n; i++ )
  {
    cout << setw(3) <<   i  << "  "
         << setw(6) << p[i] << "  "
         << setw(6) << q[i] << "  "
         << setw(14) << ( double ) p[i] / ( double ) q[i] << "\n";
  }
 
  return;
# undef M
}
//****************************************************************************80

void cfrac_to_rfrac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CFRAC_TO_RFRAC_TEST tests CFRAC_TO_RFRAC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define MAXM 10

  bool error;
  double g[2*MAXM];
  double h[2*MAXM];
  int i;
  int m;
  double p[MAXM];
  double q[MAXM+1];

  m = 3;

  p[0] = 1.0;
  p[1] = 1.0;
  p[2] = 2.0;

  q[0] = 1.0;
  q[1] = 3.0;
  q[2] = 1.0;
  q[3] = 1.0;

  cout << "\n";
  cout << "CFRAC_TO_RFRAC_TEST\n";
  cout << "  CFRAC_TO_RFRAC: continued fraction to ratio;\n";

  cout << "\n";
  cout << "  Rational polynomial fraction coefficients:\n";
  cout << "\n";

  cout << "  P:  ";
  for ( i = 0; i < m; i++ )
  {
    cout << setw(12) << p[i];
  }
  cout << "\n";

  cout << "  Q:  ";
  for ( i = 0; i < m+1; i++ )
  {
    cout << setw(12) << q[i];
  }
  cout << "\n";

  rfrac_to_cfrac ( m, p, q, h, error );
 
  r8vec_print ( 2*m, h, "  Continued fraction coefficients:" );

  for ( i = 0; i < 2 * m; i++ )
  {
    g[i] = 1.0;
  }

  cfrac_to_rfrac ( 2*m, g, h, p, q );
 
  cout << "\n";
  cout << "  Recovered rational polynomial:\n";
  cout << "\n";
  
  cout << "  P:  ";
  for ( i = 0; i < m; i++ )
  {
    cout << setw(12) << p[i];
  }
  cout << "\n";

  cout << "  Q:  ";
  for ( i = 0; i < m+1; i++ )
  {
    cout << setw(12) << q[i];
  }
  cout << "\n";

  return;
# undef MAXM
}
//****************************************************************************80

void change_greedy_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHANGE_GREEDY_TEST tests CHANGE_GREEDY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
# define COIN_NUM 6

  int change[100];
  int change_num;
  int coin_value[COIN_NUM] = { 1, 5, 10, 25, 50, 100 };
  int i;
  int total;
  int total2;

  cout << "\n";
  cout << "CHANGE_GREEDY_TEST\n";
  cout << "  CHANGE_GREEDY makes change using the biggest\n";
  cout << "  coins first.\n";

  total = 73;

  cout << "\n";
  cout << "  The total for which change is to be made: " << total << "\n";
  cout << "\n";
  cout << "  The available coins are:\n";
  cout << "\n";

  for ( i = 0; i < COIN_NUM; i++ )
  {
    cout << setw(6) << coin_value[i] << "\n";
  }

  change_greedy ( total, COIN_NUM, coin_value, change_num, change );

  cout << "\n";
  cout << "  The number of coins in change is: " << change_num << "\n";
  cout << "\n";

  cout << "        ";  
  for ( i = 0; i < change_num; i++ )
  {
    cout << setw(3) << change[i] << "  ";
  }
  cout << "\n";

  total2 = 0;
  for ( i = 0; i < change_num; i++ )
  {
    total2 = total2 + coin_value[change[i]];
  }

  cout << setw(6) << total2 << "  ";
  for ( i = 0; i < change_num; i++ )
  {
    cout << setw(3) << coin_value[change[i]] << "  ";
  }
  cout << "\n";

  return;
# undef COIN_NUM
}
//****************************************************************************80

void change_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHANGE_NEXT_TEST tests CHANGE_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define COIN_NUM 6

  int change[100];
  int change_num;
  int coin_value[COIN_NUM] = { 1, 5, 10, 25, 50, 100 };
  bool done;
  int i;
  int j;
  int total;

  cout << "\n";
  cout << "CHANGE_NEXT_TEST\n";
  cout << "  CHANGE_NEXT displays the next possible way to make\n";
  cout << "  change for a given total\n";

  total = 50;

  cout << "\n";
  cout << "  The total for which change is to be made: " << total << "\n";
  cout << "\n";

  cout << "\n";
  cout << "  The available coins are:\n";
  cout << "\n";
  for ( i = 0; i < COIN_NUM; i++ )
  {
    cout << setw(6) << coin_value[i] << "\n";
  }

  done = true;
  i = 0;

  for ( ; ; )
  {
    change_next ( total, COIN_NUM, coin_value, change_num, change, done );

    if ( done || 9 < i )
    {
      break;
    }

    i = i + 1;
    cout << "\n";
    cout << setw(3) << i << "\n";
    for ( j = 0; j < change_num; j++ )
    {
      cout << setw(3) << coin_value[change[j]] << "  ";
    }
    cout << "\n";
  }

  return;
# undef COIN_NUM
}
//****************************************************************************80

void chinese_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHINESE_CHECK_TEST tests CHINESE_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int ierror;
  int m1[4] = { 1, 3,  8, 25  };
  int m2[4] = { 1, 3, -8, 25  };
  int m3[4] = { 1, 3,  1, 25  };
  int m4[4] = { 1, 3,  8, 24  };
  int n = 4;

  cout << "\n";
  cout << "CHINESE_CHECK_TEST\n";
  cout << "  CHINESE_CHECK checks a set of moduluses for use with the\n";
  cout << "  Chinese Remainder representation.\n";

  i4vec1_print ( n, m1, "  Modulus set #1:" );
  ierror = chinese_check ( n, m1 );
  cout << "  IERROR = " << ierror << "\n";

  i4vec1_print ( n, m2, "  Modulus set #2:" );
  ierror = chinese_check ( n, m2 );
  cout << "  IERROR = " << ierror << "\n";

  i4vec1_print ( n, m3, "  Modulus set #3:" );
  ierror = chinese_check ( n, m3 );
  cout << "  IERROR = " << ierror << "\n";

  i4vec1_print ( n, m4, "  Modulus set #4:" );
  ierror = chinese_check ( n, m4 );
  cout << "  IERROR = " << ierror << "\n";

  return;
}
//****************************************************************************80

void chinese_to_i4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHINESE_TO_I4_TEST tests CHINESE_TO_I4.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int i;
  int j;
  int j2;
  int m[N] = { 3, 4, 5, 7 };
  int r[N];

  cout << "\n";
  cout << "CHINESE_TO_I4_TEST\n";
  cout << "  CHINESE_TO_I4 computes an integer with the given\n";
  cout << "  Chinese Remainder representation.\n";

  i4vec1_print ( N, m, "  The moduli:" );

  j = 37;

  cout << "\n";
  cout << "  The number being analyzed is " << j << "\n";

  i4_to_chinese ( j, N, m, r );

  i4vec1_print ( N, r, "  The remainders:" );

  j2 = chinese_to_i4 ( N, m, r );

  cout << "\n";
  cout << "  The reconstructed number is " << j2 << "\n";

  i4_to_chinese ( j2, N, m, r );

  i4vec1_print ( N, r, "  The remainders of the reconstructed number are:" );

  return;
# undef N
}
//****************************************************************************80

void comb_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMB_NEXT_TEST tests COMB_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 April 2009
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int a[N];
  bool done;
  int i;
  int j;
  int k;
  int n = N;

  cout << "\n";
  cout << "COMB_NEXT_TEST\n";
  cout << "  COMB_NEXT produces combinations.\n";

  for ( k = 1; k <= n; k++ )
  {
    cout << "\n";
    cout << "  Combinations of size K = " << k << "\n";
    cout << "\n";

    done = true;

    for ( ; ; )
    {
      comb_next ( n, k, a, done );

      if ( done )
      {
        break;
      }

      for ( i = 0; i < k; i++ )
      {
        cout << "  " << setw(4) << a[i];
      }
      cout << "\n";
    }
  }

  return;
# undef N
}
//****************************************************************************80

void comb_row_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMB_ROW_NEXT_TEST tests COMB_ROW_TEST.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 December 2014
//
//  Author:
//
//    John Burkardt
//
{
  int *c;
  int i;
  int n;
  int n_max = 10;

  cout << "\n";
  cout << "COMB_ROW_NEXT_TEST\n";
  cout << "  COMB_ROW_NEXT computes the next row of the Pascal triangle.\n";
  cout << "\n";

  c = new int[n_max+1];

  for ( n = 0; i <= n_max; n++ )
  {
    comb_row_next ( n, c );
    cout << "  " << setw(2) << n << "  ";
    for ( i = 0; i <= n; i++ )
    {
      cout << setw(5) << c[i];
    }
    cout << "\n";
  }

  delete [] c;

  return;
}
//****************************************************************************80

void comb_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMB_UNRANK_TEST tests COMB_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int a[N];
  int cnk;
  int i;
  int m = 10;
  int rank;

  cnk = i4_choose ( m, N );

  cout << "\n";
  cout << "COMB_UNRANK_TEST\n";
  cout << "  COMB_UNRANK returns a combination of N things\n";
  cout << "  out of M, given the lexicographic rank.\n";
  cout << "\n";
  cout << "  The total set size is M = " << m << "\n";
  cout << "  The subset size is N =    " << N << "\n";
  cout << "  The number of combinations of N out of M is " << cnk << "\n";
  cout << "\n";
  cout << "   Rank	  Combination\n";
  cout << "\n";
 
  for ( rank = 1; rank <= 3; rank++ )
  {
    comb_unrank ( m, N, rank, a );
    cout                    << "  "
         << setw(3) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";
  }
 
  for ( rank = 6; rank <= 8; rank++ )
  {
    comb_unrank ( m, N, rank, a );
    cout << setw(3) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";
  }
 
  for ( rank = 250; rank <= 252; rank++ )
  {
    comb_unrank ( m, N, rank, a );
    cout                    << "  "
         << setw(3) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";
  }
 
  return;
# undef N
}
//****************************************************************************80

void comp_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_ENUM_TEST tests COMP_ENUM;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int num;
  int k;
  int n;

  cout << "\n";
  cout << "COMP_ENUM_TEST\n";
  cout << "  COMP_ENUM counts compositions;\n";
  cout << "\n";
  for ( n = 0; n <= 10; n++ )
  {
    for ( k = 1; k <= 10; k++ )
    {
      num = comp_enum ( n, k );
      cout << "  " << setw(6) << num;
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void comp_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_NEXT_TEST tests COMP_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
# define K 3

  int a[K];
  int h;
  int i;
  int index;
  bool more;
  int n = 6;
  int t;

  cout << "\n";
  cout << "COMP_NEXT_TEST\n";
  cout << "  COMP_NEXT produces compositions.\n";
  cout << "\n";
  cout << "  Seeking all compositions of N = " << n << "\n";
  cout << "  using " << K << " parts.\n";
  cout << "\n";

  more = false;
  index = 0;

  for ( ; ; )
  {
    comp_next ( n, K, a, more, h, t );

    index = index + 1;
    cout << "  ";
    cout << "  " << setw(4) << index << "  ";
    for ( i = 0; i < K; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }
  }
 
  return;
# undef K
}
//****************************************************************************80

void comp_next_grlex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_NEXT_GRLEX_TEST tests COMP_NEXT_GRLEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 December 2013
//
//  Author:
//
//    John Burkardt
//
{
  int j;
  int kc = 3;
  int nc;
  int rank;
  int xc[3];

  cout << "\n";
  cout << "COMP_NEXT_GRLEX_TEST\n";
  cout << "  A COMP is a composition of an integer N into K parts.\n";
  cout << "  Each part is nonnegative.  The order matters.\n";
  cout << "  COMP_NEXT_GRLEX determines the next COMP in\n";
  cout << "  graded lexicographic (grlex) order.\n";
  
  cout << "\n";
  cout << "  Rank:     NC       COMP\n";
  cout << "  ----:     --   ------------\n";

  for ( rank = 1; rank <= 71; rank++ )
  {
    if ( rank == 1 )
    {
      for ( j = 0; j < kc; j++ )
      {
        xc[j] = 0;
      }
    }
    else
    {
      comp_next_grlex ( kc, xc );
    }

    nc = i4vec_sum ( kc, xc );

    cout << "   " << setw(3) << rank << ": ";
    cout << "    " << setw(2) << nc << " = ";
    for ( j = 0; j < kc - 1; j++ )
    {
      cout << setw(2) << xc[j] << " + ";
    }
    cout << setw(2) << xc[kc-1] << "\n";
//
//  When XC(1) == NC, we have completed the compositions associated with
//  a particular integer, and are about to advance to the next integer.
//
    if ( xc[0] == nc )
    {
      cout << "  ----:     --   ------------\n";
    }
  }

  return;
}
//****************************************************************************80

void comp_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_RANDOM_TEST tests COMP_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
# define K 5

  int a[K];
  int i;
  int j;
  int n = 10;
  int seed;

  cout << "\n";
  cout << "COMP_RANDOM_TEST\n";
  cout << "  COMP_RANDOM produces compositions at random.\n";
  cout << "\n";
  cout << "  Seeking random compositions of N = " << n << "\n";
  cout << "  using " << K << " parts.\n";
  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 5; j++ )
  {
    comp_random ( n, K, seed, a );

    cout << "  ";
    for ( i = 0; i < K; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";
  }
 
  return;
# undef K
}
//****************************************************************************80

void comp_random_grlex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_RANDOM_GRLEX_TEST tests COMP_RANDOM_GRLEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int j;
  int kc;
  int nc;
  int rank;
  int rank1;
  int rank2;
  int seed;
  int test;
  int *xc;

  cout << "\n";
  cout << "COMP_RANDOM_GRLEX_TEST\n";
  cout << "  A COMP is a composition of an integer N into K parts.\n";
  cout << "  Each part is nonnegative.  The order matters.\n";
  cout << "  COMP_RANDOM_GRLEX selects a random COMP in\n";
  cout << "  graded lexicographic (grlex) order between indices RANK1 and RANK2.\n";
  cout << "\n";

  kc = 3;
  rank1 = 20;
  rank2 = 60;
  seed = 123456789;

  for ( test = 1; test <= 5; test++ )
  {
    xc = comp_random_grlex ( kc, rank1, rank2, seed, rank );
    nc = i4vec_sum ( kc, xc );

    cout << "   " << setw(3) << rank << ": ";
    cout << "    " << setw(2) << nc << " = ";
    for ( j = 0; j < kc - 1; j++ )
    {
      cout << setw(2) << xc[j] << " + ";
    }
    cout << setw(2) << xc[kc-1] << "\n";
    delete [] xc;
  }

  return;
}
//****************************************************************************80

void comp_rank_grlex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_RANK_GRLEX_TEST tests COMP_RANK_GRLEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int kc;
  int nc;
  int rank1;
  int rank2;
  int rank3;
  int rank4;
  int seed;
  int test;
  int *xc;

  cout << "\n";
  cout << "COMP_RANK_GRLEX_TEST\n";
  cout << "  A COMP is a composition of an integer N into K parts.\n";
  cout << "  Each part is nonnegative.  The order matters.\n";
  cout << "  COMP_RANK_GRLEX determines the rank of a COMP\n";
  cout << "  from its parts.\n";
  cout << "\n";
  cout << "        Actual  Inferred\n";
  cout << "  Test    Rank      Rank\n";
  cout << "\n";

  kc = 3;
  rank1 = 20;
  rank2 = 60;
  seed = 123456789;

  for ( test = 1; test <= 5; test++ )
  {
    xc = comp_random_grlex ( kc, rank1, rank2, seed, rank3 );
    rank4 = comp_rank_grlex ( kc, xc );

    cout << "  " << setw(4) << test;
    cout << "  " << setw(6) << rank3;
    cout << "  " << setw(8) << rank4 << "\n";

    delete [] xc;
  }
  return;
}
//****************************************************************************80

void comp_to_ksub_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_TO_KSUB_TEST tests COMP_TO_KSUB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 December 2013
//
//  Author:
//
//    John Burkardt
//
{
  int ac[5];
  int as[4];
  int i;
  int j;
  int kc;
  int ks;
  int nc;
  int ns;
  int seed;
  
  cout << "\n";
  cout << "COMP_TO_KSUB_TEST\n";
  cout << "  COMP_TO_KSUB returns the K subset corresponding to a composition.\n";

  nc = 10;
  kc = 5;
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    cout << "\n";

    comp_random ( nc, kc, seed, ac );
    cout << "  COMP:";
    for ( j = 0; j < kc; j++ )
    {
      cout << setw(4) << ac[j];
    }
    cout << "\n";

    comp_to_ksub ( nc, kc, ac, ns, ks, as );
    cout << "  KSUB:";
    for ( j = 0; j < ks; j++ )
    {
      cout << setw(4) << as[j];
    }
    cout << "\n";

    ksub_to_comp ( ns, ks, as, nc, kc, ac );
    cout << "  COMP:";
    for ( j = 0; j < kc; j++ )
    {
      cout << setw(4) << ac[j];
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void comp_unrank_grlex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_UNRANK_GRLEX_TEST tests COMP_UNRANK_GRLEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 December 2013
//
//  Author:
//
//    John Burkardt
//
{
  int j;
  int kc = 3;
  int nc;
  int rank1;
  int rank2;
  int *xc;

  cout << "\n";
  cout << "COMP_UNRANK_GRLEX_TEST\n";
  cout << "  A COMP is a composition of an integer N into K parts.\n";
  cout << "  Each part is nonnegative.  The order matters.\n";
  cout << "  COMP_UNRANK_GRLEX determines the parts\n";
  cout << "  of a COMP from its rank.\n";
 
  cout << "\n";
  cout << "  Rank: ->  NC       COMP\n";
  cout << "  ----:     --   ------------\n";

  for ( rank1 = 1; rank1 <= 71; rank1++ )
  {
    xc = comp_unrank_grlex ( kc, rank1 );
    nc = i4vec_sum ( kc, xc );

    cout << "   " << setw(3) << rank1 << ": ";
    cout << "    " << setw(2) << nc << " = ";
    for ( j = 0; j < kc - 1; j++ )
    {
      cout << setw(2) << xc[j] << " + ";
    }
    cout << setw(2) << xc[kc-1] << "\n";
//
//  When XC(1) == NC, we have completed the compositions associated with
//  a particular integer, and are about to advance to the next integer.
//
    if ( xc[0] == nc )
    {
      cout << "  ----:     --   ------------\n";
    }
    delete [] xc;
  }
  return;
}
//****************************************************************************80

void compnz_to_ksub_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMPNZ_TO_KSUB_TEST tests COMPNZ_TO_KSUB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2013
//
//  Author:
//
//    John Burkardt
//
{
  int ac[5];
  int as[4];
  int i;
  int j;
  int kc;
  int ks;
  int nc;
  int ns;
  int seed;
  
  cout << "\n";
  cout << "COMPNZ_TO_KSUB_TEST\n";
  cout << "  COMPNZ_TO_KSUB returns the K subset corresponding\n";
  cout << "  to a nonzero composition.\n";

  nc = 10;
  kc = 5;
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    cout << "\n";

    compnz_random ( nc, kc, seed, ac );
    cout << "  COMPNZ:";
    for ( j = 0; j < kc; j++ )
    {
      cout << setw(4) << ac[j];
    }
    cout << "\n";

    compnz_to_ksub ( nc, kc, ac, ns, ks, as );
    cout << "  KSUB:  ";
    for ( j = 0; j < ks; j++ )
    {
      cout << setw(4) << as[j];
    }
    cout << "\n";

    ksub_to_compnz ( ns, ks, as, nc, kc, ac );
    cout << "  COMPNZ:";
    for ( j = 0; j < kc; j++ )
    {
      cout << setw(4) << ac[j];
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void compnz_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMPNZ_NEXT_TEST tests COMPNZ_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[3];
  int h;
  int i;
  int k;
  bool more;
  int n;
  int t;

  n = 6;
  k = 3;
  more = false;

  cout << "\n";
  cout << "COMPNZ_NEXT_TEST\n";
  cout << "  COMPNZ_NEXT produces compositions using nonzero parts.\n";
  cout << "\n";
  cout << "  Seeking all compositions of N = " << n << "\n";
  cout << "  using " << k << " nonzero parts.\n";
  cout << "\n";

  for ( ; ; )
  {
    compnz_next ( n, k, a, more, h, t );

    cout << "  ";
    for ( i = 0; i < k; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }

  }
 
  return;
}
//****************************************************************************80

void compnz_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COMPNZ_RANDOM_TEST tests COMPNZ_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
# define K 5

  int a[K];
  int i;
  int j;
  int n = 10;
  int seed;

  cout << "\n";
  cout << "COMPNZ_RANDOM_TEST\n";
  cout << "  COMPNZ_RANDOM produces compositions at random\n";
  cout << "  with only nonzero parts.\n";
  cout << "\n";
  cout << "  Seeking random compositions of N = " << n << "\n";
  cout << "  using " << K << " nonzero parts.\n";
  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 5; j++ )
  {
    compnz_random ( n, K, seed, a );

    cout << "  ";
    for ( i = 0; i < K; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";
  }
 
  return;
# undef K
}
//****************************************************************************80

void congruence_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CONGRUENCE_TEST tests CONGRUENCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
# define TEST_NUM 20

  int a;
  int a_test[TEST_NUM] = {
     1027,   1027,  1027,   1027, -1027,
    -1027, - 1027, -1027,      6,     0,
        0,      0,     1,      1,     1,
     1024,      0,     0,      5,     2 };
  int b;
  int b_test[TEST_NUM] = {
      712,    712,  -712,   -712,   712,
      712,   -712,  -712,      8,     0,
        1,      1,     0,      0,     1,
   -15625,      0,     3,      0,     4 };
  int c;
  int c_test[TEST_NUM] = {
        7,     -7,     7,     -7,     7,
       -7,      7,    -7,     50,     0,
        0,      1,     0,      1,     0,
    11529,      1,    11,     19,     7 };
  bool error;
  int result;
  int test_i;
  int x;

  cout << "\n";
  cout << "CONGRUENCE_TEST\n";
  cout << "  CONGRUENCE solves a congruence equation:\n";
  cout << "    A * X = C mod ( B )\n";
  cout << "\n";
  cout << "   I        A         B         C         X     Mod ( A*X-C,B)\n";
  cout << "\n";

  for ( test_i = 1; test_i < TEST_NUM; test_i++ )
  {
    a = a_test[test_i];
    b = b_test[test_i];
    c = c_test[test_i];

    x = congruence ( a, b, c, error );

    if ( error )
    {
      cout                       << "  "
           << setw(2)  << test_i << "  "
           << setw(10) << a      << "  "
           << setw(10) << b      << "  "
           << setw(10) << c      << "  "
           << "(An error occurred)\n";
    }
    else
    {
      if ( b != 0 )
      {
        result = i4_modp ( a * x - c, b );
      }
      else
      {
        result = 0;
      }
      cout                        << "  "
           << setw(2)  << test_i  << "  "
           << setw(10) << a       << "  "
           << setw(10) << b       << "  "
           << setw(10) << c       << "  "
           << setw(10) << x       << "  "
           << setw(10) << result  << "\n";
    }

  }

  return;
# undef TEST_NUM
}
//****************************************************************************80

void count_pose_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COUNT_POSE_RANDOM_TEST tests COUNT_POSE_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int blocks[6];
  int goal;
  int i;
  int j;
  int seed;

  cout << "\n";
  cout << "COUNT_POSE_RANDOM_TEST\n";
  cout << "  COUNT_POSE_RANDOM poses a random problem for\n";
  cout << "  the game The Count is Good.\n";

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    count_pose_random ( seed, blocks, goal );

    cout << "\n";
    cout << "  Problem #" << i << "\n";
    cout << "\n";
    cout << "    The goal = " << goal << "\n";
    cout << "\n";
    cout << "    The available numbers are\n";
    cout << "\n";
    for ( j = 0; j < 6; j++ )
    {
      cout << setw(4) << blocks[j] << "  ";
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void debruijn_test ( )

//****************************************************************************80
//
//  Purpose:
//
//     DEBRUIJN_TEST tests DEBRUIJN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define NUM_TEST 3

  int i;
  int ihi;
  int m;
  int mtest[NUM_TEST] = { 2, 3, 2 };
  int n;
  int ntest[NUM_TEST] = { 3, 3, 4 };
  int string[28];
  int test;

  cout << "\n";
  cout << "DEBRUIJN_TEST\n";
  cout << "  DEBRUIJN computes a de Bruijn string.\n";

  for ( test = 0; test < NUM_TEST; test++ )
  {
    m = mtest[test];
    n = ntest[test];

    cout << "\n";
    cout << "  The alphabet size is M = " << m << "\n";
    cout << "  The string length is N = " << n << "\n";

    debruijn ( m, n, string );

    ihi = i4_power ( m, n );

    cout << "\n";
    cout << "  ";
    for ( i = 0; i < ihi; i++ )
    {
      cout << setw(1) << string[i];
    }
    cout << "\n";

  }

  return;
# undef NUM_TEST
}
//****************************************************************************80

void dec_add_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DEC_ADD_TEST tests DEC_ADD.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int abot;
  int atop;
  int bbot;
  int btop;
  int cbot;
  int ctop;
  int dec_digit;

  cout << "\n";
  cout << "DEC_ADD_TEST\n";
  cout << "  DEC_ADD adds two decimals.\n";
  cout << "\n";

  dec_digit = 3;
  atop = 128;
  abot = -1;
  btop = 438;
  bbot = -2;

  dec_add ( atop, abot, btop, bbot, dec_digit, ctop, cbot );

  cout << "\n";
  cout << "  Number of decimal places is " << dec_digit << "\n";
  cout << "\n";

  cout << "  A = "         << atop << "*10^(" << abot << ")\n";
  cout << "  B = "         << btop << "*10^(" << bbot << ")\n";
  cout << "  C = A + B = " << ctop << "*10^(" << cbot << ")\n";
 
  return;
}
//****************************************************************************80

void dec_div_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DEC_DIV_TEST tests DEC_DIV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
  int abot = -1;
  int atop = 523;
  int bbot = 2;
  int btop = 134;
  int cbot;
  int ctop;
  int dec_digit;
  bool error;

  cout << "\n";
  cout << "DEC_DIV_TEST\n";
  cout << "  DEC_DIV divides two decimals.\n";

  dec_digit = 3;

  dec_div ( atop, abot, btop, bbot, dec_digit, ctop, cbot, error );

  cout << "\n";
  cout << "  Number of decimal places is " << dec_digit << "\n";
  cout << "\n";

  cout << "  A = "         << atop << "*10^(" << abot << ")\n";
  cout << "  B = "         << btop << "*10^(" << bbot << ")\n";
  cout << "  C = A / B = " << ctop << "*10^(" << cbot << ")\n";

  return;
}
//****************************************************************************80

void dec_mul_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DEC_MUL_TEST tests DEC_MUL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
  int abot = -4;
  int atop = 14;
  int bbot = 2;
  int btop = 16;
  int cbot;
  int ctop;
  int dec_digit;

  cout << "\n";
  cout << "DEC_MUL_TEST\n";
  cout << "  DEC_MUL multiplies two decimals.\n";

  dec_digit = 2;

  dec_mul ( atop, abot, btop, bbot, dec_digit, ctop, cbot );

  cout << "\n";
  cout << "  Number of decimal places is " << dec_digit << "\n";
  cout << "\n";

  cout << "  A = "         << atop << "*10^(" << abot << ")\n";
  cout << "  B = "         << btop << "*10^(" << bbot << ")\n";
  cout << "  C = A * B = " << ctop << "*10^(" << cbot << ")\n";

  return;
}
//****************************************************************************80

void dec_round_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DEC_ROUND_TEST tests DEC_ROUND.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N_TEST 7

  int a;
  int a_test[N_TEST] = { 523, 523, 523, 523, 6340, 6340, 6340 };
  int b;
  int b_test[N_TEST] = { -1,  -1, -1, -1, 2, 2, 2 };
  int dec_digit;
  int r8_test[N_TEST] = { 1, 2, 3, 4, 2, 3, 4 };
  int i;

  cout << "\n";
  cout << "DEC_ROUND_TEST\n";
  cout << "  DEC_ROUND rounds a decimal to a number of digits.\n";
  cout << "\n";
  cout << "           -----Before-------  -----After--------\n";
  cout << "  Digits   Mantissa  Exponent  Mantissa  Exponent\n";
  cout << "\n";

  for ( i = 0; i < N_TEST; i++ )
  {
    dec_digit = r8_test[i];

    a = a_test[i];
    b = b_test[i];

    dec_round ( a, b, dec_digit, a, b );

    cout << setw(6) << r8_test[i] << "  "
         << setw(6) << a_test[i] << "  "
         << setw(6) << b_test[i] << "  "
         <<                         "  "
         << setw(6) << a         << "  "
         << setw(6) << b         << "\n";

  }

  return;
# undef N_TEST
}
//****************************************************************************80

void dec_to_r8_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DEC_TO_R8_TEST tests DEC_TO_R8.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int dec_digit;
  int i;
  double r;
  double r2;
  double r8_hi;
  double r8_lo;
  int seed;

  cout << "\n";
  cout << "DEC_TO_R8_TEST\n";
  cout << "  DEC_TO_R8 converts a decimal to a real number.\n";

  dec_digit = 5;

  cout << "\n";
  cout << "  The maximum number of digits allowed is " << dec_digit << "\n";

  r8_lo = -10.0;
  r8_hi = +10.0;
  seed = 123456789;

  cout << "\n";
  cout << "     R   =>  A * 10^B  =>  R2\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    r = r8_uniform_ab ( r8_lo, r8_hi, seed );

    r8_to_dec ( r, dec_digit, a, b );
    r2 = dec_to_r8 ( a, b );

    cout                   << "  "
         << setw(10) << r  << "  "
         << setw(6)  << a  << "  "
         << setw(6)  << b  << "  "
         << setw(10) << r2 << "\n";
  }

  return;
}
//****************************************************************************80

void dec_to_rat_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DEC_TO_RAT_TEST tests DEC_TO_RAT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int exponent;
  int i;
  int mantissa;
  double r1;
  double r2;
  double r3;
  int rat_bot;
  int rat_bot2;
  int rat_top;
  int rat_top2;
  int seed;

  cout << "\n";
  cout << "DEC_TO_RAT_TEST\n";
  cout << "  DEC_TO_RAT decimal => fraction.\n";
  cout << "\n";
  cout << "  In this test, choose the top and bottom\n";
  cout << "  of a rational at random, and compute the\n";
  cout << "  equivalent real number.\n";
  cout << "\n";
  cout << "  Then convert to decimal, and the equivalent real.\n";
  cout << "\n";
  cout << "  Then convert back to rational and the equivalent real.\n";
  
  seed = 123456789;

  for ( i = 1; i <= 10; i++ )
  {
    rat_top = i4_uniform_ab ( -1000, 1000, seed );
    rat_bot = i4_uniform_ab (     1, 1000, seed );

    r1 = ( double ) rat_top / ( double ) rat_bot;

    rat_to_dec ( rat_top, rat_bot, mantissa, exponent );
    r2 = ( double ) mantissa * pow ( 10.0, exponent );

    dec_to_rat ( mantissa, exponent, rat_top2, rat_bot2 );
    r3 = ( double ) rat_top2 / ( double ) rat_bot2;

    cout << "\n";
    cout << "  " << r1 << " = " << rat_top  << "/"     << rat_bot  << "\n";
    cout << "  " << r2 << " = " << mantissa << "*10^(" << exponent << ")\n";
    cout << "  " << r3 << " = " << rat_top2 << "/"     << rat_bot2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void dec_to_s_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DEC_TO_S_TEST tests DEC_TO_S.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int exponent;
  int i;
  int mantissa;
  char *s;

  cout << "\n";
  cout << "DEC_TO_S_TEST\n";
  cout << "  DEC_TO_S prints out a decimal.\n";
  cout << "\n";
  cout << "  Mantissa  Exponent  String\n";
  cout << "\n";

  mantissa = 523;
  exponent = -1;
  s = dec_to_s ( mantissa, exponent );
  cout << setw(8) << mantissa << "  "
       << setw(8) << exponent << "  "
                  << s        << "\n";

  mantissa = 134;
  exponent = 2;
  s = dec_to_s ( mantissa, exponent );
  cout << setw(8) << mantissa << "  "
       << setw(8) << exponent << "  "
                  << s        << "\n";

  mantissa = -134;
  exponent = 2;
  s = dec_to_s ( mantissa, exponent );
  cout << setw(8) << mantissa << "  "
       << setw(8) << exponent << "  "
                  << s        << "\n";
  mantissa = 0;
  exponent = 10;
  s = dec_to_s ( mantissa, exponent );
  cout << setw(8) << mantissa << "  "
       << setw(8) << exponent << "  "
                  << s        << "\n";

  for ( exponent = -8;exponent < 4; exponent++ )
  {
    mantissa = 123456;
    s = dec_to_s ( mantissa, exponent );
    cout << setw(8) << mantissa << "  "
         << setw(8) << exponent << "  "
                    << s        << "\n";
  }

  return;
}
//****************************************************************************80

void dec_width_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DEC_WIDTH_TEST tests DEC_WIDTH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int exponent;
  int i;
  int mantissa;

  cout << "\n";
  cout << "DEC_WIDTH_TEST\n";
  cout << "  DEC_WIDTH determines the \"width\" of a decimal.\n";
  cout << "\n";
  cout << "  Mantissa  Exponent  Width\n";
  cout << "\n";

  mantissa = 523;
  exponent = -1;
  i = dec_width ( mantissa, exponent );
  cout << setw(8) << mantissa << "  "
       << setw(8) << exponent << "  "
       << setw(8) << i        << "\n";

  mantissa = 134;
  exponent = 2;
  i = dec_width ( mantissa, exponent );
  cout << setw(8) << mantissa << "  "
       << setw(8) << exponent << "  "
       << setw(8) << i        << "\n";

  mantissa = -134;
  exponent = 2;
  i = dec_width ( mantissa, exponent );
  cout << setw(8) << mantissa << "  "
       << setw(8) << exponent << "  "
       << setw(8) << i        << "\n";

  mantissa = 0;
  exponent = 10;
  i = dec_width ( mantissa, exponent );
  cout << setw(8) << mantissa << "  "
       << setw(8) << exponent << "  "
       << setw(8) << i        << "\n";

  for ( exponent = -8; exponent < 4; exponent++ )
  {
    mantissa = 123456;
    i = dec_width ( mantissa, exponent );
    cout << setw(8) << mantissa << "  "
         << setw(8) << exponent << "  "
         << setw(8) << i        << "\n";
  }

  return;
}
//****************************************************************************80

void decmat_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DECMAT_DET_TEST tests DECMAT_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N3 3
# define N4 4

  int a;
  int b;
  int a3[N3*N3];
  int a4[N4*N4];
  int b3[N3*N3];
  int b4[N4*N4];
  int i;
  int dbot;
  int dec_digit;
  int dtop;
  int j;
  int k;
  double r;

  cout << "\n";
  cout << "DECMAT_DET_TEST\n";
  cout << "  DECMAT_DET: determinant of a decimal matrix.\n";
  cout << "\n";
 
  dec_digit = 5;

  k = 0;
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      k = k + 1;
      a3[i+j*N3] = k;
    }
  }

  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      b3[i+j*N3] = 0;
    }
  }
 
  decmat_print ( N3, N3, a3, b3, "  The 123/456/789 matrix:" );

  decmat_det ( N3, a3, b3, dec_digit, dtop, dbot );
 
  cout << "\n";
  cout << "  Determinant of the 123/456/789 matrix = "
       << dtop << "* 10^(" 
       << dbot << ")\n"; 

  for ( i = 0; i < N4; i++ )
  {
    for ( j = 0; j < N4; j++ )
    {
      r = 1.0 / ( double ) ( i + j + 2 );
      
      r8_to_dec ( r, dec_digit, a, b );
      a4[i+j*N4] = a;
      b4[i+j*N4] = b;
    }
  }
 
  decmat_print ( N4, N4, a4, b4, "  The Hilbert matrix:" );
 
  decmat_det ( N4, a4, b4, dec_digit, dtop, dbot );
 
  cout << "\n";
  cout << "  Determinant of the Hilbert matrix = "
       << dtop << "* 10^(" 
       << dbot << ")\n"; 
 
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      if ( i == j )
      {
        a3[i+j*N3] = 2;
      }
      else if ( i == j+1 || i == j-1 )
      {
        a3[i+j*N3] = -1;
      }
      else
      {
        a3[i+j*N3] = 0;
      }
    }
  }
 
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      b3[i+j*N3] = 0;
    }
  }

  decmat_print ( N3, N3, a3, b3, "  The -1,2,-1 matrix:" );
 
  decmat_det ( N3, a3, b3, dec_digit, dtop, dbot );
 
  cout << "\n";
  cout << "  Determinant of the -1,2,-1 matrix = "
       << dtop << "* 10^("
       << dbot << ")\n"; 
 
  return;
# undef N3
# undef N4
}
//****************************************************************************80

void decmat_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DECMAT_PRINT_TEST tests DECMAT_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int amat[4*3];
  int b;
  int bmat[4*3];
  int dec_digit;
  int i;
  int j;
  int m = 4;
  int n = 3;
  double r;

  cout << "\n";
  cout << "DECMAT_PRINT_TEST\n";
  cout << "  DECMAT_PRINT prints a decimal matrix.\n";
 
  dec_digit = 5;

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      r = 1.0 / ( double ) ( i + j + 2 );
      
      r8_to_dec ( r, dec_digit, a, b );
      amat[i+j*m] = a;
      bmat[i+j*n] = b;
    }
  }
 
  decmat_print ( m, n, amat, bmat, "  The Hilbert matrix:" );


  return;
}
//****************************************************************************80

void derange_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DERANGE_ENUM_TEST tests DERANGE_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int i;

  cout << "\n";
  cout << "DERANGE_ENUM_TEST\n";
  cout << "  DERANGE_ENUM counts derangements;\n";
  cout << "\n";
  cout << "       N    # of derangements\n";
  cout << "\n";

  for ( i = 0; i<= N; i++ )
  {
    cout << "  " << setw(8) << i 
         << "  " << setw(8) << derange_enum ( i )  << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void derange_enum2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DERANGE_ENUM2_TEST tests DERANGE_ENUM2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int d[N+1];
  int i;

  cout << "\n";
  cout << "DERANGE_ENUM2_TEST\n";
  cout << "  DERANGE_ENUM2 counts derangements.\n";
  cout << "\n";
  cout << "       N    # of derangements\n";
  cout << "\n";

  derange_enum2 ( N, d );

  for ( i = 0; i<= N; i++ )
  {
    cout << "  " << setw(8) << i
         << "  " << d[i] << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void derange_enum3_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DERANGE_ENUM3_TEST tests DERANGE_ENUM3.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int i;

  cout << "\n";
  cout << "DERANGE_ENUM3_TEST\n";
  cout << "  DERANGE_ENUM3 counts derangements.\n";
  cout << "\n";
  cout << "       N    # of derangements\n";
  cout << "\n";

  for ( i = 0; i<= N; i++ )
  {
    cout << "  " << setw(8) << i
         << "  " << derange_enum3 ( i ) << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void derange0_back_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DERANGE0_BACK_NEXT_TEST tests DERANGE0_BACK_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 June 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int a[N];
  int i;
  bool more;
  int rank;

  cout << "\n";
  cout << "DERANGE0_BACK_NEXT_TEST\n";
  cout << "  DERANGE0_BACK_NEXT generates derangements\n";
  cout << "  using backtracking.\n";
  cout << "\n";

  more = false;
  rank = 0;

  for ( ; ; )
  {
    derange0_back_next ( N, a, more );

    if ( !more )
    {
      break;
    }

    rank = rank + 1;

    cout << setw(4) << rank << "    ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void derange0_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DERANGE0_CHECK_TEST tests DERANGE0_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[5];
  int a_test[5*5] = {
    1, 2, 3, 4, 0, 
    1, 4, 2, 0, 3, 
    1, 2, 3, 0, 3, 
   -1, 2, 3, 4, 0, 
    0, 3, 8, 1, 2 };
  int check;
  int i;
  int j;
  int n = 5;
  int n_test = 5;

  cout << "\n";
  cout << "DERANGE0_CHECK_TEST\n";
  cout << "  DERANGE0_CHECK checks whether a vector of N objects\n";
  cout << "  is a derangement of (0,...,N-1).\n";

  for ( j = 0; j < n_test; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      a[i] = a_test[i+j*n];
    }

    i4vec_transpose_print ( n, a, "  Potential derangement:" );
    check = derange0_check ( n, a );
    cout << "  CHECK = " << check << "\n";
  }

  return;
}
//****************************************************************************80

void derange0_weed_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DERANGE0_WEED_NEXT_TEST tests DERANGE0_WEED_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int i;
  int maxder;
  bool more;
  int n;
  int numder;
  int rank;

  n = 5;
  a = new int[n];
  more = false;
  maxder = 0;
  numder = 0;

  cout << "\n";
  cout << "DERANGE0_WEED_NEXT_TEST\n";
  cout << "  DERANGE0_WEED_NEXT generates derangements\n";
  cout << "  by generating ALL permutations, and weeding out\n";
  cout << "  the ones that are not derangements.\n";
  cout << "\n";

  rank = 0;
 
  for ( ; ; )
  {
    derange0_weed_next ( n, a, more, maxder, numder );

    rank = rank + 1;

    cout << setw(4) << rank << ":   ";
    for ( i = 0; i < n; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

    if ( ! more )
    {
      break;
    }
 
  }

  delete [] a;

  return;
}
//****************************************************************************80

void digraph_arc_euler_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIGRAPH_ARC_EULER_TEST calls DIGRAPH_ARC_EULER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define NEDGE 7
# define NNODE 5

  int i;
  int in;
  int inode[NEDGE] = { 2, 1, 2, 1, 3, 5, 4 };
  int j;
  int jnode[NEDGE] = { 5, 4, 3, 2, 1, 1, 2 };
  int jp1;
  bool success;
  int trail[NEDGE];

  cout << "\n";
  cout << "DIGRAPH_ARC_EULER_TEST\n";
  cout << "  DIGRAPH_ARC_EULER finds an Euler circuit of a digraph.\n";

  digraph_arc_print ( NEDGE, inode, jnode, "  The arc list of the digraph:" );

  digraph_arc_euler ( NNODE, NEDGE, inode, jnode, success, trail );

  if ( success )
  {
    i4vec1_print ( NEDGE, trail, "  The edge list of the Euler circuit:" );

    cout << "\n";
    cout << "  The node list of the Euler circuit:\n";
    cout << "\n";
    cout << "	 I  Edge  Node\n";
    cout << "\n";

    for ( i = 0; i < NEDGE; i++ )
    {
      j = trail[i];

      if ( i+1 == NEDGE )
      {
        jp1 = trail[0];
      }
      else
      {
        jp1 = trail[i+1];
      }

      if ( jnode[j-1] == inode[jp1-1] )
      {
        in = jnode[j-1];
      }
      else
      {
        cout << "\n";
        cout << "The circuit has failed!\n";
        cout << "  JNODE[" << j-1 << "] = " << jnode[j-1] << "\n";
        cout << "  INODE[" << jp1-1 << "] = " << inode[jp1-1] << "\n";
        break;
      }

      cout << setw(6) << i << "  "
           << setw(6) << j << "  "
           << setw(6) << in << "\n";
    }
  }
  else
  {
    cout << "\n";
    cout << "  The digraph is not eulerian.\n";
    cout << "\n";
  }

  return;
# undef NEDGE
# undef NNODE
}
//****************************************************************************80

void digraph_arc_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIGRAPH_ARC_PRINT_TEST calls DIGRAPH_ARC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int inode[7] = { 2, 1, 2, 1, 3, 5, 4 };
  int jnode[7] = { 5, 4, 3, 2, 1, 1, 2 };
  int nedge;

  cout << "\n";
  cout << "DIGRAPH_ARC_PRINT_TEST\n";
  cout << "  DIGRAPH_ARC_PRINT prints a digraph.\n";

  nedge = 7;

  digraph_arc_print ( nedge, inode, jnode, "  The arc list of the digraph:" );

  return;
}
//****************************************************************************80

void diophantine_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIOPHANTINE_TEST tests DIOPHANTINE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define TEST_NUM 20

  int a;
  int a_test[TEST_NUM] = {
      1027,    1027,    1027,    1027,   -1027,
     -1027,   -1027,   -1027,       6,       0,
         0,       0,       1,       1,       1,
      1024,       0,       0,       5,       2 };
  int b;
  int b_test[TEST_NUM] = {
       712,     712,    -712,    -712,     712,
       712,    -712,    -712,       8,       0,
         1,       1,       0,       0,       1,
    -15625,       0,       3,       0,       4 };
  int c;
  int c_test[TEST_NUM] = {
         7,      -7,       7,      -7,       7,
        -7,       7,      -7,      50,       0,
         0,       1,       0,       1,       0,
     11529,       1,      11,      19,       7 };

  bool error;
  int r;
  int test_i;
  int x;
  int y;

  cout << "\n";
  cout << "DIOPHANTINE_TEST\n";
  cout << "  DIOPHANTINE solves a Diophantine equation:\n";
  cout << "    A * X + B * Y = C\n";
  cout << "\n";
  cout << "        A         B         C         X     Y     Residual\n";
  cout << "\n";

  for ( test_i = 0; test_i < TEST_NUM; test_i++ )
  {
    a = a_test[test_i];
    b = b_test[test_i];
    c = c_test[test_i];

    diophantine ( a, b, c, error, x, y );

    if ( error )
    {
      cout << setw(10) << a << "  "
           << setw(10) << b << "  "
           << setw(10) << c << "  "
           << "(Error occurred!)" << "\n";
    }
    else
    {
      r = a * x + b * y - c;
      cout << setw(10) << a << "  "
           << setw(10) << b << "  "
           << setw(10) << c << "  "
           << setw(10) << x << "  "
           << setw(10) << y << "  "
           << setw(10) << r << "\n";
    }

  }

  return;
# undef TEST_NUM
}
//****************************************************************************80

void diophantine_solution_minimize_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIOPHANTINE_SOLUTION_MINIMIZE_TEST tests DIOPHANTINE_SOLUTION_MINIMIZE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int a = 4096;
  int b = -15625;
  int c = 46116;
  int r;
  int x;
  int y;

  cout << "\n";
  cout << "DIOPHANTINE_SOLUTION_MINIMIZE_TEST\n";
  cout << "  DIOPHANTINE_SOLUTION_MINIMIZE computes a minimal\n";
  cout << "  Euclidean norm solution of a Diophantine equation:\n";
  cout << "    A * X + B * Y = C\n";

  x = 665499996;
  y = 174456828;

  r = a * x + b * y - c;

  cout << "\n";
  cout << "  Coefficients:\n";
  cout << "    A = " << setw(12) << a << "\n";
  cout << "    B = " << setw(12) << b << "\n";
  cout << "    C = " << setw(12) << c << "\n";
  cout << "  Solution:\n";
  cout << "    X = " << setw(12) << x << "\n";
  cout << "    Y = " << setw(12) << y << "\n";
  cout << "  Residual R = A * X + B * Y - C:\n";
  cout << "    R = " << setw(12) << r << "\n";

  diophantine_solution_minimize ( a, b, x, y );

  r = a * x + b * y - c;

  cout << "\n";
  cout << "  DIOPHANTINE_SOLUTION_MINIMIZE returns\n";
  cout << "  the minimized solution:\n";
  cout << "    X = " << setw(12) << x << "\n";
  cout << "    Y = " << setw(12) << y << "\n";
  cout << "  Residual R = A * X + B * Y - C:\n";
  cout << "    R = " << setw(12) << r << "\n";

  x = 15621;
  y = 4092;

  r = a * x + b * y - c;

  cout << "\n";
  cout << "  Here is the minimal positive solution:\n";
  cout << "    X = " << setw(12) << x << "\n";
  cout << "    Y = " << setw(12) << y << "\n";
  cout << "  Residual R = A * X + B * Y - C:\n";
  cout << "    R = " << setw(12) << r << "\n";

  return;
}
//****************************************************************************80

void dvec_add_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DVEC_ADD_TEST tests DVEC_ADD;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int dvec1[N];
  int dvec2[N];
  int dvec3[N];
  int dvec4[N];
  int i;
  int j;
  int k;
  int l;
  int seed = 123456789;
  int test;
  int test_num = 10;

  cout << "\n";
  cout << "DVEC_ADD_TEST\n";
  cout << "  DVEC_ADD adds decimal vectors representing integers;\n";
  cout << "\n";
  cout << "        I        J        I + J    DVEC_ADD\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  { 
    i = i4_uniform_ab ( -100, 100, seed );
    j = i4_uniform_ab ( -100, 100, seed );

    k = i + j;

    i4_to_dvec ( i, N, dvec1 );
    i4_to_dvec ( j, N, dvec2 );
    dvec_add ( N, dvec1, dvec2, dvec3 );
    l = dvec_to_i4 ( N, dvec3 );

    cout << "  " << setw(8) << i
         << "  " << setw(8) << j
         << "  " << setw(8) << k
         << "  " << setw(8) << l << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void dvec_complementx_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DVEC_COMPLEMENTX_TEST tests DVEC_COMPLEMENTX;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int dvec1[N];
  int dvec2[N];
  int i;
  int j;
  int seed = 123456789;
  int test;
  int test_num = 5;

  cout << "\n";
  cout << "DVEC_COMPLEMENTX_TEST\n";
  cout << "  DVEC_COMPLEMENTX returns the ten's complement\n";
  cout << "  of a (signed) decimal vector;\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  {
    i = i4_uniform_ab ( -100, 100, seed );

    i4_to_dvec ( i, N, dvec1 );

    dvec_complementx ( N, dvec1, dvec2 );

    j = dvec_to_i4 ( N, dvec2 );

    cout << "\n";
    cout << "  I = " << "  " << i << "\n";
    cout << "  J = " << "  " << j << "\n";
    dvec_print ( N, dvec1, "" );
    dvec_print ( N, dvec2, "" );

  }

  return;
# undef N
}
//****************************************************************************80

void dvec_mul_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DVEC_MUL_TEST tests DVEC_MUL;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int dvec1[N];
  int dvec2[N];
  int dvec3[N];
  int i;
  int j;
  int k;
  int l;
  int n2;
  int seed = 123456789;
  int test;
  int test_num = 10;
  int test2;
  int test2_num = 2;

  cout << "\n";
  cout << "DVEC_MUL_TEST\n";
  cout << "  DVEC_MUL multiplies decimal vectors\n";
  cout << "  representing integers;\n";

  for ( test2 = 1; test2 <= test2_num; test2++ )
  {
    if ( test2 == 1 )
    {
      n2 = N;
    }
    else if ( test2 == 2 )
    {
      n2 = 6;

      cout << "\n";
      cout << "  NOW REPEAT THE TEST...\n";
      cout << "\n";
      cout << "  but use too few digits to represent big products.\n";
      cout << "  This corresponds to an \"overflow\".\n";
      cout << "  The result here should get the final decimal\n";
      cout << "  digits correctly, though.\n";
    }

    cout << "\n";
    cout << "        I        J        I * J  DVEC_MUL\n";
    cout << "\n";

    for ( test = 1; test <= test_num; test++ )
    { 
      i = i4_uniform_ab ( -1000, 1000, seed );
      j = i4_uniform_ab ( -1000, 1000, seed );

      k = i * j;

      i4_to_dvec ( i, n2, dvec1 );
      i4_to_dvec ( j, n2, dvec2 );
      dvec_mul ( n2, dvec1, dvec2, dvec3 );
      l = dvec_to_i4 ( n2, dvec3 );

      cout << "  " << setw(8) << i
           << "  " << setw(8) << j
           << "  " << setw(8) << k
           << "  " << setw(8) << l << "\n";
    }
  }
  return;
# undef N
}
//****************************************************************************80

void dvec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DVEC_PRINT_TEST tests DVEC_PRINT;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int dvec[20] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
    3, 4, 1, 7, 7, 5, 5, 0, 0, 9 };
  int n = 20;

  cout << "\n";
  cout << "DVEC_PRINT_TEST\n";
  cout << "  DVEC_PRINT prints a (signed) decimal vector;\n";

  dvec_print ( n, dvec, "  The DVEC:" );

  return;
}
//****************************************************************************80

void dvec_sub_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DVEC_SUB_TEST tests DVEC_SUB;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int dvec1[N];
  int dvec2[N];
  int dvec3[N];
  int dvec4[N];
  int i;
  int j;
  int k;
  int l;
  int seed = 123456789;
  int test;
  int test_num = 10;

  cout << "\n";
  cout << "DVEC_SUB_TEST\n";
  cout << "  DVEC_SUB subtracts decimal vectors representing integers;\n";
  cout << "\n";
  cout << "        I        J        I - J    DVEC_SUB\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  { 
    i = i4_uniform_ab ( -100, 100, seed );
    j = i4_uniform_ab ( -100, 100, seed );

    k = i - j;

    i4_to_dvec ( i, N, dvec1 );
    i4_to_dvec ( j, N, dvec2 );
    dvec_sub ( N, dvec1, dvec2, dvec4 );
    l = dvec_to_i4 ( N, dvec4 );

    cout << "  " << setw(8) << i
         << "  " << setw(8) << j 
         << "  " << setw(8) << k
         << "  " << setw(8) << l << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void dvec_to_i4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DVEC_TO_I4_TEST tests DVEC_TO_I4;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int dvec[6];
  int i;
  int i1;
  int i2;
  int n;
  int seed;

  cout << "\n";
  cout << "DVEC_TO_I4_TEST\n";
  cout << "  DVEC_TO_I4 converts a DVEC to an I4;\n";
  cout << "\n";
  cout << "         I4 => DVEC => I4\n";
  cout << "\n";

  seed = 123456789;
  i1 = i4_uniform_ab ( -10000, 10000, seed );

  n = 6;
  i4_to_dvec ( i1, n, dvec );

  i2 = dvec_to_i4 ( n, dvec );

  cout << "  " << setw(6) << i1 << "  ";
  for  ( i = n - 1; 0 <= i; i-- )
  {
    cout << setw(2) << dvec[i];
  }
  cout << "  " << setw(6) << i2 << "\n";

  return;
}
//****************************************************************************80

void equiv_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EQUIV_NEXT_TEST tests EQUIV_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int a[N];
  int i;
  int j;
  int jarray[N];
  bool more;
  int npart;
  int rank;

  cout << "\n";
  cout << "EQUIV_NEXT_TEST\n";
  cout << "  EQUIV_NEXT generates all partitions of a set.\n";
  cout << "\n";
  cout << "  Rank//element:\n";
  cout << "\n";
  cout << "      ";
  for ( i = 1; i <= N; i++ )
  {
    cout << setw(2) << i << "  ";
  }
  cout << "\n";
  cout << "\n";
 
  rank = 0;
  more = false;
 
  for ( ; ; )
  {
    equiv_next ( N, npart, jarray, a, more );
 
    rank = rank + 1;

    cout                    << "  "
         << setw(2) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(2) << a[i] << "  ";
    }
    cout << "\n";
 
    if ( !more )
    {
      break;
    }

  }

  return;
# undef N
}
//****************************************************************************80

void equiv_next2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EQUIV_NEXT2_TEST tests EQUIV_NEXT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int a[N];
  bool done;
  int i;
  int rank;

  cout << "\n";
  cout << "EQUIV_NEXT2_TEST\n";
  cout << "  EQUIV_NEXT2 generates all partitions of a set.\n";
  cout << "\n";
  cout << "  Rank//element:\n";
  cout << "\n";
  cout << "      ";
  for ( i = 1; i <= N; i++ )
  {
    cout << setw(2) << i << "  ";
  }
  cout << "\n";
  cout << "\n";
 
  rank = 0;
  done = true;
 
  for ( ; ; )
  {
    equiv_next2 ( done, a, N );

    if ( done )
    {
      break;
    }

    rank = rank + 1;

    cout                    << "  "
         << setw(2) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(2) << a[i] << "  ";
    }
    cout << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void equiv_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EQUIV_PRINT_TEST tests EQUIV_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[4];
  int i;
  int n = 4;
  int npart;
  int seed;

  cout << "\n";
  cout << "EQUIV_PRINT_TEST\n";
  cout << "  EQUIV_PRINT prints a set partition.\n";
 
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    equiv_random ( n, seed, npart, a );

    equiv_print ( n, a, "  The partition:" );
  }

  return;
}
//****************************************************************************80

void equiv_print2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EQUIV_PRINT2_TEST tests EQUIV_PRINT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[4];
  int i;
  int n = 4;
  int npart;
  int seed;

  cout << "\n";
  cout << "EQUIV_PRINT2_TEST\n";
  cout << "  EQUIV_PRINT2 prints a set partition.\n";
 
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    equiv_random ( n, seed, npart, a );

    equiv_print2 ( n, a, "  The partition:" );
  }

  return;
}
//****************************************************************************80

void equiv_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EQUIV_RANDOM_TEST tests EQUIV_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 May 2009
//
//  Author:
//
//    John Burkardt
//
{
  int a[4];
  int i;
  int n = 4;
  int npart;
  int seed;

  cout << "\n";
  cout << "EQUIV_RANDOM_TEST\n";
  cout << "  EQUIV_RANDOM selects a random set partition.\n";
 
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    equiv_random ( n, seed, npart, a );

    equiv_print ( n, a, "  The partition:" );
  }

  return;
}
//****************************************************************************80

void euler_row_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EULER_ROW_TEST tests EULER_ROW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 9

  int i;
  int ieuler[N_MAX+1];
  int n;

  cout << "\n";
  cout << "EULER_ROW_TEST\n";
  cout << "  EULER_ROW gets rows of the Euler triangle.\n";
  cout << "\n";

  for ( n = 0; n <= N_MAX; n++ )
  {
    euler_row ( n, ieuler );

    for ( i = 0; i <= n; i++ )
    {
      cout << setw(7) << ieuler[i] << "  ";
    }
    cout << "\n";
  }
 
  return;
# undef N_MAX
}
//****************************************************************************80

void frobenius_number_order2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//   FROBENIUS_NUMBER_ORDER2_TEST tests FROBENIUS_NUMBER_ORDER2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int c1;
  int c2;
  int f1;
  int f2;
  int n_data;

  cout << "\n";
  cout << "FROBENIUS_NUMBER_ORDER2_TEST\n";
  cout << "  FROBENIUS_NUMBER_ORDER2 computes Frobenius numbers of order 2.\n";
  cout << "\n";
  cout << "        C1        C1   exact F  comput F\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    frobenius_number_order2_values ( n_data, c1, c2, f1 );

    if ( n_data == 0 )
    {
      break;
    }

    f2 = frobenius_number_order2 ( c1, c2 );

    cout << "  " << setw(8) << c1
         << "  " << setw(8) << c2
         << "  " << setw(8) << f1
         << "  " << setw(8) << f2 << "\n";
  }
  return;
}
//****************************************************************************80

void gray_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_NEXT_TEST tests GRAY_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[4];
  int change;
  int g[4];
  int i;
  int k;
  int n = 4;

  cout << "\n";
  cout << "GRAY_NEXT_TEST\n";
  cout << "  GRAY_NEXT returns the index of the single item\n";
  cout << "  to be changed in order to get the next Gray code.\n";

  cout << "\n";
  cout << "   K  Switch  Gray Code\n";
  cout << "\n";

  change = -n;
  k = 0;

  for ( ; ; )
  {
    gray_next ( n, change, k, a );

    if ( change == -n )
    {
      break;
    }
    else if ( change == 0 )
    {
      for ( i = 0; i < n; i++ )
      {
        g[i] = 0;
      }
    }
    else
    {
      g[abs(change)-1] = 1 - g[abs(change)-1];
    }

    cout                      << "  "
         << setw(2) << k      << "  "
         << setw(6) << change << "  ";
    for ( i = 0; i < n; i++ )
    {
      cout << setw(1) << g[i];
    }
    cout << "\n";    
  }

  return;
}
//****************************************************************************80

void gray_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_RANK_TEST tests GRAY_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int gray;
  int rank;
  int rank2;

  cout << "\n";
  cout << "GRAY_RANK_TEST\n";
  cout << "  GRAY_RANK ranks a Gray code;\n";
  cout << "\n";
  cout << "    R  =                        RANK\n";
  cout << "    G  =            GRAY_UNRANK(RANK)\n";
  cout << "    R2 =  GRAY_RANK(GRAY_UNRANK(RANK))\n";
  cout << "\n";
  cout << "    R    G    R2\n";
  cout << "\n";
 
  for ( rank = 0; rank <= 24; rank++ )
  {
    gray = gray_unrank ( rank );

    rank2 = gray_rank ( gray );

    cout << setw(9) << rank << "  "
         << setw(9) << gray << "  "
         << setw(9) << rank2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void gray_rank2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_RANK2_TEST tests GRAY_RANK2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int gray;
  int rank;
  int rank2;

  cout << "\n";
  cout << "GRAY_RANK2_TEST\n";
  cout << "  GRAY_RANK2 ranks a Gray code;\n";
  cout << "\n";
  cout << "    R  =                          RANK\n";
  cout << "    G  =             GRAY_UNRANK2(RANK)\n";
  cout << "    R2 =  GRAY_RANK2(GRAY_UNRANK2(RANK))\n";
  cout << "\n";
  cout << "    R    G    R2\n";
  cout << "\n";
 
  for ( rank = 0; rank <= 24; rank++ )
  {
    gray = gray_unrank2 ( rank );

    rank2 = gray_rank2 ( gray );

    cout << setw(9) << rank << "  "
         << setw(9) << gray << "  "
         << setw(9) << rank2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void gray_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_UNRANK_TEST tests GRAY_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int gray;
  int rank;
  int rank2;

  cout << "\n";
  cout << "GRAY_UNRANK_TEST\n";
  cout << "  GRAY_UNRANK unranks a Gray code.\n";
  cout << "\n";
  cout << "    R  =                        RANK\n";
  cout << "    G  =            GRAY_UNRANK(RANK)\n";
  cout << "    R2 =  GRAY_RANK(GRAY_UNRANK(RANK))\n";
  cout << "\n";
  cout << "    R    G    R2\n";
  cout << "\n";
 
  for ( rank = 0; rank <= 24; rank++ )
  {
    gray = gray_unrank ( rank );

    rank2 = gray_rank ( gray );

    cout << setw(9) << rank << "  "
         << setw(9) << gray << "  "
         << setw(9) << rank2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void gray_unrank2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_UNRANK2_TEST tests GRAY_UNRANK2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int gray;
  int rank;
  int rank2;

  cout << "\n";
  cout << "GRAY_UNRANK2_TEST\n";
  cout << "  GRAY_UNRANK2 unranks a Gray code.\n";
  cout << "\n";
  cout << "    R  =                          RANK\n";
  cout << "    G  =             GRAY_UNRANK2(RANK)\n";
  cout << "    R2 =  GRAY_RANK2(GRAY_UNRANK2(RANK))\n";
  cout << "\n";
  cout << "    R    G    R2\n";
  cout << "\n";
 
  for ( rank = 0; rank <= 24; rank++ )
  {
    gray = gray_unrank2 ( rank );

    rank2 = gray_rank2 ( gray );

    cout << setw(9) << rank << "  "
         << setw(9) << gray << "  "
         << setw(9) << rank2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void i4_bclr_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_BCLR_TEST tests I4_BCLR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i4;
  int i4_test[2] = { 101, -31 };
  int j;
  int pos;
  int test;
  int test_num = 2;

  cout << "\n";
  cout << "I4_BCLR_TEST\n";
  cout << "  I4_BCLR sets a given bit to 0.\n";

  for ( test = 0; test < test_num; test++ )
  {
    i4 = i4_test[test];

    cout << "\n";
    cout << "  Working on I4 = " << i4 << "\n";
    cout << "\n";
    cout << "       Pos     I4_BCLR(I4,POS)\n";
    cout << "\n";

    for ( pos = 0; pos < 32; pos++ )
    {
      j = i4_bclr ( i4, pos );

      cout << "  " << setw(8) << pos
           << "  " << setw(12) << j << "\n";
    }
  }

  return;
}
//****************************************************************************80

void i4_bset_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_BSET_TEST tests I4_BSET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i4;
  int i4_test[2] = { 101, -31 };
  int j;
  int pos;
  int test;
  int test_num = 2;

  cout << "\n";
  cout << "I4_BSET_TEST\n";
  cout << "  I4_BSET sets a given bit to 1.\n";

  for ( test = 0; test < test_num; test++ )
  {
    i4 = i4_test[test];

    cout << "\n";
    cout << "  Working on I4 = " << i4 << "\n";
    cout << "\n";
    cout << "       Pos     I4_BSET(I4,POS)\n";
    cout << "\n";

    for ( pos = 0; pos < 32; pos++ )
    {
      j = i4_bset ( i4, pos );

      cout << "  " << setw(8) << pos
           << "  " << setw(12) << j << "\n";
    }
  }

  return;
}
//****************************************************************************80

void i4_btest_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_BTEST_TEST tests I4_BTEST.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i4;
  int i4_test[2] = { 101, -31 };
  int j;
  int pos;
  int test;

  cout << "\n";
  cout << "I4_BTEST_TEST\n";
  cout << "  I4_BTEST reports whether a given bit is 0 or 1.\n";

  for ( test = 0; test < 2; test++ )
  {
    i4 = i4_test[test];

    cout << "\n";
    cout << "  Analyze the integer I4 = " << i4 << "\n";
    cout << "\n";
    cout << "       Pos     I4_BTEST(I4,POS)\n";
    cout << "\n";

    for ( pos = 0; pos <= 31; pos++ )
    {
      j = i4_btest ( i4, pos );

      cout << "  " << setw(8) << pos
           << "  " << j << "\n";
    }
  }

  return;
}
//****************************************************************************80

void i4_choose_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_CHOOSE_TEST tests I4_CHOOSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int cnk;
  int k;
  int n;

  cout << "\n";
  cout << "I4_CHOOSE_TEST\n";
  cout << "  I4_CHOOSE evaluates C(N,K).\n";
  cout << "\n";
  cout << "       N       K     CNK\n";

  for ( n = 0; n <= 4; n++ )
  {
    cout << "\n";
    for ( k = 0; k <= n; k++ )
    {
      cnk = i4_choose ( n, k );

      cout                   << "  "
           << setw(6) << n   << "  "
           << setw(6) << k   << "  "
           << setw(6) << cnk << "\n";
    }
  }

  return;
}
//****************************************************************************80

void i4_factor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_FACTOR_TEST tests I4_FACTOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2005
//
{
# define FACTOR_MAX 10

  int factor[FACTOR_MAX];
  int factor_num;
  int i;
  int n;
  int nleft;
  int power[FACTOR_MAX];

  cout << "\n";
  cout << "I4_FACTOR_TEST\n";
  cout << "  I4_FACTOR factors an integer,\n";

  n = 2 * 2 * 17 * 37;

  cout << "\n";
  cout << "  The integer is " << n << "\n";

  i4_factor ( n, FACTOR_MAX, factor_num, factor, power, nleft );

  cout << "\n";
  cout << "  Prime representation:\n";
  cout << "\n";
  cout << "  I  FACTOR(I)  POWER(I)\n";
  cout << "\n";

  if ( abs ( nleft ) != 1 )
  {
    cout << "  " << setw(6) << 0
         << "  " << setw(6) << nleft 
         << "  " << "(Unfactored portion)\n";
  }

  for ( i = 0; i < factor_num; i++ )
  {
    cout << "  " << setw(6) << i+1
         << "  " << setw(6) << factor[i]
         << "  " << setw(6) << power[i] << "\n";
  }
 
  return;
# undef FACTOR_MAX
}
//****************************************************************************80

void i4_fall_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_FALL_TEST tests I4_FALL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 December 2014
//
//  Author:
//
//    John Burkardt
//
{
  int f1;
  int f2;
  int m;
  int n;
  int n_data;

  cout << "\n";
  cout << "I4_FALL_TEST\n";
  cout << "  I4_FALL evaluates the falling factorial function.\n";
  cout << "\n";
  cout << "         M         N     Exact  I4_Fall(M,N)\n";

  n_data = 0;

  while ( 1 )
  {
    i4_fall_values ( n_data, m, n, f1 );

    if ( n_data == 0 )
    {
      break;
    }

    f2 = i4_fall ( m, n );

    cout << "  " << setw(8) << m
         << "  " << setw(8) << n
         << "  " << setw(8) << f1
         << "  " << setw(8) << f2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void i4_gcd_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_GCD_TEST tests I4_GCD.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int k;
  int seed;

  cout << "\n";
  cout << "I4_GCD_TEST\n";
  cout << "  I4_GCD computes the greatest common divisor\n";
  cout << "  of two integers.\n";

  cout << "\n";
  cout << "     I     J    I4_GCD(I,J)\n";
  cout << "\n";

  seed = 123456789;

  for ( k = 1; k <= 15; k++ )
  {
    i = i4_uniform_ab ( -5, 15, seed );
    j = i4_uniform_ab (  1, 15, seed );

    cout << setw(4) << i << "  "
         << setw(4) << j << "  "
         << setw(4) << i4_gcd ( i, j ) << "\n";
  }

  return;
}
//****************************************************************************80

void i4_huge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_HUGE_TEST tests I4_HUGE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    21 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  cout << "\n";
  cout << "I4_HUGE_TEST\n";
  cout << "  I4_HUGE returns a huge integer.\n";
  cout << "\n";
  cout << "  I4_HUGE() = " << i4_huge ( ) << "\n";

  return;
}
//****************************************************************************80

void i4_log_10_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_LOG_10_TEST tests I4_LOG_10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 21

  int i;
  int x[N] = {
    0, 1, 2, 3, 9, 10, 11, 99, 100, 101, 999, 1000, 1001,
   -1, -2, -3, -9, -10, -11, -99, -101 };

  cout << "\n";
  cout << "I4_LOG_10_TEST\n";
  cout << "  I4_LOG_10: whole part of log base 10,\n";
  cout << "\n";
  cout << "     X I4_LOG_10\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout << setw(6) << x[i] << "  "
         << setw(6) << i4_log_10 ( x[i] ) << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void i4_modp_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MODP_TEST tests I4_MODP.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define TEST_NUM 4

  int ndivid[TEST_NUM] = { 50, -50, 50, -50 };
  int nmult;
  int nrem;
  int number[TEST_NUM] = { 107, 107, -107, -107 };
  int test;

  cout << "\n";
  cout << "I4_MODP_TEST\n";
  cout << "  I4_MODP factors a number\n";
  cout << "  into a multiple and a remainder.\n";
  cout << "\n";
  cout << "    Number   Divisor  Multiple Remainder\n";
  cout << "\n";

  for ( test = 0; test < TEST_NUM; test++ )
  {
    nrem = i4_modp ( number[test], ndivid[test] );
    nmult = number[test] / ndivid[test];

    cout << "  " << setw(10) << number[test]
         << "  " << setw(10) << ndivid[test]
         << "  " << setw(10) << nmult
         << "  " << setw(10) << nrem << "\n";
  }

  cout << "\n";
  cout << "  Repeat using C++ percent operator:\n";
  cout << "\n";

  for ( test = 0; test < TEST_NUM; test++ )
  {
    nrem = ( number[test] % ndivid[test] );
    nmult = number[test] / ndivid[test];

    cout << "  " << setw(10) << number[test]
         << "  " << setw(10) << ndivid[test]
         << "  " << setw(10) << nmult
         << "  " << setw(10) << nrem << "\n";
  }

  return;
# undef TEST_NUM
}
//****************************************************************************80

void i4_moebius_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MOEBIUS_TEST tests I4_MOEBIUS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int c1;
  int c2;
  int n;
  int n_data;

  cout << "\n";
  cout << "I4_MOEBIUS_TEST\n";
  cout << "  I4_MOEBIUS evaluates the Moebius function.\n";
  cout << "\n";
  cout << "         N     Exact  I4_Moebius(N)\n";

  n_data = 0;

  while ( 1 )
  {
    moebius_values ( n_data, n, c1 );

    if ( n_data == 0 )
    {
      break;
    }

    c2 = i4_moebius ( n );

    cout << "  " << setw(8) << n
         << "  " << setw(8) << c1
         << "  " << setw(8) << c2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void i4_partition_conj_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_PARTITION_CONJ_TEST tests I4_PARTITION_CONJ.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 14
# define NPART1 4

  int a1[NPART1] = { 2, 5, 1, 4 };
  int a2[N];
  int i;
  int mult1[NPART1] = { 1, 1, 3, 1 };
  int mult2[N];
  int npart2;

  cout << "\n";
  cout << "I4_PARTITION_CONJ_TEST\n";
  cout << "  I4_PARTITION_CONJ conjugates an integer partition.\n";
  cout << "\n";
  cout << "  Original partition:\n";
  cout << "\n";

  i4_partition_print ( N, NPART1, a1, mult1 );

  i4_partition_conj ( N, a1, mult1, NPART1, a2, mult2, npart2 );

  cout << "\n";
  cout << "  Conjugate partition:\n";
  cout << "\n";

  i4_partition_print ( N, npart2, a2, mult2 );

  return;
# undef N
# undef NPART1
}
//****************************************************************************80

void i4_partition_count_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_PARTITION_COUNT_TEST tests I4_PARTITION_COUNT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 20

  int n;
  int n_data;
  int p;
  int p2[N_MAX+1];

  cout << "\n";
  cout << "I4_PARTITION_COUNT_TEST\n";
  cout << "  I4_PARTITION_COUNT counts partitions of an integer.\n";

  n_data = 0;

  cout << "\n";
  cout << "   N     Exact     Count\n";
  cout << "\n";

  for ( ; ; )
  {
    i4_partition_count_values ( n_data, n, p );

    if ( n_data == 0 )
    {
      break;
    }

    cout << setw(4)  << n << "  "
         << setw(10) << p << "  ";

    if ( n <= N_MAX )
    {
      i4_partition_count ( n, p2 );
      cout << setw(10) << p2[n];
    }

    cout << "\n";

  }

  return;
# undef N_MAX
}
//****************************************************************************80

void i4_partition_count2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_PARTITION_COUNT2_TEST tests I4_PARTITION_COUNT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 20

  int n;
  int n_data;
  int p;
  int *p2;

  cout << "\n";
  cout << "I4_PARTITION_COUNT2_TEST\n";
  cout << "  I4_PARTITION_COUNT2 counts partitions of an integer.\n";

  n_data = 0;

  cout << "\n";
  cout << "   N     Exact     Count\n";
  cout << "\n";

  for ( ; ; )
  {
    i4_partition_count_values ( n_data, n, p );

    if ( n_data == 0 )
    {
      break;
    }

    cout                  << "  "
         << setw(4)  << n << "  "
         << setw(10) << p << "  ";

    if ( n <= N_MAX )
    {
      p2 = i4_partition_count2 ( n );
      cout << "  "
           << "      "
           << setw(10) << p2[n];
      delete [] p2;
    }

    cout << "\n";
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void i4_partition_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_PARTITION_NEXT_TEST tests I4_PARTITION_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 7

  int a[N];
  bool done;
  int i;
  int mult[N];
  int npart;
  int rank;

  cout << "\n";
  cout << "I4_PARTITION_NEXT_TEST\n";
  cout << "  I4_PARTITION_NEXT generates partitions of an integer.\n";
  cout << "  Here N = " << N << "\n";
  cout << "\n";

  rank = 0;
  done = true;
 
  for ( ; ; )
  {
    i4_partition_next ( done, a, mult, N, npart );
 
    if ( done )
    {
      break;
    }

    rank = rank + 1;

    i4_partition_print ( N, npart, a, mult );

  }
 
  return;
# undef N
}
//****************************************************************************80

void i4_partition_next2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_PARTITION_NEXT2_TEST tests I4_PARTITION_NEXT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 7

  int a[N];
  int i;
  bool more;
  int mult[N];
  int npart;

  cout << "\n";
  cout << "I4_PARTITION_NEXT2_TEST\n";
  cout << "  I4_PARTITION_NEXT2 produces partitions of an integer.\n";
  cout << "\n";

  more = false;

  for ( ; ; )
  {
    i4_partition_next2 ( N, a, mult, npart, more );

    i4_partition_print ( N, npart, a, mult );

    if ( !more )
    {
      break;
    }

  }
  
  return;
# undef N
}
//****************************************************************************80

void i4_partition_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_PARTITION_PRINT_TEST tests I4_PARTITION_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[4] = { 2, 5, 1, 4 };
  int mult[4] = { 1, 1, 3, 1 };
  int n;
  int npart;

  cout << "\n";
  cout << "I4_PARTITION_PRINT_TEST\n";
  cout << "  I4_PARTITION_PRINT prints an integer partition.\n";
  cout << "\n";

  n = 14;
  npart = 4;
  i4_partition_print ( n, npart, a, mult );

  return;
}
//****************************************************************************80

void i4_partition_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_PARTITION_RANDOM_TEST tests I4_PARTITION_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 8

  int a[N];
  int i;
  int j;
  int mult[N];
  int npart;
  int seed;
  int *table;

  cout << "\n";
  cout << "I4_PARTITION_RANDOM_TEST\n";
  cout << "  I4_PARTITION_RANDOM generates a random partition.\n";
  cout << "\n";

  seed = 123456789;
//
//  Call once just to get the partition table.
//
  table = i4_partition_count2 ( N );

  cout << "\n";
  cout << "  The number of partitions of N.\n";
  cout << "\n";
  cout << "     N    Number of partitions\n";
  cout << "\n";

  for ( j = 0; j < N; j++ )
  {
    cout << setw(6) << j+1      << "  "
         << setw(6) << table[j] << "\n";
  }

  cout << "\n";

  for ( i = 1; i <= 5; i++ )
  {
    i4_partition_random ( N, table, seed, a, mult, npart );

    i4_partition_print ( N, npart, a, mult );

  }
 
  delete [] table;

  return;
# undef N
}
//****************************************************************************80

void i4_partitions_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_PARTITIONS_NEXT_TEST tests I4_PARTITIONS_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 August 2010
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int m[3];
  int msum;
  int s = 3;

  cout << "\n";
  cout << "I4_PARTITIONS_NEXT_TEST\n";
  cout << "  I4_PARTITIONS_NEXT produces the next\n";
  cout << "  nondecreasing partitions of an integer, and\n";
  cout << "  if necessary, increments the integer to keep on going.\n";

  i = 0;
  m[0] = 0;
  m[1] = 0;
  m[2] = 0;

  cout << "\n";
  cout << "   I Sum    Partition\n";
  cout << "\n";
  msum = i4vec_sum ( s, m );
  cout << "  " << setw(2) << i
       << "  " << setw(2) << msum  << "    ";
  for ( j = 0; j < s; j++ )
  {
    cout << setw(2) << m[j];
  }
  cout << "\n";

  for ( i = 1; i <= 15; i++ )
  {
    i4_partitions_next ( s, m );
    msum = i4vec_sum ( s, m );
    cout << "  " << setw(2) << i
         << "  " << setw(2) << msum  << "    ";
    for ( j = 0; j < s; j++ )
    {
      cout << setw(2) << m[j];
    }
    cout << "\n";
  }
  cout << "\n";
  cout << "  You can start from any legal partition.\n";
  cout << "  Here, we restart at ( 2, 1, 0 ).\n";

  i = 0;
  m[0] = 2;
  m[1] = 1;
  m[2] = 0;

  cout << "\n";
  cout << "   I Sum    Partition\n";
  cout << "\n";
  msum = i4vec_sum ( s, m );
  cout << "  " << setw(2) << i
       << "  " << setw(2) << msum  << "    ";
  for ( j = 0; j < s; j++ )
  {
    cout << setw(2) << m[j];
  }
  cout << "\n";

  for ( i = 1; i <= 15; i++ )
  {
    i4_partitions_next ( s, m );
    msum = i4vec_sum ( s, m );
    cout << "  " << setw(2) << i
         << "  " << setw(2) << msum  << "    ";
    for ( j = 0; j < s; j++ )
    {
      cout << setw(2) << m[j];
    }
    cout << "\n";
  }
  return;
}
//****************************************************************************80

void i4_rise_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_RISE_TEST tests I4_RISE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2014
//
//  Author:
//
//    John Burkardt
//
{
  int f1;
  int f2;
  int m;
  int n;
  int n_data;

  cout << "\n";
  cout << "I4_RISE_TEST\n";
  cout << "  I4_RISE evaluates the rising factorial function.\n";
  cout << "\n";
  cout << "         M         N     Exact  I4_RISE(M,N)\n";

  n_data = 0;

  while ( 1 )
  {
    i4_rise_values ( n_data, m, n, f1 );

    if ( n_data == 0 )
    {
      break;
    }

    f2 = i4_rise ( m, n );

    cout << "  " << setw(8) << m
         << "  " << setw(8) << n
         << "  " << setw(8) << f1
         << "  " << setw(8) << f2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void i4_sqrt_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_SQRT_TEST tests I4_SQRT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int q;
  int r;

  cout << "\n";
  cout << "I4_SQRT_TEST\n";
  cout << "  I4_SQRT computes the square root of an integer.\n";
  cout << "\n";
  cout << "       N  Sqrt(N) Remainder\n";
  cout << "\n";

  for ( n = -5; n <= 20; n++ )
  {
    i4_sqrt ( n, q, r );

    cout << setw(9) << n << "  "
         << setw(9) << q << "  "
         << setw(9) << r << "\n";
  }

  return;
}
//****************************************************************************80

void i4_sqrt_cf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_SQRT_CF_TEST tests I4_SQRT_CF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define MAX_TERM 100

  int b[MAX_TERM+1];
  int i;
  int n;
  int n_term;

  cout << "\n";
  cout << "I4_SQRT_CF_TEST\n";
  cout << "  I4_SQRT_CF computes the continued fraction form\n";
  cout << "  of the square root of an integer.\n";
  cout << "\n";
  cout << "   N  Period  Whole  Repeating Part\n";
  cout << "\n";

  for ( n = 1; n <= 20; n++ )
  {
    i4_sqrt_cf ( n, MAX_TERM, n_term, b );
    cout << setw(5) << n << "  "
         << setw(5) << n_term << "  ";
    for ( i = 0; i <= n_term; i++ )
    {
      cout << setw(5) << b[i] << "  ";
    }
    cout << "\n";
  }

  return;
# undef MAX_TERM
}
//****************************************************************************80

void i4_to_chinese_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_CHINESE_TEST tests I4_TO_CHINESE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int i;
  int j;
  int j2;
  int m[N] = { 3, 4, 5, 7 };
  int r[N];

  cout << "\n";
  cout << "I4_TO_CHINESE_TEST\n";
  cout << "  I4_TO_CHINESE computes the Chinese Remainder\n";
  cout << "  representation of an integer.\n";

  i4vec1_print ( N, m, "  The moduli:" );

  j = 37;

  cout << "\n";
  cout << "  The number being analyzed is " << j << "\n";

  i4_to_chinese ( j, N, m, r );

  i4vec1_print ( N, r, "  The remainders:" );

  j2 = chinese_to_i4 ( N, m, r );

  cout << "\n";
  cout << "  The reconstructed number is " << j2 << "\n";

  i4_to_chinese ( j2, N, m, r );

  i4vec1_print ( N, r, "  The remainders of the reconstructed number are:" );

  return;
# undef N
}
//****************************************************************************80

void i4_to_dvec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_DVEC_TEST tests I4_TO_DVEC;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int dvec[6];
  int i;
  int i1;
  int i2;
  int n;
  int seed;

  cout << "\n";
  cout << "I4_TO_DVEC_TEST\n";
  cout << "  I4_TO_DVEC converts an I4 to a DVEC;\n";
  cout << "\n";
  cout << "         I4 => DVEC => I4\n";
  cout << "\n";

  seed = 123456789;
  i1 = i4_uniform_ab ( -10000, 10000, seed );

  n = 6;
  i4_to_dvec ( i1, n, dvec );

  i2 = dvec_to_i4 ( n, dvec );

  cout << "  " << setw(6) << i1 << "  ";
  for  ( i = n - 1; 0 <= i; i-- )
  {
    cout << setw(2) << dvec[i];
  }
  cout << "  " << setw(6) << i2 << "\n";

  return;
}
//****************************************************************************80

void i4_to_i4poly_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_I4POLY_TEST tests I4_TO_I4POLY.;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define DEGREE_MAX 5
# define TEST_NUM 9

  int a[DEGREE_MAX+1];
  int base;
  int base_test[TEST_NUM] = { 2, 2, 2, 3, 4, 5, 6, 23, 24 };
  int degree;
  int i;
  int intval;
  int intval2;
  int intval_test[TEST_NUM] = { 1, 6, 23, 23, 23, 23, 23, 23, 23 };
  int test;

  cout << "\n";
  cout << "I4_TO_I4POLY_TEST\n";
  cout << "  I4_TO_I4POLY converts an integer to a polynomial\n";
  cout << "  in a given base;\n";
  cout << "\n";
  cout << "       I    BASE  DEGREE  Coefficients\n";
  cout << "\n";
  for ( test = 0; test < TEST_NUM; test++ )
  {
    intval = intval_test[test];
    base = base_test[test];
    i4_to_i4poly ( intval, base, DEGREE_MAX, degree, a );
    cout                      << "  "
         << setw(6) << intval << "  "
         << setw(6) << base   << "  "
         << setw(6) << degree << "  ";
    for ( i = 0; i <= degree; i++ )
    {
      cout << setw(6) << a[i] << "  ";
    }
    cout << "\n";
  }
  cout << "\n";
  cout << "  Now let I4_TO_I4POLY convert I to a polynomial,\n";
  cout << "  use I4POLY_TO_I4 to evaluate it, and compare.\n";
  cout << "\n";
  cout << "       I    I2\n";
  cout << "\n";
  for ( test = 0; test < TEST_NUM; test++ )
  {
    intval = intval_test[test];
    base = base_test[test];
    i4_to_i4poly ( intval, base, DEGREE_MAX, degree, a );
    intval2 = i4poly_to_i4 ( degree, a, base );
    cout                       << "  "
         << setw(6) << intval  << "  "
         << setw(6) << intval2 << "\n";
  }

  return;

# undef DEGREE_MAX
# undef TEST_NUM
}
//****************************************************************************80

void i4_to_van_der_corput_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_VAN_DER_CORPUT_TEST tests I4_TO_VAN_DER_CORPUT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  double h;
  int i;
  int j;
  int p;

  cout << "\n";
  cout << "I4_TO_VAN_DER_CORPUT_TEST\n";
  cout << "  I4_TO_VAN_DER_CORPUT computes the elements \n";
  cout << "  of a van der Corput sequence.\n";
  cout << "  The sequence depends on the prime number used\n";
  cout << "  as a base.\n";
  cout << "\n";
  cout << "Base: ";
  for ( j = 1; j <= 5; j++ )
  {
    p = prime ( j );
    cout << setw(10) << p << "  ";
  }
  cout << "\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    cout << setw(4) << i << "  ";
    for ( j = 1; j <= 5; j++ )
    {
      p = prime ( j );
      h = i4_to_van_der_corput ( i, p );
      cout << setw(10) << h << "  ";
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void i4mat_01_rowcolsum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4MAT_02_ROWCOLSUM_TEST tests I4MAT_01_ROWCOLSUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define N 5

  int a[M*N];
  int c[N] = { 2, 2, 2, 2, 1 };
  bool error;
  int r[M] = { 3, 2, 2, 1, 1 };

  cout << "\n";
  cout << "I4MAT_01_ROWCOLSUM_TEST\n";
  cout << "  I4MAT_01_ROWCOLSUM constructs a 01 matrix with\n";
  cout << "  given row and column sums.\n";
  
  i4vec1_print ( M, r, "  The rowsum vector:" );
  i4vec1_print ( N, c, "  The columnsum vector: " );

  i4mat_01_rowcolsum ( M, N, r, c, a, error );

  if ( error )
  {
    cout << "\n";
    cout << "  I4MAT_01_ROWCOLSUM returned error flag.\n";
  }
  else
  {
    i4mat_print ( M, N, a, "  The rowcolsum matrix:" );
  }

  return;
# undef M
# undef N
}
//****************************************************************************80

void i4mat_u1_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4MAT_U1_INVERSE_TEST tests I4MAT_U1_INVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  int a[N*N] = {
    1, 0, 0, 0, 0, 0, 
    1, 1, 0, 0, 0, 0, 
    0, 0, 1, 0, 0, 0, 
    0, 0, 1, 1, 0, 0, 
    0, 0, 0, 0, 1, 0, 
   75, 0, 0, 0, 1, 1 };
  int  b[N*N];

  cout << "\n";
  cout << "I4MAT_U1_INVERSE_TEST\n";
  cout << "  I4MAT_U1_INVERSE inverts a unit upper triangular matrix.\n";

  i4mat_print ( N, N, a, "  The input matrix:" );

  i4mat_u1_inverse ( N, a, b );

  i4mat_print ( N, N, b, "  The inverse matrix:" );

  return;
# undef N
}
//****************************************************************************80

void i4mat_perm0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4MAT_PERM0_TEST tests I4MAT_PERM0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 May 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 9

  int a[N*N];
  int i;
  int j;
  int p[N] = { 1,2,8,5,6,7,4,3,0 };

  cout << "\n";
  cout << "I4MAT_PERM0_TEST\n";
  cout << "  I4MAT_PERM0 reorders an integer matrix in place.\n";
  cout << "  The rows and columns use the same permutation.\n";

  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*N] = (i+1) * 10 + (j+1);
    }
  }

  i4mat_print ( N, N, a, "  The input matrix:" );
 
  perm0_print ( N, p, "  The row and column permutation:" );
 
  i4mat_perm0 ( N, a, p );
 
  i4mat_print ( N, N, a, "  The permuted matrix:" );
 
  return;
# undef N
}
//****************************************************************************80

void i4mat_2perm0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4MAT_2PERM0_TEST tests I4MAT_2PERM0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 May 2015
//
//  Author:
//
//    John Burkardt
//
{
# define M 9
# define N 7

  int a[M*N];
  int i;
  int j;
  int p[M] = { 1,2,8,5,6,7,4,3,0 };
  int q[N] = { 2,3,4,5,6,0,1 };

  cout << "\n";
  cout << "I4MAT_2PERM0_TEST\n";
  cout << "  I4MAT_2PERM0 reorders an integer matrix in place.\n";
  cout << "  Rows and columns use different permutations.\n";

  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*M] = (i+1) * 10 + (j+1);
    }
  }
 
  i4mat_print ( M, N, a, "  The input matrix:" );
 
  perm0_print ( M, p, "  The row permutation:" );

  perm0_print ( N, q, "  The column permutation:" );
 
  i4mat_2perm0 ( M, N, a, p, q );
 
  i4mat_print ( M, N, a, "  The permuted matrix:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void i4poly_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_TEST test I4POLY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  int i;
  int a[N];
  int iopt;
  int test;
  int val;
  int x0;

  cout << "\n";
  cout << "I4POLY_TEST\n";
  cout << "  I4POLY converts between power sum, factorial\n";
  cout << "  and Taylor forms, and can evaluate a polynomial\n";
  cout << "\n";
 
  for ( test = 1; test <= 6; test++ )
  {
    if ( test == 1 )
    {
      iopt = -3;
    }
    else if ( test == 2 )
    {
      iopt = -2;
    }
    else if ( test == 3 )
    {
      iopt = -1;
      x0 = 2;
    }
    else if ( test == 4 )
    {
      iopt = 0;
      x0 = 2;
    }
    else if ( test == 5 )
    {
      iopt = 6;
      x0 = 2;
    }
    else if ( test == 6 )
    {
      iopt = 6;
      x0 = -2;
    }

    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    a[4] = 0;
    a[5] = 1;

    if ( test == 1 )
    {
      i4vec1_print ( N, a, "  All calls have input A as follows:" );
    }
 
    i4poly ( N, a, x0, iopt, val );
 
    cout << "\n";
    cout << "  Option IOPT = " << iopt << "\n";

    if ( -1 <= iopt )
    {
      cout << "  X0 = " << x0 << "\n";
    }

    if ( iopt == -3 || iopt == -2 || iopt > 0 )
    {
      i4vec1_print ( N, a, "  Output array:" );
    }

    if ( iopt == -1 || iopt == 0 )
    {
      cout << "  Value = " << val << "\n";
    }
 
  }

  return;
# undef N
}
//****************************************************************************80

void i4poly_add_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_ADD_TEST tests I4POLY_ADD.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[6] = { 0, 1, 2, 3, 4, 5 };
  int b[6] = { 1, -2, 7, 8, 0, -5 };
  int *c;
  int na = 5;
  int nb = 5;
  int nc;
  int nc2;

  cout << "\n";
  cout << "I4POLY_ADD_TEST\n";
  cout << "  I4POLY_ADD adds two polynomials.\n";

  i4poly_print ( na, a, "  Polynomial A:" );

  i4poly_print ( nb, b, "  Polynomial B:" );

  c = i4poly_add ( na, a, nb, b );

  nc = i4_max ( na, nb );

  nc2 = i4poly_degree ( nc, c );

  i4poly_print ( nc2, c, "  Polynomial C = A+B:" );

  delete [] c;

  return;
}
//****************************************************************************80

void i4poly_cyclo_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_CYCLO_TEST tests I4POLY_CYCLO.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 10

  int phi[N_MAX+1];
  int n;

  cout << "\n";
  cout << "I4POLY_CYCLO_TEST\n";
  cout << "  I4POLY_CYCLO computes cyclotomic polynomials.\n";

  for ( n = 0; n <= N_MAX; n++ )
  {
    cout << "\n";
    cout << "  N = " << n << "\n";
    cout << "\n";

    i4poly_cyclo ( n, phi );

    i4poly_print ( n, phi, "  The cyclotomic polynomial:" );
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void i4poly_degree_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_DEGREE_TEST tests I4POLY_DEGREE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[11] = { 0, 1, 0, 3, 4, 0, 6, 7, 0, 0, 0 };
  int degree;
  int n = 4;

  cout << "\n";
  cout << "I4POLY_DEGREE_TEST\n";
  cout << "  I4POLY_DEGREE determines the degree of an I4POLY.\n";

  i4poly_print ( n, a, "  The polynomial:" );

  degree = i4poly_degree ( n, a );

  cout << "\n";
  cout << "The polyomial degree = " << degree << "\n";

  return;
}
//****************************************************************************80

void i4poly_dif_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_DIF_TEST tests I4POLY_DIF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 November 2013
//
//  Author:
//
//    John Burkardt
//
{
  int a[11];
  int *b;
  int d;
  int na;
  int test_num = 2;
  int test;

  cout << "\n";
  cout << "I4POLY_DIF_TEST\n";
  cout << "  I4POLY_DIF computes derivatives of an I4POLY.\n";
  cout << "\n";
//
//  1: Differentiate X^3 + 2*X^2 - 5*X - 6 once.
//  2: Differentiate X^4 + 3*X^3 + 2*X^2 - 2  3 times.
//
  for ( test = 1; test <= test_num; test++ )
  {
    if ( test == 1 )
    {
      na = 3;
      d = 1;
      a[0] = -6;
      a[1] = -5;
      a[2] = 2;
      a[3] = 1;
    }
    else if ( test == 2 )
    {
      na = 4;
      d = 3;
      a[0] = -2;
      a[1] = 5;
      a[2] = 2;
      a[3] = 3;
      a[4] = 1;
    }

    i4poly_print ( na, a, "  The polynomial A:" );

    cout << "\n";
    cout << "  Differentiate A " << d << " times.\n";

    b = i4poly_dif ( na, a, d );
    i4poly_print ( na - d, b, "  The derivative, B:" );
    delete [] b;
  }

  return;
}
//****************************************************************************80

void i4poly_div_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_DIV_TEST tests I4POLY_DIV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int a[11];
  int b[11];
  int i;
  int na;
  int nb;
  int nq;
  int nr;
  int ntest = 2;
  int q[11];
  int r[11];
  int test;

  cout << "\n";
  cout << "I4POLY_DIV_TEST\n";
  cout << "  I4POLY_DIV computes the quotient and\n";
  cout << "  remainder for polynomial division.\n";
  cout << "\n";
//
//  1: Divide X^3 + 2*X^2 - 5*X - 6  by X-2.  
//     Quotient is 3+4*X+X^2, remainder is 0.
//
//  2: Divide X^4 + 3*X^3 + 2*X^2 - 2  by  X^2 + X - 3.
//     Quotient is X^2 + 2*X + 3, remainder 8*X + 7.
//
  for ( test = 1; test <= ntest; test++ )
  {
    if ( test == 1 )
    {
      na = 3;
      a[0] = -6;
      a[1] = -5;
      a[2] =  2;
      a[3] =  1;

      nb = 1;
      b[0] = -2;
      b[1] =  1;
    }
    else if ( test == 2 )
    {
      na = 4;
      a[0] = -2;
      a[1] =  5;
      a[2] =  2;
      a[3] =  3;
      a[4] =  1;
      nb = 2;
      b[0] = -3;
      b[1] =  1;
      b[2] =  1;
    }

    i4poly_print ( na, a, "  The polynomial to be divided, A:" );
    i4poly_print ( nb, b, "  The divisor polynomial, B:" );

    i4poly_div ( na, a, nb, b, nq, q, nr, r );
 
    i4poly_print ( nq, q, "  The quotient polynomial, Q:" );
    i4poly_print ( nr, r, "  The remainder polynomial, R:" );
  }

  return;
}
//****************************************************************************80

void i4poly_mul_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_MUL_TEST tests I4POLY_MUL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define MAXN 5

  int a[MAXN+1];
  int b[MAXN+1];
  int c[MAXN+1];
  int na;
  int nb;
  int ntest = 2;
  int test;

  cout << "\n";
  cout << "I4POLY_MUL_TEST\n";
  cout << "  I4POLY_MUL multiplies two polynomials.\n";
  cout << "\n";
//
//  1: Multiply (1+X) times (1-X).  Answer is 1-X^2.
//  2: Multiply (1+2*X+3*X^2) by (1-2*X). Answer is 1 + 0*X - X^2 - 6*X^3
//
  for ( test = 1; test <= ntest; test++ )
  {
    if ( test == 1 )
    {
      na = 1;
      a[0] =  1;
      a[1] =  1;
      nb = 1;
      b[0] =  1;
      b[1] = -1;
    }
    else if ( test == 2 )
    {
      na = 2;
      a[0] =  1;
      a[1] =  2;
      a[2] =  3;
      nb = 1;
      b[0] =  1;
      b[1] = -2;
    }

    i4poly_mul ( na, a, nb, b, c );

    i4poly_print ( na, a, "  The factor A:" );

    i4poly_print ( nb, b, "  The factor B:" );

    i4poly_print ( na+nb, c, "  The product C = A*B:" );
  }

  return;
# undef MAXN
}
//****************************************************************************80

void i4poly_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_PRINT_TEST tests I4POLY_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[5] = { -2, 5, 2, 3, 1 };
  int n = 4;

  cout << "\n";
  cout << "I4POLY_PRINT_TEST\n";
  cout << "  I4POLY_PRINT prints an I4POLY.\n";

  i4poly_print ( n, a, "  The polynomial:" );

  return;
}
//****************************************************************************80

void i4poly_to_i4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4POLY_TO_I4_TEST tests I4POLY_TO_I4;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define DEGREE_MAX 5
# define TEST_NUM 9

  int a[DEGREE_MAX+1];
  int base;
  int base_test[TEST_NUM] = { 2, 2, 2, 3, 4, 5, 6, 23, 24 };
  int degree;
  int i;
  int intval;
  int intval2;
  int intval_test[TEST_NUM] = { 1, 6, 23, 23, 23, 23, 23, 23, 23 };
  int test;

  cout << "\n";
  cout << "I4POLY_TO_I4_TEST\n";
  cout << "  I4POLY_TO_I4 evaluates an integer polynomial\n";
  cout << "  at a given point;\n";
  cout << "\n";
  cout << "       I    BASE  DEGREE  Coefficients\n";
  cout << "\n";
  for ( test = 0; test < TEST_NUM; test++ )
  {
    intval = intval_test[test];
    base = base_test[test];
    i4_to_i4poly ( intval, base, DEGREE_MAX, degree, a );
    cout                      << "  "
         << setw(6) << intval << "  "
         << setw(6) << base   << "  "
         << setw(6) << degree << "  ";
    for ( i = 0; i <= degree; i++ )
    {
      cout << setw(6) << a[i] << "  ";
    }
    cout << "\n";
  }
  cout << "\n";
  cout << "  Now let I4_TO_I4POLY convert I to a polynomial,\n";
  cout << "  use I4POLY_TO_I4 to evaluate it, and compare.\n";
  cout << "\n";
  cout << "       I    I2\n";
  cout << "\n";
  for ( test = 0; test < TEST_NUM; test++ )
  {
    intval = intval_test[test];
    base = base_test[test];
    i4_to_i4poly ( intval, base, DEGREE_MAX, degree, a );
    intval2 = i4poly_to_i4 ( degree, a, base );
    cout                       << "  "
         << setw(6) << intval  << "  "
         << setw(6) << intval2 << "\n";
  }

  return;

# undef DEGREE_MAX
# undef TEST_NUM
}
//****************************************************************************80

void i4vec_backtrack_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_BACKTRACK_TEST tests I4VEC_BACKTRACK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int found_num;
  int i;
  int indx;
  int k;
  int n = 8;
  int maxstack = 100;
  int ncan[8];
  int nstack;
  int stacks[100];
  int t;
  int total;
  int w[8] = { 15, 22, 14, 26, 32, 9, 16, 8 };
  int x[8];

  cout << "\n";
  cout << "I4VEC_BACKTRACK_TEST\n";
  cout << "  I4VEC_BACKTRACK uses backtracking, seeking an I4VEC X of\n";
  cout << "  N values which satisfies some condition.\n";

  cout << "\n";
  cout << "  In this demonstration, we have 8 integers W(I).\n";
  cout << "  We seek all subsets that sum to 53.\n";
  cout << "  X(I) is 0 or 1 if the entry is skipped or used.\n";
  cout << "\n";

  t = 53;

  for ( i = 0; i < n; i++ )
  {
    x[i] = 0;
  }
  indx = 0;
  k = 0;
  nstack = 0;
  for ( i = 0; i < n; i++ )
  {
    ncan[i] = 0;
  }

  found_num = 0;

  for ( ; ; )
  {
    i4vec_backtrack ( n, maxstack, x, indx, k, nstack, stacks, ncan );

    if ( indx == 1 )
    {
      found_num = found_num + 1;
      cout << "  " << setw(2) << found_num << "   ";

      total = i4vec_dot_product ( n, w, x );
      cout << "  " << setw(3) << total << ":  ";

      for ( i = 0; i < n; i++ )
      {
        if ( x[i] == 1 )
        {
          cout << "  " << setw(2) << w[i];
        }
      }
      cout << "\n";
    }
//
//  Given that we've chose X(1:K-1), what are our choices for X(K)?
//
//     if T < TOTAL, 
//       no choices
//     if T = TOTAL, 
//       X(K) = 0
//     if T > TOTAL and K < N, 
//       X(k) = 0
//       If ( W(K)+TOTAL <= T ) X(K) = 1
//     If T > TOTAL and K = N,
//       If ( W(K) + TOTAL) = T ) X(K) = 1
//
    else if ( indx == 2 )
    {
      total = i4vec_dot_product ( k - 1, w, x );

      if ( t < total )
      {
        ncan[k-1] = 0;
      }
      else if ( t == total )
      {
        ncan[k-1] = ncan[k-1] + 1;
        stacks[nstack] = 0;
        nstack = nstack + 1;
      }
      else if ( total < t && k < n )
      {
        ncan[k-1] = ncan[k-1] + 1;
        stacks[nstack] = 0;
        nstack = nstack + 1;

        if ( total + w[k-1] <= t )
        {
          ncan[k-1] = ncan[k-1] + 1;
          stacks[nstack] = 1;
          nstack = nstack + 1;
        }
      }
      else if ( total < t && k == n )
      {
        if ( total + w[k-1] == t )
        {
          ncan[k-1] = ncan[k-1] + 1;
          stacks[nstack] = 1;
          nstack = nstack + 1;
        }
      }
    }
    else
    {
      cout << "\n";
      cout << "  Done!\n";
      break;
    }
  }

  return;
}
//****************************************************************************80

void i4vec_descends_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_DESCENDS_TEST tests I4VEC_DESCENDS;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int *a;
  int i;
  int seed;

  cout << "\n";
  cout << "I4VEC_DESCENDS_TEST\n";
  cout << "  I4VEC_DESCENDS is true if an integer vector decreases.\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    a = i4vec_uniform_ab_new ( N, 1, N, seed );

    i4vec1_print ( N, a, "  The integer array to search:" );
 
    if ( i4vec_descends ( N, a ) )
    {
      cout << "  The preceding vector is descending.\n";
    }
    else
    {
      cout << "  The preceding vector is not descending.\n";
    }
    delete [] a;
  }

  return;
# undef N
}
//****************************************************************************80

void i4vec_frac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_FRAC_TEST tests I4VEC_FRAC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int *a;
  int afrac;
  int i;
  int k;
  int seed;

  cout << "\n";
  cout << "I4VEC_FRAC_TEST\n";
  cout << "  I4VEC_FRAC: K-th smallest integer vector entry.\n";
  cout << "\n";

  seed = 123456789;

  a = i4vec_uniform_ab_new ( N, 1, 2*N, seed );

  i4vec1_print ( N, a, "  The integer array to search:" );

  cout << "\n";
  cout << "     K   K-th smallest\n";
  cout << "\n";

  for ( k = 1; k <= N; k++ )
  {
    afrac = i4vec_frac ( N, a, k );

    cout << setw(6) << k        << "  "
         << setw(6) << afrac    << "\n";

  }

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void i4vec_index_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_INDEX_TEST tests I4VEC_INDEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 20

  int *a;
  int aval;
  int first;
  int seed;

  cout << "\n";
  cout << "I4VEC_INDEX_TEST\n";
  cout << "  I4VEC_INDEX returns the index of the first occurrence\n";
  cout << "  of a given value in an integer vector.\n";
  cout << "\n";

  seed = 123456789;

  a = i4vec_uniform_ab_new ( N, 1, N/2, seed );

  aval = a[N/2];

  i4vec1_print ( N, a, "  The integer array to search:" );

  first = i4vec_index ( N, a, aval );

  cout << "\n";
  cout << "  The value searched for is " << aval << "\n";
  cout << "  The index of first occurrence is " << first << "\n";

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void i4vec_maxloc_last_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_MAXLOC_LAST_TEST tests I4VEC_MAXLOC_LAST;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 20

  int *a;
  int last;
  int seed;

  cout << "\n";
  cout << "I4VEC_MAXLOC_LAST_TEST\n";
  cout << "  I4VEC_MAXLOC_LAST: index of the last maximal\n";
  cout << "  entry in an integer vector.\n";
  cout << "\n";

  seed = 123456789;

  a = i4vec_uniform_ab_new ( N, 1, N/4, seed );

  i4vec1_print ( N, a, "  The integer array to search:" );
 
  last = i4vec_maxloc_last ( N, a );

  cout << "\n";
  cout << "  Index of last maximal entry is " << last << "\n";

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void i4vec_pairwise_prime_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PAIRWISE_PRIME_TEST tests I4VEC_PAIRWISE_PRIME;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int *a;
  int i;
  int seed;

  cout << "\n";
  cout << "I4VEC_PAIRWISE_PRIME_TEST\n";
  cout << "  I4VEC_PAIRWISE_PRIME is true if an integer vector\n";
  cout << "  is pairwise prime.\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    a = i4vec_uniform_ab_new ( N, 1, N, seed );

    i4vec1_print ( N, a, "  The array to check:" );
 
    if ( i4vec_pairwise_prime ( N, a ) )
    {
      cout << "  The preceding vector is pairwise prime.\n";
    }
    else
    {
      cout << "  The preceding vector is not pairwise prime.\n";
    }
    delete [] a;
  }

  return;
# undef N
}
//****************************************************************************80

void i4vec_reverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_REVERSE_TEST tests I4VEC_REVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int *a;
  int seed;

  cout << "\n";
  cout << "I4VEC_REVERSE_TEST\n";
  cout << "  I4VEC_REVERSE reverses an integer vector.\n";
  cout << "\n";

  seed = 123456789;

  a = i4vec_uniform_ab_new ( N, 1, N, seed );

  i4vec1_print ( N, a, "  The integer array:" );

  i4vec_reverse ( N, a );

  i4vec1_print ( N, a, "  The reversed integer array:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void i4vec_sort_bubble_a_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SORT_BUBBLE_A_TEST tests I4VEC_SORT_BUBBLE_A.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 20

  int *a;
  int seed;

  cout << "\n";
  cout << "I4VEC_SORT_BUBBLE_A_TEST\n";
  cout << "  I4VEC_SORT_BUBBLE_A ascending sorts an integer vector\n";
  cout << "  using bubble sort.\n";
  cout << "\n";

  seed = 123456789;

  a = i4vec_uniform_ab_new ( N, 0, 3*N, seed );

  i4vec1_print ( N, a, "  Unsorted array:" );

  i4vec_sort_bubble_a ( N, a );

  i4vec1_print ( N, a, "  Sorted array:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void i4vec_sort_heap_index_d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SORT_HEAP_INDEX_D_TEST tests I4VEC_SORT_HEAP_INDEX_D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 20

  int *a;
  int i;
  int *indx;
  int seed;

  cout << "\n";
  cout << "I4VEC_SORT_HEAP_INDEX_D_TEST\n";
  cout << "  I4VEC_SORT_HEAP_INDEX_D descending index-sorts\n";
  cout << "  an integer vector using heap sort.\n";
  cout << "\n";

  seed = 123456789;

  a = i4vec_uniform_ab_new ( N, 0, 3*N, seed );

  i4vec1_print ( N, a, "  Unsorted array:" );

  indx = i4vec_sort_heap_index_d ( N, a );

  cout << "\n";
  cout << "     I  INDX[I]  A[INDX[I]-1]\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout << setw(6) << i          << "  "
         << setw(6) << indx[i]    << "  "
         << setw(6) << a[indx[i]] << "\n";
  }

  delete [] a;
  delete [] indx;

  return;
# undef N
}
//****************************************************************************80

void i4vec_transpose_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_TRANSPOSE_PRINT_TEST tests I4VEC_TRANSPOSE_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int n;

  cout << "\n";
  cout << "I4VEC_TRANSPOSE_PRINT_TEST\n";
  cout << "  I4VEC_TRANSPOSE_PRINT prints an integer vector\n";
  cout << "  with 5 entries to a row, and an optional title.\n";

  n = 12;
  a = i4vec_indicator1_new ( n );

  i4vec_transpose_print ( n, a, "  My array:  " );

  delete [] a;

  return;
}
//****************************************************************************80

void i4vec_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_UNIFORM_AB_TEST tests I4VEC_UNIFORM_AB_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int a = -100;
  int b = 200;
  int n = 20;
  int seed = 123456789;
  int *v;

  cout << "\n";
  cout << "I4VEC_UNIFORM_AB_TEST\n";
  cout << "  I4VEC_UNIFORM_AB_NEW computes pseudorandom values\n";
  cout << "  in an interval [A,B].\n";

  cout << "\n";
  cout << "  The lower endpoint A = " << a << "\n";
  cout << "  The upper endpoint B = " << b << "\n";
  cout << "  The initial seed is " << seed << "\n";
  cout << "\n";

  v = i4vec_uniform_ab_new ( n, a, b, seed );

  i4vec_print ( n, v, "  The random vector:" );

  delete [] v;

  return;
}
//****************************************************************************80

void index_box_next_2d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_BOX_NEXT_2D_TEST tests INDEX_BOX_NEXT_2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  bool more;
  int n1 = 5;
  int n2 = 3;
  int n;

  cout << "\n";
  cout << "INDEX_BOX_NEXT_2D_TEST\n";
  cout << "  INDEX_BOX_NEXT_2D produces IJ indices that\n";
  cout << "  lie on the surface of a box in 2D.\n";
  cout << "\n";
  cout << "  The box has logical dimensions:\n";
  cout << setw(3) << n1 << "  "
       << setw(3) << n2 << "\n";
  cout << "\n";
  cout << "   #    I   J\n";
  cout << "\n";

  more = false;
  n = 0;

  for ( ; ; )
  {
    index_box_next_2d ( n1, n2, i, j, more );

    if ( !more )
    {
      break;
    }

    n = n + 1;
    cout << setw(3) << n << "  "
         << setw(3) << i << "  "
         << setw(3) << j << "\n";
  }

  return;
}
//****************************************************************************80

void index_box_next_3d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_BOX_NEXT_3D_TEST tests INDEX_BOX_NEXT_3D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int k;
  bool more;
  int n1 = 5;
  int n2 = 3;
  int n3 = 4;
  int n;

  cout << "\n";
  cout << "INDEX_BOX_NEXT_3D_TEST\n";
  cout << "  INDEX_BOX_NEXT_3D produces IJK indices that\n";
  cout << "  lie on the surface of a box.\n";
  cout << "\n";
  cout << "  The box has logical dimensions:\n";
  cout << setw(3) << n1 << "  "
       << setw(3) << n2 << "  "
       << setw(3) << n3 << "\n";
  cout << "\n";
  cout << "   #    I   J   K\n";
  cout << "\n";

  more = false;
  n = 0;

  for ( ; ; )
  {
    index_box_next_3d ( n1, n2, n3, i, j, k, more );

    if ( !more )
    {
      break;
    }

    n = n + 1;
    cout << setw(3) << n << "  "
         << setw(3) << i << "  "
         << setw(3) << j << "  "
         << setw(3) << k << "\n";

  }

  return;
}
//****************************************************************************80

void index_box2_next_2d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_BOX2_NEXT_2D_TEST tests INDEX_BOX2_NEXT_2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int ic = 10;
  int j;
  int jc = 20;
  bool more;
  int n1 = 4;
  int n2 = 3;
  int n;

  cout << "\n";
  cout << "INDEX_BOX2_NEXT_2D_TEST\n";
  cout << "  INDEX_BOX2_NEXT_2D produces IJ indices that\n";
  cout << "  lie on the surface of a box2 in 2D.\n";
  cout << "\n";
  cout << "  The box has half-widths:\n";
  cout << setw(3) << n1 << "  "
       << setw(3) << n2 << "\n";
  cout << "\n";
  cout << "  and has center cell:\n";
  cout << setw(3) << ic << "  "
       << setw(3) << jc << "\n";
  cout << "\n";
  cout << "   #    I   J\n";
  cout << "\n";

  more = false;
  n = 0;

  for ( ; ; )
  {
    index_box2_next_2d ( n1, n2, ic, jc, i, j, more );

    if ( !more )
    {
      break;
    }

    n = n + 1;
    cout << setw(3) << n << "  "
         << setw(3) << i << "  "
         << setw(3) << j << "\n";
  }

  return;
}
//****************************************************************************80

void index_box2_next_3d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_BOX2_NEXT_3D_TEST tests INDEX_BOX2_NEXT_3D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int ic = 10;
  int j;
  int jc = 20;
  int k;
  int kc = 30;
  bool more;
  int n1 = 5;
  int n2 = 3;
  int n3 = 4;
  int n;

  cout << "\n";
  cout << "INDEX_BOX2_NEXT_3D_TEST\n";
  cout << "  INDEX_BOX2_NEXT_3D produces IJK indices that\n";
  cout << "  lie on the surface of a box.\n";
  cout << "\n";
  cout << "  The box has half widths:\n";
  cout << setw(3) << n1 << "  "
       << setw(3) << n2 << "  "
       << setw(3) << n3 << "\n";
  cout << "\n";
  cout << "  and central cell:\n";
  cout << setw(3) << ic << "  "
       << setw(3) << jc << "  "
       << setw(3) << kc << "\n";
  cout << "\n";
  cout << "  We will only print a PORTION of the data!\n";
  cout << "\n";
  cout << "   #    I   J   K\n";
  cout << "\n";

  more = false;
  n = 0;

  for ( ; ; )
  {
    index_box2_next_3d ( n1, n2, n3, ic, jc, kc, i, j, k, more );

    if ( !more )
    {
      break;
    }

    n = n + 1;

    if ( n <= 10 || 370 <= n )
    {
      cout << setw(3) << n << "  "
           << setw(3) << i << "  "
           << setw(3) << j << "  "
           << setw(3) << k << "\n";
    }

  }

  return;
}
//****************************************************************************80

void index_next0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_NEXT0_TEST tests INDEX_NEXT0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N];
  int hi = 3;
  int i;
  bool more;

  cout << "\n";
  cout << "INDEX_NEXT0_TEST\n";
  cout << "  INDEX_NEXT0 generates all indices of an\n";
  cout << "  array of given shape, with\n";
  cout << "  lower limit 1 and given upper limit.\n";
  cout << "\n";
  cout << "  Number of index entries = " << N << "\n";
  cout << "  Coordinate maximum HI =   " << hi << "\n";
 
  cout << "\n";
  cout << "  Index arrays:\n";
  cout << "\n";

  more = false;

  for ( ; ; )
  {
    index_next0 ( N, hi, a, more );

    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }

  }

  return;
# undef N
}
//****************************************************************************80

void index_next1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_NEXT1_TEST tests INDEX_NEXT1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N];
  int hi[N] = { 4, 2, 3 };
  int i;
  bool more;

  cout << "\n";
  cout << "INDEX_NEXT1_TEST\n";
  cout << "  INDEX_NEXT1 generates all indices of an\n";
  cout << "  array of given shape, with\n";
  cout << "  lower limit 1 and given upper limits.\n";
  cout << "\n";
  cout << "  Number of index entries = " << N << "\n";

  i4vec1_print ( N, hi, "  Coordinate maximum indices:" );
 
  cout << "\n";
  cout << "  Index arrays:\n";
  cout << "\n";

  more = false;

  for ( ; ; )
  {
    index_next1 ( N, hi, a, more );

    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }

  }

  return;
# undef N
}
//****************************************************************************80

void index_next2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_NEXT2_TEST tests INDEX_NEXT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N];
  int hi[N] = { 11, -3, 1 };
  int i;
  int lo[N] = { 10, -5, 0 };
  bool more;

  cout << "\n";
  cout << "INDEX_NEXT2_TEST\n";
  cout << "  INDEX_NEXT2 generates all indices of an\n";
  cout << "  array of given shape with given\n";
  cout << "  lower and upper limits.\n";
  cout << "\n";
  cout << "  Number of index entries = " << N << "\n";
  cout << "\n";
  cout << "  Coordinate, Maximum Index\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout << setw(8) << i+1   << "  "
         << setw(8) << lo[i] << "  "
         << setw(8) << hi[i] << "\n";
  }
 
  cout << "\n";
  cout << "Index arrays:\n";
  cout << "\n";

  more = false;

  for ( ; ; )
  {
    index_next2 ( N, lo, hi, a, more );

    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }

  }

  return;
# undef N
}
//****************************************************************************80

void index_rank0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_RANK0_TEST tests INDEX_RANK0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N] = { 3, 1, 2 };
  int hi = 3;
  int i;
  int rank;

  cout << "\n";
  cout << "INDEX_RANK0_TEST\n";
  cout << "  INDEX_RANK0 ranks an index with\n";
  cout << "  lower limit 1 and given upper limit.\n";
  cout << "\n";
  cout << "  Number of index entries = " << N << "\n";
  cout << "\n";
  cout << "  Coordinate maximum Index = " << hi << "\n";
  cout << "\n";

  i4vec1_print ( N, a, "  The index array:" );

  rank = index_rank0 ( N, hi, a );

  cout << "\n";
  cout << "  The rank of this object is " << rank << "\n";

  return;
# undef N
}
//****************************************************************************80

void index_rank1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_RANK1_TEST tests INDEX_RANK1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N] = { 4, 1, 2 };
  int hi[N] = { 4, 2, 3 };
  int i;
  int rank;

  cout << "\n";
  cout << "INDEX_RANK1_TEST\n";
  cout << "  INDEX_RANK1 ranks an index with\n";
  cout << "  lower limit 1 and given upper limits.\n";
  cout << "\n";
  cout << "  Number of index entries = " << N << "\n";
  cout << "\n";
  cout << "  Coordinate, Maximum Index\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout << setw(10) << i+1   << "  "
         << setw(10) << hi[i] << "\n";
  }
 
  i4vec1_print ( N, a, "  The index array:" );

  rank = index_rank1 ( N, hi, a );

  cout << "\n";
  cout << "  The rank of this object is " << rank << "\n";

  return;
# undef N
}
//****************************************************************************80

void index_rank2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_RANK2_TEST tests INDEX_RANK2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N] = { 1, 11, 5 };
  int hi[N] = { 2, 11, 6 };
  int i;
  int lo[N] = { 1, 10, 4 };
  int rank;

  cout << "\n";
  cout << "INDEX_RANK2_TEST\n";
  cout << "  INDEX_RANK2 ranks an index with given\n";
  cout << "  lower and upper limits.\n";
  cout << "\n";
  cout << "  Number of index entries = " << N << "\n";
  cout << "\n";
  cout << "  Coordinate, Minimum index, Maximum Index\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout << setw(10) << i+1   << "  "
         << setw(10) << lo[i] << "  "
         << setw(10) << hi[i] << "\n";
  }
 
  i4vec1_print ( N, a, "  The index array:" );

  rank = index_rank2 ( N, lo, hi, a );

  cout << "\n";
  cout << "  The rank of this object is " << rank << "\n";

  return;
# undef N
}
//****************************************************************************80

void index_unrank0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_UNRANK0_TEST tests INDEX_UNRANK0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N];
  int hi = 3;
  int i;
  int j;
  int maxrank;
  int rank;

  cout << "\n";
  cout << "INDEX_UNRANK0_TEST\n";
  cout << "  INDEX_UNRANK0 unranks a multi-index.\n";
  cout << "\n";
  cout << "  The multi-index has dimension " << N << "\n";
  cout << "\n";
  cout << "  The upper limit is HI = " << hi << "\n";
  cout << "\n";
  cout << "  Rank, Multi-Index:\n";
  cout << "\n";
 
  maxrank = i4_power ( hi, N );

  for ( rank = 1; rank <= maxrank; rank++ )
  {
    index_unrank0 ( N, hi, rank, a );
    cout << setw(3) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(6) << a[i] << "  ";
    }
    cout << "\n";
  }
 
  return;
# undef N
}
//****************************************************************************80

void index_unrank1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_UNRANK1_TEST tests INDEX_UNRANK1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N];
  int hi[N] = { 4, 2, 3 };
  int i;
  int j;
  int maxrank;
  int rank;

  cout << "\n";
  cout << "INDEX_UNRANK1_TEST\n";
  cout << "  INDEX_UNRANK1 unranks a multi-index.\n";
  cout << "\n";
  cout << "  The multi-index has dimension " << N << "\n";

  i4vec1_print ( N, hi, "  The upper limits:" );

  cout << "\n";
  cout << "  Rank, Multi-Index:\n";
  cout << "\n";
 
  maxrank = i4vec_product ( N, hi );

  for ( rank = 1; rank <= maxrank; rank++ )
  {
    index_unrank1 ( N, hi, rank, a );
    cout << setw(3) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(6) << a[i] << "  ";
    }
    cout << "\n";
  }
 
  return;
# undef N
}
//****************************************************************************80

void index_unrank2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INDEX_UNRANK2_TEST tests INDEX_UNRANK2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N];
  int hi[N] = { 2, 11, 6 };
  int i;
  int j;
  int lo[N] = { 1, 10, 4 };
  int rank;

  cout << "\n";
  cout << "INDEX_UNRANK2_TEST\n";
  cout << "  INDEX_UNRANK2 unranks a multi-index.\n";
  cout << "\n";
  cout << "  The multi-index has dimension " << N << "\n";
  cout << "\n";
  cout << "  The lower and upper limits are:\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout << setw(10) << i     << "  "
         << setw(10) << lo[i] << "  "
         << setw(10) << hi[i] << "\n";
  }
  cout << "\n";
  cout << "  Rank, Multi-Index:\n";
  cout << "\n";
 
  rank = 7;

  index_unrank2 ( N, lo, hi, rank, a );
  cout << setw(3) << rank << "  ";
  for ( i = 0; i < N; i++ )
  {
    cout << setw(6) << a[i] << "  ";
  }
  cout << "\n";
 
  return;
# undef N
}
//****************************************************************************80

void inverse_mod_n_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INVERSE_MOD_N_TEST tests INVERSE_MOD_N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 November 2009
//
//  Author:
//
//    John Burkardt
//
{
  int b;
  int n;
  int y;
  int z;

  cout << "\n";
  cout << "INVERSE_MOD_N_TEST\n";
  cout << "  INVERSE_MOD_N seeks Y, the inverse of B mod N,\n";
  cout << "  so that mod ( B * Y, N ) = 1, but returns 0\n";
  cout << "  if the inverse does not exist.\n";

  cout << "\n";
  cout << "     B     N     Y     Z = ( ( B * Y ) % N )\n";
  cout << "\n";

  for ( n = 1; n <= 10;  n++ )
  {
    for ( b = 1; b < n; b++ )
    {
      y = inverse_mod_n ( b, n );
      z = ( ( b * y ) % n );
      cout << "  " << setw(2) << b
           << "  " << setw(2) << n
           << "  " << setw(2) << y
           << "  " << setw(2) << z << "\n";
    }
  }

  return;
}
//****************************************************************************80

void inversion_to_perm0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INVERSION_TO_PERM0_TEST tests INVERSION_TO_PERM0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 June 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
 
  int ins[N];
  int perm[N] = { 2, 4, 0, 3, 1 };
  int perm2[N];

  cout << "\n";
  cout << "INVERSION_TO_PERM0_TEST\n";
  cout << "  INVERSION_TO_PERM0: inversion to permutation (0,...,N-1).\n";
  cout << "\n";

  i4vec1_print ( N, perm, "  The permutation:" );
  
  perm0_to_inversion ( N, perm, ins );

  i4vec1_print ( N, ins, "  The inversion sequence:" );

  inversion_to_perm0 ( N, ins, perm2 );

  i4vec1_print ( N, perm2, "  The recovered permutation:" );
 
  return;
# undef N
}
//****************************************************************************80

void involute_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INVOLUTE_ENUM_TEST tests INVOLUTE_ENUM;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int i;
  int s[N+1];

  cout << "\n";
  cout << "INVOLUTE_ENUM_TEST\n";
  cout << "  INVOLUTE_ENUM counts involutions;\n";
  cout << "\n";

  involute_enum ( N, s );

  cout << "\n";
  cout << "  N    # of involutions\n";
  cout << "\n";

  for ( i = 0; i <= N; i++ )
  {
    cout << setw(10) << i    << "  "
         << setw(10) << s[i] << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void jfrac_to_rfrac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    JFRAC_TO_RFRAC_TEST tests JFRAC_TO_RFRAC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 October 2010
//
//  Author:
//
//    John Burkardt
//
{
# define MAXM 10

  int i;
  int m;
  double p[MAXM];
  double q[MAXM];
  double r[MAXM];
  double s[MAXM];
  int seed;
//
//  Generate the data, but force Q(M+1) to be 1.  
//  That will make it easier to see that the two operations are inverses
//  of each other.  JFRAC_TO_RFRAC is free to scale its output, and chooses
//  a scaling in which Q(M+1) is 1.
//
  seed = 123456789;
  m = 6;
  r8vec_uniform_01 ( m, seed, p );
  r8vec_uniform_01 ( m + 1, seed, q );

  for ( i = 0; i < m; i++ )
  {
    q[i] = q[i] / q[m];
  }
  q[m] = 1.0;

  cout << "\n";
  cout << "JFRAC_TO_RFRAC_TEST\n";
  cout << "  JFRAC_TO_RFRAC converts a J fraction\n";
  cout << "  to a rational polynomial fraction.\n";
  cout << "\n";
  cout << "  The original rational polynomial coefficients:\n";
  cout << "\n";

  for ( i = 0; i < m; i++ )
  {
    cout << setw(14) << p[i] << "  ";
  }
  cout << "\n";

  for ( i = 0; i < m+1; i++ )
  {
    cout << setw(14) << q[i] << "  ";
  }
  cout << "\n";
 
  rfrac_to_jfrac ( m, p, q, r, s );
 
  cout << "\n";
  cout << "  The J fraction coefficients:\n";
  cout << "\n";

  for ( i = 0; i < m; i++ )
  {
    cout << setw(14) << r[i] << "  ";
  }
  cout << "\n";
  for ( i = 0; i < m; i++ )
  {
    cout << setw(14) << s[i] << "  ";
  }
  cout << "\n";
 
  jfrac_to_rfrac ( m, r, s, p, q );

  cout << "\n";
  cout << "  The recovered rational polynomial:\n";
  cout << "\n";

  for ( i = 0; i < m; i++ )
  {
    cout << setw(14) << p[i] << "  ";
  }
  cout << "\n";

  for ( i = 0; i < m+1; i++ )
  {
    cout << setw(14) << q[i] << "  ";
  }
  cout << "\n";

  return;
# undef MAXM
}
//****************************************************************************80

void josephus_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    JOSEPHUS_TEST tests JOSEPHUS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int m;
  int n;
  int x;

  cout << "\n";
  cout << "JOSEPHUS_TEST\n";
  cout << "  JOSEPHUS solves Josephus problems.\n";
  cout << "\n";
  cout << "    N    M    K	 X\n";
  cout << "\n";

  m = 3;
  n = 41;
  k = 41;
  x = josephus ( n, m, k );

  cout << setw(5) << n << "  "
       << setw(5) << m << "  "
       << setw(5) << k << "  "
       << setw(5) << x << "\n";

  m = -38;
  n = 41;
  k = 41;
  x = josephus ( n, m, k );

  cout << setw(5) << n << "  "
       << setw(5) << m << "  "
       << setw(5) << k << "  "
       << setw(5) << x << "\n";

  m = 3;
  n = 41;
  k = 40;
  x = josephus ( n, m, k );

  cout << setw(5) << n << "  "
       << setw(5) << m << "  "
       << setw(5) << k << "  "
       << setw(5) << x << "\n";

  m = 2;
  n = 64;
  k = 64;
  x = josephus ( n, m, k );

  cout << setw(5) << n << "  "
       << setw(5) << m << "  "
       << setw(5) << k << "  "
       << setw(5) << x << "\n";

  m = 2;
  n = 1000;
  k = 1000;
  x = josephus ( n, m, k );

  cout << setw(5) << n << "  "
       << setw(5) << m << "  "
       << setw(5) << k << "  "
       << setw(5) << x << "\n";

  return;
}
//****************************************************************************80

void ksub_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_NEXT_TEST tests KSUB_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[3];
  int i;
  int k;
  int m;
  int m2;
  bool more;
  int n;
  int rank;

  cout << "\n";
  cout << "KSUB_NEXT_TEST\n";
  cout << "  KSUB_NEXT generates all K subsets of an N set\n";
  cout << "  in lexicographic order.\n";
  cout << "\n";

  rank = 0;

  n = 5;
  k = 3;
  for ( i = 0; i < k; i++ )
  {
    a[i] = 0;
  }
  more = false;
  m = 0;
  m2 = 0;
 
  for ( ; ; )
  {
    ksub_next ( n, k, a, more, m, m2 );

    rank = rank + 1;

    cout << setw(4) << rank << "    ";
    for ( i = 0; i < k; i++ )
    {
      cout << setw(4) << a[i];
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }

  }
 
  return;
}
//****************************************************************************80

void ksub_next2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_NEXT2_TEST tests KSUB_NEXT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define K 3

  int a[K];
  int i;
  int i_in;
  int i_out;
  int j;
  bool more;
  int n = 5;
  int rank;

  cout << "\n";
  cout << "KSUB_NEXT2_TEST\n";
  cout << "  KSUB_NEXT2 generates the next K subset of an\n";
  cout << "  N set by the revolving door method.\n";
  cout << "\n";
  cout << "Rank  Subset  Added  Removed\n";
  cout << "\n";
//
//  KSUB_NEXT2 does not have a good way of stopping.  
//  We will save the starting subset, and stop when the
//  new subset is the same as the starting one.
//
  i_in = 0;
  i_out = 0;
  rank = 0;
 
  i4vec_indicator1 ( K, a );
 
  for ( ; ; )
  {
    rank = rank + 1;
    cout << setw(4) << rank << "  ";
    for ( i = 0; i < K; i++ )
    {
      cout << setw(2) << a[i] << "  ";
    }
    cout << "   ";
    cout << setw(2) << i_in  << "  ";
    cout << setw(2) << i_out << "\n";
 
    ksub_next2 ( n, K, a, i_in, i_out );
 
    more = false;

    for ( i = 1; i <= K; i++ )
    {
      if ( a[i-1] != i )
      {
        more = true;
      }
    }

    if ( !more )
    {
      break;
    }

  }
 
  return;
# undef K
}
//****************************************************************************80

void ksub_next3_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_NEXT3_TEST tests KSUB_NEXT3.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define K 3

  int a[K];
  int i;
  int i_in = 0;
  int i_out = 0;
  bool more;
  int n = 5;
  int rank;

  cout << "\n";
  cout << "KSUB_NEXT3_TEST\n";
  cout << "  KSUB_NEXT3 generates all K subsets of an N set\n";
  cout << "  using the revolving door method.\n";
  cout << "\n";
  cout << "Rank    Subset  Added Removed\n";
  cout << "\n";

  rank = 0;
  more = false;
 
  for ( ; ; )
  {
    ksub_next3 ( n, K, a, more, i_in, i_out );

    rank = rank + 1;
    cout << setw(4) << rank << "  ";
    for ( i = 0; i < K; i++ )
    {
      cout << setw(2) << a[i] << "  ";
    }
    cout << "   ";
    cout << setw(2) << i_in  << "  ";
    cout << setw(2) << i_out << "\n";

    if ( !more )
    {
      break;
    }

  }

  return;
# undef K
}
//****************************************************************************80

void ksub_next4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_NEXT4_TEST tests KSUB_NEXT4.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define K 3

  int a[K];
  bool done;
  int i;
  int n = 5;
  int rank;

  cout << "\n";
  cout << "KSUB_NEXT4_TEST\n";
  cout << "  KSUB_NEXT4 generates K subsets of an N set.\n";
  cout << "  N = " << n << "\n";
  cout << "  K = " << K << "\n";
  cout << "\n";
  cout << "Rank    Subset\n";
  cout << "\n";

  done = true;
  rank = 0;
 
  for ( ; ; )
  {
    ksub_next4 ( n, K, a, done );
 
    if ( done )
    {
      break;
    }

    rank = rank + 1;
    cout << setw(4) << rank << "  ";
    cout << "  ";
    for ( i = 0; i < K; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

  }
 
  return;
# undef K
}
//****************************************************************************80

void ksub_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANDOM_TEST tests KSUB_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define K 3

  int a[K];
  int i;
  int j;
  int n = 5;
  int seed;

  cout << "\n";
  cout << "KSUB_RANDOM_TEST\n";
  cout << "  KSUB_RANDOM generates a random K subset of an N set.\n";
  cout << "  Set size is N =    " << n << "\n";
  cout << "  Subset size is K = " << K << "\n";
  cout << "\n";
 
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ksub_random ( n, K, seed, a );
    for ( j = 0; j < K; j++ )
    {
      cout << "  " << setw(3) << a[j];
    }
    cout << "\n";
  }
 
  return;
# undef K
}
//****************************************************************************80

void ksub_random2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANDOM2_TEST tests KSUB_RANDOM2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define K 3

  int a[K];
  int i;
  int j;
  int n = 5;
  int seed;

  cout << "\n";
  cout << "KSUB_RANDOM2_TEST\n";
  cout << "  KSUB_RANDOM2 generates a random K subset of an N set.\n";
  cout << "  Set size is N =    " << n << "\n";
  cout << "  Subset size is K = " << K << "\n";
  cout << "\n";
 
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ksub_random2 ( n, K, seed, a );
    for ( j = 0; j < K; j++ )
    {
      cout << "  " << setw(3) << a[j];
    }
    cout << "\n";
  }
 
  return;
# undef K
}
//****************************************************************************80

void ksub_random3_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANDOM3_TEST tests KSUB_RANDOM3.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define K 3
# define N 5

  int a[N];
  int i;
  int j;
  int seed;

  cout << "\n";
  cout << "KSUB_RANDOM3_TEST\n";
  cout << "  KSUB_RANDOM3 generates a random K subset of an N set.\n";
  cout << "  Set size is N =    " << N << "\n";
  cout << "  Subset size is K = " << K << "\n";
  cout << "\n";
 
  seed = 123456789;

  for ( i = 1; i <= 10; i++ )
  {
    ksub_random3 ( N, K, seed, a );
    for ( j = 0; j < N; j++ )
    {
      cout << "  " << setw(3) << a[j];
    }
    cout << "\n";
  }
 
  return;
# undef K
# undef N
}
//****************************************************************************80

void ksub_random4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANDOM4_TEST tests KSUB_RANDOM4.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define K 3
# define N 5

  int a[N];
  int i;
  int j;
  int seed;

  cout << "\n";
  cout << "KSUB_RANDOM4_TEST\n";
  cout << "  KSUB_RANDOM4 generates a random K subset of an N set.\n";
  cout << "  Set size is N =    " << N << "\n";
  cout << "  Subset size is K = " << K << "\n";
  cout << "\n";
 
  seed = 123456789;

  for ( i = 1; i <= 10; i++ )
  {
    ksub_random4 ( N, K, seed, a );
    for ( j = 0; j < K; j++ )
    {
      cout << "  " << setw(3) << a[j];
    }
    cout << "\n";
  }
 
  return;
# undef K
# undef N
}
//****************************************************************************80

void ksub_random5_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANDOM5_TEST tests KSUB_RANDOM5.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 June 2011
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int i;
  int j;
  int k = 5;
  int n = 52;
  int seed;

  cout << "\n";
  cout << "KSUB_RANDOM5_TEST\n";
  cout << "  KSUB_RANDOM5 generates a random K subset of an N set.\n";
  cout << "  Set size is N =    " << n << "\n";
  cout << "  Subset size is K = " << k << "\n";
  cout << "\n";
 
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    a = ksub_random5 ( n, k, seed );
    for ( j = 0; j < k; j++ )
    {
      cout << "  " << setw(3) << a[j];
    }
    cout << "\n";
    delete [] a;
  }
 
  return;
}
//****************************************************************************80

void ksub_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANK_TEST tests KSUB_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 6
# define K 3

  int a[K] = { 1, 3, 5 };
  int i;
  int rank;

  cout << "\n";
  cout << "KSUB_RANK_TEST\n";
  cout << "  KSUB_RANK: determine the rank of a K subset of an N set.\n";
  cout << "\n";
  cout << "  For N = " << N << "\n";
  cout << "  and K = " << K << "\n";
  cout << "  the subset is:\n";
  cout << "\n";

  for ( i = 0; i < K; i++ )
  {
    cout << setw(4) << a[i];
  }
  cout << "\n";

  ksub_rank ( K, a, rank );

  cout << "\n";
  cout << "  The computed rank is " << rank << "\n";

  return;

# undef N
# undef K
}
//****************************************************************************80

void ksub_to_comp_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_TO_COMP_TEST tests KSUB_TO_COMP.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 December 2013
//
//  Author:
//
//    John Burkardt
//
{
  int ac[5];
  int as[4];
  int i;
  int j;
  int kc;
  int ks;
  int nc;
  int ns;
  int seed;
  
  cout << "\n";
  cout << "KSUB_TO_COMP_TEST\n";
  cout << "  KSUB_TO_COMP returns the composition corresponding to a K subset.\n";

  nc = 10;
  kc = 5;
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    cout << "\n";

    comp_random ( nc, kc, seed, ac );
    cout << "  COMP:";
    for ( j = 0; j < kc; j++ )
    {
      cout << setw(4) << ac[j];
    }
    cout << "\n";

    comp_to_ksub ( nc, kc, ac, ns, ks, as );
    cout << "  KSUB:";
    for ( j = 0; j < ks; j++ )
    {
      cout << setw(4) << as[j];
    }
    cout << "\n";

    ksub_to_comp ( ns, ks, as, nc, kc, ac );
    cout << "  COMP:";
    for ( j = 0; j < kc; j++ )
    {
      cout << setw(4) << ac[j];
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void ksub_to_compnz_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_TO_COMPNZ_TEST tests KSUB_TO_COMPNZ.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2013
//
//  Author:
//
//    John Burkardt
//
{
  int ac[5];
  int as[4];
  int i;
  int j;
  int kc;
  int ks;
  int nc;
  int ns;
  int seed;
  
  cout << "\n";
  cout << "KSUB_TO_COMPNZ_TEST\n";
  cout << "  KSUB_TO_COMPNZ returns the nonzero composition \n";
  cout << "  corresponding to a K subset.\n";

  nc = 10;
  kc = 5;
  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    cout << "\n";

    compnz_random ( nc, kc, seed, ac );
    cout << "  COMPNZ:";
    for ( j = 0; j < kc; j++ )
    {
      cout << setw(4) << ac[j];
    }
    cout << "\n";

    compnz_to_ksub ( nc, kc, ac, ns, ks, as );
    cout << "  KSUB:  ";
    for ( j = 0; j < ks; j++ )
    {
      cout << setw(4) << as[j];
    }
    cout << "\n";

    ksub_to_compnz ( ns, ks, as, nc, kc, ac );
    cout << "  COMPNZ:";
    for ( j = 0; j < kc; j++ )
    {
      cout << setw(4) << ac[j];
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void ksub_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_UNRANK_TEST tests KSUB_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define K 3

  int i;
  int a[K];
  int n = 5;
  int rank;

  rank = 8;

  cout << "\n";
  cout << "KSUB_UNRANK_TEST\n";
  cout << "  KSUB_UNRANK: find the K-subset of an N set\n";
  cout << "  of a given rank.\n";
  cout << "\n";
  cout << "  For N = " << n << "\n";
  cout << "  and K = " << K << "\n";
  cout << "  and the desired rank is " << rank << "\n";

  ksub_unrank ( K, rank, a );

  cout << "\n";
  cout << "  The subset of the given rank is:\n";
  cout << "\n";

  for ( i = 0; i < K; i++ )
  {
    cout << setw(4) << a[i];
  }
  cout << "\n";

  return;
# undef K
}
//****************************************************************************80

void l4vec_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4VEC_NEXT_TEST tests L4VEC_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool done;
  int i;
  bool l4vec[3];
  int n = 3;

  cout << "\n";
  cout << "L4VEC_NEXT_TEST\n";
  cout << "  L4VEC_NEXT generates logical vectors in order.\n";
  cout << "\n";

  for ( i = 0; i < n; i++ )
  {
    l4vec[i] = false;
  }
 
  done = false;

  for ( ; ; )
  {
    cout << "  ";
    for ( i = 0; i < n; i++ )
    {
      cout << l4vec[i];
    }
    cout << "\n";

    if ( done )
    {
      break;
    }

    l4vec_next ( n, l4vec );

    done = true;
    for ( i = 0; i < n; i++ )
    {
      if ( ! l4vec[i] )
      {
        done = false;
      }
    }
  }
 
  return;
}
//****************************************************************************80

void matrix_product_opt_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MATRIX_PRODUCT_OPT_TEST tests MATRIX_PRODUCT_OPT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  int cost;
  int i;
  int order[N-1];
  int rank[N+1] = { 4, 2, 3, 1, 2, 2, 3 };

  cout << "\n";
  cout << "MATRIX_PRODUCT_OPT_TEST\n";
  cout << "  MATRIX_PRODUCT_OPT seeks the optimal order\n";
  cout << "  for a chain of matrix products.\n";
  cout << "\n";
  cout << "  Matrix ranks:\n";
  cout << "\n";
  cout << "   I    R    C\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout << setw(5) << i         << "  "
         << setw(5) << rank[i]   << "  "
         << setw(5) << rank[i+1] << "\n";
  }

  matrix_product_opt ( N, rank, cost, order );

  cout << "\n";
  cout << "  Optimal cost is " << cost << "\n";

  i4vec1_print ( N-1, order, "  Ordering:" );

  return;
# undef N
}
//****************************************************************************80

void moebius_matrix_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MOEBIUS_MATRIX_TEST tests MOEBIUS_MATRIX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 11

  int i;
  int ih[N*N] = {
    0,0,1,1,0,0,0,0,0,0,0, 
    0,0,0,0,0,0,0,1,0,0,0, 
    0,1,0,0,0,0,0,0,0,0,0, 
    0,1,0,0,0,0,0,0,0,0,0, 
    0,0,0,1,0,0,0,0,0,0,0, 
    1,0,0,0,1,0,0,0,1,0,0, 
    0,0,0,0,0,1,0,0,0,1,1, 
    0,0,0,0,0,0,0,0,0,0,0, 
    0,0,1,1,0,0,0,0,0,0,0, 
    1,0,0,0,0,0,0,0,1,0,0, 
    0,0,0,0,0,0,0,0,1,0,0 };
  int j;
  int matrix[N*N];

  cout << "\n";
  cout << "MOEBIUS_MATRIX_TEST\n";
  cout << "  MOEBIUS_MATRIX computes the Moebius matrix.\n";
 
  i4mat_print ( N, N, ih, "  The input matrix:" );

  moebius_matrix ( N, ih, matrix );
 
  i4mat_print ( N, N, matrix, "  The Moebius matrix:" );
 
  return;
# undef N
}
//****************************************************************************80

void monomial_count_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MONOMIAL_COUNT_TEST tests MONOMIAL_COUNT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2008
//
//  Author:
//
//    John Burkardt
//
{
  int degree_max = 9;
  int dim;
  int total;

  cout << "\n";
  cout << "MONOMIAL_COUNT_TEST\n";
  cout << "  MONOMIAL_COUNT counts the number of monomials of\n";
  cout << "  degrees 0 through DEGREE_MAX in a space of dimension DIM.\n";

  cout << "\n";
  cout << "  DIM  Count\n";
  cout << "\n";

  for ( dim = 1; dim <= 6; dim++ )
  {
    total = monomial_count ( degree_max, dim );
    cout << "  " << setw(2) << dim
         << "  " << setw(8) << total << "\n";
  }

  return;
}
//****************************************************************************80

void monomial_counts_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MONOMIAL_COUNTS_TEST tests MONOMIAL_COUNTS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2008
//
//  Author:
//
//    John Burkardt
//
{
  int *counts;
  int degree;
  int degree_max = 9;
  int dim;
  int total;

  cout << "\n";
  cout << "MONOMIAL_COUNTS\n";
  cout << "  MONOMIAL_COUNTS counts the number of monomials of\n";
  cout << "  degrees 0 through DEGREE_MAX in a space of dimension DIM.\n";

  for ( dim = 1; dim <= 6; dim++ )
  {
    counts = monomial_counts ( degree_max, dim );

    cout << "\n";
    cout << "  DIM = " << dim << "\n";
    cout << "\n";

    for ( degree = 0; degree <= degree_max; degree++ )
    {
      cout << "  " << setw(8) << degree
           << "  " << setw(8) << counts[degree] << "\n";
    }

    total = 0;
    for ( degree = 0; degree <= degree_max; degree++ )
    {
      total = total + counts[degree];
    }
    cout << "\n";
    cout << "     Total"
         << "  " << setw(8) << total << "\n";

    delete [ ] counts;
  }

  return;
}
//****************************************************************************80

void morse_thue_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MORSE_THUE_TEST tests MORSE_THUE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 100

  int i;
  int ihi;
  int ilo;
  int s[N+1];

  cout << "\n";
  cout << "MORSE_THUE_TEST\n";
  cout << "  MORSE_THUE computes the Morse-Thue numbers.\n";
  cout << "\n";

  for ( i = 0; i <= N; i++ )
  {
    s[i] = morse_thue ( i );
  }

  for ( ilo = 0; ilo <= N; ilo = ilo + 10 )
  {
    cout << "  ";
    ihi = i4_min ( ilo + 9, N );
    for ( i = ilo; i <= ihi; i++ )
    {
      cout << setw(1) << s[i];
    }
    cout << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void multinomial_coef1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MULTINOMIAL_COEF1_TEST tests MULTINOMIAL_COEF1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define MAXFACTOR 5

  int factor[MAXFACTOR];
  int i;
  int j;
  int n;
  int ncomb;
  int nfactor;

  cout << "\n";
  cout << "MULTINOMIAL_COEF1_TEST\n";
  cout << "  MULTINOMIAL_COEF1 computes multinomial\n";
  cout << "  coefficients using the Gamma function;\n";

  cout << "\n";
  cout << "  Line 10 of the BINOMIAL table:\n";
  cout << "\n";

  n = 10;
  nfactor = 2;

  for ( i = 0; i <= n; i++ )
  {
    factor[0] = i;
    factor[1] = n - i;

    ncomb = multinomial_coef1 ( nfactor, factor );

    cout << setw(4) << factor[0] << "  "
         << setw(4) << factor[1] << "  "
         << "    "
         << setw(5) << ncomb << "\n";

  }

  cout << "\n";
  cout << "  Level 5 of the TRINOMIAL coefficients:\n";

  n = 5;
  nfactor = 3;

  for ( i = 0; i <= n; i++ )
  {
    factor[0] = i;

    cout << "\n";

    for ( j = 0; j <= n - factor[0]; j++ )
    {
      factor[1] = j;
      factor[2] = n - factor[0] - factor[1];

      ncomb = multinomial_coef1 ( nfactor, factor );

      cout << setw(4) << factor[0] << "  "
           << setw(4) << factor[1] << "  "
           << setw(4) << factor[2] << "  "
           << "    "
           << setw(5) << ncomb << "\n";
    }
  }

  return;
# undef MAXFACTOR
}
//****************************************************************************80

void multinomial_coef2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MULTINOMIAL_COEF2_TEST tests MULTINOMIAL_COEF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define MAXFACTOR 5

  int factor[MAXFACTOR];
  int i;
  int j;
  int n;
  int ncomb;
  int nfactor;

  cout << "\n";
  cout << "MULTINOMIAL_COEF2_TEST\n";
  cout << "  MULTINOMIAL_COEF2 computes multinomial\n";
  cout << "  coefficients directly.\n";

  cout << "\n";
  cout << "  Line 10 of the BINOMIAL table:\n";
  cout << "\n";

  n = 10;
  nfactor = 2;

  for ( i = 0; i <= n; i++ )
  {
    factor[0] = i;
    factor[1] = n - i;

    ncomb = multinomial_coef2 ( nfactor, factor );

    cout << setw(4) << factor[0] << "  "
         << setw(4) << factor[1] << "  "
         << "    "
         << setw(5) << ncomb << "\n";

  }

  cout << "\n";
  cout << "  Level 5 of the TRINOMIAL coefficients:\n";

  n = 5;
  nfactor = 3;

  for ( i = 0; i <= n; i++ )
  {
    factor[0] = i;

    cout << "\n";

    for ( j = 0; j <= n - factor[0]; j++ )
    {
      factor[1] = j;
      factor[2] = n - factor[0] - factor[1];

      ncomb = multinomial_coef2 ( nfactor, factor );

      cout << setw(4) << factor[0] << "  "
           << setw(4) << factor[1] << "  "
           << setw(4) << factor[2] << "  "
           << "    "
           << setw(5) << ncomb << "\n";

    }

  }

  return;
# undef MAXFACTOR
}
//****************************************************************************80

void multiperm_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MULTIPERM_ENUM_TEST tests MULTIPERM_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int counts[N];
  int i;
  int k;
  int number;
  int seed = 123456789;
  int test;
  int test_num = 5;
  
  cout << "\n";
  cout << "MULTIPERM_ENUM_TEST\n";
  cout << "  MULTIPERM_ENUM enumerates multipermutations.\n";
  cout << "\n";
  cout << "  N is the number of objects to be permuted.\n";
  cout << "  K is the number of distinct types of objects.\n";
  cout << "  COUNTS is the number of objects of each type.\n";
  cout << "  NUMBER is the number of multipermutations.\n";
  cout << "\n";
  cout << "  Number       N       K       Counts(1:K)\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  {  
    k = i4_uniform_ab ( 1, N, seed );

    compnz_random ( N, k, seed, counts );

    number = multiperm_enum ( N, k, counts );

    cout << "  " << setw(6) << number
         << "  " << setw(6) << N
         << "  " << setw(6) << k;
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << counts[i];
    }
    cout << "\n";
  }
  
  return;
# undef N
}
//****************************************************************************80

void multiperm_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MULTIPERM_NEXT_TEST tests MULTIPERM_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  int a[N] = { 1, 2, 2, 3, 3, 3 };
  int i;
  bool more;
  int tally;
  
  cout << "\n";
  cout << "MULTIPERM_NEXT_TEST\n";
  cout << "  MULTIPERM_NEXT computes multipermutations in\n";
  cout << "  lexical order.\n";
  cout << "\n";

  tally = 0;
  more = true;
 
  while ( more )
  {
    tally = tally + 1;

    cout << "  " << setw(4) << tally;
    for ( i = 0; i < N; i++ )
    {
      cout << "  " << setw(2) << a[i];
    }
    cout << "\n";

    multiperm_next ( N, a, more );
  }
 
  return;
# undef N
}
//****************************************************************************80

void nim_sum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NIM_SUM_TEST tests NIM_SUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 32

  int i;
  unsigned int i1vec[N];
  unsigned int i2vec[N];
  unsigned int i3vec[N];
  int ihi = 1000;
  int ilo = 0;
  int ntest = 5;
  int seed;
  unsigned int ui1;
  unsigned int ui2;
  unsigned int ui3;

  cout << "\n";
  cout << "NIM_SUM_TEST\n";
  cout << "  NIM_SUM computes the Nim sum of two integers.\n";
  cout << "\n";
  cout << "    I    J    Nim(I+J)\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= ntest; i++ )
  {
    ui1 = ( unsigned int ) i4_uniform_ab ( ilo, ihi, seed );
    ui4_to_ubvec ( ui1, N, i1vec );

    ui2 = ( unsigned int ) i4_uniform_ab ( ilo, ihi, seed );
    ui4_to_ubvec ( ui2, N, i2vec );

    ui3 = nim_sum ( ui1, ui2 );
    ui4_to_ubvec ( ui3, N, i3vec );

    cout << "\n";
    cout << "  I1, I2, I3 in decimal:\n";
    cout << "\n";

    cout                  << "  "
         << setw(5) << ui1 << "\n";
    cout                  << "  "
        << setw(5) << ui2 << "\n";
    cout                  << "  "
        << setw(5) << ui3 << "\n";

    cout << "\n";
    cout << "  I1, I2, I3 in binary:\n";
    cout << "\n";

    ubvec_print ( N, i1vec, " " );
    ubvec_print ( N, i2vec, " " );
    ubvec_print ( N, i3vec, " " );
  }

  return;
# undef N
}
//****************************************************************************80

void padovan_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PADOVAN_TEST tests PADOVAN;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int i;
  int p[N];

  cout << "\n";
  cout << "PADOVAN_TEST\n";
  cout << "  PADOVAN computes the Padovan numbers.\n";
  cout << "\n";

  padovan ( N, p );

  cout << "\n";
  cout << "   N    P(N)\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout                    << "  "
         << setw(4) << i    << "  "
         << setw(6) << p[i] << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void pell_basic_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PELL_BASIC_TEST tests PELL_BASIC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int d;
  int q;
  int r;
  int x0;
  int x1;
  int y0;
  int y1;

  cout << "\n";
  cout << "PELL_BASIC_TEST\n";
  cout << "  PELL_BASIC solves the basic Pell equation.\n";

  cout << "\n";
  cout << "       D       X        Y         R\n";
  cout << "\n";

  for ( d = 2; d <= 20; d++ )
  {
    i4_sqrt ( d, q, r );

    if ( r != 0 )
    {
      pell_basic ( d, x0, y0 );

      r = x0 * x0 - d * y0 * y0;

      cout << setw(9) << d  << "  "
           << setw(9) << x0 << "  "
           << setw(9) << y0 << "  "
           << setw(9) << r  << "\n";
    }
  }

  return;
}
//****************************************************************************80

void pell_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PELL_NEXT_TEST tests PELL_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int d;
  int q;
  int r;
  int x0;
  int x1;
  int y0;
  int y1;

  cout << "\n";
  cout << "PELL_NEXT_TEST\n";
  cout << "  PELL_NEXT computes the next solution.\n";
  cout << "\n";
  cout << "       D       X        Y         R\n";
  cout << "\n";

  for ( d = 2; d <= 20; d++ )
  {
    i4_sqrt ( d, q, r );

    if ( r != 0 )
    {
      pell_basic ( d, x0, y0 );

      r = x0 * x0 - d * y0 * y0;

      cout << setw(9) << d  << "  "
           << setw(9) << x0 << "  "
           << setw(9) << y0 << "  "
           << setw(9) << r  << "\n";

      pell_next ( d, x0, y0, x0, y0, x1, y1 );

      r = x1 * x1 - d * y1 * y1;

      cout << "         "   << "  "
           << setw(9) << x1 << "  "
           << setw(9) << y1 << "  "
           << setw(9) << r  << "\n";

    }

  }

  return;
}
//****************************************************************************80

void pent_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PENT_ENUM_TEST tests PENT_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int i;

  cout << "\n";
  cout << "PENT_ENUM_TEST\n";
  cout << "  PENT_ENUM counts points in pentagons.\n";
  cout << "\n";
  cout << "   N  Pent(N)\n";
  cout << "\n";

  for ( i = 0; i <= N; i++ )
  {
    cout << setw(4) << i               << "  "
         << setw(6) << pent_enum ( i ) << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void perm_ascend_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_ASCEND_TEST tests PERM_ASCEND.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 9

  int length;
  int p[N] = { 1,2,8,5,6,7,4,3,0 };
  int subseq[N];

  cout << "\n";
  cout << "PERM_ASCEND_TEST\n";
  cout << "  PERM_ASCEND determines the length of the longest\n";
  cout << "  increasing subsequence in a permutation.\n";

  perm0_print ( N, p, "  The permutation:" );

  perm_ascend ( N, p, length, subseq );

  cout << "\n";
  cout << "  The length of the longest increasing subsequence is " << 
    length << "\n";

  i4vec1_print ( length, subseq, "  A longest increasing subsequence:" );

  return;
# undef N
}
//****************************************************************************80

void perm_fixed_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_FIXED_ENUM_TEST tests PERM_FIXED_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int fnm;
  int m;
  int n = 10;

  cout << "\n";
  cout << "PERM_FIXED_ENUM_TEST\n";
  cout << "  PERM_FIXED_ENUM enumerates the permutations\n";
  cout << "  of N objects that leave M unchanged.\n";
  cout << "\n";
  cout << "  For this test, N = " << n << "\n";
  cout << "\n";
  cout << "    M    F(N,M)\n";
  cout << "\n";

  for ( m = 0; m <= n; m++ )
  {
    fnm = perm_fixed_enum ( n, m );

    cout                   << "  "
         << setw(3) << m   << "  "
         << setw(8) << fnm << "\n";
  }

  return;
}
//****************************************************************************80

void perm0_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_PRINT_TEST tests PERM0_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 7;
  int p[7] = { 6, 1, 3, 0, 4, 2, 5 };

  cout << "\n";
  cout << "PERM0_PRINT_TEST\n";
  cout << "  PERM0_PRINT prints a permutation of (0,...,N-1).\n";

  perm0_print ( n, p, "  The 0-based permutation:" );
  
  return;
}
//****************************************************************************80

void perm0_break_count_test ( )

//****************************************************************************80
// 
//  Purpose:
//
//    PERM0_BREAK_COUNT_TEST tests PERM0_BREAK_COUNT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int break_count;
  int n = 6;
  int p[6] = { 3, 4, 1, 0, 5, 2 };

  cout << "\n";
  cout << "PERM0_BREAK_COUNT_TEST\n";
  cout << "  PERM0_BREAK_COUNT counts the breaks in a permutation.\n";
 
  perm0_print ( n, p, "  The permutation:" );
 
  break_count = perm0_break_count ( n, p );

  cout << "\n";
  cout << "  The number of breaks is " << break_count << "\n";

  return;
}
//****************************************************************************80

void perm0_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_CHECK_TEST tests PERM0_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    23 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int n = 5;
  int p1[5] = { 5, 2, 3, 4, 1 };
  int p2[5] = { 4, 1, 3, 0, 2 };
  int p3[5] = { 0, 2, 1, 3, 2 };

  cout << "\n";
  cout << "PERM0_CHECK_TEST\n";
  cout << "  PERM0_CHECK checks a permutation of (0,...,N-1).\n";
  cout << "\n";

  perm0_print ( n, p1, "  Permutation 1:" );
  check = perm0_check( n, p1 );

  perm0_print ( n, p2, "  Permutation 2:" );
  check = perm0_check( n, p2 );

  perm0_print ( n, p3, "  Permutation 3:" );
  check = perm0_check( n, p3 );

  return;
}
//****************************************************************************80

void perm0_cycle_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_CYCLE_TEST tests PERM0_CYCLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 May 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 9

  int i;
  int iopt = 1;
  int isgn;
  int ncycle;
  int p[N] = { 1,2,8,5,6,7,4,3,0 };

  cout << "\n";
  cout << "PERM0_CYCLE_TEST\n";
  cout << "  PERM0_CYCLE analyzes a permutation of (0,...,N-1).\n";

  perm0_print ( N, p, "  The permutation:" );

  perm0_cycle ( N, p, isgn, ncycle, iopt );

  cout << "\n";
  cout << "  NCYCLE = " << ncycle << "\n";
  cout << "  ISGN =   " << isgn   << "\n";

  perm0_print ( N, p, "  The permutation in cycle form:" );

  return;

# undef N
}
//****************************************************************************80

void perm0_distance_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_DISTANCE_TEST tests PERM0_DISTANCE
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int k11;
  int k12;
  int k13;
  int k21;
  int k23;
  int p1[N];
  int p2[N];
  int p3[N];
  int seed;

  cout << "\n";
  cout << "PERM0_DISTANCE_TEST\n";
  cout << "  PERM0_DISTANCE computes the Ulam metric distance\n";
  cout << "  between two permutations of (0,...,N-1).\n";

  seed = 123456789;

  perm0_random2 ( N, seed, p1 );
  perm0_random2 ( N, seed, p2 );
  perm0_random2 ( N, seed, p3 );

  perm0_print ( N, p1, "  Permutation P1" );
  perm0_print ( N, p2, "  Permutation P2" );
  perm0_print ( N, p3, "  Permutation P3" );

  k11 = perm0_distance ( N, p1, p1 );
  k12 = perm0_distance ( N, p1, p2 );
  k21 = perm0_distance ( N, p2, p1 );
  k13 = perm0_distance ( N, p1, p3 );
  k23 = perm0_distance ( N, p2, p3 );

  cout << "\n";
  cout << "  K(P1,P1) should be 0.\n";
  cout << "\n";
  cout << "  K(P1,P1) = " << k11 << "\n";
  cout << "\n";
  cout << "  K(P1,P2) should equal K(P2,P1).\n";
  cout << "\n";
  cout << "  K(P1,P2) = " << k12 << "\n";
  cout << "  K(P2,P1) = " << k21 << "\n";
  cout << "\n";
  cout << "  K(P1,P2) + K(P2,P3) >= K(P1,P3).\n";
  cout << "\n";
  cout << "  K(P1,P3) = " << k13 << "\n";
  cout << "  K(P1,P2) = " << k12 << "\n";
  cout << "  K(P2,P3) = " << k23 << "\n";
  cout << "  K(P1,P2) + K(P2,P3) = " << k12 + k23 << "\n";

  return;
# undef N
}
//****************************************************************************80

void perm0_free_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_FREE_TEST tests PERM0_FREE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int ifree[5];
  int ipart[5];
  int n = 5;
  int nfree;
  int npart;
  int p[5] = { 4, 1, 2, 3, 0 };

  cout << "\n";
  cout << "PERM0_FREE_TEST\n";
  cout << "  PERM0_FREE returns the unused values in a partial permutation\n";
  cout << "  of (0,...,N-1).\n";

  for ( npart = 0; npart <= n; npart++ )
  {
    for ( i = 0; i < npart; i++ )
    {
      ipart[i] = p[i];
    }
    nfree = n - npart;
    perm0_free ( npart, ipart, nfree, ifree );
    i4vec_transpose_print ( npart, ipart, "  Partial permutation:" );
    i4vec_transpose_print ( nfree, ifree, "  Values not yet used:" );
  }
  return;
}
//****************************************************************************80

void perm0_inverse_test ( )

//****************************************************************************
//
//  Purpose:
//
//    PERM0_INVERSE_TEST tests PERM0_INVERSE;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 7;
  int p1[7] = { 3, 2, 4, 0, 6, 5, 1 };
  int *p2;

  cout << "\n";
  cout << "PERM0_INVERSE_TEST\n";
  cout << "  PERM0_INVERSE inverts a permutation of (0,...,N-1);\n";
  cout << "\n";

  perm0_print ( n, p1, "  The original permutation:" );
 
  p2 = perm0_inverse ( n, p1 );
 
  perm0_print ( n, p2, "  The inverted permutation:" );
 
  delete [] p2;

  return;
}
//****************************************************************************80

void perm0_inverse2_test ( )

//****************************************************************************
//
//  Purpose:
//
//    PERM0_INVERSE2_TEST tests PERM0_INVERSE2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 May 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 7

  int p[N] = { 3, 2, 4, 0, 6, 5, 1 };

  cout << "\n";
  cout << "PERM0_INVERSE2_TEST\n";
  cout << "  PERM0_INVERSE2 inverts a permutation of (0,...,N-1).\n";

  perm0_print ( N, p, "  The original permutation:" );
 
  perm0_inverse2 ( N, p );
 
  perm0_print ( N, p, "  The inverted permutation:" );
 
  return;
# undef N
}
//****************************************************************************80

void perm0_inverse3_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_INVERSE3_NEW_TEST tests PERM0_INVERSE3_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 May 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 7

  int perm[N] = { 3, 2, 4, 0, 6, 5, 1 };
  int *perm_inv;

  cout << "\n";
  cout << "PERM0_INVERSE3_NEW_TEST\n";
  cout << "  PERM0_INVERSE3_NEW inverts a permutation of (0,...,N-1).\n";

  perm0_print ( N, perm, "  The original permutation:" );
 
  perm_inv = perm0_inverse3_new ( N, perm );
 
  perm0_print ( N, perm_inv, "  The inverted permutation:" );
 
  delete [] perm_inv;

  return;
# undef N
}
//****************************************************************************80

void perm0_lex_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_LEX_NEXT_TEST tests PERM0_LEX_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  bool more;
  int p[N];

  cout << "\n";
  cout << "PERM0_LEX_NEXT_TEST\n";
  cout << "  PERM0_LEX_NEXT generates permutations in order.\n";
  cout << "\n";

  more = false;
 
  for ( ; ; )
  {
    perm0_lex_next ( N, p, more );

    if ( !more )
    {
      break;
    }

    perm0_print ( N, p, " " );

  }
 
  return;
# undef N
}
//****************************************************************************80

void perm0_mul_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_MUL_TEST tests PERM0_MUL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int p1[N];
  int p2[N];
  int p3[N];
  int seed;

  cout << "\n";
  cout << "PERM0_MUL_TEST\n";
  cout << "  PERM0_MUL multiplies two permutations of (0,...,N-1).\n";
  cout << "\n";

  seed = 123456789;

  perm0_random ( N, seed, p1 );
  perm0_random ( N, seed, p2 );

  perm0_print ( N, p1, "  Permutation P1:" );

  perm0_print ( N, p2, "  Permutation P2:" );

  perm0_mul ( N, p1, p2, p3 );

  perm0_print ( N, p3, "  Product permutation: P3" );

  return;
# undef N
}
//****************************************************************************80

void perm0_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_NEXT_TEST tests PERM0_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool even;
  bool more;
  int n = 4;
  int p[4];

  cout << "\n";
  cout << "PERM0_NEXT_TEST\n";
  cout << "  PERM0_NEXT generates permutations of (0,...,N-1).\n";
  cout << "\n";

  more = false;

  for ( ; ; )
  {
    perm0_next ( n, p, more, even );

    perm0_print ( n, p, "" );

    if ( !more )
    {
      break;
    }
  }

  return;
}
//****************************************************************************80

void perm0_next2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_NEXT2_TEST tests PERM0_NEXT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  bool done;
  int iactiv[N];
  int idir[N];
  int invers[N];
  int p[N];

  cout << "\n";
  cout << "PERM0_NEXT2_TEST\n";
  cout << "  PERM0_NEXT2 generates permutations of (0,...,N-1).\n";
  cout << "\n";

  done = true;
 
  for ( ; ; )
  {
    perm0_next2 ( N, p, done );
 
    if ( done )
    {
      break;
    }

    perm0_print ( N, p, "" );

  }
 
  return;
# undef N
}
//****************************************************************************80

void perm0_next3_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_NEXT3_TEST tests PERM0_NEXT3.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool more;
  int n;
  int nfact;
  int *p;
  int rank;

  cout << "\n";
  cout << "PERM0_NEXT3_TEST\n";
  cout << "  PERM0_NEXT3 generates permutations of (0,...,N-1).\n";
  cout << "\n";

  n = 4;
  p = new int[n];
  more = false;
  nfact = 0;
  rank = 0;
 
  for ( ; ; )
  {
    perm0_next3 ( n, p, more, nfact, rank );

    perm0_print ( n, p, "" );

    if ( !more )
    {
      break;
    }
  }
 
  delete [] p;

  return;
}
//****************************************************************************80

void perm0_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_RANDOM_TEST tests PERM0_RANDOM;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int i;
  int p[N];
  int seed = 123456789;

  cout << "\n";
  cout << "PERM0_RANDOM_TEST\n";
  cout << "  PERM0_RANDOM produces a random permutation of (0,...,N-1);\n";
  cout << "  For this test, N = " << N << "\n";
  cout << "\n";

  for ( i = 1; i <= 5; i++ )
  {
    perm0_random ( N, seed, p );
    perm0_print ( N, p, "" );
  }
 
  return;
# undef N
}
//****************************************************************************80

void perm0_random2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_RANDOM2_TEST tests PERM0_RANDOM2;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int i;
  int p[N];
  int seed = 123456789;

  cout << "\n";
  cout << "PERM0_RANDOM2_TEST\n";
  cout << "  PERM0_RANDOM2 produces a random permutation of (0,...,N-1);\n";
  cout << "  For this test, N = " << N << "\n";
  cout << "\n";

  for ( i = 1; i <= 5; i++ )
  {
    perm0_random2 ( N, seed, p );
    perm0_print ( N, p, "" );
  }
 
  return;
# undef N
}
//****************************************************************************80

void perm0_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_RANK_TEST tests PERM0_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int invers[4];
  int n = 4;
  int p[4] = { 0, 3, 1, 2 };
  int rank;

  cout << "\n";
  cout << "PERM0_RANK_TEST\n";
  cout << "  PERM0_RANK ranks a permutation of (0,...,N-1).\n";

  perm0_print ( n, p, "  The permutation:" );
 
  rank = perm0_rank ( n, p, invers );
 
  cout << "\n";
  cout << "  The rank is " << rank << "\n";
 
  return;
}
//****************************************************************************80

void perm0_sign_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_SIGN_TEST tests PERM0_SIGN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int i;
  bool more;
  int p[N];
  int rank;
  int p_sign;

  cout << "\n";
  cout << "PERM0_SIGN_TEST\n";
  cout << "  PERM0_SIGN computes the sign of a permutation of (0,...,N-1).\n";
  cout << "\n";
  cout << "  RANK  SIGN  Permutation\n";
  cout << "\n";

  more = false;
  rank = 0; 

  for ( ; ; )
  {
    perm0_lex_next ( N, p, more );

    p_sign = perm0_sign ( N, p );
    if ( !more )
    {
      break;
    }

    cout << setw(4) << rank   << "  "
         << setw(4) << p_sign << "  ";

    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << p[i] << "  ";
    }
    cout << "\n";

    rank = rank + 1;
  }
 
  return;
# undef N
}
//****************************************************************************80

void perm0_to_equiv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_TO_EQUIV_TEST tests PERM0_TO_EQUIV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[9];
  int i;
  int jarray[9];
  int n = 9;
  int npart;
  int p[9] = { 1,2,8,5,6,7,4,3,0 };

  cout << "\n";
  cout << "PERM0_TO_EQUIV_TEST\n";
  cout << "  PERM0_TO_EQUIV returns the set partition\n";
  cout << "  or equivalence classes determined by a\n";
  cout << "  permutation of (0,...,N-1).\n";

  perm0_print ( n, p, "  The input permutation:" );
 
  perm0_to_equiv ( n, p, npart, jarray, a );

  equiv_print ( n, a, "  The partition:" );
 
  return;
}
//****************************************************************************80

void perm0_to_inversion_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_TO_INVERSION_TEST tests PERM0_TO_INVERSION.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 June 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
 
  int ins[N];
  int perm[N] = { 2, 4, 0, 3, 1 };
  int perm2[N];

  cout << "\n";
  cout << "PERM0_TO_INVERSION_TEST\n";
  cout << "  PERM0_TO_INVERSION: permutation (0,...,N-1) to inversion.\n";
  cout << "\n";

  i4vec1_print ( N, perm, "  The permutation:" );
  
  perm0_to_inversion ( N, perm, ins );

  i4vec1_print ( N, ins, "  The inversion sequence:" );

  inversion_to_perm0 ( N, ins, perm2 );

  i4vec1_print ( N, perm2, "  The recovered permutation:" );
 
  return;
# undef N
}
//****************************************************************************80

void perm0_to_ytb_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_TO_YTB_TEST tests PERM0_TO_YTB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 June 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 7

  int a[N];
  int lambda[N];
  int p[N] = { 7, 2, 4, 1, 5, 3, 6 };

  cout << "\n";
  cout << "PERM0_TO_YTB_TEST\n";
  cout << "  PERM0_TO_YTB converts a permutation of (0,...,N-1) to a\n";
  cout << "  Young tableau.\n";

  perm0_print ( N, p, "  The permutation:" );
 
  perm0_to_ytb ( N, p, lambda, a );

  ytb_print ( N, a, "  The Young tableau:" );
 
  return;
# undef N
}
//****************************************************************************80

void perm0_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_UNRANK_TEST tests PERM0_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int p[4];
  int rank = 6;

  cout << "\n";
  cout << "PERM0_UNRANK_TEST\n";
  cout << "  PERM0_UNRANK, given a rank, computes the\n";
  cout << "  corresponding permutation of (0,...,N-1).\n";
  cout << "\n";
  cout << "  The requested rank is " << rank << "\n";
 
  perm0_unrank ( n, rank, p );
 
  perm0_print ( n, p, "  The permutation:" );
 
  return;
}
//****************************************************************************80

void perm1_canon_to_cycle_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM1_CANON_TO_CYCLE_TEST tests PERM1_CANON_TO_CYCLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 6;
  int p1[6] = { 4, 5, 2, 1, 6, 3 };
  int p2[6];

  cout << "\n";
  cout << "PERM1_CANON_TO_CYCLE_TEST\n";
  cout << "  PERM1_CANON_TO_CYCLE converts a permutation of (1,...,N) from\n";
  cout << "  canonical to cycle form.\n";
 
  perm1_print ( n, p1, "  The permutation in canonical form:");
 
  perm1_canon_to_cycle ( n, p1, p2 );

  perm1_print ( n, p2, "  The permutation in cycle form:" );
 
  return;
}
//****************************************************************************80

void perm1_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM1_CHECK_TEST tests PERM1_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    23 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int n = 5;
  int p1[5] = { 5, 2, 3, 4, 1 };
  int p2[5] = { 4, 1, 3, 0, 2 };
  int p3[5] = { 0, 2, 1, 3, 2 };

  cout << "\n";
  cout << "PERM1_CHECK_TEST\n";
  cout << "  PERM1_CHECK checks a permutation of (1,...,N).\n";
  cout << "\n";

  perm1_print ( n, p1, "  Permutation 1:" );
  check = perm1_check( n, p1 );

  perm1_print ( n, p2, "  Permutation 2:" );
  check = perm1_check( n, p2 );

  perm1_print ( n, p3, "  Permutation 3:" );
  check = perm1_check( n, p3 );

  return;
}
//****************************************************************************80

void perm1_cycle_to_canon_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM1_CYCLE_TO_CANON_TEST tests PERM1_CYCLE_TO_CANON.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 6;
  int p1[6] = { -6, 3, 1, -5, 4, -2 };
  int p2[6];

  cout << "\n";
  cout << "PERM1_CYCLE_TO_CANON_TEST\n";
  cout << "  PERM1_CYCLE_TO_CANON converts a permutation of (1,...,N) from\n";
  cout << "  cycle to canonical form.\n";
 
  perm1_print ( n, p1, "  The permutation in cycle form:" );
 
  perm1_cycle_to_canon ( n, p1, p2 );

  perm1_print ( n, p2, "  The permutation in canonical form:" );
 
  return;
}
//****************************************************************************80

void perm1_cycle_to_index_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM1_CYCLE_TO_INDEX_TEST tests PERM1_CYCLE_TO_INDEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 9;
  int p1[9] = { 2,3,9,6,7,8,5,4,1 };
  int p2[9];
  int p3[9];

  cout << "\n";
  cout << "PERM1_CYCLE_TO_INDEX_TEST\n";
  cout << "  PERM1_CYCLE_TO_INDEX converts a permutation of (1,...,N) from\n";
  cout << "  cycle to standard index form.\n";
 
  perm1_print ( n, p1, "  The standard index form permutation:" );
 
  perm1_index_to_cycle ( n, p1, p2 );

  perm1_print ( n, p2, "  The permutation in cycle form:" );

  perm1_cycle_to_index ( n, p2, p3 );
 
  perm1_print ( n, p3, "  The standard index form permutation:" );
 
  return;
}
//****************************************************************************80

void perm1_index_to_cycle_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM1_INDEX_TO_CYCLE_TEST tests PERM1_INDEX_TO_CYCLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 9;
  int p1[9] = { 2,3,9,6,7,8,5,4,1 };
  int p2[9];
  int p3[9];

  cout << "\n";
  cout << "PERM1_INDEX_TO_CYCLE_TEST\n";
  cout << "  PERM1_INDEX_TO_CYCLE converts a permutation of (1,...,N) from\n";
  cout << "  standard index to cycle form.\n";
 
  perm1_print ( n, p1, "  The standard index form permutation:" );
 
  perm1_index_to_cycle ( n, p1, p2 );

  perm1_print ( n, p2, "  The permutation in cycle form:" );

  perm1_cycle_to_index ( n, p2, p3 );
 
  perm1_print ( n, p3, "  The standard index form permutation:" );
 
  return;
}
//****************************************************************************80

void perm1_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM1_PRINT_TEST tests PERM1_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 7;
  int p[7] = { 7, 2, 4, 1, 5, 3, 6 };

  cout << "\n";
  cout << "PERM1_PRINT_TEST\n";
  cout << "  PERM1_PRINT prints a permutation of (1,...,N).\n";

  perm1_print ( n, p, "  The 1-based permutation:" );
  
  return;
}
//****************************************************************************80

void perrin_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERRIN_TEST tests PERRIN;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int i;
  int p[N];

  cout << "\n";
  cout << "PERRIN_TEST\n";
  cout << "  PERRIN computes the Perrin numbers.\n";
  cout << "\n";

  perrin ( N, p );

  cout << "\n";
  cout << "   N    P(N)\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout                    << "  "
         << setw(4) << i    << "  "
         << setw(6) << p[i] << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void pord_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PORD_CHECK_TEST tests PORD_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[10*10] = {
    1,0,1,0,1,0,1,0,0,1, 
    0,1,0,0,1,0,0,0,0,0, 
    0,0,1,0,1,0,1,0,0,1, 
    0,1,1,1,1,1,1,1,0,1, 
    0,0,0,0,1,0,0,0,0,0, 
    0,1,0,0,1,1,1,0,0,0, 
    0,0,0,0,1,0,1,0,0,0, 
    0,1,0,0,1,1,1,1,0,1, 
    0,0,0,0,0,0,0,0,0,0, 
    0,0,0,0,1,0,1,0,0,1 };
  int ierror;
  int n = 10;

  cout << "\n";
  cout << "PORD_CHECK_TEST\n";
  cout << "  PORD_CHECK checks a partial ordering.\n";

  i4mat_print ( n, n, a, "  The partial ordering matrix:" );
 
  ierror = pord_check ( n, a );
 
  cout << "\n";
  cout << "  CHECK FLAG = " << ierror << "\n";
  cout << "  0 means no error.\n";
  cout << "  1 means illegal value of N.\n";
  cout << "  2 means some A(I,J) and A(J,I) are both nonzero.\n";
 
  return;
}
//****************************************************************************80

void power_mod_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST109 tests POWER_MOD;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int m;
  int n;
  int x;

  cout << "\n";
  cout << "POWER_MOD_TEST\n";
  cout << "  POWER_MOD computes the remainder of a power\n";
  cout << "  of an integer modulo another integer.\n";

  a = 7;
  n = 50;
  m = 11;

  cout << "\n";
  cout << "  A = " << a << "\n";
  cout << "  N = " << n << "\n";
  cout << "  M = " << m << "\n";
  cout << "  mod ( A^N, M ) = " << power_mod ( a, n, m ) << "\n";

  a = 3;
  n = 118;
  m = 119;

  cout << "\n";
  cout << "  A = " << a << "\n";
  cout << "  N = " << n << "\n";
  cout << "  M = " << m << "\n";
  cout << "  mod ( A^N, M ) = " << power_mod ( a, n, m ) << "\n";

  return;
}
//****************************************************************************80

void power_series1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POWER_SERIES1_TEST tests POWER_SERIES1;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  double a[N];
  double alpha;
  double b[N];
  int i;
  int n;

  cout << "\n";
  cout << "POWER_SERIES1_TEST\n";
  cout << "  POWER_SERIES1 composes a power series;\n";

  alpha = 7.0;
 
  a[0] = 1.0;
  for ( i = 1; i < N; i++ )
  {
    a[i] = 0.0;
  }
 
  for ( i = 0; i < N; i++ )
  {
    b[i] = 0.0;
  }

  cout << "\n";
  cout << "  Power series of G(x) = (1+F(x))**alpha\n";
  cout << "\n";
  cout << "  N = "     << N     << "\n";
  cout << "  ALPHA = " << alpha << "\n";

  r8vec_print ( N, a, "  Series for F(x):" );

  power_series1 ( N, alpha, a, b );
 
  r8vec_print ( N, b, "  Series for G(X):" );

  return;
# undef N
}
//****************************************************************************80

void power_series2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POWER_SERIES2_TEST tests POWER_SERIES2;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double a[N];
  double b[N];
  int i;

  cout << "\n";
  cout << "POWER_SERIES2_TEST\n";
  cout << "  POWER_SERIES2 composes a power series;\n";

  a[0] = -4.0;
  for ( i = 1; i < N; i++ )
  {
    a[i] = 0.0;
  } 

  cout << "\n";
  cout << "  Power series of G(x) = exp(F(x))-1\n";
  cout << "\n";
  cout << "  N = " << N << "\n";

  r8vec_print ( N, a, "  Series for F(X):" );

  power_series2 ( N, a, b );
 
  r8vec_print ( N, b, "  Series for G(X):" );

  return;
# undef N
}
//****************************************************************************80

void power_series3_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POWER_SERIES3_TEST tests POWER_SERIES3;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double a[N];
  double b[N];
  double c[N];

  cout << "\n";
  cout << "POWER_SERIES3_TEST\n";
  cout << "  POWER_SERIES3 composes two power series;\n";
 
  a[0] = 1.0;
  a[1] = 1.0;
  a[2] = 0.0;
  a[3] = 0.0;

  r8vec_print ( N, a, "  Series for F(X):" );

  b[0] = 1.0;
  b[1] = 1.0;
  b[2] = 0.0;
  b[3] = 0.0;

  r8vec_print ( N, b, "  Series for G(X):" );

  power_series3 ( N, a, b, c );
 
  r8vec_print ( N, c, "  Series for H(X) = G(F(X)):" );

  return;
# undef N
}
//****************************************************************************80

void power_series4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POWER_SERIES4_TEST tests POWER_SERIES4.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10
//
//  The order of arguments for POWER_SERIES4 is a shame.
//
  double a[N];
  double b[N];
  double c[N];
  int i;

  cout << "\n";
  cout << "POWER_SERIES4_TEST\n";
  cout << "  POWER_SERIES4 composes a power series;\n";
  cout << "  Given power series for F(X) and G(X), we compute\n";
  cout << "  the power series of H(x) = G(1/F(x)).\n";

  for ( i = 0; i < N; i++ )
  {
    a[i] = 1.0 / ( double ) ( i + 1 );
  }
  r8vec_print ( N, a, "  Series for F(x):" );
 
  b[0] = 1.0;
  for ( i = 1; i < N; i++ )
  {
    b[i] = 0.0;
  }
  r8vec_print ( N, b, "  Series for G(x):" );

  power_series4 ( N, a, b, c );
 
  r8vec_print ( N, c, "  Series for H(x):" );

  return;
# undef N
}
//****************************************************************************80

void prime_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PRIME_TEST tests PRIME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2014
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int prime_max;

  cout << "\n";
  cout << "PRIME_TEST\n";
  cout << "  PRIME returns primes from a table.\n";

  n = -1;
  prime_max = prime ( n );
  cout << "\n";
  cout << "  Number of primes stored is " << prime_max << "\n";
  cout << "\n";
  cout << "     I    Prime(I)\n";
  cout << "\n";
  for ( i = 1; i <= 10; i++ )
  {
    cout << "  "
         << setw(4) << i << "  "
         << setw(6) << prime ( i ) << "\n";
  }
  cout << "\n";
  for ( i = prime_max - 10; i <= prime_max; i++ )
  {
    cout << "  "
         << setw(4) << i << "  "
         << setw(6) << prime ( i ) << "\n";
  }
  
  return;
}
//****************************************************************************80

void pythag_triple_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PYTHAG_TRIPLE_NEXT_TEST tests PYTHAG_TRIPLE_NEXT;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int c;
  int d;
  int e;
  int i;
  int j;
  int k;

  cout << "\n";
  cout << "PYTHAG_TRIPLE_NEXT_TEST\n";
  cout << "  PYTHAG_TRIPLE_NEXT computes the next\n";
  cout << "  Pythagorean triple.\n";
  cout << "\n";
  cout << "     I       J       A       B       C A^2+B^2     C^2\n";
  cout << "\n";

  i = 0;
  j = 0;

  for ( k = 0; k <= 20; k++ )
  {
    pythag_triple_next ( i, j, a, b, c );

    d = a * a + b * b;
    e = c * c;

    cout << setw(6) << i << "  "
         << setw(6) << j << "  "
         << setw(6) << a << "  "
         << setw(6) << b << "  "
         << setw(6) << c << "  "
         << setw(6) << d << "  "
         << setw(6) << e << "\n";
  }

  return;
}
//****************************************************************************80

void r8_agm_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_AGM_TEST tests R8_AGM;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int seed;
  double x;
  double y;
  double z;

  cout << "\n";
  cout << "R8_AGM_TEST\n";
  cout << "  R8_AGM computes the arithmetic-geometric mean (AGM)\n";
  cout << "  of two nonnegative real numbers.\n";

  cout << "\n";
  cout << "    X        Y    R8_AGM(X,Y)\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 10; i++ )
  {
    x = ( double ) i4_uniform_ab ( 1, 10, seed );

    y = ( double ) i4_uniform_ab ( 1, 10, seed );

    z = r8_agm ( x, y );

    cout << setw(10) << x << "  "
         << setw(10) << y << "  "
         << setw(10) << z << "\n";
  }

  return;
}
//****************************************************************************80

void r8_choose_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CHOOSE_TEST tests R8_CHOOSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
{
  double cnk;
  int k;
  int n;

  cout << "\n";
  cout << "R8_CHOOSE_TEST\n";
  cout << "  R8_CHOOSE evaluates C(N,K).\n";
  cout << "\n";
  cout << "     N     K    CNK\n";
  cout << "\n";

  for ( n = 0; n <= 4; n++ )
  {
    for ( k = 0; k <= n; k++ )
    {
      cnk = r8_choose ( n, k );

      cout << setw(6) << n   << "  "
           << setw(6) << k   << "  "
           << setw(6) << cnk << "\n";
    }
  }

  return;
}
//****************************************************************************80

void r8_epsilon_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_EPSILON_TEST tests R8_EPSILON
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
  double r;
  double s;

  cout << "\n";
  cout << "R8_EPSILON_TEST\n";
  cout << "  R8_EPSILON produces the floating point machine precision.\n";
  cout << "\n";

  r = r8_epsilon ( );
  cout << "  R = R8_EPSILON() = " << setw(10) << r << "\n";

  s = ( double ) ( 1.0 + r ) - 1.0;
  cout << "  ( 1 + R ) - 1 = " << setw(10) << s << "\n";

  s = ( double ) ( 1.0 + ( double ) ( r / 2.0) ) - 1.0;
  cout << "  ( 1 + (R/2) ) - 1 = " << setw(10) << s << "\n";

  return;
}
//****************************************************************************80

void r8_fall_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_FALL_TEST tests R8_FALL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 December 2014
//
//  Author:
//
//    John Burkardt
//
{
  double f1;
  double f2;
  int n;
  int n_data;
  streamsize ss;
  double x;
//
//  Save the current precision.
//
  ss = cout.precision ( );

  cout << "\n";
  cout << "R8_FALL_TEST\n";
  cout << "  R8_FALL evaluates the falling factorial Fall(X,N).\n";
  cout << "\n";
  cout << "    X          N                Exact                  Computed\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    r8_fall_values ( n_data, x, n, f1 );

    if ( n_data == 0 )
    {
      break;
    }

    f2 = r8_fall ( x, n );

    cout << "  "
         << setw(8) << x << "  "
         << setw(4) << n << "  "
         << setprecision(16) << setw(24) << f1 << "  "
         << setprecision(16) << setw(24) << f2 << "\n";
  }
//
//  Restore the default precision.
//
  cout.precision ( ss );

  return;
}
//****************************************************************************80

void r8_rise_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_RISE_TEST tests R8_RISE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 December 2014
//
//  Author:
//
//    John Burkardt
//
{
  double f1;
  double f2;
  int n;
  int n_data;
  streamsize ss;
  double x;
//
//  Save the current precision.
//
  ss = cout.precision ( );

  cout << "\n";
  cout << "R8_RISE_TEST\n";
  cout << "  R8_RISE evaluates the rising factorial Fall(X,N).\n";
  cout << "\n";
  cout << "    X          N                Exact                  Computed\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    r8_rise_values ( n_data, x, n, f1 );

    if ( n_data == 0 )
    {
      break;
    }

    f2 = r8_rise ( x, n );

    cout << "  "
         << setw(8) << x << "  "
         << setw(4) << n << "  "
         << setprecision(16) << setw(24) << f1 << "  "
         << setprecision(16) << setw(24) << f2 << "\n";
  }
//
//  Restore the default precision.
//
  cout.precision ( ss );

  return;
}
//****************************************************************************80

void r8_to_cfrac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TO_CFRAC_TEST tests R8_TO_CFRAC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int a[N+1];
  double error;
  int i;
  int p[N+2];
  int q[N+2];
  double r;
  double temp;

  cout << "\n";
  cout << "R8_TO_CFRAC_TEST\n";
  cout << "  R8_TO_CFRAC converts a double precision number to\n";
  cout << "  a sequence of continued fraction convergents.\n";

  r = 2.0 * r8_pi ( );

  cout << "\n";
  cout << "  Use the real number R = " << r << "\n";

  r8_to_cfrac ( r, N, a, p, q );

  cout << "\n";

  for ( i = 0; i <= N; i++ )
  {
    temp = ( double ) p[i+1] / ( double ) q[i+1];

    error = r - temp;

    cout                        << "  "
         << setw(12) << a[i]    << "  "
         << setw(12) << p[i+1]  << "  "
         << setw(12) << q[i+1]  << "  "
         << setw(14) << temp    << "  "
         << setw(14) << error   << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void r8_to_dec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TO_DEC_TEST tests R8_TO_DEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int dec_digit;
  int i;
  double r;
  double r2;
  double r8_hi;
  double r8_lo;
  int seed;

  cout << "\n";
  cout << "R8_TO_DEC_TEST\n";
  cout << "  R8_TO_DEC converts a real number to a decimal;\n";

  dec_digit = 5;

  cout << "\n";
  cout << "  The maximum number of digits allowed is " << dec_digit << "\n";

  r8_lo = -10.0;
  r8_hi = +10.0;
  seed = 123456789;

  cout << "\n";
  cout << "     R   =>  A * 10^B  =>  R2\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    r = r8_uniform_ab ( r8_lo, r8_hi, seed );

    r8_to_dec ( r, dec_digit, a, b );
    r2 = dec_to_r8 ( a, b );

    cout                   << "  "
         << setw(10) << r  << "  "
         << setw(6)  << a  << "  "
         << setw(6)  << b  << "  "
         << setw(10) << r2 << "\n";
  }

  return;
}
//****************************************************************************80

void r8_to_rat_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TO_RAT_TEST tests R8_TO_RAT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int i;
  int ndig = 4;
  double r;
  double r2;
  int seed;

  cout << "\n";
  cout << "R8_TO_RAT_TEST\n";
  cout << "  R8_TO_RAT converts a real number to a rational;\n";
  cout << "\n";
  cout << "  The maximum number of digits allowed is " << ndig << "\n";

  seed = 123456789;

  cout << "\n";
  cout << "     R   =>  A / B  =>  R2\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    r = r8_uniform_01 ( seed );
    r = 10.0 * ( r - 0.25 );

    r8_to_rat ( r, ndig, a, b );
    r2 = rat_to_r8 ( a, b );

    cout                   << "  "
         << setw(10) << r  << "  "
         << setw(6)  << a  << "  "
         << setw(6)  << b  << "  "
         << setw(10) << r2 << "\n";
  }

  return;
}
//****************************************************************************80

void r8mat_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_DET_TEST tests R8MAT_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N3 3
# define N4 4

  double a3[N3*N3];
  double a4[N4*N4];
  double det;
  int i;
  int j;
  int k;

  cout << "\n";
  cout << "R8MAT_DET_TEST\n";
  cout << "  R8MAT_DET: determinant of a real matrix.\n";
  cout << "\n";

  k = 0;
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      k = k + 1;
      a3[i+j*N3] = ( double ) k;
    }
  }

  r8mat_print ( N3, N3, a3, "  The 123/456/789 matrix:" );

  det = r8mat_det ( N3, a3 );

  cout << "\n";
  cout << "  Determinant of the 123/456/789 matrix is " << det << "\n";

  for ( i = 0; i < N4; i++ )
  {
    for ( j = 0; j < N4; j++ )
    {
      a4[i+j*N4] = 1.0 / ( double ) ( 2 + i + j );
    }
  }

  r8mat_print ( N4, N4, a4, "  The Hilbert matrix:" );

  det = r8mat_det ( N4, a4 );

  cout << "\n";
  cout << "  Determinant of the Hilbert matrix is " << det << "\n";

  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      if ( i == j )
      {
        a3[i+j*N3] = 2.0;
      }
      else if ( i == j+1 || i == j-1 )
      {
        a3[i+j*N3] = -1.0;
      }
      else
      {
        a3[i+j*N3] = 0.0;
      }
    }
  }

  r8mat_print ( N3, N3, a3, "  The -1,2,-1 matrix:" );

  det = r8mat_det ( N3, a3 );

  cout << "\n";
  cout << "  Determinant of the -1,2,-1 matrix is " << det << "\n";

  return;
# undef N3
# undef N4
}
//****************************************************************************80

void r8mat_perm0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_PERM0_TEST tests R8MAT_PERM0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 May 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 9

  double a[N*N];
  int i;
  int p[N] = { 1,2,8,5,6,7,4,3,0 };
  int j;

  cout << "\n";
  cout << "R8MAT_PERM0_TEST\n";
  cout << "  R8MAT_PERM0 reorders a real matrix in place.\n";
  cout << "  The rows and columns use the same permutation.\n";

  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*N] = ( double ) ( (i+1) * 10 + (j+1) );
    }
  }

  r8mat_print ( N, N, a, "  The original matrix" );

  perm0_print ( N, p, "  The row and column permutation:" );

  r8mat_perm0 ( N, a, p );

  r8mat_print ( N, N, a, "  The permuted matrix" );

  return;
# undef N
}
//****************************************************************************80

void r8mat_2perm0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_2PERM0_TEST tests R8MAT_2PERM0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 May 2015
//
//  Author:
//
//    John Burkardt
//
{
# define M 9
# define N 7

  double a[M*N];
  int i;
  int j;
  int p[M] = { 1, 2, 8, 5, 6, 7, 4, 3, 0 };
  int q[N] = { 2, 3, 4, 5, 6, 0, 1 };

  cout << "\n";
  cout << "R8MAT_2PERM0_TEST\n";
  cout << "  R8MAT_2PERM0 reorders a real matrix in place.\n";
  cout << "  Rows and columns use different permutations.\n";
 
  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*M] = ( double ) ( ( i + 1 ) * 10 + ( j + 1 ) );
    }
  }
 
  r8mat_print ( M, N, a, "  The original matrix" );
 
  perm0_print ( M, p, "  The row permutation:" );
 
  perm0_print ( N, q, "  The column permutation:" );

  r8mat_2perm0 ( M, N, a, p, q );
 
  r8mat_print ( M, N, a, "  The permuted matrix" );
 
  return;
# undef M
# undef N
}
//****************************************************************************80

void r8mat_permanent_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_PERMANENT_TEST tests R8MAT_PERMANENT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int i;
  int j;
  int n;
  double perm;

  cout << "\n";
  cout << "R8MAT_PERMANENT_TEST\n";
  cout << "  R8MAT_PERMANENT: the matrix permanent function.\n";
  cout << "  We will analyze matrices with 0 diagonal and\n";
  cout << "  1 on all offdiagonals.\n";
  cout << "\n";
  cout << "  Order	    Permanent.\n";
  cout << "\n";
  cout << "DEBUG\n" << flush;
  for ( n = 2; n <= 12; n++ )
  {
    a = new double[n*n];

    for ( i = 0; i < n; i++ )
    {
      for ( j = 0; j < n; j++ )
      {
        if ( i == j ) 
        {
          a[i+j*n] = 0.0;
        }
        else
        {
          a[i+j*n] = 1.0;
        }
      }
    }

    perm = r8mat_permanent ( n, a );

    cout << setw(4)  << n    << "  "
         << setw(10) << perm << "\n";
    cout << "DEBUG, N = " << n << "\n" << flush;
    delete [] a;
  }

  return;
}
//****************************************************************************80

void r8poly_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_TEST test R8POLY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  int i;
  double a[N];
  int iopt;
  int test;
  double val;
  double x0;

  cout << "\n";
  cout << "R8POLY_TEST\n";
  cout << "  R8POLY converts between power sum, factorial\n";
  cout << "  and Taylor forms, and can evaluate a polynomial\n";
  cout << "\n";
 
  for ( test = 1; test <= 6; test++ )
  {
    if ( test == 1 )
    {
      iopt = -3;
    }
    else if ( test == 2 )
    {
      iopt = -2;
    }
    else if ( test == 3 )
    {
      iopt = -1;
      x0 = 2.0;
    }
    else if ( test == 4 )
    {
      iopt = 0;
      x0 = 2.0;
    }
    else if ( test == 5 )
    {
      iopt = 6;
      x0 = 2.0;
    }
    else if ( test == 6 )
    {
      iopt = 6;
      x0 = -2.0;
    }

    for ( i = 0; i < N-1; i++ )
    {
      a[i] = 0.0;
    }
    a[N-1] = 1.0;

    if ( test == 1 )
    {
      r8vec_print ( N, a, "  All calls  have input A as follows:" );
    }
 
    r8poly ( N, a, x0, iopt, val );
 
    cout << "\n";
    cout << "  Option IOPT = " << iopt << "\n";

    if ( -1 <= iopt )
    {
      cout << "  X0 = " << x0 << "\n";
    }

    if ( iopt == -3 || iopt == -2 || 0 < iopt )
    {
      r8vec_print ( N, a, "  Output array:" );
    }

    if ( iopt == -1 || iopt == 0 )
    {
      cout << "  Value = " << val << "\n";
    }
 
  }

  return;
# undef N
}
//****************************************************************************80

void r8poly_add_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_ADD_TEST tests R8POLY_ADD.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a[6] = { 0.0,  1.1, 2.2, 3.3, 4.4,  5.5 };
  double b[6] = { 1.0, -2.1, 7.2, 8.3, 0.0, -5.5 };
  double *c;
  int na = 5;
  int nb = 5;
  int nc;
  int nc2;

  cout << "\n";
  cout << "R8POLY_ADD_TEST\n";
  cout << "  R8POLY_ADD adds two polynomials.\n";

  r8poly_print ( na, a, "  Polynomial A:" );

  r8poly_print ( nb, b, "  Polynomial B:" );

  c = r8poly_add ( na, a, nb, b );

  nc = i4_max ( na, nb );

  nc2 = r8poly_degree ( nc, c );

  r8poly_print ( nc2, c, "  Polynomial C = A+B:" );

  delete [] c;

  return;
}
//****************************************************************************80

void r8poly_degree_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_DEGREE_TEST tests R8POLY_DEGREE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a[11] = { 0.0, 1.1, 0.0, 3.3, 4.4, 0, 6.6, 7.7, 0.0, 0.0, 0.0 };
  int degree;
  int n = 4;

  cout << "\n";
  cout << "R8POLY_DEGREE_TEST\n";
  cout << "  R8POLY_DEGREE determines the degree of an R8POLY.\n";

  r8poly_print ( n, a, "  The polynomial:" );

  degree = r8poly_degree ( n, a );

  cout << "\n";
  cout << "The polyomial degree = " << degree << "\n";

  return;
}
//****************************************************************************80

void r8poly_dif_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_DIF_TEST tests R8POLY_DIF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a[11];
  double *b;
  int d;
  int na;
  int test_num = 2;
  int test;

  cout << "\n";
  cout << "R8POLY_DIF_TEST\n";
  cout << "  R8POLY_DIF computes derivatives of an R8POLY.\n";
  cout << "\n";
//
//  1: Differentiate X^3 + 2*X^2 - 5*X - 6 once.
//  2: Differentiate X^4 + 3*X^3 + 2*X^2 - 2  3 times.
//
  for ( test = 1; test <= test_num; test++ )
  {
    if ( test == 1 )
    {
      na = 3;
      d = 1;
      a[0] = -6.0;
      a[1] = -5.0;
      a[2] = 2.0;
      a[3] = 1.0;
    }
    else if ( test == 2 )
    {
      na = 4;
      d = 3;
      a[0] = -2.0;
      a[1] = 5.0;
      a[2] = 2.0;
      a[3] = 3.0;
      a[4] = 1.0;
    }

    r8poly_print ( na, a, "  The polynomial A:" );

    cout << "\n";
    cout << "  Differentiate A " << d << " times.\n";

    b = r8poly_dif ( na, a, d );

    r8poly_print ( na - d, b, "  The derivative, B:" );
    delete [] b;
  }

  return;
}
//****************************************************************************80

void r8poly_div_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_DIV_TEST tests R8POLY_DIV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a[11];
  double b[11];
  int i;
  int na;
  int nb;
  int nq;
  int nr;
  int ntest = 2;
  double q[11];
  double r[11];
  int test;

  cout << "\n";
  cout << "R8POLY_DIV_TEST\n";
  cout << "  R8POLY_DIV computes the quotient and\n";
  cout << "  remainder for polynomial division.\n";
  cout << "\n";
//
//  1: Divide X**3 + 2*X**2 - 5*X - 6  by X-2.  
//     Quotient is 3+4*X+X**2, remainder is 0.
//
//  2: Divide X**4 + 3*X**3 + 2*X**2 - 2  by  X**2 + X - 3.
//     Quotient is X**2 + 2*X + 3, remainder 8*X + 7.
//
  for ( test = 1; test <= ntest; test++ )
  {
    if ( test == 1 )
    {
      na = 3;
      a[0] = -6.0;
      a[1] = -5.0;
      a[2] =  2.0;
      a[3] =  1.0;
      nb = 1;
      b[0] = -2.0;
      b[1] =  1.0;
    }
    else if ( test == 2 )
    {
      na = 4;
      a[0] = -2.0;
      a[1] =  5.0;
      a[2] =  2.0;
      a[3] =  3.0;
      a[4] =  1.0;
      nb = 2;
      b[0] = -3.0;
      b[1] =  1.0;
      b[2] =  1.0;
    }

    r8poly_print ( na, a, "  The polynomial to be divided, A:" );

    r8poly_print ( nb, b, "  The divisor polynomial, B:" );

    r8poly_div ( na, a, nb, b, nq, q, nr, r );

    r8poly_print ( nq, q, "  The quotient polynomial, Q:" );

    r8poly_print ( nr, r, "  The remainder polynomial, R:" );

  }
  return;
}
//****************************************************************************80

void r8poly_f2p_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_F2P_TEST tests R8POLY_F2P.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double *a;
  int i;

  cout << "\n";
  cout << "R8POLY_F2P_TEST\n";
  cout << "  R8POLY_F2P: factorial => power sum.\n";

  a = r8vec_indicator1_new ( N );

  r8poly_print ( N-1, a, "  The power sum polynomial:" );

  r8poly_p2f ( N, a );
 
  r8vec_print ( N, a, "  The factorial coefficients:" );

  r8poly_f2p ( N, a );
 
  r8poly_print ( N-1, a, "  The recovered power sum polynomial:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8poly_fval_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_FVAL_TEST tests R8POLY_FVAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 May 2009
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  double *a;
  int i;
  double val;
  double x;

  cout << "\n";
  cout << "R8POLY_FVAL_TEST\n";
  cout << "  R8POLY_FVAL evaluates a polynomial in factorial form.\n";

  a = r8vec_indicator1_new ( N );
 
  r8vec_print ( N, a, "  The factorial coefficients:" );

  x = 2.0;

  val = r8poly_fval ( N, a, x );

  cout << "\n";
  cout << "  RPOLY (" << x << ") = " << val << "\n";
  cout << "  The correct value is 11.\n";
 
  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8poly_mul_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_MUL_TEST tests R8POLY_MUL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define MAXN 5

  double a[MAXN+1];
  double b[MAXN+1];
  double c[MAXN+1];
  int na;
  int nb;
  int ntest = 2;
  int test;

  cout << "\n";
  cout << "R8POLY_MUL_TEST\n";
  cout << "  R8POLY_MUL multiplies two polynomials.\n";
  cout << "\n";
//
//  1: Multiply (1+X) times (1-X).  Answer is 1-X**2.
//  2: Multiply (1+2*X+3*X**2) by (1-2*X). Answer is 1 + 0*X - X**2 - 6*X**3
//
  for ( test = 1; test <= ntest; test++ )
  {
    if ( test == 1 )
    {
      na = 1;
      a[0] = 1.0;
      a[1] = 1.0;
      nb = 1;
      b[0] =  1.0;
      b[1] = -1.0;
    }
    else if ( test == 2 )
    {
      na = 2;
      a[0] = 1.0;
      a[1] = 2.0;
      a[2] = 3.0;
      nb = 1;
      b[0] =  1.0;
      b[1] = -2.0;
    }

    r8poly_mul ( na, a, nb, b, c );

    r8poly_print ( na, a, "  The factor A:" );

    r8poly_print ( nb, b, "  The factor B:" );

    r8poly_print ( na+nb, c, "  The product C = A*B:" );

  }

  return;
# undef MAXN
}
//****************************************************************************80

void r8poly_n2p_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_N2P_TEST tests R8POLY_N2P and R8POLY_P2N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int i;
  double *a;
  double a2[N];
  double a3[N];

  cout << "\n";
  cout << "R8POLY_N2P_TEST\n";
  cout << "  R8POLY_N2P: Newton => power sum;\n";

  a = r8vec_indicator1_new ( N  );

  for ( i = 0; i < N; i++ )
  {
    a2[i] = 2.0 * a[i];
  }

  r8poly_print ( N-1, a, "  The power sum polynomial:" );

  r8poly_p2n ( N, a, a2 );
 
  r8vec_print ( N, a, "  Derived Newton form coefficients:" );

  r8vec_print ( N, a2, "  Newton form abscissas:" );

  r8poly_n2p ( N, a, a2 );
 
  r8poly_print ( N-1, a, "  The recovered power sum polynomial:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8poly_nval_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_NVAL_TEST tests R8POLY_NVAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  double *a;
  double a2[N];
  int i;
  double val;
  double x;

  cout << "\n";
  cout << "R8POLY_NVAL_TEST\n";
  cout << "  R8POLY_NVAL evaluates a polynomial in Newton form.\n";

  a = r8vec_indicator1_new ( N );

  for ( i = 0; i < N; i++ )
  {
    a2[i] = a[i] - 1.0;
  }
 
  r8vec_print ( N, a, "  Newton polynomial coefficients:" );

  r8vec_print ( N, a2, "  Newton polynomial abscissas:" );

  x = 2.0;
 
  val = r8poly_nval ( N, a, a2, x );
 
  cout << "\n";
  cout << "  RPOLY (" << x << ") = " << val << "\n";
  cout << "  The correct value is 11.\n";
 
  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8poly_nx_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_NX_TEST tests R8POLY_NX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n;
  double x;
  double *xarray;

  cout << "\n";
  cout << "R8POLY_NXL_TEST\n";
  cout << "  R8POLY_NX replaces one abscissa in a Newton polynomial.\n";

  n = 3;

  a = r8vec_indicator1_new ( n );
  xarray = r8vec_indicator1_new ( n );

  r8vec_print ( n, a, "  Newton polynomial coefficients:" );
  r8vec_print ( n, xarray, "  Newton polynomial abscissas:" );
/*
  Shift the X array by inserting X=0.
*/
  x = 0.0;
  cout << "\n";
  cout << "  Replace one abscissa by X = " << x << "\n";

  r8poly_nx ( n, a, xarray, x );
/*
  Report the new polynomial form.
*/
  r8vec_print ( n, a, "  Revised Newton polynomial coefficients:" );
  r8vec_print ( n, xarray, "  Revised Newton polynomial abscissas:" );
 
  delete [] a;
  delete [] xarray;

  return;
}
//****************************************************************************80

void r8poly_p2f_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_P2F_TEST tests R8POLY_P2F.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double *a;
  int i;

  cout << "\n";
  cout << "R8POLY_P2F_TEST\n";
  cout << "  R8POLY_P2F: power sum => factorial;\n";

  a = r8vec_indicator1_new ( N );

  r8poly_print ( N-1, a, "  The power sum polynomial:" );

  r8poly_p2f ( N, a );
 
  r8vec_print ( N, a, "  The factorial coefficients:" );

  r8poly_f2p ( N, a );
 
  r8poly_print ( N-1, a, "  The recovered power sum polynomial:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8poly_p2n_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_P2N_TEST tests R8POLY_P2N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int i;
  double *a;
  double a2[N];
  double a3[N];

  cout << "\n";
  cout << "R8POLY_P2N_TEST\n";
  cout << "  R8POLY_P2N: Power sum => Newton.\n";

  a = r8vec_indicator1_new ( N );

  for ( i = 0; i < N; i++ )
  {
    a2[i] = 2.0 * a[i];
  }

  r8poly_print ( N-1, a, "  The power sum polynomial:" );

  r8poly_p2n ( N, a, a2 );
 
  r8vec_print ( N, a, "  Derived Newton form coefficients:" );

  r8vec_print ( N, a2, "  Newton form abscissas:" );

  r8poly_n2p ( N, a, a2 );
 
  r8poly_print ( N-1, a, "  The recovered power sum polynomial:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8poly_p2t_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_P2T_TEST tests R8POLY_P2T.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double *a;
  int i;
  double x = 2.0;

  cout << "\n";
  cout << "R8POLY_P2T_TEST\n";;
  cout << "  R8POLY_P2T: Power sum => Taylor.\n";
  cout << "  The Taylor form uses the base point X0 = " << x << "\n";

  a = r8vec_indicator1_new ( N+1 );

  r8vec_print ( N, a, "  Initial Taylor sum form:" );

  r8poly_t2p ( N, a, x );

  r8poly_print ( N, a, "  Power sum form:" );

  r8poly_p2t ( N, a, x );

  r8vec_print ( N, a, "  Recovered Taylor sum form:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8poly_power_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_POWER_TEST tests R8POLY_POWER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define LMAX 10

  double a[LMAX+1];
  double b[LMAX+1];
  int na;
  int p;

  cout << "\n";
  cout << "R8POLY_POWER_TEST\n";
  cout << "  R8POLY_POWER takes a polynomial to a power.\n";
//
//  Cube (2-X).  Answer is 8-12*X+6*X**2-X**3.
//
  na = 1;
  a[0] =  2.0;
  a[1] = -1.0;
  p = 3;

  r8poly_print ( na, a, "  The polynomial A:" );
 
  r8poly_power ( na, a, p, b );
 
  r8poly_print ( p*na, b, "  Raised to the power 3:" );
//
//  Square X+X**2
//
  na = 2;
  a[0] =  0.0;
  a[1] =  1.0;
  a[2] =  1.0;
  p = 2;

  r8poly_print ( na, a, "  The polynomial A:" );
 
  r8poly_power ( na, a, p, b );
 
  r8poly_print ( p*na, b, "  Raised to the power 2:" );
 
  return;
# undef LMAX
}
//****************************************************************************80

void r8poly_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_PRINT_TEST tests R8POLY_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a[5] = { -2.0, 5.1, 2.2, 3.3, 1.4 };
  int n = 4;

  cout << "\n";
  cout << "R8POLY_PRINT_TEST\n";
  cout << "  R8POLY_PRINT prints an R8POLY.\n";

  r8poly_print ( n, a, "  The polynomial:" );

  return;
}
//****************************************************************************80

void r8poly_pval_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_PVAL_TEST tests R8POLY_PVAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int i;
  double *a;
  double val;
  double x;

  a = r8vec_indicator1_new ( N+1 );

  cout << "\n";
  cout << "R8POLY_PVAL_TEST\n";
  cout << "  R8POLY_PVAL evaluates a polynomial\n";
  cout << "  in power sum form.\n";

  r8poly_print ( N, a, "  The polynomial to be evaluated:" );

  x = 2.0;
 
  val = r8poly_pval ( N, a, x );

  cout << "  At X = " << x << "\n";
  cout << "  Computed polynomial value is " << val << "\n";
  cout << "  Correct value is 129.\n";
 
  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8poly_t2p_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R89POLY_T2P_TEST tests R8POLY_T2P.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double *a;
  int i;
  double x = 2.0;

  cout << "\n";
  cout << "R8POLY_T2P_TEST\n";
  cout << "  R8POLY_T2P: Taylor => Power sum;\n";
  cout << "  The Taylor form uses the base point X0 = " << x << "\n";

  a = r8vec_indicator1_new ( N+1 );

  r8vec_print ( N, a, "  Initial Taylor sum form:" );

  r8poly_t2p ( N, a, x );

  r8poly_print ( N, a, "  Power sum form:" );

  r8poly_p2t ( N, a, x );

  r8vec_print ( N, a, "  Recovered Taylor sum form:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r8vec_backtrack_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_BACKTRACK_TEST tests R8VEC_BACKTRACK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    18 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int found_num;
  int i;
  int indx;
  int k;
  int n = 8;
  int maxstack = 100;
  int ncan[8];
  int nstack;
  double stacks[100];
  double t;
  double total;
  double w[8] = { 15.0, 22.0, 14.0, 26.0, 32.0, 9.0, 16.0, 8.0 };
  double x[8];

  cout << "\n";
  cout << "R8VEC_BACKTRACK_TEST\n";
  cout << "  I4VEC_BACKTRACK uses backtracking, seeking a vector X of\n";
  cout << "  N values which satisfies some condition.\n";

  cout << "\n";
  cout << "  In this demonstration, we have 8 values W(I).\n";
  cout << "  We seek all subsets that sum to 53.0.\n";
  cout << "  X(I) is 0.0 or 1.0 if the entry is skipped or used.\n";
  cout << "\n";

  t = 53.0;

  for ( i = 0; i < n; i++ )
  {
    x[i] = 0.0;
  }
  indx = 0;
  k = 0;
  nstack = 0;
  for ( i = 0; i < n; i++ )
  {
    ncan[i] = 0;
  }

  found_num = 0;

  for ( ; ; )
  {
    r8vec_backtrack ( n, maxstack, x, indx, k, nstack, stacks, ncan );

    if ( indx == 1 )
    {
      found_num = found_num + 1;
      cout << "  " << setw(2) << found_num << "   ";

      total = r8vec_dot_product ( n, w, x );
      cout << "  " << setw(8) << total << ":  ";

      for ( i = 0; i < n; i++ )
      {
        if ( x[i] == 1.0 )
        {
          cout << "  " << setw(8) << w[i];
        }
      }
      cout << "\n";
    }
//
//  Given that we've chose X(1:K-1), what are our choices for X(K)?
//
//     if T < TOTAL, 
//       no choices
//     if T = TOTAL, 
//       X(K) = 0
//     if T > TOTAL and K < N, 
//       X(k) = 0
//       If ( W(K)+TOTAL <= T ) X(K) = 1
//     If T > TOTAL and K = N,
//       If ( W(K) + TOTAL) = T ) X(K) = 1
//
    else if ( indx == 2 )
    {
      total = r8vec_dot_product ( k - 1, w, x );

      if ( t < total )
      {
        ncan[k-1] = 0;
      }
      else if ( t == total )
      {
        ncan[k-1] = ncan[k-1] + 1;
        stacks[nstack] = 0.0;
        nstack = nstack + 1;
      }
      else if ( total < t && k < n )
      {
        ncan[k-1] = ncan[k-1] + 1;
        stacks[nstack] = 0.0;
        nstack = nstack + 1;

        if ( total + w[k-1] <= t )
        {
          ncan[k-1] = ncan[k-1] + 1;
          stacks[nstack] = 1.0;
          nstack = nstack + 1;
        }
      }
      else if ( total < t && k == n )
      {
        if ( total + w[k-1] == t )
        {
          ncan[k-1] = ncan[k-1] + 1;
          stacks[nstack] = 1.0;
          nstack = nstack + 1;
        }
      }
    }
    else
    {
      cout << "\n";
      cout << "  Done!\n";
      break;
    }
  }

  return;
}
//****************************************************************************80

void r8vec_frac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_FRAC_TEST tests R8VEC_FRAC;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  double a[N];
  double ahi = 10.0;
  double alo = 0.0;
  int k;
  int seed = 123456789;

  cout << "\n";
  cout << "R8VEC_FRAC_TEST\n";
  cout << "  R8VEC_FRAC: K-th smallest real vector entry;\n";

  r8vec_uniform ( N, alo, ahi, seed, a );

  r8vec_print ( N, a, "  The real array to search: " );

  cout << "\n";
  cout << "Frac     Value\n";
  cout << "\n";

  for ( k = 1; k <= N; k++ )
  {
    cout << setw(4)  << k                     << "  "
         << setw(10) << r8vec_frac ( N, a, k ) << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void r8vec_mirror_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_MIRROR_NEXT_TEST tests R8VEC_MIRROR_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  double a[N];
  bool done;

  cout << "\n";
  cout << "R8VEC_MIRROR_NEXT_TEST\n";
  cout << "  R8VEC_MIRROR_NEXT generates all sign variations\n";
  cout << "  of a real vector.\n";

  a[0] = 1.0;
  a[1] = 2.0;
  a[2] = 3.0;

  for ( ; ; )
  {
    r8vec_print ( N, a, "  Next vector:" );

    done = r8vec_mirror_next ( N, a );

    if ( done )
    {
      cout << "\n";
      cout << "  Done.\n";
      break;
    }
  }

  a[0] = 1.0;
  a[1] = 0.0;
  a[2] = 3.0;

  for ( ; ; )
  {
    r8vec_print ( N, a, "  Next vector:" );

    done = r8vec_mirror_next ( N, a );

    if ( done )
    {
      cout << "\n";
      cout << "  Done.\n";
      break;
    }
  }

  return;
# undef N
}
//****************************************************************************80

void rat_add_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_ADD_TEST tests RAT_ADD.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int abot = 4;
  int atop = 3;
  int bbot = 7;
  int btop = 10;
  int cbot;
  int ctop;
  bool error;

  cout << "\n";
  cout << "RAT_ADD_TEST\n";
  cout << "  RAT_ADD adds two rationals.\n";

  rat_add ( atop, abot, btop, bbot, ctop, cbot, error );

  cout << "\n";
  cout << "  A = "         << atop << "/" << abot << "\n";
  cout << "  B = "         << btop << "/" << bbot << "\n";
  cout << "  C = A + B = " << ctop << "/" << cbot << "\n";
 
  return;
}
//****************************************************************************80

void rat_div_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_DIV_TEST tests RAT_DIV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int abot = 4;
  int atop = 3;
  int bbot = 7;
  int btop = 10;
  int cbot;
  int ctop;
  bool error;

  cout << "\n";
  cout << "RAT_DIV_TEST\n";
  cout << "  RAT_DIV divides two rationals.\n";

  rat_div ( atop, abot, btop, bbot, ctop, cbot, error );

  cout << "\n";
  cout << "  A = "         << atop << "/" << abot << "\n"; 
  cout << "  B = "         << btop << "/" << bbot << "\n"; 
  cout << "  C = A / B = " << ctop << "/" << cbot << "\n"; 
 
  return;
}
//****************************************************************************80

void rat_farey_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_FAREY_TEST tests RAT_FAREY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define FRAC_MAX 20

  int a[FRAC_MAX];
  int b[FRAC_MAX];
  int frac_num;
  int i;
  int ihi;
  int ilo;
  int n;

  cout << "\n";
  cout << "RAT_FAREY_TEST\n";
  cout << "  RAT_FAREY computes a row of the Farey fraction table.\n";

  for ( n = 1; n <= 7; n++ )
  {
    rat_farey ( n, FRAC_MAX, frac_num, a, b );
 
    cout << "\n";
    cout << "  Row " << n << "\n";
    cout << "  Number of fractions: " << frac_num << "\n";
    cout << "\n";

    for ( ilo = 0; ilo < frac_num; ilo = ilo + 20 )
    {
      ihi = i4_min ( ilo+20-1, frac_num-1 );
      for ( i = ilo; i <= ihi; i++ )
      {
        cout << setw(3) << a[i];
      }
      cout << "\n";
      for ( i = ilo; i <= ihi; i++ )
      {
        cout << setw(3) << b[i];
      }
      cout << "\n";
    }

  }

  return;
# undef FRAC_MAX
}
//****************************************************************************80

void rat_farey2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_FAREY2_TEST tests RAT_FAREY2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 4
# define TWO_POWER_MAX 16

  int a[TWO_POWER_MAX+1];
  int b[TWO_POWER_MAX+1];
  int i;
  int ihi;
  int ilo;
  int n;
  int num_frac;
  int two_power;

  cout << "\n";
  cout << "RAT_FAREY2_TEST\n";
  cout << "  RAT_FAREY2 computes a row of the Farey fraction table.\n";

  for ( n = 0; n <= N_MAX; n++ )
  {
    rat_farey2 ( n, a, b );
 
    cout << "\n";
    cout << "  Row " << n+1 << "\n";

    two_power = i4_power ( 2, n );

    for ( ilo = 0; ilo <= two_power; ilo = ilo + 20 )

    {
      ihi = i4_min ( ilo+20-1, two_power );
      cout << "\n";
      for ( i = ilo; i <= ihi; i++ )
      {
        cout << setw(3) << a[i];
      }
      cout << "\n";
      for ( i = ilo; i <= ihi; i++ )
      {
        cout << setw(3) << b[i];
      }
      cout << "\n";

    }

  }

  return;
# undef N_MAX
# undef TWO_POWER_MAX
}
//****************************************************************************80

void rat_mul_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_MUL_TEST tests RAT_MUL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int abot = 4;
  int atop = 3;
  int bbot = 7;
  int btop = 10;
  int cbot;
  int ctop;
  bool error;

  cout << "\n";
  cout << "RAT_MUL_TEST\n";
  cout << "  RAT_MUL multiplies two rationals.\n";

  rat_mul ( atop, abot, btop, bbot, ctop, cbot, error );

  cout << "\n";
  cout << "  A = "         << atop << "/" << abot << "\n";
  cout << "  B = "         << btop << "/" << bbot << "\n";
  cout << "  C = A * B = " << ctop << "/" << cbot << "\n";
 
  return;
}
//****************************************************************************80

void rat_normalize_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_NORMALIZE_TEST tests RAT_NORMALIZE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a1;
  int a2;
  int b1;
  int b2;
  int i;
  int rat_num = 7;
  int rat_top[7] = { 3, 1,    20,  8, -10,   9, -11 };
  int rat_bot[7] = { 4, 1000,  1,  4,   7, -15, -11 };

  cout << "\n";
  cout << "RAT_NORMALIZE_TEST\n";
  cout << "  RAT_NORMALIZE normalizes a rational.\n";

  cout << "\n";
  cout << "       A       B         A       B\n";
  cout << "                         Normalized\n";
  cout << "\n";

  for ( i = 0; i < 7; i++ )
  {
    a1 = rat_top[i];
    b1 = rat_bot[i];
    a2 = a1;
    b2 = b1;
    rat_normalize ( a2, b2 );
    cout << "  " << setw(6) << a1
         << "  " << setw(6) << b1
         << "  "
         << "  " << setw(6) << a2
         << "  " << setw(6) << b2 << "\n";
  }

  return;
}
//****************************************************************************80

void rat_sum_formula_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_SUM_FORMULA_TEST tests RAT_SUM_FORMULA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  int a[(N+1)*(N+1)];
  int b[(N+1)*(N+1)];

  cout << "\n";
  cout << "RAT_SUM_FORMULA_TEST\n";
  cout << "  RAT_SUM_FORMULA computes the coefficients for the\n";
  cout << "  formulas for the sums of powers of integers.\n";
  
  rat_sum_formula ( N, a, b );

  ratmat_print ( N+1, N+1, a, b, "  Power Sum Coefficients:" );

  return;
# undef N
}
//****************************************************************************80

void rat_to_cfrac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_TO_CFRAC_TEST tests RAT_TO_CFRAC.
//
//  Discussion:
//
//    Compute the continued fraction form of 4096/15625.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define M 10

  int a[M];
  int bot = 15625;
  bool error;
  int i;
  int n;
  int p[M];
  int q[M];
  int top = 4096;

  cout << "\n";
  cout << "RAT_TO_CFRAC_TEST\n";
  cout << "  RAT_TO_CFRAC fraction => continued fraction,\n";
  cout << "\n";
  cout << "  Regular fraction is " << top << "/" << bot << "\n";

  rat_to_cfrac ( top, bot, M, n, a, error );
 
  i4vec1_print ( n, a, "  Continued fraction coefficients:" );

  cfrac_to_rat ( n, a, p, q );
 
  cout << "\n";
  cout << "  The continued fraction convergents.\n";
  cout << "  The last row contains the value of the continued\n";
  cout << "  fraction, written as a common fraction.\n";
  cout << "\n";
  cout << "  I, P(I), Q(I), P(I)/Q(I)\n";
  cout << "\n";

  for ( i = 0; i < n; i++ )
  {
    cout << setw(3) <<   i  << "  "
         << setw(6) << p[i] << "  "
         << setw(6) << q[i] << "  "
         << setw(14) << ( double ) p[i] / ( double ) q[i] << "\n";
  }
 
  return;
# undef M
}
//****************************************************************************80

void rat_to_dec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_TO_DEC_TEST tests RAT_TO_DEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int exponent;
  int i;
  int mantissa;
  double r1;
  double r2;
  double r3;
  int rat_bot;
  int rat_bot2;
  int rat_top;
  int rat_top2;
  int seed;

  cout << "\n";
  cout << "RAT_TO_DEC_TEST\n";
  cout << "  RAT_TO_DEC fraction => decimal,\n";
  cout << "\n";
  cout << "  In this test, choose the top and bottom\n";
  cout << "  of a rational at random, and compute the\n";
  cout << "  equivalent real number.\n";
  cout << "\n";
  cout << "  Then convert to decimal, and the equivalent real.\n";
  cout << "\n";
  cout << "  Then convert back to rational and the equivalent real.\n";
  
  seed = 123456789;

  for ( i = 1; i <= 10; i++ )
  {
    rat_top = i4_uniform_ab ( -1000, 1000, seed );
    rat_bot = i4_uniform_ab (     1, 1000, seed );

    r1 = ( double ) rat_top / ( double ) rat_bot;

    rat_to_dec ( rat_top, rat_bot, mantissa, exponent );
    r2 = ( double ) mantissa * pow ( 10.0, exponent );

    dec_to_rat ( mantissa, exponent, rat_top2, rat_bot2 );
    r3 = ( double ) rat_top2 / ( double ) rat_bot2;

    cout << "\n";
    cout << "  " << r1 << " = " << rat_top  << "/"     << rat_bot  << "\n";
    cout << "  " << r2 << " = " << mantissa << "*10^(" << exponent << ")\n";
    cout << "  " << r3 << " = " << rat_top2 << "/"     << rat_bot2 << "\n";
  }
 
  return;
}
//****************************************************************************80

void rat_to_r8_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_TO_R8_TEST tests RAT_TO_R8.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int i;
  int ndig = 4;
  double r;
  double r2;
  int seed;

  cout << "\n";
  cout << "RAT_TO_R8_TEST\n";
  cout << "  RAT_TO_R8 converts a rational to a real number.\n";
  cout << "\n";
  cout << "  The maximum number of digits allowed is " << ndig << "\n";

  seed = 123456789;

  cout << "\n";
  cout << "     R   =>  A / B  =>  R2\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    r = r8_uniform_01 ( seed );
    r = 10.0 * ( r - 0.25 );

    r8_to_rat ( r, ndig, a, b );
    r2 = rat_to_r8 ( a, b );

    cout                   << "  "
         << setw(10) << r  << "  "
         << setw(6)  << a  << "  "
         << setw(6)  << b  << "  "
         << setw(10) << r2 << "\n";
  }

  return;
}
//****************************************************************************80

void rat_to_s_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_TO_S_TEST tests RAT_TO_S.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int i;
  int rat_num = 7;
  int rat_top[7] = { 3, 1,    20,  8, -10,   9, -11 };
  int rat_bot[7] = { 4, 1000,  1,  4,   7, -15, -11 };
  string s;

  cout << "\n";
  cout << "RAT_TO_S_TEST\n";
  cout << "  RAT_TO_S converts a rational to a string.\n";

  cout << "\n";
  cout << "       A       B      S\n";
  cout << "\n";

  for ( i = 0; i < 7; i++ )
  {
    a = rat_top[i];
    b = rat_bot[i];
    s = rat_to_s ( a, b );
    cout << "  " << setw(6) << a
         << "  " << setw(6) << b
         << "      " << s << "\n";
  }

  return;
}
//****************************************************************************80

void rat_width_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAT_WIDTH_TEST tests RAT_WIDTH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N_TEST 17

  int a;
  int a_test[N_TEST] = {
    1000, 1000, 1000, 1000, 1000, 1, -1, -10, -100, -1000,
    1, 10, 100, 1000, 10000, 17, 4000000 };
  int b;
  int b_test[N_TEST] = {
    3, 40, 500, 6000, 70000, 1, 200, 200, 200, 200, 
   -200, -200, -200, -200, -200, 3000, 4000000 };
  int i;
  int width;

  cout << "\n";
  cout << "RAT_WIDTH_TEST\n";
  cout << "  RAT_WIDTH determines the \"width\" of a rational.\n";
  cout << "\n";
  cout << "  Top    Bottom  Width\n";
  cout << "\n";

  for ( i = 0; i < N_TEST; i++ )
  {
    a = a_test[i];
    b = b_test[i];

    width = rat_width ( a, b );

    cout                     << "  "
         << setw(8) << a     << "  "
         << setw(8) << b     << "  "
         << setw(8) << width << "\n";
  }

  return;
# undef N_TEST
}
//****************************************************************************80

void ratmat_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RATMAT_DET_TEST tests RATMAT_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N3 3

  int a3[N3*N3];
  int b3[N3*N3];
  bool error;
  int i;
  int idbot;
  int idtop;
  int j;
  int k;

  cout << "\n";
  cout << "RATMAT_DET_TEST\n";
  cout << "  RATMAT_DET: determinant of a rational matrix.\n";
  cout << "\n";
 
  k = 0;
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      k = k + 1;
      a3[i+j*N3] = k;
    }
  }

  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      b3[i+j*N3] = 1;
    }
  }
 
  ratmat_print ( N3, N3, a3, b3, "  The 123/456/789 matrix:" );

  ratmat_det ( N3, a3, b3, idtop, idbot, error );
 
  cout << "\n";
  cout << "  Determinant of the 123/456/789 matrix = "
       << idtop << "/" << idbot << "\n";
 
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      a3[i+j*N3] = 1;
    }
  }
 
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      b3[i+j*N3] = i + j + 2;
    }
  }
  ratmat_print ( N3, N3, a3, b3, "  The Hilbert matrix:" );

  ratmat_det ( N3, a3, b3, idtop, idbot, error );
 
  cout << "\n";
  cout << "  Determinant of the Hilbert matrix = "
       << idtop << "/" << idbot << "\n";
 
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      if ( i == j )
      {
        a3[i+j*N3] = 2;
      }
      else if ( i == j+1 || i == j-1 )
      {
        a3[i+j*N3] = -1;
      }
      else
      {
        a3[i+j*N3] = 0;
      }
    }
  }
 
  for ( i = 0; i < N3; i++ )
  {
    for ( j = 0; j < N3; j++ )
    {
      b3[i+j*N3] = 1;
    }
  }

  ratmat_print ( N3, N3, a3, b3, "  The -1 2 -1 matrix:" );

  ratmat_det ( N3, a3, b3, idtop, idbot, error );
 
  cout << "\n";
  cout << "  Determinant of the -1,2,-1 matrix = "
       << idtop << "/" << idbot << "\n";
 
  return;
# undef N3
}
//****************************************************************************80

void ratmat_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RATMAT_PRINT_TEST tests RATMAT_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[4*3];
  int b[4*3];
  int i;
  int j;
  int m = 4;
  int n = 3;

  cout << "\n";
  cout << "RATMAT_PRINT_TEST\n";
  cout << "  RATMAT_PRINT prints a rational matrix.\n";
  cout << "\n";
 
  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*m] = 1;
    }
  }
 
  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      b[i+j*m] = i + j + 2;
    }
  }

  ratmat_print ( m, n, a, b, "  The Hilbert matrix:" );

  return;
}
//****************************************************************************80

void regro_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    REGRO_NEXT_TEST tests REGRO_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  bool done;
  int i;
  int rank;
  int v[N];
  int vmax[N];

  cout << "\n";
  cout << "REGRO_NEXT_TEST\n";
  cout << "  REGRO_NEXT generates all restricted growth\n";
  cout << "  functions.\n";
  cout << "\n";

  rank = 0;

  done = true;
 
  for ( ; ; )
  {
    regro_next ( done, N, v, vmax );

    if ( done )
    {
      break;
    }

    rank = rank + 1;
    cout                    << "  "
         << setw(3) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(1) << v[i] << "  ";
    }
    cout << "\n";

  }
 
  return;
# undef N
}
//****************************************************************************80

void rfrac_to_cfrac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RFRAC_TO_CFRAC_TEST tests RFRAC_TO_CFRAC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define MAXM 10

  bool error;
  double g[2*MAXM];
  double h[2*MAXM];
  int i;
  int m;
  double p[MAXM];
  double q[MAXM+1];

  m = 3;

  p[0] = 1.0;
  p[1] = 1.0;
  p[2] = 2.0;

  q[0] = 1.0;
  q[1] = 3.0;
  q[2] = 1.0;
  q[3] = 1.0;

  cout << "\n";
  cout << "RFRAC_TO_CFRAC_TEST\n";
  cout << "  RFRAC_TO_CFRAC: ratio to continued fration.\n";

  cout << "\n";
  cout << "  Rational polynomial fraction coefficients:\n";
  cout << "\n";

  cout << "  P:  ";
  for ( i = 0; i < m; i++ )
  {
    cout << setw(12) << p[i];
  }
  cout << "\n";

  cout << "  Q:  ";
  for ( i = 0; i < m+1; i++ )
  {
    cout << setw(12) << q[i];
  }
  cout << "\n";

  rfrac_to_cfrac ( m, p, q, h, error );
 
  r8vec_print ( 2*m, h, "  Continued fraction coefficients:" );

  for ( i = 0; i < 2 * m; i++ )
  {
    g[i] = 1.0;
  }

  cfrac_to_rfrac ( 2*m, g, h, p, q );
 
  cout << "\n";
  cout << "  Recovered rational polynomial:\n";
  cout << "\n";
  
  cout << "  P:  ";
  for ( i = 0; i < m; i++ )
  {
    cout << setw(12) << p[i];
  }
  cout << "\n";

  cout << "  Q:  ";
  for ( i = 0; i < m+1; i++ )
  {
    cout << setw(12) << q[i];
  }
  cout << "\n";

  return;
# undef MAXM
}
//****************************************************************************80

void rfrac_to_jfrac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RFRAC_TO_JFRAC_TEST tests RFRAC_TO_JFRAC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 October 2010
//
//  Author:
//
//    John Burkardt
//
{
# define MAXM 10

  int i;
  int m;
  double p[MAXM];
  double q[MAXM];
  double r[MAXM];
  double s[MAXM];
  int seed;
//
//  Generate the data, but force Q(M+1) to be 1.  
//  That will make it easier to see that the two operations are inverses
//  of each other.  JFRAC_TO_RFRAC is free to scale its output, and chooses
//  a scaling in which Q(M+1) is 1.
//
  seed = 123456789;
  m = 6;
  r8vec_uniform_01 ( m, seed, p );
  r8vec_uniform_01 ( m + 1, seed, q );

  for ( i = 0; i < m; i++ )
  {
    q[i] = q[i] / q[m];
  }
  q[m] = 1.0;

  cout << "\n";
  cout << "RFRAC_TO_JFRAC_TEST\n";
  cout << "  RFRAC_TO_JFRAC converts a rational polynomial\n";
  cout << "  fraction to a J fraction.\n";
  cout << "\n";
  cout << "  The original rational polynomial coefficients:\n";
  cout << "\n";

  for ( i = 0; i < m; i++ )
  {
    cout << setw(14) << p[i] << "  ";
  }
  cout << "\n";

  for ( i = 0; i < m+1; i++ )
  {
    cout << setw(14) << q[i] << "  ";
  }
  cout << "\n";
 
  rfrac_to_jfrac ( m, p, q, r, s );
 
  cout << "\n";
  cout << "  The J fraction coefficients:\n";
  cout << "\n";

  for ( i = 0; i < m; i++ )
  {
    cout << setw(14) << r[i] << "  ";
  }
  cout << "\n";
  for ( i = 0; i < m; i++ )
  {
    cout << setw(14) << s[i] << "  ";
  }
  cout << "\n";
 
  jfrac_to_rfrac ( m, r, s, p, q );

  cout << "\n";
  cout << "  The recovered rational polynomial:\n";
  cout << "\n";

  for ( i = 0; i < m; i++ )
  {
    cout << setw(14) << p[i] << "  ";
  }
  cout << "\n";

  for ( i = 0; i < m+1; i++ )
  {
    cout << setw(14) << q[i] << "  ";
  }
  cout << "\n";

  return;
# undef MAXM
}
//****************************************************************************80

void schroeder_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SCHROEDER_TEST tests SCHROEDER;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int i;
  int s[N];

  cout << "\n";
  cout << "SCHROEDER_TEST\n";
  cout << "  SCHROEDER computes the Schroeder numbers.\n";

  schroeder ( N, s );

  cout << "\n";
  cout << "   N    S(N)\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout                    << "  "
         << setw(4) << i+1  << "  "
         << setw(6) << s[i] << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void sort_heap_external_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SORT_HEAP_EXTERNAL_TEST tests SORT_HEAP_EXTERNAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int i;
  int i1;
  int indx;
  int isgn;
  int itemp;
  int j;
  int j1;
  int k0;
  int k1;
  int n = 20;
  int n1;
  int seed;
  int temp;

  cout << "\n";
  cout << "SORT_HEAP_EXTERNAL_TEST\n";
  cout << "  SORT_HEAP_EXTERNAL sorts objects externally.\n";

  seed = 123456789;

  a = i4vec_uniform_ab_new ( n, 1, n, seed );

  i4vec1_print ( n, a, "  Before sorting:" );

  indx = 0;
  i = 0;
  j = 0;
  isgn = 0;
  i1 = 0;
  j1 = 0;
  k0 = 0;
  k1 = 0;
  n1 = 0;

  for ( ; ; )
  {
    sort_heap_external ( n, indx, i, j, isgn, i1, j1, k0, k1, n1 );
 
    if ( indx < 0 )
    {

      if ( a[i-1] <= a[j-1] )
      {
        isgn = -1;
      }
      else
      {
        isgn = +1;
      }
    }
    else if ( 0 < indx )
    {
      temp = a[i-1];
      a[i-1] = a[j-1];
      a[j-1] = temp;
    }
    else
    {
      break;
    }

  }

  i4vec1_print ( n, a, "  After sorting:" ); 

  delete [] a;
 
  return;
}
//****************************************************************************80

void subset_by_size_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_BY_SIZE_NEXT_TEST tests SUBSET_BY_SIZE_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int i;
  int m;
  int m2;
  bool more;
  bool more2;
  int n;
  int rank;
  int subsize;

  cout << "\n";
  cout << "SUBSET_BY_SIZE_NEXT_TEST\n";
  cout << "  SUBSET_BY_SIZE_NEXT generates all subsets of an N set.\n";
  cout << "\n";

  n = 5;
  a = new int[n];
  subsize = 0;
  more = false;
  more2 = false;
  m = 0;
  m2 = 0;

  rank = 0;

  for ( ; ; )
  {
    subset_by_size_next ( n, a, subsize, more, more2, m, m2 );

    rank = rank + 1;

    cout << setw(4) << rank << "  ";

    if ( 0 < subsize )
    {
      for ( i = 0; i < subsize; i++ )
      {
        cout << setw(2) << a[i] << "  ";
      }
      cout << "\n";
    }
    else
    {
      cout << "The empty set\n";
    }

    if ( !more )
    {
      break;
    }

  }
  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void subset_lex_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_LEX_NEXT_TEST tests SUBSET_LEX_NEXT with size restrictions.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define NDIM 3

  int a[NDIM];
  int i;
  int k;
  bool ltest;
  int n = 5;

  cout << "\n";
  cout << "SUBSET_LEX_NEXT_TEST\n";
  cout << "  SUBSET_LEX_NEXT generates all subsets of an N set.\n";
  cout << "  The user can impose a restriction on the\n";
  cout << "  maximum size of the subsets.\n";
  cout << "\n";
  cout << "  Here, we require the subsets to be no larger\n";
  cout << "  than NDIM = " << NDIM << "\n";

  k = 0;
 
  for ( ; ; )
  {
    ltest = ( k == NDIM );

    subset_lex_next ( n, ltest, NDIM, k, a );
 
    if ( 0 < k )
    {
      cout << "  ";
      for ( i = 0; i < k; i++ )
      {
        cout << setw(2) << a[i] << "  ";
      }
      cout << "\n";
    }
    else
    {
      cout << "  The empty set.\n";
    }
 
    if ( k == 0 )
    {
      break;
    }

  }
 
  return;
# undef NDIM
}
//****************************************************************************80

void subset_gray_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_GRAY_NEXT_TEST tests SUBSET_GRAY_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int a[N];
  int i;
  int j;
  int iadd;
  bool more;
  int ncard;

  cout << "\n";
  cout << "SUBSET_GRAY_NEXT_TEST\n";
  cout << "  SUBSET_GRAY_NEXT generates all subsets of an N set\n";
  cout << "  using the Gray code ordering:\n";
  cout << "  0 0 1 0 1 means the subset contains 3 and 5.\n";
  cout << "\n";
  cout << "  Gray code\n";
  cout << "\n";

  more = false;
  j = 0;

  for ( ; ; )
  {
    subset_gray_next ( N, a, more, ncard, iadd );

    j = j + 1;
    cout << setw(4) << j << "    ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(2) << a[i];
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }

  }

  return;

# undef N
}
//****************************************************************************80

void subset_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_RANDOM_TEST tests SUBSET_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int a[N];
  int i;
  int j;
  int seed;

  cout << "\n";
  cout << "SUBSET_RANDOM_TEST\n";
  cout << "  SUBSET_RANDOM picks a subset at random.\n";
  cout << "  The number of elements in the main set is " << N << "\n";
  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 5; j++ )
  {
    subset_random ( N, seed, a );

    cout << setw(4) << j << "    ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(2) << a[i];
    }
    cout << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void subset_gray_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_GRAY_RANK_TEST tests SUBSET_GRAY_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int a[N] = { 1, 0, 1, 1, 0 };
  int i;
  int rank;

  cout << "\n";
  cout << "SUBSET_GRAY_RANK_TEST\n";
  cout << "  SUBSET_GRAY_RANK returns rank of a subset of an N set\n";
  cout << "  using the Gray code ordering.\n";
  cout << "\n";
  cout << "  For N = " << N << ", the subset is:\n";

  cout << "  ";
  for ( i = 0; i < N; i++ )
  {
    cout << a[i] << " ";
  }
  cout << "\n";
 
  rank = subset_gray_rank ( N, a );
 
  cout << "\n";
  cout << "  The rank is " << rank << "\n";
 
  return;
# undef N
}
//****************************************************************************80

void subset_gray_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_GRAY_UNRANK_TEST tests SUBSET_GRAY_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int a[N];
  int i;
  int rank;

  cout << "\n";
  cout << "SUBSET_GRAY_UNRANK_TEST\n";
  cout << "  SUBSET_GRAY_UNRANK finds the subset of an N set\n";
  cout << "  of a given rank under the Gray code ordering.\n";
  cout << "\n";
  cout << "  N is " << N << "\n";
  cout << "\n";
  cout << "  Rank   Subset\n";
  cout << "\n";

  for ( rank = 1; rank <= 10; rank++ )
  {
    subset_gray_unrank ( rank, N, a );

    cout << "  "
         << setw(4) << rank << "  ";
    for ( i = 0; i < N; i++ )
    {
      cout << setw(2) << a[i];
    }
    cout << "\n";

  }
 
  return;
# undef N
}
//****************************************************************************80

void subcomp_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBCOMP_NEXT_TEST tests SUBCOMP_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 November 2005
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int h;
  int i;
  int k;
  bool more;
  bool more2;
  int n;
  int n2;
  int t;
  int rank;
  int total;

  n = 6;
  k = 3;
  a = ( int * ) malloc ( k * sizeof ( int ) );
  more = false;
  h = 0;
  t = 0;
  n2 = 0;
  more2 = false;

  cout << "\n";
  cout << "SUBCOMP_NEXT_TEST\n";
  cout << "  SUBCOMP_NEXT generates subcompositions.\n";
  cout << "\n";
  cout << "  Seek all subcompositions of N = " << n << "\n";
  cout << "  using K = " << k << " parts.\n";
  cout << "\n";
  cout << "     #   Sum\n";
  cout << "\n";

  rank = 0;

  for ( ; ; )
  {
    subcomp_next ( n, k, a, more, h, t, n2, more2 );

    total = 0;
    for ( i = 0; i < k; i++ )
    {
      total = total + a[i];
    }
    rank = rank + 1;
    cout << "  " << setw(4) << rank
         << "  " << setw(4) << total
         << "  ";

    for ( i = 0; i < k; i++ )
    {
      cout << setw(4) << a[i];
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }
  }

  delete [] a;

  return;
}
//****************************************************************************80

void subcompnz_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBCOMPNZ_NEXT_TEST tests SUBCOMPNZ_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 December 2005
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int h;
  int i;
  int k;
  bool more;
  bool more2;
  int n = 6;
  int n2;
  int rank;
  int t;
  int total;

  n = 6;
  k = 3;
  a = ( int * ) malloc ( k * sizeof ( int ) );
  more = false;
  h = 0;
  t = 0;
  n2 = 0;
  more2 = false;

  cout << "\n";
  cout << "SUBCOMPNZ_NEXT_TEST\n";
  cout << "  SUBCOMPNZ_NEXT generates subcompositions using nonzero parts.\n";
  cout << "\n";
  cout << "  Seek all subcompositions of N = " << n << "\n";
  cout << "  using K = " << k << " nonzero parts.\n";
  cout << "\n";
  cout << "     #   Sum\n";
  cout << "\n";

  rank = 0;

  for ( ; ; )
  {
    subcompnz_next ( n, k, a, more, h, t, n2, more2 );

    total = 0;
    for ( i = 0; i < k; i++ )
    {
      total = total + a[i];
    }
    rank = rank + 1;
    cout << "  " << setw(4) << rank
         << "  " << setw(4) << total
         << "  ";

    for ( i = 0; i < k; i++ )
    {
      cout << setw(4) << a[i];
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }
  }

  delete [] a;

  return;
}
//****************************************************************************80

void subcompnz2_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBCOMPNZ2_NEXT_TEST tests SUBCOMPNZ2_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2005
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int h;
  int i;
  int k;
  bool more;
  bool more2;
  int n;
  int n_hi = 7;
  int n_lo = 5;
  int n2;
  int rank;
  int t;

  n_lo = 5;
  n_hi = 7;
  k = 3;
  a = ( int * ) malloc ( k * sizeof ( int ) );
  more = false;
  h = 0;
  t = 0;
  n2 = 0;
  more2 = false;

  cout << "\n";
  cout << "SUBCOMPNZ2_NEXT_TEST\n";
  cout << "  SUBCOMPNZ2_NEXT generates subcompositions using nonzero parts.\n";
  cout << "\n";
  cout << "  Seek all subcompositions of N\n";
  cout << "  using K = " << k << " nonzero parts.\n";
  cout << "\n";
  cout << "  Here N is in the range " << n_lo << " <= N <= " << n_hi << "\n";
  cout << "\n";
  cout << "     #     N\n";
  cout << "\n";

  rank = 0;

  for ( ; ; )
  {
    subcompnz2_next ( n_lo, n_hi, k, a, more, h, t, n2, more2 );

    n = 0;
    for ( i = 0; i < k; i++ )
    {
      n = n + a[i];
    }
    rank = rank + 1;
    cout << "  " << setw(4) << rank
         << "  " << setw(4) << n
         << "  ";

    for ( i = 0; i < k; i++ )
    {
      cout << setw(4) << a[i];
    }
    cout << "\n";

    if ( !more )
    {
      break;
    }
  }

  delete [] a;

  return;
}
//****************************************************************************80

void subtriangle_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBTRIANGLE_NEXT_TEST tests SUBTRIANGLE_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i1;
  int i2;
  int i3;
  int j1;
  int j2;
  int j3;
  bool more;
  int n;
  int rank;

  n = 4;
  rank = 0;

  more = false;
  i1 = 0;
  j1 = 0;
  i2 = 0;
  j2 = 0;
  i3 = 0;
  j3 = 0;

  cout << "\n";
  cout << "SUBTRIANGLE_NEXT_TEST\n";
  cout << "  SUBTRIANGLE_NEXT generates the indices of subtriangles\n";
  cout << "  in a triangle whose edges were divided into N subedges.\n";
  cout << "\n";
  cout << "  For this test, N = " << n << "\n";
  cout << "\n";
  cout << "  Rank    I1  J1    I2  J2    I3  J3\n";
  cout << "\n";

  for ( ; ; )
  {
    subtriangle_next ( n, more, i1, j1, i2, j2, i3, j3 );

    rank = rank + 1;

    cout << "  " << setw(4) << rank << "  "
         << "  " << setw(2) << i1
         << "  " << setw(2) << j1 << "  "
         << "  " << setw(2) << i2
         << "  " << setw(2) << j2 << "  "
         << "  " << setw(2) << i3
         << "  " << setw(2) << j3 << "\n"; 

    if ( !more )
    {
      break;
    }

  }

  return;
}
//****************************************************************************80

void thue_binary_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    THUE_BINARY_NEXT_TEST tests THUE_BINARY_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 100

  int i;
  int j;
  int n;
  int thue[N_MAX];

  cout << "\n";
  cout << "THUE_BINARY_NEXT_TEST\n";
  cout << "  THUE_BINARY_NEXT returns the next\n";
  cout << "  Thue binary sequence.\n";
  cout << "\n";

  n = 1;
  thue[0] = 0;
  cout << setw(4) << n << "    ";
  for ( i = 0; i < n; i++ )
  {
    cout << thue[i];
  }
  cout << "\n";

  for ( i = 1; i <= 6; i++ )
  {
    thue_binary_next ( n, thue );

    cout << setw(4) << n << "    ";
    for ( j = 0; j < n; j++ )
    {
      cout << thue[j];
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void thue_ternary_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    THUE_TERNARY_NEXT_TEST tests THUE_TERNARY_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 100

  int i;
  int j;
  int n;
  int thue[N_MAX];

  cout << "\n";
  cout << "THUE_TERNARY_NEXT_TEST\n";
  cout << "  THUE_TERNARY_NEXT returns the next\n";
  cout << "  Thue ternary sequence.\n";
  cout << "\n";

  n = 1;
  thue[0] = 1;
  cout << setw(4) << n << "    ";
  for ( i = 0; i < n; i++ )
  {
    cout << thue[i];
  }
  cout << "\n";

  for ( i = 1; i <= 5; i++ )
  {
    thue_ternary_next ( n, thue );

    cout << setw(4) << n << "    ";
    for ( j = 0; j < n; j++ )
    {
      cout << thue[j];
    }
    cout << "\n";
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void triang_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANG_TEST tests TRIANG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int a[N*N] = {
    1,0,1,0,1,0,1,0,0,1, 
    0,1,0,0,1,0,0,0,0,0, 
    0,0,1,0,1,0,1,0,0,1, 
    0,1,1,1,1,1,1,1,0,1, 
    0,0,0,0,1,0,0,0,0,0, 
    0,1,0,0,1,1,1,0,0,0, 
    0,0,0,0,1,0,1,0,0,0, 
    0,1,0,0,1,1,1,1,0,1, 
    0,0,0,0,0,0,0,0,0,0, 
    0,0,0,0,1,0,1,0,0,1 };
  int i;
  int p[N];
  int j;

  cout << "\n";
  cout << "TRIANG_TEST\n";
  cout << "  TRIANG relabels elements for a partial ordering,\n";

  i4mat_print ( N, N, a, "  The input matrix:" );
 
  triang ( N, a, p );
 
  perm0_print ( N, p, "  The new ordering:" );

  i4mat_2perm0 ( N, N, a, p, p );
 
  i4mat_print ( N, N, a, "  The reordered matrix:" );
 
  return;
# undef N
}
//****************************************************************************80

void tuple_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TUPLE_NEXT_TEST tests TUPLE_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 2

  int i;
  int m1 = 2;
  int m2 = 4;
  int rank;
  int x[N];

  cout << "\n";
  cout << "TUPLE_NEXT_TEST\n";
  cout << "  TUPLE_NEXT returns the next \"tuple\", that is,\n";
  cout << "  a vector of N integers, each between M1 and M2.\n";
  cout << "\n";
  cout << "  M1 = " << m1 << "\n";
  cout << "  M2 = " << m2 << "\n";
  cout << "  N = " << N << "\n";
  cout << "\n";

  rank = 0;

  for ( ; ; )
  {
    tuple_next ( m1, m2, N, rank, x );

    if ( rank == 0 )
    {
      break;
    }

    cout << setw(4) << rank;
    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << x[i] << "  ";
    }
    cout << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void tuple_next_fast_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TUPLE_NEXT_FAST_TEST tests TUPLE_NEXT_FAST.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int base[2];
  int i;
  int m = 3;
  int n = 2;
  int rank;
  int rank_hi;
  int x[2];

  cout << "\n";
  cout << "TUPLE_NEXT_FAST_TEST\n";
  cout << "  TUPLE_NEXT_FAST returns the next \"tuple\", that is,\n";
  cout << "  a vector of N integers, each between 1 and M.\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";
  cout << "\n";
//
//  Initialize.
//
  rank = -1;
  tuple_next_fast ( m, n, rank, base, x );

  rank_hi = i4_power ( m, n );

  for ( rank = 0; rank < rank_hi; rank++ )
  {
    tuple_next_fast ( m, n, rank, base, x );

    cout << setw(4) << rank;
    for ( i = 0; i < n; i++ )
    {
      cout << setw(4) << x[i] << "  ";
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void tuple_next_ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TUPLE_NEXT_GE_TEST tests TUPLE_NEXT_GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int i;
  int m = 3;
  int rank;
  int x[N];

  cout << "\n";
  cout << "TUPLE_NEXT_GE_TEST\n";
  cout << "  TUPLE_NEXT_GE returns the next nondecreasting \"tuple\",\n";
  cout << "  that is, a vector of N integers, each between 1 and M,\n";
  cout << "  with the additional property that the digits never decrease\n";
  cout << "  reading from left to right.\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << N << "\n";
  cout << "\n";

  rank = 0;

  for ( ; ; )
  {
    tuple_next_ge ( m, N, rank, x );

    if ( rank == 0 )
    {
      break;
    }

    cout << setw(4) << rank;
    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << x[i] << "  ";
    }
    cout << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void tuple_next2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TUPLE_NEXT2_TEST tests TUPLE_NEXT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int i;
  int rank;
  int x[N];
  int xmin[N] = { 2, 3, 8 };
  int xmax[N] = { 4, 3, 5 };

  cout << "\n";
  cout << "TUPLE_NEXT2_TEST\n";
  cout << "  TUPLE_NEXT2 returns the next \"tuple\",\n";
  cout << "  that is, a vector of N integers.\n";
  cout << "  Each position in the vector has a separate min and max.\n";
  cout << "  reading from left to right.\n";
  cout << "\n";
  cout << "  N = " << N << "\n";
  cout << "\n";
  i4vec1_print ( N, xmin, "  The minimum values:" );
  i4vec1_print ( N, xmax, "  The maximum values:" );

  cout << "\n";
  cout << "\n";

  rank = 0;

  for ( ; ; )
  {
    tuple_next2 ( N, xmin, xmax, x, rank );

    if ( rank == 0 )
    {
      break;
    }

    cout << setw(4) << rank;
    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << x[i] << "  ";
    }
    cout << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void ubvec_add_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_ADD_TEST tests UBVEC_ADD;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  unsigned int bvec1[N];
  unsigned int bvec2[N];
  unsigned int bvec3[N];
  unsigned int ui;
  unsigned int uj;
  unsigned int uk;
  int seed = 123456789;
  int test;
  int test_num = 10;

  cout << "\n";
  cout << "UBVEC_ADD_TEST\n";
  cout << "  UBVEC_ADD adds unsigned binary vectors \n";
  cout << "  representing unsigned integers;\n";
  cout << "\n";
  cout << "        I        J        K = I + J\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  { 
    ui = ( unsigned int ) i4_uniform_ab ( 0, 100, seed );
    uj = ( unsigned int ) i4_uniform_ab ( 0, 100, seed );

    cout << "\n";
    cout << "  " << setw(8) << ui
         << "  " << setw(8) << uj << "\n";

    uk = ui + uj;

    cout << "  Directly:         "
         << "  " << setw(8) << uk << "\n";

    ui4_to_ubvec ( ui, N, bvec1 );
    ui4_to_ubvec ( uj, N, bvec2 );

    ubvec_add ( N, bvec1, bvec2, bvec3 );
    uk = ubvec_to_ui4 ( N, bvec3 );

    cout << " UBVEC_ADD          "
         << "  " << setw(8) << uk << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void ubvec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_PRINT_TEST tests UBVEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 10;
  unsigned int ubvec[10] = { 1, 0, 0, 1, 0, 1, 1, 1, 0, 0 };

  cout << "\n";
  cout << "UBVEC_PRINT_TEST\n";
  cout << "  UBVEC_PRINT prints an unsigned binary vector.\n";

  ubvec_print ( n, ubvec, "  UBVEC:" );

  return;
}
//****************************************************************************80

void ubvec_to_ui4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_TO_UI4_TEST tests UBVEC_TO_UI4;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  unsigned int bvec[N];
  unsigned int ui1;
  unsigned int ui2;
  int j;

  cout << "\n";
  cout << "UBVEC_TO_UI4_TEST\n";
  cout << "  UBVEC_TO_UI4 converts an unsigned binary vector\n";
  cout << "  to an unsigned integer;\n";
  cout << "\n";
  cout << "  I --> BVEC  -->  I\n";
  cout << "\n";

  for ( ui1 = 0; ui1 <= 10; ui1++ )
  {
    ui4_to_ubvec ( ui1, N, bvec );

    ui2 = ubvec_to_ui4 ( N, bvec );

    cout << setw(3) << ui1 << "  ";
    for ( j = 0; j < N; j++ )
    {
      cout << setw(1) << bvec[j];
    }
    cout << "  ";
    cout << setw(3) << ui2 << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void ubvec_xor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_XOR_TEST tests UBVEC_XOR;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  unsigned int bvec1[10];
  unsigned int bvec2[10];
  unsigned int bvec3[10];
  int n = 10;
  unsigned int ui;
  unsigned int uj;
  unsigned int uk;
  int seed = 123456789;
  int test;
  int test_num = 10;

  cout << "\n";
  cout << "UBVEC_XOR_TEST\n";
  cout << "  UBVEC_XOR exclusive-ors unsigned binary vectors \n";
  cout << "  representing unsigned integers;\n";
  cout << "\n";
  cout << "        I        J        K = I XOR J\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  { 
    ui = ( unsigned int ) i4_uniform_ab ( 0, 100, seed );
    uj = ( unsigned int ) i4_uniform_ab ( 0, 100, seed );
    ui4_to_ubvec ( ui, n, bvec1 );
    ui4_to_ubvec ( uj, n, bvec2 );
    ubvec_xor ( n, bvec1, bvec2, bvec3 );
    uk = ubvec_to_ui4 ( n, bvec3 );

    cout << "  " << setw(8) << ui
         << "  " << setw(8) << uj
         << "  " << setw(8) << uk << "\n";
  }

  return;
}
//****************************************************************************80

void ui4_to_ubvec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UI4_TO_UBVEC_TEST tests UI4_TO_UBVEC;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  unsigned int bvec[N];
  unsigned int ui1;
  unsigned int ui2;
  int j;

  cout << "\n";
  cout << "UI4_TO_UBVEC_TEST\n";
  cout << "  UI4_TO_UBVEC converts an unsigned integer to an \n";
  cout << "  unsigned binary vector;\n";
  cout << "\n";
  cout << "  I --> BVEC  -->  I\n";
  cout << "\n";

  for ( ui1 = 0; ui1 <= 10; ui1++ )
  {
    ui4_to_ubvec ( ui1, N, bvec );

    ui2 = ubvec_to_ui4 ( N, bvec );

    cout << setw(3) << ui1 << "  ";
    for ( j = 0; j < N; j++ )
    {
      cout << setw(1) << bvec[j];
    }
    cout << "  ";
    cout << setw(3) << ui2 << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void vec_colex_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VEC_COLEX_NEXT_TEST tests VEC_COLEX_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 May 2007
//
//  Author:
//
//    John Burkardt
//
{
# define DIM_NUM 3

  int a[DIM_NUM];
  int base = 3;
  int i;
  bool more;

  cout << "\n";
  cout << "VEC_COLEX_NEXT_TEST\n";
  cout << "  VEC_COLEX_NEXT generates all DIM_NUM-vectors\n";
  cout << "  in colex order in a given base BASE.\n";
  cout << "\n";
  cout << "  The spatial dimension DIM_NUM = " << DIM_NUM << "\n";
  cout << "  The base BASE =                 " << base << "\n";

  cout << "\n";

  more = false;

  for ( ; ; )
  {
    vec_colex_next ( DIM_NUM, base, a, more );

    if ( !more ) 
    {
      break;
    }

    for ( i = 0; i < DIM_NUM; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";
  }

  return;
# undef DIM_NUM
}
//****************************************************************************80

void vec_colex_next2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VEC_COLEX_NEXT2_TEST tests VEC_COLEX_NEXT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 May 2007
//
//  Author:
//
//    John Burkardt
//
{
# define DIM_NUM 3

  int a[DIM_NUM];
  int base[DIM_NUM] = { 2, 1, 3 };
  int i;
  bool more;

  cout << "\n";
  cout << "VEC_COLEX_NEXT2_TEST\n";
  cout << "  VEC_COLEX_NEXT2 generates all DIM_NUM-vectors\n";
  cout << "  in colex order in a given base BASE.\n";
  cout << "\n";
  cout << "  The spatial dimension DIM_NUM = " << DIM_NUM << "\n";
  cout << "\n";
  cout << "  The base vector:\n";
  cout << "\n";
  for ( i = 0; i < DIM_NUM; i++ )
  {
    cout << setw(4) << base[i] << "  ";
  }
  cout << "\n";
  cout << "\n";

  more = false;

  for ( ; ; )
  {
    vec_colex_next2 ( DIM_NUM, base, a, more );

    if ( !more ) 
    {
      break;
    }

    for ( i = 0; i < DIM_NUM; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";
  }

  return;
# undef DIM_NUM
}
//****************************************************************************80

void vec_colex_next3_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VEC_COLEX_NEXT3_TEST tests VEC_COLEX_NEXT3.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 August 2008
//
//  Author:
//
//    John Burkardt
//
{
# define DIM_NUM 3

  int a[DIM_NUM];
  int base[DIM_NUM] = { 2, 1, 3 };
  int i;
  bool more;

  cout << "\n";
  cout << "VEC_COLEX_NEXT3_TEST\n";
  cout << "  VEC_COLEX_NEXT3 generates all DIM_NUM-vectors\n";
  cout << "  in colex order in a given base BASE.\n";
  cout << "\n";
  cout << "  The spatial dimension DIM_NUM = " << DIM_NUM << "\n";
  cout << "\n";
  cout << "  The base vector:\n";
  cout << "\n";
  for ( i = 0; i < DIM_NUM; i++ )
  {
    cout << setw(4) << base[i] << "  ";
  }
  cout << "\n";
  cout << "\n";

  more = false;

  for ( ; ; )
  {
    vec_colex_next3 ( DIM_NUM, base, a, more );

    if ( !more ) 
    {
      break;
    }

    for ( i = 0; i < DIM_NUM; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";
  }

  return;
# undef DIM_NUM
}
//****************************************************************************80

void vec_gray_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VEC_GRAY_NEXT_TEST tests VEC_GRAY_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int a[N];
  int active[N];
  int base[N] = { 2, 2, 1, 4 };
  int change;
  int dir[N];
  bool done;
  int i;
  int prod;
  int rank;

  prod = 1;
  for ( i = 0; i < N; i++ )
  {
    prod = prod * base[i];
  }

  cout << "\n";
  cout << "VEC_GRAY_NEXT_TEST\n";
  cout << "  VEC_GRAY_NEXT generates product space elements.\n";
  cout << "\n";
  cout << "  The number of components is " << N << "\n";
  cout << "  The number of elements is " << prod << "\n";
  cout << "  Each component has its own number of degrees of\n";
  cout << "  freedom.\n";
  cout << "\n";
  cout << "  Rank Change     ";
  for ( i = 0; i < N; i++ )
  {
    cout << setw(4) << base[i] << "  ";
  }
  cout << "\n";
  cout << "\n";

  rank = 0;
  done = true;

  for ( ; ; )
  {
    rank = rank + 1;

    vec_gray_next ( N, base, a, done, active, dir, change );

    if ( done )
    {
      break;
    }

    cout << setw(4) << rank
         << setw(4) << change;
    for ( i = 0; i < N; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

  }

  return;
# undef N
}
//****************************************************************************80

void vec_gray_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VEC_GRAY_RANK_TEST tests VEC_GRAY_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 May 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int a[N];
  int base[N] = { 2, 2, 1, 4 };
  int change;
  bool done;
  int i;
  int prod;
  int rank;

  prod = 1;
  for ( i = 0; i < N; i++ )
  {
    prod = prod * base[i];
  }

  cout << "\n";
  cout << "VEC_GRAY_RANK_TEST\n";
  cout << "  VEC_GRAY_RANK ranks product space elements.\n";
  cout << "\n";
  cout << "  The number of components is " << N << "\n";
  cout << "  The number of elements is " << prod << "\n";
  cout << "  Each component has its own number of degrees of\n";
  cout << "  freedom, which, for this example, are:\n";

  for ( i = 0; i < N; i++ )
  {
    a[i] = base[i] / 2;
  }

  rank = vec_gray_rank ( N, base, a );

  cout << "\n";
  cout << "  VEC_GRAY_RANK reports the element\n";
  cout << "\n";
  for ( i = 0; i < N; i++ )
  {
    cout << setw(4) << a[i] << "  ";
  }
  cout << "\n";
  cout << "\n";
  cout << "  has rank " << rank << "\n";


  return;
# undef N
}
//****************************************************************************80

void vec_gray_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VEC_GRAY_UNRANK_TEST tests VEC_GRAY_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 May 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  int a[N];
  int base[N] = { 2, 2, 1, 4 };
  int change;
  bool done;
  int i;
  int prod;
  int rank;

  prod = 1;
  for ( i = 0; i < N; i++ )
  {
    prod = prod * base[i];
  }

  cout << "\n";
  cout << "VEC_GRAY_UNRANK_TEST\n";
  cout << "  VEC_GRAY_UNRANK unranks product space elements.\n";
  cout << "\n";
  cout << "  The number of components is " << N << "\n";
  cout << "  The number of elements is " << prod << "\n";

  rank = 7;
  vec_gray_unrank ( N, base, rank, a );

  cout << "\n";
  cout << "  VEC_GRAY_UNRANK reports the element of rank " << rank << "  is:\n";
  cout << "\n";
  for ( i = 0; i < N; i++ )
  {
    cout << setw(4) << a[i] << "  ";
  }
  cout << "\n";

  return;
# undef N
}
//****************************************************************************80

void vec_lex_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VEC_LEX_NEXT_TEST tests VEC_LEX_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 May 2007
//
//  Author:
//
//    John Burkardt
//
{
# define DIM_NUM 3

  int a[DIM_NUM];
  int base = 3;
  int i;
  bool more;

  cout << "\n";
  cout << "VEC_LEX_NEXT_TEST\n";
  cout << "  VEC_LEX_NEXT generates all DIM_NUM-vectors\n";
  cout << "  in a given base.  Here we use base " << base << "\n";
  cout << "\n";

  more = false;

  for ( ; ; )
  {
    vec_lex_next ( DIM_NUM, base, a, more );

    if ( !more ) 
    {
      break;
    }

    for ( i = 0; i < DIM_NUM; i++ )
    {
      cout << setw(4) << a[i] << "  ";
    }
    cout << "\n";

  }

  return;
# undef DIM_NUM
}
//****************************************************************************80

void vec_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VEC_RANDOM_TEST tests VEC_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int a[N];
  int base;
  int i;
  int j;
  int seed;

  base = 3;
  seed = 123456789;

  cout << "\n";
  cout << "VEC_RANDOM_TEST\n";
  cout << "  VEC_RANDOM generates a random N-vector\n";
  cout << "  in a given base.\n";
  cout << "  Here, we use base " << base << "\n";
  cout << "\n";

  for ( i = 1; i <= 5; i++ )
  {
    vec_random ( N, base, seed, a );

    cout << setw(4) << i << "    ";
    for ( j = 0; j < N; j++ )
    {
      cout << setw(4) << a[j] << "  ";
    }
    cout << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void vector_constrained_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VECTOR_CONSTRAINED_NEXT_TEST tests VECTOR_CONSTRAINED_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 March 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  int constraint;
  int i;
  int j;
  bool more;
  int x[N];
  int x_max[N] = { 4, 5, 3 };
  int x_min[N] = { 2, 2, 1 };
  int x_prod;

  cout << "\n";
  cout << "VECTOR_CONSTRAINED_NEXT_TEST\n";
  cout << "  VECTOR_CONSTRAINED_NEXT:\n";
  cout << "  Consider vectors:\n";
  cout << "    X_MIN(1:N) <= X(1:N) <= X_MAX(1:N),\n";
  cout << "  Set\n";
  cout << "    P = Product X_MAX(1:N)\n";
  cout << "  Accept only vectors for which:\n";
  cout << "    sum ( (X(1:N)-1) * P / X_MAX(1:N) ) <= P\n";

  more = false;

  cout << "\n";
  cout << "  X_MIN:\n";
  for ( j = 0; j < N; j++ )
  {
    cout << "  " << setw(4) << x_min[j];
  }
  cout << "\n";
  cout << "\n";
  cout << "  X_MAX:\n";
  for ( j = 0; j < N; j++ )
  {
    cout << "  " << setw(4) << x_max[j];
  }
  cout << "\n";

  i = 0;

  x_prod = 1;
  for ( j = 0; j < N; j++ )
  {
    x_prod = x_prod * x_max[j];
  }

  cout << "\n";
  cout << "  Maximum allowed CONSTRAINT = P = " << x_prod << "\n";
  cout << "\n";

  for ( ; ; )
  {
    vector_constrained_next ( N, x_min, x_max, x, constraint, more );

    if ( !more )
    {
      break;
    }

    i = i + 1;
    cout << "  " << setw(8) << i;
    cout << "  " << setw(12) << constraint;
    for ( j = 0; j < N; j++ )
    {
      cout << "  " << setw(8) << x[j];
    }
    cout << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void vector_constrained_next2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VECTOR_CONSTRAINED_NEXT2_TEST tests VECTOR_CONSTRAINED_NEXT2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 March 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 3

  int constraint;
  int i;
  int j;
  bool more;
  int n;
  int x[N_MAX];
  int x_max[N_MAX] = { 5, 6, 4 };
  int x_min[N_MAX] = { 1, 1, 1 };
  int x_prod;

  cout << "\n";
  cout << "VECTOR_CONSTRAINED_NEXT2_TEST\n";
  cout << "  VECTOR_CONSTRAINED_NEXT2:\n";
  cout << "  Consider vectors:\n";
  cout << "    X_MIN(1:N) <= X(1:N) <= X_MAX(1:N),\n";
  cout << "  Set\n";
  cout << "    P = Product X_MAX(1:N)\n";
  cout << "  Accept only vectors for which:\n";
  cout << "    sum ( X(1:N) * P / X_MAX(1:N) ) <= P\n";

  for ( n = 2; n <= N_MAX; n++ )
  {
    more = false;

    cout << "\n";
    cout << "  X_MIN:\n";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_min[j];
    }
    cout << "\n";
    cout << "\n";
    cout << "  X_MAX:\n";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_max[j];
    }
    cout << "\n";

    i = 0;

    x_prod = 1;
    for ( j = 0; j < n; j++ )
    {
      x_prod = x_prod * x_max[j];
    }

    cout << "\n";
    cout << "  Maximum allowed CONSTRAINT = P = " << x_prod << "\n";
    cout << "\n";

    for ( ; ; )
    {
      vector_constrained_next2 ( n, x_min, x_max, x, constraint, more );

      if ( !more )
      {
        break;
      }

      i = i + 1;
      cout << "  " << setw(8) << i;
      cout << "  " << setw(12) << constraint;
      for ( j = 0; j < n; j++ )
      {
        cout << "  " << setw(8) << x[j];
      }
      cout << "\n";
    }
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void vector_constrained_next3_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VECTOR_CONSTRAINED_NEXT3_TEST tests VECTOR_CONSTRAINED_NEXT3.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 April 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 3

  double constraint;
  int i;
  int j;
  bool more;
  int n;
  int x[N_MAX];
  int x_max[N_MAX] = { 5, 6, 4 };
  int x_min[N_MAX] = { 1, 1, 1 };

  cout << "\n";
  cout << "VECTOR_CONSTRAINED_NEXT3_TEST\n";
  cout << "  VECTOR_CONSTRAINED_NEXT3:\n";
  cout << "  Consider vectors:\n";
  cout << "    X_MIN(1:N) <= X(1:N) <= X_MAX(1:N),\n";
  cout << "  Set\n";
  cout << "    CONSTRAINT = sum ( X(1:N) / X_MAX(1:N) )\n";
  cout << "  Accept only vectors for which:\n";
  cout << "    CONSTRAINT <= 1\n";

  for ( n = 2; n <= N_MAX; n++ )
  {
    more = false;

    cout << "\n";
    cout << "  X_MIN:\n";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_min[j];
    }
    cout << "\n";
    cout << "\n";
    cout << "  X_MAX:\n";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_max[j];
    }
    cout << "\n";
    cout << "\n";

    i = 0;

    for ( ; ; )
    {
      vector_constrained_next3 ( n, x_min, x_max, x, constraint, more );

      if ( !more )
      {
        break;
      }

      i = i + 1;
      cout << "  " << setw(8) << i;
      cout << "  " << setw(14) << constraint;
      for ( j = 0; j < n; j++ )
      {
        cout << "  " << setw(8) << x[j];
      }
      cout << "\n";
    }
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void vector_constrained_next4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VECTOR_CONSTRAINED_NEXT4_TEST tests VECTOR_CONSTRAINED_NEXT4.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 May 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 3

  double alpha[N_MAX] = { 4.0, 3.0, 5.0 };
  int i;
  int j;
  bool more;
  int n;
  double q = 20.0;
  double total;
  int x[N_MAX];
  int x_max[N_MAX] = { 2, 6, 4 };
  int x_min[N_MAX] = { 1, 0, 1 };

  cout << "\n";
  cout << "VECTOR_CONSTRAINED_NEXT4_TEST\n";
  cout << "  VECTOR_CONSTRAINED_NEXT4:\n";
  cout << "  Consider vectors:\n";
  cout << "    X_MIN(1:N) <= X(1:N) <= X_MAX(1:N),\n";
  cout << "  Set\n";
  cout << "    TOTAL = sum ( ALPHA(1:N) * X(1:N) )\n";
  cout << "  Accept only vectors for which:\n";
  cout << "    TOTAL <= Q\n";

  for ( n = 2; n <= N_MAX; n++ )
  {
    more = false;

    cout << "\n";
    cout << "  ALPHA:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(8) << alpha[j];
    }
    cout << "\n";
    cout << "  Q:    ";
    cout << "  " << setw(8) << q;
    cout << "\n";
    cout << "  X_MIN:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_min[j];
    }
    cout << "\n";
    cout << "  X_MAX:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_max[j];
    }
    cout << "\n";
    cout << "\n";

    i = 0;

    for ( ; ; )
    {
      vector_constrained_next4 ( n, alpha, x_min, x_max, x, q, more );

      if ( !more )
      {
        break;
      }

      total = 0.0;
      for ( j = 0; j < n; j++ )
      {
        total = total + alpha[j] * ( double ) x[j];
      }
      i = i + 1;
      cout << "  " << setw(8) << i;
      cout << "  " << setw(14) << total;
      for ( j = 0; j < n; j++ )
      {
        cout << "  " << setw(8) << x[j];
      }
      cout << "\n";
    }
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void vector_constrained_next5_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VECTOR_CONSTRAINED_NEXT5_TEST tests VECTOR_CONSTRAINED_NEXT5
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 May 2015subset.sh
//
//  Author:
//
//    John Burkardt
//
{
  int base;
  int i;
  int j;
  bool more;
  int n;
  int sum_max;
  int sum_min;
  int x[3];

  cout << "\n";
  cout << "VECTOR_CONSTRAINED_NEXT5_TEST\n";
  cout << "  VECTOR_CONSTRAINED_NEXT5:\n";
  cout << "  Generate integer vectors X such that:\n";
  cout << "    SUM_MIN <= sum ( X(1:N) ) <= SUM_MAX,\n";
  cout << "  We require every X(I) to be at least 1.\n";

  n = 3;
  sum_min = 5;
  sum_max = 7;
  base = 0;
  more = false;

  cout << "\n";
  cout << "  N =       " << n << "\n";
  cout << "  SUM_MIN = " << sum_min << "\n";
  cout << "  SUM_MAX = " << sum_max << "\n";
  cout << "\n";
  cout << "         #        X(1)      X(2)      X(3)\n";
  cout << "\n";

  i = 0;

  for ( ; ; )
  {
    vector_constrained_next5 ( n, x, sum_min, sum_max, base, more );

    if ( !more )
    {
      break;
    }

    i = i + 1;
    cout << "  " << setw(8) << i;
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(8) << x[j];
    }
    cout << "\n";
  }
  return;
}
//****************************************************************************80

void vector_constrained_next6_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VECTOR_CONSTRAINED_NEXT6_TEST tests VECTOR_CONSTRAINED_NEXT6.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 3

  double alpha[N_MAX] = { 4.0, 3.0, 5.0 };
  int i;
  int j;
  bool more;
  int n;
  double q_max = 20.0;
  double q_min = 16.0;
  double total;
  int x[N_MAX];
  int x_max[N_MAX] = { 2, 6, 4 };
  int x_min[N_MAX] = { 1, 0, 1 };

  cout << "\n";
  cout << "VECTOR_CONSTRAINED_NEXT6_TEST\n";
  cout << "  VECTOR_CONSTRAINED_NEXT6:\n";
  cout << "  Consider vectors:\n";
  cout << "    X_MIN(1:N) <= X(1:N) <= X_MAX(1:N),\n";
  cout << "  Set\n";
  cout << "    TOTAL = sum ( ALPHA(1:N) * X(1:N) )\n";
  cout << "  Accept only vectors for which:\n";
  cout << "    Q_MIN <= TOTAL <= Q_MAX\n";

  for ( n = 2; n <= N_MAX; n++ )
  {
    more = false;

    cout << "\n";
    cout << "  ALPHA:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(8) << alpha[j];
    }
    cout << "\n";
    cout << "  Q_MIN:";
    cout << "  " << setw(8) << q_min;
    cout << "\n";
    cout << "  Q_MAX:";
    cout << "  " << setw(8) << q_max;
    cout << "\n";
    cout << "  X_MIN:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_min[j];
    }
    cout << "\n";
    cout << "  X_MAX:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_max[j];
    }
    cout << "\n";
    cout << "\n";

    i = 0;

    for ( ; ; )
    {
      vector_constrained_next6 ( n, alpha, x_min, x_max, x, q_min, 
        q_max, more );

      if ( !more )
      {
        break;
      }

      total = 0.0;
      for ( j = 0; j < n; j++ )
      {
        total = total + alpha[j] * ( double ) x[j];
      }
      i = i + 1;
      cout << "  " << setw(8) << i;
      cout << "  " << setw(14) << total;
      for ( j = 0; j < n; j++ )
      {
        cout << "  " << setw(8) << x[j];
      }
      cout << "\n";
    }
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void vector_constrained_next7_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VECTOR_CONSTRAINED_NEXT7_TEST tests VECTOR_CONSTRAINED_NEXT7.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2010
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 3

  double alpha[N_MAX] = { 4.0, 3.0, 5.0 };
  int i;
  int j;
  bool more;
  int n;
  double q_max = 20.0;
  double q_min = 16.0;
  double total;
  int x[N_MAX];
  int x_max[N_MAX] = { 2, 6, 4 };

  cout << "\n";
  cout << "VECTOR_CONSTRAINED_NEXT7_TEST\n";
  cout << "  VECTOR_CONSTRAINED_NEXT7:\n";
  cout << "  Consider vectors:\n";
  cout << "    0 <= X(1:N) <= X_MAX(1:N),\n";
  cout << "  Set\n";
  cout << "    TOTAL = sum ( ALPHA(1:N) * X(1:N) )\n";
  cout << "  Accept only vectors for which:\n";
  cout << "    Q_MIN <= TOTAL <= Q_MAX\n";

  for ( n = 2; n <= N_MAX; n++ )
  {
    more = false;

    cout << "\n";
    cout << "  ALPHA:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(8) << alpha[j];
    }
    cout << "\n";
    cout << "  Q_MIN:";
    cout << "  " << setw(8) << q_min;
    cout << "\n";
    cout << "  Q_MAX:";
    cout << "  " << setw(8) << q_max;
    cout << "\n";
    cout << "  X_MAX:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(4) << x_max[j];
    }
    cout << "\n";
    cout << "\n";

    i = 0;

    for ( ; ; )
    {
      vector_constrained_next7 ( n, alpha, x_max, x, q_min, 
        q_max, more );

      if ( !more )
      {
        break;
      }

      total = 0.0;
      for ( j = 0; j < n; j++ )
      {
        total = total + alpha[j] * ( double ) x[j];
      }
      i = i + 1;
      cout << "  " << setw(8) << i;
      cout << "  " << setw(14) << total;
      for ( j = 0; j < n; j++ )
      {
        cout << "  " << setw(8) << x[j];
      }
      cout << "\n";
    }
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void vector_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VECTOR_NEXT_TEST tests VECTOR_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2010
//
//  Author:
//
//    John Burkardt
//
{
# define N_MAX 3

  int i;
  int j;
  bool more;
  int n;
  int x[N_MAX];
  int x_max[N_MAX] = { 2, 6, 4 };
  int x_min[N_MAX] = { 1, 4, 3 };

  cout << "\n";
  cout << "VECTOR_NEXT_TEST\n";
  cout << "  VECTOR_NEXT:\n";
  cout << "  Generate all vectors X such that:\n";
  cout << "    X_MIN(1:N) <= X(1:N) <= X_MAX(1:N),\n";

  for ( n = 2; n <= N_MAX; n++ )
  {
    more = false;

    cout << "\n";
    cout << "    X_MIN:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(8) << x_min[j];
    }
    cout << "\n";

    i = 0;

    for ( ; ; )
    {
      vector_next ( n, x_min, x_max, x, more );

      if ( !more )
      {
        break;
      }

      i = i + 1;
      cout << "  " << setw(8) << i;
      for ( j = 0; j < n; j++ )
      {
        cout << "  " << setw(8) << x[j];
      }
      cout << "\n";
    }
    cout << "    X_MAX:";
    for ( j = 0; j < n; j++ )
    {
      cout << "  " << setw(8) << x_max[j];
    }
    cout << "\n";
  }

  return;
# undef N_MAX
}
//****************************************************************************80

void ytb_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    YTB_ENUM_TEST tests YTB_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int n;

  cout << "\n";
  cout << "YTB_ENUM_TEST\n";
  cout << "  YTB_ENUM counts Young tableau.\n";
  cout << "\n";
  cout << "   N  YTB_ENUM(N)\n";
  cout << "\n";

  for ( n = 0; n <= 10; n++ )
  {
    cout << setw(4)  << n              << "  "
         << setw(10) << ytb_enum ( n ) << "\n";
  }

  return;
}
//****************************************************************************80

void ytb_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    YTB_NEXT_TEST tests YTB_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  int i;
  int a[N];
  int lambda[N] = { 3, 2, 1, 0, 0, 0 };
  bool more;

  for ( i = 0; i < N; i++ )
  {
    a[i] = 0;
  }

  cout << "\n";
  cout << "YTB_NEXT_TEST\n";
  cout << "  YTB_NEXT generates Young tableaus.\n";
  cout << "\n";

  more = false;

  i = 0;

  for ( ; ; )
  {
    i = i + 1;
    ytb_next ( N, lambda, a, more );

    ytb_print ( N, a, " " );

    if ( !more || 100 < i )
    {
      break;
    }

  }

  return;

# undef N
}
//****************************************************************************80

void ytb_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    YTB_RANDOM_TEST tests YTB_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  int a[N];
  int i;
  int lambda[N] = { 3, 2, 1, 0, 0, 0 };
  int seed;

  cout << "\n";
  cout << "YTB_RANDOM_TEST\n";
  cout << "  YTB_RANDOM generates a random Young tableau\n";

  seed = 123456789;

  for ( i = 1; i <=5; i++ )
  {
    ytb_random ( N, lambda, seed, a );

    ytb_print ( N, a, " " );

  }

  return;
# undef N
}
