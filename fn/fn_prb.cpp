# include <cmath>
# include <complex>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <iostream>

using namespace std;

# include "fn.hpp"
# include "test_values.hpp"

int main ( );
void i4_mach_test ( );
void r8_acos_test ( );
void r8_acosh_test ( );
void r8_ai_test ( );
void r8_aid_test ( );
void r8_aint_test ( );
void r8_asin_test ( );
void r8_asinh_test ( );
void r8_atan_test ( );
void r8_atan2_test ( );
void r8_atanh_test ( );
void r8_besi0_test ( );
void r8_besi1_test ( );
void r8_besj0_test ( );
void r8_besj1_test ( );
void r8_besk0_test ( );
void r8_besk1_test ( );
void r8_besy0_test ( );
void r8_besy1_test ( );
void r8_beta_test ( );
void r8_betai_test ( );
void r8_bi_test ( );
void r8_bid_test ( );
void r8_binom_test ( );
void r8_cbrt_test ( );
void r8_chi_test ( );
void r8_chu_test ( );
void r8_ci_test ( );
void r8_cin_test ( );
void r8_cinh_test ( );
void r8_cos_test ( );
void r8_cos_deg_test ( );
void r8_cosh_test ( );
void r8_cot_test ( );
void r8_csevl_test ( );
void r8_dawson_test ( );
void r8_e1_test ( );
void r8_ei_test ( );
void r8_erf_test ( );
void r8_erfc_test ( );
void r8_exp_test ( );
void r8_fac_test ( );
void r8_gamic_test ( );
void r8_gamit_test ( );
void r8_gaml_test ( );
void r8_gamma_test ( );
void r8_gamr_test ( );
void r8_inits_test ( );
void r8_int_test ( );
void r8_lbeta_test ( );
void r8_lgams_test ( );
void r8_lgmc_test ( );
void r8_li_test ( );
void r8_lngam_test ( );
void r8_lnrel_test ( );
void r8_log_test ( );
void r8_log10_test ( );
void r8_mach_test ( );
void r8_pak_test ( );
void r8_poch_test ( );
void r8_psi_test ( );
void r8_rand_test ( );
void r8_randgs_test ( );
void r8_random_test ( );
void r8_ren_test ( );
void r8_shi_test ( );
void r8_si_test ( );
void r8_sin_test ( );
void r8_sin_deg_test ( );
void r8_sinh_test ( );
void r8_spence_test ( );
void r8_sqrt_test ( );
void r8_tan_test ( );
void r8_tanh_test ( );
void r8_upak_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for FN_PRB.
//
//  Discussion:
//
//    FN_PRB tests the FN library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "FN_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the FN library.\n";

  i4_mach_test ( );
  r8_acos_test ( );
  r8_acosh_test ( );
  r8_ai_test ( );
  r8_aid_test ( );
  r8_aint_test ( );
  r8_asin_test ( );
  r8_asinh_test ( );
  r8_atan_test ( );
  r8_atan2_test ( );
  r8_atanh_test ( );
  r8_besi0_test ( );
  r8_besi1_test ( );
  r8_besj0_test ( );
  r8_besj1_test ( );
  r8_besk0_test ( );
  r8_besk1_test ( );
  r8_besy0_test ( );
  r8_besy1_test ( );
  r8_beta_test ( );
  r8_betai_test ( );
  r8_bi_test ( );
  r8_bid_test ( );
  r8_binom_test ( );
  r8_cbrt_test ( );
  r8_chi_test ( );
  r8_chu_test ( );
  r8_ci_test ( );
  r8_cin_test ( );
  r8_cinh_test ( );
  r8_cos_test ( );
  r8_cos_deg_test ( );
  r8_cosh_test ( );
  r8_cot_test ( );
  r8_csevl_test ( );
  r8_dawson_test ( );
  r8_e1_test ( );
  r8_ei_test ( );
  r8_erf_test ( );
  r8_erfc_test ( );
  r8_exp_test ( );
  r8_fac_test ( );
  r8_gamic_test ( );
  r8_gamit_test ( );
  r8_gaml_test ( );
  r8_gamma_test ( );
  r8_gamr_test ( );
  r8_inits_test ( );
  r8_int_test ( );
  r8_lbeta_test ( );
  r8_lgams_test ( );
  r8_lgmc_test ( );
  r8_li_test ( );
  r8_lngam_test ( );
  r8_lnrel_test ( );
  r8_log_test ( );
  r8_log10_test ( );
  r8_mach_test ( );
  r8_pak_test ( );
  r8_poch_test ( );
  r8_psi_test ( );
  r8_rand_test ( );
  r8_randgs_test ( );
  r8_random_test ( );
  r8_ren_test ( );
  r8_shi_test ( );
  r8_si_test ( );
  r8_sin_test ( );
  r8_sin_deg_test ( );
  r8_sinh_test ( );
  r8_spence_test ( );
  r8_sqrt_test ( );
  r8_tan_test ( );
  r8_tanh_test ( );
  r8_upak_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "FN_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void i4_mach_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MACH_TEST tests I4_MACH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;

  cout << "\n";
  cout << "I4_MACH_TEST:\n";
  cout << "  I4_MACH evaluates integer machine numbers.\n";
  cout << "\n";
  cout << "  I4_MACH(1) = the standard input unit.\n";
  cout << "  I4_MACH(2) = the standard output unit.\n";
  cout << "  I4_MACH(3) = the standard punch unit.\n";
  cout << "  I4_MACH(4) = the standard error message unit.\n";
  cout << "  I4_MACH(5) = the number of bits per integer storage unit.\n";
  cout << "  I4_MACH(6) = the number of characters per integer storage unit.\n";
  cout << "  I4_MACH(7) = A, the base.\n";
  cout << "  I4_MACH(8) = S, the number of base A digits.\n";
  cout << "  I4_MACH(9) = A^S-1, the largest integer.\n";
  cout << "  I4_MACH(10) = B, the base.\n";
  cout << "  I4_MACH(11) = T, the number of single precision base B digits.\n";
  cout << "  I4_MACH(12) = EMIN, the smallest single precision exponent E.\n";
  cout << "  I4_MACH(13) = EMAX, the largest single precision exponent E.\n";
  cout << "  I4_MACH(14) = T, the number of double precision base B digits.\n";
  cout << "  I4_MACH(15) = EMIN, the smallest double precision exponent E.\n";
  cout << "  I4_MACH(16) = EMAX, the largest double precision exponent E.\n";
  cout << "\n";
  cout << "    I     I4_MACH(I)\n";
  cout << "\n";

  for ( i = 1; i <= 16; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(12) << i4_mach ( i ) << "\n";
  }

  return;
}
//****************************************************************************80

