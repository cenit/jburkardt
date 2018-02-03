PWL\_INTERP\_1D\
Piecewise Linear Interpolation in 1D {#pwl_interp_1d-piecewise-linear-interpolation-in-1d align="center"}
====================================

------------------------------------------------------------------------

**PWL\_INTERP\_1D** is a C++ library which interpolates a set of data
with a piecewise linear function, creating graphics files for processing
by GNUPLOT.

PWL\_INTERP\_1D needs the R8LIB library. The test code also needs the
TEST\_INTERP library.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PWL\_INTERP\_1D** is available in [a C
version](../../c_src/pwl_interp_1d/pwl_interp_1d.md) and [a C++
version](../../master/pwl_interp_1d/pwl_interp_1d.md) and [a
FORTRAN77 version](../../f77_src/pwl_interp_1d/pwl_interp_1d.md) and
[a FORTRAN90 version](../../f_src/pwl_interp_1d/pwl_interp_1d.md) and
[a MATLAB version](../../m_src/pwl_interp_1d/pwl_interp_1d.md) and [a
Python version](../../py_src/pwl_interp_1d/pwl_interp_1d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BARYCENTRIC\_INTERP\_1D](../../master/barycentric_interp_1d/barycentric_interp_1d.md),
a C++ library which defines and evaluates the barycentric Lagrange
polynomial p(x) which interpolates a set of data, so that p(x(i)) =
y(i). The barycentric approach means that very high degree polynomials
can safely be used.

[CHEBYSHEV\_INTERP\_1D](../../master/chebyshev_interp_1d/chebyshev_interp_1d.md),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate the use of the gnuplot graphics program.

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[NEAREST\_INTERP\_1D](../../master/nearest_interp_1d/nearest_interp_1d.md),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion.

[NEWTON\_INTERP\_1D](../../master/newton_interp_1d/newton_interp_1d.md),
a C++ library which finds a polynomial interpolant to data using Newton
divided differences.

[PWL\_APPROX\_1D](../../master/pwl_approx_1d/pwl_approx_1d.md), a C++
library which approximates a set of data using a piecewise linear
function.

[PWL\_INTERP\_2D](../../master/pwl_interp_2d/pwl_interp_2d.md), a C++
library which evaluates a piecewise linear interpolant to data defined
on a regular 2D grid.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_1D](../../master/rbf_interp_1d/rbf_interp_1d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

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

-   [pwl\_interp\_1d.cpp](pwl_interp_1d.cpp), the source code.
-   [pwl\_interp\_1d.hpp](pwl_interp_1d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pwl\_interp\_1d\_prb.cpp](pwl_interp_1d_prb.cpp), a sample calling
    program.
-   [pwl\_interp\_1d\_prb\_output.txt](pwl_interp_1d_prb_output.txt),
    the output file.

The test program makes data files that can be used by GNUPLOT to create
graphics:

-   [data1.txt](data1.txt)
-   [interp1.txt](interp1.txt)
-   [commands1.txt](commands1.txt)
-   [plot1.png](plot1.png)
-   [data2.txt](data2.txt)
-   [interp2.txt](interp2.txt)
-   [commands2.txt](commands2.txt)
-   [plot2.png](plot2.png)
-   [data3.txt](data3.txt)
-   [interp3.txt](interp3.txt)
-   [commands3.txt](commands3.txt)
-   [plot3.png](plot3.png)
-   [data4.txt](data4.txt)
-   [interp4.txt](interp4.txt)
-   [commands4.txt](commands4.txt)
-   [plot4.png](plot4.png)
-   [data5.txt](data5.txt)
-   [interp5.txt](interp5.txt)
-   [commands5.txt](commands5.txt)
-   [plot5.png](plot5.png)
-   [data6.txt](data6.txt)
-   [interp6.txt](interp6.txt)
-   [commands6.txt](commands6.txt)
-   [plot6.png](plot6.png)
-   [data7.txt](data7.txt)
-   [interp7.txt](interp7.txt)
-   [commands7.txt](commands7.txt)
-   [plot7.png](plot7.png)
-   [data8.txt](data8.txt)
-   [interp8.txt](interp8.txt)
-   [commands8.txt](commands8.txt)
-   [plot8.png](plot8.png)

### List of Routines: {#list-of-routines align="center"}

-   **PWL\_BASIS\_1D** evaluates a 1D piecewise linear basis function.
-   **PWL\_INTERP\_1D** evaluates the piecewise linear interpolant.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 May 2013.*
