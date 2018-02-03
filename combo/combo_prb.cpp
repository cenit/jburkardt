# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "combo.hpp"

int main ( );
void backtrack_test ( );
void bal_seq_check_test ( );
void bal_seq_enum_test ( );
void bal_seq_rank_test ( );
void bal_seq_successor_test ( );
void bal_seq_to_tableau_test ( );
void bal_seq_unrank_test ( );
void bell_numbers_test ( );
void cycle_check_test ( );
void cycle_to_perm_test ( );
void dist_enum_test ( );
void dist_next_test ( );
void edge_check_test ( );
void edge_degree_test ( );
void edge_enum_test ( );
void gray_code_check_test ( );
void gray_code_enum_test ( );
void gray_code_rank_test ( );
void gray_code_successor_test ( );
void gray_code_unrank_test ( );
void i4_choose_test ( );
void i4_factorial_test ( );
void i4_fall_test ( );
void i4_uniform_ab_test ( );
void i4vec_backtrack_test ( );
void i4vec_dot_product_test ( );
void i4vec_part1_new_test ( );
void i4vec_part2_test ( );
void i4vec_part2_new_test ( );
void i4vec_search_binary_a_test ( );
void i4vec_search_binary_d_test ( );
void i4vec_sort_insert_a_test ( );
void i4vec_sort_insert_d_test ( );
void i4vec_uniform_ab_new_test ( );
void knapsack_01_test ( );
void knapsack_rational_test ( );
void knapsack_reorder_test ( );
void ksubset_colex_check_test ( );
void ksubset_colex_rank_test ( );
void ksubset_colex_successor_test ( );
void ksubset_colex_unrank_test ( );
void ksubset_enum_test ( );
void ksubset_lex_check_test ( );
void ksubset_lex_rank_test ( );
void ksubset_lex_successor_test ( );
void ksubset_lex_unrank_test ( );
void ksubset_revdoor_rank_test ( );
void ksubset_revdoor_successor_test ( );
void ksubset_revdoor_unrank_test ( );
void marriage_test ( );
void mountain_test ( );
void npart_enum_test ( );
void npart_rsf_lex_random_test ( );
void npart_rsf_lex_rank_test ( );
void npart_rsf_lex_successor_test ( );
void npart_rsf_lex_unrank_test ( );
void npart_sf_lex_successor_test ( );
void npart_table_test ( );
void part_enum_test ( );
void part_rsf_check_test ( );
void part_sf_check_test ( );
void part_sf_conjugate_test ( );
void part_sf_majorize_test ( );
void part_successor_test ( );
void part_table_test ( );
void partition_greedy_test ( );
void partn_enum_test ( );
void partn_sf_check_test ( );
void partn_successor_test ( );
void perm_check_test ( );
void perm_enum_test ( );
void perm_inv_test ( );
void perm_lex_rank_test ( );
void perm_lex_successor_test ( );
void perm_lex_unrank_test ( );
void perm_mul_test ( );
void perm_parity_test ( );
void perm_print_test ( );
void perm_random_test ( );
void perm_tj_rank_test ( );
void perm_tj_successor_test ( );
void perm_tj_unrank_test ( );
void perm_to_cycle_test ( );
void pruefer_check_test ( );
void pruefer_enum_test ( );
void pruefer_rank_test ( );
void pruefer_successor_test ( );
void pruefer_to_tree_test ( );
void pruefer_unrank_test ( );
void queens_test ( );
void r8_choose_test ( );
void r8_gamma_log_test ( );
void r8vec_backtrack_test ( );
void rgf_check_test ( );
void rgf_enum_test ( );
void rgf_g_table_test ( );
void rgf_rank_test ( );
void rgf_successor_test ( );
void rgf_to_setpart_test ( );
void rgf_unrank_test ( );
void setpart_check_test ( );
void setpart_enum_test ( );
void setpart_to_rgf_test ( );
void stirling_numbers1_test ( );
void stirling_numbers2_test ( );
void subset_check_test ( );
void subset_colex_rank_test ( );
void subset_colex_successor_test ( );
void subset_colex_unrank_test ( );
void subset_complement_test ( );
void subset_distance_test ( );
void subset_enum_test ( );
void subset_intersect_test ( );
void subset_lex_rank_test ( );
void subset_lex_successor_test ( );
void subset_lex_unrank_test ( );
void subset_union_test ( );
void subset_weight_test ( );
void subset_xor_test ( );
void subsetsumswap_test ( );
void tableau_check_test ( );
void tableau_enum_test ( );
void tableau_to_bal_seq_test ( );
void tree_check_test ( );
void tree_enum_test ( );
void tree_rank_test ( );
void tree_successor_test ( );
void tree_to_pruefer_test ( );
void tree_unrank_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for COMBO_PRB.
//
//  Discussion:
//
//    COMBO_PRB tests the COMBO library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "COMBO_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the COMBO library.\n";

  backtrack_test ( );

  bal_seq_check_test ( );
  bal_seq_enum_test ( );
  bal_seq_rank_test ( );
  bal_seq_successor_test ( );
  bal_seq_to_tableau_test ( );
  bal_seq_unrank_test ( );

  bell_numbers_test ( );

  cycle_check_test ( );
  cycle_to_perm_test ( );

  dist_enum_test ( );
  dist_next_test ( );

  edge_check_test ( );
  edge_degree_test ( );
  edge_enum_test ( );

  gray_code_check_test ( );
  gray_code_enum_test ( );
  gray_code_rank_test ( );
  gray_code_successor_test ( );
  gray_code_unrank_test ( );

  i4_choose_test ( );
  i4_factorial_test ( );
  i4_fall_test ( );
  i4_uniform_ab_test ( );

  i4vec_backtrack_test ( );
  i4vec_dot_product_test ( );
  i4vec_part1_new_test ( );
  i4vec_part2_test ( );
  i4vec_part2_new_test ( );
  i4vec_search_binary_a_test ( );
  i4vec_search_binary_d_test ( );
  i4vec_sort_insert_a_test ( );
  i4vec_sort_insert_d_test ( );
  i4vec_uniform_ab_new_test ( );

  knapsack_01_test ( );
  knapsack_reorder_test ( );
  knapsack_rational_test ( );

  ksubset_colex_check_test ( );
  ksubset_colex_rank_test ( );
  ksubset_colex_successor_test ( );
  ksubset_colex_unrank_test ( );
  ksubset_enum_test ( );
  ksubset_lex_check_test ( );
  ksubset_lex_rank_test ( );
  ksubset_lex_successor_test ( );
  ksubset_lex_unrank_test ( );
  ksubset_revdoor_rank_test ( );
  ksubset_revdoor_successor_test ( );
  ksubset_revdoor_unrank_test ( );

  marriage_test ( );

  mountain_test ( );

  npart_enum_test ( );
  npart_rsf_lex_random_test ( );
  npart_rsf_lex_rank_test ( );
  npart_rsf_lex_successor_test ( );
  npart_rsf_lex_unrank_test ( );
  npart_sf_lex_successor_test ( );
  npart_table_test ( );

  part_enum_test ( );
  part_rsf_check_test ( );
  part_sf_check_test ( );
  part_sf_conjugate_test ( );
  part_sf_majorize_test ( );
  part_successor_test ( );
  part_table_test ( );

  partition_greedy_test ( );

  partn_enum_test ( );
  partn_sf_check_test ( );
  partn_successor_test ( );

  perm_check_test ( );
  perm_enum_test ( );
  perm_inv_test ( );
  perm_lex_rank_test ( );
  perm_lex_successor_test ( );
  perm_lex_unrank_test ( );
  perm_mul_test ( );
  perm_parity_test ( );
  perm_print_test ( );
  perm_random_test ( );
  perm_tj_rank_test ( );
  perm_tj_successor_test ( );
  perm_tj_unrank_test ( );
  perm_to_cycle_test ( );

  pruefer_check_test ( );
  pruefer_enum_test ( );
  pruefer_rank_test ( );
  pruefer_successor_test ( );
  pruefer_to_tree_test ( );
  pruefer_unrank_test ( );

  queens_test ( );

  r8_choose_test ( );
  r8_gamma_log_test ( );

  r8vec_backtrack_test ( );

  rgf_check_test ( );
  rgf_enum_test ( );
  rgf_g_table_test ( );
  rgf_rank_test ( );
  rgf_successor_test ( );
  rgf_to_setpart_test ( );
  rgf_unrank_test ( );

  setpart_check_test ( );
  setpart_enum_test ( );
  setpart_to_rgf_test ( );

  stirling_numbers1_test ( );
  stirling_numbers2_test ( );

  subset_check_test ( );
  subset_colex_rank_test ( );
  subset_colex_successor_test ( );
  subset_colex_unrank_test ( );
  subset_complement_test ( );
  subset_distance_test ( );
  subset_enum_test ( );
  subset_intersect_test ( );
  subset_lex_rank_test ( );
  subset_lex_successor_test ( );
  subset_lex_unrank_test ( );
  subset_union_test ( );
  subset_weight_test ( );
  subset_xor_test ( );

  subsetsumswap_test ( );

  tableau_check_test ( );
  tableau_enum_test ( );
  tableau_to_bal_seq_test ( );

  tree_check_test ( );
  tree_enum_test ( );
  tree_rank_test ( );
  tree_successor_test ( );
  tree_to_pruefer_test ( );
  tree_unrank_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "COMBO_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void backtrack_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BACKTRACK_TEST tests BACKTRACK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 8

  int iarray[N];
  int indx;
  int istack[N*N];
  int k;
  int n = N;
  int maxstack = N * N;
  int nstack;

  cout << "\n";
  cout << "BACKTRACK_TEST\n";
  cout << "  BACKTRACK supervises a backtrack search.\n";
  cout << "  Here we arrange non-attacking chess queens.\n";
  cout << "\n";

  indx = 0;

  for ( ; ; )
  {
    backtrack ( n, iarray, indx, k, nstack, istack, maxstack );

    if ( indx == 1 )
    {
      i4vec_transpose_print ( n, iarray, "" );
    }
    else if ( indx == 2 )
    {
      queens ( n, iarray, k, nstack, istack, maxstack );
    }
    else
    {
      break;
    }
  }

  return;
# undef N
}
//****************************************************************************80

void bal_seq_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BAL_SEQ_CHECK_TEST tests BAL_SEQ_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int i;
  int n;
  int test;
  int *t;
  int t1[10] = { 0, 0, 1, 0, 1, 0, 0, 1, 1, 1 };
  int t2[10] = { 1, 1, 0, 1, 0, 1, 1, 0, 0, 0 };
  int t3[10] = { 0, 0, 1, 0, 1, 0, 0, 1, 0, 1 };

  cout << "\n";
  cout << "BAL_SEQ_CHECK TEST\n";
  cout << "  BAL_SEQ_CHECK checks N and T(1:2*N).\n";
  cout << "\n";
  cout << "  Check?   N    T(1:2*N)\n";
  cout << "\n";
  
  for ( test = 1; test <= 3; test++ )
  {
    n = 5;

    if ( test == 1 )
    {
      t = i4vec_copy_new ( 2 * n, t1 );
    }
    else if ( test == 2 )
    {
      t = i4vec_copy_new ( 2 * n, t2 );
    }
    else if ( test == 3 )
    {
      t = i4vec_copy_new ( 2 * n, t3 );
    }
    check = bal_seq_check ( n, t );
    cout << "    "
         << "  " << setw(1) << check
         << "  " << setw(2) << n;
    for ( i = 0; i < 2 * n; i++ )
    {
      cout << "  " << setw(2) << t[i];
    }
    cout << "\n";

    delete [] t;
  }

  return;
}
//****************************************************************************80

void bal_seq_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BAL_SEQ_ENUM_TEST tests BAL_SEQ_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int bal_seq_num;

  cout << "\n";
  cout << "BAL_SEQ_ENUM_TEST\n";
  cout << "  BAL_SEQ_ENUM enumerates balanced sequences of N terms.\n";

  for ( n = 0; n <= 10; n++ )
  {
    bal_seq_num = bal_seq_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(6) << bal_seq_num << "\n";
  }

  return;
}
//****************************************************************************80

void bal_seq_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BAL_SEQ_RANK_TEST tests BAL_SEQ_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int rank;
  int t[10] = { 0, 0, 1, 0, 1, 1, 0, 0, 1, 1 };

  cout << "\n";
  cout << "BAL_SEQ_RANK_TEST\n";
  cout << "  BAL_SEQ_RANK ranks a balanced sequence of N items.\n";

  n = 5;
  rank = bal_seq_rank ( n, t );

  i4vec_transpose_print ( 2 * n, t, "  Element to be ranked:" );
  cout << "\n";
  cout << "  Rank is computed as: " << rank << "\n";

  return;
}
//****************************************************************************80

void bal_seq_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BAL_SEQ_SUCCESSOR_TEST tests BAL_SEQ_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int nseq;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "BAL_SEQ_SUCCESSOR_TEST:\n";
  cout << "  BAL_SEQ_SUCCESSOR lists balanced sequences of N items, one at a time.\n";

  n = 5;
  t = new int[2*n];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    bal_seq_successor ( n, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }
    cout << "  " << setw(4) << rank;
    for ( i = 0; i < 2 * n; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void bal_seq_to_tableau_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BAL_SEQ_TO_TABLEAU_TEST tests BAL_SEQ_TO_TABLEAU.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int rank;
  int *t;
  int *tab;

  cout << "\n";
  cout << "BAL_SEQ_TO_TABLEAU_TEST\n";
  cout << "  BAL_SEQ_TO_TABLEAU converts a balanced\n";
  cout << "  sequence to a tableau;\n";
//
//  Pick a random balanced sequence.
//
  rank = 7;

  t = bal_seq_unrank ( rank, n );

  cout << "\n";
  cout << "  Random balanced sequence:\n";
  cout << "\n";
  i4vec_transpose_print ( 2 * n, t, "" );
//
//  Convert to a tableau.
//
  tab = bal_seq_to_tableau ( n, t );

  i4mat_print ( 2, n, tab, "  Corresponding tableau" );

  delete [] t;
  delete [] tab;

  return;
}
//****************************************************************************80

void bal_seq_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BAL_SEQ_UNRANK_TEST tests BAL_SEQ_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int rank;
  int *t;

  cout << "\n";
  cout << "BAL_SEQ_UNRANK_TEST:\n";
  cout << "  BAL_SEQ_UNRANK unranks a balanced sequence of N items.\n";

  rank = 21;
  n = 5;

  t = bal_seq_unrank ( rank, n );
  cout << "\n";
  cout << "  The element of rank " << rank << "\n";
  cout << "\n";
  i4vec_transpose_print ( 2 * n, t, "" );

  delete [] t;

  return;
}
//****************************************************************************80

