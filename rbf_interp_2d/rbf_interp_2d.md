RBF\_INTERP\_2D\
Radial Basis Function Interpolation in 2D {#rbf_interp_2d-radial-basis-function-interpolation-in-2d align="center"}
=========================================

------------------------------------------------------------------------

**RBF\_INTERP\_2D** is a C++ library which defines and evaluates radial
basis function (RBF) interpolants to 2D data.

A radial basis interpolant is a useful, but expensive, technique for
definining a smooth function which interpolates a set of function values
specified at an arbitrary set of data points.

Given nd multidimensional points xd with function values fd, and a basis
function phi(r), the form of the interpolant is

           f(x) = sum ( 1 <= i <= nd ) w(i) * phi(||x-xd(i)||)
          

where the weights w have been precomputed by solving

            sum ( 1 <= i <= nd ) w(i) * phi(||xd(j)-xd(i)||) = fd(j)
          

Although the technique is generally applied in a multidimensional
setting, in this directory we look specifically at the case involving 2D
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

**RBF\_INTERP\_2D** needs access to the R8LIB library. The test program
also needs access to the TEST\_INTERP\_2D library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RBF\_INTERP\_2D** is available in [a C
version](../../c_src/rbf_interp_2d/rbf_interp_2d.html) and [a C++
version](../../cpp_src/rbf_interp_2d/rbf_interp_2d.html) and [a
FORTRAN77 version](../../f77_src/rbf_interp_2d/rbf_interp_2d.html) and
[a FORTRAN90 version](../../f_src/rbf_interp_2d/rbf_interp_2d.html) and
[a MATLAB version](../../m_src/rbf_interp_2d/rbf_interp_2d.html).

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

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines, using double precision real (R8) arithmetic.

[RBF\_INTERP\_1D](../../cpp_src/rbf_interp_1d/rbf_interp_1d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

[RBF\_INTERP\_ND](../../cpp_src/rbf_interp_nd/rbf_interp_nd.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to multidimensional data.

[SHEPARD\_INTERP\_2D](../../cpp_src/shepard_interp_2d/shepard_interp_2d.html),
a C++ library which defines and evaluates Shepard interpolants to 2D
data, based on inverse distance weighting.

[TEST\_INTERP\_2D](../../cpp_src/test_interp_2d/test_interp_2d.html), a
C++ library which defines test problems for interpolation of data z(x,y)
of a 2D argument.

[TOMS886](../../cpp_src/toms886/toms886.html), a C++ library which
defines the Padua points for interpolation in a 2D region, including the
rectangle, triangle, and ellipse, by Marco Caliari, Stefano de Marchi,
Marco Vianello. This is a C++ version of ACM TOMS algorithm 886.

[VANDERMONDE\_INTERP\_2D](../../cpp_src/vandermonde_interp_2d/vandermonde_interp_2d.html),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
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

-   [rbf\_interp\_2d.cpp](rbf_interp_2d.cpp), the source code.
-   [rbf\_interp\_2d.hpp](rbf_interp_2d.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [rbf\_interp\_2d\_prb.cpp](rbf_interp_2d_prb.cpp), a sample calling
    program.
-   [rbf\_interp\_2d\_prb\_output.txt](rbf_interp_2d_prb_output.txt),
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

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 October 2012.*
