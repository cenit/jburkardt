# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "log_normal.hpp"

int main ( );

void log_normal_cdf_test ( );
void log_normal_sample_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for LOG_NORMAL_PRB.
//
//  Discussion:
//
//    LOG_NORMAL_PRB tests the LOG_NORMAL library.
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
  timestamp ( );
  cout << "\n";
  cout << "LOG_NORMAL_PRB\n";
  cout << "  C++ version.\n";
  cout << "  Test the LOG_NORMAL library.\n";

  log_normal_cdf_test ( );
  log_normal_sample_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "LOG_NORMAL_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
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
  double cdf;
  int i;
  double mu;
  double pdf;
  int seed = 123456789;
  double sigma;
  double x;
  double x2;

  cout << "\n";
  cout << "LOG_NORMAL_CDF_TEST\n";
  cout << "  LOG_NORMAL_CDF evaluates the Log Normal CDF;\n";
  cout << "  LOG_NORMAL_CDF_INV inverts the Log Normal CDF.\n";
  cout << "  LOG_NORMAL_PDF evaluates the Log Normal PDF;\n";

  mu = 10.0;
  sigma = 2.25;

  cout << "\n";
  cout << "  PDF parameter MU =      " << mu << "\n";
  cout << "  PDF parameter SIGMA =   " << sigma << "\n";

  if ( ! log_normal_check ( mu, sigma ) )
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
    x = log_normal_sample ( mu, sigma, seed );
    pdf = log_normal_pdf ( x, mu, sigma );
    cdf = log_normal_cdf ( x, mu, sigma );
    x2 = log_normal_cdf_inv ( cdf, mu, sigma );

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
  cout << "LOG_NORMAL_SAMPLE_TEST\n";
  cout << "  LOG_NORMAL_MEAN computes the Log Normal mean;\n";
  cout << "  LOG_NORMAL_SAMPLE samples the Log Normal distribution;\n";
  cout << "  LOG_NORMAL_VARIANCE computes the Log Normal variance;\n";

  mu = 1.0;
  sigma = 2.0;

  cout << "\n";
  cout << "  PDF parameter MU =      " << mu << "\n";
  cout << "  PDF parameter SIGMA =   " << sigma << "\n";

  if ( ! log_normal_check ( mu, sigma ) )
  {
    cout << "\n";
    cout << "LOG_NORMAL_SAMPLE_TEST - Fatal error!\n";
    cout << "  The parameters are not legal.\n";
    return;
  }

  mean = log_normal_mean ( mu, sigma);
  variance = log_normal_variance ( mu, sigma );

  cout << "\n";
  cout << "  PDF mean =     " << mean     << "\n";
  cout << "  PDF variance = " << variance << "\n";

  for ( i = 0; i < SAMPLE_NUM; i++ )
  {
    x[i] = log_normal_sample ( mu, sigma, seed );
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