void bell_numbers_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BELL_NUMBERS_TEST tests BELL_NUMBERS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int *b;
  int bn;
  int n;
  int n_data;

  n_data = 0;

  cout << "\n";
  cout << "BELL_NUMBERS_TEST\n";
  cout << "  BELL_NUMBERS computes Bell numbers.\n";
  cout << "\n";
  cout << "     N          BELL(N)      BELL_NUMBERS(N)\n";
  cout << "\n";
  for ( ; ; )
  {
    bell_values ( n_data, n, bn );

    if ( n_data == 0 )
    {
      break;
    }
    b = bell_numbers ( n );
    cout << "  " << setw(8) << n
         << "  " << setw(12) << bn
         << "  " << setw(12) << b[n] << "\n";
    delete [] b;
  }

  return;
}
//****************************************************************************80

void cycle_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CYCLE_CHECK_TEST tests CYCLE_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int check;
  int i;
  int *index;
  int index1[3] = { 1, 4, 3 };
  int index2[3] = { 1, 4, 3 };
  int index3[3] = { 1, 4, 2 };
  int index4[3] = { 1, 4, 3 };
  int index5[3] = { 1, 4, 3 };
  int index6[3] = { 1, 4, 3 };
  int j;
  int jlo;
  int n;
  int ncycle;
  int *t;
  int t1[8] = { 5, 1, 3, 8, 6, 2, 4, 7 };
  int t2[8] = { 5, 1, 3, 8, 6, 2, 4, 7 };
  int t3[8] = { 5, 1, 3, 8, 6, 2, 4, 7 };
  int t4[8] = { 5, 1, 3, 12, 6, 2, 4, 7 };
  int t5[8] = { 5, 1, 3, 8, 5, 2, 4, 7 };
  int t6[8] = { 5, 1, 3, 8, 6, 2, 4, 7 };
  int test;

  cout << "\n";
  cout << "CYCLE_CHECK TEST\n";
  cout << "  CYCLE_CHECK checks a permutation in cycle form.\n";
  
  for ( test = 1; test <= 6; test++ )
  {
    if ( test == 1 )
    {
      n = 0;
      ncycle = 3;
      t = i4vec_copy_new ( 8, t1 );
      index = i4vec_copy_new ( ncycle, index1 );
    }
    else if ( test == 2 )
    {
      n = 8;
      ncycle = 0;
      t = i4vec_copy_new ( n, t1 );
      index = i4vec_copy_new ( 3, index1 );
    }
    else if ( test == 3 )
    {
      n = 8;
      ncycle = 3;
      t = i4vec_copy_new ( n, t3 );
      index = i4vec_copy_new ( ncycle, index3 );
    }
    else if ( test == 4 )
    {
      n = 8;
      ncycle = 3;
      t = i4vec_copy_new ( n, t4 );
      index = i4vec_copy_new ( ncycle, index4 );
    }
    else if ( test == 5 )
    {
      n = 8;
      ncycle = 3;
      t = i4vec_copy_new ( n, t5 );
      index = i4vec_copy_new ( ncycle, index5 );
    }
    else if ( test == 6 )
    {
      n = 8;
      ncycle = 3;
      t = i4vec_copy_new ( n, t6 );
      index = i4vec_copy_new ( ncycle, index6 );
    }

    cout << "\n";
    cout << "  Permutation in cycle form:\n";
    cout << "  Number of cycles is " << ncycle << "\n";
    cout << "\n";
    jlo = 0;
    for ( i = 0; i < ncycle; i++ )
    {
      cout << "    " ;
      for ( j = jlo; j < jlo + index[i]; j++ )
      {
        cout << "  " << t[j];
      }
      cout << "\n";
      jlo = jlo + index[i];
    }

    check = cycle_check ( n, ncycle, t, index );
    cout << "  Check = " << check << "\n";

    delete [] index;
    delete [] t; 
  }

  return;
}
//****************************************************************************80

void cycle_to_perm_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CYCLE_TO_PERM_TEST tests CYCLE_TO_PERM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int jlo;
  int index[3] = { 5, 1, 1 };
  int n = 7;
  int ncycle;
  int *p;
  int rank;
  int t[7] = { 4, 2, 5, 3, 1, 6, 7 };

  cout << "\n";
  cout << "CYCLE_TO_PERM_TEST\n";
  cout << "  CYCLE_TO_PERM converts a permutation from\n";
  cout << "  cycle to array form;\n";

  n = 7;
  ncycle = 3;

  cout << "\n";
  cout << "  Cycle form:\n";
  cout << "  Number of cycles is " << ncycle << "\n";
  cout << "\n";
  jlo = 0;
  for ( i = 1; i <= ncycle; i++ )
  {
    for ( j = jlo + 1; j <= jlo + index[i-1]; j++ )
    {
      cout << "  " << setw(4) << t[j-1];
    }
    cout << "\n";
    jlo = jlo + index[i-1];
  }

  p = cycle_to_perm ( n, ncycle, t, index );

  perm_print ( n, p, "  Corresponding permutation:" );

  delete [] p;

  return;
}
//****************************************************************************80

void dist_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIST_ENUM_TEST tests DIST_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int m;
  int n;

  cout << "\n";
  cout << "DIST_ENUM_TEST\n";
  cout << "  DIST_ENUM enumerates distributions of N indistinguishable\n";
  cout << "  objects among M distinguishable slots:\n";
  cout << "\n";
  cout << "      N:      0       1       2       3       4       5\n";
  cout << "   M\n";

  for ( m = 0; m <= 10; m++ )
  {
    cout << "  " << setw(2) << m
         << ":  ";
    for ( n = 0; n <= 5; n++ )
    {
      cout << "  " << setw(6) << dist_enum ( m, n );
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void dist_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIST_NEXT_TEST tests DIST_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int idist;
  int k;
  int leftmost;
  int m;
  bool more;
  int num_dist;
  int *q;

  k = 3;
  m = 5;
  q = new int[k];
  leftmost = 0;
  more = false;

  cout << "\n";
  cout << "DIST_NEXT_TEST\n";
  cout << "  DIST_NEXT produces the next distribution of M indistinguishable\n";
  cout << "  objects among K distinguishable slots.\n";
  cout << "\n";
  cout << "  Number of:\n";
  cout << "    indistinguishable objects = " << m << "\n";
  cout << "    distinguishable slots =     " << k << "\n";
  cout << "    distributions is            " << dist_enum ( k, m ) << "\n";
  cout << "\n";

  idist = 0;

  for ( ; ; )
  {
    dist_next ( k, m, q, leftmost, more );

    if ( !more )
    {
      break;
    }

    idist = idist + 1;
    cout << "  " << setw(4) << idist;
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(2) << q[i];
    }
    cout << "\n";
  }

  delete [] q;

  return;
}
//****************************************************************************80

void edge_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EDGE_CHECK_TEST tests EDGE_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int check;
  int edge_num;
  int *edge_list;
  int edge_list1[6] = { 
    1, 2,
    2, 3,
    3, 1 };
  int edge_list2[6] = { 
    1, 2,
    2, 3,
    3, 1 };
  int edge_list3[6] = { 
    1, 2,
    2, 3,
    3, 4 };
  int edge_list4[6] = { 
    1, 2,
    2, 2,
    3, 1 };
  int edge_list5[6] = { 
    1, 2,
    2, 3,
    2, 1 };
  int edge_list6[6] = { 
    1, 2,
    2, 3,
    3, 1 };
  int node_num;
  int test;

  cout << "\n";
  cout << "EDGE_CHECK TEST\n";
  cout << "  EDGE_CHECK checks a graph described by edges.\n";
  cout << "\n";
  cout << "  Check?  Nodes  Edges    EdgeList\n";
  cout << "\n";
  
  for ( test = 1; test <= 6; test++ )
  {
    if ( test == 1 )
    {
      node_num = -5;
      edge_num = 3;
      edge_list = i4vec_copy_new ( 2 * edge_num, edge_list1 );
    }
    else if ( test == 2 )
    {
      node_num = 3;
      edge_num = -1;
      edge_list = NULL;
    }
    else if ( test == 3 )
    {
      node_num = 3;
      edge_num = 3;
      edge_list = i4vec_copy_new ( 2 * edge_num, edge_list3 );
    }
    else if ( test == 4 )
    {
      node_num = 3;
      edge_num = 3;
      edge_list = i4vec_copy_new ( 2 * edge_num, edge_list4 );
    }
    else if ( test == 5 )
    {
      node_num = 3;
      edge_num = 3;
      edge_list = i4vec_copy_new ( 2 * edge_num, edge_list5 );
    }
    else if ( test == 6 )
    {
      node_num = 3;
      edge_num = 3;
      edge_list = i4vec_copy_new ( 2 * edge_num, edge_list6 );
    }

    cout << "\n";
    check = edge_check ( node_num, edge_num, edge_list );
    cout << "      " << setw(2) << check
         << "     " << setw(2) << node_num
         << "     " << setw(2) << edge_num << "\n";
    i4mat_print ( 2, edge_num, edge_list, "  Edge list of graph:" );

    delete [] edge_list;
  }

  return;
}
//****************************************************************************80

void edge_degree_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EDGE_DEGREE_TEST tests EDGE_DEGREE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *d;
  int edge[2*5] = {
    1, 2, 2, 3, 4,
    2, 3, 4, 4, 5 };
  int edge_num;
  int node_num;

  cout << "\n";
  cout << "EDGE_DEGREE_TEST\n";
  cout << "  EDGE_DEGREE determines the degree of each node in a graph.\n";

  node_num = 5;
  edge_num = 5;

  i4mat_print ( 2, edge_num, edge, "  The edge array:" );

  d = edge_degree ( node_num, edge_num, edge );

  i4vec_print ( node_num, d, "  The degree vector:" );

  delete [] d;

  return;
}
//****************************************************************************80

void edge_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EDGE_ENUM_TEST tests EDGE_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    23 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int edge_num;
  int node_num;

  cout << "\n";
  cout << "EDGE_ENUM_TEST\n";
  cout << "  EDGE_ENUM enumerates the maximum number of edges\n";
  cout << "  possible in a graph of NODE_NUM nodes.\n";
  cout << "\n";
  cout << "   NODE_NUM    EDGE_NUM(max)\n";
  cout << "\n";

  for ( node_num = 1; node_num <= 10; node_num++ )
  {
    edge_num = edge_enum ( node_num );
    cout << "       "
         << "  " << setw(2) << node_num
         << "    "
         << "  " << setw(6) << edge_num << "\n";
  }

  return;
}
//****************************************************************************80

void gray_code_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_CODE_CHECK_TEST tests GRAY_CODE_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int i;
  int n;
  int test;
  int *t;
  int t1[5] = { 0, 1, 1, 0, 1 };
  int t2[5] = { 1, 0, 7, 1, 0 };
  int t3[5] = { 1, 1, 1, 1, 1 };

  cout << "\n";
  cout << "GRAY_CODE_CHECK TEST\n";
  cout << "  GRAY_CODE_CHECK checks N and T(1:N).\n";
  cout << "\n";
  cout << "  Check?   N    T(1:N)\n";
  cout << "\n";
  
  for ( test = 1; test <= 3; test++ )
  {
    n = 5;

    if ( test == 1 )
    {
      t = i4vec_copy_new ( n, t3 );
    }
    else if ( test == 2 )
    {
      t = i4vec_copy_new ( n, t3 );
    }
    else if ( test == 3 )
    {
      t = i4vec_copy_new ( n, t3 );
    }

    check = gray_code_check ( n, t3 );
    cout << "      " << setw(1) << check
         << "  " << setw(2) << n
         << ":  ";
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(2) << t[i];
    }
    cout << "\n";

    delete [] t;
  }

  return;
}
//****************************************************************************80

void gray_code_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_CODE_ENUM_TEST tests GRAY_CODE_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int ngray;

  cout << "\n";
  cout << "GRAY_CODE_ENUM_TEST\n";
  cout << "  GRAY_CODE_ENUM enumerates Gray codes with N elements.\n";
  cout << "\n";
  cout << "   N   Enum(N)\n";
  cout << "\n";
  for ( n = 0; n <= 10; n++ )
  {
    ngray = gray_code_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(6) << ngray << "\n";
  }

  return;
}
//****************************************************************************80

void gray_code_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_CODE_RANK_TEST tests GRAY_CODE_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 5;
  int rank;
  int t[5] = { 1, 1, 0, 0, 0 };

  cout << "\n";
  cout << "GRAY_CODE_RANK_TEST\n";
  cout << "  GRAY_CODE_RANK ranks a Gray code.\n";

  rank = gray_code_rank ( n, t );

  i4vec_transpose_print ( n, t, "  Element to be ranked:" );

  cout << "\n";
  cout << "  Computed rank: " << rank << "\n";

  return;
}
//****************************************************************************80

void gray_code_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_CODE_SUCCESSOR_TEST tests GRAY_CODE_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "GRAY_CODE_SUCCESSOR_TEST\n";
  cout << "  GRAY_CODE_SUCCESSOR lists Gray codes one by one.\n";

  n = 5;
  t = new int[n];
  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    gray_code_successor ( n, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void gray_code_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRAY_CODE_UNRANK_TEST tests GRAY_CODE_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int ngray;
  int rank;
  int *t;

  cout << "\n";
  cout << "GRAY_CODE_UNRANK_TEST\n";
  cout << "  GRAY_CODE_UNRANK unranks a Gray code.\n";

  n = 5;
  ngray = gray_code_enum ( n );
  rank = ngray / 2;

  t = gray_code_unrank ( rank, n );

  cout << "\n";
  cout << "  The element of rank " << rank << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(4) << t[i];
  }
  cout << "\n";

  delete [] t;

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
//    09 December 2013
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;

  cout << "\n";
  cout << "I4_CHOOSE_TEST\n";
  cout << "  I4_CHOOSE computes binomial coefficients.\n";

  for ( i = -1; i <= 5; i++ )
  {
    for ( j = - 1; j <= 5; j++ )
    {
      cout << "  " << setw(4) << i
           << "  " << setw(4) << j
           << "  " << setw(12) << i4_choose ( i, j ) << "\n";
    }
  }
  return;
}
//****************************************************************************80

