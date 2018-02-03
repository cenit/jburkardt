BARYCENTRIC\_INTERP\_1D\
Barycentric Lagrange Polynomial Interpolation in 1D {#barycentric_interp_1d-barycentric-lagrange-polynomial-interpolation-in-1d align="center"}
===================================================

------------------------------------------------------------------------

**BARYCENTRIC\_INTERP\_1D** is a C++ library which defines and evaluates
the Lagrange polynomial p(x) which interpolates a set of data, so that
p(x(i)) = y(i). Because a barycentric formulation is used, polynomials
of very high degree can safely be used.

Efficient calculation of the barycentric polynomial interpolant requires
that the function to be interpolated be sampled at points from a known
family, for which the interpolation weights have been precomputed. Such
families include

-   evenly spaced points (but this results in an ill-conditioned
    system);
-   Chebyshev Type 1 points;
-   Chebyshev Type 2 points;
-   Chebyshev Type 3 points;
-   Chebyshev Type 4 points;

and any linear mapping of these points to an arbitary interval \[A,B\].

*Note that in the Berrut/Trefethen reference, there is a significant
typographical error on page 510, where an adjustment is made in cases
where the polynomial is to be evaluated exactly at a data point. The
paper reads:*

              exact(xdiff==0) = 1;
            

but it should read

              exact(xdiff==0) = j;
            

BARYCENTRIC\_INTERP\_1D requires the R8LIB library. The test also
requires the TEST\_INTERP\_1D library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BARYCENTRIC\_INTERP\_1D** is available in [a C
version](../../c_src/barycentric_interp_1d/barycentric_interp_1d.md)
and [a C++
version](../../master/barycentric_interp_1d/barycentric_interp_1d.md)
and [a FORTRAN90
version](../../f_src/barycentric_interp_1d/barycentric_interp_1d.md)
and [a MATLAB
version](../../m_src/barycentric_interp_1d/barycentric_interp_1d.md)
and [a Python
version](../../py_src/barycentric_interp_1d/barycentric_interp_1d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV\_INTERP\_1D](../../master/chebyshev_interp_1d/chebyshev_interp_1d.md),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

[LAGRANGE\_APPROX\_1D](../../m_src/lagrange_approx_1d/lagrange_approx_1d.md),
a MATLAB library which defines and evaluates the Lagrange polynomial
p(x) of degree m which approximates a set of nd data points (x(i),y(i)).

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

[RBF\_INTERP\_1D](../../master/rbf_interp_1d/rbf_interp_1d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

[SHEPARD\_INTERP\_1D](../../master/shepard_interp_1d/shepard_interp_1d.md),
a C++ library which defines and evaluates Shepard interpolants to 1D
data, based on inverse distance weighting.

[SPLINE](../../master/spline/spline.md), a C++ library which
constructs and evaluates spline interpolants and approximants.

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
2.  Jean-Paul Berrut, Lloyd Trefethen,\
    Barycentric Lagrange Interpolation,\
    SIAM Review,\
    Volume 46, Number 3, September 2004, pages 501-517.
3.  Philip Davis,\
    Interpolation and Approximation,\
    Dover, 1975,\
    ISBN: 0-486-62495-1,\
    LC: QA221.D33
4.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.

### Source Code: {#source-code align="center"}

-   [barycentric\_interp\_1d.cpp](barycentric_interp_1d.cpp), the source
    code.
-   [barycentric\_interp\_1d.hpp](barycentric_interp_1d.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [barycentric\_interp\_1d\_prb.cpp](barycentric_interp_1d_prb.cpp), a
    sample calling program.
-   [barycentric\_interp\_1d\_prb\_output.txt](barycentric_interp_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LAGCHEBY1\_INTERP\_1D** evaluates the Lagrange Chebyshev 1
    interpolant.
-   **LAGCHEBY2\_INTERP\_1D** evaluates the Lagrange Chebyshev 2
    interpolant.
-   **LAGEVEN\_VALUE\_1D** evaluates the Lagrange evenly-spaced
    interpolant.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 October 2012.*