void r8_acos_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ACOS_TEST tests R8_ACOS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_ACOS_TEST:\n";
  cout << "  R8_ACOS evaluates the arccosine function.\n";
  cout << "\n";
  cout << "             X      ARCCOS(X)  R8_ACOS(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    arccos_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_acos ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_acosh_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ACOSH_TEST tests R8_ACOSH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_ACOSH_TEST:\n";
  cout << "  R8_ACOSH evaluates the hyperbolic arccosine function\n";
  cout << "\n";
  cout << "             X      ARCCOSH(X)  R8_ACOSH(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    arccosh_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_acosh ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_ai_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_AI_TEST tests R8_AI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_AI_TEST:\n";
  cout << "  Test R8_AI.\n";
  cout << "\n";
  cout << "             X   AIRY_AI(X)  R8_AI(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    airy_ai_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_ai ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_aid_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_AID_TEST tests R8_AID.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_AID_TEST:\n";
  cout << "  Test R8_AID.\n";
  cout << "\n";
  cout << "             X   AIRY_AID(X)  R8_AID(X)         Diff\n";

  n_data = 0;

  for ( ; ; )
  {
    airy_ai_prime_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_aid ( x );

    cout << "\n";
    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_aint_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_AINT_TEST tests R8_AINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_AINT_TEST:\n";
  cout << "  R8_AINT rounds an R8 towards 0.\n";
  cout << "\n";
  cout << "             X      AINT(X)  R8_AINT(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    int_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_aint ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_asin_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ASIN_TEST tests R8_ASIN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_ASIN_TEST:\n";
  cout << "  Test R8_ASIN.\n";
  cout << "\n";
  cout << "             X      ARCSIN(X)  R8_ASIN(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    arcsin_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_asin ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_asinh_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ASINH_TEST tests R8_ASINH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_ASINH_TEST:\n";
  cout << "  Test R8_ASINH\n";
  cout << "\n";
  cout << "             X      ARCSINH(X)  R8_ASINH(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    arcsinh_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_asinh ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_atan_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ATAN_TEST tests R8_ATAN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_ATAN_TEST:\n";
  cout << "  Test R8_ATAN.\n";
  cout << "\n";
  cout << "             X      ARCTAN(X)  R8_ATAN(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    arctan_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_atan ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_atan2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ATAN2_TEST tests R8_ATAN2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;
  double y;

  cout << "\n";
  cout << "R8_ATAN2_TEST:\n";
  cout << "  Test R8_ATAN2.\n";
  cout << "\n";
  cout << "             X             Y      ARCTAN2(Y,X)  R8_ATAN2(Y,X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    arctan2_values ( n_data, x, y, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_atan2 ( y, x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << y
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_atanh_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ATANH_TEST tests R8_ATANH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_ATANH_TEST:\n";
  cout << "  Test ARCTANH_VALUES, R4_ATANH, R8_ATANH\n";
  cout << "\n";
  cout << "             X      ARCTANH(X)  R8_ATANH(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    arctanh_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_atanh ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_besi0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BESI0_TEST tests R8_BESI0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BESI0_TEST:\n";
  cout << "  Test R8_BESI0\n";
  cout << "\n";
  cout << "             X      BESI0(X)  R8_BESI0(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_i0_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_besi0 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_besi1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BESI1_TEST tests R8_BESI1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BESI1_TEST:\n";
  cout << "  Test R8_BESI1\n";
  cout << "\n";
  cout << "             X      BESI1(X)  R8_BESI1(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_i1_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_besi1 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_besj0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BESJ0_TEST tests R8_BESJ0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BESJ0_TEST:\n";
  cout << "  Test R8_BESJ0\n";
  cout << "\n";
  cout << "             X      BESJ0(X)  R8_BESJ0(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_j0_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_besj0 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_besj1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BESJ1_TEST tests R8_BESJ1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BESJ1_TEST:\n";
  cout << "  Test R8_BESJ1\n";
  cout << "\n";
  cout << "             X      BESJ1(X)  R8_BESJ1(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_j1_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_besj1 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_besk0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BESK0_TEST tests R8_BESK0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BESK0_TEST:\n";
  cout << "  Test R8_BESK0\n";
  cout << "\n";
  cout << "             X      BESK0(X)  R8_BESK0(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_k0_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_besk0 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_besk1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BESK1_TEST tests R8_BESK1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BESK1_TEST:\n";
  cout << "  Test R8_BESK1\n";
  cout << "\n";
  cout << "             X      BESK1(X)  R8_BESK1(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_k1_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_besk1 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_besy0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BESY0_TEST tests R8_BESY0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BESY0_TEST:\n";
  cout << "  Test R8_BESY0\n";
  cout << "\n";
  cout << "             X      BESY0(X)  R8_BESY0(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_y0_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_besy0 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_besy1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BESY1_TEST tests R8_BESY1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BESY1_TEST:\n";
  cout << "  Test R8_BESY1\n";
  cout << "\n";
  cout << "             X      BESY1(X)  R8_BESY1(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_y1_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_besy1 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_beta_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BETA_TEST tests R8_BETA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double diff;
  double fx1;
  double fx2;
  int n_data;

  cout << "\n";
  cout << "R8_BETA_TEST:\n";
  cout << "  Test R8_BETA.\n";
  cout << "\n";
  cout << "             X        BETA(A,B)  R8_BETA(A,B)       Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    beta_values ( n_data, a, b, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_beta ( a, b );


    cout << "  " << setw(14) << a
         << "  " << setw(14) << b
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_betai_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BETAI_TEST tests R8_BETAI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BETAI_TEST:\n";
  cout << "  Test R8_BETAI.\n";
  cout << "\n";
  cout << "             X        BETA(A,B,X)  R8_BETAI(A,B,X)       Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    beta_inc_values ( n_data, a, b, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_betai ( x, a, b );

    cout << "  " << setw(14) << a
         << "  " << setw(14) << b
         << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_bi_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BI_TEST tests R8_BI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BI_TEST:\n";
  cout << "  Test R8_BI.\n";
  cout << "\n";
  cout << "             X   AIRY_BI(X)  R8_BI(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    airy_bi_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_bi ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_bid_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BID_TEST tests R8_BID.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_BID_TEST:\n";
  cout << "  Test R8_BID.\n";
  cout << "\n";
  cout << "             X   AIRY_BID(X)  R8_BID(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    airy_bi_prime_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_bid ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_binom_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_BINOM_TEST tests R8_BINOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  double diff;
  int fx1;
  double fx2;
  int n_data;

  cout << "\n";
  cout << "R8_BINOM_TEST:\n";
  cout << "  Test R8_BINOM.\n";
  cout << "\n";
  cout << "             X        BINOM(A,B)  R8_BINOM(A,B)       Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    binomial_values ( n_data, a, b, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_binom ( ( double ) a, ( double ) b );

    cout << "  " << setw(14) << a
         << "  " << setw(14) << b
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_cbrt_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CBRT_TEST tests R8_CBRT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_CBRT_TEST:\n";
  cout << "  Test R8_CBRT\n";
  cout << "\n";
  cout << "             X      CBRT(X)  R8_CBRT(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    cbrt_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_cbrt ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_chi_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CHI_TEST tests R8_CHI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_CHI_TEST:\n";
  cout << "  Test R8_CHI.\n";
  cout << "\n";
  cout << "             X      CHI(X)  R8_CHI(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    chi_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_chi ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_chu_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CHU_TEST tests R8_CHU.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_CHU_TEST:\n";
  cout << "  Test R8_CHU.\n";
  cout << "\n";
  cout << "             A               B               X     CHU(A,B,X)  R8_CHU(A,B,X)  Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    hypergeometric_u_values ( n_data, a, b, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_chu ( a, b, x );

    cout << "  " << setw(14) << a
         << "  " << setw(14) << b
         << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }

  return;
}
//****************************************************************************80