void i4_factorial_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_FACTORIAL_TEST tests I4_FACTORIAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int fx;
  int fx2;
  int n;
  int x;

  cout << "\n";
  cout << "I4_FACTORIAL_TEST:\n";
  cout << "  I4_FACTORIAL evaluates the factorial function.\n";
  cout << "\n";
  cout << "     X       Exact F       FACTORIAL(X)\n";
  cout << "\n";

  n = 0;

  for ( ; ; )
  {
    i4_factorial_values ( n, x, fx );

    if ( n == 0 )
    {
      break;
    }

    if ( x <= 0.0 )
    {
      continue;
    }

    fx2 = i4_factorial ( x );

    cout << "  " << setw(4) << x
         << "  " << setw(12) << fx
         << "  " << setw(12) << fx2 << "\n";
  }
  return;
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
  cout << "\n";

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

void i4_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_AB_TEST tests I4_UNIFORM_AB.
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
  int i;
  int j;
  int seed = 123456789;

  cout << "\n";
  cout << "I4_UNIFORM_AB_TEST\n";
  cout << "  I4_UNIFORM_AB computes pseudorandom values\n";
  cout << "  in an interval [A,B].\n";

  cout << "\n";
  cout << "  The lower endpoint A = " << a << "\n";
  cout << "  The upper endpoint B = " << b << "\n";
  cout << "  The initial seed is " << seed << "\n";
  cout << "\n";

  for ( i = 1; i <= 20; i++ )
  {
    j = i4_uniform_ab ( a, b, seed );

    cout << "  " << setw(8) << i
         << "  " << setw(8) << j << "\n";
  }

  return;
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
    i4vec_backtrack ( n, maxstack, stacks, x, indx, k, nstack, ncan );

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

void i4vec_dot_product_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_DOT_PRODUCT_TEST tests I4VEC_DOT_PRODUCT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int *b;
  int d;
  int hi;
  int lo;
  int n = 5;
  int seed;

  cout << "\n";
  cout << "I4VEC_DOT_PRODUCT_TEST\n";
  cout << "  I4VEC_DOT_PRODUCT computes the dot product of two I4VECs.\n";

  lo = 0;
  hi = 10;
  seed = 123456789;

  a = i4vec_uniform_ab_new ( n, lo, hi, seed );
  i4vec_print ( n, a, "  The vector A:" );

  b = i4vec_uniform_ab_new ( n, lo, hi, seed );
  i4vec_print ( n, b, "  The vector B:" );

  d = i4vec_dot_product ( n, a, b );
  cout << "\n";
  cout << "  The dot product is " << d << "\n";

  delete [] a;
  delete [] b;

  return;
}
//****************************************************************************80

void i4vec_part1_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PART1_NEW_TEST tests I4VEC_PART1_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int npart;
  int *x;

  cout << "\n";
  cout << "I4VEC_PART1_NEW_TEST:\n";
  cout << "  I4VEC_PART1_NEW partitions an integer N into NPART parts.\n";

  n = 17;
  npart = 5;

  cout << "\n";
  cout << "  Partition N = " << n << " into NPART = " << npart << " parts:\n";
  cout << "\n";

  x = i4vec_part1_new ( n, npart );

  i4vec_print ( npart, x, "  The partition:" );

  delete [] x;

  return;
}
//****************************************************************************80

void i4vec_part2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PART2_TEST tests I4VEC_PART2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int npart;
  int *x;

  cout << "\n";
  cout << "I4VEC_PART2_TEST:\n";
  cout << "  I4VEC_PART2 partitions an integer N into NPART parts.\n";

  n = 17;
  npart = 5;
  x = ( int * ) malloc ( npart * sizeof ( int ) );

  cout << "\n";
  cout << "  Partition N = " << n << " into NPART = " << npart << " parts:\n";
  cout << "\n";

  i4vec_part2 ( n, npart, x );

  i4vec_print ( npart, x, "  The partition:" );

  return;
}
//****************************************************************************80

void i4vec_part2_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PART2_NEW_TEST tests I4VEC_PART2_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int npart;
  int *x;

  cout << "\n";
  cout << "I4VEC_PART2_NEW_TEST:\n";
  cout << "  I4VEC_PART2_NEW partitions an integer N into NPART parts.\n";

  n = 17;
  npart = 5;
 
  cout << "\n";
  cout << "  Partition N = " << n << " into NPART = " << npart << " parts:\n";
  cout << "\n";

  x = i4vec_part2_new ( n, npart );

  i4vec_print ( npart, x, "  The partition:" );

  delete [] x;

  return;
}
//****************************************************************************80

void i4vec_search_binary_a_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SEARCH_BINARY_A_TEST tests I4VEC_SEARCH_BINARY_A.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    21 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a[10] = { 0, 1, 1, 2, 3, 4, 5, 6, 7, 8 };
  int b;
  int index;
  int n = 10;

  cout << "\n";
  cout << "I4VEC_SEARCH_BINARY_A_TEST\n";
  cout << "  I4VEC_SEARCH_BINARY_A searches an ascending sorted I4VEC.\n";

  i4vec_print ( n, a, "  Ascending sorted I4VEC:" );

  b = 5;

  cout << "\n";
  cout << "  Now search for an instance of the value " << b << "\n";

  index = i4vec_search_binary_a ( n, a, b );

  cout << "\n";
  if ( index == 0 )
  {
    cout << "  The value does not occur.\n";
  }
  else
  {
    cout << "  The value occurs at index = " << index << "\n";
  }
  return;
}
//****************************************************************************80

void i4vec_search_binary_d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SEARCH_BINARY_D_TEST tests I4VEC_SEARCH_BINARY_D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    21 November 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int a[N] = { 8, 7, 6, 5, 4, 3, 2, 1, 1, 0 };
  int b;
  int index;
  int n = N;

  cout << "\n";
  cout << "I4VEC_SEARCH_BINARY_D_TEST\n";
  cout << "  I4VEC_SEARCH_BINARY_D searches a descending sorted I4VEC.\n";

  i4vec_print ( n, a, "  Descending sorted I4VEC:" );

  b = 5;

  cout << "\n";
  cout << "  Now search for an instance of the value " << b << "\n";

  index = i4vec_search_binary_d ( n, a, b );

  cout << "\n";
  if ( index == 0 )
  {
    cout << "  The value does not occur.\n";
  }
  else
  {
    cout << "  The value occurs at index = " << index << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void i4vec_sort_insert_a_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SORT_INSERT_A_TEST tests I4VEC_SORT_INSERT_A.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int a[10] = { 6, 7, 1, 0, 4, 3, 2, 1, 5, 8 };
  int b;
  int index;
  int n = 10;

  cout << "\n";
  cout << "I4VEC_SORT_INSERT_A_TEST\n";
  cout << "  I4VEC_SORT_INSERT_A ascending sorts an I4VEC.\n";

  i4vec_print ( n, a, "  Before ascending sort:" );

  i4vec_sort_insert_a ( n, a );

  i4vec_print ( n, a, "  After ascending sort:" );

  return;
}
//****************************************************************************80

void i4vec_sort_insert_d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SORT_INSERT_D_TEST tests I4VEC_SORT_INSERT_D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 July 2007
//
//  Author:
//
//    John Burkardt
//
{
  int a[10] = { 6, 7, 1, 0, 4, 3, 2, 1, 5, 8 };
  int index;
  int n = 10;

  cout << "\n";
  cout << "I4VEC_SORT_INSERT_D_TEST\n";
  cout << "  I4VEC_SORT_INSERT_D descending sorts an I4VEC.\n";

  i4vec_print ( n, a, "  Before descending sort:" );

  i4vec_sort_insert_d ( n, a );

  i4vec_print ( n, a, "  After descending sort:" );

  return;
}
//****************************************************************************80

void i4vec_uniform_ab_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_UNIFORM_AB_NEW_TEST tests I4VEC_UNIFORM_AB_NEW.
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
  cout << "I4VEC_UNIFORM_AB_NEW_TEST\n";
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

void knapsack_01_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KNAPSACK_01_TEST tests KNAPSACK_01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int i;
  double mass;
  double mass_limit = 26.0;
  int n = N;
  double p[N] = { 24.0, 13.0, 23.0, 15.0, 16.0 };
  double profit;
  double w[N] = { 12.0,  7.0, 11.0,  8.0,  9.0 };
  double x[N];

  cout << "\n";
  cout << "KNAPSACK_01_TEST\n";
  cout << "  KNAPSACK_01 solves the 0/1 knapsack problem.\n";

  cout << "\n";
  cout << "  Object, Profit, Mass, Profit Density\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << setw(7) << p[i]
         << "  " << setw(7) << w[i]
         << "  " << setw(7) << p[i] / w[i] << "\n";
  }

  knapsack_reorder ( n, p, w );

  cout << "\n";
  cout << "  After reordering by Profit Density:\n";
  cout << "\n";
  cout << "  Object, Profit, Mass, Profit Density\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << setw(7) << p[i]
         << "  " << setw(7) << w[i]
         << "  " << setw(7) << p[i] / w[i] << "\n";
  }

  cout << "\n";
  cout << "  Total mass restriction is " << mass_limit << "\n";

  knapsack_01 ( n, mass_limit, p, w, x, mass, profit );

  cout << "\n";
  cout << "  Object, Density, Choice, Profit, Mass\n";
  cout << "\n";

  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << setw(7) << p[i] / w[i]
         << "  " << setw(7) << x[i]
         << "  " << setw(7) << x[i] * p[i]
         << "  " << setw(7) << x[i] * w[i] << "\n";
  }

  cout << "\n";
  cout << "  Total:            " << profit 
    << "  " << mass << "\n";

  return;
# undef N
}
//****************************************************************************80

void knapsack_rational_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KNAPSACK_RATIONAL_TEST tests KNAPSACK_RATIONAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int i;
  double mass;
  double mass_limit = 26.0;
  int n = N;
  double p[N] = { 24.0, 13.0, 23.0, 15.0, 16.0 };
  double profit;
  double w[N] = { 12.0,  7.0, 11.0,  8.0,  9.0 };
  double x[N];

  cout << "\n";
  cout << "KNAPSACK_RATIONAL_TEST\n";
  cout << "  KNAPSACK_RATIONAL solves the rational knapsack problem.\n";

  cout << "\n";
  cout << "  Object, Profit, Mass, Profit Density\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(4) << i + 1
         << "  " << setw(7) << p[i]
         << "  " << setw(7) << w[i]
         << "  " << setw(7) << p[i] / w[i] << "\n";
  }

  knapsack_reorder ( n, p, w );

  cout << "\n";
  cout << "  After reordering by Profit Density:\n";
  cout << "\n";
  cout << "  Object, Profit, Mass, Profit Density\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(4) << i + 1
         << "  " << setw(7) << p[i]
         << "  " << setw(7) << w[i]
         << "  " << setw(7) << p[i] / w[i] << "\n";
  }

  cout << "\n";
  cout << "  Total mass restriction is " << mass_limit << "\n";

  knapsack_rational ( n, mass_limit, p, w, x, mass, profit );

  cout << "\n";
  cout << "  Object, Density, Choice, Profit, Mass\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(4) << i + 1
         << "  " << setw(7) << p[i] / w[i]
         << "  " << setw(7) << x[i] * p[i]
         << "  " << setw(7) << x[i] * w[i] << "\n";
  }

  cout << "\n";
  cout << "  Total:            " << profit 
    << "  " << mass << "\n";

  return;
# undef N
}
//****************************************************************************80

void knapsack_reorder_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KNAPSACK_REORDER_TEST tests KNAPSACK_REORDER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 5;
  double p[5] = { 24.0, 13.0, 23.0, 15.0, 16.0 };
  double w[5] = { 12.0,  7.0, 11.0,  8.0,  9.0 };

  cout << "\n";
  cout << "KNAPSACK_REORDER_TEST\n";
  cout << "  KNAPSACK_REORDER reorders the knapsack data.\n";

  cout << "\n";
  cout << "  Object, Profit, Mass, Profit Density\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << setw(7) << p[i]
         << "  " << setw(7) << w[i]
         << "  " << setw(7) << p[i] / w[i] << "\n";
  }

  knapsack_reorder ( n, p, w );

  cout << "\n";
  cout << "  After reordering by Profit Density:\n";
  cout << "\n";
  cout << "  Object, Profit, Mass, Profit Density\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << setw(7) << p[i]
         << "  " << setw(7) << w[i]
         << "  " << setw(7) << p[i] / w[i] << "\n";
  }

  return;
}
//****************************************************************************80

void ksubset_colex_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_COLEX_CHECK_TEST tests KSUBSET_COLEX_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int k;
  int n;
  int *s;
  int s2[3] = { 5, 3, 2 };
  int s3[3] = { 5, 2, 3 };
  int s4[3] = { 7, 3, 2 };
  int s5[3] = { 5, 3, 2 };
  int test;

  cout << "\n";
  cout << "KSUBSET_COLEX_CHECK TEST\n";
  cout << "  KSUBSET_COLEX_CHECK checks a K subset of an N set.\n";
  
  for ( test = 1; test <= 7; test++ )
  {
    if ( test == 1 )
    {
      k = -1;
      n = 5;
      s = NULL;
    }
    else if ( test == 2 )
    {
      k = 3;
      n = 0;
      s = i4vec_copy_new ( k, s2 );
    }
    else if ( test == 3 )
    {
      k = 3;
      n = 5;
      s = i4vec_copy_new ( k, s3 );
    }
    else if ( test == 4 )
    {
      k = 3;
      n = 5;
      s = i4vec_copy_new ( k, s4 );
    }
    else if ( test == 5 )
    {
      k = 3;
      n = 5;
      s = i4vec_copy_new ( k, s5 );
    }
    else if ( test == 6 )
    {
      k = 0;
      n = 5;
      s = NULL;
    }
    else if ( test == 7 )
    {
      k = 0;
      n = 0;
      s = NULL;
    }

    check = ksubset_colex_check ( k, n, s );
    i4vec_transpose_print ( k, s, "  Subset:" );
    cout << "  N = " << n << ", K = " << k << "\n";
    cout << "  Check = " << check << "\n";
    delete [] s;
  }

  return;
}
//****************************************************************************80

