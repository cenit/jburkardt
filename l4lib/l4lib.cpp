# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "l4lib.hpp"

//****************************************************************************80

int i4_max ( int i1, int i2 )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MAX returns the maximum of two I4's.
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
//    Input, int I1, I2, are two integers to be compared.
//
//    Output, int I4_MAX, the larger of I1 and I2.
//
{
  int value;

  if ( i2 < i1 )
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

bool i4_to_l4 ( int i4 )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_L4 converts an I4 to a logical value.
//
//  Discussion:
//
//    0 is FALSE, and anything else if TRUE.
//
//    An I4 is an integer value.
//    An L4 is a logical value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 January 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I4, an integer.
//
//    Output, bool I4_TO_L4, the logical value of I4.
//
{
  bool value;

  value = ( i4 != 0 );

  return value;
}
/******************************************************************************/

bool *i4_to_l4vec ( int i4, int n )

/******************************************************************************/
/*
  Purpose:

    I4_TO_L4VEC converts an I4 into an L4VEC.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    21 November 2015

  Author:

    John Burkardt

  Parameters:

    Input, int I4, the integer.

    Input, int N, the dimension of the vector.

    Output, bool I4_TO_L4VEC[N], the vector of logical values.
*/
{
  int i;
  bool *l4vec;

  l4vec = ( bool * ) malloc ( n * sizeof ( bool ) );

  for ( i = n - 1; 0 <= i; i-- )
  {
    l4vec[i] = ( ( i4 % 2 ) == 1 );
    i4 = ( i4 / 2 );
  }

  return l4vec;
}
//****************************************************************************80

int l4_to_i4 ( bool l4 )

//****************************************************************************80
//
//  Purpose:
//
//    L4_TO_I4 converts an L4 to an I4.
//
//  Discussion:
//
//    0 is FALSE, and anything else if TRUE.
//
//    An I4 is an integer value.
//    An L4 is a logical value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 January 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, bool L4, a logical value.
//
//    Output, int L4_TO_I4, the integer value of L4.
//
{
  int value;

  if ( l4 )
  {
    value = 1;
  }
  else
  {
    value = 0;
  }

  return value;
}
//****************************************************************************80

string l4_to_s ( bool l4 )

//****************************************************************************80
//
//  Purpose:
//
//    L4_TO_S converts an L4 to a string.
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
//  Parameters:
//
//    Input, bool L4, a logical value.
//
//    Output, string L4_TO_S, the corresponding string;
//
{
  string value;

  if ( l4 )
  {
    value = "True";
  }
  else
  {
    value = "False";
  }

  return value;
}
//****************************************************************************80

bool l4_uniform ( int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    L4_UNIFORM returns a pseudorandom L.
//
//  Discussion:
//
//    An L4 is a LOGICAL value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 April 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Second Edition,
//    Springer, 1987,
//    ISBN: 0387964673,
//    LC: QA76.9.C65.B73.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, December 1986, pages 362-376.
//
//    Pierre L'Ecuyer,
//    Random Number Generation,
//    in Handbook of Simulation,
//    edited by Jerry Banks,
//    Wiley, 1998,
//    ISBN: 0471134031,
//    LC: T57.62.H37.
//
//    Peter Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, Number 2, 1969, pages 136-143.
//
//  Parameters:
//
//    Input/output, int &SEED, the "seed" value, which should
//    NOT be 0.  On output, SEED has been updated.
//
//    Output, bool L4_UNIFORM, a pseudorandom logical value.
//
{
  const int i4_huge      = 2147483647;
  const int i4_huge_half = 1073741823;
  int  k;
  bool value;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "L4_UNIFORM - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 ) 
  {
    seed = seed + i4_huge;
  }
  value = ( i4_huge_half < seed );

  return value;
}
//****************************************************************************80

bool l4_xnor ( bool l1, bool l2 )

//****************************************************************************80
//
//  Purpose:
//
//    L4_XNOR returns the complement exclusive OR of two L4's.
//
//  Discussion:
//
//    An L4 is a logical value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 December 2017
//
//  Author:
//
//   John Burkardt
//
//  Parameters:
//
//    Input, bool L1, L2, two values whose exclusive OR is needed.
//
//    Output, bool L4_XNOR, the complement exclusive OR of L1 and L2.
//
{
  bool value;
  bool value1;
  bool value2;

  value1 = (     l1   &&     l2   );
  value2 = ( ( ! l1 ) && ! ( l2 ) );

  value = ( value1 || value2 );

  return value;
}
//****************************************************************************80

bool l4_xor ( bool l1, bool l2 )

//****************************************************************************80
//
//  Purpose:
//
//    L4_XOR returns the exclusive OR of two L4's.
//
//  Discussion:
//
//    An L4 is a logical value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 May 2014
//
//  Author:
//
//   John Burkardt
//
//  Parameters:
//
//    Input, bool L1, L2, two values whose exclusive OR is needed.
//
//    Output, bool L4_XOR, the exclusive OR of L1 and L2.
//
{
  bool value;
  bool value1;
  bool value2;

  value1 = (     l1   && ( ! l2 ) );
  value2 = ( ( ! l1 ) &&     l2   );

  value = ( value1 || value2 );

  return value;
}
//****************************************************************************80

void l4mat_print ( int m, int n, bool a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_PRINT prints an L4MAT.
//
//  Discussion:
//
//    An L4MAT is an array of L4 values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 November 2011
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows in A.
//
//    Input, int N, the number of columns in A.
//
//    Input, bool A[M*N], the matrix.
//
//    Input, string TITLE, a title.
//
{
  l4mat_print_some ( m, n, a, 0, 0, m - 1, n - 1, title );

  return;
}
//****************************************************************************80

void l4mat_print_some ( int m, int n, bool a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_PRINT_SOME prints some of an L4MAT.
//
//  Discussion:
//
//    An L4MAT is an array of L4 values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 November 2011
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, bool A[M*N], an M by N matrix to be printed.
//
//    Input, int ILO, JLO, the first row and column to print.
//
//    Input, int IHI, JHI, the last row and column to print.
//
//    Input, string TITLE, a title.
//
{
  int i;
  int i2hi;
  int i2lo;
  int inc;
  int incx = 35;
  int j;
  int j2hi;
  int j2lo;

  cout << "\n";
  cout << title << "\n";

  for ( j2lo = jlo; j2lo <= i4_min ( jhi, n - 1 ); j2lo = j2lo + incx )
  {
    j2hi = j2lo + incx - 1;
    if ( n - 1 < j2hi )
    {
      j2hi = n - 1;
    }
    if ( jhi < j2hi )
    {
      j2hi = jhi;
    }

    inc = j2hi + 1 - j2lo;

    cout << "\n";

    if ( 100 <= j2hi )
    {
      cout << "      ";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        cout << " " << setw(1) << j / 100;
      }
      cout << "\n";
    }

    if ( 10 <= j2hi )
    {
      cout << "      ";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        cout << " " << setw(1) << ( j / 10 ) % 10;
      }
      cout << "\n";
    }

    cout << "  Col ";
    for ( j = j2lo; j <= j2hi; j++ )
    {
      cout << " " << setw(1) << j % 10;
    }
    cout << "\n";

    cout << "  Row\n";
    cout << "\n";

    i2lo = 0;
    if ( i2lo < ilo )
    {
      i2lo = ilo;
    }
    i2hi = m - 1;
    if ( ihi < i2hi )
    {
      i2hi = ihi;
    }

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(5) << i << ":";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        cout << " " << setw(1) << a[i+j*m];
      }
      cout << "\n";
    }
  }
  return;
}
//****************************************************************************80

