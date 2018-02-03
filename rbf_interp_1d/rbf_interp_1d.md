RBF\_INTERP\_1D\
Radial Basis Function Interpolation in 1D {#rbf_interp_1d-radial-basis-function-interpolation-in-1d align="center"}
=========================================

------------------------------------------------------------------------

**RBF\_INTERP\_1D** is a C++ library which defines and evaluates radial
basis function (RBF) interpolants to 1D data.

A radial basis interpolant is a useful, but expensive, technique for
definining a smooth function which interpolates a set of function values
specified at an arbitrary set of data points.

Given nd multidimensional points xd with function values fd, and a basis
function phi(r), the form of the interpolant is

           f(x) = sum ( 1 <= i <= nd ) w(i) * phi(||x-xd(i)||)
          

where the weights w have been precomputed by solving

            sum ( 1 <= i <= nd ) w(i) * phi(||xd(j)-xd(i)||) = fd(j)
          

Although the technique is generally applied in a multidimensional
setting, in this directory we look specifically at the case involving 1D
data. This allows us to easily plot and compare the various results.

Four families of radial basis functions are provided.

-   phi1(r) = sqrt ( r\^2 + r0\^2 ) (multiquadric)
-   phi2(r) = 1 / sqrt ( r\^2 + r0\^2 ) (inverse multiquadric)
-   phi3(r) = r\^2 \* log ( r / r0 ) (thin plate spline)
-   phi4(r) = exp ( -0.5 r\^2 / r0\^2 ) (gaussian)

Each uses a "scale factor" r0, whose value is recommended to be greater
than the minimal distance between points, and rather less than the
maximal distance. Changing the value of r0 changes the shape of the
interpolant function.

RBF\_INTERP\_1D needs the R8LIB library. The test code also needs the
TEST\_INTERP library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RBF\_INTERP\_1D** is available in [a C
version](../../c_src/rbf_interp_1d/rbf_interp_1d.md) and [a C++
version](../../master/rbf_interp_1d/rbf_interp_1d.md) and [a
FORTRAN77 version](../../f77_src/rbf_interp_1d/rbf_interp_1d.md) and
[a FORTRAN90 version](../../f_src/rbf_interp_1d/rbf_interp_1d.md) and
[a MATLAB version](../../m_src/rbf_interp_1d/rbf_interp_1d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BARYCENTRIC\_INTERP\_1D](../../master/barycentric_interp_1d/barycentric_interp_1d.md),
a C++ library which defines and evaluates the barycentric Lagrange
polynomial p(x) which interpolates a set of data, so that p(x(i)) =
y(i). The barycentric approach means that very high degree polynomials
can safely be used.

[CHEBYSHEV\_INTERP\_1D](../../master/chebyshev_interp_1d/chebyshev_interp_1d.md),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

[DIVDIF](../../master/divdif/divdif.md), a C++ library which uses
divided differences to compute the polynomial interpolant to a given set
of data.

[HERMITE](../../master/hermite/hermite.md), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[NEAREST\_INTERP\_1D](../../master/nearest_interp_1d/nearest_interp_1d.md),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion.

[NEWTON\_INTERP\_1D](../../master/newton_interp_1d/newton_interp_1d.md),
a C++ library which finds a polynomial interpolant to data using Newton
divided differences.

[PWL\_INTERP\_1D](../../master/pwl_interp_1d/pwl_interp_1d.md), a C++
library which interpolates a set of data using a piecewise linear
interpolant.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_2D](../../master/rbf_interp_2d/rbf_interp_2d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 2D data.

[RBF\_INTERP\_ND](../../master/rbf_interp_nd/rbf_interp_nd.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to multidimensional data.

[SHEPARD\_INTERP\_1D](../../master/shepard_interp_1d/shepard_interp_1d.md),
a C++ library which defines and evaluates Shepard interpolants to 1D
data, based on inverse distance weighting.

[TEST\_INTERP](../../master/test_interp/test_interp.md), a C++
library which defines a number of test problems for interpolation,
provided as a set of (x,y) data.

[TEST\_INTERP\_1D](../../master/test_interp_1d/test_interp_1d.md), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 2D argument.

[VANDERMONDE\_INTERP\_1D](../../c_src/vandermonde_interp_1d/vandermonde_interp_1d.md),
a C library which finds a polynomial interpolant to data y(x) of a 1D
argument, by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  Richard Franke,\
    Scattered Data Interpolation: Tests of Some Methods,\
    Mathematics of Computation,\
    Volume 38, Number 157, January 1982, pages 181-200.
2.  William Press, Brian Flannery, Saul Teukolsky, William Vetterling,\
    Numerical Recipes in FORTRAN: The Art of Scientific Computing,\
    Third Edition,\
    Cambridge University Press, 2007,\
    ISBN13: 978-0-521-88068-8,\
    LC: QA297.N866.

### Source Code: {#source-code align="center"}

-   [rbf\_interp\_1d.cpp](rbf_interp_1d.cpp), the source code.
-   [rbf\_interp\_1d.hpp](rbf_interp_1d.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [rbf\_interp\_1d\_prb.cpp](rbf_interp_1d_prb.cpp), a sample calling
    program.
-   [rbf\_interp\_1d\_prb\_output.txt](rbf_interp_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **DNRM2** returns the euclidean norm of a vector.
-   **DROT** applies a plane rotation.
-   **DROTG** constructs a Givens plane rotation.
-   **DSCAL** scales a vector by a constant.
-   **DSVDC** computes the singular value decomposition of a real
    rectangular matrix.
-   **DSWAP** interchanges two vectors.
-   **PHI1** evaluates the multiquadric radial basis function.
-   **PHI2** evaluates the inverse multiquadric radial basis function.
-   **PHI3** evaluates the thin-plate spline radial basis function.
-   **PHI4** evaluates the gaussian radial basis function.
-   **R8MAT\_SOLVE\_SVD** solves a linear system A\*x=b using the SVD.
-   **RBF\_INTERP** evaluates a radial basis function interpolant.
-   **RBF\_WEIGHT** computes weights for radial basis function
    interpolation.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 05 October 2012.*