void ksubset_colex_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_COLEX_RANK_TEST tests KSUBSET_COLEX_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;
  int rank;
  int t[3] = { 5, 3, 1 };

  cout << "\n";
  cout << "KSUBSET_COLEX_RANK_TEST\n";
  cout << "  KSUBSET_COLEX_RANK ranks\n";
  cout << "  K-subsets of an N set,\n";
  cout << "  using the colexicographic ordering:\n";

  k = 3;
  n = 5;
  i4vec_transpose_print ( k, t, "  Element to be ranked:" );

  rank = ksubset_colex_rank ( k, n, t );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void ksubset_colex_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_COLEX_SUCCESSOR_TEST tests KSUBSET_COLEX_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int k;
  int n;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "KSUBSET_COLEX_SUCCESSOR_TEST\n";
  cout << "  KSUBSET_COLEX_SUCCESSOR lists\n";
  cout << "  K-subsets of an N set using the colexicographic ordering:\n";

  k = 3;
  n = 5;
  t = new int[k];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    ksubset_colex_successor ( k, n, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void ksubset_colex_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_COLEX_UNRANK_TEST tests KSUBSET_COLEX_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;
  int rank;
  int *t;

  cout << "\n";
  cout << "KSUBSET_COLEX_UNRANK_TEST\n";
  cout << "  KSUBSET_COLEX_UNRANK unranks\n";
  cout << "  K-subsets of an N set\n";
  cout << "  using the colexicographic ordering.\n";

  rank = 5;
  k = 3;
  n = 5;

  t = ksubset_colex_unrank ( rank, k, n );

  cout << "\n";
  cout << "  The element of rank " << rank << "\n";
  cout << "\n";
  i4vec_transpose_print ( k, t, "" );

  delete [] t;

  return;
}
//****************************************************************************80

void ksubset_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_ENUM_TEST tests KSUBSET_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;

  cout << "\n";
  cout << "KSUBSET_ENUM_TEST\n";
  cout << "  KSUBSET_ENUM enumerates K subsets of an N set.\n";
  cout << "\n";
  cout << "      K:      0       1       2       3       4       5\n";
  cout << "   N\n";

  for ( n = 0; n <= 10; n++ )
  {
    cout << "  " << setw(2) << n
         << ":  ";
    for ( k = 0; k <= i4_min ( n, 5 ); k++ )
    {
      cout << "  " << setw(6) << ksubset_enum ( k, n );
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void ksubset_lex_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_LEX_CHECK_TEST tests KSUBSET_LEX_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int k;
  int n;
  int *s;
  int s2[3] = { 2, 3, 5 };
  int s3[3] = { 3, 2, 5 };
  int s4[3] = { 2, 3, 7 };
  int s5[3] = { 2, 3, 5 };
  int test;

  cout << "\n";
  cout << "KSUBSET_LEX_CHECK TEST\n";
  cout << "  KSUBSET_LEX_CHECK checks a K subset of an N set.\n";
  
  for ( test = 1; test <= 7; test++ )
  {
    if ( test == 1 )
    {
      k = -1;
      n = 5;
      s = NULL;
    }
    else if ( test == 2 )
    {
      k = 3;
      n = 0;
      s = i4vec_copy_new ( k, s2 );
    }
    else if ( test == 3 )
    {
      k = 3;
      n = 5;
      s = i4vec_copy_new ( k, s3 );
    }
    else if ( test == 4 )
    {
      k = 3;
      n = 5;
      s = i4vec_copy_new ( k, s4 );
    }
    else if ( test == 5 )
    {
      k = 3;
      n = 5;
      s = i4vec_copy_new ( k, s5 );
    }
    else if ( test == 6 )
    {
      k = 0;
      n = 5;
      s = NULL;
    }
    else if ( test == 7 )
    {
      k = 0;
      n = 0;
      s = NULL;
    }

    check = ksubset_lex_check ( k, n, s );
    i4vec_transpose_print ( k, s, "  Subset:" );
    cout << "  N = " << n << ", K = " << k << "\n";
    cout << "  Check = " << check << "\n";
    delete [] s;
  }

  return;
}
//****************************************************************************80

void ksubset_lex_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_LEX_RANK_TEST tests KSUBSET_LEX_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;
  int rank;
  int t[3] = { 1, 4, 5 };

  cout << "\n";
  cout << "KSUBSET_LEX_RANK_TEST\n";
  cout << "  KSUBSET_LEX_RANK ranks\n";
  cout << "  K-subsets of an N set,\n";
  cout << "  using the lexicographic ordering:\n";

  k = 3;
  n = 5;
  i4vec_transpose_print ( k, t, "  Element to be ranked:" );

  rank = ksubset_lex_rank ( k, n, t );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void ksubset_lex_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_LEX_SUCCESSOR_TEST tests KSUBSET_LEX_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int k;
  int n;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "KSUBSET_LEX_SUCCESSOR_TEST\n";
  cout << "  KSUBSET_LEX_SUCCESSOR lists\n";
  cout << "  K-subsets of an N set using the lexicographic ordering:\n";

  k = 3;
  n = 5;
  t = new int[k];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    ksubset_lex_successor ( k, n, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void ksubset_lex_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_LEX_UNRANK_TEST tests KSUBSET_LEX_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;
  int rank;
  int *t;

  cout << "\n";
  cout << "KSUBSET_LEX_UNRANK_TEST\n";
  cout << "  KSUBSET_LEX_UNRANK unranks\n";
  cout << "  K-subsets of an N set\n";
  cout << "  using the lexicographic ordering.\n";

  rank = 5;
  k = 3;
  n = 5;

  t = ksubset_lex_unrank ( rank, k, n );

  cout << "\n";
  cout << "  The element of rank " << rank << "\n";
  cout << "\n";
  i4vec_transpose_print ( k, t, "" );

  delete [] t;

  return;
}
//****************************************************************************80

void ksubset_revdoor_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_REVDOOR_RANK_TEST tests KSUBSET_REVDOOR_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;
  int rank;
  int t[3] = { 2, 4, 5 };

  cout << "\n";
  cout << "KSUBSET_REVDOOR_RANK_TEST\n";
  cout << "  KSUBSET_REVDOOR_RANK ranks\n";
  cout << "  K-subsets of an N set,\n";
  cout << "  using the revolving door ordering:\n";

  k = 3;
  n = 5;
  i4vec_transpose_print ( k, t, "  Element to be ranked:" );

  rank = ksubset_revdoor_rank ( k, n, t );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void ksubset_revdoor_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_REVDOOR_SUCCESSOR_TEST tests KSUBSET_REVDOOR_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int k;
  int n;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "KSUBSET_REVDOOR_SUCCESSOR_TEST\n";
  cout << "  KSUBSET_REVDOOR_SUCCESSOR lists\n";
  cout << "  K-subsets of an N set using the revolving door ordering:\n";

  k = 3;
  n = 5;
  t = new int[k];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    ksubset_revdoor_successor ( k, n, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void ksubset_revdoor_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_REVDOOR_UNRANK_TEST tests KSUBSET_REVDOOR_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;
  int rank;
  int *t;

  cout << "\n";
  cout << "KSUBSET_REVDOOR_UNRANK_TEST\n";
  cout << "  KSUBSET_REVDOOR_UNRANK unranks\n";
  cout << "  K-subsets of an N set\n";
  cout << "  using the revolving door ordering.\n";

  rank = 5;
  k = 3;
  n = 5;

  t = ksubset_revdoor_unrank ( rank, k, n );

  cout << "\n";
  cout << "  The element of rank " << rank << "\n";
  cout << "\n";
  i4vec_transpose_print ( k, t, "" );

  delete [] t;

  return;
}
//****************************************************************************80

void marriage_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MARRIAGE_TEST tests MARRIAGE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  int *fiancee;
  int i;
  int n = N;
  int *next;
  int prefer[N*N] = {
    2, 1, 2, 1, 5, 
    5, 2, 3, 3, 3, 
    1, 3, 5, 2, 2, 
    3, 4, 4, 4, 1, 
    4, 5, 1, 5, 4 };
  int rank[N*N] = {
    2, 4, 1, 4, 5, 
    4, 3, 3, 2, 2, 
    5, 5, 4, 1, 3, 
    3, 1, 2, 3, 1, 
    1, 2, 5, 5, 4 };

  cout << "\n";
  cout << "MARRIAGE_TEST\n";
  cout << "  MARRIAGE arranges a set of stable marriages\n";
  cout << "  given a set of preferences.\n";

  fiancee = new int[n];
  next = new int[n];

  marriage ( n, prefer, rank, fiancee, next );

  cout << "\n";
  cout << "  Man, Wife's rank, Wife\n";
  cout << "\n";
  for ( i = 1; i <= n; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(4) << next[i-1]
         << "  " << setw(4) << prefer[i-1+(next[i-1]-1)*n] << "\n";
  }

  cout << "\n";
  cout << "  Woman, Husband's rank, Husband\n";
  cout << "\n";
  for ( i = 1; i <= n; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(4) << rank[i-1+(fiancee[i-1]-1)*n]
         << "  " << setw(4) << fiancee[i-1] << "\n";
  }

  cout << "\n";
  cout << "  Correct result:\n";
  cout << "\n";
  cout << "  M:W 1  2  3  4  5\n";
  cout << "   1  +  .  .  .  .\n";
  cout << "   2  .  .  .  +  .\n";
  cout << "   3  .  .  .  .  +\n";
  cout << "   4  .  .  +  .  .\n";
  cout << "   5  .  +  .  .  .\n";

  delete [] fiancee;
  delete [] next;

  return;
# undef N
}
//****************************************************************************80

void mountain_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MOUNTAIN_TEST tests MOUNTAIN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int n = 5;
  int x;
  int y;

  cout << "\n";
  cout << "MOUNTAIN_TEST\n";
  cout << "  MOUNTAIN computes mountain numbers.\n";
  cout << "\n";
  cout << "  Y  MXY\n";
  cout << "\n";

  for ( y = 0; y <= n; y++ )
  {
    cout << "  " << setw(2) << y << "   ";

    for ( x = 0; x <= 2 * n; x++ )
    {
      cout << "  " << setw(4) << mountain ( n, x, y );
    }
    cout << "\n";
  }
  return;
}
//****************************************************************************80

void npart_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NPART_ENUM_TEST tests NPART_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int part_num;

  cout << "\n";
  cout << "NPART_ENUM_TEST\n";
  cout << "  NPART_ENUM enumerates partitions of N into PART_NUM parts.\n";
  cout << "\n";
  cout << "   PART_NUM:  1       2       3       4       5       6\n";
  cout << "   N\n";

  for ( n = 0; n <= 10; n++ )
  {
    cout << "  " << setw(2) << n << ":  ";
    for ( part_num = 1; part_num <= i4_min ( n, 6 ); part_num++ )
    {
      cout << "  " << setw(6) << npart_enum ( n, part_num );
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void npart_rsf_lex_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NPART_RSF_LEX_RANK_TEST tests NPART_RSF_LEX_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int npart;
  int rank;
  int t[3] = { 1, 5, 6 };

  n = 12;
  npart = 3;

  cout << "\n";
  cout << "NPART_RSF_LEX_RANK_TEST:\n";
  cout << "  NPART_RSF_LEX_RANK ranks\n";
  cout << "  partitions of N with NPART parts\n";
  cout << "  in reverse standard form:\n";

  i4vec_transpose_print ( npart, t, "  Element to be ranked:" );

  rank = npart_rsf_lex_rank ( n, npart, t );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void npart_rsf_lex_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NPART_RSF_LEX_SUCCESSOR_TEST tests NPART_RSF_LEX_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int npart = 3;
  int rank;
  int rank_old;
  int *t;

  n = 12;

  cout << "\n";
  cout << "NPART_RSF_LEX_SUCCESSOR_TEST\n";
  cout << "  NPART_RSF_LEX_SUCCESSOR lists\n";
  cout << "  partitions of N with NPART parts\n";
  cout << "  in reverse standard form:\n";
 
  t = new int[npart];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    npart_rsf_lex_successor ( n, npart, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < npart; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void npart_rsf_lex_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NPART_RSF_LEX_UNRANK_TEST tests NPART_RSF_LEX_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int npart;
  int rank;
  int *t;


  cout << "\n";
  cout << "NPART_RSF_LEX_UNRANK_TEST\n";
  cout << "  NPART_RSF_LEX_UNRANK unranks\n";
  cout << "  partitions of N with NPART parts\n";
  cout << "  in reverse standard form:\n";

  rank = 4;
  n = 12;
  npart = 3;

  t = npart_rsf_lex_unrank ( rank, n, npart );

  i4vec_transpose_print ( npart, t, "  The element of rank 4:" );

  delete [] t;

  return;
}
//****************************************************************************80

void npart_rsf_lex_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NPART_RSF_LEX_RANDOM_TEST tests NPART_RSF_LEX_RANDOM;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 12;
  int npart = 3;
  int seed = 123456789;
  int *t;

  cout << "\n";
  cout << "NPART_RSF_LEX_RANDOM_TEST\n";
  cout << "  NPART_RSF_LEX_RANDOM produces random examples of\n";
  cout << "  partitions of N with NPART parts\n";
  cout << "  in reverse standard form.\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    t = npart_rsf_lex_random ( n, npart, seed );
    i4vec_transpose_print ( npart, t, "" );
    delete [] t;
  }

  return;
}
//****************************************************************************80

void npart_sf_lex_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NPART_SF_LEX_SUCCESSOR_TEST tests NPART_SF_LEX_SUCCESSOR;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 12;
  int npart = 3;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "NPART_SF_LEX_SUCCESSOR_TEST\n";
  cout << "  NPART_SF_LEX_SUCCESSOR lists\n";
  cout << "  Partitions of N with NPART parts.\n";

  t = new int[npart];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    npart_sf_lex_successor ( n, npart, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < npart; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }
  return;
}
//****************************************************************************80

void npart_table_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NPART_TABLE_TEST tests NPART_TABLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int maxn = 10;
  int maxpart = 5;
  int *p;

  cout << "\n";
  cout << "NPART_TABLE_TEST\n";
  cout << "  NPART_TABLE tabulates partitions\n";
  cout << "  of N with NPART parts;\n";

  p = npart_table ( maxn, maxpart );

  cout << "\n";
  cout << "   I     1      2      3      4      5\n";
  cout << "\n";

  for ( i = 0; i <= maxn; i++ )
  {
    cout << "  " << setw(2) << i;
    for ( j = 0; j <= maxpart; j++ )
    {
      cout << "  " << setw(4) << p[i+j*(maxn+1)];
    }
    cout << "\n";
  }

  delete [] p;

  return;
}
//****************************************************************************80

void part_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PART_ENUM_TEST tests PART_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int part_num;

  cout << "\n";
  cout << "PART_ENUM_TEST\n";
  cout << "  PART_ENUM enumerates the partitions of N.\n";
  cout << "\n";

  for ( n = 0; n <= 10; n++ )
  {
    cout << "  " << setw(2) << n
         << "  " << setw(6) << part_enum ( n ) << "\n";
  }

  return;
}
//****************************************************************************80

