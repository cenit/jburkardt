TEST\_INTERP\_ND\
Test Functions for Multidimensional Interpolation {#test_interp_nd-test-functions-for-multidimensional-interpolation align="center"}
=================================================

------------------------------------------------------------------------

**TEST\_INTERP\_ND** is a C++ library which provides test functions for
multidimensional interpolation.

All the functions are defined over the unit hypercube \[0,1\]\^M, for
arbitrary spatial dimension M. They include:

1.  Oscillatory;
2.  Product Peak;
3.  Corner Peak;
4.  Gaussian;
5.  Continuous;
6.  Discontinuous;

For each function, methods are provided to evaluate:

-   the function, f(x);
-   the derivative with respect to any coordinate, dfdx(i);
-   the integral of f(x) over the unit hypercube;

Most of the functions include a shift vector w whose entries can be
chosen randomly in the unit hypercube, and a coefficient vector c whose
entries should be positive, and for which the integration problem
becomes harder as the sum of the entries increases.

**TEST\_INTERP\_ND** requires access to the R8LIB library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_INTERP\_ND** is available in [a C
version](../../c_src/test_interp_nd/test_interp_nd.html) and [a C++
version](../../cpp_src/test_interp_nd/test_interp_nd.html) and [a
FORTRAN77 version](../../f77_src/test_interp_nd/test_interp_nd.html) and
[a FORTRAN90 version](../../f_src/test_interp_nd/test_interp_nd.html)
and [a MATLAB version](../../m_src/test_interp_nd/test_interp_nd.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_ND](../../cpp_src/lagrange_interp_nd/lagrange_interp_nd.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data depending on a multidimensional
argument x that was evaluated on a product grid, so that p(x(i)) = z(i).

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_ND](../../cpp_src/rbf_interp_nd/rbf_interp_nd.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to multidimensional data.

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

[TEST\_INTERP\_1D](../../cpp_src/test_interp_1d/test_interp_1d.html), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

[TEST\_INTERP\_2D](../../cpp_src/test_interp_2d/test_interp_2d.html), a
C++ library which defines test problems for interpolation of data
z(x,y)), depending on a 2D argument.

### Reference: {#reference align="center"}

1.  Alan Genz,\
    Testing Multidimensional Integration Routines,\
    in Tools, Methods, and Languages for Scientific and Engineering
    Computation,\
    edited by B Ford, JC Rault, F Thomasset,\
    North-Holland, 1984, pages 81-94,\
    ISBN: 0444875700,\
    LC: Q183.9.I53.
2.  Alan Genz,\
    A Package for Testing Multiple Integration Subroutines,\
    in Numerical Integration: Recent Developments, Software and
    Applications,\
    edited by Patrick Keast, Graeme Fairweather,\
    Reidel, 1987, pages 337-340,\
    ISBN: 9027725144,\
    LC: QA299.3.N38.

### Source Code: {#source-code align="center"}

-   [test\_interp\_nd.cpp](test_interp_nd.cpp), the source code.
-   [test\_interp\_nd.hpp](test_interp_nd.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_interp\_nd\_prb.cpp](test_interp_nd_prb.cpp), a sample
    calling program.
-   [test\_interp\_nd\_prb\_output.txt](test_interp_nd_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CSEVL** evaluates a Chebyshev series.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **INITS** initializes a Chebyshev series.
-   **P00\_CW** computes a random C parameter vector for any problem.
-   **P00\_D** returns a derivative component of any function.
-   **P00\_F** returns the value of any function.
-   **P00\_PROB\_NUM** returns the number of test functions available.
-   **P00\_Q** returns the integral of any function.
-   **P00\_TITLE** returns the title for any function.
-   **P00\_W** computes a random W parameter vector for any problem.
-   **P01\_D** evaluates any derivative component for problem p01.
-   **P01\_F** evaluates the function for problem p01.
-   **P01\_Q** evaluates the integral for problem p01.
-   **P01\_TITLE** returns the name of problem p01.
-   **P02\_D** evaluates an derivative component for problem p02.
-   **P02\_F** evaluates the function for problem p02.
-   **P02\_Q** evaluates the integral for problem p02.
-   **P02\_TITLE** returns the title of problem p02.
-   **P03\_D** evaluates any derivative component for problem p03.
-   **P03\_F** evaluates the function for problem p03.
-   **P03\_Q** evaluates the integral for problem p03.
-   **P03\_TITLE** returns the title of problem p03.
-   **P04\_D** evaluates any derivative component for problem p04.
-   **P04\_F** evaluates the function for problem p04.
-   **P04\_Q** evaluates the integral for problem p04.
-   **P04\_TITLE** returns the title of problem p04.
-   **P05\_D** evaluates any derivative component for problem p05.
-   **P05\_F** evaluates the function for problem p05.
-   **P05\_Q** evaluates the integral for problem p05.
-   **P05\_TITLE** returns the title of problem p05.
-   **P06\_D** evaluates any derivative component for problem p06.
-   **P06\_F** evaluates the function for problem p06.
-   **P06\_Q** evaluates the integral for problem p06.
-   **P06\_TITLE** returns the title of problem p06.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ERROR** evaluates the error function of an R8 argument.
-   **R8\_ERRORC** evaluates the co-error function of an R8 argument.
-   **R8\_MACH** returns double precision real machine constants.
-   **TUPLE\_NEXT** computes the next element of a tuple space.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 29 August 2012.*
