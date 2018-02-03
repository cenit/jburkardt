RBF\_INTERP\_ND\
Multidimensional Interpolation with Radial Basis Functions {#rbf_interp_nd-multidimensional-interpolation-with-radial-basis-functions align="center"}
==========================================================

------------------------------------------------------------------------

**RBF\_INTERP\_ND** is a C++ library which defines and evaluates radial
basis function (RBF) interpolants to multidimensional data.

A radial basis interpolant is a useful, but expensive, technique for
definining a smooth function which interpolates a set of function values
specified at an arbitrary set of data points.

Given nd multidimensional points xd with function values fd, and a basis
function phi(r), the form of the interpolant is

           f(x) = sum ( 1 <= i <= nd ) w(i) * phi(||x-xd(i)||)
          

where the weights w have been precomputed by solving

            sum ( 1 <= i <= nd ) w(i) * phi(||xd(j)-xd(i)||) = fd(j)
          

Four families of radial basis functions are provided.

-   phi1(r) = sqrt ( r\^2 + r0\^2 ) (multiquadric)
-   phi2(r) = 1 / sqrt ( r\^2 + r0\^2 ) (inverse multiquadric)
-   phi3(r) = r\^2 \* log ( r / r0 ) (thin plate spline)
-   phi4(r) = exp ( -0.5 r\^2 / r0\^2 ) (gaussian)

Each uses a "scale factor" r0, whose value is recommended to be greater
than the minimal distance between points, and rather less than the
maximal distance. Changing the value of r0 changes the shape of the
interpolant function.

RBF\_INTERP\_ND needs access to the R8LIB library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RBF\_INTERP\_ND** is available in [a C
version](../../c_src/rbf_interp_nd/rbf_interp_nd.html) and [a C++
version](../../cpp_src/rbf_interp_nd/rbf_interp_nd.html) and [a
FORTRAN77 version](../../f77_src/rbf_interp_nd/rbf_interp_nd.html) and
[a FORTRAN90 version](../../f_src/rbf_interp_nd/rbf_interp_nd.html) and
[a MATLAB version](../../m_src/rbf_interp_nd/rbf_interp_nd.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_ND](../../cpp_src/lagrange_interp_nd/lagrange_interp_nd.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data depending on a multidimensional
argument x that was evaluated on a product grid, so that p(x(i)) = z(i).

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_1D](../../cpp_src/rbf_interp_1d/rbf_interp_1d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

[RBF\_INTERP\_2D](../../cpp_src/rbf_interp_2d/rbf_interp_2d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 2D data.

[SHEPARD\_INTERP\_ND](../../cpp_src/shepard_interp_nd/shepard_interp_nd.html),
a C++ library which defines and evaluates Shepard interpolants to
multidimensional data, based on inverse distance weighting.

[SPARSE\_INTERP\_ND](../../cpp_src/sparse_interp_nd/sparse_interp_nd.html)
a C++ library which can be used to define a sparse interpolant to a
function f(x) of a multidimensional argument.

[SPINTERP](../../m_src/spinterp/spinterp.html), a MATLAB library which
carries out piecewise multilinear hierarchical sparse grid
interpolation; an earlier version of this software is ACM TOMS Algorithm
847, by Andreas Klimke;

[TEST\_INTERP\_ND](../../cpp_src/test_interp_nd/test_interp_nd.html), a
C++ library which defines test problems for interpolation of data z(x),
depending on an M-dimensional argument.

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

-   [rbf\_interp\_nd.cpp](rbf_interp_nd.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [rbf\_interp\_nd\_prb.cpp](rbf_interp_nd_prb.cpp), a sample calling
    program.
-   [rbf\_interp\_nd\_prb\_output.txt](rbf_interp_nd_prb_output.txt),
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
-   **RBF\_INTERP\_ND** evaluates a radial basis function interpolant.
-   **RBF\_WEIGHT** computes weights for radial basis function
    interpolation.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 October 2012.*
