QUADRATURE\_WEIGHTS\_VANDERMONDE\_2D\
2D Quadrature Weights by Vandermonde Matrix {#quadrature_weights_vandermonde_2d-2d-quadrature-weights-by-vandermonde-matrix align="center"}
===========================================

------------------------------------------------------------------------

**QUADRATURE\_WEIGHTS\_VANDERMONDE\_2D** is a C++ library which
illustrates a method for computing the weights W of a 2D interpolatory
quadrature rule, assuming that the points (X,Y) have been specified, by
setting up a linear system involving the Vandermonde matrix.

We assume that the abscissas (quadrature points) have been chosen, that
the interval \[A,B\]x\[C,D\] is known, and that the integrals of
polynomials of total degree 0 through T can be computed.

### The Vandermonde Matrix {#the-vandermonde-matrix align="center"}

We assume that the quadrature formula approximates integrals of the
form:

            I(F) = Integral ( C <= Y <= D ) Integral ( A <= X <= B ) F(X,Y) dX dY
          

by specifying N=(T+1)\*(T+2)/2 points (X,Y) and weights W such that

            Q(F) = Sum ( 1 <= I <= N ) W(I) * F(X(I),Y(I))
          

Now let us assume that the points (X,Y) have been specified, but that
the corresponding values W remain to be determined.

If we require that the quadrature rule with N points integrates the
first N=(T+1)\*(T+2)/2 monomials exactly, then we have N conditions on
the weights W. (This means that we are assuming that N only takes on
appropriate values, namely 1, 3, 6, 10, 15, 21, 28, ...)

The K-th condition, for the monomial X\^I\*Y\^J, J = 0 to T, I = 0 to T
- J, has the form:

            W(1)*X(1)^I*Y(1)^J + W(2)*X(2)^I*Y(2)^j+...+W(N)*X(N)^I*Y(N)^J = (B^(I+1)-A^(I+1))*(D^(J+1)-C(J+1))/(I+1)/(J+1)
          

The corresponding matrix is known as a two-dimensional Vandermonde
matrix. It is theoretically guaranteed to be nonsingular as long as the
points (X,Y) are distinct and in "general position". The condition
number of the matrix grows quickly with increasing T.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUADRATURE\_WEIGHTS\_VANDERMONDE\_2D** is available in [a C
version](../../c_src/quadrature_weights_vandermonde_2d/quadrature_weights_vandermonde_2d.html)
and [a C++
version](../../cpp_src/quadrature_weights_vandermonde_2d/quadrature_weights_vandermonde_2d.html)
and [a FORTRAN77
version](../../f77_src/quadrature_weights_vandermonde_2d/quadrature_weights_vandermonde_2d.html)
and [a FORTRAN90
version](../../f_src/quadrature_weights_vandermonde_2d/quadrature_weights_vandermonde_2d.html)
and [a MATLAB
version](../../m_src/quadrature_weights_vandermonde_2d/quadrature_weights_vandermonde_2d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EXACTNESS\_2D](../../cpp_src/exactness_2d/exactness_2d.html), a C++
library which investigates the exactness of 2D quadrature rules that
estimate the integral of a function f(x,y) over a 2D domain.

[QUADRATURE\_LEAST\_SQUARES](../../cpp_src/quadrature_least_squares/quadrature_least_squares.html),
a C++ library which computes weights for "sub-interpolatory" quadrature
rules, that is, it estimates integrals by integrating a polynomial that
approximates the function data in a least squares sense.

[QUADRATURE\_GOLUB\_WELSCH](../../cpp_src/quadrature_golub_welsch/quadrature_golub_welsch.html),
a C++ library which computes the points and weights of a Gaussian
quadrature rule using the Golub-Welsch procedure, assuming that the
points have been specified.

[QUADRATURE\_WEIGHTS\_VANDERMONDE](../../cpp_src/quadrature_weights_vandermonde/quadrature_weights_vandermonde.html),
a C++ library which computes the weights of a 1D quadrature rule using
the Vandermonde matrix, assuming that the points have been specified.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for 1-dimensional domains.

[TOMS655](../../cpp_src/toms655/toms655.html), a C++ library which
computes the weights for interpolatory quadrature rule;\
this library is commonly called **IQPACK**;\
this is a FORTRAN90 version of ACM TOMS algorithm 655.

[VANDERMONDE](../../cpp_src/vandermonde/vandermonde.html), a C++ library
which carries out certain operations associated with the Vandermonde
matrix.

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

-   [qwv\_2d.cpp](qwv_2d.cpp), the source code.
-   [qwv\_2d.hpp](qwv_2d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [qwv\_2d\_prb.cpp](qwv_2d_prb.cpp), a sample calling program.
-   [qwv\_2d\_prb\_output.txt](qwv_2d_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **QWV\_2D** computes 2D quadrature weights using the Vandermonde
    matrix.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_SOLVE2** computes the solution of an N by N linear system.
-   **R8VEC\_EVEN\_NEW** returns an R8VEC of values evenly spaced
    between ALO and AHI.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_PRINT\_16** prints an R8VEC to 16 decimal places.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 28 May 2014.*