void r8_ci_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CI_TEST tests R8_CI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_CI_TEST:\n";
  cout << "  Test R8_CI.\n";
  cout << "\n";
  cout << "             X      CI(X)  R8_CI(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    ci_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_ci ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_cin_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CIN_TEST tests R8_CIN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_CIN_TEST:\n";
  cout << "  Test R8_CIN.\n";
  cout << "\n";
  cout << "             X      CIN(X)  R8_CIN(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    cin_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_cin ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_cinh_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CINH_TEST tests R8_CINH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_CINH_TEST:\n";
  cout << "  Test R8_CINH.\n";
  cout << "\n";
  cout << "             X      CINH(X)  R8_CINH(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    cinh_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_cinh ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_cos_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_COS_TEST tests R8_COS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_COS_TEST:\n";
  cout << "  Test R8_COS.\n";
  cout << "\n";
  cout << "             X      COS(X)  R8_COS(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    cos_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_cos ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_cos_deg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_COS_DEG_TEST tests R8_COS_DEG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_COS_DEG_TEST:\n";
  cout << "  Test R8_COS_DEG.\n";
  cout << "\n";
  cout << "             X      COS_DEG(X)  R8_COS_DEG(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    cos_degree_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_cos_deg ( x );


    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_cosh_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_COSH_TEST tests R8_COSH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_COSH_TEST:\n";
  cout << "  Test R8_COSH\n";
  cout << "\n";
  cout << "             X      COSH(X)  R8_COSH(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    cosh_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_cosh ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_cot_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_COT_TEST tests R8_COT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_COT_TEST:\n";
  cout << "  Test R8_COT.\n";
  cout << "\n";
  cout << "             X      COT(X)  R8_COT(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    cot_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_cot ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_csevl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CSEVL_TEST tests R8_CSEVL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double err;
  int i;
  int k;
  int n;
  const double r8_pi =  3.141592653589793238462643383279503;
  double expcs[15] = {
   2.532131755504016, 
   1.130318207984970, 
   0.271495339534077, 
   0.044336849848664, 
   0.005474240442094, 
   0.000542926311914, 
   0.000044977322954, 
   0.000003198436462, 
   0.000000199212481, 
   0.000000011036772, 
   0.000000000550590,
   0.000000000024980, 
   0.000000000001039, 
   0.000000000000040, 
   0.000000000000001 };
  double s;
  double x;

  cout << "\n";
  cout << "R8_CSEVL_TEST:\n";
  cout << "  R8_CSEVL evaluates a Chebyshev approximant\n";
  cout << "  of N terms at a point X.\n";
  cout << "\n";
  cout << "  Here we use an approximant to the exponential function.\n";
  cout << "  and average the absolute error at 21 points.\n";
  cout << "\n";
  cout << "   N    error\n";
  cout << "\n";

  for ( n = 1; n <= 12; n++ )
  {
    err = 0.0;
    for ( i = -10; i <= 10; i++ )
    {
      x = ( double ) ( i ) / 10.0;
      s = r8_csevl ( x, expcs, n );
      err = err + fabs ( s - exp ( x ) );
    }
    err = err / 21.0;
    cout << "  " << setw(2) << n
         << "  " << setw(14) << err << "\n";
  }

  return;
}
//****************************************************************************80

