# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "van_der_corput.hpp"

//****************************************************************************80

int i4_min ( int i1, int i2 )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MIN returns the minimum of two I4's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 October 1998
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I1, I2, two integers to be compared.
//
//    Output, int I4_MIN, the smaller of I1 and I2.
//
{
  int value;

  if ( i1 < i2 )
  {
    value = i1;
  }
  else
  {
    value = i2;
  }
  return value;
}
//****************************************************************************80

double r8_mod ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MOD returns the remainder of R8 division.
//
//  Discussion:
//
//    If
//      REM = R8_MOD ( X, Y )
//      RMULT = ( X - REM ) / Y
//    then
//      X = Y * RMULT + REM
//    where REM has the same sign as X, and abs ( REM ) < Y.
//
//  Example:
//
//        X         Y     R8_MOD   R8_MOD  Factorization
//
//      107        50       7     107 =  2 *  50 + 7
//      107       -50       7     107 = -2 * -50 + 7
//     -107        50      -7    -107 = -2 *  50 - 7
//     -107       -50      -7    -107 =  2 * -50 - 7
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the number to be divided.
//
//    Input, double Y, the number that divides X.
//
//    Output, double R8_MOD, the remainder when X is divided by Y.
//
{
  double value;

  if ( y == 0.0 )
  {
    cerr << "\n";
    cerr << "R8_MOD - Fatal error!\n";
    cerr << "  R8_MOD ( X, Y ) called with Y = " << y << "\n";
    exit ( 1 );
  }

  value = x - ( ( double ) ( ( int ) ( x / y ) ) ) * y;

  if ( x < 0.0 && 0.0 < value )
  {
    value = value - fabs ( y );
  }
  else if ( 0.0 < x && value < 0.0 )
  {
    value = value + fabs ( y );
  }

  return value;
}
//****************************************************************************80

