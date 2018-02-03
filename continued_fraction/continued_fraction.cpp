# include <iomanip>
# include <iostream>
# include <ctime>

using namespace std;

# include "continued_fraction.hpp"

//****************************************************************************80

void i4cf_evaluate ( int n, int a[], int b[], int p[], int q[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4CF_EVALUATE evaluates a continued fraction with I4 entries.
//
//  Discussion:
//
//    For convenience, we omit the parentheses or multiline display.
//
//    CF = A(0) + B(1) / A(1) + B(2) / A(2) + ... A(N-1) + B(N) / A(N).
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    07 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles Mesztenyi,
//    John Rice, Henry Thatcher, Christoph Witzgall,
//    Computer Approximations,
//    Wiley, 1968.
//
//  Parameters:
//
//    Input, int N, the number of continued fraction
//    coefficients.
//
//    Input, int A[N+1], B[N+1], the continued fraction 
//    coefficients.
//
//    Output, int P[N+1], Q[N+1], the N+1 successive 
//    approximations to the value of the continued fraction.
//
{
  int i;

  for ( i = 0; i <= n; i++ )
  {
    if ( i == 0 )
    {
      p[i] = a[i] * 1 + 0;
      q[i] = a[i] * 0 + 1;
    }
    else if ( i == 1 )
    {
      p[i] = a[i] * p[i-1] + b[i] * 1;
      q[i] = a[i] * q[i-1] + b[i] * 0;
    }
    else
    {
      p[i] = a[i] * p[i-1] + b[i] * p[i-2];
      q[i] = a[i] * q[i-1] + b[i] * q[i-2];
    }
  }

  return;
}
//****************************************************************************80

void i4cf_evaluate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4CF_EVALUATE_TEST tests I4CF_EVALUATE.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    05 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  int a[20] = {
    3, 
    6, 6, 6, 6, 6, 
    6, 6, 6, 6, 6, 
    6, 6, 6, 6, 6, 
    6, 6, 6, 6 };
  int b[20] = {
      0,
      1,    9,   25,   49,   81, 
    121,  169,  225,  289,  361, 
    441,  529,  625,  729,  841, 
    961, 1089, 1225, 1369 };
  int n = 19;
  int *p;
  int *q;
  int i;
  streamsize ss;
  double t;

  ss = cout.precision ( );

  cout << "\n";
  cout << "I4CF_EVALUATE_TEST:\n";

  p = new int[n+1];
  q = new int[n+1];

  i4cf_evaluate ( n, a, b, p, q );

  cout << "\n";
  cout << "  CF numerators, denominators, ratios:\n";
  cout << "\n";

  for ( i = 0; i <= n; i++ )
  {
    t = ( double ) ( p[i] ) / ( double ) ( q[i] );
    cout << "  " << setw(2) << i
         << "  " << setw(20) << p[i]
         << "  " << setw(20) << q[i]
         << "  " << setw(24) << setprecision ( 16 ) << t << "\n";
  }

  cout.precision ( ss );

  delete [] p;
  delete [] q;

  return;
}
//****************************************************************************80

void i4scf_evaluate ( int n, int a[], int p[], int q[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4SCF_EVALUATE evaluates a simple continued fraction with I4 entries.
//
//  Discussion:
//
//    The simple continued fraction with integer coefficients is:
//
//      SCF = A(0) + 1 / ( A(1) + 1 / ( A(2) ... + 1 / A(N) ) )
//
//    This routine returns the successive approximants P[i]/Q[i]
//    to the value of the rational number represented by the continued
//    fraction, with the value exactly equal to the final ratio P(N)/Q(N).
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    04 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles Mesztenyi,
//    John Rice, Henry Thatcher, Christoph Witzgall,
//    Computer Approximations,
//    Wiley, 1968.
//
//  Parameters:
//
//    Input, int N, the number of continued fraction
//    coefficients.
//
//    Input, int A[N+1], the continued fraction coefficients.
//
//    Output, int P[N+1], Q[N+1], the numerators and
//    denominators of the successive approximations.
//
{
  int i;

  for ( i = 0; i <= n; i++ )
  {
    if ( i == 0 )
    {
      p[i] = a[i] * 1 + 0;
      q[i] = a[i] * 0 + 1;
    }
    else if ( i == 1 )
    {
      p[i] = a[i] * p[i-1] + 1;
      q[i] = a[i] * q[i-1] + 0;
    }
    else
    {
      p[i] = a[i] * p[i-1] + p[i-2];
      q[i] = a[i] * q[i-1] + q[i-2];
    }
  }

  return;
}
//****************************************************************************80

void i4scf_evaluate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4SCF_EVALUATE_TEST tests I4SCF_EVALUATE.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    04 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  int a[20] = {
    3, 7, 15, 1, 292,
    1, 1,  1, 2,   1, 
    3, 1, 14, 2,   1, 
    1, 2,  2, 2,   2 };
  int n = 19;
  int *p;
  int *q;
  int i;
  streamsize ss;
  double t;

  ss = cout.precision ( );

  cout << "\n";
  cout << "I4SCF_EVALUATE_TEST:\n";

  p = new int[n+1];
  q = new int[n+1];

  i4scf_evaluate ( n, a, p, q );

  cout << "\n";
  cout << "  SCF numerators, denominators, ratios:\n";
  cout << "\n";

  for ( i = 0; i <= n; i++ )
  {
    t = ( double ) ( p[i] ) / ( double) ( q[i] );
    cout << "  " << setw(2) << i
         << "  " << setw(20) << p[i]
         << "  " << setw(20) << q[i]
         << "  " << setw(24) << setprecision ( 16 ) << t << "\n";
  }

  cout.precision ( ss );

  delete [] p;
  delete [] q;

  return;
}
//****************************************************************************80

void i4vec_print ( int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PRINT prints an I4VEC.
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, int A[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(8) << i
         << ": " << setw(8) << a[i]  << "\n";
  }
  return;
}
//****************************************************************************80

void i8cf_evaluate ( int n, long long a[], long long b[], long long p[], 
  long long q[] )

//****************************************************************************80
//
//  Purpose:
//
//    I8CF_EVALUATE evaluates a continued fraction with I8 entries.
//
//  Discussion:
//
//    For convenience, we omit the parentheses or multiline display.
//
//    CF = A(0) + B(1) / A(1) + B(2) / A(2) + ... A(N-1) + B(N) / A(N).
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    05 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles Mesztenyi,
//    John Rice, Henry Thatcher, Christoph Witzgall,
//    Computer Approximations,
//    Wiley, 1968.
//
//  Parameters:
//
//    Input, int N, the number of continued fraction
//    coefficients.
//
//    Input, long long int A[N+1], B[N+1], the continued fraction 
//    coefficients.
//
//    Output, long long int P[N+1], Q[N+1], the N successive 
//    approximations to the value of the continued fraction.
//
{
  int i;

  for ( i = 0; i <= n; i++ )
  {
    if ( i == 0 )
    {
      p[i] = a[i] * 1 + 0;
      q[i] = a[i] * 0 + 1;
    }
    else if ( i == 1 )
    {
      p[i] = a[i] * p[i-1] + b[i] * 1;
      q[i] = a[i] * q[i-1] + b[i] * 0;
    }
    else
    {
      p[i] = a[i] * p[i-1] + b[i] * p[i-2];
      q[i] = a[i] * q[i-1] + b[i] * q[i-2];
    }
  }

  return;
}
//****************************************************************************80

void i8cf_evaluate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I8CF_EVALUATE_TEST tests I8CF_EVALUATE.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    05 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  long long int a[20] = {
    3, 
    6, 6, 6, 6, 6, 
    6, 6, 6, 6, 6, 
    6, 6, 6, 6, 6, 
    6, 6, 6, 6 };
  long long int b[20] = {
      0, 
      1,    9,   25,   49,   81, 
    121,  169,  225,  289,  361, 
    441,  529,  625,  729,  841, 
    961, 1089, 1225, 1369 };
  long long int *p;
  long long int *q;
  int i;
  int n = 19;
  streamsize ss;
  double t;

  ss = cout.precision ( );

  cout << "\n";
  cout << "I8CF_EVALUATE_TEST:\n";

  p = new long long int[n+1];
  q = new long long int[n+1];

  i8cf_evaluate ( n, a, b, p, q );

  cout << "\n";
  cout << "  CF numerators, denominators, ratios:\n";
  cout << "\n";

  for ( i = 0; i <= n; i++ )
  {
    t = ( double ) ( p[i] ) / ( double ) ( q[i] );
    cout << "  " << setw(2) << i
         << "  " << setw(20) << p[i]
         << "  " << setw(20) << q[i]
         << "  " << setw(24) << setprecision ( 16 ) << t << "\n";
  }

  cout.precision ( ss );

  delete [] p;
  delete [] q;

  return;
}
//****************************************************************************80

void i8scf_evaluate ( int n, long long int a[], long long int p[], 
  long long int q[] )

//****************************************************************************80
//
//  Purpose:
//
//    I8SCF_EVALUATE evaluates a simple continued fraction with I8 entries.
//
//  Discussion:
//
//    The simple continued fraction with integer coefficients is:
//
//      SCF = A(0) + 1 / ( A(1) + 1 / ( A(2) ... + 1 / A(N) ) )
//
//    This routine returns the successive approximants P[i]/Q[i]
//    to the value of the rational number represented by the continued
//    fraction, with the value exactly equal to the final ratio P(N)/Q(N).
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    04 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles Mesztenyi,
//    John Rice, Henry Thatcher, Christoph Witzgall,
//    Computer Approximations,
//    Wiley, 1968.
//
//  Parameters:
//
//    Input, int N, the number of continued fraction
//    coefficients.
//
//    Input, long long int A[N+1], the continued fraction coefficients.
//
//    Output, long long int P[N+1], Q[N+1], the numerators and
//    denominators of the successive approximations.
//
{
  int i;

  for ( i = 0; i <= n; i++ )
  {
    if ( i == 0 )
    {
      p[i] = a[i] * 1 + 0;
      q[i] = a[i] * 0 + 1;
    }
    else if ( i == 1 )
    {
      p[i] = a[i] * p[i-1] + 1;
      q[i] = a[i] * q[i-1] + 0;
    }
    else
    {
      p[i] = a[i] * p[i-1] + p[i-2];
      q[i] = a[i] * q[i-1] + q[i-2];
    }
  }

  return;
}
//****************************************************************************80

void i8scf_evaluate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I8SCF_EVALUATE_TEST tests I8SCF_EVALUATE.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    07 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  long long int a[20] = {
    3, 7, 15, 1, 292, 
    1, 1,  1, 2,   1, 
    3, 1, 14, 2,   1, 
    1, 2,  2, 2,   2 };
  long long int *p;
  long long int *q;
  int i;
  int n = 19;
  streamsize ss;
  double t;

  ss = cout.precision ( );

  cout << "\n";
  cout << "I8SCF_EVALUATE_TEST:\n";

  p = new long long int[n+1];
  q = new long long int[n+1];

  i8scf_evaluate ( n, a, p, q );

  cout << "\n";
  cout << "  SCF numerators, denominators, ratios:\n";
  cout << "\n";

  for ( i = 0; i <= n; i++ )
  {
    t = ( double ) ( p[i] ) / ( double ) ( q[i] );
    cout << "  " << setw(2) << i
         << "  " << setw(20) << p[i]
         << "  " << setw(20) << q[i]
         << "  " << setw(24) << setprecision ( 16 ) << t << "\n";
  }

  cout.precision ( ss );

  delete [] p;
  delete [] q;

  return;
}
//****************************************************************************80