void r8_dawson_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_DAWSON_TEST tests R8_DAWSON.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_DAWSON_TEST:\n";
  cout << "  Test R8_DAWSON.\n";
  cout << "\n";
  cout << "             X      DAWSON(X)  R8_DAWSON(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    dawson_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_dawson ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_e1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_E1_TEST tests R8_E1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_E1_TEST:\n";
  cout << "  Test R8_E1.\n";
  cout << "\n";
  cout << "             X      E1(X)  R8_E1(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    e1_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_e1 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_ei_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_EI_TEST tests R8_EI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_EI_TEST:\n";
  cout << "  Test R8_EI.\n";
  cout << "\n";
  cout << "             X      EI(X)  R8_EI(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    ei_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_ei ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_erf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ERF_TEST tests R8_ERF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_ERF_TEST:\n";
  cout << "  Test  R8_ERF.\n";
  cout << "\n";
  cout << "             X      ERF(X)  R8_ERF(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    erf_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_erf ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_erfc_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ERFC_TEST tests R8_ERFC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_ERFC_TEST:\n";
  cout << "  Test R8_ERFC.\n";
  cout << "\n";
  cout << "             X      ERFC(X)  R8_ERFC(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    erfc_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_erfc ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_exp_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_EXP_TEST tests R8_EXP.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_EXP_TEST:\n";
  cout << "  Test R8_EXP.\n";
  cout << "\n";
  cout << "             X      EXP(X)  R8_EXP(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    exp_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_exp ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_fac_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_FAC_TEST tests R8_FAC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n;
  int n_data;

  cout << "\n";
  cout << "R8_FAC_TEST:\n";
  cout << "  R8_FAC evaluates the factorial function.\n";
  cout << "\n";
  cout << "             N      FAC(N)  R8_FAC(N)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    r8_factorial_values ( n_data, n, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_fac ( n );

    cout << "  " << setw(14) << n
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_gamic_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMIC_TEST tests R8_GAMIC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_GAMIC_TEST:\n";
  cout << "  R8_GAMIC evaluates the incomplete gamma function.\n";
  cout << "\n";
  cout << "             X        GAMIC(A,X)  R8_GAMIC(A,X)       Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_inc_values ( n_data, a, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_gamic ( a, x );

    cout << "  " << setw(14) << a
         << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_gamit_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMIT_TEST tests R8_GAMIT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_GAMIT_TEST:\n";
  cout << "  R8_GAMIT evaluates Tricomi's incomplete Gamma function.\n";
  cout << "\n";
  cout << "             X        GAMIT(A,X)  R8_GAMIT(A,X)       Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_inc_tricomi_values ( n_data, a, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_gamit ( a, x );

    cout << "  " << setw(14) << a
         << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_gaml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAML_TEST tests R8_GAML.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double xmax;
  double xmin;

  cout << "\n";
  cout << "R8_GAML_TEST:\n";
  cout << "  R8_GAML returns bounds for the argument of the gamma function.\n";

  r8_gaml ( xmin, xmax );

  cout << "\n";
  cout << "  Lower limit XMIN = " << xmin << "\n";
  cout << "  Upper limit XMAX = " << xmax << "\n";

  return;
}
//****************************************************************************80

