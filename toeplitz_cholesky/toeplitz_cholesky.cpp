# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <cstring>
# include <ctime>

using namespace std;

# include "toeplitz_cholesky.hpp"

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

double *r8mat_copy_new ( int m, int n, double a1[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_COPY_NEW copies one R8MAT to a "new" R8MAT.
//
//  Discussion:
//
//    An R8MAT is a doubly dimensioned array of R8's, which
//    may be stored as a vector in column-major order.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 July 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A1[M*N], the matrix to be copied.
//
//    Output, double R8MAT_COPY_NEW[M*N], the copy of A1.
//
{
  double *a2;
  int i;
  int j;

  a2 = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a2[i+j*m] = a1[i+j*m];
    }
  }
  return a2;
}
//****************************************************************************80

double *r8mat_mmt_new ( int n1, int n2, int n3, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_MMT_NEW computes C = A * B'.
//
//  Discussion:
//
//    An R8MAT is a doubly dimensioned array of R8 values, stored as a vector
//    in column-major order.
//
//    For this routine, the result is returned as the function value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 November 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, N3, the order of the matrices.
//
//    Input, double A[N1*N2], double B[N3*N2], the matrices to multiply.
//
//    Output, double R8MAT_MTM_NEW[N1*N3], the product matrix C = A * B'.
//
{
  double *c;
  int i;
  int j;
  int k;

  c = new double[n1*n3];

  for ( i = 0; i < n1; i++ )
  {
    for ( j = 0; j < n3; j++ )
    {
      c[i+j*n1] = 0.0;
      for ( k = 0; k < n2; k++ )
      {
        c[i+j*n1] = c[i+j*n1] + a[i+k*n1] * b[j+k*n3];
      }
    }
  }

  return c;
}
//****************************************************************************80

double *r8mat_mtm_new ( int n1, int n2, int n3, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_MTM_NEW computes C = A' * B.
//
//  Discussion:
//
//    An R8MAT is a doubly dimensioned array of R8 values, stored as a vector
//    in column-major order.
//
//    For this routine, the result is returned as the function value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 September 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, N3, the order of the matrices.
//
//    Input, double A[N2*N1], double B[N2*N3], the matrices to multiply.
//
//    Output, double R8MAT_MTM_NEW[N1*N3], the product matrix C = A' * B.
//
{
  double *c;
  int i;
  int j;
  int k;

  c = new double[n1*n3];

  for ( i = 0; i < n1; i++ )
  {
    for ( j = 0; j < n3; j++ )
    {
      c[i+j*n1] = 0.0;
      for ( k = 0; k < n2; k++ )
      {
        c[i+j*n1] = c[i+j*n1] + a[k+i*n2] * b[k+j*n2];
      }
    }
  }

  return c;
}
//****************************************************************************80

void r8mat_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_PRINT prints an R8MAT.
//
//  Discussion:
//
//    An R8MAT is a doubly dimensioned array of R8 values, stored as a vector
//    in column-major order.
//
//    Entry A(I,J) is stored as A[I+J*M]
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
//    Input, int M, the number of rows in A.
//
//    Input, int N, the number of columns in A.
//
//    Input, double A[M*N], the M by N matrix.
//
//    Input, string TITLE, a title.
//
{
  r8mat_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8mat_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi,
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_PRINT_SOME prints some of an R8MAT.
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
//    20 August 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Input, double A[M*N], the matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  int i;
  int i2hi;
  int i2lo;
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
//
//  Print the columns of the matrix, in strips of 5.
//
  for ( j2lo = jlo; j2lo <= jhi; j2lo = j2lo + INCX )
  {
    j2hi = j2lo + INCX - 1;
    j2hi = i4_min ( j2hi, n );
    j2hi = i4_min ( j2hi, jhi );

    cout << "\n";
//
//  For each column J in the current range...
//
//  Write the header.
//
    cout << "  Col:    ";
    for ( j = j2lo; j <= j2hi; j++ )
    {
      cout << setw(7) << j - 1 << "       ";
    }
    cout << "\n";
    cout << "  Row\n";
    cout << "\n";
//
//  Determine the range of the rows in this strip.
//
    i2lo = i4_max ( ilo, 1 );
    i2hi = i4_min ( ihi, m );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(5) << i - 1 << ": ";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        cout << setw(12) << a[i-1+(j-1)*m] << "  ";
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
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

double *toep_cholesky_lower ( int n, double g[] )

//****************************************************************************80
//
//  Purpose:
//
//    TOEP_CHOLESKY_LOWER: lower Cholesky factor of a compressed Toeplitz matrix.
//
//  Discussion:
//
//    The Toeplitz matrix A is supplied in a compressed form G.
//
//    The Toeplitz matrix must be positive semi-definite.
//
//    After factorization, A = L * L'.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 November 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Michael Stewart,
//    Cholesky factorization of semi-definite Toeplitz matrices.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double G[2*N], the compressed Toeplitz matrix.
//    G(1,1:N) contains the first row.
//    G(2,2:N) contains the first column.
//
//    Output, double TOEP_CHOLESKY_LOWER[N*N], the lower Cholesky factor.
//
{
  double div;
  double g1j;
  double g2j;
  int i;
  int j;
  double *l;
  double rho;

  l = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      l[i+j*n] = 0.0;
    }
  }

  for ( i = 0; i < n; i++ )
  {
    l[i+0*n] = g[0+i*2];
  }

  for ( j = n - 1; 1 <= j; j-- )
  {
    g[0+j*2] = g[0+(j-1)*2];
  }

  g[0+0*2] = 0.0;

  for ( i = 1; i < n; i++ )
  {
    rho = - g[1+i*2] / g[0+i*2];
    div = sqrt ( ( 1.0 - rho ) * ( 1.0 + rho ) );
    for ( j = i; j < n; j++ )
    {
      g1j = g[0+j*2];
      g2j = g[1+j*2];
      g[0+j*2] = (       g1j + rho * g2j ) / div;
      g[1+j*2] = ( rho * g1j +       g2j ) / div;
    }
    for ( j = i; j < n; j++ )
    {
      l[j+i*n] = g[0+j*2];
    }
    for ( j = n - 1; i < j; j-- )
    {
      g[0+j*2] = g[0+(j-1)*2];
    }
    g[0+i*2] = 0.0;
  }
  return l;
}
//****************************************************************************80

double *toep_cholesky_upper ( int n, double g[] )

//****************************************************************************80
//
//  Purpose:
//
//    TOEP_CHOLESKY_UPPER: upper Cholesky factor of a compressed Toeplitz matrix.
//
//  Discussion:
//
//    The Toeplitz matrix A is supplied in a compressed form G.
//
//    The Toeplitz matrix must be positive semi-definite.
//
//    After factorization, A = R' * R.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 November 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Michael Stewart,
//    Cholesky factorization of semi-definite Toeplitz matrices.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double G[2*N}, the compressed Toeplitz matrix.
//    G(1,1:N) contains the first row.
//    G(2,2:N) contains the first column.
//
//    Output, double TOEP_CHOLESKY_UPPER[N*N], the upper Cholesky factor.
//
{
  double div;
  double g1j;
  double g2j;
  int i;
  int j;
  double *r;
  double rho;

  r = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      r[i+j*n] = 0.0;
    }
  }
  for ( j = 0; j < n; j++ )
  {
    r[0+j*n] = g[0+j*2];
  }
  for ( j = n - 1; 1 <= j; j-- )
  {
    g[0+j*2] = g[0+(j-1)*2];
  }
  g[0+0*n] = 0.0;

  for ( i = 1; i < n; i++ )
  {
    rho = - g[1+i*2] / g[0+i*2];
    div = sqrt ( ( 1.0 - rho ) * ( 1.0 + rho ) );

    for ( j = i; j < n; j++ )
    {
      g1j = g[0+j*2];
      g2j = g[1+j*2];
      g[0+j*2] = (       g1j + rho * g2j ) / div;
      g[1+j*2] = ( rho * g1j +       g2j ) / div;
    }
    for ( j = i; j < n; j++ )
    {
      r[i+j*n] = g[0+j*2];
    }
    for ( j = n - 1; i < j; j-- )
    {
      g[0+j*2] = g[0+(j-1)*2];
    }
    g[0+i*2] = 0.0;
  }

  return r;
}
//****************************************************************************80

