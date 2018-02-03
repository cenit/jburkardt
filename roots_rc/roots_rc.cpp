# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "roots_rc.hpp"

//****************************************************************************80

void roots_rc ( int n, double x[], double fx[], double &ferr, double xnew[], 
  double q[] )

//****************************************************************************80
//
//  Purpose:
//
//    ROOTS_RC solves a system of nonlinear equations using reverse communication.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 January 2013
//
//  Author:
//
//    Original FORTRAN77 version by Gaston Gonnet.
//    C++ version by John Burkardt.
//
//  Reference:
//     
//    Gaston Gonnet,
//    On the Structure of Zero Finders,
//    BIT Numerical Mathematics,
//    Volume 17, Number 2, June 1977, pages 170-183.
//
//  Parameters:
//
//    Input, int N, the number of equations.
//
//    Input, double X[N].  Before the first call, the user should
//    set X to an initial guess or estimate for the root.  Thereafter, the input
//    value of X should be the output value of XNEW from the previous call.
//
//    Input, double FX[N], the value of the function at XNEW.
//
//    Output, double &FERR, the function error, that is, the sum of
//    the absolute values of the most recently computed function vector.
//
//    Output, double XNEW[N], a new point at which a function 
//    value is requested.
//
//    Workspace, double Q[(2*N+2)*(N+2)].  Before the first call 
//    for a given problem, the user must set Q(2*N+1,1) to 0.0.
//
{
  double damp;
  int i;
  int j;
  int jsma;
  int jsus;
  int lda;
  double sump;
  double t;

  lda = 2 * n + 2;

  ferr = 0.0;
  for ( i = 0; i < n; i++ )
  {
    ferr = ferr + fabs ( fx[i] );
  }
//
//  Initialization if Q(2*N+1,1) = 0.0.
//
  if ( q[2*n+1+0*lda] == 0.0 )
  {
    for ( i = 1; i <= n; i++ )
    {
      for ( j = 1; j <= n + 1; j++ )
      {
        q[i-1+(j-1)*lda] = 0.0;
        q[i+(j-1)*lda] = 0.0;
      }
      q[i-1+(i-1)*lda] = 100.0;
      q[i+n-1+(i-1)*lda] = 1.0;
    }

    for ( j = 1; j <= n; j++ )
    {
      q[2*n+(j-1)*lda] = r8_huge ( );
    }

    for ( j = 1; j <= n; j++ )
    {
      q[2*n+1+(j-1)*lda] = ( double ) ( n );
    }

    for ( i = 1; i <= n; i++ )
    {
      q[i+n-1+n*lda] = x[i-1];
    }

    for ( i = 1; i <= n; i++ )
    {
      q[i-1+n*lda] = fx[i-1];
    }

    q[2*n+n*lda] = ferr;
    q[2*n+1+n*lda] = 0.0;
    damp = 0.99;
  }
  else
  {
    jsus = 1;
    for ( i = 2; i <= n + 1; i++ )
    {
      if ( ( double ) ( 2 * n ) <= q[2*n+1+(i-1)*lda] )
      {
        q[2*n+(i-1)*lda] = r8_huge ( );
      }
      if ( q[2*n+1+(jsus-1)*lda] < ( n + 3 ) / 2 )
      {
        jsus = i;
      }
      if ( ( n + 3 ) / 2 <= q[2*n+1+(i-1)*lda] && 
        q[2*n+(jsus-1)*lda] < q[2*n+(i-1)*lda] ) 
      {
        jsus = i;
      }
    }

    for ( i = 1; i <= n; i++ )
    {
      q[i+n-1+(jsus-1)*lda] = x[i-1];
      q[i-1+(jsus-1)*lda] = fx[i-1];
    }

    q[2*n+(jsus-1)*lda] = ferr;
    q[2*n+1+(jsus-1)*lda] = 0;
    jsma = 1;
    damp = 0.0;

    for ( j = 1; j <= n + 1; j++ )
    {
      if ( r8_huge ( ) / 10.0 < q[2*n+(j-1)*lda] )
      {
        damp = 0.99;
      }
      if ( q[2*n+(j-1)*lda] < q[2*n+(jsma-1)*lda] )
      {
        jsma = j;
      }
    }

    if ( jsma != n + 1 )
    {
      for ( i = 1; i <= 2 * n + 2; i++ )
      {
        t = q[i-1+(jsma-1)*lda];
        q[i-1+(jsma-1)*lda] = q[i-1+n*lda];
        q[i-1+n*lda] = t;
      }
    }

  }

  for ( i = 1; i <= n; i++ )
  {
    q[i-1+(n+1)*lda] = q[i-1+n*lda];
  }
//
//  Call the linear equation solver, which should not destroy the matrix 
//  in Q(1:N,1:N), and should overwrite the solution into Q(1:N,N+2).
//
  r8mat_fs ( lda, n, q, q+(n+1)*lda );

  sump = 0.0;
  for ( i = 1; i <= n; i++ )
  {
    sump = sump + q[i-1+(n+1)*lda];
  }

  if ( fabs ( 1.0 - sump ) <= 1.0E-10 )
  {
    cerr << "\n";
    cerr << "ROOTS_RC - Fatal error!\n";
    cerr << "  SUMP almost exactly 1.\n";
    cerr << "  SUMP = " << sump << "\n";
    exit ( 1 );
  }

  for ( i = 1; i <= n; i++ )
  {
    xnew[i-1] = q[i+n-1+n*lda];
    for ( j = 1; j <= n; j++ )
    {
      xnew[i-1] = xnew[i-1] - q[i+n-1+(j-1)*lda] * q[j-1+(n+1)*lda];
    }
//
//  If system not complete, damp the solution.
//
    xnew[i-1] = xnew[i-1] / ( 1.0 - sump ) * ( 1.0 - damp ) + q[i+n-1+n*lda] * damp;
  }

  for ( j = 1; j <= n + 1; j++ )
  {
    q[2*n+1+(j-1)*lda] = q[2*n+1+(j-1)*lda] + 1.0;
  }

  return;
}
//****************************************************************************80

