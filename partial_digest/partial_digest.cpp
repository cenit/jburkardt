# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <ctime>

using namespace std;

# include "partial_digest.hpp"

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for PARTIAL_DIGEST_TEST.
//
//  Discussion:
//
//    PARTIAL_DIGEST_TEST tests the PARTIAL_DIGEST library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2018
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "PARTIAL_DIGEST_TEST:\n";
  cout << "  C++ version\n";
  cout << "  Test the PARTIAL_DIGEST library.\n";

  find_distances_test ( );
  i4_uniform_ab_test ( );
  i4vec_max_last_test ( );
  i4vec_print_test ( );
  partial_digest_recur_test01 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "PARTIAL_DIGEST_TEST:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

bool find_distances ( int l_length, int l[], int x_length, int x[], int y )

//****************************************************************************80
//
//  Purpose:
//
//    FIND_DISTANCES determines if the "free" distances include every ||X(I)-Y||.
//
//  Discussion:
//
//    This routine is given a candidate point Y, a set of placed points
//    X(1:X_LENGTH), and a list of unused or "free" distances in
//    L(1:L_LENGTH).  The routine seeks to find in L a copy of the
//    distance from Y to each X.
//
//    If so, then the L array is reordered so that entries
//    L(L_LENGTH-X_LENGTH+1:L_LENGTH) contain theses distances.
//
//    In other words, Y can be added into X, and L_LENGTH reduced to
//    L_LENGTH-X_LENGTH.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2018
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Pavel Pevzner,
//    Computational Molecular Biology,
//    MIT Press, 2000,
//    ISBN: 0-262-16197-4,
//    LC: QH506.P47.
//
//  Parameters:
//
//    Input, int L_LENGTH, the length of the array.
//
//    Input/output, int L(L_LENGTH), the array.  On output,
//    some entries have been shuffled.  In particular, if SUCCESS is TRUE,
//    the entries L(L_LENGTH-X_LENGTH+1:L_LENGTH) contain the distances
//    of X(1:X_LENGTH) to Y.
//
//    Input, int X_LENGTH, the number of entries in X.
//
//    Input, int X[X_LENGTH], the number of points
//    already accepted.
//
//    Input, int Y, a new point that we are considering.
//
//    Output, bool FIND_DISTANCES, is TRUE if the entries of L included
//    the values of the distance of Y to each entry of X.
//
{
  int d;
  int i;
  int j;
  int l2_length;
  bool success;

  l2_length = l_length;

  for ( i = 0; i < x_length; i++ )
  {
    d = abs ( x[i] - y );

    success = false;

    for ( j = 0; j < l2_length; j++ )
    {

      if ( l[j] == d )
      {
        l[j] = l[l2_length-1];
        l[l2_length-1] = d;
        l2_length = l2_length - 1;
        success = true;
        break;
      }

    }

    if ( ! success )
    {
      return success;
    }

  }

  success = true;

  return success;
}
//****************************************************************************80

void find_distances_test ( ) 

//****************************************************************************80
//
//  Purpose:
//
//    FIND_DISTANCES_TEST tests FIND_DISTANCES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 January 2018
//
//  Author:
//
//    John Burkardt
//
{
  int l[10] = { 13, 15, 38, 90, 2, 25, 77, 23, 75, 52 };
  int l_length;
  int l_max;
  int n = 5;
  bool success;
  int *x;
  int x_length;
  int y;

  cout << "\n";
  cout << "FIND_DISTANCES_TEST:\n";
  cout << "  FIND_DISTANCES takes a candidate location Y\n";
  cout << "  and determines whether its distance to each point\n";
  cout << "  in the X array is listed in the L array.\n";

  l_length = n * ( n - 1 ) / 2; 
  i4vec_print ( l_length, l, "  Initial L array:" );

  l_max = i4vec_max_last ( l_length, l );
  l_length = l_length - 1;

  x = new int[n];
  x[0] = 0;
  x[1] = l_max;
  x_length = 2;
//
//  Solution is X = (/ 0, 13, 15, 38, 90 /) or (/ 0, 52, 75, 77, 90 /)
//  So Y = 13, 15, 38, 52, 75 or 77 will be acceptable.
//
  y = i4vec_max_last ( l_length, l );
  success = find_distances ( l_length, l, x_length, x, y );

  cout << "\n";
  cout << "  Consider Y = " << y << "\n";
  cout << "\n";
  if ( success )
  {
    cout << "  This Y is acceptable.\n";
    l_length = l_length - x_length;
    x_length = x_length + 1;
    x[x_length-1] = y;
    i4vec_print ( x_length, x, "  New X array:" );
    i4vec_print ( l_length, l, "  New L array:" );
  }
  else
  {
    cout << "  This Y is not acceptable.\n";
  }

  y = 35;
  success = find_distances ( l_length, l, x_length, x, y );

  cout << "\n";
  cout << "  Consider Y = " << y << "\n";
  cout << "\n";
  if ( success )
  {
    cout << "  This Y is acceptable.\n";
    l_length = l_length - x_length;
    x_length = x_length + 1;
    x[x_length-1] = y;
    i4vec_print ( x_length, x, "  New X array:" );
    i4vec_print ( l_length, l, "  New L array:" );
  }
  else
  {
    cout << "  This Y is not acceptable.\n";
  }

  delete [] x;

  return;
}
//****************************************************************************80