void r8_gamma_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMMA_TEST tests R8_GAMMA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_GAMMA_TEST:\n";
  cout << "  R8_GAMMA evaluates the gamma function.\n";
  cout << "\n";
  cout << "             X      GAMMA(X)  R8_GAMMA(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_gamma ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_gamr_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMR_TEST tests R8_GAMR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  double gx;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_GAMR_TEST:\n";
  cout << "  R8_GAMR evaluates 1.0/Gamma(x).\n";
  cout << "\n";
  cout << "             X    1/GAMMA(X)  R8_GAMR(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_values ( n_data, x, gx );

    if ( n_data == 0 )
    {
      break;
    }

    fx1 = 1.0 / gx;
    fx2 = r8_gamr ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_inits_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_INITS_TEST tests R8_INITS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  double sincs[15] = {
    -0.374991154955873175839919279977323464, 
    -0.181603155237250201863830316158004754, 
    +0.005804709274598633559427341722857921, 
    -0.000086954311779340757113212316353178, 
    +0.000000754370148088851481006839927030, 
    -0.000000004267129665055961107126829906, 
    +0.000000000016980422945488168181824792, 
    -0.000000000000050120578889961870929524, 
    +0.000000000000000114101026680010675628, 
    -0.000000000000000000206437504424783134, 
    +0.000000000000000000000303969595918706, 
    -0.000000000000000000000000371357734157, 
    +0.000000000000000000000000000382486123, 
    -0.000000000000000000000000000000336623, 
    +0.000000000000000000000000000000000256 };
  double tol;

  cout << "\n";
  cout << "R8_INITS_TEST:\n";
  cout << "  R8_INITS determines the Chebyshev interpolant degree\n";
  cout << "  necessary to guarantee a desired accuracy level.\n";
  cout << "\n";
  cout << "  Here, we use a 15 term Chebyshev expansion for the\n";
  cout << "  sine function.\n";
  cout << "\n";
  cout << "  Accuracy    Terms Needed\n";
  cout << "\n";

  tol = 1.0;
  for ( i = 1; i <= 18; i++ )
  {
    n = r8_inits ( sincs, 15, tol );
    cout << "  " << setw(14) << tol
         << "  " << setw(4) << n << "\n";
    tol = tol / 10.0;
  }

  return;
}
//****************************************************************************80

void r8_int_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_INT_TEST tests R8_INT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_INT_TEST:\n";
  cout << "  R8_INT rounds an R8 to an integer value.\n";
  cout << "\n";
  cout << "             X      INT(X)  R8_INT(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    int_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_int ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_lbeta_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_LBETA_TEST tests R8_LBETA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double diff;
  double fx1;
  double fx2;
  int n_data;

  cout << "\n";
  cout << "R8_LBETA_TEST:\n";
  cout << "  R8_LBETA evaluates the logarithm of the Beta function.\n";
  cout << "\n";
  cout << "             X        LBETA(A,B)  R8_LBETA(A,B)       Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    beta_log_values ( n_data, a, b, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_lbeta ( a, b );

    cout << "  " << setw(14) << a
         << "  " << setw(14) << b
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_lgams_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_LGAMS_TEST tests R8_LGAMS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double fx1;
  double fx2;
  int n_data;
  double slngam;
  double x;

  cout << "\n";
  cout << "R8_LGAMS_TEST:\n";
  cout << "  R8_LGAMS evaluates the sign of Gamma(x) and\n";
  cout << "  the logarithm of the absolute value of Gamma(x).\n";
  cout << "\n";
  cout << "             X        LNGAM(X)  Sign(Gamma(X)) ALNGAM        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_log_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    r8_lgams ( x, fx2, slngam );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << slngam
         << "  " << setw(14) << fx2
         << "  " << setw(14) <<  fabs ( fx1 - fx2 ) << "\n";

  }

  return;
}
//****************************************************************************80

void r8_lgmc_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_LGMC_TEST tests R8_LGMC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  double gamma_log;
  int n_data;
  const double r8_pi = 3.141592653589793;
  double x;

  cout << "\n";
  cout << "R8_LGMC_TEST:\n";
  cout << "  R8_LGMC evaluates the correction log gamma factor.\n";
  cout << "  r8_lgmc(x) = log ( gamma ( x ) ) - log ( sqrt ( 2 * pi )\n";
  cout << "  - ( x - 0.5 ) * log ( x ) + x\n";
  cout << "\n";
  cout << "             X        LGMC(X)  R8_LGMC(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_log_values ( n_data, x, gamma_log );

    if ( n_data == 0 )
    {
      break;
    }