void i8vec_print ( int n, long long int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I8VEC_PRINT prints an I8VEC.
//
//  Discussion:
//
//    An I8VEC is a vector of I8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, long long int A[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(8) << i
         << ": " << setw(24) << a[i]  << "\n";
  }
  return;
}
//****************************************************************************80

void r8_to_i4scf ( double r, int n, int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TO_I4SCF approximates an R8 with an I4 simple continued fraction.
//
//  Discussion:
//
//    The simple continued fraction with real coefficients is:
//
//      SCF = A(0) + 1 / ( A(1) + 1 / ( A(2) ... + 1 / A(N) ) )
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    04 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Norman Richert,
//    Strang's Strange Figures,
//    American Mathematical Monthly,
//    Volume 99, Number 2, February 1992, pages 101-107.
//
//  Parameters:
//
//    Input, double R, the real value.
//
//    Input, int N, the number of convergents to compute.
//
//    Output, int A[N+1], the partial quotients.
//
{
  int i;
  double r2;

  if ( r == 0.0 )
  {
    for ( i = 0; i <= n; i++ )
    {
      a[i] = 0;
    }
    return;
  }

  r2 = r;
  a[0] = ( int ) ( r2 );

  for ( i = 1; i <= n; i++ )
  {
    r2 = 1.0 / ( r2 - ( double ) ( a[i-1] ) );
    a[i] = ( int ) ( r2 );
  }

  return;
}
//****************************************************************************80

void r8_to_i4scf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TO_I4SCF_TEST tests R8_TO_I4SCF.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    04 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int i;
  int n = 19;
  int *p;
  int *q;
  double r;
  double r8_pi = 3.141592653589793;
  streamsize ss;
  double t;

  ss = cout.precision ( );

  cout << "\n";
  cout << "R8_TO_I4SCF_TEST:\n";

  r = r8_pi;

  a = new int[n+1];

  r8_to_i4scf ( r, n, a );

  i4vec_print ( n + 1, a, "  SCF coefficients:" );

  p = new int[n+1];
  q = new int[n+1];

  i4scf_evaluate ( n, a, p, q );

  cout << "\n";
  cout << "  SCF numerators, denominators, ratios:\n";
  cout << "\n";

  for ( i = 0; i <= n; i++ )
  {
    t = ( double ) ( p[i] ) / ( double ) ( q[i] );
    cout << "  " << setw(2) << i
         << "  " << setw(20) << p[i]
         << "  " << setw(20) << q[i]
         << "  " << setw(24) << setprecision ( 16 ) << t << "\n";
  }

  cout.precision ( ss );

  delete [] a;
  delete [] p;
  delete [] q;

  return;
}
//****************************************************************************80