int i4_uniform_ab ( int a, int b, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_AB returns a scaled pseudorandom I4 between A and B.
//
//  Discussion:
//
//    The pseudorandom number should be uniformly distributed
//    between A and B.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 October 2012
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
//    Input, int A, B, the limits of the interval.
//
//    Input/output, int &SEED, the "seed" value, which should NOT be 0.
//    On output, SEED has been updated.
//
//    Output, int I4_UNIFORM, a number between A and B.
//
{
  int c;
  const int i4_huge = 2147483647;
  int k;
  float r;
  int value;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "I4_UNIFORM_AB - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }
//
//  Guarantee A <= B.
//
  if ( b < a )
  {
    c = a;
    a = b;
    b = c;
  }

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + i4_huge;
  }

  r = ( float ) ( seed ) * 4.656612875E-10;
//
//  Scale R to lie between A-0.5 and B+0.5.
//
  r = ( 1.0 - r ) * ( ( float ) a - 0.5 ) 
    +         r   * ( ( float ) b + 0.5 );
//
//  Use rounding to convert R to an integer between A and B.
//
  value = round ( r );
//
//  Guarantee A <= VALUE <= B.
//
  if ( value < a )
  {
    value = a;
  }
  if ( b < value )
  {
    value = b;
  }

  return value;
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

int i4vec_max_last ( int l_length, int l[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_MAX_LAST moves the maximum I4VEC entry to the last position.
//
//  Discussion:
//
//    This routine finds the largest entry in an array and moves
//    it to the end of the array.
//
//    If we ignore this last array entry, then the effect is the same
//    as "deleting" the maximum entry from the array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 January 2018
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Pavel Pevzner,
//    Computational Molecular Biology,
//    MIT Press, 2000,
//    ISBN: 0-262-16197-4,
//    LC: QH506.P47.
//
//  Parameters:
//
//    Input, int L_LENGTH, the length of the array.
//
//    Input, int L[L_LENGTH], the array.  On output,
//    the array has been shifted so that the element of maximum value
//    occurs at the end.
//
//    Output, int I4VEC_MAX_LAST, the maximum entry in the input array.
//
{
  int i;
  int t;
  int value;

  for ( i = 1; i < l_length; i++ )
  {
    if ( l[i] < l[i-1] )
    {
      t = l[i];
      l[i] = l[i-1];
      l[i-1] = t;
    }
  }

  value = l[l_length-1];

  return value;
}
//****************************************************************************80

void i4vec_max_last_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_MAX_LAST_TEST tests I4VEC_MAX_LAST.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2018
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 10;
  int seed;
  int *x;
  int x_max;

  cout << "\n";
  cout << "I4VEC_MAX_LAST_TEST\n";
  cout << "  I4VEC_MAX_LAST identifies the largest element in an\n";
  cout << "  I4VEC, and moves it to the final entry.\n";

  seed = 123456789;
  x = new int[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = i4_uniform_ab ( 1, 30, seed );
  }

  i4vec_print ( n, x, "  Input vector:" );

  x_max = i4vec_max_last ( n, x );

  cout << "\n";
  cout << "  Maximum: = " << x_max << "\n";

  i4vec_print ( n, x, "  Output vector:" );

  delete [] x;

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

void i4vec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PRINT_TEST tests I4VEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int v[4] = { 91, 92, 93, 94 };

  cout << "\n";
  cout << "I4VEC_PRINT_TEST\n";
  cout << "  I4VEC_PRINT prints an I4VEC\n";

  i4vec_print ( n, v, "  Here is the I4VEC:" );

  return;
}
//****************************************************************************80

void partial_digest_recur ( int n, int l[] )

//****************************************************************************80
//
//  Purpose:
//
//    PARTIAL_DIGEST_RECUR uses recursion on the partial digest problem.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2018
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Pavel Pevzner,
//    Computational Molecular Biology,
//    MIT Press, 2000,
//    ISBN: 0-262-16197-4,
//    LC: QH506.P47.
//
//  Parameters:
//
//    Input, int N, the number of nodes.
//
//    Input, int L[(N*(N-1))/2], the distances between all pairs
//    of distinct nodes.
//
{
  int l_length;
  int width;
  int *x;
  int x_length;
//
//  How long is L?
//
  l_length = ( n * ( n - 1 ) ) / 2;
//
//  Find WIDTH, the largest element of L, and move it to the last position.
//
  width = i4vec_max_last ( l_length, l );
//
//  Think of L as being 1 entry shorter.
//
  l_length = l_length - 1;
//
//  Using WIDTH, set the first two entries of X.
//
  x = new int[n];
  x[0] = 0;
  x[1] = width;
  x_length = 2;
//
//  Begin recursive operation.
//
  place ( l_length, l, x_length, x );
//
//  Free memory.
//
  delete [] x;

  return;
}
//****************************************************************************80

void partial_digest_recur_test01 ( )

//****************************************************************************80
//
//  Purpose:
//
//    PARTIAL_DIGEST_RECUR_TEST01 tests PARTIAL_DIGEST_RECUR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2019
//
//  Author:
//
//    John Burkardt
//
{
  int dist[10] = { 2, 2, 3, 3, 4, 5, 6, 7, 8, 10 };
  int n = 5;
  int nn2;

  cout << "\n";
  cout << "PARTIAL_DIGEST_RECUR_TEST01\n";
  cout << "  PARTIAL_DIGEST_RECUR generates solutions to the partial\n";
  cout << "  digest problem, using recursion\n";

  cout << "\n";
  cout << "  The number of objects to place is N = " << n << "\n";
  cout << "\n";
  cout << "  The original placement was 0,3,6,8,10.\n";
  cout << "  These placements generate the following distances:\n";

  nn2 = ( n * ( n - 1 ) ) / 2;
  i4vec_print ( nn2, dist, "  Distance array:" );

  cout << "\n";
  cout << "  PARTIAL_DIGEST_RECUR may recover the original placements\n";
  cout << "  from the pairwise distances.  It may also find other\n";
  cout << "  placements that have the same distance array.\n";

  partial_digest_recur ( n, dist );

  return;
}
//****************************************************************************80

void place ( int &l_length, int l[], int &x_length, int x[] )

//****************************************************************************80
//
//  Purpose:
//
//    PLACE tries to place the next point for the partial digest problem.
//
//  Discussion:
//
//    Note that this is a recursive subroutine.  A solution to the
//    partial digest problem is sought by calling this routine repeatedly.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 January 2018
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Pavel Pevzner,
//    Computational Molecular Biology,
//    MIT Press, 2000,
//    ISBN: 0-262-16197-4,
//    LC: QH506.P47.
//
//  Parameters:
//
//    Input/output, int &L_LENGTH, the number of entries in L.
//
//    Input/output, int L[L_LENGTH], the array of distances.
//
//    Input/output, int &X_LENGTH, the number of entries in X.
//
//    Input/output, int X[X_LENGTH], the current partial solution.
//
{
  int l_length2;
  bool success;
  int y;
//
//  Are we done?
//
  if ( l_length <= 0 )
  {
    i4vec_print ( x_length, x, "  Solution:" );
    return;
  }
//
//  Find the maximum remaining distance.
//
  y = i4vec_max_last ( l_length, l );
//
//  We can add a point at Y if L contains all the distances from Y to
//  the current X's.
//
  success = find_distances ( l_length, l, x_length, x, y );

  if ( success )
  {
    l_length2 = l_length - x_length;
    x_length = x_length + 1;
    x[x_length - 1] = y;
    place ( l_length2, l, x_length, x );
    x_length = x_length - 1;
  }
//
//  We must also consider the case where Y represents the distance
//  to X(2), not X(1).
//
  y = x[1] - y;

  success = find_distances ( l_length, l, x_length, x, y );

  if ( success )
  {
    l_length2 = l_length - x_length;
    x_length = x_length + 1;
    x[x_length - 1] = y;
    place ( l_length2, l, x_length, x );
    x_length = x_length - 1;
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