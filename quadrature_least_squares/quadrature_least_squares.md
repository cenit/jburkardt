QUADRATURE\_LEAST\_SQUARES\
Least Squares Quadrature Rules {#quadrature_least_squares-least-squares-quadrature-rules align="center"}
==============================

------------------------------------------------------------------------

**QUADRATURE\_LEAST\_SQUARES** is a C++ library which computes weights
for "sub-interpolatory" quadrature rules.

A large class of quadrature rules may be computed by specifying a set of
N abscissas, or sample points, X(1:N), determining the Lagrange
interpolation basis functions L(1:N), and then setting a weight vector W
by

            W(i) = I(L(i))
          

after which, the integral of any function f(x) is estimated by

            I(f) \approx Q(f) = sum ( 1 <= i <= N ) W(i) * f(X(i))
          

We call this an interpolatory rule because the function f(x) has first
been interpolated by

            f(x) \approx sum ( 1 <= i <= N ) L(i) * f(X(i))
          

after which, we apply the integration operator:

            I(f) \approx I(sum ( 1 <= i <= N )   L(i)  * f(X(i)))
                 =         sum ( 1 <= i <= N ) I(L(i)) * f(X(i))
                 =         sum ( 1 <= i <= N )   W(i)  * f(X(i)).
          

For badly chosen sets of X, or high values of N, or unruly functions
f(x), interpolation may be a bad way to approximate the function. An
alternative is to seek a polynomial interpolant of degree D &lt; N-1,
and then integrate that. We might call this a "sub-interpolatory" rule.

As it turns out, a natural way to seek such a rule is to write out the N
by D+1 Vandermonde matrix and use a least squares solver. Even though
the N by N Vandermonde matrix is ill-conditioned for Gauss elimination,
a least squares approach can produce usable solutions from the N by D+1
matrix.

The outline of this procedure was devised by Professor Mac Hyman of
Tulane University.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUADRATURE\_LEAST\_SQUARES** is available in [a C
version](../../c_src/quadrature_least_squares/quadrature_least_squares.html)
and [a C++
version](../../cpp_src/quadrature_least_squares/quadrature_least_squares.html)
and [a FORTRAN77
version](../../f77_src/quadrature_least_squares/quadrature_least_squares.html)
and [a FORTRAN90
version](../../f_src/quadrature_least_squares/quadrature_least_squares.html)
and [a MATLAB
version](../../m_src/quadrature_least_squares/quadrature_least_squares.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CLENSHAW\_CURTIS\_RULE](../../cpp_src/clenshaw_curtis_rule/clenshaw_curtis_rule.html),
a C++ library which defines a multiple dimension Clenshaw Curtis
quadrature rule.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a rectangular linear system
A\*x=b.

[QUADMOM](../../cpp_src/quadmom/quadmom.html), a C++ library which
computes a Gaussian quadrature rule for a weight function rho(x) based
on the Golub-Welsch procedure that only requires knowledge of the
moments of rho(x).

[QUADRATURE\_GOLUB\_WELSCH](../../cpp_src/quadrature_golub_welsch/quadrature_golub_welsch.html),
a C++ library which computes the points and weights of a Gaussian
quadrature rule using the Golub-Welsch procedure, assuming that the
points have been specified.

[QUADRATURE\_WEIGHTS\_VANDERMONDE](../../cpp_src/quadrature_weights_vandermonde/quadrature_weights_vandermonde.html),
a C++ library which computes the weights of a quadrature rule using the
Vandermonde matrix, assuming that the points have been specified.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for approximating an integral over a 1D domain.

[QUADRULE\_FAST](../../cpp_src/quadrule_fast/quadrule_fast.html), a C++
library which defines efficient versions of a few 1D quadrature rules.

[TEST\_INT](../../cpp_src/test_int/test_int.html), a C++ library which
defines test integrands for 1D quadrature rules.

[TRUNCATED\_NORMAL\_RULE](../../cpp_src/truncated_normal_rule/truncated_normal_rule.html),
a C++ program which computes a quadrature rule for a normal probability
density function (PDF), also called a Gaussian distribution, that has
been truncated to \[A,+oo), (-oo,B\] or \[A,B\].

[VANDERMONDE](../../cpp_src/vandermonde/vandermonde.html), a C++ library
which carries out certain operations associated with the Vandermonde
matrix.

### Source Code: {#source-code align="center"}

-   [qls.cpp](qls.cpp), the source code.
-   [qls.hpp](qls.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [qls\_prb.cpp](qls_prb.cpp), a sample calling program.
-   [qls\_prb\_output.txt](qls_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **NCC\_SET** sets abscissas and weights for Newton-Cotes closed
    quadrature.
-   **R8MAT\_MV** multiplies a matrix times a vector.
-   **R8VEC\_UNIFORM\_AB** returns a scaled pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WEIGHTS\_LS** computes weights for a least squares quadrature
    rule.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 April 2014.*
