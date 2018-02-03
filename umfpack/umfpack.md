UMFPACK\
Solving Large Sparse Linear Systems with the UMFPACK Library {#umfpack-solving-large-sparse-linear-systems-with-the-umfpack-library align="center"}
============================================================

------------------------------------------------------------------------

**UMFPACK**, C++ programs which illustrate how to solve sparse linear
systems by calling the C library UMFPACK, by Timothy Davis.

The UMFPACK library, written by Timothy Davis, is part of the
SuiteSparse package, which is available from
<http://www.cise.ufl.edu/research/sparse/>.

Calling UMFPACK requires linking additional libraries from the
SuiteSparse collection. The executable shell scripts given here suggest
how this might be done.

UMFPACK requires that the sparse matrix be stored in a common format
known as compressed column (CC) storage.

UMFPACK uses the C indexing convention, in which the first element of a
vector has index 0.

As an example, the matrix whose full representation is:

           11 12  0  0  0
           21  0 23  0 25
            0 32 33 34  0
            0  0 43  0  0
            0 52 53  0 55
          

would be stored in compressed column storage as:

             #  R   CC   X
            --  -   --  --
             0  0    0  11
             1  1       21

             2  0    2  12
             3  2       32
             4  4       52

             5  1    5  23
             6  2       33
             7  3       43
             8  4       53

             9  2    9  34

            10  1   10  25
            11  4       55

            12  -   12
          

and this is the matrix used in the simple example code.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**UMFPACK** is available in [a C
version](../../c_src/umfpack/umfpack.html) and [a C++
version](../../cpp_src/umfpack/umfpack.html) and [a FORTRAN90
version](../../f_src/umfpack/umfpack.html) and [a FORTRAN77
version](../../f77_src/umfpack/umfpack.html) and [a MATLAB
version](../../m_src/umfpack/umfpack.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC](../../data/cc/cc.html), a data directory which contains examples of
the compressed column (CC) sparse matrix format;

[CG\_RC](../../cpp_src/cg_rc/cg_rc.html), a C++ library which implements
the conjugate gradient method for solving a positive definite sparse
linear system A\*x=b, using reverse communication.

[HB\_IO](../../cpp_src/hb_io/hb_io.html), a C++ library which reads and
writes sparse linear systems stored in the Harwell Boeing (HB) format
for sparse matrices.

[MGMRES](../../cpp_src/mgmres/mgmres.html), a C++ library which applies
the restarted Generalized Minimum Residual (GMRES) algorithm to solve a
sparse linear system, by Lili Ju.

[ST\_IO](../../cpp_src/st_io/st_io.html), a C++ library which reads and
writes sparse linear systems stored in the Sparse Triplet (ST) format.

[SUPERLU](../../cpp_src/superlu/superlu.html), C++ programs which
illustrate the usage of the SUPERLU library, which applies a fast direct
solution method to solve sparse linear systems, by James Demmel, John
Gilbert, and Xiaoye Li.

### Reference: {#reference align="center"}

1.  Timothy Davis,\
    Algorithm 832: UMFPACK, an unsymmetric-pattern multifrontal method,\
    ACM Transactions on Mathematical Software,\
    Volume 30, Number 2, June 2004, pages 196-199.
2.  Timothy Davis,\
    Direct Methods for Sparse Linear Systems,\
    SIAM, 2006,\
    ISBN: 0898716136,\
    LC: QA188.D386.

### Examples and Tests: {#examples-and-tests align="center"}

The SIMPLE example demonstrates the use of UMFPACK on a 5x5 "sparse"
matrix.

-   [umfpack\_simple.cpp](umfpack_simple.cpp), the source code.
-   [umfpack\_simple\_output.txt](umfpack_simple_output.txt), the output
    file.

The WATHEN example demonstrates the use of UMFPACK on a sparse matrix
that is an instance of the Wathen finite element mass matrix. The matrix
is created using the sparse triplet (ST) format, and must be converted
to the compressed column (CC) format before calling UMFPACK. This
demonstrates why the 5x5 SIMPLE example is not representative of the
typical use of UMFPACK.

-   [umfpack\_wathen.cpp](umfpack_wathen.cpp), the source code.
-   [umfpack\_wathen\_output.txt](umfpack_wathen_output.txt), the output
    file.

The WEST example demonstrates the use of UMFPACK on a sparse matrix in
the compressed column (CC) format, stored in three files. The matrix is
read from the files, and then UMFPACK is called to handle an associated
linear system.

-   [umfpack\_west.cpp](umfpack_west.cpp), the source code.
-   [umfpack\_west\_output.txt](umfpack_west_output.txt), the output
    file.
-   [west\_acc.txt](west_acc.txt), a file containing the nonzero matrix
    values.
-   [west\_ccc.txt](west_ccc.txt), a file containing the compressed
    column indices.
-   [west\_icc.txt](west_icc.txt), a file containing the row indices of
    the nonzero matrix values.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 July 2014.*