void l4mat_transpose_print ( int m, int n, bool a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_TRANSPOSE_PRINT prints an L4MAT, transposed.
//
//  Discussion:
//
//    An L4MAT is an array of L4 values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 November 2011
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, bool A[M*N], an M by N matrix to be printed.
//
//    Input, string TITLE, a title.
//
{
  l4mat_transpose_print_some ( m, n, a, 0, 0, m - 1, n - 1, title );

  return;
}
//****************************************************************************80

void l4mat_transpose_print_some ( int m, int n, bool a[], int ilo, int jlo, 
  int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_TRANSPOSE_PRINT_SOME prints some of an L4MAT, transposed.
//
//  Discussion:
//
//    An L4MAT is an array of L4 values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 November 2011
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, bool A[M*N], an M by N matrix to be printed.
//
//    Input, int ILO, JLO, the first row and column to print.
//
//    Input, int IHI, JHI, the last row and column to print.
//
//    Input, string TITLE, a title.
//
{
  int i;
  int i2hi;
  int i2lo;
  int inc;
  int incx = 35;
  int j;
  int j2hi;
  int j2lo;

  cout << "\n";
  cout << title << "\n";

  for ( i2lo = i4_max ( ilo, 0 ); i2lo <= i4_min ( ihi, m - 1 ); i2lo = i2lo + incx )
  {
    i2hi = i2lo + incx - 1;
    i2hi = i4_min ( i2hi, m - 1 );
    i2hi = i4_min ( i2hi, ihi );

    inc = i2hi + 1 - i2lo;

    cout << "\n";

    if ( 100 <= i2hi )
    {
      cout << "      ";
      for ( i = i2lo; i <= i2hi; i++ )
      {
        cout << " " << setw(1) << i / 100;
      }
      cout << "\n";
    }

    if ( 10 <= i2hi )
    {
      cout << "      ";
      for ( i = i2lo; i <= i2hi; i++ )
      {
        cout << " " << setw(1) << ( i / 10 ) % 10;
      }
      cout << "\n";
    }

    cout << "  Row ";
    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << " " << setw(1) << i % 10;
    }
    cout << "\n";

    cout << "  Col\n";
    cout << "\n";

    j2lo = i4_max ( jlo, 0 );
    j2hi = i4_min ( jhi, n - 1 );

    for ( j = j2lo; j <= j2hi; j++ )
    {
      cout << setw(5) << j << ":";
      for ( i = i2lo; i <= i2hi; i++ )
      {
        cout << " " << setw(1) << a[i+j*m];
      }
      cout << "\n";
    }
  }
  return;
}
//****************************************************************************80

void l4mat_uniform ( int m, int n, int &seed, bool l4mat[] )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_UNIFORM returns a pseudorandom L4MAT.
//
//  Discussion:
//
//    An L4MAT is a two dimensional array of LOGICAL values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 April 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Second Edition,
//    Springer, 1987,
//    ISBN: 0387964673,
//    LC: QA76.9.C65.B73.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, December 1986, pages 362-376.
//
//    Pierre L'Ecuyer,
//    Random Number Generation,
//    in Handbook of Simulation,
//    edited by Jerry Banks,
//    Wiley, 1998,
//    ISBN: 0471134031,
//    LC: T57.62.H37.
//
//    Peter Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, Number 2, 1969, pages 136-143.
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input/output, int &SEED, the "seed" value, which should
//    NOT be 0.  On output, SEED has been updated.
//
//    Output, bool L4MAT[M*N], a pseudorandom logical matrix.
//
{
  const int i4_huge      = 2147483647;
  const int i4_huge_half = 1073741823;
  int i;
  int j;
  int k;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "L4MAT_UNIFORM - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      k = seed / 127773;

      seed = 16807 * ( seed - k * 127773 ) - k * 2836;

      if ( seed < 0 )
      {
        seed = seed + i4_huge;
      }

      l4mat[i+j*m] = ( i4_huge_half < seed );
    }
  }

  return;
}
//****************************************************************************80

