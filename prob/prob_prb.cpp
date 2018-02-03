# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "prob.hpp"

int main ( );

void angle_cdf_test ( );
void angle_mean_test ( );
void angle_pdf_test ( );
void anglit_cdf_test ( );
void anglit_sample_test ( );
void arcsin_cdf_test ( );
void arcsin_sample_test ( );
void benford_cdf_test ( );
void benford_pdf_test ( );
void bernoulli_cdf_test ( );
void bernoulli_sample_test ( );
void bessel_i0_test ( );
void bessel_i1_test ( );
void beta_binomial_cdf_test ( );
void beta_binomial_sample_test ( );
void beta_cdf_test ( );
void beta_inc_test ( );
void beta_sample_test ( );
void binomial_cdf_test ( );
void binomial_sample_test ( );
void birthday_cdf_test ( );
void birthday_sample_test ( );
void bradford_cdf_test ( );
void bradford_sample_test ( );
void buffon_box_pdf_test ( );
void buffon_box_sample_test ( );
void buffon_pdf_test ( );
void buffon_sample_test ( );
void burr_cdf_test ( );
void burr_sample_test ( );
void cardioid_cdf_test ( );
void cardioid_sample_test ( );
void cauchy_cdf_test ( );
void cauchy_sample_test ( );
void chebyshev1_cdf_test ( );
void chebyshev1_sample_test ( );
void chi_cdf_test ( );
void chi_sample_test ( );
void chi_square_cdf_test ( );
void chi_square_sample_test ( );
void chi_square_noncentral_sample_test ( );
void circular_normal_01_sample_test ( );
void circular_normal_sample_test ( );
void cosine_cdf_test ( );
void cosine_sample_test ( );
void coupon_complete_pdf_test ( );
void coupon_sample_test ( );
void deranged_cdf_test ( );
void deranged_sample_test ( );
void dipole_cdf_test ( );
void dipole_sample_test ( );
void dirichlet_sample_test ( );
void dirichlet_pdf_test ( );
void dirichlet_mix_sample_test ( );
void dirichlet_mix_pdf_test ( );
void discrete_cdf_test ( );
void discrete_sample_test ( );
void disk_sample_test ( );
void empirical_discrete_cdf_test ( );
void empirical_discrete_sample_test ( );
void english_letter_cdf_test ( );
void english_sentence_length_cdf_test ( );
void english_sentence_length_sample_test ( );
void english_word_length_cdf_test ( );
void english_word_length_sample_test ( );
void erlang_cdf_test ( );
void erlang_sample_test ( );
void exponential_cdf_test ( );
void exponential_sample_test ( );
void exponential_01_cdf_test ( );
void exponential_01_sample_test ( );
void extreme_values_cdf_test ( );
void extreme_values_sample_test ( );
void f_cdf_test ( );
void f_sample_test ( );
void fermi_dirac_sample_test ( );
void fisher_pdf_test ( );
void fisk_cdf_test ( );
void fisk_sample_test ( );
void folded_normal_cdf_test ( );
void folded_normal_sample_test ( );
void frechet_cdf_test ( );
void frechet_sample_test ( );
void gamma_cdf_test ( );
void gamma_sample_test ( );
void genlogistic_cdf_test ( );
void genlogistic_sample_test ( );
void geometric_cdf_test ( );
void geometric_sample_test ( );
void gompertz_cdf_test ( );
void gompertz_sample_test ( );
void gumbel_cdf_test ( );
void gumbel_sample_test ( );
void half_normal_cdf_test ( );
void half_normal_sample_test ( );
void hypergeometric_cdf_test ( );
void hypergeometric_sample_test ( );
void i4_choose_test ( );
void i4_choose_log_test ( );
void i4_is_power_of_10_test ( );
void i4_uniform_ab_test ( );
void i4vec_uniform_ab_new_test ( );
void i4vec_unique_count_test ( );
void inverse_gaussian_cdf_test ( );
void inverse_gaussian_sample_test ( );
void laplace_cdf_test ( );
void laplace_sample_test ( );
void levy_cdf_test ( );
void logistic_cdf_test ( );
void logistic_sample_test ( );
void log_normal_cdf_test ( );
void log_normal_sample_test ( );
void log_series_cdf_test ( );
void log_series_sample_test ( );
void log_uniform_cdf_test ( );
void log_uniform_sample_test ( );
void lorentz_cdf_test ( );
void lorentz_sample_test ( );
void maxwell_cdf_test ( );
void maxwell_sample_test ( );
void multinomial_coef_test ( );
void multinomial_sample_test ( );
void multinomial_pdf_test ( );
void nakagami_cdf_test ( );
void nakagami_sample_test ( );
void negative_binomial_cdf_test ( );
void negative_binomial_sample_test ( );
void normal_01_cdf_test ( );
void normal_01_sample_test ( );
void normal_cdf_test ( );
void normal_sample_test ( );
void normal_truncated_ab_cdf_test ( );
void normal_truncated_ab_sample_test ( );
void normal_truncated_a_cdf_test ( );
void normal_truncated_a_sample_test ( );
void normal_truncated_b_cdf_test ( );
void normal_truncated_b_sample_test ( );
void pareto_cdf_test ( );
void pareto_sample_test ( );
void pearson_05_pdf_test ( );
void planck_pdf_test ( );
void planck_sample_test ( );
void poisson_cdf_test ( );
void poisson_sample_test ( );
void power_cdf_test ( );
void power_sample_test ( );
void quasigeometric_cdf_test ( );
void quasigeometric_sample_test ( );
void r8_beta_test ( );
void r8_ceiling_test ( );
void r8_error_f_test ( );
void r8_factorial_test ( );
void r8_gamma_inc_test ( );
void r8_gamma_log_int_test ( );
void r8_uniform_01_test ( );
void r8_zeta_test ( );
void rayleigh_cdf_test ( );
void rayleigh_sample_test ( );
void reciprocal_cdf_test ( );
void reciprocal_sample_test ( );
void runs_pdf_test ( );
void runs_sample_test ( );
void sech_cdf_test ( );
void sech_sample_test ( );
void semicircular_cdf_test ( );
void semicircular_sample_test ( );
void student_cdf_test ( );
void student_sample_test ( );
void student_noncentral_cdf_test ( );
void tfn_test ( );
void triangle_cdf_test ( );
void triangle_sample_test ( );
void triangular_cdf_test ( );
void triangular_sample_test ( );
void uniform_01_order_sample_test ( );
void uniform_nsphere_sample_test ( );
void uniform_01_cdf_test ( );
void uniform_01_sample_test ( );
void uniform_cdf_test ( );
void uniform_sample_test ( );
void uniform_discrete_cdf_test ( );
void uniform_discrete_sample_test ( );
void von_mises_cdf_test ( );
void von_mises_sample_test ( );
void weibull_cdf_test ( );
void weibull_sample_test ( );
void weibull_discrete_cdf_test ( );
void weibull_discrete_sample_test ( );
void zipf_cdf_test ( );
void zipf_sample_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for PROB_PRB.
//
//  Discussion:
//
//    PROB_PRB tests the PROB library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "PROB_PRB\n";
  cout << "  C++ version.\n";
  cout << "  Test the PROB library.\n";

  angle_cdf_test ( );
  angle_mean_test ( );
  angle_pdf_test ( );

  anglit_cdf_test ( );
  anglit_sample_test ( );

  arcsin_cdf_test ( );
  arcsin_sample_test ( );

  benford_cdf_test ( );
  benford_pdf_test ( );

  bernoulli_cdf_test ( );
  bernoulli_sample_test ( );

  bessel_i0_test ( );
  bessel_i1_test ( );

  beta_binomial_cdf_test ( );
  beta_binomial_sample_test ( );

  beta_cdf_test ( );
  beta_inc_test ( );
  beta_sample_test ( );

  binomial_cdf_test ( );
  binomial_sample_test ( );

  birthday_cdf_test ( );
  birthday_sample_test ( );

  bradford_cdf_test ( );
  bradford_sample_test ( );

  buffon_box_pdf_test ( );
  buffon_box_sample_test ( );

  buffon_pdf_test ( );
  buffon_sample_test ( );

  burr_cdf_test ( );
  burr_sample_test ( );

  cardioid_cdf_test ( );
  cardioid_sample_test ( );

  cauchy_cdf_test ( );
  cauchy_sample_test ( );

  chebyshev1_cdf_test ( );
  chebyshev1_sample_test ( );

  chi_cdf_test ( );
  chi_sample_test ( );

  chi_square_cdf_test ( );
  chi_square_sample_test ( );

  chi_square_noncentral_sample_test ( );

  circular_normal_01_sample_test ( );
  circular_normal_sample_test ( );

  cosine_cdf_test ( );
  cosine_sample_test ( );

  coupon_complete_pdf_test ( );
  coupon_sample_test ( );

  deranged_cdf_test ( );
  deranged_sample_test ( );

  dipole_cdf_test ( );
  dipole_sample_test ( );

  dirichlet_sample_test ( );
  dirichlet_pdf_test ( );

  dirichlet_mix_sample_test ( );
  dirichlet_mix_pdf_test ( );

  discrete_cdf_test ( );
  discrete_sample_test ( );

  disk_sample_test ( );

  empirical_discrete_cdf_test ( );
  empirical_discrete_sample_test ( );

  english_letter_cdf_test ( );

  english_sentence_length_cdf_test ( );
  english_sentence_length_sample_test ( );

  english_word_length_cdf_test ( );
  english_word_length_sample_test ( );

  erlang_cdf_test ( );
  erlang_sample_test ( );

  exponential_cdf_test ( );
  exponential_sample_test ( );

  exponential_01_cdf_test ( );
  exponential_01_sample_test ( );

  extreme_values_cdf_test ( );
  extreme_values_sample_test ( );

  f_cdf_test ( );
  f_sample_test ( );

  fermi_dirac_sample_test ( );

  fisher_pdf_test ( );

  fisk_cdf_test ( );
  fisk_sample_test ( );

  folded_normal_cdf_test ( );
  folded_normal_sample_test ( );

  frechet_cdf_test ( );
  frechet_sample_test ( );

  gamma_cdf_test ( );
  gamma_sample_test ( );

  genlogistic_cdf_test ( );
  genlogistic_sample_test ( );

  geometric_cdf_test ( );
  geometric_sample_test ( );

  gompertz_cdf_test ( );
  gompertz_sample_test ( );

  gumbel_cdf_test ( );
  gumbel_sample_test ( );

  half_normal_cdf_test ( );
  half_normal_sample_test ( );

  hypergeometric_cdf_test ( );
  hypergeometric_sample_test ( );

  i4_choose_test ( );
  i4_choose_log_test ( );
  i4_is_power_of_10_test ( );
  i4_uniform_ab_test ( );
  i4vec_uniform_ab_new_test ( );
  i4vec_unique_count_test ( );

  inverse_gaussian_cdf_test ( );
  inverse_gaussian_sample_test ( );

  laplace_cdf_test ( );
  laplace_sample_test ( );

  levy_cdf_test ( );

  logistic_cdf_test ( );
  logistic_sample_test ( );

  log_normal_cdf_test ( );
  log_normal_sample_test ( );

  log_series_cdf_test ( );
  log_series_sample_test ( );

  log_uniform_cdf_test ( );
  log_uniform_sample_test ( );

  lorentz_cdf_test ( );
  lorentz_sample_test ( );

  maxwell_cdf_test ( );
  maxwell_sample_test ( );

  multinomial_coef_test ( );
  multinomial_sample_test ( );
  multinomial_pdf_test ( );

  nakagami_cdf_test ( );
  nakagami_sample_test ( );

  negative_binomial_cdf_test ( );
  negative_binomial_sample_test ( );

  normal_01_cdf_test ( );
  normal_01_sample_test ( );
  normal_cdf_test ( );
  normal_sample_test ( );
  normal_truncated_ab_cdf_test ( );
  normal_truncated_ab_sample_test ( );
  normal_truncated_a_cdf_test ( );
  normal_truncated_a_sample_test ( );
  normal_truncated_b_cdf_test ( );
  normal_truncated_b_sample_test ( );
  pareto_cdf_test ( );
  pareto_sample_test ( );
  pearson_05_pdf_test ( );
  planck_pdf_test ( );
  planck_sample_test ( );
  poisson_cdf_test ( );
  poisson_sample_test ( );
  power_cdf_test ( );
  power_sample_test ( );
  quasigeometric_cdf_test ( );
  quasigeometric_sample_test ( );
  r8_beta_test ( );
  r8_ceiling_test ( );
  r8_error_f_test ( );
  r8_factorial_test ( );
  r8_gamma_inc_test ( );
  r8_gamma_log_int_test ( );
  r8_uniform_01_test ( );
  r8_zeta_test ( );
  rayleigh_cdf_test ( );
  rayleigh_sample_test ( );
  reciprocal_cdf_test ( );
  reciprocal_sample_test ( );
  runs_pdf_test ( );
  runs_sample_test ( );
  sech_cdf_test ( );
  sech_sample_test ( );
  semicircular_cdf_test ( );
  semicircular_sample_test ( );
  student_cdf_test ( );
  student_sample_test ( );
  student_noncentral_cdf_test ( );
  tfn_test ( );
  triangle_cdf_test ( );
  triangle_sample_test ( );
  triangular_cdf_test ( );
  triangular_sample_test ( );
  uniform_01_cdf_test ( );
  uniform_01_order_sample_test ( );
  uniform_01_sample_test ( );
  uniform_cdf_test ( );
  uniform_discrete_cdf_test ( );
  uniform_discrete_sample_test ( );
  uniform_nsphere_sample_test ( );
  uniform_sample_test ( );
  von_mises_cdf_test ( );
  von_mises_sample_test ( );
  weibull_cdf_test ( );
  weibull_sample_test ( );
  weibull_discrete_cdf_test ( );
  weibull_discrete_sample_test ( );
  zipf_cdf_test ( );
  zipf_sample_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "PROB_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void angle_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ANGLE_CDF_TEST tests ANGLE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int n;
  double x;

  cout << "\n";
  cout << "ANGLE_CDF_TEST\n";
  cout << "  ANGLE_CDF evaluates the Angle CDF;\n";

  n = 5;
  x = 0.50E+00;

  cdf = angle_cdf ( x, n );

  cout << "\n";
  cout << "  Parameter N =     " << n   << "\n";
  cout << "  PDF argument X =   " << x   << "\n";
  cout << "  CDF value =       " << cdf << "\n";

  return;
}
//****************************************************************************80

void angle_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ANGLE_PDF_TEST tests ANGLE_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  double pdf;
  double x;

  cout << "\n";
  cout << "ANGLE_PDF_TEST\n";
  cout << "  ANGLE_PDF evaluates the Angle PDF;\n";

  n = 5;
  x = 0.50E+00;

  pdf = angle_pdf ( x, n );

  cout << "\n";
  cout << "  Parameter N =    " << n   << "\n";
  cout << "  PDF argument X =  " << x   << "\n";
  cout << "  PDF value =      " << pdf << "\n";

  return;
}
//****************************************************************************80

void angle_mean_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ANGLE_MEAN_TEST tests ANGLE_MEAN;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double mean;
  int n;

  cout << "\n";
  cout << "ANGLE_MEAN_TEST\n";
  cout << "  ANGLIT_MEAN computes the Angle mean;\n";

  n = 5;
  mean = angle_mean ( n );

  cout << "\n";
  cout << "  Parameter N = " << n    << "\n";
  cout << "  PDF mean =    " << mean << "\n";

  return;
}
//****************************************************************************80

void anglit_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ANGLIT_CDF_TEST tests ANGLIT_CDF, ANGLIT_CDF_INV, ANGLIT_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "ANGLIT_CDF_TEST\n";
  cout << "  ANGLIT_CDF evaluates the Anglit CDF;\n";
  cout << "  ANGLIT_CDF_INV inverts the Anglit CDF.\n";
  cout << "  ANGLIT_PDF evaluates the Anglit PDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = anglit_sample ( seed );
    pdf = anglit_pdf ( x );
    cdf = anglit_cdf ( x );
    x2 = anglit_cdf_inv ( cdf );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void anglit_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ANGLIT_SAMPLE_TEST tests ANGLIT_MEAN, ANGLIT_SAMPLE, ANGLIT_VARIANCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "ANGLIT_SAMPLE_TEST\n";
  cout << "  ANGLIT_MEAN computes the Anglit mean;\n";
  cout << "  ANGLIT_SAMPLE samples the Anglit distribution;\n";
  cout << "  ANGLIT_VARIANCE computes the Anglit variance.\n";

  mean     = anglit_mean ( );
  variance = anglit_variance ( );

  cout << "\n";
  cout << "  PDF mean =     " << mean << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = anglit_sample ( seed );
  }

  mean     = r8vec_mean     ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax     = r8vec_max      ( SAMPLE_NUM, x );
  xmin     = r8vec_min      ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void arcsin_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ARCSIN_CDF_TEST tests ARCSIN_CDF, ARCSIN_CDF_INV, ARCSIN_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "ARCSIN_CDF_TEST\n";
  cout << "  ARCSIN_CDF evaluates the Arcsin CDF;\n";
  cout << "  ARCSIN_CDF_INV inverts the Arcsin CDF.\n";
  cout << "  ARCSIN_PDF evaluates the Arcsin PDF;\n";

  a = 1.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a        << "\n";

  if ( ! arcsin_check ( a ) )
  {
    cout << "\n";
    cout << "TEST006 - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = arcsin_sample ( a, seed );
    pdf = arcsin_pdf ( x, a );
    cdf = arcsin_cdf ( x, a );
    x2 = arcsin_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void arcsin_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ARCSIN_SAMPLE_TEST tests ARCSIN_MEAN, ARCSIN_SAMPLE, ARCSIN_VARIANCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int i;
  int j;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "ARCSIN_SAMPLE_TEST\n";
  cout << "  ARCSIN_MEAN computes the Arcsin mean;\n";
  cout << "  ARCSIN_SAMPLE samples the Arcsin distribution;\n";
  cout << "  ARCSIN_VARIANCE computes the Arcsin variance.\n";

  for ( i = 1; i <= 2; i++ )
  {
    if ( i == 1 )
    {
      a = 1.0E+00;
    }
    else if ( i == 2 )
    {
      a = 16.0E+00;
    }

    cout << "\n";
    cout << "  PDF parameter A =             " << a        << "\n";

    if ( ! arcsin_check ( a ) )
    {
      cout << "\n";
      cout << "ARCSIN_SAMPLE_TEST - Fatal error!\n";
      cout << "  The parameters are not legal.\n";
      return;
    }

    mean = arcsin_mean ( a );
    variance = arcsin_variance ( a );

    cout << "  PDF mean =                    " << mean     << "\n";
    cout << "  PDF variance =                " << variance << "\n";

    for ( j = 0; j < SAMPLE_NUM; j++ )
    {
      x[j] = arcsin_sample ( a, seed );
    }

    mean = r8vec_mean ( SAMPLE_NUM, x );
    variance = r8vec_variance ( SAMPLE_NUM, x );
    xmax = r8vec_max ( SAMPLE_NUM, x );
    xmin = r8vec_min ( SAMPLE_NUM, x );

    cout << "\n";
    cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
    cout << "  Sample mean =     " << mean     << "\n";
    cout << "  Sample variance = " << variance << "\n";
    cout << "  Sample maximum =  " << xmax     << "\n";
    cout << "  Sample minimum =  " << xmin     << "\n";
  }

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void benford_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BENFORD_CDF_TEST tests BENFORD_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  double cdf2;
  int n;
  double pdf;

  cout << "\n";
  cout << "BENFORD_CDF_TEST\n";
  cout << "  BENFORD_CDF evaluates the Benford CDF.\n";

  cout << "\n";
  cout << "       N          CDF(N)          CDF(N) by summing\n";
  cout << "\n";

  cdf2 = 0.0;
  for ( n = 1; n <= 9; n++ )
  {
    cdf = benford_cdf ( n );
    pdf = benford_pdf ( n );
    cdf2 = cdf2 + pdf;
    cout << "  " << setw(6)  << n   
         << "  " << setw(14) << pdf 
         << "  " << setw(14) << cdf
         << "  " << setw(14) << cdf2 << "\n";
  }

  cout << "\n";
  cout << "       N          CDF(N)          CDF(N) by summing\n";
  cout << "\n";

  cdf2 = 0.0;
  for ( n = 10; n <= 99; n++ )
  {
    cdf = benford_cdf ( n );
    pdf = benford_pdf ( n );
    cdf2 = cdf2 + pdf;
    cout << "  " << setw(6)  << n   
         << "  " << setw(14) << pdf
         << "  " << setw(14) << cdf
         << "  " << setw(14) << cdf2 << "\n";
  }

  return;
}
//****************************************************************************80

void benford_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BENFORD_PDF_TEST tests BENFORD_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  double pdf;

  cout << "\n";
  cout << "BENFORD_PDF_TEST\n";
  cout << "  BENFORD_PDF evaluates the Benford PDF.\n";

  cout << "\n";
  cout << "       N          PDF(N)\n";
  cout << "\n";

  for ( n = 1; n <= 9; n++ )
  {
    pdf = benford_pdf ( n );
    cout << "  " << setw(6)  << n   
         << "  " << setw(14) << pdf << "\n";
  }

  cout << "\n";
  cout << "       N          PDF(N)\n";
  cout << "\n";

  for ( n = 10; n <= 99; n++ )
  {
    pdf = benford_pdf ( n );
    cout << "  " << setw(6)  << n   
         << "  " << setw(14) << pdf << "\n";
  }

  return;
}
//****************************************************************************80