void r8vec_transpose_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_TRANSPOSE_PRINT prints an R8VEC "transposed".
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Example:
//
//    A = (/ 1.0, 2.1, 3.2, 4.3, 5.4, 6.5, 7.6, 8.7, 9.8, 10.9, 11.0 /)
//    TITLE = 'My vector:  '
//
//    My vector:   1.0    2.1    3.2    4.3    5.4
//                 6.5    7.6    8.7    9.8   10.9
//                11.0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 May 2014
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
  int ihi;
  int ilo;
  int title_length;

  title_length = s_len_trim ( title );

  for ( ilo = 0; ilo < n; ilo = ilo + 5 )
  {
    if ( ilo == 0 )
    {
      cout << title;
    }
    else
    {
      for ( i = 0; i < title_length; i++ )
      {
        cout << " ";
      }
    }
    cout << "  ";
    ihi = i4_min ( ilo + 5, n );
    for ( i = ilo; i < ihi; i++ )
    {
      cout << "  " << setw(12) << a[i];
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

int s_len_trim ( string s )

//****************************************************************************80
//
//  Purpose:
//
//    S_LEN_TRIM returns the length of a string to the last nonblank.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S, a string.
//
//    Output, int S_LEN_TRIM, the length of the string to the last nonblank.
//    If S_LEN_TRIM is 0, then the string is entirely blank.
//
{
  int n;

  n = s.length ( );

  while ( 0 < n )
  {
    if ( s[n-1] != ' ' )
    {
      return n;
    }
    n = n - 1;
  }

  return n;
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
//****************************************************************************80

double vdc ( int i )

//****************************************************************************80
//
//  Purpose:
//
//   VDC computes an element of the van der Corput sequence.
//
//  Discussion:
//
//    The van der Corput sequence is often used to generate a "subrandom"
//    sequence of points which have a better covering property
//    than pseudorandom points.
//
//    The van der Corput sequence generates a sequence of points in [0,1]
//    which never repeats.  The elements of the van der Corput sequence 
//    are strictly less than 1.
//
//    The van der Corput sequence writes an integer in a given base 2,
//    and then its digits are "reflected" about the decimal point.
//    This maps the numbers from 1 to N into a set of numbers in [0,1],
//    which are especially nicely distributed if N is one less
//    than a power of the base.
//
//    The generation is quite simple.  Given an integer I, the expansion
//    of I in base 2 is generated.  Then, essentially, the result R
//    is generated by writing a decimal point followed by the digits of
//    the expansion of I, in reverse order.  This decimal value is actually
//    still in base 2, so it must be properly interpreted to generate
//    a usable value.
//
//  Example:
//
//    I        I         van der Corput
//    decimal  binary    binary   decimal
//    -------  ------    ------   -------
//        0  =     0  =>  .0     = 0.0
//        1  =     1  =>  .1     = 0.5
//        2  =    10  =>  .01    = 0.25
//        3  =    11  =>  .11    = 0.75
//        4  =   100  =>  .001   = 0.125
//        5  =   101  =>  .101   = 0.625
//        6  =   110  =>  .011   = 0.375
//        7  =   111  =>  .111   = 0.875
//        8  =  1000  =>  .0001  = 0.0625
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    John Halton,
//    On the efficiency of certain quasi-random sequences of points
//    in evaluating multi-dimensional integrals,
//    Numerische Mathematik,
//    Volume 2, pages 84-90, 1960.
//
//    John Hammersley,
//    Monte Carlo methods for solving multivariable problems,
//    Proceedings of the New York Academy of Science,
//    Volume 86, pages 844-874, 1960.
//
//    Johannes van der Corput,
//    Verteilungsfunktionen I & II,
//    Nederl. Akad. Wetensch. Proc.,
//    Volume 38, 1935, pages 813-820, pages 1058-1066.
//
//  Parameters:
//
//    Input, int I, the index of the element of the sequence.
//    I = 0 is allowed, and returns R = 0.
//
//    Output, double VDC, the I-th element of the van der Corput 
//    sequence.
//
{
  double base_inv;
  int d;
  double r;
  double s;
  int t;
//
//  Isolate the sign.
//
  if ( i < 0 )
  {
    s = -1.0;
  }
  else
  {
    s = +1.0;
  }
//
//  Work with the magnitude of I.
//
  t = abs ( i );
//
//  Carry out the computation.
//
  base_inv = 0.5;

  r = 0.0;

  while ( t != 0 )
  {
    d = ( t % 2 );
    r = r + ( double ) ( d ) * base_inv;
    base_inv = base_inv / 2.0;
    t = ( t / 2 );
  }
//
//  Recover the sign.
//
  r = r * s;

  return r;
}
//****************************************************************************80

double vdc_base ( int i, int b )

//****************************************************************************80
//
//  Purpose:
//
//    VDC_BASE computes an element of the van der Corput sequence in any base.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the index of the element of the sequence.
//    I = 0 is allowed, and returns R = 0.
//
//    Input, int B, the base of the sequence.  The standard 
//    sequence uses B = 2, and this function expects 2 <= B.
//
//    Output, double VDC_BASE, the I-th element of the van der 
//    Corput sequence.
//
{
  double base_inv;
  int d;
  double r;
  double s;
  int t;
//
//  2 <= B.
//
  if ( b < 2 )
  {
    cerr << "\n";
    cerr << "VDC_BASE - Fatal error!\n";
    cerr << "  2 <= B is required.\n";
    exit ( 1 );
  }
//
//  Isolate the sign.
//
  if ( i < 0 )
  {
    s = -1.0;
  }
  else
  {
    s = +1.0;
  }
//
//  Only work with the nonnegative part of I.
//
  t = abs ( i );
//
//  Carry out the computation.
//
  base_inv = 1.0 / ( double ) ( b );

  r = 0.0;

  while ( t != 0 )
  {
    d = ( t % b );
    r = r + ( double ) ( d ) * base_inv;
    base_inv = base_inv / b;
    t = ( t / b );
  }
//
//  Recover the sign.
//
  r = r * s;

  return r;
}
//****************************************************************************80

double vdc_inverse ( double r )

//****************************************************************************80
//
//  Purpose:
//
//    VDC_INVERSE inverts an element of the van der Corput sequence.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double R, the I-th element of the van der Corput 
//    sequence.  |R| < 1.0
//
//    Output, int VDC_INVERSE, the index of the element of 
//    the sequence.
//
{
  int d;
  int i;
  int p;
  double s;
  double t;

  if ( r < 0.0 )
  {
    s = -1.0;
  }
  else
  {
    s = +1.0;
  }

  if ( 1.0 <= fabs ( r ) )
  {
    cerr << "\n";
    cerr << "VDC_INVERSE - Fatal error!\n";
    cerr << "  |R| < 1.0 is required.\n";
    exit ( 1 );
  }

  t = fabs ( r );

  i = 0;
  p = 1;

  while ( t != 0.0 )
  {
    t = t * 2.0;
    d = ( int ) ( t );
    i = i + d * p;
    p = p * 2;
    t = r8_mod ( t, 1.0 );
  }
//
//  Recover the sign.
//
  i = i * s;

  return i;
}
//****************************************************************************80

double *vdc_sequence ( int i1, int i2 )

//****************************************************************************80
/*
  Purpose:

    VDC_SEQUENCE computes a sequence of elements of the van der Corput sequence.

  Discussion:

    This function could be rewritten to take advantage of MATLAB's
    vectorization capabilities.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    10 August 2016

  Author:

    John Burkardt

  Parameters:

    Input, int I1, I2, the indices of the first and
    last elements.

    Output, double VDC_SEQUENCE[|I2+1-I1|], elements I1 through I2 of 
    the van der Corput sequence.
*/
{
  double base_inv;
  int d;
  int i;
  int i3;
  int j;
  int n;
  double *r;
  double s;
  int t;

  if ( i1 <= i2 )
  {
    i3 = +1;
  }
  else
  {
    i3 = -1;
  }

  n = abs ( i2 - i1 ) + 1;

  r = new double[n];

  j = 0;
  i = i1;

  while ( 1 )
  {
//
//  Isolate the sign.
//
    if ( i < 0 )
    {
      s = -1.0;
    }
    else
    {
      s = +1.0;
    }
//
//  Work with the magnitude of I.
//
    t = abs ( i );
//
//  Carry out the computation.
//
    base_inv = 0.5;

    r[j] = 0.0;

    while ( t != 0 )
    {
      d = ( t % 2 );
      r[j] = r[j] + ( double ) ( d ) * base_inv;
      base_inv = base_inv / 2.0;
      t = ( t / 2 );
    }
//
//  Recover the sign.
//
    r[j] = r[j] * s;

    j = j + 1;

    if ( i == i2 )
    {
      break;
    }

    i = i + i3;
  }

  return r;
}