void part_rsf_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PART_RSF_CHECK_TEST tests PART_RSF_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int a1[4] = { 1, 4, 4, 6 };
  int a2[4] = { 1, 4, 4, 6 };
  int a3[4] = { -9, 4, 4, 16 };
  int a4[4] = { 6, 4, 4, 1 };
  int a5[4] = { 1, 4, 5, 6 };
  int a6[4] = { 1, 4, 4, 6 };
  int check;
  int n;
  int npart;
  int test;

  cout << "\n";
  cout << "PART_RSF_CHECK TEST\n";
  cout << "  PART_RSF_CHECK checks a reverse standard form partition.\n";
  
  for ( test = 1; test <= 6; test++ )
  {
    if ( test == 1 )
    {
      n = 0;
      npart = 4;
      a = i4vec_copy_new ( npart, a1 );
    }
    else if ( test == 2 )
    {
      n = 15;
      npart = 0;
      a = i4vec_copy_new ( 4, a2 );
    }
    else if ( test == 3 )
    {
      n = 15;
      npart = 4;
      a = i4vec_copy_new ( npart, a3 );
    }
    else if ( test == 4 )
    {
      n = 15;
      npart = 4;
      a = i4vec_copy_new ( npart, a4 );
    }
    else if ( test == 5 )
    {
      n = 15;
      npart = 4;
      a = i4vec_copy_new ( npart, a5 );
    }
    else if ( test == 6 )
    {
      n = 15;
      npart = 4;
      a = i4vec_copy_new ( npart, a6 );
    }

    cout << "\n";
    cout << "  Partition in RSF form.\n";
    cout << "  Partition of N = " << n << "\n";
    cout << "  Number of parts NPART = " << npart << "\n";
    i4vec_transpose_print ( npart, a, "" );
    check = part_rsf_check ( n, npart, a );
    cout << "  Check = " << check << "\n";
    delete [] a; 
  }

  return;
}
//****************************************************************************80

void part_sf_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PART_SF_CHECK_TEST tests PART_SF_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int a1[4] = { 6, 4, 4, 1 };
  int a2[4] = { 6, 4, 4, 1 };
  int a3[4] = { 16, 4, 4, -9 };
  int a4[4] = { 1, 4, 4, 6 };
  int a5[4] = { 6, 4, 5, 1 };
  int a6[4] = { 6, 4, 4, 1 };
  int check;
  int n;
  int npart;
  int test;

  cout << "\n";
  cout << "PART_SF_CHECK TEST\n";
  cout << "  PART_SF_CHECK checks a standard form partition.\n";
  
  for ( test = 1; test <= 6; test++ )
  {
    if ( test == 1 )
    {
      n = 0;
      npart = 4;
      a = i4vec_copy_new ( npart, a1 );
    }
    else if ( test == 2 )
    {
      n = 15;
      npart = 0;
      a = i4vec_copy_new ( 4, a2 );
    }
    else if ( test == 3 )
    {
      n = 15;
      npart = 4;
      a = i4vec_copy_new ( npart, a3 );
    }
    else if ( test == 4 )
    {
      n = 15;
      npart = 4;
      a = i4vec_copy_new ( npart, a4 );
    }
    else if ( test == 5 )
    {
      n = 15;
      npart = 4;
      a = i4vec_copy_new ( npart, a5 );
    }
    else if ( test == 6 )
    {
      n = 15;
      npart = 4;
      a = i4vec_copy_new ( npart, a6 );
    }

    cout << "\n";
    cout << "  Partition in SF form.\n";
    cout << "  Partition of N = " << n << "\n";
    cout << "  Number of parts NPART = " << npart << "\n";
    i4vec_transpose_print ( npart, a, "" );
    check = part_sf_check ( n, npart, a );
    cout << "  Check = " << check << "\n";
    delete [] a; 
  }

  return;
}
//****************************************************************************80

void part_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PART_SUCCESSOR_TEST tests PART_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 8;
  int npart;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "PART_SUCCESSOR_TEST\n";
  cout << "  PART_SUCCESSOR produces partitions of N,\n";

  t = new int[n];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    part_successor ( n, npart, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < npart; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void part_sf_conjugate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PART_SF_CONJUGATE_TEST tests PART_SF_CONJUGATE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int *b;
  int i;
  int n = 8;
  int npart;
  int npartb;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "PART_SF_CONJUGATE_TEST\n";
  cout << "  PART_SF_CONJUGATE produces the conjugate of a partition.\n";
  cout << "\n";
  cout << "  Partitions of N = " << n << "\n";
//
//  List.
//
  t = new int[n];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    part_successor ( n, npart, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < npart; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";

    b = part_sf_conjugate ( n, npart, t, npartb );
    i4vec_transpose_print ( npartb, b, "  Con:" );
    delete [] b;
  }

  delete [] t;

  return;
}
//****************************************************************************80

void part_sf_majorize_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PART_SF_MAJORIZE_TEST tests PART_SF_MAJORIZE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 8

  int a[N] = { 2, 2, 2, 1, 1, 0, 0, 0 };
  int b[N] = { 3, 1, 1, 1, 1, 1, 0, 0 };
  int c[N] = { 2, 2, 1, 1, 1, 1, 0, 0 };
  int n = N;
  int nparta = 5;
  int npartb = 6;
  int npartc = 6;
  int result;

  cout << "\n";
  cout << "PART_SF_MAJORIZE_TEST\n";
  cout << "  PART_SF_MAJORIZE determines if one partition\n";
  cout << "  majorizes another.\n";
  cout << "\n";
  cout << "  Partitions of N = " << n << "\n";
  cout << "\n";
  i4vec_transpose_print ( nparta, a, "  A: " );
  i4vec_transpose_print ( npartb, b, "  B: " );
  i4vec_transpose_print ( npartc, c, "  C: " );

  result = part_sf_majorize ( n, nparta, a, npartb, b );
  cout << "\n";
  cout << "  A compare B: " << result << "\n";
  result = part_sf_majorize ( n, npartb, b, npartc, c );
  cout << "  B compare C: " << result << "\n";
  result = part_sf_majorize ( n, npartc, c, nparta, a );
  cout << "  C compare A: " << result << "\n";
  result = part_sf_majorize ( n, npartc, c, npartc, c );
  cout << "  C compare C: " << result << "\n";

  return;
# undef N
}
//****************************************************************************80

void part_table_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PART_TABLE_TEST tests PART_TABLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int maxn = 10;
  int *p;

  cout << "\n";
  cout << "PART_TABLE_TEST\n";
  cout << "  PART_TABLE tabulates partitions of N.\n";

  p = part_table ( maxn );

  cout << "\n";

  for ( i = 0; i <= maxn; i++ )
  {
    cout << "  " << setw(2) << i
         << "  " << setw(4) << p[i] << "\n";
  }

  delete [] p;

  return;
}
//****************************************************************************80

void partition_greedy_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PARTITION_GREEDY_TEST tests PARTITION_GREEDY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int a1[N] = { 2, 10, 3, 8, 5, 7, 9, 5, 3, 2 };
  int a2[N] = { 771, 121, 281, 854, 885, 734, 486, 1003, 83, 62 };
  int i;
  int *indx;
  int n = N;
  int sums[2];

  cout << "\n";
  cout << "PARTITION_GREEDY_TEST\n";
  cout << "  PARTITION_GREEDY partitions an integer vector into\n";
  cout << "  two subsets with nearly equal sum.\n";
  cout << "\n";

  indx = partition_greedy ( n, a1 );

  cout << "\n";
  cout << "\n";
  cout << "Data set #1 partitioned:\n";
  cout << "\n";
  sums[0] = 0;
  sums[1] = 0;

  for ( i = 0; i < n; i++ )
  {
    if ( indx[i] == 1 ) 
    {
      sums[0] = sums[0] + a1[i];
      cout << "  " << setw(4) << a1[i] << "\n";
    }
    else
    {
      sums[1] = sums[1] + a1[i];
      cout << "  " << "    "
           << "  " << setw(4) << a1[i] << "\n";
    }
  }

  cout << "\n";
  cout << "Sums:\n";
  cout << "\n";
  cout << "  " << setw(4) << sums[0]
       << "  " << setw(4) << sums[1] << "\n";

  delete [] indx;

  indx = partition_greedy ( n, a2 );

  cout << "\n";
  cout << "\n";
  cout << "Data set #2 partitioned:\n";
  cout << "\n";

  sums[0] = 0;
  sums[1] = 0;

  for ( i = 0; i < n; i++ )
  {
    if ( indx[i] == 1 ) 
    {
      sums[0] = sums[0] + a2[i];
      cout << "  " << setw(4) << a2[i] << "\n";
    }
    else
    {
      sums[1] = sums[1] + a2[i];
      cout << "  " << "    "
           << "  " << setw(4) << a2[i] << "\n";
    }
  }

  cout << "\n";
  cout << "Sums:\n";
  cout << "\n";
  cout << "  " << setw(4) << sums[0]
       << "  " << setw(4) << sums[1] << "\n";

  delete [] indx;

  return;
# undef N
}
//****************************************************************************80

void partn_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PARTN_ENUM_TEST tests PARTN_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int nmax;

  cout << "\n";
  cout << "PARTN_ENUM_TEST\n";
  cout << "  PARTN_ENUM enumerates partitions of N with maximum part NMAX.\n";
  cout << "\n";
  cout << "   NMAX:      1       2       3       4       5       6\n";
  cout << "   N\n";

  for ( n = 0; n <= 10; n++ )
  {
    cout << "  " << setw(2) << n << ":  ";
    for ( nmax = 1; nmax <= i4_min ( n, 6 ); nmax++ )
    {
      cout << "  " << setw(6) << partn_enum ( n, nmax );
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void partn_sf_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PARTN_SF_CHECK_TEST tests PARTN_SF_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int a1[4] = { 6, 4, 4, 1 };
  int a2[4] = { 6, 4, 4, 1 };
  int a3[4] = { 6, 6, 6, -3 };
  int a4[4] = { 8, 4, 2, 1 };
  int a5[4] = { 1, 4, 4, 6 };
  int a6[4] = { 6, 5, 4, 1 };
  int a7[4] = { 6, 4, 4, 1 };
  bool check;
  int n;
  int nmax;
  int npart;
  int test;

  cout << "\n";
  cout << "PARTN_SF_CHECK TEST\n";
  cout << "  PARTN_SF_CHECK checks a standard form partition\n";
  cout << "  of N with largest entry NMAX.\n";
  
  for ( test = 1; test <= 7; test++ )
  {
    if ( test == 1 )
    {
      n = 0;
      nmax = 6;
      npart = 4;
      a = i4vec_copy_new ( n, a1 );
    }
    else if ( test == 2 )
    {
      n = 15;
      nmax = 6;
      npart = 0;
      a = i4vec_copy_new ( n, a2 );
    }
    else if ( test == 3 )
    {
      n = 15;
      nmax = 6;
      npart = 4;
      a = i4vec_copy_new ( n, a3 );
    }
    else if ( test == 4 )
    {
      n = 15;
      nmax = 6;
      npart = 4;
      a = i4vec_copy_new ( n, a4 );
    }
    else if ( test == 5 )
    {
      n = 15;
      nmax = 6;
      npart = 4;
      a = i4vec_copy_new ( n, a5 );
    }
    else if ( test == 6 )
    {
      n = 15;
      nmax = 6;
      npart = 4;
      a = i4vec_copy_new ( n, a6 );
    }
    else if ( test == 7 )
    {
      n = 15;
      nmax = 6;
      npart = 4;
      a = i4vec_copy_new ( n, a7 );
    }

    cout << "\n";
    cout << "  Partition in SF form.\n";
    cout << "  Partition of N = " << n << "\n";
    cout << "  Maximum entry NMAX = " << nmax << "\n";
    cout << "  Number of parts NPART = " << npart << "\n";
    i4vec_transpose_print ( npart, a, "" );
    check = partn_sf_check ( n, nmax, npart, a );
    cout << "  Check = " << check << "\n";
    delete [] a; 
  }

  return;
}
//****************************************************************************80

void partn_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PARTN_SUCCESSOR_TEST tests PARTN_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int *b;
  int i;
  int n;
  int nmax;
  int npart;
  int npart2;
  int npartitions;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "PARTN_SUCCESSOR_TEST\n";
  cout << "  PARTN_SUCCESSOR lists partitions of N with maximum element NMAX:\n";
  cout << "\n";

  n = 11;
  nmax = 4;
  t = new int[n];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    partn_successor ( n, nmax, npart, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < npart; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }
//
//  List conjugates.
//
  cout << "\n";
  cout << "  Repeat, but list RSF conjugated partitions.\n";
  cout << "\n";

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    partn_successor ( n, nmax, npart, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    b = part_sf_conjugate ( n, npart, t, npart2 );

    i4vec_reverse ( npart2, b );

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < npart2; i++ )
    {
      cout << "  " << setw(4) << b[i];
    }
    cout << "\n";
    delete [] b;
  }

  delete [] t;

  return;
}
//****************************************************************************80

void perm_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_CHECK_TEST tests PERM_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int n;
  int s1[5] = { 5, 1, 8, 3, 4 };
  int s2[5] = { 5, 1, 4, 3, 4 };
  int s3[5] = { 5, 1, 2, 3, 4 };
  int *s;
  int test;

  cout << "\n";
  cout << "PERM_CHECK TEST\n";
  cout << "  PERM_CHECK checks a permutation.\n";
  
  for ( test = 1; test <= 3; test++ )
  {
    if ( test == 1 )
    {
      n = 5;
      s = i4vec_copy_new ( n, s1 );
    }
    else if ( test == 2 )
    {
      n = 5;
      s = i4vec_copy_new ( n, s2 );
    }
    else if ( test == 3 )
    {
      n = 5;
      s = i4vec_copy_new ( n, s3 );
    }

    check = perm_check ( n, s );
    i4vec_transpose_print ( n, s, "  Permutation:" );
    cout << "  Check = " << check << "\n";
    delete [] s; 
  }
  return;
}
//****************************************************************************80

void perm_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_ENUM_TEST tests PERM_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int perm_num;

  cout << "\n";
  cout << "PERM_ENUM_TEST\n";
  cout << "  PERM_ENUM enumerates permutations of N items.\n";

  for ( n = 0; n <= 10; n++ )
  {
    perm_num = perm_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(6) << perm_num << "\n";
  }

  return;
}
//****************************************************************************80