//
//  Function requires 10 <= x.
//
    if ( 10.0 <= x )
    {
      fx1 = gamma_log - log ( sqrt ( 2.0 * r8_pi ) ) - ( x - 0.5 ) * log ( x ) + x;
      fx2 = r8_lgmc ( x );
      cout << "  " << setw(14) << x
           << "  " << setw(14) << fx1
           << "  " << setw(14) << fx2 
           << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
    }
  }
  return;
}
//****************************************************************************80

void r8_li_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_LI_TEST tests R8_LI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_LI_TEST:\n";
  cout << "  R8_LI evaluates the logarithmic integral\n";
  cout << "\n";
  cout << "             X      LI(X)  R8_LI(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    logarithmic_integral_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_li ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_lngam_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_LNGAM_TEST tests R8_LNGAM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_LNGAM_TEST:\n";
  cout << "  Test R8_LNGAM\n";
  cout << "\n";
  cout << "             X        LNGAM(X)  R8_LNGAM(X)        Diff\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_log_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_lngam ( x );

    cout << "\n";
    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_lnrel_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_LNREL_TEST tests R8_LNREL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL logcense.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_LNREL_TEST:\n";
  cout << "  R8_LNREL evaluates ln(1+x)\n";
  cout << "\n";
  cout << "             X      LOG(1+X)  R8_LNREL(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    log_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    x = x - 1.0;

    fx2 = r8_lnrel ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_log_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_LOG_TEST tests R8_LOG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL logcense.
//
//  Modified:
//
//    25 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_LOG_TEST:\n";
  cout << "  R8_LOG evaluates ln(x)\n";
  cout << "\n";
  cout << "             X      LOG(X)  R8_LOG(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    log_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_log ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_log10_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_LOG10_TEST tests R8_LOG10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL log10cense.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_LOG10_TEST:\n";
  cout << "  Test R8_LOG10\n";
  cout << "\n";
  cout << "             X      LOG10(X)  R8_LOG10(X)        Diff\n";

  n_data = 0;

  for ( ; ; )
  {
    log10_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_log10 ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_mach_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MACH_TEST tests R8_MACH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;

  cout << "\n";
  cout << "R8_MACH_TEST:\n";
  cout << "  R8_MACH evaluates double precision machine numbers.\n";
  cout << "\n";
  cout << "  R8_MACH (1) = B^(EMIN-1), the smallest positive magnitude.\n";
  cout << "  R8_MACH (2) = B^EMAX*(1 - B^(-T)), the largest magnitude.\n";
  cout << "  R8_MACH (3) = B^(-T), the smallest relative spacing.\n";
  cout << "  R8_MACH (4) = B^(1-T), the largest relative spacing.\n";
  cout << "  R8_MACH (5) = LOG10(B)\n";
  cout << "\n";
  cout << "    I     R8_MACH(I)\n";
  cout << "\n";

  for ( i = 1; i <= 5; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(14) << r8_mach ( i ) << "\n";
  }

  return;
}
//****************************************************************************80

void r8_pak_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_PAK_TEST tests R8_PAK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  int n_test[11] = {
    7, 8, 7, 7, 4, 0, -1, 0, 7, 2, 0 };
  double x;
  double y;
  double y_test[11] = {
    0.5, 
    0.5, 
   -0.5, 
    0.75, 
    0.9375, 
    0.5, 
    0.5, 
    0.625, 
    0.5048828125, 
    0.7853981633974483, 
    0.0 };

  cout << "\n";
  cout << "R8_PAK_TEST:\n";
  cout << "  R8_PAK converts a mantissa and base 2 exponent to an R8.\n";
  cout << "\n";
  cout << "    Mantissa     Exponent         R8\n";
  cout << "\n";

  for ( i = 0; i < 11; i++ )
  {
    y = y_test[i];
    n = n_test[i];

    x = r8_pak ( y, n );
    cout << "  " << setw(24) << y
         << "  " << setw(8) << n
         << "  " << setw(24) << x << "\n";
  }

  return;
}
//****************************************************************************80

