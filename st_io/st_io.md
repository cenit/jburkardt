ST\_IO\
Read and Write Sparse Triplet (ST) Matrix Files. {#st_io-read-and-write-sparse-triplet-st-matrix-files. align="center"}
================================================

------------------------------------------------------------------------

**ST\_IO** is a C++ library which reads and writes files in the Sparse
Triplet (ST) format used for storing sparse matrices.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ST\_IO** is available in [a C version](../../c_src/st_io/st_io.html)
and [a C++ version](../../cpp_src/st_io/st_io.html) and [a FORTRAN90
version](../../f_src/st_io/st_io.html) and [a FORTRAN77
version](../../f77_src/st_io/st_io.html) and [a MATLAB
version](../../m_src/st_io/st_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_IO](../../cpp_src/cc_io/cc_io.html), a C++ library which reads and
writes sparse linear systems stored in the Compressed Column (CC)
format.

[CC\_TO\_ST](../../cpp_src/cc_to_st/cc_to_st.html), a C++ library which
converts a sparse matrix from compressed column (CC) to sparse triple
(ST) format.

[HB\_IO](../../cpp_src/hb_io/hb_io.html), a C++ library which reads and
writes sparse linear systems stored in the Harwell Boeing (HB) format
for sparse matrices.

[ST](../../data/st/st.html), the format which is used for the input to
this program.

[ST\_TO\_CC](../../cpp_src/st_to_cc/st_to_cc.html), a C++ library which
converts sparse matrix data from Sparse Triplet (ST) format to
Compressed Column (CC) format.

### Source Code: {#source-code align="center"}

-   [st\_io.cpp](st_io.cpp), the source code.
-   [st\_io.hpp](st_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [st\_io\_prb.cpp](st_io_prb.cpp), a sample calling program.
-   [st\_io\_prb\_output.txt](st_io_prb_output.txt), the output file.
-   [a5by5.st](a5by5.st), an ST file storing a 5 by 5 matrix.
-   [kershaw.st](kershaw.st), an ST file storing a 4 by 4 matrix.

### List of Routines: {#list-of-routines align="center"}

-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **ST\_DATA\_PRINT** prints the data in an ST file.
-   **ST\_DATA\_PRINT\_SOME** prints some of the data in an ST file.
-   **ST\_DATA\_READ** reads the data of an ST file.
-   **ST\_DATA\_WRITE** writes the data of an ST file.
-   **ST\_HEADER\_PRINT** prints the header of an ST file.
-   **ST\_HEADER\_READ** reads the header of an ST file.
-   **ST\_HEADER\_WRITE** writes the header of an ST file.
-   **ST\_REBASE** changes the base of an index array.
-   **ST\_SORT\_A** sorts the entries of an ST matrix by column.
-   **ST\_TRANSPOSE** transposes an ST matrix.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 July 2014.*
