INTERP\
Interpolation Routines {#interp-interpolation-routines align="center"}
======================

------------------------------------------------------------------------

**INTERP** is a C++ library which takes a set of data associated with
successive values of a parameter, and produces an interpolating function
which can be evaluated over a continuous range of the parameter.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**INTERP** is available in [a C version](../../c_src/interp/interp.md)
and [a C++ version](../../master/interp/interp.md) and [a FORTRAN77
version](../../f77_src/interp/interp.md) and [a FORTRAN90
version](../../f_src/interp/interp.md) and [a MATLAB
version](../../m_src/interp/interp.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../master/bernstein_polynomial/bernstein_polynomial.md),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[DIVDIF](../../master/divdif/divdif.md), a C++ library which uses
divided differences to interpolate data.

[HERMITE](../../master/hermite/hermite.md), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[LEBESGUE](../../master/lebesgue/lebesgue.md), a C++ library which is
given a set of nodes in 1D, and plots the Lebesgue function, and
estimates the Lebesgue constant, which measures the maximum magnitude of
the potential error of Lagrange polynomial interpolation, and which uses
gnuplot to make plots of the Lebesgue function.

[RBF\_INTERP](../../master/rbf_interp/rbf_interp.md), a C++ library
which defines and evaluates radial basis interpolants to
multidimensional data.

[SPLINE](../../master/spline/spline.md), a C++ library which computes
functions that approximate or interpolate data.

[TEST\_APPROX](../../master/test_approx/test_approx.md), a C++
library which defines a number of test problems for approximation and
interpolation.

[TEST\_INTERP\_1D](../../master/test_interp_1d/test_interp_1d.md), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

### Reference: {#reference align="center"}

1.  Samuel Conte, Carl deBoor,\
    Elementary Numerical Analysis,\
    Second Edition,\
    McGraw Hill, 1972,\
    ISBN: 07-012446-4,\
    LC: QA297.C65.

### Source Code: {#source-code align="center"}

-   [interp.cpp](interp.cpp), the source code.
-   [interp.hpp](interp.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [interp\_prb.cpp](interp_prb.cpp), a sample calling program.
-   [interp\_prb\_output.txt](interp_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CC\_ABSCISSAS** computes the Clenshaw Curtis abscissas.
-   **CC\_ABSCISSAS\_AB** computes the Clenshaw Curtis abscissas for the
    interval \[A,B\].
-   **F1\_ABSCISSAS** computes Fejer type 1 abscissas.
-   **F1\_ABSCISSAS\_AB** computes Fejer type 1 abscissas for the
    interval \[A,B\].
-   **F2\_ABSCISSAS** computes Fejer Type 2 abscissas.
-   **F2\_ABSCISSAS\_AB** computes Fejer Type 2 abscissas for the
    interval \[A,B\].
-   **INTERP\_LAGRANGE:** Lagrange polynomial interpolation to a curve
    in M dimensions.
-   **INTERP\_LINEAR:** piecewise linear interpolation to a curve in M
    dimensions.
-   **INTERP\_NEAREST:** Nearest neighbor interpolation to a curve in M
    dimensions.
-   **LAGRANGE\_VALUE** evaluates the Lagrange polynomials.
-   **NCC\_ABSCISSAS** computes the Newton Cotes Closed abscissas.
-   **NCC\_ABSCISSAS\_AB** computes the Newton Cotes Closed abscissas
    for \[A,B\].
-   **NCO\_ABSCISSAS** computes the Newton Cotes Open abscissas.
-   **NCO\_ABSCISSAS\_AB** computes the Newton Cotes Open abscissas for
    \[A,B\].
-   **PARAMETERIZE\_ARC\_LENGTH** parameterizes data by
    pseudo-arclength.
-   **PARAMETERIZE\_INDEX** parameterizes data by its index.
-   **R8MAT\_EXPAND\_LINEAR2** expands an R8MAT by linear interpolation.
-   **R8VEC\_ASCENDS\_STRICTLY** determines if an R8VEC is strictly
    ascending.
-   **R8VEC\_BRACKET** searches a sorted R8VEC for successive brackets
    of a value.
-   **R8VEC\_EXPAND\_LINEAR** linearly interpolates new data into an
    R8VEC.
-   **R8VEC\_EXPAND\_LINEAR2** linearly interpolates new data into an
    R8VEC.
-   **R8VEC\_SORTED\_NEAREST** returns the nearest element in a sorted
    R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 March 2014.*
