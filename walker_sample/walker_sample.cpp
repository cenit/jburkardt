# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "walker_sample.hpp"

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

void normalize ( unsigned int n, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    NORMALIZE scales a vector X so its entries sum to 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 February 2016
//
//  Author:
//
//    Original C version by Warren Smith.
//    This C++ version by John Burkardt.
//
//  Parameters:
//
//    Input, unsigned int N, indicates the size of X.
//
//    Input/output, double X[N+2], the vector to be normalized.
//    Entries X[1] through X[N] will sum to 1 on output.
//
{
  unsigned int i;
  double sum;
//
//  Sum X.
//
  sum = 0.0;
  for ( i = 1; i <= n; i++ )
  {
    sum = sum + fabs ( x[i] );
  }
//
//  Normalize so that the new sum of X will be 1.
//
  sum = 1.0 / sum;
  for ( i = 1; i <= n; i++ )
  {
    x[i] = x[i] * sum; 
  }

  return;
}
//****************************************************************************80

void random_permutation ( unsigned int n, double x[], int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    RANDOM_PERMUTATION applies a random permutation to an array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 February 2016
//
//  Author:
//
//    Original C version by Warren Smith.
//    This C++ version by John Burkardt.
//
//  Parameters:
//
//    Input, unsigned int N, indicates the size of X.
//
//    Input/output, double X[N+2].  On output, entries X[1] through
//    X[N] have been randomly permuted.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
{
  unsigned int i;
  unsigned int j;
  double t;

  for ( i = 1; i < n; i++ )
  {
    j = i4_uniform_ab ( i, n, seed );

    t = x[i];
    x[i] = x[j];
    x[j] = t;      
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
//****************************************************************************80

void walker_build ( unsigned int n, double x[], double y[], unsigned int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    WALKER_BUILD sets up the data for a Walker sampler.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 February 2016
//
//  Author:
//
//    Original C version by Warren Smith.
//    This C++ version by John Burkardt.
//
//  Reference:
//
//    Warren Smith,
//    How to sample from a probability distribution,
//    April 18, 2002.
//
//  Parameters:
//
//    Input, unsigned int N, indicates the size of X.
//
//    Input, double X[N+2], contains in X[1] through X[N] the
//    probabilities of outcomes 1 through N.  
//
//    Output, double Y[N+2], the Walker threshold vector.
//
//    Output, unsigned int A[N+2], the Walker index vector.
//
{
  unsigned int *b;
  unsigned int i;
  unsigned int j;
  unsigned int k;
//
//  Initialize A.
//
  a[0] = 0;
  for ( i = 1; i <= n; i++ )
  { 
    a[i] = i;
  }
  a[n+1] = n + 1;
//
//  Initialize B to the "stay here" value, and set sentinel values at the ends.
//
  b = new unsigned int[n+2];

  b[0] = 0;
  for ( i = 1; i <= n; i++ )
  {
    b[i] = i;
  }
  b[n+1] = n + 1;
//
//  Copy Y from X.
//  Scale the probability vector and set sentinel values at the ends.
//
  y[0] = 0.0;
  for ( i = 1; i <= n; i++ )
  {
    y[i] = x[i] * ( double ) ( n );
  }
  y[n+1] = 2.0;

  i = 0;
  j = n + 1;

  for ( ; ; )
  {
//
//  Find i so Y[B[i]] needs more.
//
    do 
    { 
      i++; 
    } while ( y[b[i]] < 1.0 );
//
//  Find j so Y[B[j]] wants less.
//
    do
    { 
      j--; 
    } while ( 1.0 <= y[b[j]] );

    if ( j <= i )
    { 
      break;
    }
//
//  Swap B[i] and B[j].
//
    k = b[i];
    b[i] = b[j];
    b[j] = k;
  }

  i = j;
  j++;

  while ( 0 < i )
  {
//
//  Find J such that Y[B[j]] needs more.
//
    while ( y[b[j]] <= 1.0 )
    {
      j++; 
    }
//
//  Meanwhile, Y[B[i]] wants less.
//
    if ( n < j )
    {
      break;
    }
//
//  B[i] will donate to B[j] to fix up.
//
    y[b[j]] = y[b[j]] - ( 1.0 - y[b[i]] );     
    a[b[i]] = b[j];             
// 
//  Y[B[j]] now wants less so readjust ordering.
//
    if ( y[b[j]] < 1.0 )
    {        
      k = b[i];
      b[i] = b[j];
      b[j] = k;
      j++;
    }
    else
    {
      i--;
    }
  }
//
//  Free memory.
//
  delete [] b;

  return;
}
//****************************************************************************80

unsigned int walker_sampler ( unsigned int n, double y[], unsigned int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    WALKER_SAMPLER returns a random sample i=1..N with prob X[i].
//
//  Discussion:
//
//    Implementation of algorithm for sampling from a discrete
//    probability N-vector X[1], X[2], ..., X[N].  (N>=1.)
//    Runs on O(1) worst case time per sample,
//    and uses one integer and one double N-element array for storage.
//    Preprocessing consumes O(N) time and temporarily uses one 
//    additional integer array (B[0..N+1]) for bookkeeping. 
//    X[0] and X[N+1] are also used as sentinels in the Build() algorithm.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 February 2016
//
//  Author:
//
//    Original C version by Warren Smith.
//    This C++ version by John Burkardt.
//
//  Reference:
//
//    Warren Smith,
//    How to sample from a probability distribution,
//    April 18, 2002.
//
//  Parameters:
//
//    Input, unsigned int N, indicates the size of the probability vector X.
//
//    Input, double Y[N+2], the Walker threshold vector.
//
//    Input, unsigned int A[N+2], the Walker index vector.
//
//    Output, unsigned int WALKER_SAMPLER, a sample value between 1 and N,
//    selected according to the probability vector X.
//
{
  unsigned int i; 
  double r;
// 
//  Let i = random uniform integer from {1,2,...N};  
//
  i = 1 + ( unsigned int ) ( n * drand48 ( ) ); 

  r = drand48 ( );

  if ( y[i] < r ) 
  { 
    i = a[i];
  }

  return i;
}
//****************************************************************************80
    
void walker_sampler_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    WALKER_SAMPLER_TEST tests WALKER_SAMPLER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 February 2016
//
//  Author:
//
//    Original C version by Warren Smith.
//    This C++ version by John Burkardt.
//
{
  unsigned int *a;
  unsigned int *count; 
  double expval;
  unsigned int i;
  unsigned int j;
  int n;
  double p;
  unsigned int seed;
  int seed2;
  double sum;
  double t;
  double v;
  double *x;
  double *y;

  seed = 123456789;
  n = 10;
  p = 2.0;

  cout << "\n";
  cout << "WALKER_SAMPLER_TEST:\n";
  cout << "  WALKER_SAMPLER creates Walker sample vectors Y and A\n";
  cout << "  for efficient sampling of a discrete probability vector.\n";
  cout << "  Test the Walker sampler with a Zipf-type probability.\n";
//
//  Initialize the random number generator.
//
  cout << "  Use seed = " << seed << " to initialize srand48():\n";

  srand48 ( seed );
//
//  "Warm up" the random number generator.
//
  for ( i = 0; i < 100; i++ )
  {
    drand48 ( );
  }
  cout << "\n";
  cout << "  After 100 warmup calls, next 3 values of drand48():\n";

  for ( i = 100; i < 103; i++ )
  {
    cout << "  " << drand48 ( ) << "\n";
  }
//
//  Generate a standard Zipf probability vector for cases 1,...,N,
//  with parameter P.
//
  x = zipf_probability ( n, p );

  cout << "\n";
  cout << "  Zipf probabilities\n";
  cout << "  for N = " << n << "\n";
  cout << "  and parameter P = " << p << "\n";
  cout << "\n";
  cout << "     I     X[I]\n";
  cout << "\n";
  for ( i = 1; i <= n; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(16) << x[i] << "\n";
  }
//
//  For better testing, randomly scramble the probabilities.
//
  seed2 = 123456789;
  random_permutation ( n, x, seed2 );

  cout << "\n";
  cout << "  Randomly permuted X:\n";
  cout << "\n";
  cout << "     I     X[I]\n";
  cout << "\n";
  for ( i = 1; i <= n; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(16) << x[i] << "\n";
  }
//
//  Build the Walker sampler.
//
  y = new double[n+2];
  a = new unsigned int[n+2];

  walker_build ( n, x, y, a );

  cout << "\n";
  cout << "  Built the sampler\n";
  cout << "  i Y[i] A[i]:\n";
  cout << "\n";

  for ( i = 1; i <= n; i++ )
  { 
    cout << "  " << setw(3) << i
         << "  " << setw(16) << y[i]
         << "  " << setw(4) << a[i] << "\n";
  }
//
//  Prepare to count the frequency of each outcome.
//
  count = new unsigned int[n+2];
  for ( i = 1; i <= n; i++ )
  {
    count[i] = 0;
  }
//
//  Call the sampler many times.
//
  for ( i = 0; i < 100000; i++ )
  {
    j = walker_sampler ( n, y, a );
    count[j] = count[j] + 1;
  }
//
//  Compare normalized sample frequencies to the original probabilities in X.
//
  sum = 0.0;
  cout << "\n";
  cout << "  100000 samples:\n";
  cout << "  prob   #samples:\n";
  cout << "\n";

  for ( i = 1; i <= n; i++ )
  { 
    cout << "  " << x[i]
         << "  " << count[i] << "\n";
    expval = x[i] * 100000;
    t = expval - count[i];
    sum = sum + t * t / expval;
  }
  sum = sum / ( double ) ( n );

  cout << "\n";
  cout << "  sumvar = " << sum << " (should be about 1)\n";
//
//  Verify the data structure.
//
  v = walker_verify ( n, x, y, a );
  cout << "\n";
  cout << "  Verification sum: " << v << "\n";
  cout << "  (Should be close to 0.)\n";
//
//  Free memory.
//
  delete [] a;
  delete [] count;
  delete [] x;
  delete [] y;

  return;
}
//****************************************************************************80

double walker_verify ( unsigned int n, double x[], double y[], 
  unsigned int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    WALKER_VERIFY verifies a Walker Sampler structure.
//
//  Discussion:
//
//    This test applies the sampling algorithms to a Zipfian distribution.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 February 2016
//
//  Author:
//
//    Original C version by Warren Smith.
//    This C++ version by John Burkardt.
//
//  Parameters:
//
//    Input, unsigned int N, indicates the size of X.
//
//    Input, double X[N+2], contains in X[1] through X[N] the
//    probabilities of outcomes 1 through N.
//
//    Input, double Y[N+2], the Walker threshold vector.
//
//    Input, unsigned int A[N+2], the Walker index vector.
//
//    Output, double WALKER_VERIFY, the verification sum, which
//    should be close to zero.
{
  unsigned int i;
  unsigned int j;
  unsigned int k;
  double v;
  double *z;

  z = new double[n+2];
//
//  Reverse the scaling.
//
  for ( i = 1; i <= n; i++ )
  {
    z[i] = y[i] / ( double ) ( n );
  }
//
//  Add back the adjustments.
//
  for ( i = 1; i <= n; i++ )
  {
    z[a[i]] = z[a[i]] + ( 1.0 - y[i] ) / ( double ) ( n );
  }
//
//  Check for discrepancies between Z and X.
//
  v = 0.0;
  for ( i = 1; i <= n; i++ )
  {
    v = v + fabs ( z[i] - x[i] ); 
  }
//
//  Free memory.
//
  delete [] z;

  return v;
}
//****************************************************************************80

double *zipf_probability ( unsigned int n, double p )

//****************************************************************************80
//
//  Purpose:
//
//    ZIPF_PROBABILITY sets up a Zipf probability vector.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 February 2016
//
//  Author:
//
//    Original C version by Warren Smith.
//    This C++ version by John Burkardt.
//
//  Reference:
//
//    George Zipf,
//    The Psychobiology of Language,
//    1935.
//
//  Parameters:
//
//    Input, unsigned int N, indicates the size of X.
//
//    Input, double P, the Zipf parameter.
//    1.0 < P.
//
//    Output, double ZIPF_PROBABILITY[N+2], contains in X[1] through X[N] the
//    probabilities of outcomes 1 through N.
//
{
  unsigned int i;
  double *x;

  x = new double[n+2];

  x[0] = 0.0;
  for ( i = 1; i <= n; i++ )
  {
    x[i] = pow ( i, - p );
  }
  x[n+1] = 0.0;

  normalize ( n, x );

  return x;
}