void r8_poch_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_POCH_TEST tests R8_POCH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double diff;
  double fx1;
  double fx2;
  int n;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_POCH_TEST:\n";
  cout << "  R8_POCH evaluates the Pochhammer symbol..\n";
  cout << "\n";
  cout << "             X        POCH(A,X)  R8_POCH(A,X)       Diff\n";

  n_data = 0;

  for ( ; ; )
  {
    r8_rise_values ( n_data, a, n, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_poch ( a, x );

    cout << "  " << setw(14) << a
         << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_psi_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_PSI_TEST tests R8_PSI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL psicense.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_PSI_TEST:\n";
  cout << "  Test R8_PSI\n";
  cout << "\n";
  cout << "             X      PSI(X)  R8_PSI(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    psi_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_psi ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_rand_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_RAND_TEST tests R8_RAND.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double average;
  int i;
  int i_value[7] = { 1, 2, 3, 4, 10, 100, 1000 };
  int ix0;
  int ix1;
  int k;
  double r;
  double r_value[7] = { 
    0.0004127026, 
    0.6750836372, 
    0.1614754200, 
    0.9086198807, 
    0.5527787209, 
    0.3600893021, 
    0.2176990509 };
  double s;
  double variance;

  cout << "\n";
  cout << "R8_RAND_TEST:\n";
  cout << "  R8_RAND returns a random R8 value.\n";
  cout << "\n";
  cout << "               I       R8_RAND        Expected\n";
  cout << "\n";
//
//  Start the sequence.
//
  ix0 = 0;
  ix1 = 0;
  s = 0.0;

  k = 0;

  for ( i = 1; i <= 1000; i++ )
  {
    r = r8_rand ( s, ix0, ix1 );

    if ( i == i_value[k] )
    {
      cout << "  " << setw(14) << i
           << "  " << setw(14) << r
           << "  " << setw(14) << r_value[k] << "\n";
      k = k + 1;
    }
  }
//
//  Restart the sequence.
//
  ix0 = 0;
  ix1 = 0;
  s = 0.0;

  average = 0.0;
  for ( i = 1; i <= 1000000; i++ )
  {
    r = r8_rand ( s, ix0, ix1 );
    average = average + r;
  }
  average = average / 1000000.0;
  cout << "\n";
  cout << "     Average =  "
       << "  " << setw(14) << average
       << "  " << setw(14) << 0.5 << "\n";
//
//  Restart the sequence.
//
  ix0 = 0;
  ix1 = 0;
  s = 0.0;

  variance = 0.0;
  for ( i = 1; i <= 1000000; i++ )
  {
    r = r8_rand ( s, ix0, ix1 );
    variance = variance + pow ( r - average, 2 );
  }
  variance = variance / 1000000.0;
  cout << "     Variance = "
       << "  " << setw(14) << variance
       << "  " << setw(14) << 1.0 / 12.0 << "\n";

  return;
}
//****************************************************************************80

void r8_randgs_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_RANDGS_TEST tests R8_RANDGS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  double m;
  double m2;
  double r;
  double sd;
  double sd2;
  int seed;

  m = 3.0;
  sd = 2.0;
  seed = 123456789;

  cout << "\n";
  cout << "R8_RANDGS_TEST:\n";
  cout << "  R8_RANDGS generates a random normal R8.\n";
  cout << "  Mean =  " << m << "\n";
  cout << "  Standard deviation = " << sd << "\n";
  cout << "\n";
  cout << "               I       R8_RANDGS\n";
  cout << "\n";

  m2 = 0.0;
  sd2 = 0.0;

  for ( i = 1; i <= 1000; i++ )
  {
    r = r8_randgs ( m, sd, seed );
    m2 = m2 + r;
    sd2 = sd2 + pow ( m - r, 2 );
    if ( i <= 10 )
    {
      cout << "  " << setw(14) << i
           << "  " << setw(14) << r << "\n";
    }
  }

  m2 = m2 / 1000.0;
  sd2 = sqrt ( sd2 / 1000.0 );

  cout << "\n";
  cout << "  Sequence mean =  " << m2 << "\n";
  cout << "  Sequence standard deviation = " << sd2 << "\n";

  return;
}
//****************************************************************************80

void r8_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_RANDOM_TEST tests R8_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double average;
  int i;
  int i_value[7] = { 1, 2, 3, 4, 10, 100, 1000 };
  int ix0;
  int ix1;
  int k;
  int n = 32;
  double r;
  double t[33];
  double variance;

  cout << "\n";
  cout << "R8_RANDOM_TEST:\n";
  cout << "  R8_RANDOM returns a random R8 value.\n";
  cout << "\n";
  cout << "               I       R8_RANDOM\n";
  cout << "\n";
//
//  Start the sequence.
//
  ix0 = 0;
  ix1 = 0;
  r8_random_init ( n, t, ix0, ix1 );

  k = 0;

  for ( i = 1; i <= 1000; i++ )
  {
    r = r8_random ( n, t, ix0, ix1 );

    if ( i == i_value[k] )
    {
      cout << "  " << setw(14) << i
           << "  " << setw(14) << r << "\n";
      k = k + 1;
    }
  }
//
//  Restart the sequence.
//
  ix0 = 0;
  ix1 = 0;
  r8_random_init ( n, t, ix0, ix1 );

  average = 0.0;
  for ( i = 1; i <= 1000000; i++ )
  {
    r = r8_random ( n, t, ix0, ix1 );
    average = average + r;
  }
  average = average / 1000000.0;
  cout << "\n";
  cout << "     Average =  "
       << "  " << setw(14) << average
       << "  " << setw(14) << 0.5 << "\n";
//
//  Restart the sequence.
//
  ix0 = 0;
  ix1 = 0;
  r8_random_init ( n, t, ix0, ix1 );

  variance = 0.0;
  for ( i = 1; i <= 1000000; i++ )
  {
    r = r8_random ( n, t, ix0, ix1 );
    variance = variance + pow ( r - average, 2 );
  }
  variance = variance / 1000000.0;
  cout << "     Variance = "
       << "  " << setw(14) << variance
       << "  " << setw(14) << 1.0 / 12.0 << "\n";

  return;
}
//****************************************************************************80

