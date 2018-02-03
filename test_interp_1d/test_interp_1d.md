TEST\_INTERP\_1D\
Test Functions Y(X) for Interpolation of a 1D Argument {#test_interp_1d-test-functions-yx-for-interpolation-of-a-1d-argument align="center"}
======================================================

------------------------------------------------------------------------

**TEST\_INTERP\_1D** is a C++ library which defines test functions y(x)
that may be used to test interpolation algorithms involving a 1D
argument x.

TEST\_INTERP\_1D requires access to a compiled copy of the R8LIB
library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_INTERP\_1D** is available in [a C
version](../../c_src/test_interp_1d/test_interp_1d.html) and [a C++
version](../../cpp_src/test_interp_1d/test_interp_1d.html) and [a
FORTRAN77 version](../../f77_src/test_interp_1d/test_interp_1d.html) and
[a FORTRAN90 version](../../f_src/test_interp_1d/test_interp_1d.html)
and [a MATLAB version](../../m_src/test_interp_1d/test_interp_1d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BARYCENTRIC\_INTERP\_1D](../../cpp_src/barycentric_interp_1d/barycentric_interp_1d.html),
a C++ library which defines and evaluates the barycentric Lagrange
polynomial p(x) which interpolates a set of data, so that p(x(i)) =
y(i). The barycentric approach means that very high degree polynomials
can safely be used.

[BERNSTEIN\_POLYNOMIAL](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV\_INTERP\_1D](../../cpp_src/chebyshev_interp_1d/chebyshev_interp_1d.html),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

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
function.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_1D](../../cpp_src/rbf_interp_1d/rbf_interp_1d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

[SHEPARD\_INTERP\_1D](../../cpp_src/shepard_interp_1d/shepard_interp_1d.html),
a C++ library which defines and evaluates Shepard interpolants to 1D
data, based on inverse distance weighting.

[TEST\_INTERP\_2D](../../cpp_src/test_interp_2d/test_interp_2d.html), a
C++ library which defines test problems for interpolation of data
z(x,y), depending on a 2D argument.

[TEST\_INTERP\_ND](../../cpp_src/test_interp_nd/test_interp_nd.html), a
C++ library which defines test problems for interpolation of data z(x),
depending on an M-dimensional argument.

[VANDERMONDE\_INTERP\_1D](../../c_src/vandermonde_interp_1d/vandermonde_interp_1d.html),
a C library which finds a polynomial interpolant to data y(x) of a 1D
argument, by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  Philip Davis,\
    Interpolation and Approximation,\
    Dover, 1975,\
    ISBN: 0-486-62495-1,\
    LC: QA221.D33

### Source Code: {#source-code align="center"}

-   [test\_interp\_1d.cpp](test_interp_1d.cpp), the source code.
-   [test\_interp\_1d.hpp](test_interp_1d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_interp\_1d\_prb.cpp](test_interp_1d_prb.cpp), a sample
    calling program.
-   [test\_interp\_1d\_prb\_output.txt](test_interp_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **P00\_F** evaluates the function for any problem.
-   **P00\_PROB\_NUM** returns the number of problems.
-   **P00\_TITLE** returns the title of any problem.
-   **P01\_F** evaluates the function for problem p01.
-   **P01\_TITLE** returns the title of problem p01.
-   **P02\_F** evaluates the function for problem p01.
-   **P02\_TITLE** returns the title of problem p02.
-   **P03\_F** evaluates the function for problem p03.
-   **P03\_TITLE** returns the title of problem p03.
-   **P04\_F** evaluates the function for problem p04.
-   **P04\_TITLE** returns the title of problem p04.
-   **P05\_F** evaluates the function for problem p05.
-   **P05\_TITLE** returns the title of problem p05.
-   **P06\_F** evaluates the function for problem p06.
-   **P06\_TITLE** returns the title of problem p06.
-   **P07\_F** evaluates the function for problem p07.
-   **P07\_TITLE** returns the title of problem p07.
-   **P08\_F** evaluates the function for problem p08.
-   **P08\_TITLE** returns the title of problem p08.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 October 2012.*
