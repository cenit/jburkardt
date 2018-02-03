# include <cmath>
# include <cstring>
# include <iomanip>
# include <iostream>

using namespace std;

# include "log_normal_truncated_ab.hpp"

int main ( );

void log_normal_truncated_ab_cdf_test ( );
void log_normal_truncated_ab_sample_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for LOG_NORMAL_TRUNCATED_AB_PRB.
//
//  Discussion:
//
//    LOG_NORMAL_TRUNCATED_AB_PRB tests the LOG_NORMAL_TRUNCATED_AB library.
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
  timestamp ( );
  cout << "\n";
  cout << "LOG_NORMAL_TRUNCATED_AB_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the LOG_NORMAL_TRUNCATED_AB library.\n";

  log_normal_truncated_ab_cdf_test ( );
  log_normal_truncated_ab_sample_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "LOG_NORMAL_TRUNCATED_AB_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void log_normal_truncated_ab_cdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_TRUNCATED_AB_CDF_TEST tests LOG_NORMAL_TRUNCATED_AB_CDF.
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
  double b;
  double cdf;
  int i;
  double mu;
  double pdf;
  int seed = 123456789;
  double sigma;
  double x;
  double x2;

  cout << "\n";
  cout << "LOG_NORMAL_TRUNCATED_AB_CDF_TEST\n";
  cout << "  LOG_NORMAL_TRUNCATED_AB_CDF evaluates the Log Normal Truncated AB CDF;\n";
  cout << "  LOG_NORMAL_TRUNCATED_AB_CDF_INV inverts the Log Normal Truncated AB CDF.\n";
  cout << "  LOG_NORMAL_TRUNCATED_AB_PDF evaluates the Log Normal Truncated AB PDF;\n";

  mu = 0.5;
  sigma = 3.0;
  a = exp ( mu );
  b = exp ( mu + 2.0 * sigma );

  cout << "\n";
  cout << "  PDF parameter MU =     " << mu << "\n";
  cout << "  PDF parameter SIGMA =  " << sigma << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! log_normal_truncated_ab_check ( mu, sigma, a, b ) )
  {
    cout << "\n";
    cout << "LOG_NORMAL_TRUNCATED_AB_CDF_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  cout << "\n";
  cout << "       X            PDF           CDF            CDF_INV\n";
  cout << "\n";

  for ( i = 1; i <= 10; i++ )
  {
    x = log_normal_truncated_ab_sample ( mu, sigma, a, b, seed );
    pdf = log_normal_truncated_ab_pdf ( x, mu, sigma, a, b );
    cdf = log_normal_truncated_ab_cdf ( x, mu, sigma, a, b );
    x2 = log_normal_truncated_ab_cdf_inv ( cdf, mu, sigma, a, b );

    cout << "  " << setw(12) << x
         << "  " << setw(12) << pdf
         << "  " << setw(12) << cdf
         << "  " << setw(12) << x2 << "\n";
  }

  return;
}
//****************************************************************************80

void log_normal_truncated_ab_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_TRUNCATED_AB_SAMPLE_TEST tests LOG_NORMAL_TRUNCATED_AB_SAMPLE.
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
# define SAMPLE_NUM 1000

  double a;
  double b;
  int i;
  double mean;
  double mu;
  int seed = 123456789;
  double sigma;
  double variance;
  double x[SAMPLE_NUM];
  double xmax;
  double xmin;

  cout << "\n";
  cout << "LOG_NORMAL_TRUNCATED_AB_SAMPLE_TEST\n";
  cout << "  LOG_NORMAL_TRUNCATED_AB_MEAN computes the Log Normal Truncated AB mean;\n";
  cout << "  LOG_NORMAL_TRUNCATED_AB_SAMPLE samples the Log Normal Truncated AB distribution;\n";
  cout << "  LOG_NORMAL_TRUNCATED_AB_VARIANCE computes the Log Normal Truncated AB variance;\n";

  mu = 0.5;
  sigma = 3.0;
  a = exp ( mu );
  b = exp ( mu + 2.0 * sigma );

  cout << "\n";
  cout << "  PDF parameter MU =     " << mu << "\n";
  cout << "  PDF parameter SIGMA =  " << sigma << "\n";
  cout << "  PDF parameter A =      " << a << "\n";
  cout << "  PDF parameter B =      " << b << "\n";

  if ( ! log_normal_truncated_ab_check ( mu, sigma, a, b ) )
  {
    cout << "\n";
    cout << "LOG_NORMAL_TRUNCATED_AB_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = log_normal_truncated_ab_mean ( mu, sigma, a, b );
  variance = log_normal_truncated_ab_variance ( mu, sigma, a, b );

  cout << "\n";
  cout << "  PDF mean =     " << mean << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = log_normal_truncated_ab_sample ( mu, sigma, a, b, seed );
  }

  mean = r8vec_mean ( SAMPLE_NUM, x );
  variance = r8vec_variance ( SAMPLE_NUM, x );
  xmax = r8vec_max ( SAMPLE_NUM, x );
  xmin = r8vec_min ( SAMPLE_NUM, x );

  cout << "\n";
  cout << "  Sample size =     " << SAMPLE_NUM << "\n";
  cout << "  Sample mean =     " << mean << "\n";
  cout << "  Sample variance = " << variance << "\n";
  cout << "  Sample maximum =  " << xmax << "\n";
  cout << "  Sample minimum =  " << xmin << "\n";

  return;
# undef SAMPLE_NUM
}
