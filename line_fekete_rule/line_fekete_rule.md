LINE\_FEKETE\_RULE\
Approximate Fekete Points in an Interval {#line_fekete_rule-approximate-fekete-points-in-an-interval align="center"}
========================================

------------------------------------------------------------------------

**LINE\_FEKETE\_RULE** is a C++ library which approximates the location
of Fekete points in an interval \[A,B\]. A family of sets of Fekete
points, indexed by size N, represents an excellent choice for defining a
polynomial interpolant.

Given a desired number of points N, the best choice for abscissas is a
set of Lebesgue points, which minimize the Lebesgue constant, which
describes the error in polynomial interpolation. Sets of Lebesgue points
are difficult to define mathematically. Fekete points are a related,
computable set, defined as those sets maximizing the magnitude of the
determinant of the Vandermonde matrix associated with the points.
Analytic definitions of these points are known for a few cases, but
there is a general computational procedure for approximating them, which
is demonstrated here.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINE\_FEKETE\_RULE** is available in [a C
version](../../c_src/line_fekete_rule/line_fekete_rule.html) and [a C++
version](../../cpp_src/line_fekete_rule/line_fekete_rule.html) and [a
FORTRAN77 version](../../f77_src/line_fekete_rule/line_fekete_rule.html)
and [a FORTRAN90
version](../../f_src/line_fekete_rule/line_fekete_rule.html) and [a
MATLAB version](../../m_src/line_fekete_rule/line_fekete_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LEBESGUE](../../cpp_src/lebesgue/lebesgue.html), a C++ library which is
given a set of nodes in 1D, and plots the Lebesgue function, and
estimates the Lebesgue constant, which measures the maximum magnitude of
the potential error of Lagrange polynomial interpolation.

[LINE\_FELIPPA\_RULE](../../cpp_src/line_felippa_rule/line_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[LINE\_GRID](../../cpp_src/line_grid/line_grid.html), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[LINE\_NCC\_RULE](../../cpp_src/line_ncc_rule/line_ncc_rule.html), a C++
library which computes a Newton Cotes Closed (NCC) quadrature rule for
the line, that is, for an interval of the form \[A,B\], using equally
spaced points which include the endpoints.

[LINE\_NCO\_RULE](../../cpp_src/line_nco_rule/line_nco_rule.html), a C++
library which computes a Newton Cotes Open (NCO) quadrature rule, using
equally spaced points, over the interior of a line segment in 1D.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[QUADRATURE\_WEIGHTS\_VANDERMONDE](../../cpp_src/quadrature_weights_vandermonde/quadrature_weights_vandermonde.html),
a C++ library which computes the weights of a quadrature rule using the
Vandermonde matrix, assuming that the points have been specified.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for quadrature or interpolation
over the interior of a triangle in 2D.

[VANDERMONDE](../../cpp_src/vandermonde/vandermonde.html), a C++ library
which carries out certain operations associated with the Vandermonde
matrix.

### Reference: {#reference align="center"}

1.  Len Bos, Norm Levenberg,\
    On the calculation of approximate Fekete points: the univariate
    case,\
    Electronic Transactions on Numerical Analysis,\
    Volume 30, pages 377-397, 2008.
2.  Alvise Sommariva, Marco Vianello,\
    Computing approximate Fekete points by QR factorizations of
    Vandermonde matrices,\
    Computers and Mathematics with Applications,\
    Volume 57, 2009, pages 1324-1336.

### Source Code: {#source-code align="center"}

-   [line\_fekete\_rule.cpp](line_fekete_rule.cpp), the source code.
-   [line\_fekete\_rule.hpp](line_fekete_rule.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [line\_fekete\_rule\_prb.cpp](line_fekete_rule_prb.cpp), a sample
    calling program.
-   [line\_fekete\_rule\_prb\_output.txt](line_fekete_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CHEBY\_VAN1** returns the Chebyshev Vandermonde-like matrix for
    \[A,B\].
-   **LEGENDRE\_VAN** returns the LEGENDRE\_VAN matrix.
-   **LINE\_FEKETE\_CHEBYSHEV:** approximate Fekete points in an
    interval \[A,B\].
-   **LINE\_FEKETE\_LEGENDRE** computes approximate Fekete points in an
    interval \[A,B\].
-   **LINE\_FEKETE\_MONOMIAL** computes approximate Fekete points in an
    interval \[A,B\].
-   **LINE\_MONOMIAL\_MOMENTS** computes monomial moments in \[A,B\].
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 April 2014.*