bool *l4mat_uniform_new ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_UNIFORM_NEW returns a new pseudorandom L4MAT.
//
//  Discussion:
//
//    An L4MAT is a two dimensional array of LOGICAL values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 April 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Second Edition,
//    Springer, 1987,
//    ISBN: 0387964673,
//    LC: QA76.9.C65.B73.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, December 1986, pages 362-376.
//
//    Pierre L'Ecuyer,
//    Random Number Generation,
//    in Handbook of Simulation,
//    edited by Jerry Banks,
//    Wiley, 1998,
//    ISBN: 0471134031,
//    LC: T57.62.H37.
//
//    Peter Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, Number 2, 1969, pages 136-143.
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input/output, int &SEED, the "seed" value, which should
//    NOT be 0.  On output, SEED has been updated.
//
//    Output, bool L4MAT_UNIFORM_NEW[M*N], a pseudorandom logical matrix.
//
{
  const int i4_huge      = 2147483647;
  const int i4_huge_half = 1073741823;
  int i;
  int j;
  int k;
  bool *l4mat;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "L4MAT_UNIFORM_NEW - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  l4mat = new bool[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      k = seed / 127773;

      seed = 16807 * ( seed - k * 127773 ) - k * 2836;

      if ( seed < 0 )
      {
        seed = seed + i4_huge;
      }

      l4mat[i+j*m] = ( i4_huge_half < seed );
    }
  }

  return l4mat;
}
//****************************************************************************80