void r8_to_i8scf ( double r, int n, long long int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TO_I8SCF approximates an R8 with an I8 simple continued fraction.
//
//  Discussion:
//
//    The simple continued fraction with real coefficients is:
//
//      SCF = A(0) + 1 / ( A(1) + 1 / ( A(2) ... + 1 / A(N) ) )
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    04 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Norman Richert,
//    Strang's Strange Figures,
//    American Mathematical Monthly,
//    Volume 99, Number 2, February 1992, pages 101-107.
//
//  Parameters:
//
//    Input, double R, the real value.
//
//    Input, int N, the number of convergents to compute.
//
//    Output, long long int A[N+1], the partial quotients.
//
{
  int i;
  double r2;

  if ( r == 0.0 )
  {
    for ( i = 0; i <= n; i++ )
    {
      a[i] = 0;
    }
    return;
  }

  r2 = r;
  a[0] = ( long long int ) ( r2 );

  for ( i = 1; i <= n; i++ )
  {
    r2 = 1.0 / ( r2 - ( double ) ( a[i-1] ) );
    a[i] = ( long long int ) ( r2 );
  }

  return;
}
//****************************************************************************80

void r8_to_i8scf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TO_I8SCF_EVALUATE_TEST tests R8_TO_I8SCF.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    04 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  long long int *a;
  int i;
  int n = 19;
  long long int *p;
  long long int *q;
  double r;
  double r8_pi = 3.141592653589793;
  streamsize ss;
  double t;

  ss = cout.precision ( );

  cout << "\n";
  cout << "R8_TO_I8SCF_TEST:\n";

  r = r8_pi;

  a = new long long int[n+1];

  r8_to_i8scf ( r, n, a );

  i8vec_print ( n + 1, a, "  SCF coefficients:" );

  p = new long long int[n+1];
  q = new long long int[n+1];

  i8scf_evaluate ( n, a, p, q );

  cout << "\n";
  cout << "  SCF numerators, denominators, ratios:\n";
  cout << "\n";

  for ( i = 0; i <= n; i++ )
  {
    t = ( double ) ( p[i] ) / ( double ) ( q[i] );
    cout << "  " << setw(2) << i
         << "  " << setw(20) << p[i]
         << "  " << setw(20) << q[i]
         << "  " << setw(24) << setprecision ( 16 ) << t << "\n";
  }

  cout.precision ( ss );

  delete [] a;
  delete [] p;
  delete [] q;

  return;
}
//****************************************************************************80

