VANDERMONDE\_INTERP\_1D\
Polynomial Interpolation with the Vandermonde Matrix {#vandermonde_interp_1d-polynomial-interpolation-with-the-vandermonde-matrix align="center"}
====================================================

------------------------------------------------------------------------

**VANDERMONDE\_INTERP\_1D** is a C++ library which finds a polynomial
interpolant to data by setting up and solving a linear system involving
the Vandermonde matrix, creating graphics files for processing by
gnuplot.

This software is primarily intended as an illustration of the problems
that can occur when the interpolation problem is naively formulated
using the Vandermonde matrix. If the underlying interpolating basis is
the usual family of monomials, then the Vandermonde matrix will very
quickly become ill-conditioned for almost any set of nodes.

If the nodes can be selected, this can provide a small amount of
improvement, but, if a polynomial interpolant is desired, a better
strategy is to change the basis, which is what is done with the Lagrange
interpolation method, in which case, essentially, the linear system to
be solved becomes the identity matrix.

VANDERMONDE\_INTERP\_1D needs access to the QR\_SOLVE and R8LIB
libraries. The test code also needs access to the CONDITION and
TEST\_INTERP libraries.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**VANDERMONDE\_INTERP\_1D** is available in [a C
version](../../c_src/vandermonde_interp_1d/vandermonde_interp_1d.html)
and [a C++
version](../../cpp_src/vandermonde_interp_1d/vandermonde_interp_1d.html)
and [a FORTRAN77
version](../../f77_src/vandermonde_interp_1d/vandermonde_interp_1d.html)
and [a FORTRAN90
version](../../f_src/vandermonde_interp_1d/vandermonde_interp_1d.html)
and [a MATLAB
version](../../m_src/vandermonde_interp_1d/vandermonde_interp_1d.html)
and [a Python
version](../../py_src/vandermonde_interp_1d/vandermonde_interp_1d.html).

ef =
"../../m\_src/vandermonde\_interp\_1d/vandermonde\_interp\_1d.html"&gt;a
MATLAB version.

### Related Data and Programs: {#related-data-and-programs align="center"}

[BARYCENTRIC\_INTERP\_1D](../../cpp_src/barycentric_interp_1d/barycentric_interp_1d.html),
a C++ library which defines and evaluates the barycentric Lagrange
polynomial p(x) which interpolates a set of data, so that p(x(i)) =
y(i). The barycentric approach means that very high degree polynomials
can safely be used.

[CHEBYSHEV\_INTERP\_1D](../../cpp_src/chebyshev_interp_1d/chebyshev_interp_1d.html),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

[CONDITION](../../cpp_src/condition/condition.html), a C++ library which
implements methods of computing or estimating the condition number of a
matrix.

[DIVDIF](../../cpp_src/divdif/divdif.html), a C++ library which uses
divided differences to compute the polynomial interpolant to a given set
of data.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[HERMITE](../../cpp_src/hermite/hermite.html), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[LAGRANGE\_INTERP\_1D](../../cpp_src/lagrange_interp_1d/lagrange_interp_1d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[NEAREST\_INTERP\_1D](../../cpp_src/nearest_interp_1d/nearest_interp_1d.html),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion.

[NEWTON\_INTERP\_1D](../../cpp_src/newton_interp_1d/newton_interp_1d.html),
a C++ library which finds a polynomial interpolant to data using Newton
divided differences.

[PWL\_INTERP\_1D](../../cpp_src/pwl_interp_1d/pwl_interp_1d.html), a C++
library which interpolates a set of data using a piecewise linear
interpolant.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines, using double precision real (R8) arithmetic.

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

[VANDERMONDE\_APPROX\_1D](../../cpp_src/vandermonde_approx_1d/vandermonde_approx_1d.html),
a C++ library which finds a polynomial approximant to data of a 1D
argument by setting up and solving an overdetermined linear system for
the polynomial coefficients, involving the Vandermonde matrix.

[VANDERMONDE\_INTERP\_2D](../../cpp_src/vandermonde_interp_2d/vandermonde_interp_2d.html),
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

-   [vandermonde\_interp\_1d.cpp](vandermonde_interp_1d.cpp), the source
    code.
-   [vandermonde\_interp\_1d.hpp](vandermonde_interp_1d.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [vandermonde\_interp\_1d\_prb.cpp](vandermonde_interp_1d_prb.cpp), a
    sample calling program.
-   [vandermonde\_interp\_1d\_prb\_output.txt](vandermonde_interp_1d_prb_output.txt),
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

-   **VANDERMONDE\_INTERP\_1D\_COEF** computes a 1D polynomial
    interpolant.
-   **VANDERMONDE\_INTERP\_1D\_MATRIX** computes a Vandermonde 1D
    interpolation matrix.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 June 2013.*
