CHEBYSHEV\
Interpolation Using Chebyshev Polynomials {#chebyshev-interpolation-using-chebyshev-polynomials align="center"}
=========================================

------------------------------------------------------------------------

**CHEBYSHEV** is a C++ library which constructs the Chebyshev
interpolant to a function.

Note that the user is not free to choose the interpolation points.
Instead, the function f(x) will be evaluated at points chosen by the
algorithm. In the standard case, in which the interpolation interval is
\[-1,+1\], these points will be the zeros of the Chebyshev polynomial of
order N. However, the algorithm can also be applied to an interval of
the form \[a,b\], in which case the evaluation points are linearly
mapped from \[-1,+1\].

The resulting interpolant is defined by a set of N coefficients c(), and
has the form:

            C(f)(x) = sum ( 1 <= i <= n ) c(i) T(i-1,x) - 0.5 * c(1)
          

where T(i-1,x) is the (i-1)-th Chebyshev polynomial.

Within the interval \[-1,+1\], or the generalized interval \[a,b\], the
interpolant actually remains bounded by the sum of the absolute values
of the coefficients c(). It is therefore common to use Chebyshev
interpolants as approximating functions over a given interval.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CHEBYSHEV** is available in [a C
version](../../c_src/chebyshev/chebyshev.md) and [a C++
version](../../master/chebyshev/chebyshev.md) and [a FORTRAN77
version](../../f77_src/chebyshev/chebyshev.md) and [a FORTRAN90
version](../../f_src/chebyshev/chebyshev.md) and [a MATLAB
version](../../m_src/chebyshev/chebyshev.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../master/bernstein_polynomial/bernstein_polynomial.md),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV\_POLYNOMIAL](../../master/chebyshev_polynomial/chebyshev_polynomial.md),
a C++ library which evaluates the Chebyshev polynomial and associated
functions.

[CHEBYSHEV\_SERIES](../../master/chebyshev_series/chebyshev_series.md),
a C++ library which can evaluate a Chebyshev series approximating a
function f(x), while efficiently computing one, two or three derivatives
of the series, which approximate f'(x), f''(x), and f'''(x).

[CLAUSEN](../../master/clausen/clausen.md), a C++ library which
evaluates a Chebyshev interpolant to the Clausen function Cl2(x).

[DIVDIF](../../master/divdif/divdif.md), a C++ library which computes
interpolants by divided differences.

[HERMITE](../../master/hermite/hermite.md), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[HERMITE\_CUBIC](../../master/hermite_cubic/hermite_cubic.md), a C++
library which can compute the value, derivatives or integral of a
Hermite cubic polynomial, or manipulate an interpolating function made
up of piecewise Hermite cubic polynomials.

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[RBF\_INTERP](../../master/rbf_interp/rbf_interp.md), a C++ library
which defines and evaluates radial basis function (RBF) interpolants to
multidimensional data.

[SPLINE](../../master/spline/spline.md), a C++ library which includes
many routines to construct and evaluate spline interpolants and
approximants.

[TEST\_APPROX](../../master/test_approx/test_approx.md), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[TEST\_INTERP\_1D](../../master/test_interp_1d/test_interp_1d.md), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

### Reference: {#reference align="center"}

1.  Roger Broucke,\
    Algorithm 446: Ten Subroutines for the Manipulation of Chebyshev
    Series,\
    Communications of the ACM,\
    Volume 16, Number 4, April 1973, pages 254-256.
2.  Philip Davis,\
    Interpolation and Approximation,\
    Dover, 1975,\
    ISBN: 0-486-62495-1,\
    LC: QA221.D33
3.  William Press, Brian Flannery, Saul Teukolsky, William Vetterling,\
    Numerical Recipes in C: The Art of Scientific Computing,\
    Cambridge University Press, 1988,\
    ISBN: 0-521-35465-X,\
    LC: QA76.73.C15N865.

### Source Code: {#source-code align="center"}

-   [chebyshev.cpp](chebyshev.cpp), the source code.
-   [chebyshev.hpp](chebyshev.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [chebyshev\_prb.cpp](chebyshev_prb.cpp), a sample calling program.
-   [chebyshev\_prb\_output.txt](chebyshev_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CHEBYSHEV\_COEFFICIENTS** determines Chebyshev interpolation
    coefficients.
-   **CHEBYSHEV\_INTERPOLANT** evaluates a Chebyshev interpolant.
-   **CHEBYSHEV\_ZEROS** returns zeroes of the Chebyshev polynomial
    T(N)(X).
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 September 2011.*
