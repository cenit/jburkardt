# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <fstream>
# include <iostream>
# include <iomanip>

using namespace std;

# include "triangle_properties.hpp"

//****************************************************************************80

int i4_modp ( int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MODP returns the nonnegative remainder of I4 division.
//
//  Discussion:
//
//    If 
//      NREM = I4_MODP ( I, J ) 
//      NMULT = ( I - NREM ) / J
//    then
//      I = J * NMULT + NREM
//    where NREM is always nonnegative.
//
//    The MOD function computes a result with the same sign as the
//    quantity being divided.  Thus, suppose you had an angle A,
//    and you wanted to ensure that it was between 0 and 360.
//    Then mod(A,360) would do, if A was positive, but if A
//    was negative, your result would be between -360 and 0.
//
//    On the other hand, I4_MODP(A,360) is between 0 and 360, always.
//
//  Example:
//
//        I         J     MOD  I4_MODP   I4_MODP Factorization
// 
//      107        50       7       7    107 =  2 *  50 + 7
//      107       -50       7       7    107 = -2 * -50 + 7
//     -107        50      -7      43   -107 = -3 *  50 + 43
//     -107       -50      -7      43   -107 =  3 * -50 + 43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 May 1999
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the number to be divided.
//
//    Input, int J, the number that divides I.
//
//    Output, int I4_MODP, the nonnegative remainder when I is 
//    divided by J.
//
{
  int value;

  if ( j == 0 )
  {
    cout << "\n";
    cout << "I4_MODP - Fatal error!\n";
    cout << "  I4_MODP ( I, J ) called with J = " << j << "\n";
    exit ( 1 );
  }

  value = i % j;

  if ( value < 0 )
  {
    value = value + abs ( j );
  }

  return value;
}
//****************************************************************************80

int i4_wrap ( int ival, int ilo, int ihi )

//****************************************************************************80
//
//  Purpose:
//
//    I4_WRAP forces an I4 to lie between given limits by wrapping.
//
//  Example:
//
//    ILO = 4, IHI = 8
//
//    I   Value
//
//    -2     8
//    -1     4
//     0     5
//     1     6
//     2     7
//     3     8
//     4     4
//     5     5
//     6     6
//     7     7
//     8     8
//     9     4
//    10     5
//    11     6
//    12     7
//    13     8
//    14     4
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 December 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int IVAL, an integer value.
//
//    Input, int ILO, IHI, the desired bounds for the integer value.
//
//    Output, int I4_WRAP, a "wrapped" version of IVAL.
//
{
  int jhi;
  int jlo;
  int value;
  int wide;

  if ( ilo <= ihi )
  {
    jlo = ilo;
    jhi = ihi;
  }
  else
  {
    jlo = ihi;
    jhi = ilo;
  }

  wide = jhi + 1 - jlo;

  if ( wide == 1 )
  {
    value = jlo;
  }
  else
  {
    value = jlo + i4_modp ( ival - jlo, wide );
  }

  return value;
}
//****************************************************************************80

bool line_exp_is_degenerate_nd ( int dim_num, double p1[], double p2[] )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_EXP_IS_DEGENERATE_ND finds if an explicit line is degenerate in ND.
//
//  Discussion:
//
//    The explicit form of a line in ND is:
//
//      the line through the points P1 and P2.
//
//    An explicit line is degenerate if the two defining points are equal.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, double P1[DIM_NUM], P2[DIM_NUM], two points on the line.
//
//    Output, bool LINE_EXP_IS_DEGENERATE_ND, is TRUE if the line
//    is degenerate.
//
{
  bool value;

  value = r8vec_eq ( dim_num, p1, p2 );

  return value;
}
//****************************************************************************80

double *line_exp_perp ( double p1[2], double p2[2], double p3[2], 
  bool &flag )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_EXP_PERP_2D computes a line perpendicular to a line and through a point.
//
//  Discussion:
//
//    The explicit form of a line in 2D is:
//
//      the line through P1 and P2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double P1[2], P2[2], two points on the given line.
//
//    Input, double P3[2], a point not on the given line, through which the
//    perpendicular must pass.
//
//    Output, double LINE_EXP_PERP[2], a point on the given line, such that the line
//    through P3 and P4 is perpendicular to the given line.
//
//    Output, bool &FLAG, is TRUE if the point could not be computed.
//
{
  double bot;
  double *p4;
  double t;

  p4 = new double[2];

  bot = pow ( p2[0] - p1[0], 2 ) + pow ( p2[1] - p1[1], 2 );

  if ( bot == 0.0 )
  {
    p4[0] = r8_huge ( );
    p4[1] = r8_huge ( );
    flag = true;
    return p4;
  }
//
//  (P3-P1) dot (P2-P1) = Norm(P3-P1) * Norm(P2-P1) * Cos(Theta).
//
//  (P3-P1) dot (P2-P1) / Norm(P3-P1)^2 = normalized coordinate T
//  of the projection of (P3-P1) onto (P2-P1).
//
  t = ( ( p1[0] - p3[0] ) * ( p1[0] - p2[0] ) 
      + ( p1[1] - p3[1] ) * ( p1[1] - p2[1] ) ) / bot;

  p4[0] = p1[0] + t * ( p2[0] - p1[0] );
  p4[1] = p1[1] + t * ( p2[1] - p1[1] );

  flag = false;

  return p4;
}
//****************************************************************************80

void line_exp2imp ( double p1[2], double p2[2], double &a, double &b, 
  double &c )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_EXP2IMP_2D converts an explicit line to implicit form in 2D.
//
//  Discussion:
//
//    The explicit form of a line in 2D is:
//
//      the line through P1 and P2
//
//    The implicit form of a line in 2D is:
//
//      A * X + B * Y + C = 0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 June 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double P1[2], P2[2], two distinct points on the line. 
//
//    Output, double &A, &B, &C, three coefficients which describe
//    the line that passes through P1 and P2.
//
{
//
//  Take care of degenerate cases.
//
  if ( r8vec_eq ( 2, p1, p2 ) )
  {
    cout << "\n";
    cout << "LINE_EXP2IMP - Fatal error!\n";
    cout << "  P1 = P2\n";
    cout << "  P1 = " << p1[0] << " " << p1[1] << "\n";
    cout << "  P2 = " << p2[0] << " " << p2[1] << "\n";
    exit ( 1 );
  }

  a = p2[1] - p1[1];
  b = p1[0] - p2[0];
  c = p2[0] * p1[1] - p1[0] * p2[1];

  return;
}
//****************************************************************************80

bool line_imp_is_degenerate ( double a, double b, double c )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_IMP_IS_DEGENERATE finds if an implicit point is degenerate in 2D.
//
//  Discussion:
//
//    The implicit form of a line in 2D is:
//
//      A * X + B * Y + C = 0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double A, B, C, the implicit line parameters.
//
//    Output, bool LINE_IMP_IS_DEGENERATE, is true if the
//    line is degenerate.
//
{
  bool value;

  value = ( a * a + b * b == 0.0 );

  return value;
}
//****************************************************************************80

void lines_exp_int ( double p1[2], double p2[2], double p3[2], double p4[2], 
  int &ival, double p[2] )

//****************************************************************************80
//
//  Purpose:
//
//    LINES_EXP_INT determines where two explicit lines intersect in 2D.
//
//  Discussion:
//
//    The explicit form of a line in 2D is:
//
//      the line through P1 and P2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 June 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double P1[2], P2[2], define the first line.
//
//    Input, double P3[2], P4[2], define the second line.
//
//    Output, int &IVAL, reports on the intersection:
//    0, no intersection, the lines may be parallel or degenerate.
//    1, one intersection point, returned in P.
//    2, infinitely many intersections, the lines are identical.
//
//    Output, double P[2], if IVAl = 1, then P contains
//    the intersection point.  Otherwise, P = 0.
//
{
  double a1 = 0.0;
  double a2 = 0.0;
  double b1 = 0.0;
  double b2 = 0.0;
  double c1 = 0.0;
  double c2 = 0.0;
  double point_1 = 0.0;
  double point_2 = 0.0;

  ival = 0;
  p[0] = 0.0;
  p[1] = 0.0;
//
//  Check whether either line is a point.
//
  if ( r8vec_eq ( 2, p1, p2 ) )
  {
    point_1 = true;
  }
  else
  {
    point_1 = false;
  }

  if ( r8vec_eq ( 2, p3, p4 ) )
  {
    point_2 = true;
  }
  else
  {
    point_2 = false;
  }
//
//  Convert the lines to ABC format.
//
  if ( ! point_1 )
  {
    line_exp2imp ( p1, p2, a1, b1, c1 );
  }

  if ( ! point_2 )
  {
    line_exp2imp ( p3, p4, a2, b2, c2 );
  }
//
//  Search for intersection of the lines.
//
  if ( point_1 && point_2 )
  {
    if ( r8vec_eq ( 2, p1, p3 ) )
    {
      ival = 1;
      r8vec_copy ( 2, p1, p );
    }
  }
  else if ( point_1 )
  {
    if ( a2 * p1[0] + b2 * p1[1] == c2 )
    {
      ival = 1;
      r8vec_copy ( 2, p1, p );
    }
  }
  else if ( point_2 )
  {
    if ( a1 * p3[0] + b1 * p3[1] == c1 )
    {
      ival = 1;
      r8vec_copy ( 2, p3, p );
    }
  }
  else
  {
    lines_imp_int ( a1, b1, c1, a2, b2, c2, ival, p );
  }

  return;
}
//****************************************************************************80

void lines_imp_int ( double a1, double b1, double c1, double a2, double b2, 
  double c2, int &ival, double p[2] )

//****************************************************************************80
//
//  Purpose:
//
//    LINES_IMP_INT determines where two implicit lines intersect in 2D.
//
//  Discussion:
//
//    The implicit form of a line in 2D is:
//
//      A * X + B * Y + C = 0
//
//    22 May 2004: Thanks to John Asmuth for pointing out that the 
//    B array was not being deallocated on exit.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 June 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double A1, B1, C1, define the first line.
//    At least one of A1 and B1 must be nonzero.
//
//    Input, double A2, B2, C2, define the second line.
//    At least one of A2 and B2 must be nonzero.
//
//    Output, int &IVAL, reports on the intersection.
//    -1, both A1 and B1 were zero.
//    -2, both A2 and B2 were zero.
//     0, no intersection, the lines are parallel.
//     1, one intersection point, returned in P.
//     2, infinitely many intersections, the lines are identical.
//
//    Output, double P[2], if IVAL = 1, then P contains
//    the intersection point.  Otherwise, P = 0.
//
{
  double a[2*2];
  double *b;

  p[0] = 0.0;
  p[1] = 0.0;
//
//  Refuse to handle degenerate lines.
//
  if ( a1 == 0.0 && b1 == 0.0 )
  {
    ival = - 1;
    return;
  }
  else if ( a2 == 0.0 && b2 == 0.0 )
  {
    ival = - 2;
    return;
  }
//
//  Set up a linear system, and compute its inverse.
//
  a[0+0*2] = a1;
  a[0+1*2] = b1;
  a[1+0*2] = a2;
  a[1+1*2] = b2;

  b = r8mat_inverse_2d ( a );
//
//  If the inverse exists, then the lines intersect.
//  Multiply the inverse times -C to get the intersection point.
//
  if ( b != NULL )
  {

    ival = 1;
    p[0] = - b[0+0*2] * c1 - b[0+1*2] * c2;
    p[1] = - b[1+0*2] * c1 - b[1+1*2] * c2;
  }
//
//  If the inverse does not exist, then the lines are parallel
//  or coincident.  Check for parallelism by seeing if the
//  C entries are in the same ratio as the A or B entries.
//
  else
  {

    ival = 0;

    if ( a1 == 0.0 )
    {
      if ( b2 * c1 == c2 * b1 )
      {
        ival = 2;
      }
    }
    else
    {
      if ( a2 * c1 == c2 * a1 )
      {
        ival = 2;
      }
    }
  }

  delete [] b;

  return;
}
//****************************************************************************80

double r8_acos ( double c )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ACOS computes the arc cosine function, with argument truncation.
//
//  Discussion:
//
//    If you call your system ACOS routine with an input argument that is
//    outside the range [-1.0, 1.0 ], you may get an unpleasant surprise.
//    This routine truncates arguments outside the range.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 June 2002
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double C, the argument, the cosine of an angle.
//
//    Output, double R8_ACOS, an angle whose cosine is C.
//
{
  const double r8_pi = 3.141592653589793;
  double value;

  if ( c <= -1.0 )
  {
    value = r8_pi;
  }
  else if ( 1.0 <= c )
  {
    value = 0.0;
  }
  else
  {
    value = acos ( c );
  }
  return value;
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

double r8_max ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MAX returns the maximum of two R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, Y, the quantities to compare.
//
//    Output, double R8_MAX, the maximum of X and Y.
//
{
  double value;

  if ( y < x )
  {
    value = x;
  } 
  else
  {
    value = y;
  }
  return value;
}
//****************************************************************************80

double r8_min ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MIN returns the minimum of two R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, Y, the quantities to compare.
//
//    Output, double R8_MIN, the minimum of X and Y.
//
{
  double value;

  if ( y < x )
  {
    value = y;
  } 
  else
  {
    value = x;
  }
  return value;
}
//****************************************************************************80

double r8_uniform_01 ( int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_01 returns a unit pseudorandom R8.
//
//  Discussion:
//
//    This routine implements the recursion
//
//      seed = ( 16807 * seed ) mod ( 2^31 - 1 )
//      u = seed / ( 2^31 - 1 )
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
//    Input/output, int &SEED, the "seed" value.  Normally, this
//    value should not be 0.  On output, SEED has been updated.
//
//    Output, double R8_UNIFORM_01, a new pseudorandom variate, 
//    strictly between 0 and 1.
//
{
  const int i4_huge = 2147483647;
  int k;
  double r;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "R8_UNIFORM_01 - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + i4_huge;
  }
  r = ( double ) ( seed ) * 4.656612875E-10;

  return r;
}
//****************************************************************************80

double *r8mat_inverse_2d ( double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_INVERSE_2D inverts a 2 by 2 R8MAT using Cramer's rule.
//
//  Discussion:
//
//    The two dimensional array is stored as a one dimensional vector,
//    by COLUMNS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double A[2*2], the matrix to be inverted.
//
//    Output, double R8MAT_INVERSE_2D[2*2], the inverse of the matrix A.
//
{
  double *b;
  double det;
//
//  Compute the determinant of A.
//
  det = a[0+0*2] * a[1+1*2] - a[0+1*2] * a[1+0*2];
//
//  If the determinant is zero, bail out.
//
  if ( det == 0.0 )
  {
    return NULL;
  }
//
//  Compute the entries of the inverse matrix using an explicit formula.
//
  b = new double[2*2];

  b[0+0*2] = + a[1+1*2] / det;
  b[0+1*2] = - a[0+1*2] / det;
  b[1+0*2] = - a[1+0*2] / det;
  b[1+1*2] = + a[0+0*2] / det;

  return b;
}
//****************************************************************************80

int r8mat_solve ( int n, int rhs_num, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_SOLVE uses Gauss-Jordan elimination to solve an N by N linear system.
//
//  Discussion: 							    
//
//    An R8MAT is a doubly dimensioned array of R8 values,  stored as a vector 
//    in column-major order.
//
//    Entry A(I,J) is stored as A[I+J*N]
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 August 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int RHS_NUM, the number of right hand sides.  RHS_NUM
//    must be at least 0.
//
//    Input/output, double A[N*(N+RHS_NUM)], contains in rows and columns 1
//    to N the coefficient matrix, and in columns N+1 through
//    N+RHS_NUM, the right hand sides.  On output, the coefficient matrix
//    area has been destroyed, while the right hand sides have
//    been overwritten with the corresponding solutions.
//
//    Output, int R8MAT_SOLVE, singularity flag.
//    0, the matrix was not singular, the solutions were computed;
//    J, factorization failed on step J, and the solutions could not
//    be computed.
//
{
  double apivot;
  double factor;
  int i;
  int ipivot;
  int j;
  int k;
  double temp;

  for ( j = 0; j < n; j++ )
  {
//
//  Choose a pivot row.
//
    ipivot = j;
    apivot = a[j+j*n];

    for ( i = j; i < n; i++ )
    {
      if ( fabs ( apivot ) < fabs ( a[i+j*n] ) )
      {
        apivot = a[i+j*n];
        ipivot = i;
      }
    }

    if ( apivot == 0.0 )
    {
      return j;
    }
//
//  Interchange.
//
    for ( i = 0; i < n + rhs_num; i++ )
    {
      temp          = a[ipivot+i*n];
      a[ipivot+i*n] = a[j+i*n];
      a[j+i*n]      = temp;
    }
//
//  A(J,J) becomes 1.
//
    a[j+j*n] = 1.0;
    for ( k = j; k < n + rhs_num; k++ )
    {
      a[j+k*n] = a[j+k*n] / apivot;
    }
//
//  A(I,J) becomes 0.
//
    for ( i = 0; i < n; i++ )
    {
      if ( i != j )
      {
        factor = a[i+j*n];
        a[i+j*n] = 0.0;
        for ( k = j; k < n + rhs_num; k++ )
        {
          a[i+k*n] = a[i+k*n] - factor * a[j+k*n];
        }
      }
    }
  }

  return 0;
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
//    An R8MAT is a doubly dimensioned array of R8 values,  stored as a vector 
//    in column-major order.
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], an M by N matrix to be printed.
//
//    Input, string TITLE, an optional title.
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

void r8vec_copy ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_COPY copies an R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vectors.
//
//    Input, double A1[N], the vector to be copied.
//
//    Input, double A2[N], the copy of A1.
//
{
  int i;

  for ( i = 0; i < n; i++ )
  {
    a2[i] = a1[i];
  }
  return;
}
//****************************************************************************80

bool r8vec_eq ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_EQ is true two R8VEC's are equal.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 August 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vectors.
//
//    Input, double A1[N], A2[N], two vectors to compare.
//
//    Output, bool R8VEC_EQ.
//    R8VEC_EQ is TRUE if every pair of elements A1(I) and A2(I) are equal,
//    and FALSE otherwise.
//
{
  int i;

  for ( i = 0; i < n; i++ )
  {
    if ( a1[i] != a2[i] )
    {
      return false;
    }
  }
  return true;
}
//****************************************************************************80

double r8vec_norm ( int dim_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM returns the Euclidean length of an R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 August 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, double X[DIM_NUM], the vector.
//
//    Output, double R8VEC_NORM, the Euclidean length of the vector.
//
{
  int i;
  double value;

  value = 0.0;
  for ( i = 0; i < dim_num; i++ )
  {
    value = value + pow ( x[i], 2 );
  }
  value = sqrt ( value );

  return value;
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

double segment_point_dist ( double p1[2], double p2[2], double p[2] )

//****************************************************************************80
//
//  Purpose:
//
//    SEGMENT_POINT_DIST: distance ( line segment, point ) in 2D.
//
//  Discussion:
//
//    A line segment is the finite portion of a line that lies between
//    two points.
//
//    The nearest point will satisfy the condition
//
//      PN = (1-T) * P1 + T * P2.
//
//    T will always be between 0 and 1.
//
//    Thanks to Kirill Speransky for pointing out that a previous version
//    of this routine was incorrect, 02 May 2006.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 May 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double P1[2], P2[2], the endpoints of the line segment.
//
//    Input, double P[2], the point whose nearest neighbor on the line
//    segment is to be determined.
//
//    Output, double SEGMENT_POINT_DIST, the distance from the point
//    to the line segment.
//
{
  double bot;
  double dist;
  int i;
  double t;
  double pn[2];
//
//  If the line segment is actually a point, then the answer is easy.
//
  if ( r8vec_eq ( 2, p1, p2 ) )
  {
    t = 0.0;
  }
  else
  {
    bot = 0.0;
    for ( i = 0; i < 2; i++ )
    {
      bot = bot + pow ( p2[i] - p1[i], 2 );
    }

    t = 0.0;
    for ( i = 0; i < 2; i++ )
    {
      t = t + ( p[i] - p1[i] ) * ( p2[i] - p1[i] );
    }

    t = t / bot;
    t = r8_max ( t, 0.0 );
    t = r8_min ( t, 1.0 );
  }

  for ( i = 0; i < 2; i++ )
  {
    pn[i] = p1[i] + t * ( p2[i] - p1[i] );
  }

  dist = 0.0;
  for ( i = 0; i < 2; i++ )
  {
    dist = dist + pow ( p[i] - pn[i], 2 );
  }
  dist = sqrt ( dist );

  return dist;
}
//****************************************************************************80

void segment_point_near ( double p1[2], double p2[2], double p[2],
  double pn[2], double &dist, double &t )

//****************************************************************************80
//
//  Purpose:
//
//    SEGMENT_POINT_NEAR finds the point on a line segment nearest a point in 2D.
//
//  Discussion:
//
//    A line segment is the finite portion of a line that lies between
//    two points.
//
//    The nearest point will satisfy the condition:
//
//      PN = (1-T) * P1 + T * P2.
//
//    and T will always be between 0 and 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double P1[2], P2[2], the two endpoints of the line segment.
//
//    Input, double P[2], the point whose nearest neighbor
//    on the line segment is to be determined.
//
//    Output, double PN[2], the point on the line segment which is nearest P.
//
//    Output, double &DIST, the distance from the point to the nearest point
//    on the line segment.
//
//    Output, double &T, the relative position of the point Pn to the
//    points P1 and P2.
//
{
  double bot;
  int i;
//
//  If the line segment is actually a point, then the answer is easy.
//
  if ( r8vec_eq ( 2, p1, p2 ) )
  {
    t = 0.0;
  }
  else
  {
    bot = 0.0;
    for ( i = 0; i < 2; i++ )
    {
      bot = bot + pow ( p2[i] - p1[i], 2 );
    }

    t = 0.0;
    for ( i = 0; i < 2; i++ )
    {
      t = t + ( p[i] - p1[i] ) * ( p2[i] - p1[i] );
    }

    t = t / bot;
    t = r8_max ( t, 0.0 );
    t = r8_min ( t, 1.0 );
  }

  for ( i = 0; i < 2; i++ )
  {
    pn[i] = p1[i] + t * ( p2[i] - p1[i] );
  }

  dist = 0.0;
  for ( i = 0; i < 2; i++ )
  {
    dist = dist + pow ( p[i] - pn[i], 2 );
  }
  dist = sqrt ( dist );

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

double *triangle_angles ( double t[2*3] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_ANGLES computes the angles of a triangle in 2D.
//
//  Discussion:
//
//    The law of cosines is used:
//
//      C * C = A * A + B * B - 2 * A * B * COS ( GAMMA )
//
//    where GAMMA is the angle opposite side C.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Output, double TRIANGLE_ANGLES[3], the angles opposite
//    sides P1-P2, P2-P3 and P3-P1, in radians.
//
{
  double a;
  double *angle;
  double b;
  double c;
  double r8_pi = 3.141592653589793;

  angle = new double[3];

  a = sqrt ( pow ( t[0+1*2] - t[0+0*2], 2 ) 
           + pow ( t[1+1*2] - t[1+0*2], 2 ) );

  b = sqrt ( pow ( t[0+2*2] - t[0+1*2], 2 ) 
           + pow ( t[1+2*2] - t[1+1*2], 2 ) );

  c = sqrt ( pow ( t[0+0*2] - t[0+2*2], 2 ) 
           + pow ( t[1+0*2] - t[1+2*2], 2 ) );
//
//  Take care of a ridiculous special case.
//
  if ( a == 0.0 && b == 0.0 && c == 0.0 )
  {
    angle[0] = 2.0 * r8_pi / 3.0;
    angle[1] = 2.0 * r8_pi / 3.0;
    angle[2] = 2.0 * r8_pi / 3.0;
    return angle;
  }

  if ( c == 0.0 || a == 0.0 )
  {
    angle[0] = r8_pi;
  }
  else
  {
    angle[0] = r8_acos ( ( c * c + a * a - b * b ) / ( 2.0 * c * a ) );
  }

  if ( a == 0.0 || b == 0.0 )
  {
    angle[1] = r8_pi;
  }
  else
  {
    angle[1] = r8_acos ( ( a * a + b * b - c * c ) / ( 2.0 * a * b ) );
  }

  if ( b == 0.0 || c == 0.0 )
  {
    angle[2] = r8_pi;
  }
  else
  {
    angle[2] = r8_acos ( ( b * b + c * c - a * a ) / ( 2.0 * b * c ) );
  }

  return angle;
}
//****************************************************************************80

double triangle_area ( double t[2*3] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_AREA computes the area of a triangle in 2D.
//
//  Discussion:
//
//    If the triangle's vertices are given in counter clockwise order,
//    the area will be positive.  If the triangle's vertices are given
//    in clockwise order, the area will be negative!
//
//    An earlier version of this routine always returned the absolute
//    value of the computed area.  I am convinced now that that is
//    a less useful result!  For instance, by returning the signed 
//    area of a triangle, it is possible to easily compute the area 
//    of a nonconvex polygon as the sum of the (possibly negative) 
//    areas of triangles formed by node 1 and successive pairs of vertices.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 October 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the vertices of the triangle.
//
//    Output, double TRIANGLE_AREA, the area of the triangle.
//
{
  double area;

  area = 0.5 * ( 
    t[0+0*2] * ( t[1+1*2] - t[1+2*2] ) + 
    t[0+1*2] * ( t[1+2*2] - t[1+0*2] ) + 
    t[0+2*2] * ( t[1+0*2] - t[1+1*2] ) );
 
  return area;
}
//****************************************************************************80

double *triangle_centroid ( double t[2*3] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_CENTROID computes the centroid of a triangle in 2D.
//
//  Discussion:
//
//    The centroid of a triangle can also be considered the center
//    of gravity, assuming that the triangle is made of a thin uniform
//    sheet of massy material.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Adrian Bowyer, John Woodwark,
//    A Programmer's Geometry,
//    Butterworths, 1983.
//
//  Parameters:
//
//    Input, double T[2*3], the vertices of the triangle.
//
//    Output, double TRIANGLE_CENTROID[2], the coordinates of the centroid.
//
{
  double *centroid;

  centroid = new double[2];

  centroid[0] = ( t[0+0*2] + t[0+1*2] + t[0+2*2] ) / 3.0;
  centroid[1] = ( t[1+0*2] + t[1+1*2] + t[1+2*2] ) / 3.0;
 
  return centroid;
}
//****************************************************************************80

void triangle_circumcircle ( double t[2*3], double &r, double pc[2] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_CIRCUMCIRCLE_2D computes the circumcircle of a triangle in 2D.
//
//  Discussion:
//
//    The circumcenter of a triangle is the center of the circumcircle, the
//    circle that passes through the three vertices of the triangle.
//
//    The circumcircle contains the triangle, but it is not necessarily the
//    smallest triangle to do so.
//
//    If all angles of the triangle are no greater than 90 degrees, then
//    the center of the circumscribed circle will lie inside the triangle.
//    Otherwise, the center will lie outside the triangle.
//
//    The circumcenter is the intersection of the perpendicular bisectors
//    of the sides of the triangle.
//
//    In geometry, the circumcenter of a triangle is often symbolized by "O".
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Output, double &R, PC[2], the circumradius, and the coordinates of the 
//    circumcenter of the triangle.
//
{
  double a;
  double b;
  double bot;
  double c;
  double top1;
  double top2;
//
//  Circumradius.
//
  a = sqrt ( pow ( t[0+1*2] - t[0+0*2], 2 ) + pow ( t[1+1*2] - t[1+0*2], 2 ) );
  b = sqrt ( pow ( t[0+2*2] - t[0+1*2], 2 ) + pow ( t[1+2*2] - t[1+1*2], 2 ) );
  c = sqrt ( pow ( t[0+0*2] - t[0+2*2], 2 ) + pow ( t[1+0*2] - t[1+2*2], 2 ) );

  bot = ( a + b + c ) * ( - a + b + c ) * (   a - b + c ) * (   a + b - c );

  if ( bot <= 0.0 )
  {
    r = -1.0;
    pc[0] = 0.0;
    pc[1] = 0.0;
    return;
  }

  r = a * b * c / sqrt ( bot );
//
//  Circumcenter.
//
  top1 =  ( t[1+1*2] - t[1+0*2] ) * c * c - ( t[1+2*2] - t[1+0*2] ) * a * a;
  top2 =  ( t[0+1*2] - t[0+0*2] ) * c * c - ( t[0+2*2] - t[0+0*2] ) * a * a;
  bot  =  ( t[1+1*2] - t[1+0*2] ) * ( t[0+2*2] - t[0+0*2] )  
        - ( t[1+2*2] - t[1+0*2] ) * ( t[0+1*2] - t[0+0*2] );

  pc[0] = t[0+0*2] + 0.5 * top1 / bot;
  pc[1] = t[1+0*2] - 0.5 * top2 / bot;

  return;
}
//****************************************************************************80

bool triangle_contains_point ( double t[2*3], double p[2] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_CONTAINS_POINT finds if a point is inside a triangle in 2D.
//
//  Discussion:
//
//    The routine assumes that the vertices are given in counter clockwise
//    order.  If the triangle vertices are actually given in clockwise
//    order, this routine will behave as though the triangle contains
//    no points whatsoever!
//
//    The routine determines if P is "to the right of" each of the lines
//    that bound the triangle.  It does this by computing the cross product
//    of vectors from a vertex to its next vertex, and to P.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 June 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//    The vertices should be given in counter clockwise order.
//
//    Input, double P[2], the point to be checked.
//
//    Output, bool TRIANGLE_CONTAINS_POINT, is TRUE if P is inside
//    the triangle or on its boundary.
//
{
  int j;
  int k;

  for ( j = 0; j < 3; j++ )
  {
    k = ( j + 1 ) % 3;
    if ( 0.0 < ( p[0] - t[0+j*2] ) * ( t[1+k*2] - t[1+j*2] )
             - ( p[1] - t[1+j*2] ) * ( t[0+k*2] - t[0+j*2] ) )
    {
      return false;
    }
  }

  return true;
}
//****************************************************************************80

double triangle_diameter ( double t[2*3] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_DIAMETER computes the diameter of a triangle in 2D.
//
//  Discussion:
//
//    The diameter of a triangle is the diameter of the smallest circle
//    that can be drawn around the triangle.  At least two of the vertices
//    of the triangle will intersect the circle, but not necessarily
//    all three!
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Output, double TRIANGLE_DIAMETER, the diameter of the triangle.
//
{
  double a;
  double b;
  double c;
  double diam;
  double s;
//
//  Compute the (squares of) the lengths of the sides.
//
  a = sqrt ( pow ( t[0+1*2] - t[0+0*2], 2 ) + pow ( t[1+1*2] - t[1+0*2], 2 ) );
  b = sqrt ( pow ( t[0+2*2] - t[0+1*2], 2 ) + pow ( t[1+2*2] - t[1+1*2], 2 ) );
  c = sqrt ( pow ( t[0+0*2] - t[0+2*2], 2 ) + pow ( t[1+0*2] - t[1+2*2], 2 ) );
//
//  Take care of a zero side.
//
  if ( a == 0.0 )
  {
    return sqrt ( b );
  }
  else if ( b == 0.0 )
  {
    return sqrt ( c );
  }
  else if ( c == 0.0 )
  {
    return sqrt ( a );
  }
//
//  Make A the largest.
//
  if ( a < b )
  {
    s = a;
    a = b;
    b = s;
  }

  if ( a < c )
  {
    s = a;
    a = c;
    c = s;
  }
//
//  If A is very large...
//
  if ( b + c < a )
  {
    diam = sqrt ( a );
  }
  else
  {
    a = sqrt ( a );
    b = sqrt ( b );
    c = sqrt ( c );
    diam = 2.0 * a * b * c / sqrt ( ( a + b + c ) * ( - a + b + c ) 
      * ( a - b + c ) * ( a + b - c ) );
  }

  return diam;
}
//****************************************************************************80

double *triangle_edge_length ( double t[2*3] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_EDGE_LENGTH returns edge lengths of a triangle in 2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 August 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Output, double TRIANGLE_EDGE_LENGTH[3], the length of the edges.
//
{
  double *edge_length;
  int j1;
  int j2;

  edge_length = new double[3];

  for ( j1 = 0; j1 < 3; j1++ )
  {
    j2 = i4_wrap ( j1 + 1, 0, 2 );
    edge_length[j1] = sqrt ( pow ( t[0+j2*2] - t[0+j1*2], 2 ) 
                           + pow ( t[1+j2*2] - t[1+j1*2], 2 ) );
  }

  return edge_length;
}
//****************************************************************************80

void triangle_incircle ( double t[2*3], double &r, double pc[2] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_INCIRCLE_2D computes the inscribed circle of a triangle in 2D.
//
//  Discussion:
//
//    The inscribed circle of a triangle is the largest circle that can
//    be drawn inside the triangle.  It is tangent to all three sides,
//    and the lines from its center to the vertices bisect the angles
//    made by each vertex.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Adrian Bowyer, John Woodwark,
//    A Programmer's Geometry,
//    Butterworths, 1983.
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Output, double &R, the radius of the inscribed circle.
//
//    Output, double PC[2], the center of the inscribed circle.
//
{
  double perim;
  double s12;
  double s23;
  double s31;

  s12 = sqrt ( pow ( t[0+1*2] - t[0+0*2], 2 ) 
             + pow ( t[1+1*2] - t[1+0*2], 2 ) );
  s23 = sqrt ( pow ( t[0+2*2] - t[0+1*2], 2 ) 
             + pow ( t[1+2*2] - t[1+1*2], 2 ) );
  s31 = sqrt ( pow ( t[0+0*2] - t[0+2*2], 2 ) 
             + pow ( t[1+0*2] - t[1+2*2], 2 ) );

  perim = s12 + s23 + s31;

  if ( perim == 0.0 )
  {
    r = 0.0;
    pc[0] = t[0+0*2];
    pc[1] = t[1+0*2];
  }
  else
  {
    pc[0] = ( s23 * t[0+0*2] + s31 * t[0+1*2] + s12 * t[0+2*2] ) / perim;
    pc[1] = ( s23 * t[1+0*2] + s31 * t[1+1*2] + s12 * t[1+2*2] ) / perim;

    r = 0.5 * sqrt (
        ( - s12 + s23 + s31 )
      * ( + s12 - s23 + s31 )
      * ( + s12 + s23 - s31 ) / perim );
  }
  return;
}
//****************************************************************************80

int triangle_orientation ( double t[2*3] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_ORIENTATION determines the orientation of a triangle in 2D.
//
//  Discussion:
//
//    Three distinct non-colinear points in the plane define a circle.
//    If the points are visited in the order (x1,y1), (x2,y2), and then
//    (x3,y3), this motion defines a clockwise or counter clockwise
//    rotation along the circle.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Output, int TRIANGLE_ORIENTATION, reports if the three points lie
//    clockwise on the circle that passes through them.  The possible
//    return values are:
//    0, the points are distinct, noncolinear, and lie counter clockwise
//    on their circle.
//    1, the points are distinct, noncolinear, and lie clockwise
//    on their circle.
//    2, the points are distinct and colinear.
//    3, at least two of the points are identical.
//
{
  double det;
  int value = 0;

  if ( r8vec_eq ( 2, t+0*2, t+1*2 ) || 
       r8vec_eq ( 2, t+1*2, t+2*2 ) || 
       r8vec_eq ( 2, t+2*2, t+0*2 ) )
  {
    value = 3;
    return value;
  }

  det = ( t[0+0*2] - t[0+2*2] ) * ( t[1+1*2] - t[1+2*2] ) 
      - ( t[0+1*2] - t[0+2*2] ) * ( t[1+0*2] - t[1+2*2] );

  if ( det == 0.0 )
  {
    value = 2;
  }
  else if ( det < 0.0 )
  {
    value = 1;
  }
  else if ( 0.0 < det )
  {
    value = 0;
  }
  return value;
}
//****************************************************************************80

void triangle_orthocenter ( double t[2*3], double p[2], bool &flag )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_ORTHOCENTER computes the orthocenter of a triangle in 2D.
//
//  Discussion:
//
//    The orthocenter is defined as the intersection of the three altitudes
//    of a triangle.
//
//    An altitude of a triangle is the line through a vertex of the triangle
//    and perpendicular to the opposite side.
//
//    In geometry, the orthocenter of a triangle is often symbolized by "H".
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Adrian Bowyer, John Woodwark,
//    A Programmer's Geometry,
//    Butterworths, 1983.
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Output, double P[2], the coordinates of the orthocenter of the triangle.
//
//    Output, bool &FLAG, is TRUE if the point could not be computed.
//
{
  int ival;
  double *p23;
  double *p31;
//
//  Determine a point P23 common to the line through P2 and P3 and
//  its perpendicular through P1.
//
  p23 = line_exp_perp ( t+1*2, t+2*2, t+0*2, flag );

  if ( flag )
  {
    p[0] = r8_huge ( );
    p[1] = r8_huge ( );
    delete [] p23;
    return;
  }
//
//  Determine a point P31 common to the line through P3 and P1 and
//  its perpendicular through P2.
//
  p31 = line_exp_perp ( t+2*2, t+0*2, t+1*2, flag );
  if ( flag )
  {
    p[0] = r8_huge ( );
    p[1] = r8_huge ( );
    delete [] p23;
    delete [] p31;
    return;
  }
//
//  Determine P, the intersection of the lines through P1 and P23, and
//  through P2 and P31.
//
  lines_exp_int ( t+0*2, p23, t+1*2, p31, ival, p );

  if ( ival != 1 )
  {
    p[0] = r8_huge ( );
    p[1] = r8_huge ( );
    flag = true;
    delete [] p23;
    delete [] p31;
    return;
  }
  delete [] p23;
  delete [] p31;

  return;
}
//****************************************************************************80

double triangle_point_dist ( double t[2*3], double p[2] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_POINT_DIST: distance ( triangle, point ) in 2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 June 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Input, double P[2], the point which is to be checked.
//
//    Output, double TRIANGLE_POINT_DIST, the distance from the point to the triangle.
//    DIST is zero if the point lies exactly on the triangle.
//
{
  double value;

  value =                 segment_point_dist ( t+0*2, t+1*2, p );
  value = r8_min ( value, segment_point_dist ( t+1*2, t+2*2, p ) );
  value = r8_min ( value, segment_point_dist ( t+2*2, t+0*2, p ) );

  return value;
}
//****************************************************************************80

void triangle_point_near ( double t[2*3], double p[2], double pn[2], 
  double &dist )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_POINT_NEAR computes the nearest triangle point to a point in 2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 June 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Input, double P[2], the point whose nearest neighbor
//    on the line is to be determined.
//
//    Output, double PN[2], the nearest point to P.
//
//    Output, double &DIST, the distance from the point to the triangle.
//
{
  double dist12;
  double dist23;
  double dist31;
  double tval;
  double pn12[2];
  double pn23[2];
  double pn31[2];
//
//  Find the distance to each of the line segments that make up the edges
//  of the triangle.
//
  segment_point_near ( t+0*2, t+1*2, p, pn12, dist12, tval );

  segment_point_near ( t+1*2, t+2*2, p, pn23, dist23, tval );

  segment_point_near ( t+2*2, t+0*2, p, pn31, dist31, tval );

  if ( dist12 <= dist23 && dist12 <= dist31 )
  {
    dist = dist12;
    r8vec_copy ( 2, pn12, pn );
  }
  else if ( dist23 <= dist12 && dist23 <= dist31 )
  {
    dist = dist23;
    r8vec_copy ( 2, pn23, pn );
  }
  else
  {
    dist = dist31;
    r8vec_copy ( 2, pn31, pn );
  }

  return;
}
//****************************************************************************80

double triangle_quality ( double t[2*3] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_QUALITY: "quality" of a triangle in 2D.
//
//  Discussion:
//
//    The quality of a triangle is 2 times the ratio of the radius of the inscribed
//    circle divided by that of the circumscribed circle.  An equilateral
//    triangle achieves the maximum possible quality of 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Adrian Bowyer, John Woodwark,
//    A Programmer's Geometry,
//    Butterworths, 1983.
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Output, double TRIANGLE_QUALITY, the quality of the triangle.
//
{
  double a;
  double b;
  double c;
  int i;
  double value;
//
//  Compute the length of each side.
//
  a = 0.0;
  b = 0.0;
  c = 0.0;

  for ( i = 0; i < 2; i++ )
  {
    a = a + pow ( t[i+0*2] - t[i+1*2], 2 );
    b = b + pow ( t[i+1*2] - t[i+2*2], 2 );
    c = c + pow ( t[i+2*2] - t[i+0*2], 2 );
  }
  a = sqrt ( a );
  b = sqrt ( b );
  c = sqrt ( c );

  if ( a * b * c == 0.0 )
  {
    value = 0.0;
  }
  else
  {
    value = ( - a + b + c ) * ( a - b + c ) * ( a + b - c ) 
      / ( a * b * c );
  }
  return value;
}
//****************************************************************************80

double *triangle_reference_sample ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_REFERENCE_SAMPLE returns random points in the reference triangle.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of points to sample.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double TRIANGLE_REFERENCE_SAMPLE[2*N], a points in the triangle.
//
{
  double alpha;
  double beta;
  int j;
  double *p;
  double r;

  p = new double[2*n];

  for ( j = 0; j < n; j++ )
  {
    r = r8_uniform_01 ( seed );
//
//  Interpret R as a percentage of the triangle's area.
//
//  Imagine a line L, parallel to side 1, so that the area between
//  vertex 1 and line L is R percent of the full triangle's area.
//
//  The line L will intersect sides 2 and 3 at a fraction
//  ALPHA = SQRT ( R ) of the distance from vertex 1 to vertices 2 and 3.
//
    alpha = sqrt ( r );
//
//  Now choose, uniformly at random, a point on the line L.
//
    beta = r8_uniform_01 ( seed );

    p[0+j*2] = ( 1.0 - beta ) * alpha;
    p[1+j*2] =         beta   * alpha;
  }

  return p;
}
//****************************************************************************80

double *triangle_sample ( double t[2*3], int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_SAMPLE returns random points in a triangle.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Input, int N, the number of points to sample.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double TRIANGLE_SAMPLE[2*N], random points in the triangle.
//
{
  double alpha;
  double beta;
  int j;
  double *p;
  double p12[2];
  double p13[2];
  double r;

  p = new double[2*n];

  for ( j = 0; j < n; j++ )
  {
    r = r8_uniform_01 ( seed );
//
//  Interpret R as a percentage of the triangle's area.
//
//  Imagine a line L, parallel to side 1, so that the area between
//  vertex 1 and line L is R percent of the full triangle's area.
//
//  The line L will intersect sides 2 and 3 at a fraction
//  ALPHA = SQRT ( R ) of the distance from vertex 1 to vertices 2 and 3.
//
    alpha = sqrt ( r );
//
//  Determine the coordinates of the points on sides 2 and 3 intersected
//  by line L.
//
    p12[0] = ( 1.0 - alpha ) * t[0+0*2] + alpha * t[0+1*2];
    p12[1] = ( 1.0 - alpha ) * t[1+0*2] + alpha * t[1+1*2];

    p13[0] = ( 1.0 - alpha ) * t[0+0*2] + alpha * t[0+2*2];;
    p13[1] = ( 1.0 - alpha ) * t[1+0*2] + alpha * t[1+2*2];;
//
//  Now choose, uniformly at random, a point on the line L.
//
    beta = r8_uniform_01 ( seed );

    p[0+j*2] = ( 1.0 - beta ) * p12[0] + beta * p13[0];
    p[1+j*2] = ( 1.0 - beta ) * p12[1] + beta * p13[1];
  }

  return p;
}
//****************************************************************************80

double *triangle_xsi_to_xy ( double t[2*3], double xsi[3] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_XSI_TO_XY converts from barycentric to XY coordinates in 2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Input, double XSI[3], the barycentric coordinates of a point.
//
//    Output, double TRIANGLE_XSI_TO_XY[2], the Cartesian coordinates of the point.
//
{
  double *p;

  p = new double[2];

  p[0] = xsi[0] * t[0+0*2] + xsi[1] * t[0+1*2] + xsi[2] * t[0+2*2];
  p[1] = xsi[0] * t[1+0*2] + xsi[1] * t[1+1*2] + xsi[2] * t[1+2*2];

  return p;
}
//****************************************************************************80

double *triangle_xy_to_xsi ( double t[2*3], double p[2] )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_XY_TO_XSI converts from XY to barycentric in 2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double T[2*3], the triangle vertices.
//
//    Input, double P[2], the XY coordinates of a point.
//
//    Output, double TRIANGLE_XY_TO_XSI[3], the barycentric coordinates of the point.
//
{
  double det;
  double *xsi;

  xsi = new double[3];

  det = ( t[0+0*2] - t[0+2*2] ) * ( t[1+1*2] - t[1+2*2] )
      - ( t[0+1*2] - t[0+2*2] ) * ( t[1+0*2] - t[1+2*2] );

  xsi[0] = (   ( t[1+1*2] - t[1+2*2] ) * ( p[0] - t[0+2*2] )
             - ( t[0+1*2] - t[0+2*2] ) * ( p[1] - t[1+2*2] ) ) / det;

  xsi[1] = ( - ( t[1+0*2] - t[1+2*2] ) * ( p[0] - t[0+2*2] )
             + ( t[0+0*2] - t[0+2*2] ) * ( p[1] - t[1+2*2] ) ) / det;

  xsi[2] = 1.0 - xsi[0] - xsi[1];

  return xsi;
}
