QUADRATURE\_WEIGHTS\_VANDERMONDE\
Quadrature Weights by Vandermonde Matrix {#quadrature_weights_vandermonde-quadrature-weights-by-vandermonde-matrix align="center"}
========================================

------------------------------------------------------------------------

**QUADRATURE\_WEIGHTS\_VANDERMONDE** is a C++ library which illustrates
a method for computing the weights of a quadrature rule, assuming that
the points have been specified, by setting up a linear system involving
the Vandermonde matrix.

We assume that the abscissas (quadrature points) have been chosen, that
the interval \[A,B\] is known, and that the integrals of polynomials of
degree 0 through N-1 can be computed. The examples here use a finite
interval and a unit weight function, but the method can easily be
extended to non-finite intervals and non-unit weight functions.

### The Vandermonde Matrix {#the-vandermonde-matrix align="center"}

We assume that the quadrature formula approximates integrals of the
form:

            I(F) = Integral ( A <= X <= B ) F(X) dX 
          

by specifying N points X and weights W such that

            Q(F) = Sum ( 1 <= I <= N ) W(I) * F(X(I))
          

Now let us assume that the points X have been specified, but that the
corresponding values W remain to be determined.

If we require that the quadrature rule with N points integrates the
first N monomials exactly, then we have N conditions on the weights W.

The I-th condition, for the monomial X\^(I-1), has the form:

            W(1)*X(1)^(I-1) + W(2)*X(2)^(I-1)+...+W(N)*X(N)^(I-1) = (B^I-A^I)/I.
          

The corresponding matrix is known as the Vandermonde matrix. It is
theoretically guaranteed to be nonsingular as long as the X's are
distinct, but its condition number grows quickly with N. Therefore, this
simple, direct approach is often abandoned when more accuracy or high
order rules are needed.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUADRATURE\_WEIGHTS\_VANDERMONDE** is available in [a C
version](../../c_src/quadrature_weights_vandermonde/quadrature_weights_vandermonde.md)
and [a C++
version](../../master/quadrature_weights_vandermonde/quadrature_weights_vandermonde.md)
and [a FORTRAN77
version](../../f77_src/quadrature_weights_vandermonde/quadrature_weights_vandermonde.md)
and [a FORTRAN90
version](../../f_src/quadrature_weights_vandermonde/quadrature_weights_vandermonde.md)
and [a MATLAB
version](../../m_src/quadrature_weights_vandermonde/quadrature_weights_vandermonde.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CLENSHAW\_CURTIS\_RULE](../../master/clenshaw_curtis_rule/clenshaw_curtis_rule.md),
a C++ program which defines a Clenshaw Curtis quadrature rule.

[QUADRATURE\_LEAST\_SQUARES](../../master/quadrature_least_squares/quadrature_least_squares.md),
a C++ library which computes weights for "sub-interpolatory" quadrature
rules, that is, it estimates integrals by integrating a polynomial that
approximates the function data in a least squares sense.

[QUADRATURE\_GOLUB\_WELSCH](../../master/quadrature_golub_welsch/quadrature_golub_welsch.md),
a C++ library which computes the points and weights of a Gaussian
quadrature rule using the Golub-Welsch procedure, assuming that the
points have been specified.

[QUADRATURE\_WEIGHTS\_VANDERMONDE\_2D](../../master/quadrature_weights_vandermonde_2d/quadrature_weights_vandermonde_2d.md),
a C++ library which computes the weights of a 2D quadrature rule using
the Vandermonde matrix, assuming that the points have been specified.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines quadrature rules for 1-dimensional domains.

[TOMS655](../../master/toms655/toms655.md), a C++ library which
computes the weights for interpolatory quadrature rule;\
this library is commonly called **IQPACK**;\
this is a FORTRAN90 version of ACM TOMS algorithm 655.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
2.  Sylvan Elhay, Jaroslav Kautsky,\
    Algorithm 655: IQPACK, FORTRAN Subroutines for the Weights of
    Interpolatory Quadrature,\
    ACM Transactions on Mathematical Software,\
    Volume 13, Number 4, December 1987, pages 399-415.
3.  Jaroslav Kautsky, Sylvan Elhay,\
    Calculation of the Weights of Interpolatory Quadratures,\
    Numerische Mathematik,\
    Volume 40, 1982, pages 407-422.

### Source Code: {#source-code align="center"}

-   [qwv.cpp](qwv.cpp), the source code.
-   [qwv.hpp](qwv.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [qwv\_prb.cpp](qwv_prb.cpp), a sample calling program.
-   [qwv\_prb\_output.txt](qwv_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **QWV** computes quadrature weights using the Vandermonde matrix.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_SOLVE2** computes the solution of an N by N linear system.
-   **R8VEC\_EVEN\_NEW** returns an R8VEC of values evenly spaced
    between ALO and AHI.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 February 2014.*
