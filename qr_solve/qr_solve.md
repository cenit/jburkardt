QR\_SOLVE\
Least Squares Solution of a Linear System A\*x=b {#qr_solve-least-squares-solution-of-a-linear-system-axb align="center"}
================================================

------------------------------------------------------------------------

**QR\_SOLVE** is a C++ library which computes a linear least squares
(LLS) solution of a system A\*x=b.

There are many possible cases that can arise with the matrix A.
Formally, we distinguish the cases M &lt; N, M = N, and M &gt; N, and we
expect trouble whenever M is not equal to N. Trouble may also arise when
M = N but the matrix is singular. Even if the matrix is, mathematically
speaking, non-singular, it may be so close to singularity that an
accurate solution is difficult to achieve.

When M &gt; N, we are placing more conditions than we have degrees of
freedom, so we suppose that such a linear system cannot be solved.
However, it is possible that the extra conditions are illusory, being
constructed from linear combinations of a fundamental set of N
conditions. Thus, a system that we typically call "overdetermined" can
have a solution in the ordinary sense, that satisfies all the
conditions, as long as the right hand side is "consistent". Another way
of saying this is that the system is solvable if the right hand side
lies in the column space of A...although that simply says that it is a
linear combination of the columns of A, which just says A\*x=b.

If A does not have full column rank, however, then even if the right
hand side lies in the column space of A, there will be more than one
linear combination of columns that produce b. Thus, the equations are
consistent, the system is solvable, but not uniquely so.

If M &lt; N, then we are placing fewer conditions than we have degrees
of freedom. As long as the right hand side lies in the column space of
A, we can guarantee that there will be multiple solutions.

Thus, the question of a "solution" to the problem A\*x=b is complicated
enough that it seems to defy a common algorithmic approach. Nonetheless,
there are some sensible, robust procedures for producing an answer that
corresponds to the classical solution, or solves the overdetermined
problem when the right hand side is consistent. This is the linear least
squares solution, which finds a vector x which minimizes the Euclidean
norm of the residual: ||r|| = ||A\*x-b||. This solution is produced by
computing the QR factorization of the matrix A

When there are multiple solutions to the problem, the QR approach used
here produces a solution. A more satisfactory approach, using the
pseudoinverse, will produce a solution x which satisfies the additional
constraint that it has the minimum norm of the entire family of
solutions. That pseudoinverse approach is not implemented in this
library. The singular value decomposition (SVD) can also produce this
minimal solution.

For comparison, a solver that applies the normal equations is included.
This approach requires M &gt;= N, and that A have full column rank. It
constructs and solves the NxN system A'\*A\*x=A'\*b. This system has a
condition number that is the square of the original system, so it also
suffers from a significant loss in accuracy.

We also include an SVD solver, which uses the pseudoinverse approach.
First compute A = U \* S \* V', where U and V are orthogonal, and S is
MxN diagonal, then to solve A\*x=b write x = V \* S\^ \* U' \* b, where
S\^ is the matrix formed by transposing S and then replacing each
nonzero diagonal element s by 1/s. (However, very small elements should
probably be zeroed instead of inverted.) This procedure will also
produce a vector x which minimizes the Euclidean norm. However, it has
one feature that the QR solver does not: in cases where the solution x
is not unique (because A does not have full column rank) the SVD solver
returns the unique vector x of minimum Euclidean norm.

**QR\_SOLVE** needs the R8LIB library. The test program also needs the
TEST\_LS library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QR\_SOLVE** is available in [a C
version](../../c_src/qr_solve/qr_solve.md) and [a C++
version](../../master/qr_solve/qr_solve.md) and [a FORTRAN77
version](../../f77_src/qr_solve/qr_solve.md) and [a FORTRAN90
version](../../f_src/qr_solve/qr_solve.md) and [a MATLAB
version](../../m_src/qr_solve/qr_solve.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPACK\_D](../../master/linpack_d/linpack_d.md), a C++ library
which solves linear systems using double precision real arithmetic;

[LLSQ](../../master/llsq/llsq.md), a C++ library which solves the
simple linear least squares problem of finding the formula of a straight
line y=a\*x+b which minimizes the root-mean-square error to a set of N
data points.

[MINPACK](../../master/minpack/minpack.md), a C++ library which
solves systems of nonlinear equations, or the least squares minimization
of the residual of a set of linear or nonlinear equations.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[TEST\_LS](../../master/test_ls/test_ls.md), a C++ library which
implements linear least squares test problems of the form A\*x=b.

### Reference: {#reference align="center"}

1.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
2.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.

### Source Code: {#source-code align="center"}

-   [qr\_solve.cpp](qr_solve.cpp), the source code.
-   [qr\_solve.hpp](qr_solve.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [qr\_solve\_prb.cpp](qr_solve_prb.cpp), a sample calling program.
-   [qr\_solve\_prb\_output.txt](qr_solve_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **DNRM2** returns the euclidean norm of a vector.
-   **DQRANK** computes the QR factorization of a rectangular matrix.
-   **DQRDC** computes the QR factorization of a real rectangular
    matrix.
-   **DQRLS** factors and solves a linear system in the least squares
    sense.
-   **DQRLSS** solves a linear system in a least squares sense.
-   **DQRSL** computes transformations, projections, and least squares
    solutions.
-   **DROT** applies a plane rotation.
-   **DROTG** constructs a Givens plane rotation.
-   **DSCAL** scales a vector by a constant.
-   **DSVDC** computes the singular value decomposition of a real
    rectangular matrix.
-   **DSWAP** interchanges two vectors.
-   **NORMAL\_SOLVE** solves a linear system using the normal equations.
-   **QR\_SOLVE** solves a linear system in the least squares sense.
-   **SVD\_SOLVE** solves a linear system in the least squares sense.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 04 October 2012.*