void perm_to_cycle_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_TO_CYCLE_TEST tests PERM_TO_CYCLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int jlo;
  int *index;
  int n = 7;
  int ncycle;
  int nperm;
  int p[7] = { 4, 5, 1, 2, 3, 6, 7 };
  int rank;
  int *t;

  cout << "\n";
  cout << "PERM_TO_CYCLE_TEST\n";
  cout << "  PERM_TO_CYCLE converts a permutation from\n";
  cout << "  array to cycle form.\n";

  perm_print ( n, p, "  Permutation:" );
//
//  Convert the permutation to cycle form.
//
  t = new int[n];
  index = new int[n];

  perm_to_cycle ( n, p, ncycle, t, index );

  cout << "\n";
  cout << "  Corresponding cycle form:\n";
  cout << "  Number of cycles is " << ncycle << "\n";
  cout << "\n";
  jlo = 0;
  for ( i = 1; i <= ncycle; i++ )
  {
    for ( j = jlo + 1; j <= jlo + index[i-1]; j++ )
    {
      cout << "  " << setw(4) << t[j-1];
    }
    cout << "\n";
    jlo = jlo + index[i-1];
  }

  delete [] index;
  delete [] t;

  return;
}
//****************************************************************************80

void perm_inv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_INV_TEST tests PERM_INV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int p[4] = { 3, 1, 2, 4 };
  int *q;
  int *r;

  cout << "\n";
  cout << "PERM_INV_TEST\n";
  cout << "  PERM_INV computes an inverse permutation,\n";

  perm_print ( n, p, "  The permutation P:" );
//
//  Invert.
//
  q = perm_inv ( n, p );

  perm_print ( n, q, "  The inverse permutation Q:" );
//
//  Multiply.
//
  r = perm_mul ( n, p, q );

  perm_print ( n, r, "  The product R = P * Q:" );

  delete [] q;
  delete [] r;

  return;
}
//****************************************************************************80

void perm_lex_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_LEX_RANK_TEST tests PERM_LEX_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int pi[4] = { 3, 1, 2, 4 };
  int rank;

  cout << "\n";
  cout << "PERM_LEX_RANK_TEST\n";
  cout << "  PERM_LEX_RANK ranks\n";
  cout << "  permutations of the integers,\n";
  cout << "  using the lexicographic ordering:\n";

  perm_print ( n, pi, "  Element to be ranked:" );

  rank = perm_lex_rank ( n, pi );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void perm_lex_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_LEX_SUCCESSOR_TEST tests PERM_LEX_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 4;
  int nperm;
  int *pi;
  int rank;
  int rank_old;

  cout << "\n";
  cout << "PERM_LEX_SUCCESSOR_TEST\n";
  cout << "  PERM_LEX_SUCCESSOR lists\n";
  cout << "  permutations of the integers,\n";
  cout << "  using the lexicographic ordering:\n";

  pi = new int[n];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    perm_lex_successor ( n, pi, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(4) << pi[i];
    }
    cout << "\n";
  }

  delete [] pi;

  return;
}
//****************************************************************************80

void perm_lex_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_LEX_UNRANK_TEST tests PERM_LEX_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int *pi;
  int rank;

  cout << "\n";
  cout << "PERM_LEX_UNRANK_TEST\n";
  cout << "  PERM_LEX_UNRANK unranks\n";
  cout << "  permutations of the integers,\n";
  cout << "  using the lexicographic ordering:\n";

  rank = 12;

  pi = perm_lex_unrank ( rank, n );

  perm_print ( n, pi, "  The element of rank 12:" );

  delete [] pi;

  return;
}
//****************************************************************************80

void perm_mul_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_MUL_TEST tests PERM_MUL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int p[4] = { 3, 1, 2, 4 };
  int q[4] = { 2, 3, 1, 4 };
  int *r;

  cout << "\n";
  cout << "PERM_MUL_TEST\n";
  cout << "  PERM_MUL multiplies two permutations.\n";

  perm_print ( n, p, "  The permutation P:" );

  perm_print ( n, q, "  The permutation Q:" );

  r = perm_mul ( n, p, q );

  perm_print ( n, r, "  The product R = P * Q:" );

  delete [] r;

  return;
}
//****************************************************************************80

void perm_parity_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_PARITY_TEST tests PERM_PARITY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *p;
  int parity;
  int seed;
  int test;

  cout << "\n";
  cout << "PERM_PARITY_TEST\n";
  cout << "  PERM_PARITY computes the parity of a permutation.\n";

  n = 5;
  seed = 123456789;

  for ( test = 1; test <= 5; test++ )
  {
    p = perm_random ( n, seed );
    perm_print ( n, p, "  The permutation P:" );
    parity = perm_parity ( n, p );
    cout << "\n";
    cout << "  The parity is " << parity << "\n";
    delete [] p;
  }

  return;
}
//****************************************************************************80

void perm_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_PRINT_TEST tests PERM_PRINT.
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
  cout << "PERM_PRINT_TEST\n";
  cout << "  PERM_PRINT prints a permutation of (1,...,N).\n";

  perm_print ( n, p, "  The 1-based permutation:" );
  
  return;
}
//****************************************************************************80

void perm_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_RANDOM_TEST tests PERM_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *p;
  int seed;
  int test;

  cout << "\n";
  cout << "PERM_RANDOM_TEST:\n";
  cout << "  PERM_RANDOM randomly selects a permutation of 1, ..., N.\n";

  n = 5;
  seed = 123456789;

  for ( test = 1; test <= 5; test++ )
  {
    p = perm_random ( n, seed );
    i4vec_transpose_print ( n, p, "" );
    delete [] p;
  }

  return;
}
//****************************************************************************80

void perm_tj_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_TJ_RANK_TEST tests PERM_TJ_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int pi[4] = { 4, 3, 2, 1 };
  int rank;

  cout << "\n";
  cout << "PERM_TJ_RANK_TEST\n";
  cout << "  PERM_TJ_RANK ranks permutations of the integers\n";
  cout << "  using the Trotter-Johnson ordering.\n";

  perm_print ( n, pi, "  The element to be ranked:" );

  rank = perm_tj_rank ( n, pi );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void perm_tj_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_TJ_SUCCESSOR_TEST tests PERM_TJ_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 4;
  int *pi;
  int rank;
  int rank_old;

  cout << "\n";
  cout << "PERM_TJ_SUCCESOR_TEST\n";
  cout << "  PERM_TJ_SUCCESSOR lists\n";
  cout << "  permutations of the integers\n";
  cout << "  using the Trotter-Johnson ordering.\n";
 
  pi = new int[n];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    perm_tj_successor ( n, pi, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(4) << pi[i];
    }
    cout << "\n";
  }

  delete [] pi;

  return;
}
//****************************************************************************80

void perm_tj_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_TJ_UNRANK_TEST tests PERM_TJ_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *pi;
  int rank;

  cout << "\n";
  cout << "PERM_TJ_UNRANK_TEST\n";
  cout << "  PERM_TJ_UNRANK unranks\n";
  cout << "  permutations of the integers\n";
  cout << "  using the Trotter-Johnson ordering.\n";

  rank = 12;
  n = 4;

  pi = perm_tj_unrank ( rank, n );

  perm_print ( n, pi, "  The element of rank 12:" );

  delete [] pi;

  return;
}
//****************************************************************************80

void pruefer_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PRUEFER_CHECK_TEST tests PRUEFER_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int i;
  int n;
  int test;
  int *p;
  int p1[0] = { };
  int p2[1] = { 1 };
  int p3[2] = { 5, 2 };
  int p4[3] = { 5, 1, 3 };

  cout << "\n";
  cout << "BAL_SEQ_CHECK TEST\n";
  cout << "  BAL_SEQ_CHECK checks N and T(1:2*N).\n";
  cout << "\n";
  cout << "  Check?   N    T(1:2*N)\n";
  cout << "\n";
  
  for ( test = 1; test <= 4; test++ )
  {
    if ( test == 1 )
    {
      n = 2;
      p = i4vec_copy_new ( n - 2, p1 );
    }
    else if ( test == 2 )
    {
      n = 3;
      p = i4vec_copy_new ( n - 2, p2 );
    }
    else if ( test == 3 )
    {
      n = 4;
      p = i4vec_copy_new ( n - 2, p3 );
    }
    else if ( test == 4 )
    {
      n = 5;
      p = i4vec_copy_new ( n - 2, p4 );
    }
    check = pruefer_check ( n, p );
    cout << "    "
         << "  " << setw(1) << check
         << "  " << setw(2) << n;
    for ( i = 0; i < n - 2; i++ )
    {
      cout << "  " << setw(2) << p[i];
    }
    cout << "\n";

    delete [] p;
  }

  return;
}
//****************************************************************************80

void pruefer_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PRUEFER_ENUM_TEST tests PRUEFER_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n ;
  int pruefer_num;

  cout << "\n";
  cout << "PRUEFER_ENUM_TEST\n";
  cout << "  PRUEFER_ENUM enumerates trees on N nodes, using the Pruefer code.\n";
  cout << "\n";
  cout << "   N           #\n";
  cout << "\n";

  for ( n = 0; n <= 10; n++ )
  {
    pruefer_num = pruefer_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(10) << pruefer_num << "\n";
  }

  return;
}
//****************************************************************************80

void pruefer_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PRUEFER_RANK_TEST tests PRUEFER_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int p[2] = { 3, 1 };
  int rank;

  cout << "\n";
  cout << "PRUEFER_RANK_TEST\n";
  cout << "  PRUEFER_RANK ranks Pruefer codes.\n";

  i4vec_transpose_print ( n - 2, p, "  Element to be ranked:" );

  rank = pruefer_rank ( n, p );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void pruefer_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PRUEFER_SUCCESSOR_TEST tests PRUEFER_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 4;
  int *p;
  int rank;
  int rank_old;

  cout << "\n";
  cout << "PRUEFER_SUCCESSOR_TEST\n";
  cout << "  PRUEFER_SUCCESSOR lists Pruefer codes.\n";

  p = new int[n-2];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    pruefer_successor ( n, p, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < n - 2; i++ )
    {
      cout << "  " << setw(4) << p[i];
    }
    cout << "\n";
  }

  delete [] p;

  return;
}
//****************************************************************************80

void pruefer_to_tree_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PRUEFER_TO_TREE_TEST tests PRUEFER_TO_TREE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i4_hi;
  int i4_lo;
  int j;
  int n = 5;
  int *p;
  int pruefer_num;
  int rank;
  int seed = 123456789;
  int *t;
  int test;
  int test_num = 5;

  cout << "\n";
  cout << "PRUEFER_TO_TREE_TEST\n";
  cout << "  PRUEFER_TO_TREE converts a Pruefer code to a tree;\n";

  pruefer_num = pruefer_enum ( n );

  i4_lo = 0;
  i4_hi = pruefer_num - 1;

  for ( test = 1; test <= test_num; test++ )
  {
//
//  Pick a "random" Pruefer code.
//
    rank = i4_uniform_ab ( i4_lo, i4_hi, seed );

    p = pruefer_unrank ( rank, n );

    cout << "\n";
    cout << "  Random Pruefer code of rank " << rank << "\n";
    i4vec_transpose_print ( n - 2, p, "" );
//
//  Convert the Pruefer code to a tree.
//
    t = pruefer_to_tree_new ( n, p );

    cout << "\n";
    cout << "  Edge list for the corresponding tree:\n";
    cout << "\n";
    for ( j = 0; j < n - 1; j++ )
    {
      cout << "  " << setw(2) << j
           << "  " << setw(4) << t[0+j*2]
           << "  " << setw(4) << t[1+j*2] << "\n";
    }
//
//  Convert the tree to a Pruefer code.
//
    delete [] p;

    p = tree_to_pruefer ( n, t );

    cout << "\n";
    i4vec_transpose_print ( n - 2, p, "  Pruefer code:" );

    delete [] p;
    delete [] t;
  }
  return;
}
//****************************************************************************80

void pruefer_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PRUEFER_UNRANK_TEST tests PRUEFER_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *p;
  int rank;

  cout << "\n";
  cout << "PRUEFER_UNRANK_TEST\n";
  cout << "  PRUEFER_UNRANK unranks Pruefer codes.\n"; 

  rank = 8;
  n = 4;

  p = pruefer_unrank ( rank, n );

  i4vec_transpose_print ( n - 2, p, "  The element of rank 8:" );

  delete [] p;

  return;
}
//****************************************************************************80

void queens_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    QUEENS_TEST tests QUEENS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 8

  int iarray[N];
  int indx;
  int istack[N*N];
  int k;
  int n = N;
  int maxstack = N * N;
  int nstack;

  cout << "\n";
  cout << "QUEENS_TEST\n";
  cout << "  QUEENS produces nonattacking queens\n";
  cout << "  on a chessboard using a backtrack search.\n";
  cout << "\n";

  indx = 0;

  for ( ; ; )
  {
    backtrack ( n, iarray, indx, k, nstack, istack, maxstack );

    if ( indx == 1 )
    {
      i4vec_transpose_print ( n, iarray, "" );
    }
    else if ( indx == 2 )
    {
      queens ( n, iarray, k, nstack, istack, maxstack );
    }
    else
    {
      break;
    }
  }

  return;
# undef N
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
//    26 July 2014
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
  cout << "         N         K       CNK\n";
 
  for ( n = 0; n <= 5; n++ )
  {
    cout << "\n";
    for ( k = 0; k <= n; k++ )
    {
      cnk = r8_choose ( n, k );
      cout << setw(10) << n << "  "
           << setw(8) << k << "  "
           << setw(14) << cnk << "\n";
    }
  }
 
  return;
}
//****************************************************************************80

void r8_gamma_log_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMMA_LOG_TEST tests R8_GAMMA_LOG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 April 2013
//
//  Author:
//
//    John Burkardt
//
{
  double fx1;
  double fx2;
  int n_data;
  streamsize ss;
  double x;
//
//  Save the current precision.
//
  ss = cout.precision ( );

  cout << "\n";
  cout << "R8_GAMMA_LOG_TEST:\n";
  cout << "   R8_GAMMA_LOG evaluates the logarithm of the Gamma function.\n";
  cout << "\n";
  cout << "      X            GAMMA_LOG(X)     R8_GAMMA_LOG(X)\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_log_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }
    fx2 = r8_gamma_log ( x );
    cout << "  " << setw(12)                     << x
         << "  " << setw(24) << setprecision(16) << fx1
         << "  " << setw(24) << setprecision(16) << fx2 << "\n";
  }

//
//  Restore the default precision.
//
  cout.precision ( ss );

  return;
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
    r8vec_backtrack ( n, maxstack, stacks, x, indx, k, nstack, ncan );

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

