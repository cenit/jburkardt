CC\_TO\_ST\
Convert Sparse Matrix from Compressed Column to Sparse Triplet {#cc_to_st-convert-sparse-matrix-from-compressed-column-to-sparse-triplet align="center"}
==============================================================

------------------------------------------------------------------------

**CC\_TO\_ST** is a C++ library which converts sparse matrix information
from compressed column (CC) to sparse triplet (ST) format.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CC\_TO\_ST** is available in [a C
version](../../c_src/cc_to_st/cc_to_st.md) and [a C++
version](../../master/cc_to_st/cc_to_st.md) and [a FORTRAN77
version](../../f77_src/cc_to_st/cc_to_st.md) and [a FORTRAN90
version](../../f_src/cc_to_st/cc_to_st.md) and [a MATLAB
version](../../m_src/cc_to_st/cc_to_st.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC](../../data/cc/cc.md), a data directory which contains examples of
the Compressed Column (CC) sparse matrix file format;

[CC\_IO](../../master/cc_io/cc_io.md), a C++ library which reads and
writes sparse linear systems stored in the Compressed Column (CC)
format.

[ST](../../data/st/st.md), a data directory which contains examples of
the Sparse Triplet (ST) format, a sparse matrix file format, storing
just (I,J,A(I,J)), and using zero-based indexing.

[ST\_IO](../../master/st_io/st_io.md), a C++ library which reads and
writes sparse linear systems stored in the ST "sparse triplet" Sparse
Matrix format.

[ST\_TO\_CC](../../master/st_to_cc/st_to_cc.md), a C++ library which
converts a sparse matrix from sparse triplet (ST) to compressed column
(CC) format.

### Source Code: {#source-code align="center"}

-   [cc\_to\_st.cpp](cc_to_st.cpp), the source code.
-   [cc\_to\_st.hpp](cc_to_st.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cc\_to\_st\_prb.cpp](cc_to_st_prb.cpp), a sample calling program.
-   [cc\_to\_st\_prb\_output.txt](cc_to_st_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CC\_PRINT** prints a sparse matrix in CC format.
-   **CC\_TO\_ST** converts sparse matrix information from CC to ST
    format.
-   **ST\_PRINT** prints a sparse matrix in ST format.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 July 2014.*
