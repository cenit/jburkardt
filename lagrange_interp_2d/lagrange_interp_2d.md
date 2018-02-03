LAGRANGE\_INTERP\_2D\
Polynomial Interpolation in 2D using Lagrange Polynomials {#lagrange_interp_2d-polynomial-interpolation-in-2d-using-lagrange-polynomials align="center"}
=========================================================

------------------------------------------------------------------------

**LAGRANGE\_INTERP\_2D** is a C++ library which defines and evaluates
the Lagrange polynomial p(x,y) which interpolates a set of data
depending on a 2D argument that was evaluated on a product grid, so that
p(x(i),y(j)) = z(i,j).

If the data is available on a product grid, then both the
LAGRANGE\_INTERP\_2D and VANDERMONDE\_INTERP\_2D libraries will be
trying to compute the same interpolating function. However, especially
for higher degree polynomials, the Lagrange approach will be superior
because it avoids the badly conditioned Vandermonde matrix associated
with the usage of monomials as the basis. The Lagrange approach uses as
a basis a set of Lagrange basis polynomials l(i,j)(x) which are 1 at
node (x(i),y(j)) and zero at the other nodes.

LAGRANGE\_INTERP\_2D needs access to the R8LIB library. The test also
needs the TEST\_INTERP\_2D library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGRANGE\_INTERP\_2D** is available in [a C
version](../../c_src/lagrange_interp_2d/lagrange_interp_2d.md) and [a
C++ version](../../master/lagrange_interp_2d/lagrange_interp_2d.md)
and [a FORTRAN77
version](../../f77_src/lagrange_interp_2d/lagrange_interp_2d.md) and
[a FORTRAN90
version](../../f_src/lagrange_interp_2d/lagrange_interp_2d.md) and [a
MATLAB version](../../m_src/lagrange_interp_2d/lagrange_interp_2d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[LAGRANGE\_INTERP\_ND](../../master/lagrange_interp_nd/lagrange_interp_nd.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data depending on a multidimensional
argument x that was evaluated on a product grid, so that p(x(i)) = z(i).

[PADUA](../../master/padua/padua.md), a C++ library which returns the
points and weights for Padu sets, useful for interpolation in 2D.
GNUPLOT is used to plot the points.

[PWL\_INTERP\_2D](../../master/pwl_interp_2d/pwl_interp_2d.md), a C++
library which evaluates a piecewise linear interpolant to data defined
on a regular 2D grid.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_2D](../../master/rbf_interp_2d/rbf_interp_2d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 2D data.

[SHEPARD\_INTERP\_2D](../../master/shepard_interp_2d/shepard_interp_2d.md),
a C++ library which defines and evaluates Shepard interpolants to 2D
data, based on inverse distance weighting.

[TEST\_INTERP\_2D](../../master/test_interp_2d/test_interp_2d.md), a
C++ library which defines test problems for interpolation of data
z(x,y)), depending on a 2D argument.

[TOMS886](../../master/toms886/toms886.md), a C++ library which
defines the Padua points for interpolation in a 2D region, including the
rectangle, triangle, and ellipse, by Marco Caliari, Stefano de Marchi,
Marco Vianello. This is a C++ version of ACM TOMS algorithm 886.

[VANDERMONDE\_INTERP\_2D](../../master/vandermonde_interp_2d/vandermonde_interp_2d.md),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  Kendall Atkinson,\
    An Introduction to Numerical Analysis,\
    Prentice Hall, 1989,\
    ISBN: 0471624896,\
    LC: QA297.A94.1989.
2.  Philip Davis,\
    Interpolation and Approximation,\
    Dover, 1975,\
    ISBN: 0-486-62495-1,\
    LC: QA221.D33
3.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.

### Source Code: {#source-code align="center"}

-   [lagrange\_interp\_2d.cpp](lagrange_interp_2d.cpp), the source code.
-   [lagrange\_interp\_2d.hpp](lagrange_interp_2d.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lagrange\_interp\_2d\_prb.cpp](lagrange_interp_2d_prb.cpp), a
    sample calling program.
-   [lagrange\_interp\_2d\_prb\_output.txt](lagrange_interp_2d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LAGRANGE\_POLY\_1D** evaluates a 1D Lagrange basis function.
-   **LAGRANGE\_VALUE\_2D** evaluates the Lagrange interpolant for a
    product grid.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 13 September 2012.*
