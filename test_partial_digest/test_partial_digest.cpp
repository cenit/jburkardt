# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "test_partial_digest.hpp"

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN calls all the tests.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 January 2018
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "TEST_PARTIAL_DIGEST_TESTS:\n";

  i4_uniform_ab_test ( );
  i4vec_distances_test ( );
  i4vec_heap_d_test ( );
  i4vec_print_test ( );
  i4vec_sort_heap_a_test ( );
  ksub_random_test ( );
  test_partial_digest_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "TEST_PARTIAL_DIGEST_TESTS:\n";
  cout << "  Normal end of execution.\n";
  timestamp ( );

  return 0;
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

int *i4vec_distances ( int k, int locate[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_DISTANCES computes a pairwise distance table.
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
//  Parameters:
//
//    Input, int K, the number of objects.
//
//    Input, int LOCATE[K], the obect locations.
//
//    Output, int I4VEC_DISTANCES[K*(K-1)/2], the pairwise distances.
//
{
  int *d;
  int i;
  int j;
  int l;
 
  d = new int[k*(k-1)/2];

  l = 0;
  for ( i = 0; i < k; i++ )
  {
    for ( j = i + 1; j < k; j++ )
    {
      d[l] = abs ( locate[i] - locate[j] );
      l = l + 1;
    }
  }

  return d;
}
//****************************************************************************80

void i4vec_distances_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_DISTANCES_TEST tests I4VEC_DISTANCES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2018
//
//  Author:
//
//    John Burkardt
//
{
  int *d;
  int locate[5] = { 0, 3, 10, 20, 100 };
  int n = 5;

  cout << "\n";
  cout << "I4VEC_DISTANCES_TEST\n";
  cout << "  I4VEC_DISTANCES computes the pairwise distances between elements\n";
  cout << "  of an I4VEC.\n";

  d = i4vec_distances ( n, locate );

  i4vec_print ( n, locate, "  Locations:" );
  i4vec_print ( n * ( n - 1 ) / 2, d, "  Distances:" );
//
//  Free memory.
//
  delete [] d;

  return;
}
//****************************************************************************80

void i4vec_heap_d ( int n, int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_HEAP_D reorders an I4VEC into a descending heap.
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
//
//    A heap is an array A with the property that, for every index J,
//    A[J] >= A[2*J+1] and A[J] >= A[2*J+2], (as long as the indices
//    2*J+1 and 2*J+2 are legal).
//
//  Diagram:
//
//                  A(0)
//
//            A(1)         A(2)
//
//      A(3)       A(4)  A(5) A(6)
//
//    A(7) A(8)  A(9) A(10)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 April 1999
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Albert Nijenhuis, Herbert Wilf,
//    Combinatorial Algorithms,
//    Academic Press, 1978, second edition,
//    ISBN 0-12-519260-6.
//
//  Parameters:
//
//    Input, int N, the size of the input array.
//
//    Input/output, int A[N].
//    On input, an unsorted array.
//    On output, the array has been reordered into a heap.
//
{
  int i;
  int ifree;
  int key;
  int m;
//
//  Only nodes (N/2)-1 down to 0 can be "parent" nodes.
//
  for ( i = ( n / 2 ) - 1; 0 <= i; i-- )
  {
//
//  Copy the value out of the parent node.
//  Position IFREE is now "open".
//
    key = a[i];
    ifree = i;

    for ( ; ; )
    {
//
//  Positions 2*IFREE + 1 and 2*IFREE + 2 are the descendants of position
//  IFREE.  (One or both may not exist because they equal or exceed N.)
//
      m = 2 * ifree + 1;
//
//  Does the first position exist?
//
      if ( n <= m )
      {
        break;
      }
      else
      {
//
//  Does the second position exist?
//
        if ( m + 1 < n )
        {
//
//  If both positions exist, take the larger of the two values,
//  and update M if necessary.
//
          if ( a[m] < a[m+1] )
          {
            m = m + 1;
          }
        }
//
//  If the large descendant is larger than KEY, move it up,
//  and update IFREE, the location of the free position, and
//  consider the descendants of THIS position.
//
        if ( key < a[m] )
        {
          a[ifree] = a[m];
          ifree = m;
        }
        else
        {
          break;
        }
      }
    }
//
//  When you have stopped shifting items up, return the item you
//  pulled out back to the heap.
//
    a[ifree] = key;
  }

  return;
}
//****************************************************************************80

void i4vec_heap_d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_HEAP_D_TEST tests I4VEC_HEAP_D;
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
# define N 30

  int *a;
  int b;
  int c;
  int i;
  int seed;

  cout << "\n";
  cout << "I4VEC_HEAP_D_TEST\n";
  cout << "  I4VEC_HEAP_D turns an I4VEC into a descending heap;\n";

  b = 1;
  c = 40;
  seed = 123456789;

  cout << "\n";
  cout << "  Using random seed " << seed << ".\n";

  a = new int[N];
  for ( i = 0; i < N; i++ )
  {
    a[i] = i4_uniform_ab ( 1, 40, seed );
  }

  i4vec_print ( N, a, "  Unheaped array:" );

  i4vec_heap_d ( N, a );

  i4vec_print ( N, a, "  Descending heaped array:" );

  delete [] a;

  return;
# undef N
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

void i4vec_sort_heap_a ( int n, int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SORT_HEAP_A ascending sorts an I4VEC using heap sort.
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
//    30 April 1999
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Albert Nijenhuis, Herbert Wilf,
//    Combinatorial Algorithms,
//    Academic Press, 1978, second edition,
//    ISBN 0-12-519260-6.
//
//  Parameters:
//
//    Input, int N, the number of entries in the array.
//
//    Input/output, int A[N].
//    On input, the array to be sorted;
//    On output, the array has been sorted.
//
{
  int n1;
  int temp;

  if ( n <= 1 )
  {
    return;
  }
//
//  1: Put A into descending heap form.
//
  i4vec_heap_d ( n, a );
//
//  2: Sort A.
//
//  The largest object in the heap is in A[0].
//  Move it to position A[N-1].
//
  temp = a[0];
  a[0] = a[n-1];
  a[n-1] = temp;
//
//  Consider the diminished heap of size N1.
//
  for ( n1 = n-1; 2 <= n1; n1-- )
  {
//
//  Restore the heap structure of the initial N1 entries of A.
//
    i4vec_heap_d ( n1, a );
//
//  Take the largest object from A[0] and move it to A[N1-1].
//
    temp = a[0];
    a[0] = a[n1-1];
    a[n1-1] = temp;
  }
  return;
}
//****************************************************************************80

void i4vec_sort_heap_a_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4vEC_SORT_HEAP_A_TEST tests I4VEC_SORT_HEAP_A;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 October 2005
//
//  Author:
//
//    John Burkardt
//
{
# define N 30

  int *a;
  int i;
  int seed;

  cout << "\n";
  cout << "I4vEC_SORT_HEAP_A_TEST\n";
  cout << "  I4VEC_SORT_HEAP_A sorts an integer array;\n";

  seed = 123456789;

  cout << "\n";
  cout << "  Using random seed " << seed << ".\n";

  a = new int[N];
  for ( i = 0; i < N; i++ )
  {
    a[i] = i4_uniform_ab ( 1, 40, seed );
  }

  i4vec_print ( N, a, "  Unsorted array:" );

  i4vec_sort_heap_a ( N, a );

  i4vec_print ( N, a, "  Sorted array:" );

  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void ksub_random ( int n, int k, int &seed, int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANDOM selects a random subset of size K from a set of size N.
//
//  Discussion:
//
//    Consider the set A = 1, 2, 3, ... N.  
//    Choose a random index I1 between 1 and N, and swap items A(1) and A(I1).
//    Choose a random index I2 between 2 and N, and swap items A(2) and A(I2).
//    repeat K times.
//    A(1:K) is your random K-subset.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 June 2011
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the size of the set from which subsets
//    are drawn.
//
//    Input, int K, number of elements in desired subsets.
//    1 <= K <= N.
//
//    Input/output, int &SEED, a seed for the random
//    number generator.
//
//    Output, int A[K], the indices of the randomly
//    chosen elements.  These are 1-based indices.
//
{
  int *b;
  const int base = 1;
  int i;
  int j;
  int t;
//
//  Let B index the set.
//
  b = new int[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = i + base;
  }
//
//  Choose item 1 from N things,
//  choose item 2 from N-1 things,
//  choose item K from N-K+1 things.
//
  for ( i = 0; i < k; i++)
  {
    j = i4_uniform_ab ( i, n - 1, seed );
    t    = b[i];
    b[i] = b[j];
    b[j] = t;
  }
//
//  Copy the first K elements.
//
  for ( i = 0; i < k; i++ )
  {
    a[i] = b[i];
  }
  delete [] b;

  return;
}
//****************************************************************************80

void ksub_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUB_RANDOM_TEST tests KSUB_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 June 2011
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int i;
  int j;
  int k = 5;
  int n = 52;
  int seed;

  cout << "\n";
  cout << "KSUB_RANDOM_TEST\n";
  cout << "  KSUB_RANDOM generates a random K subset of an N set.\n";
  cout << "  Set size is N =    " << n << "\n";
  cout << "  Subset size is K = " << k << "\n";
  cout << "\n";
 
  seed = 123456789;
  a = new int[k];

  for ( i = 1; i <= 5; i++ )
  {
    ksub_random ( n, k, seed, a );
    for ( j = 0; j < k; j++ )
    {
      cout << "  " << setw(3) << a[j];
    }
    cout << "\n";
  }
 
  delete [] a;

  return;
}
//****************************************************************************80

void test_partial_digest ( int k, int dmax, int &seed, int **locate, int **d )

//****************************************************************************80
//
//  Purpose:
//
//    TEST_PARTIAL_DIGEST returns a partial digest test problem.
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
//  Parameters:
//
//    Input, int K, the number of objects.
//    K must be at least 2.
//
//    Input, int DMAX, the maximum possible distance.
//    DMAX must be at least K-1.
//
//    Input/output, int *SEED, a seed for the random number
//    generator.
//
//    Output, int *LOCATE, the K obect locations.
//
//    Output, int **D, the K*(K-1)/2 pairwise distances.
//
{
//
//  Check input.
//
  if ( k < 2 )
  {
    cerr << "\n";
    cerr << "TEST_PARTIAL_DIGEST - Fatal error!\n";
    cerr << "  Input K < 2.\n";
    exit ( 1 );
  }

  if ( dmax < k - 1 )
  {
    cerr << "\n";
    cerr << "TEST_PARTIAL_DIGEST - Fatal error!\n";
    cerr << "  DMAX < K - 1.\n";
    exit ( 1 );
  }
//
//  Select LOCATE, which is a random subset of the integers 0 through DMAX.
//
  ( *locate ) = new int[k];
  ksub_random ( dmax - 1, k - 2, seed, (*locate) + 1 );
  (*locate)[0] = 0;
  (*locate)[k-1] = dmax;
//
//  Compute K*(K+1)/2 pairwise distances.
//
  *d = i4vec_distances ( k, *locate );
 
  return;
}
//****************************************************************************80

void test_partial_digest_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST_PARTIAL_DIGEST_TEST tests the TEST_PARTIAL_DIGEST library.
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
{
  int *d;
  int dmax;
  int k;
  int *locate;
  int seed;

  cout << "\n";
  cout << "TEST_PARTIAL_DIGEST_TEST:\n";
  cout << "  TEST_PARTIAL_DIGEST creates test problems for the\n";
  cout << "  partial digest problem.\n";
//
//  Request a sample problem.
//
  k = 6;
  dmax = 20;
  seed = 123456789;

  cout << "\n";
  cout << "  Number of nodes = " << k << "\n";
  cout << "  Maximum distance = " << dmax << "\n";
  
  test_partial_digest ( k, dmax, seed, &locate, &d );
//
//  Sort the data.
//
  i4vec_sort_heap_a ( k, locate );
  i4vec_sort_heap_a ( k * ( k - 1 ) / 2, d );
//
//  Print the data.
//
  i4vec_print ( k, locate, "  Locations:" );
  i4vec_print ( k * ( k - 1 ) / 2, d, "  Distances:" );
//
//  Free memory.
//
  delete [] d;
  delete [] locate;

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
