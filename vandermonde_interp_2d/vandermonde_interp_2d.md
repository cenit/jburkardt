VANDERMONDE\_INTERP\_2D\
Data Interpolation with Polynomials using the Vandermonde Matrix {#vandermonde_interp_2d-data-interpolation-with-polynomials-using-the-vandermonde-matrix align="center"}
================================================================

------------------------------------------------------------------------

**VANDERMONDE\_INTERP\_2D** is a C++ library which finds P(X,Y), a
polynomial interpolant to data Z(X,Y) which depends on two independent
variables X and Y, by setting up and solving a linear system involving
the Vandermonde matrix.

This software is primarily intended as an illustration of the problems
that can occur when the interpolation problem is naively formulated
using the Vandermonde matrix. Unless the data points are well separated,
and the degree of the polynomial is low, the linear system will become
very difficult to store and solve accurately, because the monomials used
as basis vectors by the Vandermonde approach become indistinguishable.

If the data is available on a product grid, then both the
LAGRANGE\_INTERP\_2D and VANDERMONDE\_INTERP\_2D libraries will be
trying to compute the same interpolating function. However, especially
for higher degree polynomials, the Lagrange approach will be superior
because it avoids the badly conditioned Vandermonde matrix associated
with the usage of monomials as the basis. The Lagrange approach uses as
a basis a set of Lagrange basis polynomials l(i,j)(x) which are 1 at
node (x(i),y(j)) and zero at the other nodes.

VANDERMONDE\_INTERP\_2D needs access to the QR\_SOLVE and R8LIB
libraries. The test code also needs access to the TEST\_INTERP\_2D
library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**VANDERMONDE\_INTERP\_2D** is available in [a C
version](../../c_src/vandermonde_interp_2d/vandermonde_interp_2d.html)
and [a C++
version](../../cpp_src/vandermonde_interp_2d/vandermonde_interp_2d.html)
and [a FORTRAN77
version](../../f77_src/vandermonde_interp_2d/vandermonde_interp_2d.html)
and [a FORTRAN90
version](../../f_src/vandermonde_interp_2d/vandermonde_interp_2d.html)
and [a MATLAB
version](../../m_src/vandermonde_interp_2d/vandermonde_interp_2d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_2D](../../cpp_src/lagrange_interp_2d/lagrange_interp_2d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x,y)
which interpolates a set of data depending on a 2D argument that was
evaluated on a product grid, so that p(x(i),y(j)) = z(i,j).

[PADUA](../../cpp_src/padua/padua.html), a C++ library which returns the
points and weights for Padu sets, useful for interpolation in 2D.
GNUPLOT is used to plot the points.

[PWL\_INTERP\_2D](../../cpp_src/pwl_interp_2d/pwl_interp_2d.html), a C++
library which evaluates a piecewise linear interpolant to data defined
on a regular 2D grid.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines, using double precision real (R8) arithmetic.

[RBF\_INTERP\_2D](../../cpp_src/rbf_interp_2d/rbf_interp_2d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 2D data.

[SHEPARD\_INTERP\_2D](../../cpp_src/shepard_interp_2d/shepard_interp_2d.html),
a C++ library which defines and evaluates Shepard interpolants to 2D
data, which are based on inverse distance weighting.

[TEST\_INTERP\_2D](../../cpp_src/test_interp_2d/test_interp_2d.html), a
C++ library which defines test problems for interpolation of data z(x,y)
of a 2D argument.

[TOMS886](../../cpp_src/toms886/toms886.html), a C++ library which
defines the Padua points for interpolation in a 2D region, including the
rectangle, triangle, and ellipse, by Marco Caliari, Stefano de Marchi,
Marco Vianello. This is a C++ version of ACM TOMS algorithm 886.

[VANDERMONDE\_APPROX\_2D](../../cpp_src/vandermonde_approx_2d/vandermonde_approx_2d.html),
a C++ library which finds a polynomial approximant p(x,y) to data z(x,y)
of a 2D argument by setting up and solving an overdetermined linear
system for the polynomial coefficients involving the Vandermonde matrix.

[VANDERMONDE\_INTERP\_1D](../../cpp_src/vandermonde_interp_1d/vandermonde_interp_1d.html),
a C++ library which finds a polynomial interpolant to a function of 1D
data by setting up and solving a linear system for the polynomial
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

-   [vandermonde\_interp\_2d.cpp](vandermonde_interp_2d.cpp), the source
    code.
-   [vandermonde\_interp\_2d.hpp](vandermonde_interp_2d.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [vandermonde\_interp\_2d\_prb.cpp](vandermonde_interp_2d_prb.cpp), a
    sample calling program.
-   [vandermonde\_interp\_2d\_prb\_output.txt](vandermonde_interp_2d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **TRIANGLE\_NUM** returns the N-th triangular number.
-   **VANDERMONDE\_INTERP\_2D\_MATRIX** computes a Vandermonde 2D
    interpolation matrix.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 October 2012.*
