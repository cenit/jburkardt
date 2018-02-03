# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <fstream>
# include <ctime>
# include <cstring>
# include <cmath>

using namespace std;

# include "tetrahedron_felippa_rule.hpp"

//****************************************************************************80

void comp_next ( int n, int k, int a[], bool *more, int *h, int *t )

//****************************************************************************80
//
//  Purpose:
//
//    COMP_NEXT computes the compositions of the integer N into K parts.
//
//  Discussion:
//
//    A composition of the integer N into K parts is an ordered sequence
//    of K nonnegative integers which sum to N.  The compositions (1,2,1)
//    and (1,1,2) are considered to be distinct.
//
//    The routine computes one composition on each call until there are no more.
//    For instance, one composition of 6 into 3 parts is
//    3+2+1, another would be 6+0+0.
//
//    On the first call to this routine, set MORE = FALSE.  The routine
//    will compute the first element in the sequence of compositions, and
//    return it, as well as setting MORE = TRUE.  If more compositions
//    are desired, call again, and again.  Each time, the routine will
//    return with a new composition.
//
//    However, when the LAST composition in the sequence is computed 
//    and returned, the routine will reset MORE to FALSE, signaling that
//    the end of the sequence has been reached.
//
//    This routine originally used a SAVE statement to maintain the
//    variables H and T.  I have decided that it is safer
//    to pass these variables as arguments, even though the user should
//    never alter them.  This allows this routine to safely shuffle
//    between several ongoing calculations.
//
//
//    There are 28 compositions of 6 into three parts.  This routine will
//    produce those compositions in the following order:
//
//     I         A
//     -     ---------
//     1     6   0   0
//     2     5   1   0
//     3     4   2   0
//     4     3   3   0
//     5     2   4   0
//     6     1   5   0
//     7     0   6   0
//     8     5   0   1
//     9     4   1   1
//    10     3   2   1
//    11     2   3   1
//    12     1   4   1
//    13     0   5   1
//    14     4   0   2
//    15     3   1   2
//    16     2   2   2
//    17     1   3   2
//    18     0   4   2
//    19     3   0   3
//    20     2   1   3
//    21     1   2   3
//    22     0   3   3
//    23     2   0   4
//    24     1   1   4
//    25     0   2   4
//    26     1   0   5
//    27     0   1   5
//    28     0   0   6
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 July 2008
//
//  Author:
//
//    Original FORTRAN77 version by Albert Nijenhuis, Herbert Wilf.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Albert Nijenhuis, Herbert Wilf,
//    Combinatorial Algorithms for Computers and Calculators,
//    Second Edition,
//    Academic Press, 1978,
//    ISBN: 0-12-519260-6,
//    LC: QA164.N54.
//
//  Parameters:
//
//    Input, int N, the integer whose compositions are desired.
//
//    Input, int K, the number of parts in the composition.
//
//    Input/output, int A[K], the parts of the composition.
//
//    Input/output, bool *MORE.
//    Set MORE = FALSE on first call.  It will be reset to TRUE on return
//    with a new composition.  Each new call returns another composition until
//    MORE is set to FALSE when the last composition has been computed
//    and returned.
//
//    Input/output, int *H, *T, two internal parameters needed for the
//    computation.  The user should allocate space for these in the calling
//    program, include them in the calling sequence, but never alter them!
//
{
  int i;

  if ( !( *more ) )
  {
    *t = n;
    *h = 0;
    a[0] = n;
    for ( i = 1; i < k; i++ )
    {
       a[i] = 0;
    }
  }
  else
  {
    if ( 1 < *t )
    {
      *h = 0;
    }
    *h = *h + 1;
    *t = a[*h-1];
    a[*h-1] = 0;
    a[0] = *t - 1;
    a[*h] = a[*h] + 1;
  }

  *more = ( a[k-1] != n );

  return;
}
//****************************************************************************80