double r8_huge ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_HUGE returns a "huge" R8.
//
//  Discussion:
//
//    The value returned by this function is NOT required to be the
//    maximum representable R8.  This value varies from machine to machine,
//    from compiler to compiler, and may cause problems when being printed.
//    We simply want a "very large" but non-infinite number.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 October 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, double R8_HUGE, a "huge" R8 value.
//
{
  double value;

  value = 1.0E+30;

  return value;
}
//****************************************************************************80

void r8mat_fs ( int lda, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_FS factors and solves a system with one right hand side.
//
//  Discussion:
//
//    This routine differs from R8MAT_FSS in two ways:
//    * only one right hand side is allowed;
//    * the input matrix A is not modified.
//
//    This routine uses partial pivoting, but no pivot vector is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 January 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int LDA, the leading dimension of the matrix.
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, double A[N*N], the coefficient matrix of the linear system.
//    The matrix is stored in an LDAxN array.
//
//    Input/output, double X[N], on input, the right hand side of the
//    linear system.  On output, the solution of the linear system.
//
{
  double *a2;
  int i;
  int ipiv;
  int j;
  int jcol;
  double piv;
  double t;

  a2 = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      a2[i+j*n] = a[i+j*lda];
    }
  }

  for ( jcol = 1; jcol <= n; jcol++ )
  {
//
//  Find the maximum element in column I.
//
    piv = fabs ( a2[jcol-1+(jcol-1)*n] );
    ipiv = jcol;
    for ( i = jcol+1; i <= n; i++ )
    {
      if ( piv < fabs ( a2[i-1+(jcol-1)*n] ) )
      {
        piv = fabs ( a2[i-1+(jcol-1)*n] );
        ipiv = i;
      }
    }

    if ( piv == 0.0 )
    {
      cout << "\n";
      cout << "R8MAT_FS - Fatal error!\n";
      cout << "  Zero pivot on step " << jcol << "\n";
      exit ( 1 );
    }
//
//  Switch rows JCOL and IPIV, and X.
//
    if ( jcol != ipiv )
    {
      for ( j = 1; j <= n; j++ )
      {
        t                  = a2[jcol-1+(j-1)*n];
        a2[jcol-1+(j-1)*n] = a2[ipiv-1+(j-1)*n];
        a2[ipiv-1+(j-1)*n] = t;
      }
      t         = x[jcol-1];
      x[jcol-1] = x[ipiv-1];
      x[ipiv-1] = t;
    }
//
//  Scale the pivot row.
//
    t = a2[jcol-1+(jcol-1)*n];
    a2[jcol-1+(jcol-1)*n] = 1.0;
    for ( j = jcol+1; j <= n; j++ )
    {
      a2[jcol-1+(j-1)*n] = a2[jcol-1+(j-1)*n] / t;
    }
    x[jcol-1] = x[jcol-1] / t;
//
//  Use the pivot row to eliminate lower entries in that column.
//
    for ( i = jcol+1; i <= n; i++ )
    {
      if ( a2[i-1+(jcol-1)*n] != 0.0 )
      {
        t = - a2[i-1+(jcol-1)*n];
        a2[i-1+(jcol-1)*n] = 0.0;
        for ( j = jcol+1; j <= n; j++ )
        {
          a2[i-1+(j-1)*n] = a2[i-1+(j-1)*n] + t * a2[jcol-1+(j-1)*n];
        }
        x[i-1] = x[i-1] + t * x[jcol-1];
      }
    }
  }
//
//  Back solve.
//
  for ( jcol = n; 2 <= jcol; jcol-- )
  {
    for ( i = 1; i < jcol; i++ )
    {
      x[i-1] = x[i-1] - a2[i-1+(jcol-1)*n] * x[jcol-1];
    }
  }

  delete [] a2;

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