void rgf_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RGF_CHECK_TEST tests RGF_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int *f;
  int f1[1] = { -1 };
  int f2[7] = { 0, 1, 2, 3, 4, 5, 6 };
  int f3[7] = { 1, 3, 5, 8, 9, 10, 12 };
  int f4[7] = { 1, 2, 3, 1, 4, 5, 4 };
  int m;
  int test;

  cout << "\n";
  cout << "RGF_CHECK TEST\n";
  cout << "  RGF_CHECK checks a restricted growth function.\n";

  for ( test = 1; test <= 4; test++ )
  {
    if ( test == 1 )
    {
      m = 2;
      f = i4vec_copy_new ( m, f1 );
    }
    else if ( test == 2 )
    {
      m = 7;
      f = i4vec_copy_new ( m, f2 );
    }
    else if ( test == 3 )
    {
      m = 7;
      f = i4vec_copy_new ( m, f3 );
    }
    else if ( test == 4 )
    {
      m = 7;
      f = i4vec_copy_new ( m, f4 );
    }
    cout << "\n";
    i4vec_transpose_print ( m, f, "  RGF:" );
    check = rgf_check ( m, f );
    cout << "  CHECK = " << check << "\n";
    delete [] f;
  }

  return;
}
//****************************************************************************80

void rgf_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RGF_ENUM_TEST tests RGF_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int rgf_num;

  cout << "\n";
  cout << "RGF_ENUM_TEST\n";
  cout << "  RGF_ENUM enumerates restricted growth functions.\n";
  cout << "\n";
  cout << "   N   #\n";
  cout << "\n";

  for ( n = 0; n <= 10; n++ )
  {
    rgf_num = rgf_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(6) << rgf_num << "\n";
  }

  return;
}
//****************************************************************************80

void rgf_g_table_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RGF_G_TABLE_TEST tests RGF_G_TABLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int *d;
  int i;
  int j;
  int m = 6;

  cout << "\n";
  cout << "RGF_G_TABLE_TEST\n";
  cout << "  RGF_G_TABLE tabulates generalized restricted\n";
  cout << "  growth functions.\n";
  cout << "\n";

  d = rgf_g_table ( m );

  for ( i = 0; i <= m; i++ )
  {
    for ( j = 0; j <= m - i; j++ )
    {
      cout << "  " << setw(4) << d[i+j*(m+1)];
    }
    cout << "\n";
  }

  delete [] d;

  return;
}
//****************************************************************************80

void rgf_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RGF_RANK_TEST tests RGF_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int f[4] = { 1, 2, 1, 3 };
  int m = 4;
  int rank;

  cout << "\n";
  cout << "RGF_RANK_TEST\n";
  cout << "  RGF_RANK ranks restricted growth functions:\n";

  i4vec_transpose_print ( m, f, "  Element to be ranked:" );

  rank = rgf_rank ( m, f );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void rgf_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RGF_SUCCESSOR_TEST tests RGF_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int *f;
  int i;
  int m = 4;
  int nrgf;
  int rank;
  int rank_old;

  cout << "\n";
  cout << "RGF_SUCCESSOR_TEST\n";
  cout << "  RGF_SUCCESSOR lists restricted growth functions:\n";

  f = new int[m];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    rgf_successor ( m, f, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(4) << f[i];
    }
    cout << "\n";
  }

  delete [] f;

  return;
}
//****************************************************************************80

void rgf_to_setpart_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RGF_TO_SETPART_TEST tests RGF_TO_SETPART.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int jlo;
  int f[8]= { 1, 1, 1, 1, 1, 2, 1, 3 };
  int *index;
  int m = 8;
  int nsub;
  int rank;
  int *s;

  cout << "\n";
  cout << "RGF_TO_SETPART_TEST\n";
  cout << "  RGF_TO_SETPART converts a restricted growth function\n";
  cout << "  to a set partition;\n";

  i4vec_transpose_print ( m, f, "  Restricted growth function:" );
//
//  Convert the RGF to a set partition.
//
  s = new int[m];
  index = new int[m];

  rgf_to_setpart ( m, f, nsub, s, index );

  cout << "\n";
  cout << "  Corresponding set partition\n";
  cout << "\n";
  jlo = 1;
  for ( i = 1; i <= nsub; i++ )
  {
    for ( j = jlo; j <= index[i-1]; j++ )
    {
      cout << "  " << setw(4) << s[j-1];
    }
    cout << "\n";
    jlo = index[i-1] + 1;
  }

  delete [] index;
  delete [] s;

  return;
}
//****************************************************************************80

void rgf_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RGF_UNRANK_TEST tests RGF_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int *f;
  int m;
  int rank;

  cout << "\n";
  cout << "RGF_UNRANK_TEST\n";
  cout << "  RGF_UNRANK unranks restricted growth functions:\n";

  rank = 7;
  m = 4;

  f = rgf_unrank ( rank, m );

  cout << "\n";
  cout << "  The element of rank " << rank << "\n";
  cout << "\n";
  i4vec_transpose_print ( m, f, "" );

  delete [] f;

  return;
}
//****************************************************************************80

void setpart_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SETPART_CHECK_TEST tests SETPART_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int i;
  int *index;
  int index1[3] = { 2, 5, 8 };
  int index2[3] = { 2, 5, 8 };
  int index3[3] = { 2, 8, 5 };
  int index4[3] = { 2, 5, 8 };
  int index5[3] = { 2, 5, 8 };
  int index6[3] = { 2, 5, 8 };
  int j;
  int jlo;
  int m;
  int nsub;
  int *s;
  int s1[8] = { 3, 6, 1, 4, 7, 2, 5, 8 };
  int s2[8] = { 3, 6, 1, 4, 7, 2, 5, 8 };
  int s3[8] = { 3, 6, 1, 4, 7, 2, 5, 8 };
  int s4[8] = { 3, 6, 1, 4, 9, 2, 5, 8 };
  int s5[8] = { 3, 6, 1, 4, 6, 2, 5, 8 };
  int s6[8] = { 3, 6, 1, 4, 7, 2, 5, 8 };
  int test;

  cout << "\n";
  cout << "SETPART_CHECK TEST\n";
  cout << "  SETPART_CHECK checks a set partition.\n";

  for ( test = 1; test <= 6; test++ )
  {
    if ( test == 1 )
    {
      m = 0;
      nsub = 3;
      s = i4vec_copy_new ( 8, s1 );
      index = i4vec_copy_new ( nsub, index1 );
    }
    else if ( test == 2 )
    {
      m = 8;
      nsub = 0;
      s = i4vec_copy_new ( m, s2 );
      index = i4vec_copy_new ( 3, index2 );
    }
    else if ( test == 3 )
    {
      m = 8;
      nsub = 3;
      s = i4vec_copy_new ( m, s3 );
      index = i4vec_copy_new ( nsub, index3 );
    }
    else if ( test == 4 )
    {
      m = 8;
      nsub = 3;
      s = i4vec_copy_new ( m, s4 );
      index = i4vec_copy_new ( nsub, index4 );
    }
    else if ( test == 5 )
    {
      m = 8;
      nsub = 3;
      s = i4vec_copy_new ( m, s5 );
      index = i4vec_copy_new ( nsub, index5 );
    }
    else if ( test == 6 )
    {
      m = 8;
      nsub = 3;
      s = i4vec_copy_new ( m, s6 );
      index = i4vec_copy_new ( nsub, index6 );
    }
    cout << "\n";
    cout << "  The set partition:\n";
    cout << "  M = " << m << "\n";
    cout << "  NSUB = " << nsub << "\n";
    cout << "\n";
    jlo = 0;
    for ( i = 0; i < nsub; i++ )
    {
      for ( j = jlo; j <= index[i] - 1; j++ )
      {
        cout << "  " << s[j];
      }
      cout << "\n";
      jlo = index[i];
    }

    check = setpart_check ( m, nsub, s, index );
    cout << "  CHECK = " << check << "\n";
    delete [] index;
    delete [] s;
  }

  return;
}
//****************************************************************************80

void setpart_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SETPART_ENUM_TEST tests SETPART_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int npart;

  cout << "\n";
  cout << "SETPART_ENUM_TEST\n";
  cout << "  SETPART_ENUM enumerates set partitions.\n";
  cout << "\n";
//
//  Enumerate.
//
  for ( n = 1; n <= 6; n++ )
  {
    npart = setpart_enum ( n );
    cout << "  " << setw(4) << n
         << "  " << setw(4) << npart << "\n";
  }

  return;
}
//****************************************************************************80

void setpart_to_rgf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SETPART_TO_RGF_TEST tests SETPART_TO_RGF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int jlo;
  int *f;
  int index[3] = { 6, 7, 8 };
  int m = 8;
  int nsub = 3;
  int rank;
  int s[8] = { 1, 2, 3, 4, 5, 7, 6, 8 };

  cout << "\n";
  cout << "SETPART_TO_RGF_TEST\n";
  cout << "  SETPART_TO_RGF converts a set partition to a\n";
  cout << "  restricted growth function.\n";

  cout << "\n";
  cout << "  Set partition\n";
  cout << "\n";
  jlo = 1;
  for ( i = 1; i <= nsub; i++ )
  {
    for ( j = jlo; j <= index[i-1]; j++ )
    {
      cout << "  " << setw(4) << s[j-1];
    }
    cout << "\n";
    jlo = index[i-1] + 1;
  }
//
//  Convert the set partition to an RGF.
//
  f = setpart_to_rgf ( m, nsub, s, index );

  i4vec_transpose_print ( m, f, "  Corresponding RGF:" );

  delete [] f;

  return;
}
//****************************************************************************80

void stirling_numbers1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    STIRLING_NUMBERS1_TEST tests STIRLING_NUMBERS1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int maxm = 6;
  int maxn = 6;
  int *s;

  cout << "\n";
  cout << "STIRLING_NUMBERS1_TEST\n";
  cout << "  STIRLING_NUMBERS1 computes a table of Stirling\n";
  cout << "  numbers of the first kind.\n";

  s = stirling_numbers1 ( maxm, maxn );

  i4mat_print ( maxm + 1, maxn + 1, s, "  Stirling number of first kind" ); 

  delete [] s;

  return;
}
//****************************************************************************80

void stirling_numbers2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    STIRLING_NUMBERS2_TEST tests STIRLING_NUMBERS2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  int maxm = 6;
  int maxn = 6;
  int *s;

  cout << "\n";
  cout << "STIRLING_NUMBERS2_TEST\n";
  cout << "  STIRLING_NUMBERS2 computes a table of Stirling\n";
  cout << "  numbers of the second kind.\n";

  s = stirling_numbers2 ( maxm, maxn );

  i4mat_print ( maxm + 1, maxn + 1, s, "  Stirling number of second kind" ); 

  delete [] s;

  return;
}
//****************************************************************************80

void subset_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_CHECK_TEST tests SUBSET_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 January 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int n;
  int *s;
  int s1[0] = {};
  int s2[3] = { 1, 2, 0 };
  int s3[5] = { 1, 0, 0, 1, 0 };
  int test;

  cout << "\n";
  cout << "SUBSET_CHECK TEST\n";
  cout << "  SUBSET_CHECK checks a subset.\n";
  
  for ( test = 1; test <= 3; test++ )
  {
    if ( test == 1 )
    {
      n = 0;
      s = i4vec_copy_new ( n, s1 );
    }
    else if ( test == 2 )
    {
      n = 3;
      s = i4vec_copy_new ( n, s2 );
    }
    else if ( test == 3 )
    {
      n = 5;
      s = i4vec_copy_new ( n, s3 );
    }

    check = subset_check ( n, s );
    i4vec_transpose_print ( n, s, "  Subset:" );
    cout << "  Check = " << check << "\n";
    delete [] s;
  }

  return;
}
//****************************************************************************80

void subset_colex_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_COLEX_RANK_TEST tests SUBSET_COLEX_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 5;
  int rank;
  int t[5] = { 0, 1, 0, 1, 0 };

  cout << "\n";
  cout << "SUBSET_COLEX_RANK_TEST\n";
  cout << "  SUBSET_COLEX_RANK ranks subsets of a set,\n";
  cout << "  using the colexicographic ordering.\n";

  i4vec_transpose_print ( n, t, "  Element to be ranked:" );

  rank = subset_colex_rank ( n, t );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void subset_colex_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_COLEX_SUCCESSOR_TEST tests SUBSET_COLEX_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 5;
  int nsub;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "SUBSET_COLEX_SUCCESSOR_TEST\n";
  cout << "  SUBSET_COLEX_SUCCESSOR lists subsets of a set,\n";
  cout << "  using the colexicographic ordering.\n";

  t = new int[n];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    subset_colex_successor ( n, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void subset_colex_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_COLEX_UNRANK_TEST tests SUBSET_COLEX_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int rank;
  int *t;

  cout << "\n";
  cout << "SUBSET_COLEX_UNRANK_TEST\n";
  cout << "  SUBSET_COLEX_UNRANK unranks subsets of a set,\n";
  cout << "  using the colexicographic ordering.\n";

  rank = 10;
  n = 5;

  t = subset_colex_unrank ( rank, n );

  i4vec_transpose_print ( n, t, "  The element of rank 10:" );

  delete [] t;

  return;
}
//****************************************************************************80

void subset_complement_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_COMPLEMENT_TEST tests SUBSET_COMPLEMENT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *s1;
  int *s2;
  int seed;

  cout << "\n";
  cout << "SUBSET_COMPLEMENT_TEST\n";
  cout << "  SUBSET_COMPLEMENT returns the complement of a subset.\n";
  cout << "\n";
  n = 5;
  seed = 123456789;

  s1 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s1, "  Subset S1:            " );

  s2 = subset_complement ( n, s1 );
  i4vec_transpose_print ( n, s2, "  S2 = complement of S1:" );

  delete [] s1;
  delete [] s2;

  return;
}
//****************************************************************************80

void subset_distance_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_DISTANCE_TEST tests SUBSET_DISTANCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int distance;
  int n;
  int *s1;
  int *s2;
  int seed;

  cout << "\n";
  cout << "SUBSET_DISTANCE_TEST\n";
  cout << "  SUBSET_DISTANCE returns the distance between two subsets.\n";
  cout << "\n";

  n = 5;
  seed = 123456789;

  s1 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s1, "  Subset S1:" );

  s2 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s2, "  Subset S2:" );

  distance = subset_distance ( n, s1, s2 );
  cout << "\n";
  cout << "  Distance = " << distance << "\n";

  delete [] s1;
  delete [] s2;

  return;
}
//****************************************************************************80