void bernoulli_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BERNOULLI_CDF_TEST tests BERNOULLI_CDF, BERNOULLI_CDF_INV, BERNOULLI_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "BERNOULLI_CDF_TEST\n";
  cout << "  BERNOULLI_CDF evaluates the Bernoulli CDF;\n";
  cout << "  BERNOULLI_CDF_INV inverts the Bernoulli CDF;\n";
  cout << "  BERNOULLI_PDF evaluates the Bernoulli PDF.\n";

  a = 0.75E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! bernoulli_check ( a ) )
  {
    cout << "\n";
    cout << "BERNOULLI_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = bernoulli_sample ( a, seed );
    pdf = bernoulli_pdf ( x, a );
    cdf = bernoulli_cdf ( x, a );
    x2 = bernoulli_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void bernoulli_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BERNOULLI_SAMPLE_TEST tests BERNOULLI_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "BERNOULLI_SAMPLE_TEST\n";
  cout << "  BERNOULLI_MEAN computes the Bernoulli mean;\n";
  cout << "  BERNOULLI_SAMPLE samples the Bernoulli distribution;\n";
  cout << "  BERNOULLI_VARIANCE computes the Bernoulli variance.\n";

  a = 0.75E+00;

  cout << "\n";
  cout << "  PDF parameter A = " << a << "\n";

  if ( ! bernoulli_check ( a ) )
  {
    cout << "\n";
    cout << "BERNOULLI_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = bernoulli_mean ( a );
  variance = bernoulli_variance ( a );

  cout << "  PDF mean = " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = bernoulli_sample ( a, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void bessel_i0_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST0105 tests BESSEL_I0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double fx;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "BESSEL_I0_TEST:\n";
  cout << "  BESSEL_I0 evaluates the Bessel function of the\n";
  cout << "  first kind and order 0;\n";
  cout << "\n";
  cout << "      X       Exact F       BESSEL_I0(X)\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_i0_values ( n_data, x, fx );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = bessel_i0 ( x );

    cout << "  "
         << setw(8)  << x   << "  "
         << setw(16) << fx  << "  "
         << setw(16) << fx2 << "\n";
  }

  return;
}
//****************************************************************************80

void bessel_i1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BESSEL_I1_TEST tests BESSEL_I1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double fx;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "BESSEL_I1_TEST:\n";
  cout << "  BESSEL_I1 evaluates the Bessel function of the\n";
  cout << "  first kind and order 1;\n";
  cout << "\n";
  cout << "      X       Exact F       BESSEL_I1(X)\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_i1_values ( n_data, x, fx );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = bessel_i1 ( x );

    cout << "  "
         << setw(8)  << x   << "  "
         << setw(16) << fx  << "  "
         << setw(16) << fx2 << "\n";
  }

  return;
}
//****************************************************************************80

void beta_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BETA_CDF_TEST tests BETA_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 April 2013
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "BETA_CDF_TEST\n";
  cout << "  BETA_CDF evaluates the Beta CDF;\n";
  cout << "  BETA_CDF_INV inverts the Beta CDF.\n";
  cout << "  BETA_PDF evaluates the Beta PDF;\n";

  a = 12.0;
  b = 12.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! beta_check ( a, b ) )
  {
    cout << "\n";
    cout << "BETA_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "             A             B        X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = beta_sample ( a, b, seed );
    pdf = beta_pdf ( x, a, b );
    cdf = beta_cdf ( x, a, b );
    x2 = beta_cdf_inv ( cdf, a, b );

    cout << "  " << setw(12) << a   
         << "  " << setw(12) << b 
         << "  " << setw(12) << x   
         << "  " << setw(12) << pdf 
         << "  " << setw(12) << cdf 
         << "  " << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void beta_inc_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BETA_INC_TEST tests BETA_INC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double fx;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "BETA_INC_TEST:\n";
  cout << "  BETA_INC evaluates the normalized incomplete Beta\n";
  cout << "  function BETA_INC(A,B,X).\n";
  cout << "\n";
  cout << "         A         B         X       Exact F       BETA_INC(A,B,X)\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    beta_inc_values ( n_data, a, b, x, fx );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = beta_inc ( a, b, x );

    cout << "  "
         << setw(8)  << a   << "  "
         << setw(8)  << b   << "  "
         << setw(8)  << x   << "  "
         << setw(16) << fx  << "  "
         << setw(16) << fx2 << "\n";
  }

  return;
}
//****************************************************************************80

void beta_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BETA_SAMPLE_TEST tests BETA_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "BETA_SAMPLE_TEST\n";
  cout << "  BETA_MEAN computes the Beta mean;\n";
  cout << "  BETA_SAMPLE samples the Beta distribution;\n";
  cout << "  BETA_VARIANCE computes the Beta variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! beta_check ( a, b ) )
  {
    cout << "\n";
    cout << "BETA_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = beta_mean ( a, b );
  variance = beta_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = beta_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void beta_binomial_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BETA_BINOMIAL_CDF_TEST tests BETA_BINOMIAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  int c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "BETA_BINOMIAL_CDF_TEST\n";
  cout << "  BETA_BINOMIAL_CDF evaluates the Beta Binomial CDF;\n";
  cout << "  BETA_BINOMIAL_CDF_INV inverts the Beta Binomial CDF.\n";
  cout << "  BETA_BINOMIAL_PDF evaluates the Beta Binomial PDF;\n";

  a = 2.0;
  b = 3.0;
  c = 4;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! beta_binomial_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "BETA_BINOMIAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = beta_binomial_sample ( a, b, c, seed );
    pdf = beta_binomial_pdf ( x, a, b, c );
    cdf = beta_binomial_cdf ( x, a, b, c );
    x2 = beta_binomial_cdf_inv ( cdf, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void beta_binomial_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BETA_BINOMIAL_SAMPLE_TEST tests BETA_BINOMIAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "BETA_BINOMIAL_SAMPLE_TEST\n";
  cout << "  BETA_BINOMIAL_MEAN computes the Beta Binomial mean;\n";
  cout << "  BETA_BINOMIAL_SAMPLE samples the Beta Binomial distribution;\n";
  cout << "  BETA_BINOMIAL_VARIANCE computes the Beta Binomial variance;\n";

  a = 2.0;
  b = 3.0;
  c = 4;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! beta_binomial_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "BETA_BINOMIAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = beta_binomial_mean ( a, b, c );
  variance = beta_binomial_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = beta_binomial_sample ( a, b, c, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void binomial_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BINOMIAL_CDF_TEST tests BINOMIAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "BINOMIAL_CDF_TEST\n";
  cout << "  BINOMIAL_CDF evaluates the Binomial CDF;\n";
  cout << "  BINOMIAL_CDF_INV inverts the Binomial CDF.\n";
  cout << "  BINOMIAL_PDF evaluates the Binomial PDF;\n";

  a = 5;
  b = 0.65;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! binomial_check ( a, b ) )
  {
    cout << "\n";
    cout << "BINOMIAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = binomial_sample ( a, b, seed );
    pdf = binomial_pdf ( x, a, b );
    cdf = binomial_cdf ( x, a, b );
    x2 = binomial_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void binomial_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BINOMIAL_SAMPLE_TEST tests BINOMIAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "BINOMIAL_SAMPLE_TEST\n";
  cout << "  BINOMIAL_MEAN computes the Binomial mean;\n";
  cout << "  BINOMIAL_SAMPLE samples the Binomial distribution;\n";
  cout << "  BINOMIAL_VARIANCE computes the Binomial variance;\n";

  a = 5;
  b = 0.30;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! binomial_check ( a, b ) )
  {
    cout << "\n";
    cout << "BINOMIAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = binomial_mean ( a, b );
  variance = binomial_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = binomial_sample ( a, b, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void birthday_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BIRTHDAY_CDF_TEST tests BIRTHDAY_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int n;
  int n2;
  double pdf;

  cout << "\n";
  cout << "BIRTHDAY_CDF_TEST\n";
  cout << "  BIRTHDAY_CDF evaluates the CDF;\n";
  cout << "  BIRTHDAY_CDF_INV inverts the CDF.\n";
  cout << "  BIRTHDAY_PDF evaluates the PDF;\n";

  cout << "\n";
  cout << "       N            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( n = 1; n <= 30; n++ )
  {
    pdf = birthday_pdf ( n );

    cdf = birthday_cdf ( n );

    n2 = birthday_cdf_inv ( cdf );

    cout << "  " << setw(8)  << n
         << "  " << setw(14) << pdf
         << "  " << setw(14) << cdf
         << "  " << setw(8)  << n2 << "\n";
  }
  return;
}
//****************************************************************************80

void birthday_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BIRTHDAY_SAMPLE_TEST tests BIRTHDAY_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  double mean;
  int n;
  int nsample = 10000;
  double pdf;
  int seed;
  int x[nsample];

  seed = 12345678;

  cout << "\n";
  cout << "BIRTHDAY_SAMPLE_TEST\n";
  cout << "  BIRTHDAY_SAMPLE samples the Birthday distribution.\n";
  cout << "\n";
  cout << "   N            Mean           PDF\n";
  cout << "\n";

  for ( n = 10; n <= 40; n++ )
  {
    for ( i = 0; i < nsample; i++ )
    {
      x[i] = birthday_sample ( n, seed );
    }
    mean = i4vec_mean ( nsample, x );
    pdf = birthday_pdf ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(14) << mean
         << "  " << setw(14) << pdf << "\n";
  }

  return;
}
//****************************************************************************80

void bradford_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BRADFORD_CDF_TEST tests BRADFORD_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "BRADFORD_CDF_TEST\n";
  cout << "  BRADFORD_CDF evaluates the Bradford CDF;\n";
  cout << "  BRADFORD_CDF_INV inverts the Bradford CDF.\n";
  cout << "  BRADFORD_PDF evaluates the Bradford PDF;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! bradford_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "BRADFORD_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = bradford_sample ( a, b, c, seed );
    pdf = bradford_pdf ( x, a, b, c );
    cdf = bradford_cdf ( x, a, b, c );
    x2 = bradford_cdf_inv ( cdf, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void bradford_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BRADFORD_SAMPLE_TEST tests BRADFORD_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "BRADFORD_SAMPLE_TEST\n";
  cout << "  BRADFORD_MEAN computes the Bradford mean;\n";
  cout << "  BRADFORD_SAMPLE samples the Bradford distribution;\n";
  cout << "  BRADFORD_VARIANCE computes the Bradford variance;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! bradford_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "BRADFORD_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = bradford_mean ( a, b, c );
  variance = bradford_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = bradford_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void buffon_box_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BUFFON_BOX_PDF_TEST tests BUFFON_BOX_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  int i;
  int j;
  int k;
  double l;
  double pdf;

  cout << "\n";
  cout << "BUFFON_BOX_PDF_TEST tests BUFFON_BOX_PDF.\n";
  cout << "  BUFFON_BOX_PDF evaluates the Buffon-Laplace PDF, the probability\n";
  cout << "  that, on a grid of cells of width A and height B,\n";
  cout << "  a needle of length L, dropped at random, will cross\n";
  cout << "  at least one grid line.\n";
  cout << "\n";
  cout << "      A         B         L        PDF\n";
  cout << "\n";

  for ( i = 1; i <= 5; i++ )
  {
    a = ( double ) ( i );
    for ( j = 1; j <= 5; j++ )
    {
      b = ( double ) ( j );
      for ( k = 0; k <= 5; k++ )
      {
        l = ( double ) ( k ) * r8_min ( a, b ) / 5.0;
        pdf = buffon_box_pdf ( a, b, l );
        cout << "  " << setw(8) << a
             << "  " << setw(8) << b
             << "  " << setw(8) << l
             << "  " << setw(14) << pdf << "\n";
      }
      cout << "\n";
    }
  }
  return;
}
//****************************************************************************80

void buffon_box_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BUFFON_BOX_SAMPLE_TEST tests BUFFON_BOX_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define TEST_NUM 4

  double a;
  double b;
  double err;
  int hits;
  double l;
  double pi = 3.141592653589793238462643;
  double pi_est;
  int test;
  int trial_num;
  int trial_num_test[TEST_NUM] = { 10, 100, 10000, 1000000 };

  a = 1.0;
  b = 1.0;
  l = 1.0;

  cout << "\n";
  cout << "BUFFON_BOX_SAMPLE_TEST\n";
  cout << "  BUFFON_BOX_SAMPLE simulates a Buffon-Laplace needle dropping\n";
  cout << "  experiment.  On a grid of cells of width A and height B,\n";
  cout << "  a needle of length L is dropped at random.  We count\n";
  cout << "  the number of times it crosses at least one grid line,\n";
  cout << "  and use this to estimate the value of PI.\n";

  cout << "\n";
  cout << "  Cell width A =    " << a << "\n";
  cout << "  Cell height B =   " << b << "\n";
  cout << "  Needle length L = " << l << "\n";
  cout << "\n";
  cout << "    Trials      Hits          Est(Pi)     Err\n";
  cout << "\n";

  for ( test = 0; test < TEST_NUM; test++ )
  {
    trial_num = trial_num_test[test];

    hits = buffon_box_sample ( a, b, l, trial_num );

    if ( 0 < hits )
    {
      pi_est = ( 2.0 * l * ( a + b ) - l * l ) * ( double ) trial_num
        / ( a * b * ( double ) hits );
    }
    else
    {
      pi_est = r8_huge ( );
    }

    err = fabs ( pi_est - pi );

    cout << "  " << setw(8) << trial_num
         << "  " << setw(8) << hits
         << "  " << setw(14) << pi_est
         << "  " << setw(14) << err << "\n";
  }
  return;
# undef TEST_NUM
}
//****************************************************************************80

void buffon_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BUFFON_PDF_TEST tests BUFFON_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  int i;
  int j;
  int k;
  double l;
  double pdf;

  cout << "\n";
  cout << "BUFFON_PDF_TEST\n";
  cout << "  BUFFON_PDF evaluates the Buffon PDF, the probability\n";
  cout << "  that, on a grid of cells of width A,\n";
  cout << "  a needle of length L, dropped at random, will cross\n";
  cout << "  at least one grid line.\n";
  cout << "\n";
  cout << "      A         L        PDF\n";
  cout << "\n";

  for ( i = 1; i <= 5; i++ )
  {
    a = ( double ) ( i );
    for ( k = 0; k <= 5; k++ )
    {
      l = ( double ) ( k ) * a / 5.0;
      pdf = buffon_pdf ( a, l );
      cout << "  " << setw(8) << a
           << "  " << setw(8) << l
           << "  " << setw(14) << pdf << "\n";
    }
    cout << "\n";
  }
  return;
}
//****************************************************************************80

void buffon_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BUFFON_SAMPLE_TEST tests BUFFON_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define TEST_NUM 4

  double a;
  double err;
  int hits;
  double l;
  double pi = 3.141592653589793238462643;
  double pi_est;
  int test;
  int trial_num;
  int trial_num_test[TEST_NUM] = { 10, 100, 10000, 1000000 };

  a = 1.0;
  l = 1.0;

  cout << "\n";
  cout << "BUFFON_SAMPLE_TEST\n";
  cout << "  BUFFON_SAMPLE simulates a Buffon needle dropping\n";
  cout << "  experiment.  On a grid of cells of width A,\n";
  cout << "  a needle of length L is dropped at random.  We count\n";
  cout << "  the number of times it crosses at least one grid line,\n";
  cout << "  and use this to estimate the value of PI.\n";

  cout << "\n";
  cout << "  Cell width A =    " << a << "\n";
  cout << "  Needle length L = " << l << "\n";
  cout << "\n";
  cout << "    Trials      Hits          Est(Pi)     Err\n";
  cout << "\n";

  for ( test = 0; test < TEST_NUM; test++ )
  {
    trial_num = trial_num_test[test];

    hits = buffon_sample ( a, l, trial_num );

    if ( 0 < hits )
    {
      pi_est = ( 2.0 * l * ( double ) trial_num ) / ( a * ( double ) hits );
    }
    else
    {
      pi_est = r8_huge ( );
    }

    err = fabs ( pi_est - pi );

    cout << "  " << setw(8) << trial_num
         << "  " << setw(8) << hits
         << "  " << setw(14) << pi_est
         << "  " << setw(14) << err << "\n";
  }
  return;
# undef TEST_NUM
}
//****************************************************************************80