void r8_ren_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_REN_TEST tests R8_REN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double average;
  int i;
  int i_value[7] = { 1, 2, 3, 4, 10, 100, 1000 };
  int k;
  double r;
  double r_value[7] = { 
    0.470393,
    0.799066,
    0.883261,
    0.407667,
    0.955566,
    0.173576,
    0.0121733 };
  int seed;
  double variance;

  cout << "\n";
  cout << "R8_REN_TEST:\n";
  cout << "  R8_REN returns a random R8 value.\n";
  cout << "\n";
  cout << "               I       R8_REN         Expected\n";
  cout << "\n";

  seed = 100001;
  k = 0;

  for ( i = 1; i <= 1000; i++ )
  {
    r = r8_ren ( seed );

    if ( i == i_value[k] )
    {
      cout << "  " << setw(14) << i
           << "  " << setw(14) << r
           << "  " << setw(14) << r_value[k] << "\n";
      k = k + 1;
    }
  }

  seed = 123456789;
  average = 0.0;
  for ( i = 1; i <= 1000000; i++ )
  {
    r = r8_ren ( seed );
    average = average + r;
  }
  average = average / 1000000.0;
  cout << "\n";
  cout << "     Average =  "
       << "  " << setw(14) << average
       << "  " << setw(14) << 0.5 << "\n";

  seed = 123456789;
  variance = 0.0;
  for ( i = 1; i <= 1000000; i++ )
  {
    r = r8_ren ( seed );
    variance = variance + pow ( r - average, 2 );
  }
  variance = variance / 1000000.0;
  cout << "     Variance = "
       << "  " << setw(14) << variance
       << "  " << setw(14) << 1.0 / 12.0 << "\n";

  return;
}
//****************************************************************************80

void r8_shi_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SHI_TEST tests R8_SHI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_SHI_TEST:\n";
  cout << "  Test R8_SHI.\n";
  cout << "\n";
  cout << "             X      SHI(X)  R8_SHI(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    shi_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_shi ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_si_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SI_TEST tests R8_SI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_SI_TEST:\n";
  cout << "  Test R8_SI.\n";
  cout << "\n";
  cout << "             X      SI(X)  R8_SI(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    si_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_si ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_sin_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SIN_TEST tests R8_SIN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_SIN_TEST:\n";
  cout << "  Test R8_SIN.\n";
  cout << "\n";
  cout << "             X      SIN(X)  R8_SIN(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    sin_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_sin ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_sin_deg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SIN_DEG_TEST tests R8_SIN_DEG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_SIN_DEG_TEST:\n";
  cout << "  Test R8_SIN_DEG.\n";
  cout << "\n";
  cout << "             X      SIN_DEG(X)  R8_SIN_DEG(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    sin_degree_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_sin_deg ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_sinh_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SINH_TEST tests R8_SINH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_SINH_TEST:\n";
  cout << "  Test R8_SINH\n";
  cout << "\n";
  cout << "             X      SINH(X)  R8_SINH(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    sinh_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_sinh ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_spence_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SPENCE_TEST tests R8_SPENCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_SPENCE_TEST:\n";
  cout << "  Test R8_SPENCE\n";
  cout << "\n";
  cout << "             X      SPENCE(X)  R8_SPENCE(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    dilogarithm_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_spence ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_sqrt_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SQRT_TEST tests R8_SQRT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_SQRT_TEST:\n";
  cout << "  Test R8_SQRT\n";
  cout << "\n";
  cout << "             X      SQRT(X)  R8_SQRT(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    sqrt_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_sqrt ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_tan_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TAN_TEST tests R8_TAN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_TAN_TEST:\n";
  cout << "  Test R8_TAN.\n";
  cout << "\n";
  cout << "             X      TAN(X)  R8_TAN(X)         Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    tan_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_tan ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_tanh_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TANH_TEST tests R8_TANH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 October 2011
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_TANH_TEST:\n";
  cout << "  Test R8_TANH\n";
  cout << "\n";
  cout << "             X      TANH(X)  R8_TANH(X)        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    tanh_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_tanh ( x );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << fx1
         << "  " << setw(14) << fx2 
         << "  " << setw(14) << fabs ( fx1 - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_upak_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UPAK_TEST tests R8_UPAK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n;
  double x;
  double x_test[11] = {
    64.0,
   128.0,
   -64.0,
    96.0,
    15.0,
    0.5,
    0.25,
    0.625,
   64.625,
    3.141592653589793,
    0.0 };
  double y;

  cout << "\n";
  cout << "R8_UPAK_TEST:\n";
  cout << "  R8_UPAK converts an R8 to a mantissa and base 2 exponent.\n";
  cout << "\n";
  cout << "             X         Mantissa     Exponent\n";
  cout << "\n";

  for ( i = 0; i < 11; i++ )
  {
    x = x_test[i];

    r8_upak ( x, y, n );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << y
         << "  " << setw(8) << n << "\n";
  }

  return;
}
