LAGRANGE\_INTERP\_1D\
Polynomial Interpolation in 1D using Lagrange Polynomials {#lagrange_interp_1d-polynomial-interpolation-in-1d-using-lagrange-polynomials align="center"}
=========================================================

------------------------------------------------------------------------

**LAGRANGE\_INTERP\_1D** is a C++ library which defines and evaluates
the Lagrange polynomial p(x) which interpolates a set of data, so that
p(x(i)) = y(i).

LAGRANGE\_INTERP\_1D needs the R8LIB library. The test uses the
TEST\_INTERP\_1D library.

### Licensing: {#licensing align="center"}

The computer code described and made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGRANGE\_INTERP\_1D** is available in [a C
version](../../c_src/lagrange_interp_1d/lagrange_interp_1d.html) and [a
C++ version](../../cpp_src/lagrange_interp_1d/lagrange_interp_1d.html)
and [a FORTRAN77
version](../../f77_src/lagrange_interp_1d/lagrange_interp_1d.html) and
[a FORTRAN90
version](../../f_src/lagrange_interp_1d/lagrange_interp_1d.html) and [a
MATLAB version](../../m_src/lagrange_interp_1d/lagrange_interp_1d.html)
and [a Python
version](../../py_src/lagrange_interp_1d/lagrange_interp_1d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BARYCENTRIC\_INTERP\_1D](../../cpp_src/barycentric_interp_1d/barycentric_interp_1d.html),
a C++ library which defines and evaluates the barycentric Lagrange
polynomial p(x) which interpolates a set of data, so that p(x(i)) =
y(i). The barycentric approach means that very high degree polynomials
can safely be used.

[CHEBYSHEV\_INTERP\_1D](../../cpp_src/chebyshev_interp_1d/chebyshev_interp_1d.html),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

[DIVDIF](../../cpp_src/divdif/divdif.html), a C++ library which uses
divided differences to compute the polynomial interpolant to a given set
of data.

[FEM1D\_LAGRANGE](../../cpp_src/fem1d_lagrange/fem1d_lagrange.html), a
C++ library which sets up the matrices and vectors associated with the
finite element method (FEM) solution of a boundary value problem (BVP)
-u''+u=f(x), using Lagrange basis polynomials.

[HERMITE](../../cpp_src/hermite/hermite.html), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[LAGRANGE\_APPROX\_1D](../../cpp_src/lagrange_approx_1d/lagrange_approx_1d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
of degree m which approximates a set of nd data points (x(i),y(i)).

[LAGRANGE\_INTERP\_2D](../../cpp_src/lagrange_interp_2d/lagrange_interp_2d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x,y)
which interpolates a set of data depending on a 2D argument that was
evaluated on a product grid, so that p(x(i),y(j)) = z(i,j).

[LAGRANGE\_INTERP\_ND](../../cpp_src/lagrange_interp_nd/lagrange_interp_nd.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data depending on a multidimensional
argument x that was evaluated on a product grid, so that p(x(i)) = z(i).

[NEAREST\_INTERP\_1D](../../cpp_src/nearest_interp_1d/nearest_interp_1d.html),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion.

[NEWTON\_INTERP\_1D](../../cpp_src/newton_interp_1d/newton_interp_1d.html),
a C++ library which finds a polynomial interpolant to data using Newton
divided differences.

[PWL\_INTERP\_1D](../../cpp_src/pwl_interp_1d/pwl_interp_1d.html), a C++
library which interpolates a set of data using a piecewise linear
interpolant.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_1D](../../cpp_src/rbf_interp_1d/rbf_interp_1d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

[SHEPARD\_INTERP\_1D](../../cpp_src/shepard_interp_1d/shepard_interp_1d.html),
a C++ library which defines and evaluates Shepard interpolants to 1D
data, based on inverse distance weighting.

[SPLINE](../../cpp_src/spline/spline.html), a C++ library which
constructs and evaluates spline interpolants and approximants.

[TEST\_INTERP](../../cpp_src/test_interp/test_interp.html), a C++
library which defines a number of test problems for interpolation,
provided as a set of (x,y) data.

[TEST\_INTERP\_1D](../../cpp_src/test_interp_1d/test_interp_1d.html), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 2D argument.

[VANDERMONDE\_INTERP\_1D](../../c_src/vandermonde_interp_1d/vandermonde_interp_1d.html),
a C library which finds a polynomial interpolant to data y(x) of a 1D
argument, by setting up and solving a linear system for the polynomial
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

-   [lagrange\_interp\_1d.cpp](lagrange_interp_1d.cpp), the source code.
-   [lagrange\_interp\_1d.hpp](lagrange_interp_1d.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lagrange\_interp\_1d\_prb.cpp](lagrange_interp_1d_prb.cpp), a
    sample calling program.
-   [lagrange\_interp\_1d\_prb\_output.txt](lagrange_interp_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LAGRANGE\_BASIS\_1D** evaluates the Lagrange basis polynomials.
-   **LAGRANGE\_VALUE\_1D** evaluates the Lagrange interpolant.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 September 2012.*