void burr_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BURR_CDF_TEST tests BURR_CDF, BURR_CDF_INV, BURR_PDF;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  double d;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "BURR_CDF_TEST\n";
  cout << "  BURR_CDF evaluates the Burr CDF;\n";
  cout << "  BURR_CDF_INV inverts the Burr CDF.\n";
  cout << "  BURR_PDF evaluates the Burr PDF;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;
  d = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";
  cout << "  PDF parameter D =      " << d << "\n";

  if ( ! burr_check ( a, b, c, d ) )
  {
    cout << "\n";
    cout << "BURR_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = burr_sample ( a, b, c, d, seed );
    pdf = burr_pdf ( x, a, b, c, d );
    cdf = burr_cdf ( x, a, b, c, d );
    x2 = burr_cdf_inv ( cdf, a, b, c, d );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void burr_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BURR_SAMPLE_TEST tests BURR_MEAN, BURR_SAMPLE, BURR_VARIANCE;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  double d;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "BURR_SAMPLE_TEST\n";
  cout << "  BURR_MEAN computes the Burr mean;\n";
  cout << "  BURR_SAMPLE samples the Burr distribution;\n";
  cout << "  BURR_VARIANCE computes the Burr variance;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;
  d = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";
  cout << "  PDF parameter D =      " << d << "\n";

  if ( ! burr_check ( a, b, c, d ) )
  {
    cout << "\n";
    cout << "BURR_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = burr_mean ( a, b, c, d );
  variance = burr_variance ( a, b, c, d );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = burr_sample ( a, b, c, d, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void cardioid_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CARDIOID_CDF_TEST tests CARDIOID_CDF, CARDIOID_CDF_INV, CARDIOID_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 July 2005
//
//  Author:
//
//    John Burkardt
//
{
  double a = 0.0;
  double b = 0.25;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "CARDIOID_CDF_TEST\n";
  cout << "  CARDIOID_CDF evaluates the Cardioid CDF;\n";
  cout << "  CARDIOID_CDF_INV inverts the Cardioid CDF.\n";
  cout << "  CARDIOID_PDF evaluates the Cardioid PDF;\n";

  cout << "\n";
  cout << "  PDF parameter A = " << a << "\n";
  cout << "  PDF parameter B = " << b << "\n";

  if ( ! cardioid_check ( a, b ) )
  {
    cout << "\n";
    cout << "CARDIOID_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 0; i < 10; i++ )
  {
    x = cardioid_sample ( a, b, seed );
    pdf = cardioid_pdf ( x, a, b );
    cdf = cardioid_cdf ( x, a, b );
    x2 = cardioid_cdf_inv ( cdf, a, b );
    cout << "  " << setw(12) << x
         << "  " << setw(12) << pdf
         << "  " << setw(12) << cdf
         << "  " << setw(12) << x2 << "\n";
  }

  return;
}
//****************************************************************************80

void cardioid_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CARDIOID_SAMPLE_TEST tests CARDIOID_MEAN, CARDIOID_SAMPLE, CARDIOID_VARIANCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a = 0.0;
  double b = 0.25;
  int i;
  int imax;
  int imin;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "CARDIOID_SAMPLE_TEST\n";
  cout << "  CARDIOID_MEAN computes the Cardioid mean;\n";
  cout << "  CARDIOID_SAMPLE samples the Cardioid distribution;\n";
  cout << "  CARDIOID_VARIANCE computes the Cardioid variance.\n";

  cout << "\n";
  cout << "  PDF parameter A = " << a << "\n";
  cout << "  PDF parameter B = " << b << "\n";

  if ( ! cardioid_check ( a, b ) )
  {
    cout << "\n";
    cout << "CARDIOID_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = cardioid_mean ( a, b );
  variance = cardioid_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =                    " << mean << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = cardioid_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void cauchy_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CAUCHY_CDF_TEST tests CAUCHY_CDF, CAUCHY_CDF_INV, CAUCHY_PDF;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "CAUCHY_CDF_TEST\n";
  cout << "  CAUCHY_CDF evaluates the Cauchy CDF;\n";
  cout << "  CAUCHY_CDF_INV inverts the Cauchy CDF.\n";
  cout << "  CAUCHY_PDF evaluates the Cauchy PDF;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! cauchy_check ( a, b ) )
  {
    cout << "\n";
    cout << "CAUCHY_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = cauchy_sample ( a, b, seed );
    pdf = cauchy_pdf ( x, a, b );
    cdf = cauchy_cdf ( x, a, b );
    x2 = cauchy_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void cauchy_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CAUCHY_SAMPLE_TEST tests CAUCHY_MEAN, CAUCHY_SAMPLE, CAUCHY_VARIANCE;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "CAUCHY_SAMPLE_TEST\n";
  cout << "  CAUCHY_MEAN computes the Cauchy mean;\n";
  cout << "  CAUCHY_SAMPLE samples the Cauchy distribution;\n";
  cout << "  CAUCHY_VARIANCE computes the Cauchy variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! cauchy_check ( a, b ) )
  {
    cout << "\n";
    cout << "CAUCHY_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = cauchy_mean ( a, b );
  variance = cauchy_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = cauchy_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void chebyshev1_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHEBYSHEV1_CDF_TEST tests CHEBYSHEV1_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "CHEBYSHEV1_CDF_TEST\n";

  cout << "  CHEBYSHEV1_CDF evaluates the Chebyshev1 CDF;\n";
  cout << "  CHEBYSHEV1_CDF_INV inverts the Chebyshev1 CDF.\n";
  cout << "  CHEBYSHEV1_PDF evaluates the Chebyshev1 PDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = chebyshev1_sample ( seed );
    pdf = chebyshev1_pdf ( x );
    cdf = chebyshev1_cdf ( x );
    x2 = chebyshev1_cdf_inv ( cdf );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void chebyshev1_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHEBYSHEV1_SAMPLE_TEST tests CHEBYSHEV1_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 August 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "CHEBYSHEV1_SAMPLE_TEST\n";
  cout << "  CHEBYSHEV1_MEAN computes the Chebyshev1 mean;\n";
  cout << "  CHEBYSHEV1_SAMPLE samples the Chebyshev1 distribution;\n";
  cout << "  CHEBYSHEV1_VARIANCE computes the Chebyshev1 variance.\n";

  mean     = chebyshev1_mean ( );
  variance = chebyshev1_variance ( );

  cout << "\n";
  cout << "  PDF mean =     " << mean << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = chebyshev1_sample ( seed );
  }

  mean     = r8vec_mean     ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax     = r8vec_max      ( SAMPLE_NUM, x );
  xmin     = r8vec_min      ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void chi_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHI_CDF_TEST tests CHI_CDF, CHI_CDF_INV, CHI_PDF;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "CHI_CDF_TEST\n";
  cout << "  CHI_CDF evaluates the Chi CDF;\n";
  cout << "  CHI_CDF_INV inverts the Chi CDF.\n";
  cout << "  CHI_PDF evaluates the Chi PDF;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! chi_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "CHI_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = chi_sample ( a, b, c, seed );
    pdf = chi_pdf ( x, a, b, c );
    cdf = chi_cdf ( x, a, b, c );
    x2 = chi_cdf_inv ( cdf, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void chi_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHI_SAMPLE_TEST tests CHI_MEAN, CHI_SAMPLE, CHI_VARIANCE;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "CHI_SAMPLE_TEST\n";
  cout << "  CHI_MEAN computes the Chi mean;\n";
  cout << "  CHI_SAMPLE samples the Chi distribution;\n";
  cout << "  CHI_VARIANCE computes the Chi variance;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! chi_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "CHI_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = chi_mean ( a, b, c );
  variance = chi_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = chi_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void chi_square_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHI_SQUARE_CDF_TEST tests CHI_SQUARE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "CHI_SQUARE_CDF_TEST\n";
  cout << "  CHI_SQUARE_CDF evaluates the Chi Square CDF;\n";
  cout << "  CHI_SQUARE_CDF_INV inverts the Chi Square CDF.\n";
  cout << "  CHI_SQUARE_PDF evaluates the Chi Square PDF;\n";

  a = 4.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! chi_square_check ( a ) )
  {
    cout << "\n";
    cout << "CHI_SQUARE_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = chi_square_sample ( a, seed );
    pdf = chi_square_pdf ( x, a );
    cdf = chi_square_cdf ( x, a );
    x2 = chi_square_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void chi_square_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHI_SQUARE_SAMPLE_TEST tests CHI_SQUARE_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int j;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "CHI_SQUARE_SAMPLE_TEST\n";
  cout << "  CHI_SQUARE_MEAN computes the Chi Square mean;\n";
  cout << "  CHI_SQUARE_SAMPLE samples the Chi Square distribution;\n";
  cout << "  CHI_SQUARE_VARIANCE computes the Chi Square variance.\n";

  a = 10.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a        << "\n";

  if ( ! chi_square_check ( a ) )
  {
    cout << "\n";
    cout << "CHI_SQUARE_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = chi_square_mean ( a );
  variance = chi_square_variance ( a );

  cout << "  PDF mean =                    " << mean     << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    x[j] = chi_square_sample ( a, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void chi_square_noncentral_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHI_SQUARE_NONCENTRAL_SAMPLE_TEST tests CHI_SQUARE_NONCENTRAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  int j;
  double mean;
  int seed;
  int seed_init = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "CHI_SQUARE_NONCENTRAL_SAMPLE_TEST\n";
  cout << "  CHI_SQUARE_NONCENTRAL_MEAN computes the Chi Square Noncentral mean;\n";
  cout << "  CHI_SQUARE_NONCENTRAL_SAMPLE samples the Chi Square Noncentral distribution;\n";
  cout << "  CHI_SQUARE_NONCENTRAL_VARIANCE computes the Chi Square Noncentral variance;\n";

  a = 3.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! chi_square_noncentral_check ( a, b ) )
  {
    cout << "\n";
    cout << "CHI_SQUARE_NONCENTRAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = chi_square_noncentral_mean ( a, b );
  variance = chi_square_noncentral_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  seed = seed_init;

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = chi_square_noncentral_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Initial seed =     " << seed_init  << "\n";
  cout << "  Final seed =       " << seed       << "\n";

  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void circular_normal_01_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CIRCULAR_NORMAL_01_SAMPLE_TEST tests CIRCULAR_NORMAL_01_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int j;
  double *mean;
  int seed = 123456789;
  double *variance;
  double x[2*SAMPLE_NUM];
  double *xmax;
  double *xmin;
  double *y;

  cout << "\n";
  cout << "CIRCULAR_NORMAL_01_SAMPLE_TEST\n";
  cout << "  CIRCULAR_NORMAL_01_MEAN computes the Circular Normal 01 mean;\n";
  cout << "  CIRCULAR_NORMAL_01_SAMPLE samples the Circular Normal 01 distribution;\n";
  cout << "  CIRCULAR_NORMAL_01_VARIANCE computes the Circular Normal 01 variance.\n";

  mean = circular_normal_01_mean ( );
  variance = circular_normal_01_variance ( );

  cout << "\n";
  cout << "  PDF mean =     "
    << setw(12) << mean[0] << "  "
    << setw(12) << mean[1] << "\n";
  cout << "  PDF variance = "
    << setw(12) << variance[0] << "  "
    << setw(12) << variance[1] << "\n";

  delete [] mean;
  delete [] variance;

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    y = circular_normal_01_sample ( seed );
    x[0+j*2] = y[0];
    x[1+j*2] = y[1];
    delete [] y;
  }

  mean = r8row_mean ( 2, SAMPLE_NUM, x );
  variance = r8row_variance ( 2, SAMPLE_NUM, x );
  xmax = r8row_max ( 2, SAMPLE_NUM, x );
  xmin = r8row_min ( 2, SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     "
    << setw(12) << mean[0] << "  "
    << setw(12) << mean[1] << "\n";
  cout << "  Sample variance = "
    << setw(12) << variance[0] << "  "
    << setw(12) << variance[1] << "\n";
  cout << "  Sample maximum =  "
    << setw(12) << xmax[0] << "  "
    << setw(12) << xmax[1] << "\n";
  cout << "  Sample minimum =  "
    << setw(12) << xmin[0] << "  "
    << setw(12) << xmin[1] << "\n";

  delete [] mean;
  delete [] variance;
  delete [] xmax;
  delete [] xmin;

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void circular_normal_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CIRCULAR_NORMAL_SAMPLE_TEST tests CIRCULAR_NORMAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 January 2012
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a[2];
  double b;
  int j;
  double *mean;
  int seed = 123456789;
  double *variance;
  double x[2*SAMPLE_NUM];
  double *xmax;
  double *xmin;
  double *y;

  a[0] = 1.0;
  a[1] = 5.0;
  b = 0.75;

  cout << "\n";
  cout << "CIRCULAR_NORMAL_SAMPLE_TEST\n";
  cout << "  CIRCULAR_NORMAL_MEAN computes the Circular Normal mean;\n";
  cout << "  CIRCULAR_NORMAL_SAMPLE samples the Circular Normal distribution;\n";
  cout << "  CIRCULAR_NORMAL_VARIANCE computes the Circular Normal variance.\n";

  mean = circular_normal_mean ( a, b );
  variance = circular_normal_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     "
    << setw(12) << mean[0] << "  "
    << setw(12) << mean[1] << "\n";
  cout << "  PDF variance = "
    << setw(12) << variance[0] << "  "
    << setw(12) << variance[1] << "\n";

  delete [] mean;
  delete [] variance;

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    y = circular_normal_sample ( a, b, seed );
    x[0+j*2] = y[0];
    x[1+j*2] = y[1];
    delete [] y;
  }

  mean = r8row_mean ( 2, SAMPLE_NUM, x );
  variance = r8row_variance ( 2, SAMPLE_NUM, x );
  xmax = r8row_max ( 2, SAMPLE_NUM, x );
  xmin = r8row_min ( 2, SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     "
    << setw(12) << mean[0] << "  "
    << setw(12) << mean[1] << "\n";
  cout << "  Sample variance = "
    << setw(12) << variance[0] << "  "
    << setw(12) << variance[1] << "\n";
  cout << "  Sample maximum =  "
    << setw(12) << xmax[0] << "  "
    << setw(12) << xmax[1] << "\n";
  cout << "  Sample minimum =  "
    << setw(12) << xmin[0] << "  "
    << setw(12) << xmin[1] << "\n";

  delete [] mean;
  delete [] variance;
  delete [] xmax;
  delete [] xmin;

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void cosine_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COSINE_CDF_TEST tests COSINE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "COSINE_CDF_TEST\n";
  cout << "  COSINE_CDF evaluates the Cosine CDF;\n";
  cout << "  COSINE_CDF_INV inverts the Cosine CDF.\n";
  cout << "  COSINE_PDF evaluates theCosine  PDF;\n";

  a = 2.0;
  b = 1.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! cosine_check ( a, b ) )
  {
    cout << "\n";
    cout << "COSINE_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = cosine_sample ( a, b, seed );
    pdf = cosine_pdf ( x, a, b );
    cdf = cosine_cdf ( x, a, b );
    x2 = cosine_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void cosine_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COSINE_SAMPLE_TEST tests COSINE_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 March 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "COSINE_SAMPLE_TEST\n";
  cout << "  COSINE_MEAN computes the Cosine mean;\n";
  cout << "  COSINE_SAMPLE samples the Cosine distribution;\n";
  cout << "  COSINE_VARIANCE computes the Cosine variance;\n";

  a = 2.0;
  b = 1.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! cosine_check ( a, b ) )
  {
    cout << "\n";
    cout << "COSINE_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = cosine_mean ( a, b );
  variance = cosine_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = cosine_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void coupon_complete_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COUPON_COMPLETE_PDF_TEST tests COUPON_COMPLETE_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int box_num;
  double cdf;
  double pdf;
  int type_num;

  cout << "\n";
  cout << "COUPON_COMPLETE_PDF_TEST\n";
  cout << "  COUPON_COMPLETE_PDF evaluates the coupon collector's\n";
  cout << "  complete collection pdf.\n";
  cout << "\n";

  for ( type_num = 2; type_num <= 4; type_num++ )
  {
    cout << "\n";
    cout << "  Number of coupon types is " << type_num << "\n";
    cout << "\n";
    cout << "   BOX_NUM      PDF             CDF\n";
    cout << "\n";
    cdf = 0.0;
    for ( box_num = 1; box_num <= 20; box_num++ )
    {
      pdf = coupon_complete_pdf ( type_num, box_num );
      cdf = cdf + pdf;
      cout << "  " << setw(8) << box_num
           << "  " << setw(14) << pdf
           << "  " << setw(14) << cdf << "\n";
    }
  }

  return;
}
//****************************************************************************80

void coupon_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    COUPON_SAMPLE_TEST tests COUPON_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define N_TRIAL 10
# define MAX_TYPE 25

  double average;
  int coupon[MAX_TYPE];
  double expect;
  int i;
  int n_coupon;
  int n_type;
  int seed = 123456789;

  cout << "\n";
  cout << "COUPON_SAMPLE_TEST:\n";
  cout << "  COUPON_SAMPLE samples the coupon PDF.\n";
  cout << "\n";

  for ( n_type = 5; n_type <= MAX_TYPE; n_type = n_type + 5 )
  {
    cout << "\n";
    cout << "  Number of coupon types is " << n_type << "\n";
    expect = ( double ) ( n_type ) * log ( ( double ) ( n_type ) );
    cout << "  Expected wait is about " << expect << "\n";
    cout << "\n";

    average = 0.0;
    for ( i = 1; i <= N_TRIAL; i++ )
    {
      coupon_sample ( n_type, seed, coupon, &n_coupon );

      cout << "  "
           << setw(6) << i        << "  "
           << setw(6) << n_coupon << "\n";

      average = average + ( double ) ( n_coupon );
    }

    average = average / ( double ) ( N_TRIAL );
    cout << "\n";
    cout << "  Average wait was " << average << "\n";
  }

  return;
# undef N_TRIAL
# undef MAX_TRIAL
}
//****************************************************************************80

void deranged_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DERANGED_CDF_TEST tests DERANGED_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  double cdf;
  int i;
  double pdf;
  int x;
  int x2;

  cout << "\n";
  cout << "DERANGED_CDF_TEST\n";
  cout << "  DERANGED_CDF evaluates the Deranged CDF;\n";
  cout << "  DERANGED_CDF_INV inverts the Deranged CDF.\n";
  cout << "  DERANGED_PDF evaluates the Deranged PDF;\n";

  a = 7;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! deranged_check ( a ) )
  {
    cout << "\n";
    cout << "DERANGED_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( x = 0; i <= a; x++ )
  {
    pdf = deranged_pdf ( x, a );
    cdf = deranged_cdf ( x, a );
    x2 = deranged_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void deranged_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DERANGED_SAMPLE_TEST tests DERANGED_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int a;
  int j;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "DERANGED_SAMPLE_TEST\n";
  cout << "  DERANGED_MEAN computes the Deranged mean;\n";
  cout << "  DERANGED_SAMPLE samples the Deranged distribution;\n";
  cout << "  DERANGED_VARIANCE computes the Deranged variance.\n";

  a = 7;

  cout << "\n";
  cout << "  PDF parameter A =             " << a        << "\n";

  if ( ! deranged_check ( a ) )
  {
    cout << "\n";
    cout << "DERANGED_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = deranged_mean ( a );
  variance = deranged_variance ( a );

  cout << "  PDF mean =                    " << mean     << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    x[j] = deranged_sample ( a, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void dipole_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIPOLE_CDF_TEST tests DIPOLE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define PI 3.14159265358979323
# define TEST_NUM 3

  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int test_i;
  double test_a[TEST_NUM] = { 0.0, PI/4.0, PI/2.0 };
  double test_b[TEST_NUM] = { 1.0, 0.5,    0.0 };
  double x;
  double x2;

  cout << "\n";
  cout << "DIPOLE_CDF_TEST\n";
  cout << "  DIPOLE_CDF evaluates the Dipole CDF;\n";
  cout << "  DIPOLE_CDF_INV inverts the Dipole CDF.\n";
  cout << "  DIPOLE_PDF evaluates the Dipole PDF;\n";

  for ( test_i = 0; test_i < TEST_NUM; test_i++ )
  {
    a = test_a[test_i];
    b = test_b[test_i];

    cout << "\n";
    cout << "  PDF parameter A =      " << a << "\n";
    cout << "  PDF parameter B =      " << b << "\n";

    if ( ! dipole_check ( a, b ) )
    {
      cout << "\n";
      cout << "DIPOLE_CDF_TEST - Fatal error!\n";
      cout << "  The parameters are not legal.\n";
      return;
    }

    cout << "\n";
    cout << "       X            PDF           CDF            CDF_INV\n";
    cout << "\n";

    for ( i = 1; i <= 10; i++ )
    {
      x = dipole_sample ( a, b, seed );
      pdf = dipole_pdf ( x, a, b );
      cdf = dipole_cdf ( x, a, b );
      x2 = dipole_cdf_inv ( cdf, a, b );

      cout << "  "
           << setw(12) << x   << "  "
           << setw(12) << pdf << "  "
           << setw(12) << cdf << "  "
           << setw(12) << x2  << "\n";
    }

  }

  return;
# undef PI
# undef TEST_NUM
}
//****************************************************************************80

void dipole_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIPOLE_SAMPLE_TEST tests DIPOLE_SAMPLE;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000
# define PI 3.14159265358979323
# define TEST_NUM 3

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double test_a[TEST_NUM] = { 0.0, PI / 4.0, PI / 2.0 };
  double test_b[TEST_NUM] = { 1.0, 0.5,    0.0 };
  int test_i;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "DIPOLE_SAMPLE_TEST\n";
  cout << "  DIPOLE_SAMPLE samples the Dipole distribution;\n";

  for ( test_i = 0; test_i < TEST_NUM; test_i++ )
  {
    a = test_a[test_i];
    b = test_b[test_i];

    cout << "\n";
    cout << "  PDF parameter A =      " << a << "\n";
    cout << "  PDF parameter B =      " << b << "\n";

    if ( ! dipole_check ( a, b ) )
    {
      cout << "\n";
      cout << "DIPOLE_SAMPLE_TEST - Fatal error!\n";
      cout << "  The parameters are not legal.\n";
      return;
    }

    for ( i = 0; i < SAMPLE_NUM; i++ )
    {
      x[i] = dipole_sample ( a, b, seed );
    }

    mean = r8vec_mean ( SAMPLE_NUM, x );
    variance = r8vec_variance ( SAMPLE_NUM, x );
    xmax = r8vec_max ( SAMPLE_NUM, x );
    xmin = r8vec_min ( SAMPLE_NUM, x );

    cout << "\n";
    cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
    cout << "  Sample mean =     " << mean     << "\n";
    cout << "  Sample variance = " << variance << "\n";
    cout << "  Sample maximum =  " << xmax     << "\n";
    cout << "  Sample minimum =  " << xmin     << "\n";
  }

  return;
# undef SAMPLE_NUM
# undef PI
# undef TEST_NUM
}
//****************************************************************************80

void dirichlet_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIRICHLET_SAMPLE_TEST tests DIRICHLET_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define N 3
# define SAMPLE_NUM 1000

  double a[N] = { 0.250, 0.500, 1.250 };
  int i;
  int j;
  double *mean;
  double *m2;
  int seed = 123456789;
  double *variance;
  double x[N*SAMPLE_NUM];
  double *xmax;
  double *xmin;
  double *y;

  cout << "\n";
  cout << "DIRICHLET_SAMPLE\n";
  cout << "  DIRICHLET_MEAN computes the Dirichlet mean;\n";
  cout << "  DIRICHLET_SAMPLE samples the Dirichlet distribution;\n";
  cout << "  DIRICHLET_VARIANCE computes the Dirichlet variance;\n";

  cout << "\n";
  cout << "  Number of components N = " << N << "\n";

  r8vec_print ( N, a, "  PDF parameter A:" );

  if ( ! dirichlet_check ( N, a ) )
  {
    cout << "\n";
    cout << "DIRICHLET_SAMPLE - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = dirichlet_mean ( N, a );
  variance = dirichlet_variance ( N, a );
  r8vec_print ( N, mean, "  PDF mean:" );
  r8vec_print ( N, variance, "  PDF variance:" );

  delete [] mean;
  delete [] variance;

  m2 = dirichlet_moment2 ( N, a );

  r8mat_print ( N, N, m2, "  Second moment matrix:" );

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    y = dirichlet_sample ( N, a, seed );
    for ( i = 0; i < N; i++ )
    {
      x[i+j*N] = y[i];
    }
    delete [] y;
  }

  mean = r8row_mean ( N, SAMPLE_NUM, x );
  variance = r8row_variance ( N, SAMPLE_NUM, x );
  xmax = r8row_max ( N, SAMPLE_NUM, x );
  xmin = r8row_min ( N, SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "\n";
  cout << "  Component Mean, Variance, Min, Max:\n";
  cout << "\n";

  for ( i = 0; i < N; i++ )
  {
    cout << "  "
         << setw(6)  << i           << "  "
         << setw(12) << mean[i]     << "  "
         << setw(12) << variance[i] << "  "
         << setw(12) << xmax[i]     << "  "
         << setw(12) << xmin[i]     << "\n";
  }

  delete [] mean;
  delete [] m2;
  delete [] variance;
  delete [] xmax;
  delete [] xmin;

  return;
# undef N
# undef SAMPLE_NUM
}
//****************************************************************************80

void dirichlet_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIRICHLET_PDF_TEST tests DIRICHLET_PDF;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define N 3

  double a[N] = { 0.250, 0.500, 1.250 };
  int i;
  double pdf;
  double x[N] = { 0.500, 0.125, 0.375 };

  cout << "\n";
  cout << "DIRICHLET_PDF_TEST\n";
  cout << "  DIRICHLET_PDF evaluates the Dirichlet PDF;\n";

  cout << "\n";
  cout << "  Number of components N = " << N << "\n";

  r8vec_print ( N, a, "  PDF parameter A:" );

  if ( ! dirichlet_check ( N, a ) )
  {
    cout << "\n";
    cout << "DIRICHLET_PDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  r8vec_print ( N, x, "  PDF argument X:" );

  pdf = dirichlet_pdf ( x, N, a );

  cout << "\n";
  cout << "  PDF value = " << pdf  << "\n";

  return;
# undef N
}
//****************************************************************************80

void dirichlet_mix_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIRICHLET_MIX_SAMPLE_TEST tests DIRICHLET_MIX_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define COMP_NUM 2
# define ELEM_NUM 3
# define SAMPLE_NUM 1000

  double a[ELEM_NUM*COMP_NUM] = {
    0.250, 0.500, 1.250,
    1.500, 0.500, 2.000 };
  int comp;
  int comp_i;
  double comp_weight[COMP_NUM] = { 1.0, 2.0 };
  int elem_i;
  int i;
  int j;
  double *mean;
  double pdf;
  int seed = 123456789;
  double *variance;
  double x[ELEM_NUM*SAMPLE_NUM];
  double *xmax;
  double *xmin;
  double *y;

  cout << "\n";
  cout << "DIRICHLET_MIX_SAMPLE_TEST\n";
  cout << "  DIRICHLET_MIX_SAMPLE samples the Dirichlet Mix distribution;\n";
  cout << "  DIRICHLET_MIX_MEAN computes the Dirichlet Mix mean;\n";

  cout << "\n";
  cout << "  Number of elements ELEM_NUM =   " << ELEM_NUM << "\n";
  cout << "  Number of components COMP_NUM = " << COMP_NUM << "\n";
  r8mat_print ( ELEM_NUM, COMP_NUM, a, "  PDF parameters A(ELEM,COMP):" );
  r8vec_print ( COMP_NUM, comp_weight, "  Component weights" );

  if ( ! dirichlet_mix_check ( COMP_NUM, ELEM_NUM, a, comp_weight ) )
  {
    cout << "\n";
    cout << "DIRICHLET_MIX_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = dirichlet_mix_mean ( COMP_NUM, ELEM_NUM, a, comp_weight );

  r8vec_print ( ELEM_NUM, mean, "  PDF mean:" );

  delete [] mean;

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    y = dirichlet_mix_sample ( COMP_NUM, ELEM_NUM, a, comp_weight, seed,
      &comp );

    for ( i = 0; i < ELEM_NUM; i++ )
    {
      x[i+j*ELEM_NUM] = y[i];
    }
    delete [] y;
  }

  mean = r8row_mean ( ELEM_NUM, SAMPLE_NUM, x );
  variance = r8row_variance ( ELEM_NUM, SAMPLE_NUM, x );
  xmax = r8row_max ( ELEM_NUM, SAMPLE_NUM, x );
  xmin = r8row_min ( ELEM_NUM, SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "\n";
  cout << "  Component Mean, Variance, Max, Min:\n";
  cout << "\n";

  for ( i = 0; i < ELEM_NUM; i++ )
  {
    cout << "  "
         << setw(6)  << i           << "  "
         << setw(12) << mean[i]     << "  "
         << setw(12) << variance[i] << "  "
         << setw(12) << xmax[i]     << "  "
         << setw(12) << xmin[i]     << "\n";
  }

  delete [] mean;
  delete [] variance;
  delete [] xmax;
  delete [] xmin;

  return;
}
//****************************************************************************80

void dirichlet_mix_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DIRICHLET_MIX_PDF_TEST tests DIRICHLET_MIX_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define COMP_NUM 2
# define ELEM_NUM 3

  double a[ELEM_NUM*COMP_NUM] = {
    0.250, 0.500, 1.250,
    1.500, 0.500, 2.000 };
  int comp_i;
  double comp_weight[COMP_NUM] = { 1.0, 2.0 };
  int elem_i;
  double pdf;
  double x[ELEM_NUM] = { 0.500, 0.125, 0.375 };

  cout << "\n";
  cout << "DIRICHLET_MIX_PDF_TEST\n";
  cout << "  DIRICHLET_MIX_PDF evaluates the Dirichlet Mix PDF.\n";

  cout << flush;

  cout << "\n";
  cout << "  Number of elements ELEM_NUM =   " << ELEM_NUM << "\n";
  cout << "  Number of components COMP_NUM = " << COMP_NUM << "\n";
  r8mat_print ( ELEM_NUM, COMP_NUM, a, "  PDF parameters A(ELEM,COMP):" );
  r8vec_print ( COMP_NUM, comp_weight, "  Component weights" );

  cout << flush;

  if ( ! dirichlet_mix_check ( COMP_NUM, ELEM_NUM, a, comp_weight ) )
  {
    cout << "\n";
    cout << "DIRICHLET_MIX_PDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  r8vec_print ( ELEM_NUM, x, "  PDF argument X:" );

  cout << flush;

  pdf = dirichlet_mix_pdf ( x, COMP_NUM, ELEM_NUM, a, comp_weight );

  cout << "\n";
  cout << "  PDF value =           " << pdf << "\n";

  return;
# undef COMP_NUM
# undef ELEM_NUM
}
//****************************************************************************80

void discrete_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DISCRETE_CDF_TEST tests DISCRETE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define A 6

  double b[A] = { 1.0, 2.0, 6.0, 2.0, 4.0, 1.0 };
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "DISCRETE_CDF_TEST\n";
  cout << "  DISCRETE_CDF evaluates the Discrete CDF;\n";
  cout << "  DISCRETE_CDF_INV inverts the Discrete CDF.\n";
  cout << "  DISCRETE_PDF evaluates the Discrete PDF;\n";

  cout << "\n";
  cout << "  PDF parameter A =      " << A << "\n";
  r8vec_print ( A, b, "  PDF parameter B:" );

  if ( ! discrete_check ( A, b ) )
  {
    cout << "\n";
    cout << "DISCRETE_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }


  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = discrete_sample ( A, b, seed );
    pdf = discrete_pdf ( x, A, b );
    cdf = discrete_cdf ( x, A, b );
    x2 = discrete_cdf_inv ( cdf, A, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
# undef A
}
//****************************************************************************80

void discrete_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DISCRETE_SAMPLE_TEST tests DISCRETE_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define A 6
# define SAMPLE_NUM 1000

  double b[A] = { 1.0, 2.0, 6.0, 2.0, 4.0, 1.0 };
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "DISCRETE_SAMPLE_TEST\n";
  cout << "  DISCRETE_MEAN computes the Discrete mean;\n";
  cout << "  DISCRETE_SAMPLE samples the Discrete distribution;\n";
  cout << "  DISCRETE_VARIANCE computes the Discrete variance;\n";

  cout << "\n";
  cout << "  PDF parameter A =      " << A << "\n";
  r8vec_print ( A, b, "  PDF parameter B:" );

  if ( ! discrete_check ( A, b ) )
  {
    cout << "\n";
    cout << "DISCRETE_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = discrete_mean ( A, b );
  variance = discrete_variance ( A, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = discrete_sample ( A, b, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef A
# undef SAMPLE_NUM
}
//****************************************************************************80

void disk_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    DISK_SAMPLE_TEST tests DISK_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 March 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int j;
  double *mean;
  int seed = 123456789;
  double variance;
  double x[2*SAMPLE_NUM];
  double *xmax;
  double *xmin;
  double *y;

  cout << "\n";
  cout << "DISK_SAMPLE\n";
  cout << "  DISK_MEAN returns the Disk mean;\n";
  cout << "  DISK_SAMPLE samples the Disk distribution;\n";
  cout << "  DISK_VARIANCE returns the Disk variance;\n";

  a = 10.0;
  b = 4.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  mean = disk_mean ( a, b, c );
  variance = disk_variance ( a, b, c );

  cout << "\n";
  cout << "  Disk mean =" 
       << "  " << setw(12) << mean[0]
       << "  " << setw(12) << mean[1] << "\n";
  cout << "  Disk variance = " << setw(12) << variance << "\n";

  delete [] mean;

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    y = disk_sample ( a, b, c, seed );
    x[0+j*2] = y[0];
    x[1+j*2] = y[1];
    delete [] y;
  }

  variance = 0.0;
  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    variance = variance + pow ( x[0+j*2] - a, 2 ) + pow ( x[1+j*2] - b, 2 ); 
  }
  variance = variance / ( double )  ( SAMPLE_NUM );


  mean = r8row_mean ( 2, SAMPLE_NUM, x );
  xmax = r8row_max ( 2, SAMPLE_NUM, x );
  xmin = r8row_min ( 2, SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     "
    << setw(12) << mean[0] << "  "
    << setw(12) << mean[1] << "\n";
  cout << "  Sample variance = "
    << setw(12) << variance << "\n";
  cout << "  Sample maximum =  "
    << setw(12) << xmax[0] << "  "
    << setw(12) << xmax[1] << "\n";
  cout << "  Sample minimum =  "
    << setw(12) << xmin[0] << "  "
    << setw(12) << xmin[1] << "\n";

  delete [] mean;
  delete [] xmax;
  delete [] xmin;

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void empirical_discrete_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EMPIRICAL_DISCRETE_CDF_TEST tests EMPIRICAL_DISCRETE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define A 6

  double b[A] = { 1.0, 1.0, 3.0, 2.0, 1.0, 2.0 };
  double c[A] = { 0.0, 1.0, 2.0, 4.5, 6.0, 10.0 };
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "EMPIRICAL_DISCRETE_CDF_TEST\n";
  cout << "  EMPIRICAL_DISCRETE_CDF evaluates the Empirical Discrete CDF;\n";
  cout << "  EMPIRICAL_DISCRETE_CDF_INV inverts the Empirical Discrete CDF.\n";
  cout << "  EMPIRICAL_DISCRETE_PDF evaluates the Empirical Discrete PDF;\n";

  cout << "\n";
  cout << "  PDF parameter A = " << A   << "\n";
  r8vec_print ( A, b, "  PDF parameter B = " );
  r8vec_print ( A, c, "  PDF parameter C = " );

  if ( ! empirical_discrete_check ( A, b, c ) )
  {
    cout << "\n";
    cout << "EMPIRICAL_DISCRETE_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = empirical_discrete_sample ( A, b, c, seed );
    pdf = empirical_discrete_pdf ( x, A, b, c );
    cdf = empirical_discrete_cdf ( x, A, b, c );
    x2 = empirical_discrete_cdf_inv ( cdf, A, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
# undef A
}
//****************************************************************************80

void empirical_discrete_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EMPIRICAL_DISCRETE_SAMPLE_TEST tests EMPIRICAL_DISCRETE_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 October 2008
//
//  Author:
//
//    John Burkardt
//
{
# define A 6
# define SAMPLE_NUM 1000

  double b[A] = { 1.0, 1.0, 3.0, 2.0, 1.0, 2.0 };
  double c[A] = { 0.0, 1.0, 2.0, 4.5, 6.0, 10.0 };
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "EMPIRICAL_DISCRETE_SAMPLE_TEST\n";
  cout << "  EMPIRICAL_DISCRETE_MEAN computes the Empirical Discrete mean;\n";
  cout << "  EMPIRICAL_DISCRETE_SAMPLE samples the Empirical Discrete distribution;\n";
  cout << "  EMPIRICAL_DISCRETE_VARIANCE computes the Empirical Discrete variance.\n";

  cout << "\n";
  cout << "  PDF parameter A = " << A   << "\n";
  r8vec_print ( A, b, "  PDF parameter B = " );
  r8vec_print ( A, c, "  PDF parameter C = " );

  if ( ! empirical_discrete_check ( A, b, c ) )
  {
    cout << "\n";
    cout << "EMPIRICAL_DISCRETE_SAMPLE_TEST- Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = empirical_discrete_mean ( A, b, c );
  variance = empirical_discrete_variance ( A, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = empirical_discrete_sample ( A, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef A
# undef SAMPLE_NUM
}
//****************************************************************************80

void english_letter_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ENGLISH_LETTER_CDF_TEST tests ENGLISH_LETTER_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  char c;
  char c2;
  double cdf;
  int i;
  double pdf;
  int seed;

  cout << "\n";
  cout << "ENGLISH_LETTER_CDF_TEST\n";
  cout << "  ENGLISH_LETTER_CDF evaluates the English Letter CDF;\n";
  cout << "  ENGLISH_LETTER_CDF_INV inverts the English Letter CDF.\n";
  cout << "  ENGLISH_LETTER_PDF evaluates the English Letter PDF;\n";

  seed = 123456789;

  cout << "\n";
  cout << "   C              PDF             CDF    CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    c = english_letter_sample ( seed );
    pdf = english_letter_pdf ( c );
    cdf = english_letter_cdf ( c );
    c2 = english_letter_cdf_inv ( cdf );

    cout << "  '" << c << "'"
         << "  " << setw(14) << pdf
         << "  " << setw(14) << cdf
         << "  '" << c2 << "'\n";
  }

  return;
}
//****************************************************************************80

void english_sentence_length_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ENGLISH_SENTENCE_LENGTH_CDF_TEST tests ENGLISH_SENTENCE_LENGTH_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "ENGLISH_SENTENCE_LENGTH_CDF_TEST\n";
  cout << "  ENGLISH_SENTENCE_LENGTH_CDF evaluates the English Sentence Length CDF;\n";
  cout << "  ENGLISH_SENTENCE_LENGTH_CDF_INV inverts the English Sentence Length CDF.\n";
  cout << "  ENGLISH_SENTENCE_LENGTH_PDF evaluates the English Sentence Length PDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = english_sentence_length_sample ( seed );

    pdf = english_sentence_length_pdf ( x );

    cdf = english_sentence_length_cdf ( x );

    x2 = english_sentence_length_cdf_inv ( cdf );

    cout << "  " << setw(12) << x
         << "  " << setw(12) << pdf
         << "  " << setw(12) << cdf
         << "  " << setw(12) << x2 << "\n";
  }

  return;
}
//****************************************************************************80

void english_sentence_length_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ENGLISH_SENTENCE_LENGTH_SAMPLE_TEST tests ENGLISH_SENTENCE_LENGTH_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "ENGLISH_SENTENCE_LENGTH_SAMPLE_TEST\n";
  cout << "  ENGLISH_SENTENCE_LENGTH_MEAN computes the English Sentence Length mean;\n";
  cout << "  ENGLISH_SENTENCE_LENGTH_SAMPLE samples the English Sentence Length distribution;\n";
  cout << "  ENGLISH_SENTENCE_LENGTH_VARIANCE computes the English Sentence Length variance.\n";

  mean = english_sentence_length_mean ( );
  variance = english_sentence_length_variance ( );

  cout << "\n";
  cout << "  PDF mean =                    " << mean << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = english_sentence_length_sample ( seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM << "\n";
  cout << "  Sample mean =     " << mean << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax << "\n";
  cout << "  Sample minimum =  " << xmin << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void english_word_length_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ENGLISH_WORD_LENGTH_CDF_TEST tests ENGLISH_WORD_LENGTH_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "ENGLISH_WORD_LENGTH_CDF_TEST\n";
  cout << "  ENGLISH_WORD_LENGTH_CDF evaluates the English Word LengthCDF;\n";
  cout << "  ENGLISH_WORD_LENGTH_CDF_INV inverts the English Word LengthCDF.\n";
  cout << "  ENGLISH_WORD_LENGTH_PDF evaluates the English Word LengthPDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = english_word_length_sample ( seed );

    pdf = english_word_length_pdf ( x );

    cdf = english_word_length_cdf ( x );

    x2 = english_word_length_cdf_inv ( cdf );

    cout << "  " << setw(12) << x
         << "  " << setw(12) << pdf
         << "  " << setw(12) << cdf
         << "  " << setw(12) << x2 << "\n";
  }

  return;
}
//****************************************************************************80

void english_word_length_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ENGLISH_WORD_LENGTH_SAMPLE_TEST tests ENGLISH_WORD_LENGTH_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "ENGLISH_WORD_LENGTH_SAMPLE_TEST\n";
  cout << "  ENGLISH_WORD_LENGTH_MEAN computes the English Word Lengthmean;\n";
  cout << "  ENGLISH_WORD_LENGTH_SAMPLE samples the English Word Lengthdistribution;\n";
  cout << "  ENGLISH_WORD_LENGTH_VARIANCE computes the English Word Lengthvariance.\n";

  mean = english_word_length_mean ( );
  variance = english_word_length_variance ( );

  cout << "\n";
  cout << "  PDF mean =                    " << mean << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = english_word_length_sample ( seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM << "\n";
  cout << "  Sample mean =     " << mean << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax << "\n";
  cout << "  Sample minimum =  " << xmin << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void erlang_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ERLANG_CDF_TEST tests ERLANG_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  int c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "ERLANG_CDF_TEST\n";
  cout << "  ERLANG_CDF evaluates the Erlang CDF;\n";
  cout << "  ERLANG_CDF_INV inverts the Erlang CDF.\n";
  cout << "  ERLANG_PDF evaluates the Erlang PDF;\n";

  a = 1.0;
  b = 2.0;
  c = 3;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! erlang_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "ERLANG_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = erlang_sample ( a, b, c, seed );
    pdf = erlang_pdf ( x, a, b, c );
    cdf = erlang_cdf ( x, a, b, c );
    x2 = erlang_cdf_inv ( cdf, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void erlang_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ERLANG_SAMPLE_TEST tests ERLANG_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "ERLANG_SAMPLE_TEST\n";
  cout << "  ERLANG_MEAN computes the Erlang mean;\n";
  cout << "  ERLANG_SAMPLE samples the Erlang distribution;\n";
  cout << "  ERLANG_VARIANCE computes the Erlang variance;\n";

  a = 1.0;
  b = 2.0;
  c = 3;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! erlang_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "ERLANG_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = erlang_mean ( a, b, c );
  variance = erlang_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = erlang_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void exponential_01_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EXPONENTIAL_01_CDF_TEST tests EXPONENTIAL_01_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "EXPONENTIAL_01_CDF_TEST\n";
  cout << "  EXPONENTIAL_01_CDF evaluates the Exponential 01 CDF;\n";
  cout << "  EXPONENTIAL_01_CDF_INV inverts the Exponential 01 CDF.\n";
  cout << "  EXPONENTIAL_01_PDF evaluates the Exponential 01 PDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = exponential_01_sample ( seed );
    pdf = exponential_01_pdf ( x );
    cdf = exponential_01_cdf ( x );
    x2 = exponential_01_cdf_inv ( cdf );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void exponential_01_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EXPONENTIAL_01_SAMPLE_TEST tests EXPONENTIAL_01_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 March 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "EXPONENTIAL_01_SAMPLE_TEST\n";
  cout << "  EXPONENTIAL_01_MEAN computes the Exponential 01 mean;\n";
  cout << "  EXPONENTIAL_01_SAMPLE samples the Exponential 01 distribution;\n";
  cout << "  EXPONENTIAL_01_VARIANCE computes the Exponential 01 variance.\n";

  mean     = exponential_01_mean ( );
  variance = exponential_01_variance ( );

  cout << "\n";
  cout << "  PDF mean =     " << mean << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = exponential_01_sample ( seed );
  }

  mean     = r8vec_mean     ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax     = r8vec_max      ( SAMPLE_NUM, x );
  xmin     = r8vec_min      ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void exponential_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EXPONENTIAL_CDF_TEST tests EXPONENTIAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "EXPONENTIAL_CDF_TEST\n";
  cout << "  EXPONENTIAL_CDF evaluates the Exponential CDF;\n";
  cout << "  EXPONENTIAL_CDF_INV inverts the Exponential CDF.\n";
  cout << "  EXPONENTIAL_PDF evaluates the Exponential PDF;\n";

  a = 1.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! exponential_check ( a, b ) )
  {
    cout << "\n";
    cout << "EXPONENTIAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = exponential_sample ( a, b, seed );
    pdf = exponential_pdf ( x, a, b );
    cdf = exponential_cdf ( x, a, b );
    x2 = exponential_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void exponential_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EXPONENTIAL_SAMPLE_TEST tests EXPONENTIAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "EXPONENTIAL_SAMPLE_TEST\n";
  cout << "  EXPONENTIAL_MEAN computes the Exponential mean;\n";
  cout << "  EXPONENTIAL_SAMPLE samples the Exponential distribution;\n";
  cout << "  EXPONENTIAL_VARIANCE computes the Exponential variance;\n";

  a = 1.0;
  b = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! exponential_check ( a, b ) )
  {
    cout << "\n";
    cout << "EXPONENTIAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = exponential_mean ( a, b );
  variance = exponential_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = exponential_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void extreme_values_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EXTREME_VALUES_CDF_TEST tests EXTREME_VALUES_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "EXTREME_VALUES_CDF_TEST\n";
  cout << "  EXTREME_VALUES_CDF evaluates the Extreme Values CDF;\n";
  cout << "  EXTREME_VALUES_CDF_INV inverts the Extreme Values CDF.\n";
  cout << "  EXTREME_VALUES_PDF evaluates the Extreme Values PDF;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! extreme_values_check ( a, b ) )
  {
    cout << "\n";
    cout << "EXTREME_VALUES_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = extreme_values_sample ( a, b, seed );
    pdf = extreme_values_pdf ( x, a, b );
    cdf = extreme_values_cdf ( x, a, b );
    x2 = extreme_values_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void extreme_values_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    EXTREME_VALUES_SAMPLE_TEST tests EXTREME_VALUES_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "EXTREME_VALUES_SAMPLE_TEST\n";
  cout << "  EXTREME_VALUES_MEAN computes the Extreme Values mean;\n";
  cout << "  EXTREME_VALUES_SAMPLE samples the Extreme Values distribution;\n";
  cout << "  EXTREME_VALUES_VARIANCE computes the Extreme Values variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! extreme_values_check ( a, b ) )
  {
    cout << "\n";
    cout << "EXTREME_VALUES_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = extreme_values_mean ( a, b );
  variance = extreme_values_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = extreme_values_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void f_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    F_CDF_TEST tests F_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  int m;
  int n;
  double pdf;
  int seed = 123456789;
  double x;

  cout << "\n";
  cout << "F_CDF_TEST\n";
  cout << "  F_CDF evaluates the F CDF;\n";
  cout << "  F_PDF evaluates the F PDF;\n";
  cout << "  F_SAMPLE samples the F PDF;\n";

  m = 1;
  n = 1;

  cout << "\n";
  cout << "  PDF parameter M = " << m   << "\n";
  cout << "  PDF parameter N = " << n   << "\n";

  if ( ! f_check ( m, n ) )
  {
    cout << "\n";
    cout << "F_CDF_TEST - Fatal error!\n";
    cout << "  The parameter values are illegal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = f_sample ( m, n, seed );
    pdf = f_pdf ( x, m, n );
    cdf = f_cdf ( x, m, n );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "\n";
  }

  return;
}
//****************************************************************************80

void f_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    F_SAMPLE_TEST tests F_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  int m;
  double mean;
  int n;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "F_SAMPLE_TEST\n";
  cout << "  F_MEAN computes the F mean;\n";
  cout << "  F_SAMPLE samples the F distribution;\n";
  cout << "  F_VARIANCE computes the F variance;\n";

  m = 8;
  n = 6;

  cout << "\n";
  cout << "  PDF parameter M = " << m << "\n";
  cout << "  PDF parameter N = " << n << "\n";

  if ( ! f_check ( m, n ) )
  {
    cout << "\n";
    cout << "F_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = f_mean ( m, n );
  variance = f_variance ( m, n );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = f_sample ( m, n, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void fermi_dirac_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    FERMI_DIRAC_SAMPLE_TEST tests FERMI_DIRAC_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  double mean;
  int sample_num = 10000;
  int seed;
  int test;
  double u;
  double u_test[7] = {
   1.0, 2.0, 4.0, 8.0, 16.0, 
  32.0, 1.0  };
  double v;
  double v_test[7] = {
   1.0, 1.0, 1.0, 1.0, 1.0, 
   1.0, 0.25  };
  double variance;
  double x[10000];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "FERMI_DIRAC_SAMPLE_TEST\n";
  cout << "  FERMI_DIRAC_SAMPLE samples the Fermi Dirac distribution.\n";

  for ( test = 0; test < 7; test++ )
  {
    u = u_test[test];
    v = v_test[test];
    seed = 123456789;

    cout << "\n";
    cout << "  U =          " << u << "\n";
    cout << "  V =          " << v << "\n";

    for ( i = 0; i < sample_num; i++ )
    {
      x[i] = fermi_dirac_sample ( u, v, seed );
    }

    mean = r8vec_mean ( sample_num, x );
    variance = r8vec_variance ( sample_num, x );
    xmax = r8vec_max ( sample_num, x );
    xmin = r8vec_min ( sample_num, x );

    cout << "\n";
    cout << "  Sample size =     " << mean << "\n";
    cout << "  Sample mean =     " << mean << "\n";
    cout << "  Sample variance = " << variance << "\n";
    cout << "  Sample maximum =  " << xmax << "\n";
    cout << "  Sample minimum =  " << xmin << "\n";
  }

  return;
}
//****************************************************************************80

void fisher_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    FISHER_PDF_TEST tests FISHER_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int j;
  double kappa;
  double mu[3];
  int n = 10;
  double pdf;
  int seed;
  int test;
  int test_num = 3;
  double *x;

  cout << "\n";
  cout << "FISHER_SAMPLE_TEST\n";
  cout << "  FISHER_PDF evaluates the Fisher PDF.\n";

  for ( test = 1; test <= test_num; test++ )
  {
    if ( test == 1 )
    {
      kappa = 0.0;
      mu[0] = 1.0;
      mu[1] = 0.0;
      mu[2] = 0.0;
    }
    else if ( test == 2 )
    {
      kappa = 0.5;
      mu[0] = 1.0;
      mu[1] = 0.0;
      mu[2] = 0.0;
    }
    else if ( test == 3 )
    {
      kappa = 10.0;
      mu[0] = 1.0;
      mu[1] = 0.0;
      mu[2] = 0.0;
    }

    cout << "\n";
    cout << "  PDF parameters:\n";
    cout << "    Concentration parameter KAPPA = " << kappa << "\n";
    cout << "    Direction MU(1:3) = "
         << "  " << mu[0]
         << "  " << mu[1]
         << "  " << mu[2] << "\n";

    cout << "\n";
    cout << "      X                         PDF\n";
    cout << "\n";

    seed = 123456789;

    for ( j = 0; j < n; j++ )
    {
      x = fisher_sample ( kappa, mu, 1, seed );

      pdf = fisher_pdf ( x, kappa, mu );

      cout << "  " << setw(10) << x[0]
           << "  " << setw(10) << x[1]
           << "  " << setw(10) << x[2]
           << "  " << setw(14) << pdf << "\n";

      delete [] x;
    }

  }
  return;
}
//****************************************************************************80

void fisk_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    FISK_CDF_TEST tests FISK_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "FISK_CDF_TEST\n";
  cout << "  FISK_CDF evaluates the Fisk CDF;\n";
  cout << "  FISK_CDF_INV inverts the Fisk CDF.\n";
  cout << "  FISK_PDF evaluates the Fisk PDF;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! fisk_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "FISK_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = fisk_sample ( a, b, c, seed );
    pdf = fisk_pdf ( x, a, b, c );
    cdf = fisk_cdf ( x, a, b, c );
    x2 = fisk_cdf_inv ( cdf, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void fisk_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    FISK_SAMPLE_TEST tests FISK_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "FISK_SAMPLE_TEST\n";
  cout << "  FISK_MEAN computes the Fisk mean;\n";
  cout << "  FISK_SAMPLE samples the Fisk distribution;\n";
  cout << "  FISK_VARIANCE computes the Fisk variance;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! fisk_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "FISK_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = fisk_mean ( a, b, c );
  variance = fisk_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = fisk_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void folded_normal_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    FOLDED_NORMAL_CDF_TEST tests FOLDED_NORMAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "FOLDED_NORMAL_CDF_TEST\n";
  cout << "  FOLDED_NORMAL_CDF evaluates the Folded Normal CDF;\n";
  cout << "  FOLDED_NORMAL_CDF_INV inverts the Folded Normal CDF.\n";
  cout << "  FOLDED_NORMAL_PDF evaluates the Folded Normal PDF;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! folded_normal_check ( a, b ) )
  {
    cout << "\n";
    cout << "FOLDED_NORMAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = folded_normal_sample ( a, b, seed );
    pdf = folded_normal_pdf ( x, a, b );
    cdf = folded_normal_cdf ( x, a, b );
    x2 = folded_normal_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void folded_normal_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    FOLDED_NORMAL_SAMPLE_TEST tests FOLDED_NORMAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "FOLDED_NORMAL_SAMPLE_TEST\n";
  cout << "  FOLDED_NORMAL_MEAN computes the Folded Normal mean;\n";
  cout << "  FOLDED_NORMAL_SAMPLE samples the Folded Normal distribution;\n";
  cout << "  FOLDED_NORMAL_VARIANCE computes the Folded Normal variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! folded_normal_check ( a, b ) )
  {
    cout << "\n";
    cout << "FOLDED_NORMAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = folded_normal_mean ( a, b );
  variance = folded_normal_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = folded_normal_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void frechet_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    FRECHET_CDF_TEST tests FRECHET_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double alpha;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "FRECHET_CDF_TEST\n";
  cout << "  FRECHET_CDF evaluates the Frechet CDF;\n";
  cout << "  FRECHET_CDF_INV inverts the Frechet CDF.\n";
  cout << "  FRECHET_PDF evaluates the Frechet PDF;\n";

  alpha = 3.0;

  cout << "\n";
  cout << "  PDF parameter ALPHA =  " << alpha << "\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = frechet_sample ( alpha, seed );
    pdf = frechet_pdf ( x, alpha );
    cdf = frechet_cdf ( x, alpha );
    x2 = frechet_cdf_inv ( cdf, alpha );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void frechet_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    FRECHET_SAMPLE_TEST tests FRECHET_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double alpha;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "FRECHET_SAMPLE_TEST\n";
  cout << "  FRECHET_MEAN computes the Frechet mean;\n";
  cout << "  FRECHET_SAMPLE samples the Frechet distribution;\n";
  cout << "  FRECHET_VARIANCE computes the Frechet variance;\n";

  alpha = 3.0;

  cout << "\n";
  cout << "  PDF parameter ALPHA =  " << alpha << "\n";

  mean = frechet_mean ( alpha );
  variance = frechet_variance ( alpha );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = frechet_sample ( alpha, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void gamma_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GAMMA_CDF_TEST tests GAMMA_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;

  cout << "\n";
  cout << "GAMMA_CDF_TEST\n";
  cout << "  GAMMA_CDF evaluates the Gamma CDF;\n";
  cout << "  GAMMA_PDF evaluates the Gamma PDF;\n";
  cout << "  GAMMA_SAMPLE samples the Gamma PDF;\n";

  a = 1.0;
  b = 1.5;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A = " << a   << "\n";
  cout << "  PDF parameter B = " << b   << "\n";
  cout << "  PDF parameter B = " << c   << "\n";

  if ( ! gamma_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "GAMMA_CDF_TEST - Fatal error!\n";
    cout << "  The parameter values are illegal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = gamma_sample ( a, b, c, seed );
    pdf = gamma_pdf ( x, a, b, c );
    cdf = gamma_cdf ( x, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "\n";
  }

  return;
}
//****************************************************************************80

void gamma_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GAMMA_SAMPLE_TEST tests GAMMA_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "GAMMA_SAMPLE_TEST\n";
  cout << "  GAMMA_MEAN computes the Gamma mean;\n";
  cout << "  GAMMA_SAMPLE samples the Gamma distribution;\n";
  cout << "  GAMMA_VARIANCE computes the Gamma variance;\n";

  a = 1.0;
  b = 3.0;
  c = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! gamma_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "GAMMA_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = gamma_mean ( a, b, c );
  variance = gamma_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = gamma_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void genlogistic_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GENLOGISTIC_CDF_TEST tests GENLOGISTIC_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "GENLOGISTIC_CDF_TEST\n";
  cout << "  GENLOGISTIC_CDF evaluates the Genlogistic CDF;\n";
  cout << "  GENLOGISTIC_CDF_INV inverts the Genlogistic CDF.\n";
  cout << "  GENLOGISTIC_PDF evaluates the Genlogistic PDF;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! genlogistic_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "GENLOGISTIC_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = genlogistic_sample ( a, b, c, seed );
    pdf = genlogistic_pdf ( x, a, b, c );
    cdf = genlogistic_cdf ( x, a, b, c );
    x2 = genlogistic_cdf_inv ( cdf, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void genlogistic_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GENLOGISTIC_SAMPLE_TEST tests GENLOGISTIC_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "GENLOGISTIC_SAMPLE_TEST\n";
  cout << "  GENLOGISTIC_MEAN computes the Genlogistic mean;\n";
  cout << "  GENLOGISTIC_SAMPLE samples the Genlogistic distribution;\n";
  cout << "  GENLOGISTIC_VARIANCE computes the Genlogistic variance;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! genlogistic_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "GENLOGISTIC_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = genlogistic_mean ( a, b, c );
  variance = genlogistic_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = genlogistic_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void geometric_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GEOMETRIC_CDF_TEST tests GEOMETRIC_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "GEOMETRIC_CDF_TEST\n";
  cout << "  GEOMETRIC_CDF evaluates the Geometric CDF;\n";
  cout << "  GEOMETRIC_CDF_INV inverts the Geometric CDF.\n";
  cout << "  GEOMETRIC_PDF evaluates the Geometric PDF;\n";

  a = 0.25E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! geometric_check ( a ) )
  {
    cout << "\n";
    cout << "GEOMETRIC_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = geometric_sample ( a, seed );
    pdf = geometric_pdf ( x, a );
    cdf = geometric_cdf ( x, a );
    x2 = geometric_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void geometric_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GEOMETRIC_SAMPLE_TEST tests GEOMETRIC_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int j;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "GEOMETRIC_SAMPLE_TEST\n";
  cout << "  GEOMETRIC_MEAN computes the Geometric mean;\n";
  cout << "  GEOMETRIC_SAMPLE samples the Geometric distribution;\n";
  cout << "  GEOMETRIC_VARIANCE computes the Geometric variance.\n";

  a = 0.25E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a        << "\n";

  if ( ! geometric_check ( a ) )
  {
    cout << "\n";
    cout << "GEOMETRIC_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = geometric_mean ( a );
  variance = geometric_variance ( a );

  cout << "  PDF mean =                    " << mean     << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    x[j] = geometric_sample ( a, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void gompertz_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GOMPERTZ_CDF_TEST tests GOMPERTZ_CDF
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "GOMPERTZ_CDF_TEST\n";
  cout << "  GOMPERTZ_CDF evaluates the Gompertz CDF;\n";
  cout << "  GOMPERTZ_CDF_INV inverts the Gompertz CDF.\n";
  cout << "  GOMPERTZ_PDF evaluates the Gompertz PDF;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! gompertz_check ( a, b ) )
  {
    cout << "\n";
    cout << "GOMPERTZ_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = gompertz_sample ( a, b, seed );
    pdf = gompertz_pdf ( x, a, b );
    cdf = gompertz_cdf ( x, a, b );
    x2 = gompertz_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void gompertz_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GOMPERTZ_SAMPLE_TEST tests GOMPERTZ_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "GOMPERTZ_SAMPLE_TEST\n";
  cout << "  GOMPERTZ_MEAN computes the Gompertz mean;\n";
  cout << "  GOMPERTZ_SAMPLE samples the Gompertz distribution;\n";
  cout << "  GOMPERTZ_VARIANCE computes the Gompertz variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! gompertz_check ( a, b ) )
  {
    cout << "\n";
    cout << "GOMPERTZ_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = gompertz_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void gumbel_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GUMBEL_CDF_TEST tests GUMBEL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "GUMBEL_CDF_TEST\n";
  cout << "  GUMBEL_CDF evaluates the Gumbel CDF;\n";
  cout << "  GUMBEL_CDF_INV inverts the Gumbel CDF.\n";
  cout << "  GUMBEL_PDF evaluates the Gumbel PDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = gumbel_sample ( seed );
    pdf = gumbel_pdf ( x );
    cdf = gumbel_cdf ( x );
    x2 = gumbel_cdf_inv ( cdf );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void gumbel_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GUMBEL_SAMPLE_TEST tests GUMBEL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "GUMBEL_SAMPLE_TEST\n";
  cout << "  GUMBEL_MEAN computes the Gumbel mean;\n";
  cout << "  GUMBEL_SAMPLE samples the Gumbel distribution;\n";
  cout << "  GUMBEL_VARIANCE computes the Gumbel variance.\n";

  mean     = gumbel_mean ( );
  variance = gumbel_variance ( );

  cout << "\n";
  cout << "  PDF mean =     " << mean << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = gumbel_sample ( seed );
  }

  mean     = r8vec_mean     ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax     = r8vec_max      ( SAMPLE_NUM, x );
  xmin     = r8vec_min      ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void half_normal_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HALF_NORMAL_CDF_TEST tests HALF_NORMAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "HALF_NORMAL_CDF_TEST\n";
  cout << "  HALF_NORMAL_CDF evaluates the Half Normal CDF;\n";
  cout << "  HALF_NORMAL_CDF_INV inverts the Half Normal CDF.\n";
  cout << "  HALF_NORMAL_PDF evaluates the Half Normal PDF;\n";

  a = 0.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! half_normal_check ( a, b ) )
  {
    cout << "\n";
    cout << "HALF_NORMAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = half_normal_sample ( a, b, seed );
    pdf = half_normal_pdf ( x, a, b );
    cdf = half_normal_cdf ( x, a, b );
    x2 = half_normal_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void half_normal_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HALF_NORMAL_SAMPLE_TEST tests HALF_NORMAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "HALF_NORMAL_SAMPLE_TEST\n";
  cout << "  HALF_NORMAL_MEAN computes the Half Normal mean;\n";
  cout << "  HALF_NORMAL_SAMPLE samples the Half Normal distribution;\n";
  cout << "  HALF_NORMAL_VARIANCE computes the Half Normal variance;\n";

  a = 0.0;
  b = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! half_normal_check ( a, b ) )
  {
    cout << "\n";
    cout << "HALF_NORMAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = half_normal_mean ( a, b );
  variance = half_normal_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = half_normal_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void hypergeometric_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HYPERGEOMETRIC_CDF_TEST tests HYPERGEOMETRIC_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int l;
  int m;
  int n;
  double pdf;
  int x;

  cout << "\n";
  cout << "HYPERGEOMETRIC_CDF_TEST\n";
  cout << "  HYPERGEOMETRIC_CDF evaluates the Hypergeometric CDF.\n";
  cout << "  HYPERGEOMETRIC_PDF evaluates the Hypergeometric PDF.\n";

  n = 10;
  m = 7;
  l = 100;

  cout << "\n";
  cout << "  Total number of balls L =         " << l << "\n";
  cout << "  Number of white balls M =         " << m << "\n";
  cout << "  Number of balls taken N =         " << n << "\n";

  if ( ! hypergeometric_check ( n, m, l ) )
  {
    cout << "\n";
    cout << "HYPERGEOMETRIC_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  x = 7;

  pdf = hypergeometric_pdf ( x, n, m, l );

  cdf = hypergeometric_cdf ( x, n, m, l );

  cout << "  PDF argument X =                " << x   << "\n";
  cout << "  PDF value =                   = " << pdf << "\n";
  cout << "  CDF value =                   = " << cdf << "\n";

  return;
}
//****************************************************************************80

void hypergeometric_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HYPERGEOMETRIC_SAMPLE_TEST tests HYPERGEOMETRIC_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  int j;
  int l;
  int m;
  double mean;
  int n;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "HYPERGEOMETRIC_SAMPLE_TEST\n";
  cout << "  HYPERGEOMETRIC_MEAN computes the Hypergeometric mean;\n";
  cout << "  HYPERGEOMETRIC_SAMPLE samples the Hypergeometric distribution;\n";
  cout << "  HYPERGEOMETRIC_VARIANCE computes the Hypergeometric variance.\n";

  n = 10;
  m = 7;
  l = 100;

  cout << "\n";
  cout << "  Total number of balls L =         " << l << "\n";
  cout << "  Number of white balls M =         " << m << "\n";
  cout << "  Number of balls taken N =         " << n << "\n";

  if ( ! hypergeometric_check ( n, m, l ) )
  {
    cout << "\n";
    cout << "HYPERGEOMETRIC_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = hypergeometric_mean ( n, m, l );
  variance = hypergeometric_variance ( n, m, l );

  cout << "  PDF mean =                    " << mean << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    x[j] = hypergeometric_sample ( n, m, l, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
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

void i4_choose_log_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_CHOOSE_LOG_TEST tests I4_CHOOSE_LOG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int cnk;
  double elcnk;
  int k;
  double lcnk;
  int n;

  cout << "\n";
  cout << "I4_CHOOSE_LOG_TEST\n";
  cout << "  I4_CHOOSE_LOG evaluates log(C(N,K)).\n";
  cout << "\n";
  cout << "       N       K            lCNK           elCNK     CNK\n";

  for ( n = 0; n <= 4; n++ )
  {
    cout << "\n";
    for ( k = 0; k <= n; k++ )
    {
      lcnk = i4_choose_log ( n, k );
      elcnk = exp ( lcnk );
      cnk = i4_choose ( n, k );

      cout << "  " << setw(6) << n   
           << "  " << setw(6) << k
           << "  " << setw(14) << lcnk
           << "  " << setw(14) << elcnk
           << "  " << setw(6) << cnk << "\n";
    }
  }

  return;
}
//****************************************************************************80

void i4_is_power_of_10_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_IS_POWER_OF_10_TEST tests I4_IS_POWER_OF_10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;

  cout << "\n";
  cout << "I4_IS_POWER_OF_10_TEST\n";
  cout << "  I4_IS_POWER_OF_10 reports whether an I4 is a power of 10.\n";
  cout << "\n";
  cout << "  I     I4_IS_POWER_OF_10(I)\n";
  cout << "\n";

  for ( i = 97; i <= 103; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << i4_is_power_of_10 ( i ) << "\n";
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

void i4vec_unique_count_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_UNIQUE_COUNT_TEST tests I4VEC_UNIQUE_COUNT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int a_hi;
  int a_lo;
  int a_unique;
  int n;
  int seed;

  cout << "\n";
  cout << "I4VEC_UNIQUE_COUNT_TEST\n";
  cout << "  I4VEC_UNIQUE_COUNT counts unique entries in an I4VEC.\n";

  n = 20;
  a_lo = 0;
  a_hi = n;
  seed = 123456789;

  a = i4vec_uniform_ab_new ( n, a_lo, a_hi, seed );

  i4vec_print ( n, a, "  Array:" );

  a_unique = i4vec_unique_count ( n, a  );

  cout << "\n";
  cout << "  Number of unique entries is " << a_unique << "\n";

  delete [] a;

  return;
}
//****************************************************************************80

void inverse_gaussian_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INVERSE_GAUSSIAN_CDF_TEST tests INVERSE_GAUSSIAN_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;

  cout << "\n";
  cout << "INVERSE_GAUSSIAN_CDF_TEST\n";
  cout << "  INVERSE_GAUSSIAN_CDF evaluates the Inverse Gaussian CDF;\n";
  cout << "  INVERSE_GAUSSIAN_PDF evaluates the Inverse Gaussian PDF;\n";

  a = 5.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! inverse_gaussian_check ( a, b ) )
  {
    cout << "\n";
    cout << "INVERSE_GAUSSIAN_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = inverse_gaussian_sample ( a, b, seed );
    pdf = inverse_gaussian_pdf ( x, a, b );
    cdf = inverse_gaussian_cdf ( x, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "\n";
  }

  return;
}
//****************************************************************************80

void inverse_gaussian_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    INVERSE_GAUSSIAN_SAMPLE_TEST tests INVERSE_GAUSSIAN_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "INVERSE_GAUSSIAN_SAMPLE_TEST\n";
  cout << "  INVERSE_GAUSSIAN_MEAN computes the Inverse Gaussian mean;\n";
  cout << "  INVERSE_GAUSSIAN_SAMPLE samples the Inverse Gaussian distribution;\n";
  cout << "  INVERSE_GAUSSIAN_VARIANCE computes the Inverse Gaussian variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! inverse_gaussian_check ( a, b ) )
  {
    cout << "\n";
    cout << "INVERSE_GAUSSIAN_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = inverse_gaussian_mean ( a, b );
  variance = inverse_gaussian_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = inverse_gaussian_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void laplace_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LAPLACE_CDF_TEST tests LAPLACE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "LAPLACE_CDF_TEST\n";
  cout << "  LAPLACE_CDF evaluates the Laplace CDF;\n";
  cout << "  LAPLACE_CDF_INV inverts the Laplace CDF.\n";
  cout << "  LAPLACE_PDF evaluates the Laplace PDF;\n";

  a = 1.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! laplace_check ( a, b ) )
  {
    cout << "\n";
    cout << "LAPLACE_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = laplace_sample ( a, b, seed );
    pdf = laplace_pdf ( x, a, b );
    cdf = laplace_cdf ( x, a, b );
    x2 = laplace_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void laplace_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LAPLACE_SAMPLE_TEST tests LAPLACE_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "LAPLACE_SAMPLE_TEST\n";
  cout << "  LAPLACE_MEAN computes the Laplace mean;\n";
  cout << "  LAPLACE_SAMPLE samples the Laplace distribution;\n";
  cout << "  LAPLACE_VARIANCE computes the Laplace variance;\n";

  a = 1.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! laplace_check ( a, b ) )
  {
    cout << "\n";
    cout << "LAPLACE_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = laplace_mean ( a, b );
  variance = laplace_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = laplace_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void levy_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LEVY_CDF_TEST tests LEVY_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "LEVY_CDF_TEST\n";
  cout << "  LEVY_CDF evaluates the Levy CDF;\n";
  cout << "  LEVY_CDF_INV inverts the Levy CDF.\n";
  cout << "  LEVY_PDF evaluates the Levy PDF;\n";

  a = 1.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = levy_sample ( a, b, seed );
    pdf = levy_pdf ( x, a, b );
    cdf = levy_cdf ( x, a, b );
    x2 = levy_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void logistic_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOGISTIC_CDF_TEST tests LOGISTIC_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "LOGISTIC_CDF_TEST\n";
  cout << "  LOGISTIC_CDF evaluates the Logistic CDF;\n";
  cout << "  LOGISTIC_CDF_INV inverts the Logistic CDF.\n";
  cout << "  LOGISTIC_PDF evaluates the Logistic PDF;\n";

  a = 1.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! logistic_check ( a, b ) )
  {
    cout << "\n";
    cout << "LOGISTIC_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = logistic_sample ( a, b, seed );
    pdf = logistic_pdf ( x, a, b );
    cdf = logistic_cdf ( x, a, b );
    x2 = logistic_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void logistic_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOGISTIC_SAMPLE_TEST tests LOGISTIC_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "LOGISTIC_SAMPLE_TEST\n";
  cout << "  LOGISTIC_MEAN computes the Logistic mean;\n";
  cout << "  LOGISTIC_SAMPLE samples the Logistic distribution;\n";
  cout << "  LOGISTIC_VARIANCE computes the Logistic variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! logistic_check ( a, b ) )
  {
    cout << "\n";
    cout << "LOGISTIC_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = logistic_mean ( a, b );
  variance = logistic_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = logistic_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void log_normal_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_CDF_TEST tests LOG_NORMAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "LOG_NORMAL_CDF_TEST\n";
  cout << "  LOG_NORMAL_CDF evaluates the Log Normal CDF;\n";
  cout << "  LOG_NORMAL_CDF_INV inverts the Log Normal CDF.\n";
  cout << "  LOG_NORMAL_PDF evaluates the Log Normal PDF;\n";

  a = 10.0;
  b = 2.25;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! log_normal_check ( a, b ) )
  {
    cout << "\n";
    cout << "LOG_NORMAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = log_normal_sample ( a, b, seed );
    pdf = log_normal_pdf ( x, a, b );
    cdf = log_normal_cdf ( x, a, b );
    x2 = log_normal_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void log_normal_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_SAMPLE_TEST tests LOG_NORMAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "LOG_NORMAL_SAMPLE_TEST\n";
  cout << "  LOG_NORMAL_MEAN computes the Log Normal mean;\n";
  cout << "  LOG_NORMAL_SAMPLE samples the Log Normal distribution;\n";
  cout << "  LOG_NORMAL_VARIANCE computes the Log Normal variance;\n";

  a = 1.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! normal_check ( a, b ) )
  {
    cout << "\n";
    cout << "LOG_NORMAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = log_normal_mean ( a, b);
  variance = log_normal_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = log_normal_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void log_series_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_SERIES_CDF_TEST tests LOG_SERIES_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "LOG_SERIES_CDF_TEST\n";
  cout << "  LOG_SERIES_CDF evaluates the Log Series CDF;\n";
  cout << "  LOG_SERIES_CDF_INV inverts the Log Series CDF.\n";
  cout << "  LOG_SERIES_PDF evaluates the Log Series PDF;\n";

  a = 0.25E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! log_series_check ( a ) )
  {
    cout << "\n";
    cout << "LOG_SERIES_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = log_series_sample ( a, seed );
    pdf = log_series_pdf ( x, a );
    cdf = log_series_cdf ( x, a );
    x2 = log_series_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void log_series_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_SERIES_SAMPLE_TEST tests LOG_SERIES_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int j;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "LOG_SERIES_SAMPLE_TEST\n";
  cout << "  LOG_SERIES_MEAN computes the Log Series mean;\n";
  cout << "  LOG_SERIES_SAMPLE samples the Log Series distribution;\n";
  cout << "  LOG_SERIES_VARIANCE computes the Log Series variance.\n";

  a = 0.25E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a        << "\n";

  if ( ! log_series_check ( a ) )
  {
    cout << "\n";
    cout << "LOG_SERIES_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = log_series_mean ( a );
  variance = log_series_variance ( a );

  cout << "  PDF mean =                    " << mean     << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    x[j] = log_series_sample ( a, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void log_uniform_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_UNIFORM_CDF_TEST tests LOG_UNIFORM_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "LOG_UNIFORM_CDF_TEST\n";
  cout << "  LOG_UNIFORM_CDF evaluates the Log Uniform CDF;\n";
  cout << "  LOG_UNIFORM_CDF_INV inverts the Log Uniform CDF.\n";
  cout << "  LOG_UNIFORM_PDF evaluates the Log Uniform PDF;\n";

  a = 2.0;
  b = 20.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! log_uniform_check ( a, b ) )
  {
    cout << "\n";
    cout << "LOG_UNIFORM_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = log_uniform_sample ( a, b, seed );
    pdf = log_uniform_pdf ( x, a, b );
    cdf = log_uniform_cdf ( x, a, b );
    x2 = log_uniform_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void log_uniform_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_UNIFORM_SAMPLE_TEST tests LOG_UNIFORM_SAMPLE;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "LOG_UNIFORM_SAMPLE_TEST\n";
  cout << "  LOG_UNIFORM_MEAN computes the Log Uniform mean;\n";
  cout << "  LOG_UNIFORM_SAMPLE samples the Log Uniform distribution;\n";

  a = 2.0;
  b = 20.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! log_uniform_check ( a, b ) )
  {
    cout << "\n";
    cout << "LOG_UNIFORM_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = log_uniform_mean ( a, b);

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = log_uniform_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void lorentz_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LORENTZ_CDF_TEST tests LORENTZ_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//

{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "LORENTZ_CDF_TEST\n";
  cout << "  LORENTZ_CDF evaluates the Lorentz CDF;\n";
  cout << "  LORENTZ_CDF_INV inverts the Lorentz CDF.\n";
  cout << "  LORENTZ_PDF evaluates the Lorentz PDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = lorentz_sample ( seed );
    pdf = lorentz_pdf ( x );
    cdf = lorentz_cdf ( x );
    x2 = lorentz_cdf_inv ( cdf );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void lorentz_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LORENTZ_SAMPLE_TEST tests LORENTZ_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "LORENTZ_SAMPLE_TEST\n";
  cout << "  LORENTZ_MEAN computes the Lorentz mean;\n";
  cout << "  LORENTZ_SAMPLE samples the Lorentz distribution;\n";
  cout << "  LORENTZ_VARIANCE computes the Lorentz variance.\n";

  mean     = lorentz_mean ( );
  variance = lorentz_variance ( );

  cout << "\n";
  cout << "  PDF mean =     " << mean << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = lorentz_sample ( seed );
  }

  mean     = r8vec_mean     ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax     = r8vec_max      ( SAMPLE_NUM, x );
  xmin     = r8vec_min      ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void maxwell_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAXWELL_CDF_TEST tests MAXWELL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "MAXWELL_CDF_TEST8\n";
  cout << "  MAXWELL_CDF evaluates the Maxwell CDF;\n";
  cout << "  MAXWELL_CDF_INV inverts the Maxwell CDF.\n";
  cout << "  MAXWELL_PDF evaluates the Maxwell PDF;\n";

  a = 2.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! maxwell_check ( a ) )
  {
    cout << "\n";
    cout << "MAXWELL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }
  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = maxwell_sample ( a, seed );
    pdf = maxwell_pdf ( x, a );
    cdf = maxwell_cdf ( x, a );
    x2 = maxwell_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void maxwell_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAXWELL_SAMPLE_TEST tests MAXWELL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int j;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "MAXWELL_SAMPLE_TEST\n";
  cout << "  MAXWELL_MEAN computes the Maxwell mean;\n";
  cout << "  MAXWELL_SAMPLE samples the Maxwell distribution;\n";
  cout << "  MAXWELL_VARIANCE computes the Maxwell variance.\n";

  a = 2.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a        << "\n";

  if ( ! maxwell_check ( a ) )
  {
    cout << "\n";
    cout << "MAXWELL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = maxwell_mean ( a );
  variance = maxwell_variance ( a );

  cout << "  PDF mean =                    " << mean     << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    x[j] = maxwell_sample ( a, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void multinomial_coef_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MULTINOMIAL_TEST tests MULTINOMIAL_COEF1, MULTINOMIAL_COEF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 April 2016
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
  int ncomb1;
  int ncomb2;
  int nfactor;

  cout << "\n";
  cout << "MULTINOMIAL_TEST\n";
  cout << "  MULTINOMIAL_COEF1 computes multinomial\n";
  cout << "  coefficients using the Gamma function;\n";
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

    ncomb1 = multinomial_coef1 ( nfactor, factor );

    ncomb2 = multinomial_coef2 ( nfactor, factor );

    cout << "  "
         << setw(2) << factor[0] << "  "
         << setw(2) << factor[1] << "  "
         << setw(5) << ncomb1    << "  "
         << setw(5) << ncomb2    << "\n";
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

      ncomb1 = multinomial_coef1 ( nfactor, factor );

      ncomb2 = multinomial_coef2 ( nfactor, factor );

      cout << "  "
           << setw(2) << factor[0] << "  "
           << setw(2) << factor[1] << "  "
           << setw(2) << factor[2] << "  "
           << setw(5) << ncomb1    << "  "
           << setw(5) << ncomb2    << "\n";
    }
  }

  return;
# undef MAXFACTOR
}
//****************************************************************************80

void multinomial_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MULTINOMIAL_SAMPLE_TEST tests MULTINOMIAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define B 3
# define SAMPLE_NUM 1000

  int a;
  double c[B] = { 0.125, 0.500, 0.375 };
  int i;
  int j;
  double *mean;
  int seed = 123456789;
  double *variance;
  int x[B*SAMPLE_NUM];
  int *xmax;
  int *xmin;
  int *y;

  cout << "\n";
  cout << "MULTINOMIAL_SAMPLE_TEST\n";
  cout << "  MULTINOMIAL_MEAN computes the Multinomial mean;\n";
  cout << "  MULTINOMIAL_SAMPLE samples the Multinomial distribution;\n";
  cout << "  MULTINOMIAL_VARIANCE computes the Multinomial variance;\n";

  a = 5;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << B << "\n";
  r8vec_print ( B, c, "  PDF parameter C:" );

  if ( ! multinomial_check ( a, B, c ) )
  {
    cout << "\n";
    cout << "MULTINOMIAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = multinomial_mean ( a, B, c );
  variance = multinomial_variance ( a, B, c );
  r8vec_print ( B, mean, "  PDF mean:" );
  r8vec_print ( B, variance, "  PDF variance:" );

  delete [] mean;
  delete [] variance;

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    y = multinomial_sample ( a, B, c, seed );
    for ( i = 0; i < B; i++ )
    {
      x[i+j*B] = y[i];
    }
    delete [] y;
  }

  mean = i4row_mean ( B, SAMPLE_NUM, x );
  variance = i4row_variance ( B, SAMPLE_NUM, x );
  xmax = i4row_max ( B, SAMPLE_NUM, x );
  xmin = i4row_min ( B, SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "\n";
  cout << "  Component Mean, Variance, Min, Max:\n";
  cout << "\n";

  for ( i = 0; i < B; i++ )
  {
    cout << "  "
         << setw(6)  << i+1         << "  "
         << setw(12) << mean[i]     << "  "
         << setw(12) << variance[i] << "  "
         << setw(12) << xmin[i]     << "  "
         << setw(12) << xmax[i]     << "\n";
  }

  delete [] mean;
  delete [] variance;
  delete [] xmax;
  delete [] xmin;

  return;
# undef B
# undef SAMPLE_NUM
}
//****************************************************************************80

void multinomial_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MULTINOMIAL_PDF_TEST tests MULTINOMIAL_PDF;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define B 3

  int a;
  double c[B] = { 0.1, 0.5, 0.4 };
  int i;
  double pdf;
  int x[B] = { 0, 2, 3 };

  cout << "\n";
  cout << "MULTINOMIAL_PDF_TEST\n";
  cout << "  MULTINOMIAL_PDF evaluates the Multinomial PDF;\n";

  a = 5;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << B << "\n";
  r8vec_print ( B, c, "  PDF parameter C:" );

  if ( ! multinomial_check ( a, B, c ) )
  {
    cout << "\n";
    cout << "MULTINOMIAL_PDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  i4vec_print ( B, x, "  PDF argument X:" );

  pdf = multinomial_pdf ( x, a, B, c );

  cout << "\n";
  cout << "  PDF value = " << pdf<< "\n";

  return;
# undef B
# undef SAMPLE_NUM
}
//****************************************************************************80

void nakagami_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NAKAGAMI_CDF_TEST tests NAKAGAMI_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  double x;
  double x2;

  cout << "\n";
  cout << "NAKAGAMI_CDF_TEST\n";
  cout << "  NAKAGAMI_CDF evaluates the Nakagami CDF;\n";
  cout << "  NAKAGAMI_CDF_INV inverts the Nakagami CDF;\n";
  cout << "  NAKAGAMI_PDF evaluates the Nakagami PDF;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! nakagami_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "NAKAGAMI_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF         CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = a + b * sqrt ( ( double ) ( i ) / c / 10.0 ); 
    pdf = nakagami_pdf ( x, a, b, c );
    cdf = nakagami_cdf ( x, a, b, c );
    x2 = nakagami_cdf_inv ( cdf, a, b, c );

    cout << "  " << setw(12) << x
         << "  " << setw(12) << pdf
         << "  " << setw(12) << cdf
         << "  " << setw(12) << x2 << "\n";
  }

  return;
}
//****************************************************************************80

void nakagami_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NAKAGAMI_SAMPLE_TEST tests NAKAGAMI_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double mean;
  double variance;
  double x;

  cout << "\n";
  cout << "NAKAGAMI_SAMPLE_TEST\n";
  cout << "  NAKAGAMI_MEAN evaluates the Nakagami mean;\n";
  cout << "  NAKAGAMI_VARIANCE evaluates the Nakagami variance;\n";

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! nakagami_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "NAKAGAMI_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = nakagami_mean ( a, b, c );
  variance = nakagami_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =      " << mean     << "\n";
  cout << "  PDF variance =  " << variance << "\n";

  return;
}
//****************************************************************************80

void negative_binomial_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NEGATIVE_BINOMIAL_CDF_TEST tests NEGATIVE_BINOMIAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "NEGATIVE_BINOMIAL_CDF_TEST\n";
  cout << "  NEGATIVE_BINOMIAL_CDF evaluates the Negative Binomial CDF;\n";
  cout << "  NEGATIVE_BINOMIAL_CDF_INV inverts the Negative Binomial CDF.\n";
  cout << "  NEGATIVE_BINOMIAL_PDF evaluates the Negative Binomial PDF;\n";

  a = 2;
  b = 0.25;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! negative_binomial_check ( a, b ) )
  {
    cout << "\n";
    cout << "NEGATIVE_BINOMIAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = negative_binomial_sample ( a, b, seed );
    pdf = negative_binomial_pdf ( x, a, b );
    cdf = negative_binomial_cdf ( x, a, b );
    x2 = negative_binomial_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void negative_binomial_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NEGATIVE_BINOMIAL_SAMPLE_TEST tests NEGATIVE_BINOMIAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "NEGATIVE_BINOMIAL_SAMPLE_TEST\n";
  cout << "  NEGATIVE_BINOMIAL_MEAN computes the Negative Binomial mean;\n";
  cout << "  NEGATIVE_BINOMIAL_SAMPLE samples the Negative Binomial distribution;\n";
  cout << "  NEGATIVE_BINOMIAL_VARIANCE computes the Negative Binomial variance;\n";

  a = 2;
  b = 0.75;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! negative_binomial_check ( a, b ) )
  {
    cout << "\n";
    cout << "NEGATIVE_BINOMIAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = negative_binomial_mean ( a, b );
  variance = negative_binomial_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = negative_binomial_sample ( a, b, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void normal_01_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_01_CDF_TEST tests NORMAL_01_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "NORMAL_01_CDF_TEST\n";
  cout << "  NORMAL_01_CDF evaluates the Normal 01 CDF;\n";
  cout << "  NORMAL_01_CDF_INV inverts the Normal 01 CDF.\n";
  cout << "  NORMAL_01_PDF evaluates the Normal 01 PDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = normal_01_sample ( seed );
    pdf = normal_01_pdf ( x );
    cdf = normal_01_cdf ( x );
    x2 = normal_01_cdf_inv ( cdf );

    cout << "  "
         << setw(24) << setprecision(16) << x   << "  "
         << setw(12) << setprecision(6)  << pdf << "  "
         << setw(12) << setprecision(6)  << cdf << "  "
         << setw(24) << setprecision(16) << x2  << "\n";
  }

  cout << setprecision(6);

  return;
}
//****************************************************************************80

void normal_01_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_01_SAMPLE_TEST tests NORMAL_01_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "NORMAL_01_SAMPLE_TEST\n";
  cout << "  NORMAL_01_MEAN computes the Normal 01 mean;\n";
  cout << "  NORMAL_01_SAMPLE samples the Normal 01 distribution;\n";
  cout << "  NORMAL_01_VARIANCE computes the Normal 01 variance;\n";

  mean = normal_01_mean ( );
  variance = normal_01_variance ( );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = normal_01_sample ( seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void normal_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_CDF_TEST tests NORMAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "NORMAL_CDF_TEST\n";
  cout << "  NORMAL_CDF evaluates the Normal CDF;\n";
  cout << "  NORMAL_CDF_INV inverts the Normal CDF.\n";
  cout << "  NORMAL_PDF evaluates the Normal PDF;\n";

  a = 100.0;
  b = 15.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! normal_check ( a, b ) )
  {
    cout << "\n";
    cout << "NORMAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = normal_sample ( a, b, seed );
    pdf = normal_pdf ( x, a, b );
    cdf = normal_cdf ( x, a, b );
    x2 = normal_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void normal_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_SAMPLE_TEST tests NORMAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "NORMAL_SAMPLE_TEST\n";
  cout << "  NORMAL_MEAN computes the Normal mean;\n";
  cout << "  NORMAL_SAMPLE samples the Normal distribution;\n";
  cout << "  NORMAL_VARIANCE computes the Normal variance;\n";

  a = 100.0;
  b = 15.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! normal_check ( a, b ) )
  {
    cout << "\n";
    cout << "NORMAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = normal_mean ( a, b );
  variance = normal_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = normal_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void normal_truncated_ab_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_TRUNCATED_AB_CDF_TEST tests NORMAL_TRUNCATED_AB_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double mu;
  double pdf;
  double s;
  int seed;
  double x;
  double x2;

  a = 50.0;
  b = 150.0;
  mu = 100.0;
  s = 25.0;
  seed = 123456789;

  cout << "\n";
  cout << "NORMAL_TRUNCATED_AB_CDF_TEST\n";
  cout << "  NORMAL_TRUNCATED_AB_CDF evaluates the Normal Truncated AB CDF.\n";
  cout << "  NORMAL_TRUNCATED_AB_CDF_INV inverts the Normal Truncated AB CDF.\n";
  cout << "  NORMAL_TRUNCATED_AB_PDF evaluates the Normal Truncated AB PDF.\n";
  cout << "\n";
  cout << "  The parent normal distribution has\n";
  cout << "    mean =               " << mu << "\n";
  cout << "    standard deviation = " << s << "\n";
  cout << "  The parent distribution is truncated to\n";
  cout << "  the interval [" << a << "," << b << "]\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = normal_truncated_ab_sample ( mu, s, a, b, seed );

    pdf = normal_truncated_ab_pdf ( x, mu, s, a, b );

    cdf = normal_truncated_ab_cdf ( x, mu, s, a, b );

    x2 = normal_truncated_ab_cdf_inv ( cdf, mu, s, a, b );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << pdf
         << "  " << setw(14) << cdf
         << "  " << setw(14) << x2 << "\n";
  }
  return;
}
//****************************************************************************80

void normal_truncated_ab_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_TRUNCATED_AB_SAMPLE_TEST tests NORMAL_TRUNCATED_AB_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  int i;
  double mean;
  double mu;
  double s;
  int sample_num = 1000;
  int seed;
  double variance;
  double *x;
  double xmax;
  double xmin;

  a = 50.0;
  b = 150.0;
  mu = 100.0;
  s = 25.0;
  seed = 123456789;

  cout << "\n";
  cout << "NORMAL_TRUNCATED_AB_SAMPLE_TEST\n";
  cout << "  NORMAL_TRUNCATED_AB_MEAN computes the Normal Truncated AB mean;\n";
  cout << "  NORMAL_TRUNCATED_AB_SAMPLE samples the Normal Truncated AB distribution;\n";
  cout << "  NORMAL_TRUNCATED_AB_VARIANCE computes the Normal Truncated AB variance.\n";
  cout << "\n";
  cout << "  The parent normal distribution has\n";
  cout << "    mean =               " << mu << "\n";
  cout << "    standard deviation = " << s << "\n";
  cout << "  The parent distribution is truncated to\n";
  cout << "  the interval [" << a << "," << b << "]\n";

  mean = normal_truncated_ab_mean ( mu, s, a, b );

  variance = normal_truncated_ab_variance ( mu, s, a, b );

  cout << "\n";
  cout << "  PDF mean      =               " << mean << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  x = ( double * ) malloc ( sample_num * sizeof ( double ) );

  for ( i = 0; i < sample_num; i++ )
  {
    x[i] = normal_truncated_ab_sample ( mu, s, a, b, seed );
  }

  mean = r8vec_mean ( sample_num, x );
  variance = r8vec_variance ( sample_num, x );
  xmax = r8vec_max ( sample_num, x );
  xmin = r8vec_min ( sample_num, x );

  cout << "\n";
  cout << "  Sample size =     " << sample_num << "\n";
  cout << "  Sample mean =     " << mean << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax << "\n";
  cout << "  Sample minimum =  " << xmin << "\n";

  delete [] x;

  return;
}
//****************************************************************************80

void normal_truncated_a_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_TRUNCATED_A_CDF_TEST tests NORMAL_TRUNCATED_A_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double mu;
  double pdf;
  double s;
  int seed;
  double x;
  double x2;

  a = 50.0;
  mu = 100.0;
  s = 25.0;
  seed = 123456789;

  cout << "\n";
  cout << "NORMAL_TRUNCATED_A_CDF_TEST\n";
  cout << "  NORMAL_TRUNCATED_A_CDF evaluates the Normal Truncated A CDF.\n";
  cout << "  NORMAL_TRUNCATED_A_CDF_INV inverts the Normal Truncated A CDF.\n";
  cout << "  NORMAL_TRUNCATED_A_PDF evaluates the Normal Truncated A PDF.\n";
  cout << "\n";
  cout << "  The parent normal distribution has\n";
  cout << "    mean =               " << mu << "\n";
  cout << "    standard deviation = " << s << "\n";
  cout << "  The parent distribution is truncated to\n";
  cout << "  the interval [" << a << ",+oo]\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = normal_truncated_a_sample ( mu, s, a, seed );

    pdf = normal_truncated_a_pdf ( x, mu, s, a );

    cdf = normal_truncated_a_cdf ( x, mu, s, a );

    x2 = normal_truncated_a_cdf_inv ( cdf, mu, s, a );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << pdf
         << "  " << setw(14) << cdf
         << "  " << setw(14) << x2 << "\n";
  }
  return;
}
//****************************************************************************80

void normal_truncated_a_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_TRUNCATED_A_SAMPLE_TEST tests NORMAL_TRUNCATED_A_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  int i;
  double mean;
  double mu;
  double s;
  int sample_num = 1000;
  int seed;
  double variance;
  double *x;
  double xmax;
  double xmin;

  a = 50.0;
  mu = 100.0;
  s = 25.0;
  seed = 123456789;

  cout << "\n";
  cout << "NORMAL_TRUNCATED_A_SAMPLE_TEST\n";
  cout << "  NORMAL_TRUNCATED_A_MEAN computes the Normal Truncated A mean;\n";
  cout << "  NORMAL_TRUNCATED_A_SAMPLE samples the Normal Truncated A distribution;\n";
  cout << "  NORMAL_TRUNCATED_A_VARIANCE computes the Normal Truncated A variance.\n";
  cout << "\n";
  cout << "  The parent normal distribution has\n";
  cout << "    mean =               " << mu << "\n";
  cout << "    standard deviation = " << s << "\n";
  cout << "  The parent distribution is truncated to\n";
  cout << "  the interval [" << a << ",+oo]\n";

  mean = normal_truncated_a_mean ( mu, s, a );

  variance = normal_truncated_a_variance ( mu, s, a );

  cout << "\n";
  cout << "  PDF mean      =               " << mean << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  x = ( double * ) malloc ( sample_num * sizeof ( double ) );

  for ( i = 0; i < sample_num; i++ )
  {
    x[i] = normal_truncated_a_sample ( mu, s, a, seed );
  }

  mean = r8vec_mean ( sample_num, x );
  variance = r8vec_variance ( sample_num, x );
  xmax = r8vec_max ( sample_num, x );
  xmin = r8vec_min ( sample_num, x );

  cout << "\n";
  cout << "  Sample size =     " << sample_num << "\n";
  cout << "  Sample mean =     " << mean << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax << "\n";
  cout << "  Sample minimum =  " << xmin << "\n";

  delete [] x;

  return;
}
//****************************************************************************80

void normal_truncated_b_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_TRUNCATED_B_CDF_TEST tests NORMAL_TRUNCATED_B_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double b;
  double cdf;
  int i;
  double mu;
  double pdf;
  double s;
  int seed;
  double x;
  double x2;

  b = 150.0;
  mu = 100.0;
  s = 25.0;
  seed = 123456789;

  cout << "\n";
  cout << "NORMAL_TRUNCATED_B_CDF_TEST\n";
  cout << "  NORMAL_TRUNCATED_B_CDF evaluates the Normal Truncated B CDF.\n";
  cout << "  NORMAL_TRUNCATED_B_CDF_INV inverts the Normal Truncated B CDF.\n";
  cout << "  NORMAL_TRUNCATED_B_PDF evaluates the Normal Truncated B PDF.\n";
  cout << "\n";
  cout << "  The parent normal distribution has\n";
  cout << "    mean =               " << mu << "\n";
  cout << "    standard deviation = " << s << "\n";
  cout << "  The parent distribution is truncated to\n";
  cout << "  the interval [-oo," << b << "]\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = normal_truncated_b_sample ( mu, s, b, seed );

    pdf = normal_truncated_b_pdf ( x, mu, s, b );

    cdf = normal_truncated_b_cdf ( x, mu, s, b );

    x2 = normal_truncated_b_cdf_inv ( cdf, mu, s, b );

    cout << "  " << setw(14) << x
         << "  " << setw(14) << pdf
         << "  " << setw(14) << cdf
         << "  " << setw(14) << x2 << "\n";
  }
  return;
}
//****************************************************************************80

void normal_truncated_b_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_TRUNCATED_B_SAMPLE_TEST tests NORMAL_TRUNCATED_B_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double b;
  int i;
  double mean;
  double mu;
  double s;
  int sample_num = 1000;
  int seed;
  double variance;
  double *x;
  double xmax;
  double xmin;

  b = 150.0;
  mu = 100.0;
  s = 25.0;
  seed = 123456789;

  cout << "\n";
  cout << "NORMAL_TRUNCATED_B_SAMPLE_TEST\n";
  cout << "  NORMAL_TRUNCATED_B_MEAN computes the Normal Truncated B mean;\n";
  cout << "  NORMAL_TRUNCATED_B_SAMPLE samples the Normal Truncated B distribution;\n";
  cout << "  NORMAL_TRUNCATED_B_VARIANCE computes the Normal Truncated B variance.\n";
  cout << "\n";
  cout << "  The parent normal distribution has\n";
  cout << "    mean =               " << mu << "\n";
  cout << "    standard deviation = " << s << "\n";
  cout << "  The parent distribution is truncated to\n";
  cout << "  the interval [-oo," << b << "]\n";

  mean = normal_truncated_b_mean ( mu, s, b );

  variance = normal_truncated_b_variance ( mu, s, b );

  cout << "\n";
  cout << "  PDF mean      =               " << mean << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  x = ( double * ) malloc ( sample_num * sizeof ( double ) );

  for ( i = 0; i < sample_num; i++ )
  {
    x[i] = normal_truncated_b_sample ( mu, s, b, seed );
  }

  mean = r8vec_mean ( sample_num, x );
  variance = r8vec_variance ( sample_num, x );
  xmax = r8vec_max ( sample_num, x );
  xmin = r8vec_min ( sample_num, x );

  cout << "\n";
  cout << "  Sample size =     " << sample_num << "\n";
  cout << "  Sample mean =     " << mean << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax << "\n";
  cout << "  Sample minimum =  " << xmin << "\n";

  delete [] x;

  return;
}
//****************************************************************************80

void pareto_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PARETO_CDF_TEST tests PARETO_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "PARETO_CDF_TEST\n";
  cout << "  PARETO_CDF evaluates the Pareto CDF;\n";
  cout << "  PARETO_CDF_INV inverts the Pareto CDF.\n";
  cout << "  PARETO_PDF evaluates the Pareto PDF;\n";

  a = 0.5;
  b = 5.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! pareto_check ( a, b ) )
  {
    cout << "\n";
    cout << "PARETO_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = pareto_sample ( a, b, seed );
    pdf = pareto_pdf ( x, a, b );
    cdf = pareto_cdf ( x, a, b );
    x2 = pareto_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void pareto_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PARETO_SAMPLE_TEST tests PARETO_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "PARETO_SAMPLE_TEST\n";
  cout << "  PARETO_MEAN computes the Pareto mean;\n";
  cout << "  PARETO_SAMPLE samples the Pareto distribution;\n";
  cout << "  PARETO_VARIANCE computes the Pareto variance;\n";

  a = 0.5;
  b = 5.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! pareto_check ( a, b ) )
  {
    cout << "\n";
    cout << "PARETO_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = pareto_mean ( a, b );
  variance = pareto_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = pareto_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void pearson_05_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PEARSON_05_PDF_TEST tests PEARSON_05_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double pdf;
  double x;

  cout << "\n";
  cout << "PEARSON_05_PDF\n";
  cout << "  PEARSON_05_PDF evaluates the Pearson 05 PDF.\n";

  x = 5.0;

  a = 1.0;
  b = 2.0;
  c = 3.0;

  cout << "\n";
  cout << "  PDF parameter A = " << a   << "\n";
  cout << "  PDF parameter B = " << b   << "\n";
  cout << "  PDF parameter C = " << c   << "\n";

  if ( ! pearson_05_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "PEARSON_05_PDF - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  pdf = pearson_05_pdf ( x, a, b, c );

  cout << "\n";
  cout << "  PDF argument X =  " << x   << "\n";
  cout << "  PDF value =       " << pdf << "\n";

  return;
}
//****************************************************************************80

void planck_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PLANCK_PDF_TEST tests PLANCK_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  int i;
  double pdf;
  int seed = 123456789;
  double x;

  cout << "\n";
  cout << "PLANCK_PDF_TEST\n";
  cout << "  PLANCK_PDF evaluates the Planck PDF.\n";
  cout << "  PLANCK_SAMPLE samples the Planck PDF.\n";

  a = 2.0E+00;
  b = 3.0E+00;

  cout << "\n";
  cout << "  PDF parameter A = " << a << "\n";
  cout << "  PDF parameter B = " << b << "\n";

  if ( ! planck_check ( a, b ) )
  {
    cout << "\n";
    cout << "PLANCK_PDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = planck_sample ( a, b, seed );

    pdf = planck_pdf ( x, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "\n";
  }

  return;
}
//****************************************************************************80

void planck_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PLANCK_SAMPLE_TEST tests PLANCK_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "PLANCK_SAMPLE_TEST\n";
  cout << "  PLANCK_MEAN computes the Planck mean;\n";
  cout << "  PLANCK_SAMPLE samples the Planck distribution;\n";
  cout << "  PLANCK_VARIANCE computes the Planck variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! planck_check ( a, b ) )
  {
    cout << "\n";
    cout << "PLANCK_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = planck_mean ( a, b );
  variance = planck_variance ( a, b );

  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = planck_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void poisson_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POISSON_CDF_TEST tests POISSON_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "POISSON_CDF_TEST\n";
  cout << "  POISSON_CDF evaluates the Poisson CDF;\n";
  cout << "  POISSON_CDF_INV inverts the Poisson CDF.\n";
  cout << "  POISSON_PDF evaluates the Poisson PDF;\n";

  a = 10.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! poisson_check ( a ) )
  {
    cout << "\n";
    cout << "POISSON_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = poisson_sample ( a, seed );
    pdf = poisson_pdf ( x, a );
    cdf = poisson_cdf ( x, a );
    x2 = poisson_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void poisson_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POISSON_SAMPLE_TEST tests POISSON_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "POISSON_SAMPLE_TEST\n";
  cout << "  POISSON_SAMPLE samples the Poisson PDF.\n";
  cout << "  POISSON_SAMPLE samples the Poisson PDF.\n";
  cout << "  POISSON_SAMPLE samples the Poisson PDF.\n";

  a = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";

  if ( ! poisson_check ( a ) )
  {
    cout << "\n";
    cout << "POISSON_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = poisson_mean ( a );
  variance = poisson_variance ( a );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = poisson_sample ( a, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void power_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POWER_CDF_TEST tests POWER_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "POWER_CDF_TEST\n";
  cout << "  POWER_CDF evaluates the Power CDF;\n";
  cout << "  POWER_CDF_INV inverts the Power CDF.\n";
  cout << "  POWER_PDF evaluates the Power PDF;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! power_check ( a, b ) )
  {
    cout << "\n";
    cout << "POWER_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = power_sample ( a, b, seed );
    pdf = power_pdf ( x, a, b );
    cdf = power_cdf ( x, a, b );
    x2 = power_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void power_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POWER_SAMPLE_TEST tests POWER_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 March 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "POWER_SAMPLE_TEST\n";
  cout << "  POWER_MEAN computes the Power mean;\n";
  cout << "  POWER_SAMPLE samples the Power distribution;\n";
  cout << "  POWER_VARIANCE computes the Power variance;\n";

  a = 2.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! power_check ( a, b ) )
  {
    cout << "\n";
    cout << "POWER_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = power_mean ( a, b );
  variance = power_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = power_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void quasigeometric_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    QUASIGEOMETRIC_CDF_TEST tests QUASIGEOMETRIC_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "QUASIGEOMETRIC_CDF_TEST\n";
  cout << "  QUASIGEOMETRIC_CDF evaluates the Quasigeometric CDF;\n";
  cout << "  QUASIGEOMETRIC_CDF_INV inverts the Quasigeometric CDF.\n";
  cout << "  QUASIGEOMETRIC_PDF evaluates the Quasigeometric PDF;\n";

  a = 0.4825;
  b = 0.5893;

  cout << "\n";
  cout << "  PDF parameter A = " << a   << "\n";
  cout << "  PDF parameter B = " << b   << "\n";

  if ( ! quasigeometric_check ( a, b ) )
  {
    cout << "\n";
    cout << "QUASIGEOMETRIC_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = quasigeometric_sample ( a, b, seed );
    pdf = quasigeometric_pdf ( x, a, b );
    cdf = quasigeometric_cdf ( x, a, b );
    x2 = quasigeometric_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void quasigeometric_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    QUASIGEOMETRIC_SAMPLE_TEST tests QUASIGEOMETRIC_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  int j;
  double mean;
  int sample_num = 1000;
  int seed = 123456789;
  double variance;
  int *x;
  int xmax;
  int xmin;

  cout << "\n";
  cout << "QUASIGEOMETRIC_SAMPLE_TEST\n";
  cout << "  QUASIGEOMETRIC_MEAN computes the Quasigeometric mean;\n";
  cout << "  QUASIGEOMETRIC_SAMPLE samples the Quasigeometric distribution;\n";
  cout << "  QUASIGEOMETRIC_VARIANCE computes the Quasigeometric variance.\n";

  a = 0.4825;
  b = 0.5893;

  cout << "\n";
  cout << "  PDF parameter A = " << a << "\n";
  cout << "  PDF parameter B = " << b << "\n";

  if ( ! quasigeometric_check ( a, b ) )
  {
    cout << "\n";
    cout << "QUASIGEOMETRIC_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = quasigeometric_mean ( a, b );
  variance = quasigeometric_variance ( a, b );

  cout << "  PDF mean =                    " << mean     << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  x = new int[sample_num];

  for ( j = 0; j < sample_num; j++ )
  {
    x[j] = quasigeometric_sample ( a, b, seed );
  }

  mean = i4vec_mean ( sample_num, x );
  variance = i4vec_variance ( sample_num, x );
  xmax = i4vec_max ( sample_num, x );
  xmin = i4vec_min ( sample_num, x );

  cout << "\n";
  cout << "  Sample size =     " << sample_num  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  delete [] x;

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
//    04 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double fxy1;
  double fxy2;
  int n_data;
  streamsize ss;
  double x;
  double y;
//
//  Save the current precision.
//
  ss = cout.precision ( );

  cout << "\n";
  cout << "R8_BETA_TEST:\n";
  cout << "  R8_BETA evaluates the Beta function.\n";
  cout << "\n";
  cout << "      X              Y         BETA(X,Y)         R8_BETA(X,Y)\n";
  cout << "                               tabulated         computed.\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    beta_values ( n_data, x, y, fxy1 );

    if ( n_data == 0 )
    {
      break;
    }

    fxy2 = r8_beta ( x, y );

    cout << "  " << setw(12)                     << x   
         << "  " << setw(12)                     << y
         << "  " << setw(24) << setprecision(16) << fxy1   
         << "  " << setw(24) << setprecision(16) << fxy2 << "\n";
  }
//
//  Restore the default precision.
//
  cout.precision ( ss );

  return;
}
//****************************************************************************80

void r8_ceiling_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CEILING_TEST tests R8_CEILING.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int ival;
  double rval;

  cout << "\n";
  cout << "R8_CEILING_TEST\n";
  cout << "  R8_CEILING rounds an R8 up.\n";
  cout << "\n";
  cout << "       X           R8_CEILING(X)\n";
  cout << "\n";

  for ( i = -6; i <= 6; i++ )
  {
    rval = ( double ) ( i ) / 5.0;
    ival = r8_ceiling ( rval );
    cout << "  "
         << setw(14) << rval << "  "
         << setw(6)  << ival << "\n";
  }

  return;
}
//****************************************************************************80

void r8_error_f_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ERROR_F_TEST tests R8_ERROR_F.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int seed;
  double x;
  double y;
  double z;

  cout << "\n";
  cout << "R8_ERROR_F_TEST\n";
  cout << "  R8_ERROR_F evaluates ERF(X).\n";
  cout << "\n";
  cout << "X   -> Y = R8_ERROR_F(X) -> Z = R8_ERROR_F_INVERSE(Y)\n";
  cout << "\n";

  seed = 123456789;

  x = 1.0;

  for ( i = 1; i <= 20; i++ )
  {
    x = normal_01_sample ( seed );
    y = r8_error_f ( x );
    z = r8_error_f_inverse ( y );
    cout << "  " << setw(14) << x
         << "  " << setw(14) << y
         << "  " << setw(14) << z << "\n";
  }
  return;
}
//****************************************************************************80

void r8_factorial_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_FACTORIAL_TEST tests R8_FACTORIAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double f;
  int i;

  cout << "\n";
  cout << "R8_FACTORIAL_TEST\n";
  cout << "  R8_FACTORIAL evaluates the factorial function.\n";
  cout << "\n";
  cout << "    I                R8_FACTORIAL(I)\n";
  cout << "\n";

  for ( i = 0; i <= 20; i++ )
  {
    f = r8_factorial ( i );

    cout << "  "
         << setw(4) << i << "  "
         << setw(24) << f << "\n";
  }

  return;
}
//****************************************************************************80

void r8_gamma_inc_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMMA_INC_TEST tests R8_GAMMA_INC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double fx;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << "R8_GAMMA_INC_TEST:\n";
  cout << "  R8_GAMMA_INC evaluates the normalized incomplete Gamma\n";
  cout << "  function.\n";
  cout << "\n";
  cout << "   A      X       Exact F       R8_GAMMA_INC(A,X)\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gamma_inc_values ( n_data, a, x, fx );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_gamma_inc ( a, x );

    cout << "  "
         << setw(8)  << a   << "  "
         << setw(8)  << x   << "  "
         << setw(16) << fx  << "  "
         << setw(16) << fx2 << "\n";
  }

  return;
}
//****************************************************************************80

void r8_gamma_log_int_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMMA_LOG_INT_TEST tests R8_GAMMA_LOG_INT;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double f;
  double g;
  int i;
  double x;

  cout << "\n";
  cout << "R8_GAMMA_LOG_INT_TEST\n";
  cout << "  R8_GAMMA_LOG_INT evaluates the logarithm of the gamma function\n";
  cout << "  for integer argument.\n";

  cout << "\n";
  cout << "       I     R8_GAMMA_LOG_INT(I)\n";
  cout << "\n";

  for ( i = 1; i <= 20; i++ )
  {
    g = r8_gamma_log_int ( i );

    cout << "  "
         << setw(6)  << i << "  "
         << setw(12) << g << "\n";
  }

  return;
}
//****************************************************************************80

void r8_uniform_01_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_01_TEST tests R8_UNIFORM_01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define N 1000

  int i;
  double max;
  double mean;
  double min;
  int n;
  int seed = 123456789;
  double x[N];
  double variance;

  cout << "\n";
  cout << "R8_UNIFORM_01_TEST\n";
  cout << "  R8_UNIFORM_01 samples a uniform random distribution in [0,1].\n";
  cout << "  distributed random numbers.\n";
  cout << "  Using initial random number seed = " << seed << "\n";

  for ( i = 0; i < N; i++ )
  {
    x[i] = r8_uniform_01 ( seed );
  }

  cout << "\n";
  cout << "  First few values:\n";
  cout << "\n";
  for ( i = 0; i < 10; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << setw(14) << x[i] << "\n";
  }
  min = r8vec_min ( N, x );
  max = r8vec_max ( N, x );
  mean = r8vec_mean ( N, x );
  variance = r8vec_variance ( N, x );

  cout << "\n";
  cout << "  Number of samples was " << N << "\n";
  cout << "  Minimum value was " << min << "\n";
  cout << "  Maximum value was " << max << "\n";
  cout << "  Average value was " << mean << "\n";
  cout << "  Variance was      " << variance << "\n";

  return;
# undef N
}
//****************************************************************************80

void r8_zeta_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ZETA_TEST tests R8_ZETA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  double p;
  double v;

  cout << "\n";
  cout << "R8_ZETA_TEST\n";
  cout << "  R8_ZETA estimates the Zeta function.\n";

  cout << "\n";
  cout << "       P     R8_Zeta(P)\n";
  cout << "\n";
  for ( i = 1; i <= 25; i++ )
  {
    p = ( double ) ( i );
    v = r8_zeta ( p );
    cout << "  " << setw(6) << p
         << "  " << setw(14) << v << "\n";
  }

  cout << "\n";
  for ( i = 0; i <= 8; i++ )
  {
    p = 3.0 + ( double ) ( i ) / 8.0;
    v = r8_zeta ( p );
    cout << "  " << setw(6) << p
         << "  " << setw(14) << v << "\n";
  }

  return;
}
//****************************************************************************80

void rayleigh_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAYLEIGH_CDF_TEST tests RAYLEIGH_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "RAYLEIGH_CDF_TEST\n";
  cout << "  RAYLEIGH_CDF evaluates the Rayleigh CDF;\n";
  cout << "  RAYLEIGH_CDF_INV inverts the Rayleigh CDF.\n";
  cout << "  RAYLEIGH_PDF evaluates the Rayleigh PDF;\n";

  a = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! rayleigh_check ( a ) )
  {
    cout << "\n";
    cout << "RAYLEIGH_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = rayleigh_sample ( a, seed );
    pdf = rayleigh_pdf ( x, a );
    cdf = rayleigh_cdf ( x, a );
    x2 = rayleigh_cdf_inv ( cdf, a );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void rayleigh_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RAYLEIGH_SAMPLE_TEST tests RAYLEIGH_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int j;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "RAYLEIGH_SAMPLE_TEST\n";
  cout << "  RAYLEIGH_MEAN computes the Rayleigh mean;\n";
  cout << "  RAYLEIGH_SAMPLE samples the Rayleigh distribution;\n";
  cout << "  RAYLEIGH_VARIANCE computes the Rayleigh variance.\n";

  a = 2.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a        << "\n";

  if ( ! rayleigh_check ( a ) )
  {
    cout << "\n";
    cout << "RAYLEIGH_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = rayleigh_mean ( a );
  variance = rayleigh_variance ( a );

  cout << "  PDF mean =                    " << mean     << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    x[j] = rayleigh_sample ( a, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void reciprocal_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RECIPROCAL_CDF_TEST tests RECIPROCAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "RECIPROCAL_CDF_TEST\n";
  cout << "  RECIPROCAL_CDF evaluates the Reciprocal CDF;\n";
  cout << "  RECIPROCAL_CDF_INV inverts the Reciprocal CDF.\n";
  cout << "  RECIPROCAL_PDF evaluates the Reciprocal PDF;\n";

  a = 1.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! reciprocal_check ( a, b ) )
  {
    cout << "\n";
    cout << "RECIPROCAL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = reciprocal_sample ( a, b, seed );
    pdf = reciprocal_pdf ( x, a, b );
    cdf = reciprocal_cdf ( x, a, b );
    x2 = reciprocal_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void reciprocal_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RECIPROCAL_SAMPLE_TEST tests RECIPROCAL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "RECIPROCAL_SAMPLE_TEST\n";
  cout << "  RECIPROCAL_MEAN computes the Reciprocal mean;\n";
  cout << "  RECIPROCAL_SAMPLE samples the Reciprocal distribution;\n";
  cout << "  RECIPROCAL_VARIANCE computes the Reciprocal variance;\n";

  a = 1.0;
  b = 3.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! reciprocal_check ( a, b ) )
  {
    cout << "\n";
    cout << "RECIPROCAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = reciprocal_mean ( a, b );
  variance = reciprocal_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = reciprocal_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void runs_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RUNS_PDF_TEST tests RUNS_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int m;
  int n;
  double pdf;
  double pdf_total;
  int r;

  cout << "\n";
  cout << "RUNS_PDF_TEST\n";
  cout << "  RUNS_PDF evaluates the Runs PDF;\n";
  cout << "\n";
  cout << "  M is the number of symbols of one kind,\n";
  cout << "  N is the number of symbols of the other kind,\n";
  cout << "  R is the number of runs (sequences of one symbol)\n";
  cout << "\n";
  cout << "         M         N         R      PDF\n";
  cout << "\n";

  m = 6;

  for ( n = 0; n <= 9; n++ )
  {
    cout << "\n";
    pdf_total = 0.0;

    for ( r = 1; r <= 2 * i4_min ( m, n ) + 2; r++ )
    {
      pdf = runs_pdf ( m, n, r );

      cout << "  " << setw(8) << m
           << "  " << setw(8) << n
           << "  " << setw(8) << r
           << "  " << setw(14) << pdf << "\n";

      pdf_total = pdf_total + pdf;
    }

    cout << "  " << setw(8) << m
         << "  " << "        "
         << "  " << "        "
         << "  " << setw(14) << pdf_total << "\n";

  }

  return;
}
//****************************************************************************80

void runs_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RUNS_SAMPLE_TEST tests RUNS_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  int m;
  double mean;
  int n;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "RUNS_SAMPLE_TEST\n";
  cout << "  RUNS_MEAN computes the Runs mean;\n";
  cout << "  RUNS_SAMPLE samples the Runs distribution;\n";
  cout << "  RUNS_VARIANCE computes the Runs variance\n";

  m = 10;
  n = 5;

  cout << "\n";
  cout << "  PDF parameter M = " << m << "\n";
  cout << "  PDF parameter N = " << n << "\n";

  mean = runs_mean ( m, n );
  variance = runs_variance ( m, n );

  cout << "  PDF mean =        " << mean << "\n";
  cout << "  PDF variance =    " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = runs_sample ( m, n, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void sech_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SECH_CDF_TEST tests SECH_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "SECH_CDF_TEST\n";
  cout << "  SECH_CDF evaluates the Sech CDF;\n";
  cout << "  SECH_CDF_INV inverts the Sech CDF.\n";
  cout << "  SECH_PDF evaluates the Sech PDF;\n";

  a = 3.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! sech_check ( a, b ) )
  {
    cout << "\n";
    cout << "SECH_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = sech_sample ( a, b, seed );
    pdf = sech_pdf ( x, a, b );
    cdf = sech_cdf ( x, a, b );
    x2 = sech_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void sech_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SECH_SAMPLE_TEST tests SECH_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "SECH_SAMPLE_TEST\n";
  cout << "  SECH_MEAN computes the Sech mean;\n";
  cout << "  SECH_SAMPLE samples the Sech distribution;\n";
  cout << "  SECH_VARIANCE computes the Sech variance;\n";

  a = 3.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! sech_check ( a, b ) )
  {
    cout << "\n";
    cout << "SECH_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = sech_mean ( a, b );
  variance = sech_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = sech_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void semicircular_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SEMICIRCULAR_CDF_TEST tests SEMICIRCULAR_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "SEMICIRCULAR_CDF_TEST\n";
  cout << "  SEMICIRCULAR_CDF evaluates the Semicircular CDF;\n";
  cout << "  SEMICIRCULAR_CDF_INV inverts the Semicircular CDF.\n";
  cout << "  SEMICIRCULAR_PDF evaluates the Semicircular PDF;\n";

  a = 3.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! semicircular_check ( a, b ) )
  {
    cout << "\n";
    cout << "SEMICIRCULAR_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = semicircular_sample ( a, b, seed );
    pdf = semicircular_pdf ( x, a, b );
    cdf = semicircular_cdf ( x, a, b );
    x2 = semicircular_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void semicircular_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SEMICIRCULAR_SAMPLE_TEST tests SEMICIRCULAR_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 March 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "SEMICIRCULAR_SAMPLE_TEST\n";
  cout << "  SEMICIRCULAR_MEAN computes the Semicircular mean;\n";
  cout << "  SEMICIRCULAR_SAMPLE samples the Semicircular distribution;\n";
  cout << "  SEMICIRCULAR_VARIANCE computes the Semicircular variance;\n";

  a = 3.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! semicircular_check ( a, b ) )
  {
    cout << "\n";
    cout << "SEMICIRCULAR_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = semicircular_mean ( a, b );
  variance = semicircular_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = semicircular_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void student_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    STUDENT_CDF_TEST tests STUDENT_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;

  cout << "\n";
  cout << "STUDENT_CDF_TEST\n";
  cout << "  STUDENT_CDF evaluates the Student CDF;\n";
  cout << "  STUDENT_PDF evaluates the Student PDF;\n";
  cout << "  STUDENT_SAMPLE samples the Student PDF;\n";

  a = 0.5;
  b = 2.0;
  c = 6.0;

  cout << "\n";
  cout << "  PDF parameter A = " << a   << "\n";
  cout << "  PDF parameter B = " << b   << "\n";
  cout << "  PDF parameter C = " << c   << "\n";

  if ( ! student_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "STUDENT_CDF_TEST - Fatal error!\n";
    cout << "  The parameter values are illegal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = student_sample ( a, b, c, seed );
    pdf = student_pdf ( x, a, b, c );
    cdf = student_cdf ( x, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "\n";
  }

  return;
}
//****************************************************************************80

void student_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    STUDENT_SAMPLE_TEST tests STUDENT_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 March 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "STUDENT_SAMPLE_TEST\n";
  cout << "  STUDENT_MEAN evaluates the Student mean;\n";
  cout << "  STUDENT_SAMPLE samples the Student PDF;\n";
  cout << "  STUDENT_VARIANCE computes the Student variance;\n";

  a = 0.5;
  b = 2.0;
  c = 6.0;

  cout << "\n";
  cout << "  PDF parameter A = " << a   << "\n";
  cout << "  PDF parameter B = " << b   << "\n";
  cout << "  PDF parameter C = " << c   << "\n";

  if ( ! student_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "STUDENT_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameter values are illegal.\n";
    return;
  }

  mean = student_mean ( a, b, c );
  variance = student_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = student_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";


  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void student_noncentral_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    STUDENT_NONCENTRAL_CDF_TEST tests STUDENT_NONCENTRAL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double b;
  double cdf;
  int idf;
  double x;

  cout << "\n";
  cout << "STUDENT_NONCENTRAL_CDF_TEST\n";
  cout << "  STUDENT_NONCENTRAL_CDF evaluates the Student Noncentral CDF;\n";

  x = 0.50;
  idf = 10;
  b = 1.0;

  cdf = student_noncentral_cdf ( x, idf, b );

  cout << "\n";
  cout << "  PDF argument X =              " << x   << "\n";
  cout << "  PDF parameter IDF =           " << idf << "\n";
  cout << "  PDF parameter B =             " << b   << "\n";
  cout << "  CDF value =                   " << cdf << "\n";

  return;
}
//****************************************************************************80

void tfn_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TFN_TEST tests TFN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double h;
  int n_data;
  double t;
  double t2;

  cout << "\n";
  cout << "TFN_TEST\n";
  cout << "  TFN evaluates Owen's T function;\n";
  cout << "\n";
  cout << "      H             A           T(H,A)          Exact\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    owen_values ( n_data, h, a, t );

    if ( n_data <= 0 )
    {
      break;
    }

    t2 = tfn ( h, a );

    cout << "  "
         << setw(14) << h  << "  "
         << setw(14) << a  << "  "
         << setw(14) << t2  << "  "
         << setw(14) << t  << "\n";
  }

  return;
}
//****************************************************************************80

void triangle_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_CDF_TEST tests TRIANGLE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "TRIANGLE_CDF_TEST\n";
  cout << "  TRIANGLE_CDF evaluates the Triangle CDF;\n";
  cout << "  TRIANGLE_CDF_INV inverts the Triangle CDF.\n";
  cout << "  TRIANGLE_PDF evaluates the Triangle PDF;\n";

  a = 1.0;
  b = 3.0;
  c = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! triangle_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "TRIANGLE_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = triangle_sample ( a, b, c, seed );
    pdf = triangle_pdf ( x, a, b, c );
    cdf = triangle_cdf ( x, a, b, c );
    x2 = triangle_cdf_inv ( cdf, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void triangle_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_SAMPLE_TEST tests TRIANGLE_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 March 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "TRIANGLE_SAMPLE_TEST\n";
  cout << "  TRIANGLE_MEAN computes the Triangle mean;\n";
  cout << "  TRIANGLE_SAMPLE samples the Triangle distribution;\n";
  cout << "  TRIANGLE_VARIANCE computes the Triangle variance;\n";

  a = 1.0;
  b = 3.0;
  c = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =        " << a << "\n";
  cout << "  PDF parameter B =        " << b << "\n";
  cout << "  PDF parameter C =        " << c << "\n";

  if ( ! triangle_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "TRIANGLE_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = triangle_mean ( a, b, c );
  variance = triangle_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = triangle_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void triangular_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGULAR_CDF_TEST tests TRIANGULAR_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "TRIANGULAR_CDF_TEST\n";
  cout << "  TRIANGULAR_CDF evaluates the Triangular CDF;\n";
  cout << "  TRIANGULAR_CDF_INV inverts the Triangular CDF.\n";
  cout << "  TRIANGULAR_PDF evaluates the Triangular PDF;\n";

  a = 1.0;
  b = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! triangular_check ( a, b ) )
  {
    cout << "\n";
    cout << "TRIANGULAR_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = triangular_sample ( a, b, seed );
    pdf = triangular_pdf ( x, a, b );
    cdf = triangular_cdf ( x, a, b );
    x2 = triangular_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void triangular_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGULAR_SAMPLE_TEST tests TRIANGULAR_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "TRIANGULAR_SAMPLE_TEST\n";
  cout << "  TRIANGULAR_MEAN computes the Triangular mean;\n";
  cout << "  TRIANGULAR_SAMPLE samples the Triangular distribution;\n";
  cout << "  TRIANGULAR_VARIANCE computes the Triangular variance;\n";

  a = 1.0;
  b = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! triangular_check ( a, b ) )
  {
    cout << "\n";
    cout << "TRIANGULAR_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = triangular_mean ( a, b );
  variance = triangular_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = triangular_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void uniform_01_order_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UNIFORM_01_ORDER_SAMPLE_TEST tests UNIFORM_01_ORDER_SAMPLE;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "UNIFORM_01_ORDER_SAMPLE_TEST\n";
  cout << "  For the Uniform 01 Order PDF:\n";
  cout << "  UNIFORM_ORDER_SAMPLE samples.\n";

  n = 10;
  x = uniform_01_order_sample ( n, seed );

  r8vec_print ( n, x, "  Ordered sample:" );

  delete [] x;

  return;
}
//****************************************************************************80

void uniform_nsphere_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UNIFORM_NSPHERE_SAMPLE_TEST tests UNIFORM_NSPHERE_SAMPLE;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int n;
  int seed = 123456789;
  double *x;

  n = 3;

  cout << "\n";
  cout << "UNIFORM_NSPHERE_SAMPLE_TEST\n";
  cout << "  UNIFORM_NSPHERE_SAMPLE samples the Uniform Nsphere distribution.\n";

  cout << "\n";
  cout << "  Dimension N of sphere = " << n << "\n";
  cout << "\n";
  cout << "  Points on the sphere:\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = uniform_nsphere_sample ( n, seed );
    cout << "  " << setw(6) << i << "  ";
    for ( j = 0; j < n; j++ )
    {
      cout << setw(12) << x[j] << "  ";
    }
    cout << "\n";
    delete [] x;
  }

  return;
}
//****************************************************************************80

void uniform_01_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UNIFORM_01_CDF_TEST tests UNIFORM_01_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "UNIFORM_01_CDF_TEST\n";

  cout << "  UNIFORM_01_CDF evaluates the Uniform 01 CDF;\n";
  cout << "  UNIFORM_01_CDF_INV inverts the Uniform 01 CDF.\n";
  cout << "  UNIFORM_01_PDF evaluates the Uniform 01 PDF;\n";

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = uniform_01_sample ( seed );
    pdf = uniform_01_pdf ( x );
    cdf = uniform_01_cdf ( x );
    x2 = uniform_01_cdf_inv ( cdf );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void uniform_01_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UNIFORM_01_SAMPLE_TEST tests UNIFORM_01_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "UNIFORM_01_SAMPLE_TEST\n";
  cout << "  UNIFORM_01_MEAN computes the Uniform 01 mean;\n";
  cout << "  UNIFORM_01_SAMPLE samples the Uniform 01 distribution;\n";
  cout << "  UNIFORM_01_VARIANCE computes the Uniform 01 variance.\n";

  mean     = uniform_01_mean ( );
  variance = uniform_01_variance ( );

  cout << "\n";
  cout << "  PDF mean =     " << mean << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = uniform_01_sample ( seed );
  }

  mean     = r8vec_mean     ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax     = r8vec_max      ( SAMPLE_NUM, x );
  xmin     = r8vec_min      ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void uniform_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UNIFORM_CDF_TEST tests UNIFORM_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "UNIFORM_CDF_TEST\n";
  cout << "  UNIFORM_CDF evaluates the Uniform CDF;\n";
  cout << "  UNIFORM_CDF_INV inverts the Uniform CDF.\n";
  cout << "  UNIFORM_PDF evaluates the Uniform PDF;\n";

  a = 1.0;
  b = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! uniform_check ( a, b ) )
  {
    cout << "\n";
    cout << "UNIFORM_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = uniform_sample ( a, b, seed );
    pdf = uniform_pdf ( x, a, b );
    cdf = uniform_cdf ( x, a, b );
    x2 = uniform_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void uniform_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UNIFORM_SAMPLE_TEST tests UNIFORM_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "UNIFORM_SAMPLE_TEST\n";
  cout << "  UNIFORM_MEAN computes the Uniform mean;\n";
  cout << "  UNIFORM_SAMPLE samples the Uniform distribution;\n";
  cout << "  UNIFORM_VARIANCE computes the Uniform variance;\n";

  a = 1.0;
  b = 10.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! uniform_check ( a, b ) )
  {
    cout << "\n";
    cout << "UNIFORM_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = uniform_mean ( a, b );
  variance = uniform_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = uniform_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void uniform_discrete_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UNIFORM_DISCRETE_CDF_TEST tests UNIFORM_DISCRETE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2007
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "UNIFORM_DISCRETE_CDF_TEST\n";
  cout << "  UNIFORM_DISCRETE_CDF evaluates the Uniform Discrete CDF;\n";
  cout << "  UNIFORM_DISCRETE_CDF_INV inverts the Uniform Discrete CDF.\n";
  cout << "  UNIFORM_DISCRETE_PDF evaluates the Uniform Discrete PDF;\n";

  a = 1;
  b = 6;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! uniform_discrete_check ( a, b ) )
  {
    cout << "\n";
    cout << "UNIFORM_DISCRETE_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = uniform_discrete_sample ( a, b, seed );
    pdf = uniform_discrete_pdf ( x, a, b );
    cdf = uniform_discrete_cdf ( x, a, b );
    x2 = uniform_discrete_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void uniform_discrete_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UNIFORM_DISCRETE_SAMPLE_TEST tests UNIFORM_DISCRETE_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  int a;
  int b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "UNIFORM_DISCRETE_SAMPLE_TEST\n";
  cout << "  UNIFORM_DISCRETE_MEAN computes the Uniform Discrete mean;\n";
  cout << "  UNIFORM_DISCRETE_SAMPLE samples the Uniform Discrete distribution;\n";
  cout << "  UNIFORM_DISCRETE_VARIANCE computes the Uniform Discrete variance;\n";

  a = 1;
  b = 6;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! uniform_discrete_check ( a, b ) )
  {
    cout << "\n";
    cout << "UNIFORM_DISCRETE_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = uniform_discrete_mean ( a, b );
  variance = uniform_discrete_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = uniform_discrete_sample ( a, b, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void von_mises_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VON_MISES_CDF_TEST tests VON_MISES_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "VON_MISES_CDF_TEST\n";
  cout << "  VON_MISES_CDF evaluates the Von Mises CDF;\n";
  cout << "  VON_MISES_CDF_INV inverts the Von Mises CDF.\n";
  cout << "  VON_MISES_PDF evaluates the Von Mises PDF;\n";

  a = 1.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! von_mises_check ( a, b ) )
  {
    cout << "\n";
    cout << "VON_MISES_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = von_mises_sample ( a, b, seed );
    pdf = von_mises_pdf ( x, a, b );
    cdf = von_mises_cdf ( x, a, b );
    x2 = von_mises_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void von_mises_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VON_MISES_SAMPLE_TEST tests VON_MISES_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "VON_MISES_SAMPLE_TEST\n";
  cout << "  VON_MISES_MEAN computes the Von Mises mean;\n";
  cout << "  VON_MISES_SAMPLE samples the Von Mises distribution;\n";
  cout << "  VON_MISES_CIRCULAR_VARIANCE computes the Von Mises circular variance;\n";

  a = 1.0;
  b = 2.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! von_mises_check ( a, b ) )
  {
    cout << "\n";
    cout << "VON_MISES_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = von_mises_mean ( a, b );
  variance = von_mises_circular_variance ( a, b );

  cout << "\n";
  cout << "  PDF mean =              " << mean     << "\n";
  cout << "  PDF circular variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = von_mises_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_circular_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =              " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =              " << mean     << "\n";
  cout << "  Sample circular variance = " << variance << "\n";
  cout << "  Sample maximum =           " << xmax     << "\n";
  cout << "  Sample minimum =           " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void weibull_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    WEIBULL_CDF_TEST tests WEIBULL_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  double x;
  double x2;

  cout << "\n";
  cout << "WEIBULL_CDF_TEST\n";
  cout << "  WEIBULL_CDF evaluates the Weibull CDF;\n";
  cout << "  WEIBULL_CDF_INV inverts the Weibull CDF.\n";
  cout << "  WEIBULL_PDF evaluates the Weibull PDF;\n";

  a = 2.0;
  b = 3.0;
  c = 4.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! weibull_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "WEIBULL_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = weibull_sample ( a, b, c, seed );
    pdf = weibull_pdf ( x, a, b, c );
    cdf = weibull_cdf ( x, a, b, c );
    x2 = weibull_cdf_inv ( cdf, a, b, c );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void weibull_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    WEIBULL_SAMPLE_TEST tests WEIBULL_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  double c;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "WEIBULL_SAMPLE_TEST\n";
  cout << "  WEIBULL_MEAN computes the Weibull mean;\n";
  cout << "  WEIBULL_SAMPLE samples the Weibull distribution;\n";
  cout << "  WEIBULL_VARIANCE computes the Weibull variance.\n";

  a = 2.0;
  b = 3.0;
  c = 4.0;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";
  cout << "  PDF parameter C =      " << c << "\n";

  if ( ! weibull_check ( a, b, c ) )
  {
    cout << "\n";
    cout << "WEIBULL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = weibull_mean ( a, b, c );
  variance = weibull_variance ( a, b, c );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = weibull_sample ( a, b, c, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;

# undef SAMPLE_NUM
}
//****************************************************************************80

void weibull_discrete_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    WEIBULL_DISCRETE_CDF_TEST tests WEIBULL_DISCRETE_CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double cdf;
  int i;
  double pdf;
  int seed = 123456789;
  int x;
  int x2;

  cout << "\n";
  cout << "WEIBULL_DISCRETE_CDF_TEST\n";
  cout << "  WEIBULL_DISCRETE_CDF evaluates the Weibull Discrete CDF;\n";
  cout << "  WEIBULL_DISCRETE_CDF_INV inverts the Weibull Discrete CDF.\n";
  cout << "  WEIBULL_DISCRETE_PDF evaluates the Weibull Discrete PDF;\n";

  a = 0.5;
  b = 1.5;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! weibull_discrete_check ( a, b ) )
  {
    cout << "\n";
    cout << "WEIBULL_DISCRETE_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = weibull_discrete_sample ( a, b, seed );
    pdf = weibull_discrete_pdf ( x, a, b );
    cdf = weibull_discrete_cdf ( x, a, b );
    x2 = weibull_discrete_cdf_inv ( cdf, a, b );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2  << "\n";
  }

  return;
}
//****************************************************************************80

void weibull_discrete_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    WEIBULL_DISCRETE_SAMPLE_TEST tests WEIBULL_DISCRETE_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 April 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  int seed = 123456789;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "WEIBULL_DISCRETE_SAMPLE_TEST\n";
  cout << "  WEIBULL_DISCRETE_SAMPLE samples the Weibull Discrete distribution;\n";

  a = 0.5;
  b = 1.5;

  cout << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! weibull_discrete_check ( a, b ) )
  {
    cout << "\n";
    cout << "WEIBULL_DISCRETE_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = weibull_discrete_sample ( a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
//****************************************************************************80

void zipf_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ZIPF_CDF_TEST tests ZIPF_CDF, ZIPF_CDF_INV, ZIPF_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double cdf;
  double pdf;
  int x;
  int x2;

  cout << "\n";
  cout << "ZIPF_CDF_TEST\n";
  cout << "  ZIPF_CDF evaluates the Zipf CDF;\n";
  cout << "  ZIPF_CDF_INV inverts the Zipf CDF;\n";
  cout << "  ZIPF_PDF evaluates the Zipf PDF;\n";

  a = 2.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a   << "\n";

  if ( ! zipf_check ( a ) )
  {
    cout << "\n";
    cout << "ZIPF_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF    CDF_INV()\n";
  cout << "\n";

  for ( x = 1; x <= 20; x++ )
  {
    pdf = zipf_pdf ( x, a );
    cdf = zipf_cdf ( x, a );
    x2 = zipf_cdf_inv ( a, cdf );

    cout << "  "
         << setw(12) << x   << "  "
         << setw(12) << pdf << "  "
         << setw(12) << cdf << "  "
         << setw(12) << x2 << "\n";
  }

  return;
}
//****************************************************************************80

void zipf_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ZIPF_SAMPLE_TEST tests ZIPF_MEAN, ZIPF_SAMPLE, ZIPF_VARIANCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2016
//
//  Author:
//
//    John Burkardt
//
{
# define SAMPLE_NUM 1000

  double a;
  int i;
  int j;
  double mean;
  int seed = 123456789;
  double variance;
  int x[SAMPLE_NUM];
  int xmax;
  int xmin;

  cout << "\n";
  cout << "ZIPF_SAMPLE_TEST\n";
  cout << "  ZIPF_MEAN computes the Zipf mean;\n";
  cout << "  ZIPF_SAMPLE samples the Zipf distribution;\n";
  cout << "  ZIPF_VARIANCE computes the Zipf variance.\n";

  a = 4.0E+00;

  cout << "\n";
  cout << "  PDF parameter A =             " << a        << "\n";

  if ( ! zipf_check ( a ) )
  {
    cout << "\n";
    cout << "ZIPF_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = zipf_mean ( a );
  variance = zipf_variance ( a );

  cout << "  PDF mean =                    " << mean     << "\n";
  cout << "  PDF variance =                " << variance << "\n";

  for ( j = 0; j < SAMPLE_NUM; j++ )
  {
    x[j] = zipf_sample ( a, seed );
  }

  mean = i4vec_mean ( SAMPLE_NUM, x );
  variance = i4vec_variance ( SAMPLE_NUM, x );
  xmax = i4vec_max ( SAMPLE_NUM, x );
  xmin = i4vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM  << "\n";
  cout << "  Sample mean =     " << mean     << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax     << "\n";
  cout << "  Sample minimum =  " << xmin     << "\n";

  return;
# undef SAMPLE_NUM
}
