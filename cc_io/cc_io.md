CC\_IO\
Read and Write Compressed Column (CC) Sparse Matrix Files {#cc_io-read-and-write-compressed-column-cc-sparse-matrix-files align="center"}
=========================================================

------------------------------------------------------------------------

**CC\_IO** is a C++ library which reads and writes compressed column
(CC) sparse matrix files.

An MxN sparse matrix of NCC nonzero entries in compressed column format
is described by three items:

-   *ccc()*, a list of N+1 compressed column indices.
-   *icc()*, a list of NCC row indices.
-   *acc()*, a list of NCC values.

The nonzero entries of column J are stored in locations CCC(J) through
CCC(J+1)-1 of ICC and ACC.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CC\_IO** is available in [a C version](../../c_src/cc_io/cc_io.html)
and [a C++ version](../../cpp_src/cc_io/cc_io.html) and [a FORTRAN77
version](../../f77_src/cc_io/cc_io.html) and [a FORTRAN90
version](../../f_src/cc_io/cc_io.html) and [a MATLAB
version](../../m_src/cc_io/cc_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC](../../data/cc/cc.html), a data directory which contains examples of
matrix stored in the compressed column (CC) format.

[HB\_IO](../../cpp_src/hb_io/hb_io.html), a C++ library which reads and
writes sparse linear systems stored in the Harwell Boeing (HB) format
for sparse matrices.

[ST\_IO](../../cpp_src/st_io/st_io.html), a C++ library which reads and
writes sparse linear systems stored in the Sparse Triplet (ST) format.

[CC\_TO\_ST](../../cpp_src/cc_to_st/cc_to_st.html), a C++ library which
converts a sparse matrix from compressed column (CC) to sparse triple
(ST) format.

### Source Code: {#source-code align="center"}

-   [cc\_io.cpp](cc_io.cpp), the source code.
-   [cc\_io.hpp](cc_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cc\_io\_prb.cpp](cc_io_prb.cpp) a sample calling program.
-   [cc\_io\_prb\_output.txt](cc_io_prb_output.txt), the output file.

Test \#1 and \#2 write and read back the information for the "simple"
5x5 matrix with 12 nonzero entries. There are files associated with
this.

-   [simple\_acc.txt](simple_acc.txt), the values.
-   [simple\_ccc.txt](simple_ccc.txt), the (0-based) compressed column
    indices.
-   [simple\_icc.txt](simple_icc.txt), the (0-based) row indices.

### List of Routines: {#list-of-routines align="center"}

-   **CC\_DATA\_READ** reads data about a sparse matrix in CC format.
-   **CC\_HEADER\_READ** reads header information about a sparse matrix
    in CC format.
-   **CC\_PRINT** prints a sparse matrix in CC format.
-   **CC\_PRINT\_SOME** prints some of a sparse matrix in CC format.
-   **CC\_WRITE** writes a sparse matrix in CC format to 3 files.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4VEC\_DATA\_READ** reads the data from an I4VEC file.
-   **I4VEC\_DEC** decrements an I4VEC.
-   **I4VEC\_INC** increments an I4VEC.
-   **I4VEC\_WRITE** writes an I4VEC to a file.
-   **R8VEC\_DATA\_READ** reads the data from an R8VEC file.
-   **R8VEC\_WRITE** writes an R8VEC file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 18 July 2014.*
