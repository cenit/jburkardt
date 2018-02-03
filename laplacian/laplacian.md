LAPLACIAN\
The Discrete Laplacian Operator {#laplacian-the-discrete-laplacian-operator align="center"}
===============================

------------------------------------------------------------------------

**LAPLACIAN** is a C++ library which carries out computations related to
the discrete Laplacian operator, including full or sparse evaluation,
evaluation for unequally spaced data sampling points, application to a
set of data samples, solution of associated linear systems, eigenvalues
and eigenvectors, and extension to 2D and 3D geometry.

For a (twice-continuously differentiable) function U(X) of a
one-dimensional variable X, the (continuous) Laplacian operator L(U)(X)
is simply the second derivative:

            L(U)(X) = d^2 U(X)/dX^2
          

for a function of two dimensions, we have

            L(U)(X,Y) = d^2 U(X,Y)/dX^2 + d^2 U(X,Y)/dY^2
          

and so on. The Laplacian is important mathematically because it arises
naturally in the mathematical model of many important physical systems,
such as the variation of temperature in a heated object.

The discrete Laplacian is an approximation to the continuous Laplacian
that is appropriate when data is known or sampled only at finitely many
points. It is often the case that these points are evenly spaced in a
line or grid.

The one-dimensional discrete Laplacian Suppose that a function U(X) is
known at three points X-H, X and X+H. Then the discrete Laplacian
operator, applied to this data, is simply the standard approximation to
the second derivative:

            L(U)(X) = ( + 2 U(X) 
                        -   U(X-H)
                        -   U(X+H) ) / H^2
          

The 2-dimensional analog, assuming that (X,Y) data is available at the
uniform spacing H, is:

            L(U)(X,Y) = ( + 4 U(X,Y)
                          -   U(X-H,Y-H) - U(X-H,Y+H)
                          -   U(X+H,Y-H) - U(X+H,Y+H) ) / H^2
          

and similar results apply for higher dimensions.

If the data is not available at equally spaced points, then the
computation becomes somewhat more involved. However, simply using Taylor
series, we have:

            U(X+H1) = U(X) + U' * H1 + U'' * H1^2 / 2 + U''' H1^3 / 6 + ...
            U(X+H2) = U(X) + U' * H2 + U'' * H2^2 / 2 + U''' H2^3 / 6 + ...
          

from which we can determine that:

            H2 * U(X+H1) - H1 * U(X+H2) - ( H2 - H1 ) * U(X) =
              ( H2 * H1^2 / 2 - H1 * H2^2 / 2 ) * U''
            + ( H2 * H1^3 / 6 - H1 * H3^3 / 6 ) * U'''
            + higher order terms
          

and hence, we have the approximation:

            L(U)(X) = ( H2 * U(X+H1) - H1 * U(X+H2) - ( H2 - H1 ) * U(X) )
                    / ( H2 * H1^2 / 2 - H1 * H2^2 / 2 )
          

Again, corresponding results can be determined for higher dimensions, in
cases where the data is sampled along coordinate lines, but with
nonuniform spacing.

Now, let us consider the 1-dimensional case, where U(X) is available at
N+2 points equally spaced by H, and indexed from 0 to N+1. Let U now be
the vector of values U(X(0)), U(X(2)), ..., U(X(N+1)), and let U(i)
indicate the function value U(X(i)). For all but the first and last
indices, it is easy to estimate the second derivative, using the
formula:

            L(Ui) = U''(i) = ( - U(i-1) + 2 U(i) - U(i+1) ) / h^2 
          

This is a linear operation. It takes N+2 values U and produces N values
L(Ui), for i = 1 to N. It has the matrix form:

            L(Ui) = L * U
          

where the N by N+2 matrix L has the form (if N = 4, and H = 1 ):

             -1  2 -1  0  0  0
              0 -1  2 -1  0  0
              0  0 -1  2 -1  0
              0  0  0 -1  2 -1
          

Square matrices are much more convenient for analysis, so let us assume
either that U(1) and U(N) are zero, or that we can somehow neglect or
defer the analysis of the first and last columns. In that case, we have
our first example of a discrete Laplacian matrix, in this case for N = 4
and H = 1:

               2 -1  0  0 
              -1  2 -1  0 
               0 -1  2 -1 
               0  0 -1  2 
          

The purpose of this library is to study issues related to matrices of
this form, including:

-   producing a copy of the matrix in full storage mode;
-   producing a copy of the matrix in sparse storage mode;
-   handling cases where U(0) or U(N+1) are not given, but instead
    derivative information or periodic boundary conditions are applied;
-   determining the result of applying the discrete Laplacian to data;
    that is, multiplying the matrix times a vector of data;
-   solving a linear system involving the discrete Laplacian;
-   determining the eigenvalues and eigenvectors;
-   handling cases where the spacing is nonuniform;
-   handling cases in 2D or 3D.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAPLACIAN** is available in [a C
version](../../c_src/laplacian/laplacian.html) and [a C++
version](../../cpp_src/laplacian/laplacian.html) and [a FORTRAN77
version](../../f77_src/laplacian/laplacian.html) and [a FORTRAN90
version](../../f_src/laplacian/laplacian.html) and [a MATLAB
version](../../m_src/laplacian/laplacian.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices for which some of the determinant, eigenvalues,
inverse, null vectors, P\*L\*U factorization or linear system solution
are already known.

### Source Code: {#source-code align="center"}

-   [laplacian.cpp](laplacian.cpp), the source code.
-   [laplacian.hpp](laplacian.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [laplacian\_prb.cpp](laplacian_prb.cpp), a sample calling program.
-   [laplacian\_prb\_output.txt](laplacian_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CHOLESKY\_UPPER\_ERROR** determines the error in an upper Cholesky
    factor.
-   **EIGEN\_ERROR** determines the error in a (right) eigensystem.
-   **INVERSE\_ERROR** determines the error in an inverse matrix.
-   **L1DD\_APPLY** applies the 1D DD Laplacian to a vector.
-   **L1DD\_CHOLESKY** computes the Cholesky factor of the 1D DD
    Laplacian.
-   **L1DD\_EIGEN** returns eigeninformation for the 1D DD Laplacian.
-   **L1DD\_FULL** stores the 1D DD Laplacian as a full matrix.
-   **L1DD\_FULL\_INVERSE** stores the inverse of the 1D DD Laplacian.
-   **L1DN\_APPLY** applies the 1D DN Laplacian to a vector.
-   **L1DN\_CHOLESKY** computes the Cholesky factor of the 1D DN
    Laplacian.
-   **L1DN\_EIGEN** returns eigeninformation for the 1D DN Laplacian.
-   **L1DN\_FULL** stores the 1D DN Laplacian as a full matrix.
-   **L1DN\_FULL\_INVERSE** stores the inverse of the 1D DN Laplacian.
-   **L1ND\_APPLY** applies the 1D ND Laplacian to a vector.
-   **L1ND\_CHOLESKY** computes the Cholesky factor of the 1D ND
    Laplacian.
-   **L1ND\_EIGEN** returns eigeninformation for the 1D ND Laplacian.
-   **L1ND\_FULL** stores the 1D ND Laplacian as a full matrix.
-   **L1ND\_FULL\_INVERSE** stores the inverse of the 1D ND Laplacian.
-   **L1NN\_APPLY** applies the 1D NN Laplacian to a vector.
-   **L1NN\_CHOLESKY** computes the Cholesky factor of the 1D NN
    Laplacian.
-   **L1NN\_EIGEN** returns eigeninformation for the 1D NN Laplacian.
-   **L1NN\_FULL** stores the 1D NN Laplacian as a full matrix.
-   **L1PP\_APPLY** applies the 1D PP Laplacian to a vector.
-   **L1PP\_CHOLESKY** computes the Cholesky factor of the 1D PP
    Laplacian.
-   **L1PP\_EIGEN** returns eigeninformation for the 1D PP Laplacian.
-   **L1PP\_FULL** stores the 1D PP Laplacian as a full matrix.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 October 2013.*