double *toeplitz_cholesky_lower ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    TOEPLITZ_CHOLESKY_LOWER: lower Cholesky factor of a Toeplitz matrix.
//
//  Discussion:
//
//    The Toeplitz matrix must be positive semi-definite.
//
//    After factorization, A = L * L'.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 November 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Michael Stewart,
//    Cholesky factorization of semi-definite Toeplitz matrices.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the Toeplitz matrix.
//
//    Output, double TOEPLITZ_CHOLESKY_LOWER[N*N], the lower Cholesky factor.
//
{
  double div;
  double *g;
  double g1j;
  double g2j;
  int i;
  int j;
  double *l;
  double rho;

  l = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      l[i+j*n] = 0.0;
    }
  }
  g = new double[2*n];

  for ( j = 0; j < n; j++ )
  {
    g[0+j*2] = a[0+j*n];
  }
  g[1+0*2] = 0.0;
  for ( j = 1; j < n; j++ )
  {
    g[1+j*2] = a[j+0*n];
  } 

  for ( i = 0; i < n; i++ )
  {
    l[i+0*n] = g[0+i*2];
  }
  for ( j = n - 1; 1 <= j; j-- )
  {
    g[0+j*2] = g[0+(j-1)*2];
  }
  g[0+0*2] = 0.0;

  for ( i = 1; i < n; i++ )
  {
    rho = - g[1+i*2] / g[0+i*2];
    div = sqrt ( ( 1.0 - rho ) * ( 1.0 + rho ) );

    for ( j = i; j < n; j++ )
    {
      g1j = g[0+j*2];
      g2j = g[1+j*2];
      g[0+j*2] = (       g1j + rho * g2j ) / div;
      g[1+j*2] = ( rho * g1j +       g2j ) / div;
    }

    for ( j = i; j < n; j++ )
    {
      l[j+i*n] = g[0+j*2];
    }
    for ( j = n - 1; i < j; j-- )
    {
      g[0+j*2] = g[0+(j-1)*2];
    }
    g[0+i*2] = 0.0;
  }

  free ( g );

  return l;
}
//****************************************************************************80