void r8cf_evaluate ( int n, double a[], double b[], double p[], double q[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CF_EVALUATE evaluates a continued fraction with R8 entries.
//
//  Discussion:
//
//    For convenience, we omit the parentheses or multiline display.
//
//    CF = A(0) + B(1) / A(1) + B(2) / A(2) + ... A(N-1) + B(N) / A(N).
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    06 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of terms.
//
//    Input, double A[N+1], B[N+1], the continued fraction
//    terms.
//
//    Output, double P[N+1], Q[N+1], the numerators
//    and denominators of the successive partial sums of the continued
//    fraction.
//
{
  int i;

  for ( i = 0; i <= n; i++ )
  {
    if ( i == 0 )
    {
      p[i] = a[i] * 1.0 + 0.0;
      q[i] = a[i] * 0.0 + 1.0;
    }
    else if ( i == 1 )
    {
      p[i] = a[i] * p[i-1] + b[i] * 1.0;
      q[i] = a[i] * q[i-1] + b[i] * 0.0;
    }
    else
    {
      p[i] = a[i] * p[i-1] + b[i] * p[i-2];
      q[i] = a[i] * q[i-1] + b[i] * q[i-2];
    }
  }

  return;
}
//****************************************************************************80

void r8cf_evaluate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CF_EVALUATE_TEST tests R8CF_EVALUATE.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    03 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int i;
  int n = 20;
  double *p;
  double *q;
  streamsize ss;
  double t;

  ss = cout.precision ( );

  cout << "\n";
  cout << "R8CF_EVALUATE_TEST:\n";

  a = new double[n+1];
  b = new double[n+1];

  a[0] = 3.0;
  for ( i = 1; i <= n; i++ )
  {
    a[i] = 6.0;
  }
  b[0] = 0.0;
  for ( i = 1; i <= n; i++ )
  {
    t = ( double ) ( 2 * i - 1 );
    b[i] = t * t;
  }

  p = new double[n+1];
  q = new double[n+1];

  r8cf_evaluate ( n, a, b, p, q );

  cout << "\n";
  cout << "  CF numerators, denominators, ratios:\n";
  cout << "\n";

  for ( i = 0; i <= n; i++ )
  {
    cout << "  " << setw(2) << i
         << "  " << setw(24) << setprecision ( 16 ) << p[i]
         << "  " << setw(24) << setprecision ( 16 ) << q[i]
         << "  " << setw(24) << setprecision ( 16 ) << p[i] / q[i] << "\n";
  }

  cout.precision ( ss );

  delete [] a;
  delete [] b;
  delete [] p;
  delete [] q;

  return;
}
//****************************************************************************80

void r8scf_evaluate ( int n, double a[], double p[], double q[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SCF_EVALUATE evaluates a simple continued fraction with R8 entries.
//
//  Discussion:
//
//    The simple continued fraction with real coefficients is:
//
//      SCF = A(0) + 1 / ( A(1) + 1 / ( A(2) ... + 1 / A(N) ) )
//
//    This routine returns the N successive approximants P[i]/Q[i]
//    to the value of the rational number represented by the continued
//    fraction, with the value exactly equal to the final ratio C(N)/D(N).
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    03 August 2017
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of continued fraction
//    coefficients.
//
//    Input, double A[N+1], the continued fraction coefficients.
//
//    Output, double P[N+1], Q[N+1], the numerators and
//    denominators of the successive approximations.
//
{
  int i;

  for ( i = 0; i <= n; i++ )
  {
    if ( i == 0 )
    {
      p[i] = a[i] * 1.0 + 0.0;
      q[i] = a[i] * 0.0 + 1.0;
    }
    else if ( i == 1 )
    {
      p[i] = a[i] * p[i-1] + 1.0;
      q[i] = a[i] * q[i-1] + 0.0;
    }
    else
    {
      p[i] = a[i] * p[i-1] + p[i-2];
      q[i] = a[i] * q[i-1] + q[i-2];
    }
  }

  return;
}
//****************************************************************************80

void r8scf_evaluate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SCF_EVALUATE_TEST tests R8SCF_EVALUATE.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    03 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  double a[20] = {
    3.0, 7.0, 15.0, 1.0, 292.0, 
    1.0, 1.0,  1.0, 2.0,   1.0, 
    3.0, 1.0, 14.0, 2.0,   1.0, 
    1.0, 2.0,  2.0, 2.0,   2.0 };
  int i;
  int n = 19;
  double *p;
  double *q;
  streamsize ss;
  double t;

  ss = cout.precision ( );

  cout << "\n";
  cout << "R8SCF_EVALUATE_TEST:\n";

  p = new double[n+1];
  q = new double[n+1];

  r8scf_evaluate ( n, a, p, q );

  cout << "\n";
  cout << "  SCF numerators, denominators, ratios:\n";
  cout << "\n";

  for ( i = 0; i <= n; i++ )
  {
    cout << "  " << setw(2) << i
         << "  " << setw(24) << setprecision ( 16 ) << p[i]
         << "  " << setw(24) << setprecision ( 16 ) << q[i]
         << "  " << setw(24) << setprecision ( 16 ) << p[i] / q[i] << "\n";
  }

  cout.precision ( ss );

  delete [] p;
  delete [] q;

  return;
}
//****************************************************************************80

void r8vec_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT prints an R8VEC.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, double A[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(8)  << i
         << ": " << setw(14) << a[i]  << "\n";
  }

  return;
}
//****************************************************************************80

void timestamp ( )

//****************************************************************************80
//
//  Purpose:
//
//    TIMESTAMP prints the current YMDHMS date as a time stamp.
//
//  Example:
//
//    31 May 2001 09:45:54 AM
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    None
//
{
# define TIME_SIZE 40

  static char time_buffer[TIME_SIZE];
  const struct std::tm *tm_ptr;
  size_t len;
  std::time_t now;

  now = std::time ( NULL );
  tm_ptr = std::localtime ( &now );

  len = std::strftime ( time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm_ptr );

  std::cout << time_buffer << "\n";

  return;
# undef TIME_SIZE
}
