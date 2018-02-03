ST\_TO\_CC\
Sparse Triplet to Compressed Column Conversion {#st_to_cc-sparse-triplet-to-compressed-column-conversion align="center"}
==============================================

------------------------------------------------------------------------

**ST\_TO\_CC** is a C++ library which converts information describing a
sparse matrix from sparse triplet (ST) format to compressed column
storage (CC).

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ST\_TO\_CC** is available in [a C
version](../../c_src/st_to_cc/st_to_cc.html) and [a C++
version](../../cpp_src/st_to_cc/st_to_cc.html) and [a FORTRAN77
version](../../f77_src/st_to_cc/st_to_cc.html) and [a FORTRAN90
version](../../f_src/st_to_cc/st_to_cc.html) and [a MATLAB
version](../../m_src/st_to_cc/st_to_cc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC](../../data/cc/cc.html), a data directory which contains examples of
the Compressed Column (CC) sparse matrix file format;

[CC\_IO](../../cpp_src/cc_io/cc_io.html), a C++ library which reads and
writes sparse linear systems stored in the Compressed Column (CC)
format.

[CC\_TO\_ST](../../cpp_src/cc_to_st/cc_to_st.html), a C++ library which
converts a sparse matrix from compressed column (CC) to sparse triple
(ST) format.

[HBSMC](../../datasets/hbsmc/hbsmc.html), a dataset directory which
contains the Harwell Boeing Sparse Matrix Collection;

[LINPLUS](../../cpp_src/linplus/linplus.html), a C++ library which
carries out operations such as matrix-vector products, matrix
factorization, linear solvers including Gauss-elimination, Jacobi
iteration, Gauss-Seidel iteration, Conjugate Gradient (CG), for matrices
in a variety of formats, including banded, border-banded, circulant,
lower triangular, pentadiagonal, sparse, symmetric, toeplitz,
tridiagonal, upper triangular and vandermonde formats.

[ST](../../data/st/st.html), a data directory which contains examples of
the Sparse Triplet (ST) format, a sparse matrix file format, storing
just (I,J,A(I,J)), and using zero-based indexing.

[ST\_IO](../../cpp_src/st_io/st_io.html), a C++ library which reads and
writes sparse linear systems stored in the ST "sparse triplet" Sparse
Matrix format.

[SUPERLU](../../cpp_src/superlu/superlu.html), C++ programs which
illustrate how to call the SUPERLU library, (which is written in C),
which applies a fast direct solution method to solve sparse linear
systems, by James Demmel, John Gilbert, and Xiaoye Li.

[UMFPACK](../../cpp_src/umfpack/umfpack.html), C++ programs which
illustrate how to solve a sparse linear system by calling the C library
UMFPACK, by Timothy Davis.

[WATHEN](../../cpp_src/wathen/wathen.html), a C++ library which compares
storage schemes (full, banded, sparse triplet) and solution strategies
(Linpack full, Linpack banded, conjugate gradient (CG)) for linear
systems involving the Wathen matrix, which can arise when solving a
problem using the finite element method (FEM).

### Source Code: {#source-code align="center"}

-   [st\_to\_cc.cpp](st_to_cc.cpp), the source code.
-   [st\_to\_cc.hpp](st_to_cc.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [st\_to\_cc\_prb.cpp](st_to_cc_prb.cpp), a sample calling program.
-   [st\_to\_cc\_prb\_output.txt](st_to_cc_prb_output.txt), the output
    file.
-   [west\_st.txt](west_st.txt), the West matrix, in ST form.
-   [west\_acc.txt](west_acc.txt), the values of the West matrix, in CC
    form.
-   [west\_ccc.txt](west_ccc.txt), the compressed columns of the West
    matrix, in CC form.
-   [west\_icc.txt](west_icc.txt), the row indices of the West matrix,
    in CC form.

### List of Routines: {#list-of-routines align="center"}

-   **CC\_MV** multiplies a CC matrix by a vector
-   **CC\_PRINT** prints a sparse matrix in CC format.
-   **CC\_PRINT\_SOME** prints some of a sparse matrix in CC format.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_WRITE** writes an I4VEC file.
-   **I4VEC2\_COMPARE** compares entries of an I4VEC2.
-   **I4VEC2\_SORT\_A** ascending sorts a vector of pairs of integers.
-   **I4VEC2\_SORTED\_UNIQUE\_COUNT** counts unique elements in a sorted
    I4VEC2.
-   **I4VEC2\_SORTED\_UNIQUELY** copies unique elements from a sorted
    I4VEC2.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_DIFF\_NORM** returns the L2 norm of the difference of
    R8VEC's.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **R8VEC\_WRITE** writes an R8VEC file.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **ST\_DATA\_READ** reads the data of an ST file.
-   **ST\_HEADER\_READ** reads the header of an ST file.
-   **ST\_MV** multiplies an R8SP matrix by an R8VEC.
-   **ST\_PRINT** prints a sparse matrix in ST format.
-   **ST\_PRINT\_SOME** prints some of a sparse matrix in ST format.
-   **ST\_TO\_CC\_INDEX** creates CC indices from ST data.
-   **ST\_TO\_CC\_SIZE** sizes CC indexes based on ST data.
-   **ST\_TO\_CC\_VALUES** creates CC values from ST data.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WATHEN\_ST:** Wathen matrix stored in sparse triplet (ST) format.
-   **WATHEN\_ST\_SIZE:** Size of Wathen matrix stored in sparse triplet
    format.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 July 2014.*
