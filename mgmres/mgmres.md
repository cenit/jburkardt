MGMRES\
Restarted GMRES solver for sparse linear systems {#mgmres-restarted-gmres-solver-for-sparse-linear-systems align="center"}
================================================

------------------------------------------------------------------------

**MGMRES** is a C++ library which applies the restarted Generalized
Minimum Residual (GMRES) algorithm to solve a sparse linear system,
using compressed row (CR) or sparse triplet (ST) format, by Lili Ju.

One matrix format used is the **ST** or "sparse triplet" format, which
sets **NZ\_NUM** to the number of nonzeros, and stores the K-th nonzero
matrix entry as:

-   **A(K)**, the value of the entry;
-   **IA(K)**, the row of the entry;
-   **JA(K)**, the column of the entry;

Another matrix format used is the **CR** or "sparse compressed row"
format, which is similar to the sparse triplet format except that it the
vector of row indices is compressed to a vector of length N+1 which
points to the beginning of the set of entries for each row.

-   **A(1:NZ\_NUM)**, the value of the entry;
-   **IA(1:N+1)**, row I values occur in entries IA(I) to IA(I+1)-1;
-   **JA(1:NZ\_NUM)**, the column of the entry;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MGMRES** is available in [a C version](../../c_src/mgmres/mgmres.html)
and [a C++ version](../../cpp_src/mgmres/mgmres.html) and [a FORTRAN77
version](../../f77_src/mgmres/mgmres.html) and [a FORTRAN90
version](../../f_src/mgmres/mgmres.html) and [a MATLAB
version.](../../m_src/mgmres/mgmres.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC](../../data/cc/cc.html), a data directory which contains examples of
the Compressed Column (CC) sparse matrix file format;

[CG\_RC](../../cpp_src/cg_rc/cg_rc.html), a C++ library which implements
the conjugate gradient method for solving a positive definite sparse
linear system A\*x=b, using reverse communication.

[CR](../../data/cr/cr.html), a data directory which contains examples of
the Compressed Row (CR) sparse matrix file format;

[CSPARSE](../../c_src/csparse/csparse.html), a C library which
implements iterative methods for solving linear systems.

[FEM2D\_POISSON\_SPARSE](../../cpp_src/fem2d_poisson_sparse/fem2d_poisson_sparse.html),
a C++ program which solves the steady Poisson equation on a 2D
triangulated region. The program uses a copy of MGMRES to solve the
linear system.

[HBSMC](../../datasets/hbsmc/hbsmc.html), a dataset directory which
contains a collection of large sparse matrices stored in the
Harwell-Boeing format.

[LINPACK](../../cpp_src/linpack/linpack.html), a C++ library which
carries out direct methods for solving linear systems.

[MM](../../data/mm/mm.html), a data directory which contains a
description and examples of the Matrix Market format for storing
matrices.

[ST](../../data/st/st.html), a data directory which contains a
description and examples of the ST format for storing sparse matrices,
which are used by the C and C++ versions of MGMRES.

[SUPERLU](../../cpp_src/superlu/superlu.html), C++ programs which
illustrate how a C++ program can call the SUPERLU library, (which is
written in C), which applies a fast direct solution method to solve
sparse linear systems, by James Demmel, John Gilbert, and Xiaoye Li.

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices.

### Author: {#author align="center"}

Original C version by Lili Ju, Mathematics Department, University of
South Carolina; C++ version by John Burkardt.

### Reference: {#reference align="center"}

1.  Richard Barrett, Michael Berry, Tony Chan, James Demmel, June
    Donato, Jack Dongarra, Victor Eijkhout, Roidan Pozo, Charles Romine,
    Henk van der Vorst,\
    Templates for the Solution of Linear Systems:\
    Building Blocks for Iterative Methods,\
    SIAM, 1994,\
    ISBN: 0898714710,\
    LC: QA297.8.T45.
2.  Tim Kelley,\
    Iterative Methods for Linear and Nonlinear Equations,\
    SIAM, 2004,\
    ISBN: 0898713528,\
    LC: QA297.8.K45.
3.  Yousef Saad,\
    Iterative Methods for Sparse Linear Systems,\
    Second Edition,\
    SIAM, 20003,\
    ISBN: 0898715342,\
    LC: QA188.S17.

### Source Code: {#source-code align="center"}

-   [mgmres.cpp](mgmres.cpp), the source code.
-   [mgmres.hpp](mgmres.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [mgmres\_prb.cpp](mgmres_prb.cpp), a sample calling program.
-   [mgmres\_prb\_output.txt](mgmres_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ATX\_CR** computes A'\*x for a matrix stored in sparse compressed
    row form.
-   **ATX\_ST** computes A'\*x for a matrix stored in sparse triplet
    form.
-   **AX\_CR** computes A\*x for a matrix stored in sparse compressed
    row form.
-   **AX\_ST** computes A\*x for a matrix stored in sparse triplet form.
-   **DIAGONAL\_POINTER\_CR** finds diagonal entries in a sparse
    compressed row matrix.
-   **ILU\_CR** computes the incomplete LU factorization of a matrix.
-   **LUS\_CR** applies the incomplete LU preconditioner.
-   **MGMRES\_ST** applies restarted GMRES to a matrix in sparse triplet
    form.
-   **MULT\_GIVENS** applies a Givens rotation to two successive entries
    of a vector.
-   **PMGMRES\_ILU\_CR** applies the preconditioned restarted GMRES
    algorithm.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **REARRANGE\_CR** sorts a sparse compressed row matrix.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 December 2011.*