double *monomial_value ( int m, int n, int e[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    MONOMIAL_VALUE evaluates a monomial.
//
//  Discussion:
//
//    This routine evaluates a monomial of the form
//
//      product ( 1 <= i <= m ) x(i)^e(i)
//
//    The combination 0.0^0 is encountered is treated as 1.0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 August 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the spatial dimension.
//
//    Input, int N, the number of evaluation points.
//
//    Input, int E[M], the exponents.
//
//    Input, double X[M*N], the point coordinates.
//
//    Output, double MONOMIAL_VALUE[N], the monomial values.
//
{
  int i;
  int j;
  double *v;

  v = new double[n];
  for ( j = 0; j < n; j++)
  {
    v[j] = 1.0;
  }
//v = r8vec_ones_new ( n );

  for ( i = 0; i < m; i++ )
  {
    if ( 0 != e[i] )
    {
      for ( j = 0; j < n; j++ )
      {
        v[j] = v[j] * pow ( x[i+j*m], e[i] );
      }
    }
  }

  return v;
}
//****************************************************************************80

void r8vec_copy ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_COPY copies an R8VEC.
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
//    Output, double A2[N], the copy of A1.
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

double r8vec_dot_product ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_DOT_PRODUCT computes the dot product of a pair of R8VEC's.
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
//    Input, double A1[N], A2[N], the two vectors to be considered.
//
//    Output, double R8VEC_DOT_PRODUCT, the dot product of the vectors.
//
{
  int i;
  double value;

  value = 0.0;
  for ( i = 0; i < n; i++ )
  {
    value = value + a1[i] * a2[i];
  }
  return value;
}
//****************************************************************************80

void subcomp_next ( int n, int k, int a[], bool *more, int *h, int *t )

//****************************************************************************80
//
//  Purpose:
//
//    SUBCOMP_NEXT computes the next subcomposition of N into K parts.
//
//  Discussion:
//
//    A composition of the integer N into K parts is an ordered sequence
//    of K nonnegative integers which sum to a value of N.
//
//    A subcomposition of the integer N into K parts is a composition
//    of M into K parts, where 0 <= M <= N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 July 2008
//
//  Author:
//
//    Original FORTRAN77 version by Albert Nijenhuis, Herbert Wilf.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Albert Nijenhuis, Herbert Wilf,
//    Combinatorial Algorithms for Computers and Calculators,
//    Second Edition,
//    Academic Press, 1978,
//    ISBN: 0-12-519260-6,
//    LC: QA164.N54.
//
//  Parameters:
//
//    Input, int N, the integer whose subcompositions are desired.
//
//    Input, int K, the number of parts in the subcomposition.
//
//    Input/output, int A[K], the parts of the subcomposition.
//
//    Input/output, bool *MORE, set by the user to start the computation,
//    and by the routine to terminate it.
//
//    Input/output, int *H, *T, two internal parameters needed for the
//    computation.  The user should allocate space for these in the calling
//    program, include them in the calling sequence, but never alter them!
//
{
  int i;
  static bool more2 = false;
  static int n2 = 0;
//
//  The first computation.
//
  if ( !( *more ) )
  {
    n2 = 0;

    for ( i = 0; i < k; i++ )
    {
      a[i] = 0;
    }
    more2 = false;
    *h = 0;
    *t = 0;

    *more = true;
  }
//
//  Do the next element at the current value of N.
//
  else if ( more2 )
  {
    comp_next ( n2, k, a, &more2, h, t );
  }
  else
  {
    more2 = false;
    n2 = n2 + 1;

    comp_next ( n2, k, a, &more2, h, t );
  }
//
//  Termination occurs if MORE2 = FALSE and N2 = N.
//
  if ( !more2 && n2 == n )
  {
    *more = false;
  }

  return;
}
//****************************************************************************80

double tetrahedron_unit_monomial ( int expon[3] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_MONOMIAL integrates a monomial over the unit tetrahedron.
//
//  Discussion:
//
//    This routine integrates a monomial of the form
//
//      product ( 1 <= dim <= 3 ) x(dim)^expon(dim)
//
//    where the exponents are nonnegative integers.  Note that
//    if the combination 0^0 is encountered, it should be treated
//    as 1.
//
//    Integral ( over unit tetrahedron ) x^l y^m z^n dx dy = 
//    l! * m! * n! / ( m + n + 3 )!
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      0 <= X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    07 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int EXPON[3], the exponents.
//
//    Output, double TETRAHEDRON_UNIT_MONOMIAL, the integral of the monomial.
//
{
  int i;
  int k;
  double value;
//
//  The first computation ends with VALUE = 1.0;
//
  value = 1.0;
//
//  The first loop simply calculates 1, so we short circuit it.
//
// k = 0;
//
// for ( i = 1; i <= expon[0]; i++ )
// {
//   k = k + 1;
//   value = value * ( double ) ( i ) / ( double ) ( k );
// }

  k = expon[0];
  for ( i = 1; i <= expon[1]; i++ )
  {
    k = k + 1;
    value = value * ( double ) ( i ) / ( double ) ( k );
  }

  for ( i = 1; i <= expon[2]; i++ )
  {
    k = k + 1;
    value = value * ( double ) ( i ) / ( double ) ( k );
  }

  k = k + 1;
  value = value / ( double ) ( k );

  k = k + 1;
  value = value / ( double ) ( k );

  k = k + 1;
  value = value / ( double ) ( k ) ;

  return value;
}
//****************************************************************************80

void tetrahedron_unit_o01 ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O01 returns a 1 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[1], the weights.
//
//    Output, double XYZ[3*1], the abscissas.
//
{
  int order = 1;

  double w_save[1] = {
    1.0000000000000000000 };
  double xyz_save[3*1] = { 
    0.25000000000000000000,  0.25000000000000000000,  0.25000000000000000000 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

void tetrahedron_unit_o04 ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O04 returns a 4 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[4], the weights.
//
//    Output, double XYZ[3*4], the abscissas.
//
{
  int order = 4;

  double w_save[4] = { 
    0.25000000000000000000, 
    0.25000000000000000000, 
    0.25000000000000000000, 
    0.25000000000000000000 };
  double xyz_save[3*4] = { 
    0.58541019662496845446,  0.13819660112501051518,  0.13819660112501051518, 
    0.13819660112501051518,  0.58541019662496845446,  0.13819660112501051518, 
    0.13819660112501051518,  0.13819660112501051518,  0.58541019662496845446, 
    0.13819660112501051518,  0.13819660112501051518,  0.13819660112501051518 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

void tetrahedron_unit_o08 ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O08 returns an 8 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[8], the weights.
//
//    Output, double XYZ[3*8], the abscissas.
//
{
  int order = 8;

  double w_save[8] = {
    0.13852796651186214232, 
    0.13852796651186214232, 
    0.13852796651186214232, 
    0.13852796651186214232, 
    0.11147203348813785768, 
    0.11147203348813785768, 
    0.11147203348813785768, 
    0.11147203348813785768 };
  double xyz_save[3*8] = { 
    0.015835909865720057993,  0.32805469671142664734,  0.32805469671142664734, 
    0.32805469671142664734,  0.015835909865720057993,  0.32805469671142664734, 
    0.32805469671142664734,  0.32805469671142664734,  0.015835909865720057993, 
    0.32805469671142664734,  0.32805469671142664734,  0.32805469671142664734, 
    0.67914317820120795168,  0.10695227393293068277,  0.10695227393293068277, 
    0.10695227393293068277,  0.67914317820120795168,  0.10695227393293068277, 
    0.10695227393293068277,  0.10695227393293068277,  0.67914317820120795168, 
    0.10695227393293068277,  0.10695227393293068277,  0.10695227393293068277 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

void tetrahedron_unit_o08b ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O08B returns an 8 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[8], the weights.
//
//    Output, double XYZ[3*8], the abscissas.
//
{
  int order = 8;

  double w_save[8] = {
    0.025000000000000000000, 
    0.025000000000000000000, 
    0.025000000000000000000, 
    0.025000000000000000000, 
    0.22500000000000000000, 
    0.22500000000000000000, 
    0.22500000000000000000, 
    0.22500000000000000000 };
  double xyz_save[3*8] = { 
    1.00000000000000000000,  0.00000000000000000000,  0.00000000000000000000, 
    0.00000000000000000000,  1.00000000000000000000,  0.00000000000000000000, 
    0.00000000000000000000,  0.00000000000000000000,  1.00000000000000000000, 
    0.00000000000000000000,  0.00000000000000000000,  0.00000000000000000000, 
    0.00000000000000000000,  0.33333333333333333333,  0.33333333333333333333, 
    0.33333333333333333333,  0.00000000000000000000,  0.33333333333333333333, 
    0.33333333333333333333,  0.33333333333333333333,  0.00000000000000000000, 
    0.33333333333333333333,  0.33333333333333333333,  0.33333333333333333333 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

void tetrahedron_unit_o14 ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O14 returns a 14 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[ORDER], the weights.
//
//    Output, double XYZ[3*ORDER], the abscissas.
//
{
  int order = 14;

  double w_save[14] = {
    0.073493043116361949544, 
    0.073493043116361949544, 
    0.073493043116361949544, 
    0.073493043116361949544, 
    0.11268792571801585080, 
    0.11268792571801585080, 
    0.11268792571801585080, 
    0.11268792571801585080, 
    0.042546020777081466438, 
    0.042546020777081466438, 
    0.042546020777081466438, 
    0.042546020777081466438, 
    0.042546020777081466438, 
    0.042546020777081466438 };
  double xyz_save[3*14] = { 
    0.72179424906732632079,  0.092735250310891226402,  0.092735250310891226402, 
    0.092735250310891226402,  0.72179424906732632079,  0.092735250310891226402, 
    0.092735250310891226402,  0.092735250310891226402,  0.72179424906732632079, 
    0.092735250310891226402,  0.092735250310891226402,  0.092735250310891226402, 
    0.067342242210098170608,  0.31088591926330060980,  0.31088591926330060980, 
    0.31088591926330060980,  0.067342242210098170608,  0.31088591926330060980, 
    0.31088591926330060980,  0.31088591926330060980,  0.067342242210098170608, 
    0.31088591926330060980,  0.31088591926330060980,  0.31088591926330060980, 
    0.045503704125649649492,  0.045503704125649649492,  0.45449629587435035051, 
    0.045503704125649649492,  0.45449629587435035051,  0.045503704125649649492, 
    0.045503704125649649492,  0.45449629587435035051,  0.45449629587435035051, 
    0.45449629587435035051,  0.045503704125649649492,  0.045503704125649649492, 
    0.45449629587435035051,  0.045503704125649649492,  0.45449629587435035051, 
    0.45449629587435035051,  0.45449629587435035051,  0.045503704125649649492 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

void tetrahedron_unit_o14b ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O14B returns a 14 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[14], the weights.
//
//    Output, double XYZ[3*14], the abscissas.
//
{
  int order = 14;

  double w_save[14] = {
    0.13283874668559071814, 
    0.13283874668559071814, 
    0.13283874668559071814, 
    0.13283874668559071814, 
    0.088589824742980710434, 
    0.088589824742980710434, 
    0.088589824742980710434, 
    0.088589824742980710434, 
    0.019047619047619047619, 
    0.019047619047619047619, 
    0.019047619047619047619, 
    0.019047619047619047619, 
    0.019047619047619047619, 
    0.019047619047619047619  };
  double xyz_save[3*14] = { 
    0.056881379520423421748,  0.31437287349319219275,  0.31437287349319219275, 
    0.31437287349319219275,  0.056881379520423421748,  0.31437287349319219275, 
    0.31437287349319219275,  0.31437287349319219275,  0.056881379520423421748, 
    0.31437287349319219275,  0.31437287349319219275,  0.31437287349319219275, 
    0.69841970432438656092,  0.10052676522520447969,  0.10052676522520447969, 
    0.10052676522520447969,  0.69841970432438656092,  0.10052676522520447969, 
    0.10052676522520447969,  0.10052676522520447969,  0.69841970432438656092, 
    0.10052676522520447969,  0.10052676522520447969,  0.10052676522520447969, 
    0.50000000000000000000,  0.50000000000000000000,  0.00000000000000000000, 
    0.50000000000000000000,  0.00000000000000000000,  0.50000000000000000000, 
    0.50000000000000000000,  0.00000000000000000000,  0.00000000000000000000, 
    0.00000000000000000000,  0.50000000000000000000,  0.50000000000000000000, 
    0.00000000000000000000,  0.50000000000000000000,  0.00000000000000000000, 
    0.00000000000000000000,  0.00000000000000000000,  0.50000000000000000000 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

void tetrahedron_unit_o15 ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O15 returns a 15 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[15], the weights.
//
//    Output, double XYZ[3*15], the abscissas.
//
{
  int order = 15;

  double w_save[15] = {
    0.071937083779018620010, 
    0.071937083779018620010, 
    0.071937083779018620010, 
    0.071937083779018620010, 
    0.069068207226272385281, 
    0.069068207226272385281, 
    0.069068207226272385281, 
    0.069068207226272385281, 
    0.052910052910052910053, 
    0.052910052910052910053, 
    0.052910052910052910053, 
    0.052910052910052910053, 
    0.052910052910052910053, 
    0.052910052910052910053, 
    0.11851851851851851852 };
  double xyz_save[3*15] = { 
    0.72408676584183090163,  0.091971078052723032789,  0.091971078052723032789, 
    0.091971078052723032789,  0.72408676584183090163,  0.091971078052723032789, 
    0.091971078052723032789,  0.091971078052723032789,  0.72408676584183090163, 
    0.091971078052723032789,  0.091971078052723032789,  0.091971078052723032789, 
    0.040619116511110274837,  0.31979362782962990839,  0.31979362782962990839, 
    0.31979362782962990839,  0.040619116511110274837,  0.31979362782962990839, 
    0.31979362782962990839,  0.31979362782962990839,  0.040619116511110274837, 
    0.31979362782962990839,  0.31979362782962990839,  0.31979362782962990839, 
    0.44364916731037084426,  0.44364916731037084426,  0.056350832689629155741, 
    0.44364916731037084426,  0.056350832689629155741,  0.44364916731037084426, 
    0.44364916731037084426,  0.056350832689629155741,  0.056350832689629155741, 
    0.056350832689629155741,  0.44364916731037084426,  0.44364916731037084426, 
    0.056350832689629155741,  0.44364916731037084426,  0.056350832689629155741, 
    0.056350832689629155741,  0.056350832689629155741,  0.44364916731037084426, 
    0.25000000000000000000,  0.25000000000000000000,  0.25000000000000000000 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

void tetrahedron_unit_o15b ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O15B returns a 15 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[15], the weights.
//
//    Output, double XYZ[3*15], the abscissas.
//
{
  int order = 15;

  double w_save[15] = {
    0.036160714285714285714, 
    0.036160714285714285714, 
    0.036160714285714285714, 
    0.036160714285714285714, 
    0.069871494516173816465, 
    0.069871494516173816465, 
    0.069871494516173816465, 
    0.069871494516173816465, 
    0.065694849368318756074, 
    0.065694849368318756074, 
    0.065694849368318756074, 
    0.065694849368318756074, 
    0.065694849368318756074, 
    0.065694849368318756074, 
    0.18170206858253505484 };
  double xyz_save[3*15] = { 
    0.00000000000000000000,  0.33333333333333333333,  0.33333333333333333333, 
    0.33333333333333333333,  0.00000000000000000000,  0.33333333333333333333, 
    0.33333333333333333333,  0.33333333333333333333,  0.00000000000000000000, 
    0.33333333333333333333,  0.33333333333333333333,  0.33333333333333333333, 
    0.72727272727272727273,  0.090909090909090909091,  0.090909090909090909091, 
    0.090909090909090909091,  0.72727272727272727273,  0.090909090909090909091, 
    0.090909090909090909091,  0.090909090909090909091,  0.72727272727272727273, 
    0.090909090909090909091,  0.090909090909090909091,  0.090909090909090909091, 
    0.43344984642633570176,  0.43344984642633570176,  0.066550153573664298240, 
    0.43344984642633570176,  0.066550153573664298240,  0.43344984642633570176, 
    0.43344984642633570176,  0.066550153573664298240,  0.066550153573664298240, 
    0.066550153573664298240,  0.43344984642633570176,  0.43344984642633570176, 
    0.066550153573664298240,  0.43344984642633570176,  0.066550153573664298240, 
    0.066550153573664298240,  0.066550153573664298240,  0.43344984642633570176, 
    0.25000000000000000000,  0.25000000000000000000,  0.250000000000000000 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

void tetrahedron_unit_o24 ( double w[], double xyz[] )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_O24 returns a 24 point quadrature rule for the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X
//      0 <= Y
//      0 <= Z
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Carlos Felippa,
//    A compendium of FEM integration formulas for symbolic work,
//    Engineering Computation,
//    Volume 21, Number 8, 2004, pages 867-890.
//
//  Parameters:
//
//    Output, double W[24], the weights.
//
//    Output, double XYZ[3*24], the abscissas.
//
{
  int order = 24;

  double w_save[24] = {
    0.039922750257869636194, 
    0.039922750257869636194, 
    0.039922750257869636194, 
    0.039922750257869636194, 
    0.010077211055345822612, 
    0.010077211055345822612, 
    0.010077211055345822612, 
    0.010077211055345822612, 
    0.055357181543927398338, 
    0.055357181543927398338, 
    0.055357181543927398338, 
    0.055357181543927398338, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286, 
    0.048214285714285714286 };
  double xyz_save[3*24] = { 
    0.35619138622025439121,  0.21460287125991520293,  0.21460287125991520293, 
    0.21460287125991520293,  0.35619138622025439121,  0.21460287125991520293, 
    0.21460287125991520293,  0.21460287125991520293,  0.35619138622025439121, 
    0.21460287125991520293,  0.21460287125991520293,  0.21460287125991520293, 
    0.87797812439616594065,  0.040673958534611353116,  0.040673958534611353116, 
    0.040673958534611353116,  0.87797812439616594065,  0.040673958534611353116, 
    0.040673958534611353116,  0.040673958534611353116,  0.87797812439616594065, 
    0.040673958534611353116,  0.040673958534611353116,  0.040673958534611353116, 
    0.032986329573173468968,  0.32233789014227551034,  0.32233789014227551034, 
    0.32233789014227551034,  0.032986329573173468968,  0.32233789014227551034, 
    0.32233789014227551034,  0.32233789014227551034,  0.032986329573173468968, 
    0.32233789014227551034,  0.32233789014227551034,  0.32233789014227551034, 
    0.60300566479164914137,  0.26967233145831580803,  0.063661001875017525299, 
    0.60300566479164914137,  0.063661001875017525299,  0.26967233145831580803, 
    0.60300566479164914137,  0.063661001875017525299,  0.063661001875017525299, 
    0.063661001875017525299,  0.60300566479164914137,  0.26967233145831580803, 
    0.063661001875017525299,  0.60300566479164914137,  0.063661001875017525299, 
    0.063661001875017525299,  0.063661001875017525299,  0.60300566479164914137, 
    0.26967233145831580803,  0.60300566479164914137,  0.063661001875017525299, 
    0.26967233145831580803,  0.063661001875017525299,  0.60300566479164914137, 
    0.26967233145831580803,  0.063661001875017525299,  0.063661001875017525299, 
    0.063661001875017525299,  0.26967233145831580803,  0.60300566479164914137, 
    0.063661001875017525299,  0.26967233145831580803,  0.063661001875017525299, 
    0.063661001875017525299,  0.063661001875017525299,  0.26967233145831580803 };

  r8vec_copy ( order, w_save, w );
  r8vec_copy ( 3 * order, xyz_save, xyz );

  return;
}
//****************************************************************************80

double tetrahedron_unit_volume ( )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_VOLUME returns the volume of the unit tetrahedron.
//
//  Discussion:
//
//    The integration region is:
//
//      0 <= X,
//      0 <= Y,
//      0 <= Z, 
//      X + Y + Z <= 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 March 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, double TETRAHEDRON_UNIT_VOLUME, the volume.
//
{
  double volume;

  volume = 1.0 / 6.0;

  return volume;
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