void subset_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_ENUM_TEST tests SUBSET_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int subset_num;

  cout << "\n";
  cout << "SUBSET_ENUM_TEST\n";
  cout << "  SUBSET_ENUM enumerates subsets of a set of N items.\n";
  cout << "\n";

  for ( n = 0; n <= 10; n++ )
  {
    subset_num = subset_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(6) << subset_num << "\n";
  }

  return;
}
//****************************************************************************80

void subset_intersect_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_INTERSECT_TEST tests SUBSET_INTERSECT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *s1;
  int *s2;
  int *s3;
  int seed;

  cout << "\n";
  cout << "SUBSET_INTERSECT_TEST\n";
  cout << "  SUBSET_INTERSECT returns the intersection of two subsets.\n";
  cout << "\n";

  n = 7;
  seed = 123456789;

  s1 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s1, "  Subset S1:" );

  s2 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s2, "  Subset S2:" );

  s3 = subset_intersect ( n, s1, s2 );
  i4vec_transpose_print ( n, s3, "  Intersect:" );

  delete [] s1;
  delete [] s2;
  delete [] s3;

  return;
}
//****************************************************************************80

void subset_lex_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_LEX_RANK_TEST tests SUBSET_LEX_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int rank;
  int t[5] = { 0, 1, 0, 1, 0 };

  cout << "\n";
  cout << "SUBSET_LEX_RANK_TEST\n";
  cout << "  SUBSET_LEX_RANK ranks subsets of a set,\n";
  cout << "  using the lexicographic ordering.\n";

  n = 5;
  i4vec_transpose_print ( n, t, "  Element to be ranked:" );

  rank = subset_lex_rank ( n, t );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void subset_lex_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_LEX_SUCCESSOR_TEST tests SUBSET_LEX_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 5;
  int nsub;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "SUBSET_LEX_SUCCESSOR_TEST\n";
  cout << "  SUBSET_LEX_SUCCESSOR lists,\n";
  cout << "  subsets of a set,\n";
  cout << "  using the lexicographic ordering,\n";

  t = new int[n];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    subset_lex_successor ( n, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }

    cout << "  " << setw(4) << rank;
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(4) << t[i];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void subset_lex_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_LEX_UNRANK_TEST tests SUBSET_LEX_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 5;
  int rank;
  int *t;

  cout << "\n";
  cout << "SUBSET_LEX_UNRANK_TEST\n";
  cout << "  SUBSET_LEX_UNRANK unranks\n";
  cout << "  subsets of a set,\n";
  cout << "  using the lexicographic ordering:\n";

  rank = 10;

  t = subset_lex_unrank ( rank, n );

  i4vec_transpose_print ( n, t, "  The element of rank 10:" );

  delete [] t;

  return;
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
//    25 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int *s;
  int seed;

  cout << "\n";
  cout << "SUBSET_RANDOM_TEST\n";
  cout << "  SUBSET_RANDOM returns a random subset.\n";

  n = 5;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    s = subset_random ( n, seed );
    i4vec_transpose_print ( n, s, "  Subset:" );
    delete [] s;
  }

  return;
}
//****************************************************************************80

void subset_union_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_UNION_TEST tests SUBSET_UNION.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *s1;
  int *s2;
  int *s3;
  int seed;

  cout << "\n";
  cout << "SUBSET_UNION_TEST\n";
  cout << "  SUBSET_UNION returns the union of two subsets.\n";
  cout << "\n";

  n = 7;
  seed = 123456789;

  s1 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s1, "  Subset S1:" );

  s2 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s2, "  Subset S2:" );

  s3 = subset_union ( n, s1, s2 );
  i4vec_transpose_print ( n, s3, "  Union:    " );

  delete [] s1;
  delete [] s2;
  delete [] s3;

  return;
}
//****************************************************************************80

void subset_weight_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_WEIGHT_TEST tests SUBSET_WEIGHT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *s;
  int seed;
  int weight;

  cout << "\n";
  cout << "SUBSET_WEIGHT_TEST\n";
  cout << "  SUBSET_WEIGHT returns the weight of a subset.\n";

  n = 5;
  seed = 123456789;

  s = subset_random ( n, seed );
  i4vec_transpose_print ( n, s, "  Subset S:" );

  weight = subset_weight ( n, s );
  cout << "\n";
  cout << "  Weight = " << weight << "\n";

  delete [] s;

  return;
}
//****************************************************************************80

void subset_xor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSET_XOR_TEST tests SUBSET_XOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int *s1;
  int *s2;
  int *s3;
  int seed;

  cout << "\n";
  cout << "SUBSET_XOR_TEST\n";
  cout << "  SUBSET_XOR returns the exclusive OR of two subsets.\n";
  cout << "\n";

  n = 7;
  seed = 123456789;

  s1 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s1, "  Subset S1:" );

  s2 = subset_random ( n, seed );
  i4vec_transpose_print ( n, s2, "  Subset S2:" );

  s3 = subset_xor ( n, s1, s2 );
  i4vec_transpose_print ( n, s3, "  XOR:      " );

  delete [] s1;
  delete [] s2;
  delete [] s3;

  return;
}
//****************************************************************************80

void subsetsumswap_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SUBSETSUMSWAP_TEST tests SUBSETSUM_SWAP.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 July 2011
//
//  Author:
//
//    John Burkardt
//
{
# define N 7

  int a[N] = { 12, 8, 11, 30, 8, 3, 7 };
  int i;
  int index[N];
  int n = N;
  int sum_achieved;
  int sum_desired = 17;

  cout << "\n";
  cout << "SUBSETSUMSWAP_TEST\n";
  cout << "  SUBSETSUM_SWAP seeks a solution of the subset\n";
  cout << "  sum problem using pair swapping.\n";
  cout << "\n";
  cout << "  The desired sum is " << sum_desired << "\n";

  sum_achieved = subsetsum_swap ( n, a, sum_desired, index );

  cout << "\n";
  cout << "    A(I), INDEX(I)\n";
  cout << "\n";

  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(5) << a[i]
         << "  " << setw(5) << index[i] << "\n";
  }

  cout << "\n";
  cout << "  The achieved sum is " << sum_achieved << "\n";

  return;
# undef N
}
//****************************************************************************80

void tableau_check_test ( )

//****************************************************************************80
//
// TABLEAU_CHECK_TEST tests TABLEAU_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int n;
  int *t;
  int t1[2*0] = {};
  int t2[2*4] = {
    1, 2,
    2, 4,
    3, 7,
    4, 9 };
  int t3[2*4] = {
    1, 2,
    3, 4,
    5, 5,
    3, 3 };
  int t4[2*4] = {
    1, 2,
    3, 4,
    4, 5,
    5, 3};
  int t5[2*4] = {
    1, 3,
    3, 4,
    6, 7,
    7, 8 };
  int test;

  cout << "\n";
  cout << "TABLEAU_CHECK TEST\n";
  cout << "  TABLEAU_CHECK checks a 2xN tableau.\n";
  cout << "\n";
  cout << "  Check?\n";
  cout << "\n";
  
  for ( test = 1; test <= 5; test++ )
  {
    if ( test == 1 )
    {
      n = 0;
      t = i4mat_copy_new ( 2, n, t1 );
    }
    else if ( test == 2 )
    {
      n = 4;
      t = i4mat_copy_new ( 2, n, t2 );
    }
    else if ( test == 3 )
    {
      n = 4;
      t = i4mat_copy_new ( 2, n, t3 );
    }
    else if ( test == 4 )
    {
      n = 4;
      t = i4mat_copy_new ( 2, n, t4 );
    }
    else if ( test == 5 )
    {
      n = 4;
      t = i4mat_copy_new ( 2, n, t5 );
    }

    cout << "\n";
    check = tableau_check ( n, t );
    cout << "      Check = " << check << "\n";
    i4mat_print ( 2, n, t, "  Tableau:" );
    delete [] t;
  }

  return;
}
//****************************************************************************80

void tableau_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TABLEAU_ENUM_TEST tests TABLEAU_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    23 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int tableau_num;

  cout << "\n";
  cout << "TABLEAU_ENUM_TEST\n";
  cout << "  TABLEAU_ENUM enumerates tableaus on N nodes.\n";

  for ( n = 0; n <= 10; n++ )
  {
    tableau_num = tableau_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(6) << tableau_num << "\n";
  }

  return;
}
//****************************************************************************80

void tableau_to_bal_seq_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TABLEAU_TO_BAL_SEQ_TEST tests TABLEAU_TO_BAL_SEQ.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int rank;
  int *t;
  int tab[2*4] = { 1, 3, 2, 4, 5, 7, 6, 8 };

  cout << "\n";
  cout << "TABLEAU_TO_BAL_SEQ_TEST\n";
  cout << "  TABLEAU_TO_BAL_SEQ converts a tableau\n";
  cout << "  to a balanced sequence.\n";

  i4mat_print ( 2, n, tab, "  Tableau" );

  t = tableau_to_bal_seq ( n, tab );

  i4vec_transpose_print ( 2 * n, t, "  Balanced sequence:" );

  delete [] t;

  return;
}
//****************************************************************************80

void tree_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TREE_CHECK_TEST tests TREE_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int check;
  int i;
  int n;
  int test;
  int *t;
  int t2[2*2] = { 
    1, 2, 
    2, 3 };
  int t3[2*4] = { 
    1, 2, 
    3, 4, 
    4, 5, 
    5, 3 };
  int t4[2*5] = { 
    1, 3, 
    2, 3, 
    3, 4, 
    4, 5, 
    5, 6 };

  cout << "\n";
  cout << "TREE_CHECK TEST\n";
  cout << "  TREE_CHECK checks a tree.\n";
  cout << "\n";
  cout << "  Check?\n";
  cout << "\n";

  for ( test = 1; test <= 4; test++ )
  {
    if ( test == 1 )
    {
      n = 0;
      t = NULL;
    }
    else if ( test == 2 )
    {
      n = 3;
      t = i4vec_copy_new ( 2 * ( n - 1 ), t2 );
    }
    else if ( test == 3 )
    {
      n = 5;
      t = i4vec_copy_new ( 2 * ( n - 1 ), t3 );
    }
    else if ( test == 4 )
    {
      n = 6;
      t = i4vec_copy_new ( 2 * ( n - 1 ), t4 );
    }
    check = tree_check ( n, t );
    cout << "       " << setw(2) << check << "\n";
    i4mat_print ( 2, n - 1, t, "  Tree:" );
    delete [] t;
  }

  return;
}
//****************************************************************************80

void tree_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TREE_ENUM_TEST tests TREE_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int tree_num;

  cout << "\n";
  cout << "TREE_ENUM_TEST\n";
  cout << "  TREE_ENUM enumerates trees on N nodes.\n";

  for ( n = 0; n <= 10; n++ )
  {
    tree_num = tree_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(6) << tree_num << "\n";
  }

  return;
}
//****************************************************************************80

void tree_rank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TREE_RANK_TEST tests TREE_RANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int rank;
  int t[2*3] = {
    4, 3,
    3, 1,
    2, 1 };

  cout << "\n";
  cout << "TREE_RANK_TEST\n";
  cout << "  TREE_RANK ranks trees.\n";


  n = 4;
  i4mat_print ( 2, n - 1, t, "  Tree to be ranked:" );

  rank = tree_rank ( n, t );

  cout << "\n";
  cout << "  Rank is computed as " << rank << "\n";

  return;
}
//****************************************************************************80

void tree_successor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TREE_SUCCESSOR_TEST tests TREE_SUCCESSOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int n = 4;
  int rank;
  int rank_old;
  int *t;

  cout << "\n";
  cout << "TREE_SUCCESSOR_TEST\n";
  cout << "  TREE_SUCCESSOR lists trees.\n";

  t = new int[2*(n-1)];

  rank = -1;

  for ( ; ; )
  {
    rank_old = rank;

    tree_successor ( n, t, rank );

    if ( rank <= rank_old )
    {
      break;
    }
    cout << "  " << setw(4) << rank;
    for ( j = 0; j < n - 1; j++ )
    {
      cout << "  " << setw(4) << t[0+j*2];
    }
    cout << "\n";
    cout << "  " << "    ";
    for ( j = 0; j < n - 1; j++ )
    {
      cout << "  " << setw(4) << t[1+j*2];
    }
    cout << "\n";
  }

  delete [] t;

  return;
}
//****************************************************************************80

void tree_to_pruefer_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TREE_TO_PRUEFER_TEST tests TREE_TO_PRUEFER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i4_hi;
  int i4_lo;
  int j;
  int n = 5;
  int *p;
  int pruefer_num;
  int rank;
  int seed = 123456789;
  int *t;
  int test;
  int test_num = 5;

  cout << "\n";
  cout << "TREE_TO_PRUEFER_TEST\n";
  cout << "  TREE_TO_PRUEFER converts a tree to a Pruefer code.\n";

  pruefer_num = pruefer_enum ( n );

  i4_lo = 0;
  i4_hi = pruefer_num - 1;

  for ( test = 1; test <= test_num; test++ )
  {
//
//  Pick a "random" Pruefer code.
//
    rank = i4_uniform_ab ( i4_lo, i4_hi, seed );

    p = pruefer_unrank ( rank, n );

    cout << "\n";
    cout << "  Random Pruefer code of rank " << rank << "\n";
    i4vec_transpose_print ( n - 2, p, "" );
//
//  Convert the Pruefer code to a tree.
//
    t = pruefer_to_tree_new ( n, p );

    cout << "\n";
    cout << "  Edge list for the corresponding tree:\n";
    cout << "\n";
    for ( j = 0; j < n - 1; j++ )
    {
      cout << "  " << setw(2) << j
           << "  " << setw(4) << t[0+j*2]
           << "  " << setw(4) << t[1+j*2] << "\n";
    }
//
//  Convert the tree to a Pruefer code.
//
    delete [] p;

    p = tree_to_pruefer ( n, t );

    cout << "\n";
    i4vec_transpose_print ( n - 2, p, "  Pruefer code:" );

    delete [] p;
    delete [] t;
  }
  return;
}
//****************************************************************************80

void tree_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TREE_UNRANK_TEST tests TREE_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int rank;
  int *t;

  cout << "\n";
  cout << "TREE_UNRANK_TEST\n";
  cout << "  TREE_UNRANK unranks trees.\n";

  rank = 8;
  n = 4;

  t = tree_unrank ( rank, n );

  i4mat_print ( 2, n - 1, t, "  The tree of rank 8:" );

  delete [] t;

  return;
}
