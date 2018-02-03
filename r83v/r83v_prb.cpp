# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83v.hpp"

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_PRB tests the R83V library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R83V_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R83V library.\n";

  i4_log_10_test ( );
  i4_max_test ( );
  i4_min_test ( );
  i4_power_test ( );
  i4_uniform_ab_test ( );

  r8_uniform_01_test ( );

  r83_indicator_test ( );
  r83_print_test ( );
  r83_print_some_test ( );

  r83v_cg_test ( );
  r83v_copy_test ( );
  r83v_cr_fa_test ( );
  r83v_cr_sl_test ( );
  r83v_cr_sls_test ( );
  r83v_dif2_test ( );
  r83v_fs_test ( );
  r83v_gs_sl_test ( );
  r83v_indicator_test ( );
  r83v_jac_sl_test ( );
  r83v_mtv_test ( );
  r83v_mv_test ( );
  r83v_print_test ( );
  r83v_print_some_test ( );
  r83v_random_test ( );
  r83v_res_test ( );
  r83v_to_r8ge_test ( );
  r83v_to_r8vec_test ( );
  r83v_transpose_test ( );
  r83v_zeros_test ( );

  r8ge_indicator_test ( );
  r8ge_mtv_test ( );
  r8ge_mv_test ( );
  r8ge_print_test ( );
  r8ge_print_some_test ( );
  r8ge_to_r83v_test ( );

  r8vec_dot_product_test ( );
  r8vec_indicator1_new_test ( );
  r8vec_norm_test ( );
  r8vec_norm_affine_test ( );
  r8vec_print_test ( );
  r8vec_to_r83v_test ( );
  r8vec_uniform_01_test ( );
  r8vec_uniform_01_new_test ( );

  r8vec2_print_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R83V_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}

