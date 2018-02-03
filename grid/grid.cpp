# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "grid.hpp"

//****************************************************************************80

double *grid_generate ( int m, int n, int center, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    GRID_GENERATE generates a grid dataset.
//
//  Discussion:
//
//    N points are needed in an M dimensional space.
//
//    The points are to lie on a uniform grid of side N_SIDE.
//
//    Unless the N = N_SIDE^M for some N_SIDE, we can't use all the
//    points on a grid.  What we do is find the smallest N_SIDE
//    that's big enough, and randomly omit some points.
//
//    If N_SIDE is 4, then the choices in 1D are:
//
//    A: 0,   1/3, 2/3, 1
//    B: 1/5, 2/5, 3/5, 4/5
//    C: 0,   1/4, 2/4, 3/4
//    D: 1/4, 2/4, 3/4, 1
//    E: 1/8, 3/8, 5/8, 7/8
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 May 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the spatial dimension.
//
//    Input, int N, the number of points to generate.
//
//    Input, int CENTER, specifies the 1D grid centering:
//    1: first point is 0.0, last point is 1.0;
//    2: first point is 1/(N+1), last point is N/(N+1);
//    3: first point is 0, last point is (N-1)/N;
//    4: first point is 1/N, last point is 1;
//    5: first point is 1/(2*N), last point is (2*N-1)/(2*N);
//
//    Input/output, int &SEED, the random number seed.
//
//    Output, double GRID_GENERATE[M*N], the points.
//
{
  int i;
  int j;
  int n_grid;
  int n_side;
  double *r;
  int rank;
  int *rank_list;
  int *tuple;

  r = new double[m*n];
  rank_list = new int[n];
  tuple = new int[m];
//
//  Find the dimension of the smallest grid with N points.
//
  n_side = grid_side ( m, n );
//
//  We need to select N points out of N_SIDE^M set.
//
  n_grid = ( int ) pow ( ( double ) n_side, ( double ) m );
//
//  Generate a random subset of N items from a set of size N_GRID.
//
  ksub_random2 ( n_grid, n, seed, rank_list );
//
//  Must make one dummy call to TUPLE_NEXT_FAST with RANK = 0.
//
  rank = 0;
  tuple_next_fast ( n_side, m, rank, tuple );
//
//  Now generate the appropriate indices, and "center" them.
//
  for ( j = 0; j < n; j++ )
  {
    rank = rank_list[j] - 1;

    tuple_next_fast ( n_side, m, rank, tuple );

    if ( center == 1 )
    {
      for ( i = 0; i < m; i++ )
      {
        r[i+j*m] = ( double ) ( tuple[i] - 1 ) / ( double ) ( n_side - 1 );
      }
    }
    else if ( center == 2 )
    {
      for ( i = 0; i < m; i++ )
      {
        r[i+j*m] = ( double ) ( tuple[i] ) / ( double ) ( n_side + 1 );
      }
    }
    else if ( center == 3 )
    {
      for ( i = 0; i < m; i++ )
      {
        r[i+j*m] = ( double ) ( tuple[i] - 1 ) / ( double ) ( n_side );
      }
    }
    else if ( center == 4 )
    {
      for ( i = 0; i < m; i++ )
      {
        r[i+j*m] = ( double ) ( tuple[i] ) / ( double ) ( n_side );
      }
    }
    else if ( center == 5 )
    {
      for ( i = 0; i < m; i++ )
      {
        r[i+j*m] = ( double ) ( 2 * tuple[i] - 1 ) 
                 / ( double ) ( 2 * n_side );
      }
    }
  }

  delete [] rank_list;
  delete [] tuple;

  return r;
}
//****************************************************************************80

int grid_side ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    GRID_SIDE finds the smallest M-dimensional grid of at least N points.
//
//  Discussion:
//
//    Each coordinate of the grid will have N_SIDE distinct values.
//    Thus the total number of points in the grid is N_SIDE^DIM_NUM.
//    This routine seeks the smallest N_SIDE such that N <= N_SIDE^DIM_NUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 May 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the spatial dimension.
//
//    Input, int N, the number of points to generate.
//
//    Output, int GRID_SIDE, the length of one side of the smallest 
//    grid in DIM_NUM dimensions that contains at least N points.
//
{
  double exponent;
  int n_grid;
  int n_side;

  if ( n <= 0 )
  {
    n_side = 0;
    return n_side;
  }

  if ( m <= 0 )
  {
    n_side = -1;
    return n_side;
  }

  exponent = 1.0E+00 / ( double ) m;

  n_side = ( int ) pow ( n, exponent );

  if ( pow ( ( double ) n_side, ( double ) m ) < n )
  {
    n_side = n_side + 1;
  }

  return n_side;
}
//****************************************************************************80

int i4_log_10 ( int i )

//****************************************************************************80
//
//  Purpose:
//
//    I4_LOG_10 returns the whole part of the logarithm base 10 of an integer.
//
//  Discussion:
//
//    It should be the case that 10^I4_LOG_10(I) <= |I| < 10^(I4_LOG_10(I)+1).
//    (except for I = 0).
//
//    The number of decimal digits in I is I4_LOG_10(I) + 1.
//
//  Example:
//
//        I    I4_LOG_10(I)
//
//        0     0
//        1     0
//        2     0
//
//        9     0
//       10     1
//       11     1
//
//       99     1
//      100     2
//      101     2
//
//      999     2
//     1000     3
//     1001     3
//
//     9999     3
//    10000     4
//    10001     4
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the integer.
//
//    Output, int I4_LOG_10, the whole part of the logarithm of abs ( I ).
//
{
  int ten_pow;
  int value;

  i = abs ( i );

  ten_pow = 10;
  value = 0;

  while ( ten_pow <= i )
  {
    ten_pow = ten_pow * 10;
    value = value + 1;
  }

  return value;
}
//****************************************************************************80

int i4_power ( int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    I4_POWER returns the value of I^J.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, J, the base and the power.  J should be nonnegative.
//
//    Output, int I4_POWER, the value of I^J.
//
{
  int k;
  int value;

  if ( j < 0 )
  {
    if ( i == 1 )
    {
      value = 1;
    }
    else if ( i == 0 )
    {
      cerr << "\n";
      cerr << "I4_POWER - Fatal error!\n";
      cerr << "  I^J requested, with I = 0 and J negative.\n";
      exit ( 1 );
    }
    else
    {
      value = 0;
    }
  }
  else if ( j == 0 )
  {
    if ( i == 0 )
    {
      cerr << "\n";
      cerr << "I4_POWER - Fatal error!\n";
      cerr << "  I^J requested, with I = 0 and J = 0.\n";
      exit ( 1 );
    }
    else
    {
      value = 1;
    }
  }
  else if ( j == 1 )
  {
    value = i;
  }
  else
  {
    value = 1;
    for ( k = 1; k <= j; k++ )
    {
      value = value * i;
    }
  }
  return value;
}
//****************************************************************************80

void ksub_random2 ( int n, int k, int &seed, int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANDOM2 selects a random subset of size K from a set of size N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 May 2003
//
//  Author:
//
//    Original FORTRAN77 version by Albert Nijenhuis, Herbert Wilf.
//    FORTRAN90 version by John Burkardt.
//
//  Reference:
//
//    A Nijenhuis and H Wilf,
//    Combinatorial Algorithms,
//    Academic Press, 1978, second edition,
//    ISBN 0-12-519260-6.
//
//  Parameters:
//
//    Input, int N, the size of the set from which subsets are drawn.
//
//    Input, int K, number of elements in desired subsets.  K must
//    be between 0 and N.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, int A(K).  A(I) is the I-th element of the
//    output set.  The elements of A are in order.
//
{
  int available;
  int candidate;
  int have;
  int need;
  double r;

  if ( k < 0 || n < k )
  {
    cerr << "\n";
    cerr << "KSUB_RANDOM2 - Fatal error!\n";
    cerr << "  N = " << n << "\n";
    cerr << "  K = " << k << "\n";
    cerr << "  but 0 <= K <= N is required!\n";
    exit ( 1 );
  }

  if ( k == 0 )
  {
    return;
  }

  need = k;
  have = 0;
  available = n;
  candidate = 0;

  for ( ; ; )
  {
    candidate = candidate + 1;

    r = r8_uniform_01 ( seed );

    if ( r * ( double ) available <= ( double ) need )
    {
      need = need - 1;
      a[have] = candidate;
      have = have + 1;

      if ( need <= 0 )
      {
        break;
      }

    }

    available = available - 1;
  }

  return;
}
//****************************************************************************80

double r8_uniform_01 ( int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_01 returns a unit double precision pseudorandom number.
//
//  Discussion:
//
//    This routine implements the recursion
//
//      seed = 16807 * seed mod ( 2^31 - 1 )
//      r8_uniform_01 = seed / ( 2^31 - 1 )
//
//    The integer arithmetic never requires more than 32 bits,
//    including a sign bit.
//
//    If the initial seed is 12345, then the first three computations are
//
//      Input     Output      R8_UNIFORM_01
//      SEED      SEED
//
//         12345   207482415  0.096616
//     207482415  1790989824  0.833995
//    1790989824  2035175616  0.947702
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Springer Verlag, pages 201-202, 1983.
//
//    Pierre L'Ecuyer,
//    Random Number Generation,
//    in Handbook of Simulation
//    edited by Jerry Banks,
//    Wiley Interscience, page 95, 1998.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, pages 362-376, 1986.
//
//    P A Lewis, A S Goodman, J M Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, pages 136-143, 1969.
//
//  Parameters:
//
//    Input/output, int &SEED, the "seed" value.  Normally, this
//    value should not be 0.  On output, SEED has been updated.
//
//    Output, double R8_UNIFORM_01, a new pseudorandom variate, strictly between
//    0 and 1.
//
{
  int k;
  double r;

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + 2147483647;
  }
//
//  Although SEED can be represented exactly as a 32 bit integer,
//  it generally cannot be represented exactly as a 32 bit real number!
//
  r = ( double ) ( seed ) * 4.656612875E-10;

  return r;
}
//****************************************************************************80

void r8mat_transpose_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_TRANSPOSE_PRINT prints an R8MAT, transposed.
//
//  Discussion:
//
//    An R8MAT is a doubly dimensioned array of R8 values, stored as a vector
//    in column-major order.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 September 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], an M by N matrix to be printed.
//
//    Input, string TITLE, a title.
//
{
  r8mat_transpose_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8mat_transpose_print_some ( int m, int n, double a[], int ilo, int jlo,
  int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_TRANSPOSE_PRINT_SOME prints some of an R8MAT, transposed.
//
//  Discussion:
//
//    An R8MAT is a doubly dimensioned array of R8 values, stored as a vector
//    in column-major order.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 April 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], an M by N matrix to be printed.
//
//    Input, int ILO, JLO, the first row and column to print.
//
//    Input, int IHI, JHI, the last row and column to print.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  int i;
  int i2;
  int i2hi;
  int i2lo;
  int i2lo_hi;
  int i2lo_lo;
  int inc;
  int j;
  int j2hi;
  int j2lo;

  cout << "\n";
  cout << title << "\n";

  if ( m <= 0 || n <= 0 )
  {
    cout << "\n";
    cout << "  (None)\n";
    return;
  }

  if ( ilo < 1 )
  {
    i2lo_lo = 1;
  }
  else
  {
    i2lo_lo = ilo;
  }

  if ( ihi < m )
  {
    i2lo_hi = m;
  }
  else
  {
    i2lo_hi = ihi;
  }

  for ( i2lo = i2lo_lo; i2lo <= i2lo_hi; i2lo = i2lo + INCX )
  {
    i2hi = i2lo + INCX - 1;

    if ( m < i2hi )
    {
      i2hi = m;
    }
    if ( ihi < i2hi )
    {
      i2hi = ihi;
    }

    inc = i2hi + 1 - i2lo;

    cout << "\n";
    cout << "  Row: ";
    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(7) << i - 1 << "       ";
    }
    cout << "\n";
    cout << "  Col\n";
    cout << "\n";

    if ( jlo < 1 )
    {
      j2lo = 1;
    }
    else
    {
      j2lo = jlo;
    }
    if ( n < jhi )
    {
      j2hi = n;
    }
    else
    {
      j2hi = jhi;
    }

    for ( j = j2lo; j <= j2hi; j++ )
    {
      cout << setw(5) << j - 1 << ":";
      for ( i2 = 1; i2 <= inc; i2++ )
      {
        i = i2lo - 1 + i2;
        cout << setw(14) << a[(i-1)+(j-1)*m];
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

void r8mat_write ( string output_filename, int m, int n, double table[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_WRITE writes an R8MAT file.
//
//  Discussion:
//
//    An R8MAT is an array of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 June 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string OUTPUT_FILENAME, the output filename.
//
//    Input, int M, the spatial dimension.
//
//    Input, int N, the number of points.
//
//    Input, double TABLE[M*N], the table data.
//
{
  int i;
  int j;
  ofstream output;
//
//  Open the file.
//
  output.open ( output_filename.c_str ( ) );

  if ( !output )
  {
    cerr << "\n";
    cerr << "R8MAT_WRITE - Fatal error!\n";
    cerr << "  Could not open the output file.\n";
    return;
  }
//
//  Write the data.
//
  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      output << "  " << setw(24) << setprecision(16) << table[i+j*m];
    }
    output << "\n";
  }
//
//  Close the file.
//
  output.close ( );

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
//    May 31 2001 09:45:54 AM
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2003
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
  const struct tm *tm;
  size_t len;
  time_t now;

  now = time ( NULL );
  tm = localtime ( &now );

  len = strftime ( time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm );

  cout << time_buffer << "\n";

  return;
# undef TIME_SIZE
}
//****************************************************************************80

void tuple_next_fast ( int m, int n, int rank, int x[] )

//****************************************************************************80
//
//  Purpose:
//
//    TUPLE_NEXT_FAST computes the next element of a tuple space, "fast".
//
//  Discussion:
//
//    The elements are N vectors.  Each entry is constrained to lie
//    between 1 and M.  The elements are produced one at a time.
//    The first element is
//      (1,1,...,1)
//    and the last element is
//      (M,M,...,M)
//    Intermediate elements are produced in lexicographic order.
//
//  Example:
//
//    N = 2,
//    M = 3
//
//    INPUT        OUTPUT
//    -------      -------
//    Rank  X      X
//    ----  ---    ---
//    0     * *    1 1
//    1     1 1    1 2
//    2     1 2    1 3
//    3     1 3    2 1
//    4     2 1    2 2
//    5     2 2    2 3
//    6     2 3    3 1
//    7     3 1    3 2
//    8     3 2    3 3
//    9     3 3    1 1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 April 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the maximum entry.
//
//    Input, int N, the number of components.
//
//    Input, int RANK, indicates the rank of the tuples.
//    On the very first call only, it is necessary that
//    the user set RANK = 0.  
//
//    Input/output, int X[N], on input the previous tuple.
//    On output, the next tuple.
//
{
  static int *base = NULL;
  int i;

  if ( rank == 0 )
  {
    if ( base )
    {
      delete [] base;
    }
    base = new int[n];

    base[n-1] = 1;
    for ( i = n-2; i >= 0; i-- )
    {
      base[i] = base[i+1] * m;
    }
  }

  for ( i = 0; i < n; i++ )
  {
    x[i] = ( ( rank / base[i] ) % m ) + 1;
  }

  return;
}
