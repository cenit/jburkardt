QUADMOM\
Quadrature Rules from Weight Moments {#quadmom-quadrature-rules-from-weight-moments align="center"}
====================================

------------------------------------------------------------------------

**QUADMOM** is a C++ library which computes a Gaussian quadrature rule
for a weight function rho(x) based on the Golub-Welsch procedure that
only requires knowledge of the moments of rho(x).

The standard Golub-Welsch procedure expects to work with the
coefficients alpha() and beta() of the three term recursion for the
orthogonal polynomials associated with the weight function rho(x).

However, in the same paper, Golub and Welsch discuss a related procedure
which, to compute a Gaussian quadrature rule of order N, requires the
values of the first M=2\*N+1 moments associated with rho(x):

            mu(k) = integral x^k rho(x) dx,  0 <= k <= 2*n
          

This library demonstrates this moment-based procedure.

Executing the sample program requires access to the TOMS655 library as
well.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUADMOM** is available in [a C
version](../../c_src/quadmom/quadmom.html) and [a C++
version](../../cpp_src/quadmom/quadmom.html) and [a FORTRAN77
version](../../f77_src/quadmom/quadmom.html) and [a FORTRAN90
version](../../f_src/quadmom/quadmom.html) and [a MATLAB
version](../../m_src/quadmom/quadmom.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[QUADRATURE\_GOLUB\_WELSCH](../../cpp_src/quadrature_golub_welsch/quadrature_golub_welsch.html),
a C++ library which computes the points and weights of a Gaussian
quadrature rule using the Golub-Welsch procedure, assuming that the
points have been specified.

[QUADRATURE\_LEAST\_SQUARES](../../cpp_src/quadrature_least_squares/quadrature_least_squares.html),
a C++ library which computes weights for "sub-interpolatory" quadrature
rules, that is, it estimates integrals by integrating a polynomial that
approximates the function data in a least squares sense.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
contains information about quadrature rules, both as tabulated values,
and as computational procedures.

[TOMS655](../../cpp_src/toms655/toms655.html), a C++ library which
computes the weights for interpolatory quadrature rules; this library is
commonly called IQPACK, by Sylvan Elhay and Jaroslav Kautsky.

### Reference: {#reference align="center"}

1.  Sylvan Elhay, Jaroslav Kautsky,\
    Algorithm 655: IQPACK, FORTRAN Subroutines for the Weights of
    Interpolatory Quadrature,\
    ACM Transactions on Mathematical Software,\
    Volume 13, Number 4, December 1987, pages 399-415.
2.  Gene Golub, John Welsch,\
    Calculation of Gaussian Quadrature Rules,\
    Mathematics of Computation,\
    Volume 23, Number 106, April 1969, pages 221-230.
3.  Jaroslav Kautsky, Sylvan Elhay,\
    Calculation of the Weights of Interpolatory Quadratures,\
    Numerische Mathematik,\
    Volume 40, Number 3, October 1982, pages 407-422.

### Source Code: {#source-code align="center"}

-   [quadmom.cpp](quadmom.cpp), the source code.
-   [quadmom.hpp](quadmom.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [quadmom\_prb.cpp](quadmom_prb.cpp), a sample calling program.
-   [quadmom\_prb\_output.txt](quadmom_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **JACOBI\_EIGENVALUE** carries out the Jacobi eigenvalue iteration.
-   **MOMENT\_METHOD** computes a quadrature rule by the method of
    moments.
-   **MOMENTS\_LAGUERRE** returns moments of the Laguerre distribution.
-   **MOMENTS\_LEGENDRE** returns moments of the Legendre weight on
    \[A,B\].
-   **MOMENTS\_NORMAL\_01** returns moments of the standard Normal
    distribution.
-   **MOMENTS\_NORMAL** returns moments of the standard Normal
    distribution.
-   **MOMENTS\_TRUNCATED\_NORMAL\_AB:** moments of truncated Normal
    distribution.
-   **MOMENTS\_TRUNCATED\_NORMAL\_A:** moments of lower truncated
    Normal.
-   **MOMENTS\_TRUNCATED\_NORMAL\_B:** moments of upper truncated
    Normal.
-   **NORMAL\_01\_CDF** evaluates the Normal 01 CDF.
-   **NORMAL\_01\_PDF** evaluates the Normal 01 PDF.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8MAT\_CHOLESKY\_FACTOR\_UPPER:** the upper Cholesky factor of a
    symmetric R8MAT.
-   **R8MAT\_COPY\_NEW** copies one R8MAT to a "new" R8MAT.
-   **R8MAT\_DIAG\_GET\_VECTOR** gets the value of the diagonal of an
    R8MAT.
-   **R8MAT\_IDENTITY** sets the square matrix A to the identity.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRUNCATED\_NORMAL\_AB\_MOMENT:** moments of the truncated Normal
    PDF.
-   **TRUNCATED\_NORMAL\_A\_MOMENT:** moments of the lower truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_B\_MOMENT:** moments of the upper truncated
    Normal PDF.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 19 September 2013.*