double *toeplitz_cholesky_upper ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    TOEPLITZ_CHOLESKY_UPPER: upper Cholesky factor of a Toeplitz matrix.
//
//  Discussion:
//
//    The Toeplitz matrix must be positive semi-definite.
//
//    After factorization, A = R' * R.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 November 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Michael Stewart,
//    Cholesky factorization of semi-definite Toeplitz matrices.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the Toeplitz matrix.
//
//    Output, double TOEPLITZ_CHOLESKY_UPPER[N*N], the upper Cholesky factor.
//
{
  double div;
  double *g;
  double g1j;
  double g2j;
  int i;
  int j;
  double *r;
  double rho;

  r = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      r[i+j*n] = 0.0;
    }
  }
  g = new double[2*n];

  for ( j = 0; j < n; j++ )
  {
    g[0+j*2] = a[0+j*n];
  }

  g[1+0*2] = 0.0;
  for ( j = 1; j < n; j++ )
  {
    g[1+j*2] = a[j+0*n]; 
  }
  for ( j = 0; j < n; j++ )
  {
    r[0+j*n] = g[0+j*2];
  }
  for ( j = n - 1; 1 <= j; j-- )
  {
    g[0+j*2] = g[0+(j-1)*2];
  }
  g[0+0*2] = 0.0;

  for ( i = 1; i < n; i++ )
  {
    rho = - g[1+i*2] / g[0+i*2];
    div = sqrt ( ( 1.0 - rho ) * ( 1.0 + rho ) );
    for ( j = i; j < n; j++ )
    {
      g1j = g[0+j*2];
      g2j = g[1+j*2];
      g[0+j*2] = (       g1j + rho * g2j ) / div;
      g[1+j*2] = ( rho * g1j +       g2j ) / div;
    }
    for ( j = i; j < n; j++ )
    {
      r[i+j*n] = g[0+j*2];
    }
    for ( j = n - 1; i < j; j-- )
    {
      g[0+j*2] = g[0+(j-1)*2];
    }
    g[0+i*2] = 0.0;
  }

  free ( g );

  return r;
}