void l4vec_next ( int n, bool l4vec[] )

//****************************************************************************80
//
//  Purpose:
//
//    L4VEC_NEXT generates the next logical vector.
//
//  Discussion:
//
//    In the following discussion, we will let '0' stand for FALSE and
//    '1' for TRUE.
//
//    The vectors have the order
//
//      (0,0,...,0),
//      (0,0,...,1), 
//      ...
//      (1,1,...,1)
//
//    and the "next" vector after (1,1,...,1) is (0,0,...,0).  That is,
//    we allow wrap around.
//
//  Example:
//
//    N = 3
//
//    Input      Output
//    -----      ------
//    0 0 0  =>  0 0 1
//    0 0 1  =>  0 1 0
//    0 1 0  =>  0 1 1
//    0 1 1  =>  1 0 0
//    1 0 0  =>  1 0 1
//    1 0 1  =>  1 1 0
//    1 1 0  =>  1 1 1
//    1 1 1  =>  0 0 0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 May 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension of the vectors.
//
//    Input/output, bool L4VEC[N], on output, the successor to the
//    input vector.  
//
{
  int i;

  for ( i = n - 1; 0 <= i; i-- )
  {
    if ( ! l4vec[i] )
    {
      l4vec[i] = true;
      return;
    }
    l4vec[i] = false;
  }
  return;
}
//****************************************************************************80

void l4vec_print ( int n, bool a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    L4VEC_PRINT prints an L4VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 April 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, bool A[N], the vector to be printed.
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
         << ": " << setw(1) << a[i]  << "\n";
  }

  return;
}
//****************************************************************************80

bool *l4vec_uniform_new ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    L4VEC_UNIFORM_NEW returns a pseudorandom L4VEC.
//
//  Discussion:
//
//    An L4VEC is a vector of LOGICAL values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 April 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Second Edition,
//    Springer, 1987,
//    ISBN: 0387964673,
//    LC: QA76.9.C65.B73.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, December 1986, pages 362-376.
//
//    Pierre LEcuyer,
//    Random Number Generation,
//    in Handbook of Simulation,
//    edited by Jerry Banks,
//    Wiley, 1998,
//    ISBN: 0471134031,
//    LC: T57.62.H37.
//
//    Peter Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, Number 2, 1969, pages 136-143.
//
//  Parameters:
//
//    Input, int N, the order of the vector.
//
//    Input/output, int &SEED, the "seed" value, which should
//    NOT be 0.  On output, SEED has been updated.
//
//    Output, bool L4VEC_UNIFORM_NEW[N], a pseudorandom logical vector.
//
{
  const int i4_huge      = 2147483647;
  const int i4_huge_half = 1073741823;
  int i;
  int k;
  bool *l4vec;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "L4VEC_UNIFORM_NEW - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  l4vec = new bool[n];

  for ( i = 0; i < n; i++ )
  {
    k = seed / 127773;

    seed = 16807 * ( seed - k * 127773 ) - k * 2836;

    if ( seed < 0 )
    {
      seed = seed + i4_huge;
    }
    l4vec[i] = ( i4_huge_half < seed );
  }
  return l4vec;
}
//****************************************************************************80

bool s_to_l4 ( string s )

//****************************************************************************80
//
//  Purpose:
//
//    S_TO_L4 reads an L4 from a string.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S, the string to be read.
//
//    Output, bool S_TO_L4, the logical value.
//
{
  int i;
  bool l4;
  int length;

  length = s.length ( );

  if ( length < 1 )
  {
    cerr << "\n";
    cerr << "S_TO_L4 - Fatal error!\n";
    cerr << "  Input string is empty.\n";
    exit ( 1 );
  }

  for ( i = 0; i < length; i++ )
  {
    if ( s[i] == '0' ||
         s[i] == 'f' ||
         s[i] == 'F' )
    {
      l4 = false;
      return l4;
    }
    else if ( s[i] == '1' ||
              s[i] == 't' ||
              s[i] == 'T' )
    {
      l4 = true;
      return l4;
    }
  }
  cerr << "\n";
  cerr << "S_TO_L4 - Fatal error!\n";
  cerr << "  Input did not contain boolean data.\n";
  exit ( 1 );
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
