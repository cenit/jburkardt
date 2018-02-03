VANDERMONDE\
Accurate Solution of Vandermonde Systems {#vandermonde-accurate-solution-of-vandermonde-systems align="center"}
========================================

------------------------------------------------------------------------

**VANDERMONDE** is a C++ library which implements the Bjork-Pereyra
algorithm for accurate solution of linear systems involving the
Vandermonde matrix.

A univariate NxN Vandermonde matrix is defined by a parameter vector
ALPHA of N distinct real values, and has the form:

            1             1            ... 1
            alpha1        alpha2       ... alphan
            alpha1^2      alpha2^2     ... alphan^2
            ...           ...          ... ...
            alpha1^(n-1)  alpha2^(n-1) ... alphan^(n-1)
          

If p(x) is a polynomial of degree N-1, which is required to interpolate
a function f(x) at N distinct points ALPHA, then the coefficients C of
the polynomial can be found from the interpolation equations, which can
be written as a linear system involving a transposed Vandermonde matrix:

            1    alpha1  alpha1^2  ... alpha1^(n-1)    c0           f(alpha1)
            1    alpha2  alpha2^2  ... alpha2^(n-1)    c1           f(alpha2)
            ...  ...     ...       ... ...             ...       =  ...
            1    alphan  alphan^2  ... alphan^(n-1)    c(n-1)       f(alphan)
          

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**VANDERMONDE** is available in [a C
version](../../c_src/vandermonde/vandermonde.md) and [a C++
version](../../master/vandermonde/vandermonde.md) and [a FORTRAN77
version](../../f77_src/vandermonde/vandermonde.md) and [a FORTRAN90
version](../../f_src/vandermonde/vandermonde.md) and [a MATLAB
version](../../m_src/vandermonde/vandermonde.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPLUS](../../master/linplus/linplus.md), a C++ library which
carries out operations such as matrix-vector products, matrix
factorization, direct and iterative linear solvers for matrices in a
variety of formats, including banded, border-banded, circulant, lower
triangular, pentadiagonal, sparse, symmetric, toeplitz, tridiagonal,
upper triangular and vandermonde formats.

[QUADRATURE\_WEIGHTS\_VANDERMONDE](../../master/quadrature_weights_vandermonde/quadrature_weights_vandermonde.md),
a C++ library which computes the weights of a quadrature rule using the
Vandermonde matrix, assuming that the points have been specified.

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
defines test matrices for which some of the determinant, eigenvalues,
inverse, null vectors, P\*L\*U factorization or linear system solution
are already known, including the Vandermonde matrix.

[VANDERMONDE\_APPROX\_1D](../../master/vandermonde_approx_1d/vandermonde_approx_1d.md),
a C++ library which finds a polynomial approximant to data of a 1D
argument by setting up and solving an overdetermined linear system for
the polynomial coefficients, involving the Vandermonde matrix.

[VANDERMONDE\_APPROX\_2D](../../master/vandermonde_approx_2d/vandermonde_approx_2d.md),
a C++ library which finds a polynomial approximant p(x,y) to data z(x,y)
of a 2D argument by setting up and solving an overdetermined linear
system for the polynomial coefficients involving the Vandermonde matrix.

[VANDERMONDE\_INTERP\_1D](../../master/vandermonde_interp_1d/vandermonde_interp_1d.md),
a C++ library which finds a polynomial interpolant to a function of 1D
data by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

[VANDERMONDE\_INTERP\_2D](../../master/vandermonde_interp_2d/vandermonde_interp_2d.md),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  Ake Bjorck, Victor Pereyra,\
    Solution of Vandermonde Systems of Equations,\
    Mathematics of Computation,\
    Volume 24, Number 112, October 1970, pages 893-903.
2.  Gustavo Galimberti, Victor Pereyra,\
    Numerical Differentiation and the Solution of Multidimensional
    Vandermonde Systems,\
    Mathematics of Computation,\
    Volume 24, Number 110, April 1970, pages 357-364.
3.  Nicholas Higham,\
    Stability analysis of algorithms for solving confluent
    Vandermonde-like systems,\
    SIAM Journal on Matrix Analysis and Applications,\
    Volume 11, 1990, pages 23-41.

### Source Code: {#source-code align="center"}

-   [vandermonde.cpp](vandermonde.cpp), the source code.
-   [vandermonde.hpp](vandermonde.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [vandermonde\_prb.cpp](vandermonde_prb.cpp), a sample calling
    program.
-   [vandermonde\_prb\_output.txt](vandermonde_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **BIVAND1** returns a bidimensional Vandermonde1 matrix.
-   **DVAND** solves a Vandermonde system A' \* x = b.
-   **DVANDPRG** solves a Vandermonde system A' \* x = f progressively.
-   **PVAND** solves a Vandermonde system A \* x = b.
-   **PVANDPRG** solves a Vandermonde system A \* x = f progressively.
-   **R8MAT\_MTV\_NEW** multiplies a transposed matrix times a vector.
-   **R8MAT\_MV\_NEW** multiplies a matrix times a vector.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_COPY\_NEW** copies an R8VEC to a new R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VAND1** returns the Vandermonde1 matrix A with 1's on the first
    row.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 18 April 2014.*
