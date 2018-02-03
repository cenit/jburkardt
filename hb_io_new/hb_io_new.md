HB\_IO\_NEW\
Harwell Boeing Sparse Matrix Files\
Read and Write Utilities {#hb_io_new-harwell-boeing-sparse-matrix-files-read-and-write-utilities align="center"}
===================================

------------------------------------------------------------------------

**HB\_IO\_NEW** is a C++ library which reads and writes files in the
Harwell Boeing sparse matrix format. It is a version of HB\_IO, revised
by Reinhard Resch.

Reinhard Resch's improvements include

-   a new function to read files in double precision Fortran format;
-   use of C++ exception handling instead of calling exit(1);
-   use of C++ namespaces;
-   passing string arguments by reference;
-   use of constants instead of macros;
-   adding an interface to Octave;

Note that the most common "flavor" of HB file is an assembled sparse
matrix, but that there are some lesser used options, including storage
of the matrix as unassembled finite element matrices, and corresponding
storage of vectors. These secondary options are less well documented,
and are only marginally supported in this package.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HB\_IO\_NEW** is available in [a C++
version](../../cpp_src/hb_io_new/hb_io_new.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_IO](../../cpp_src/cc_io/cc_io.html), a C++ library which reads and
writes sparse linear systems stored in the Compressed Column (CC)
format.

[HB](../../data/hb/hb.html), a dataset directory which contains a
collection of sparse matrices in the HB format.

[HB\_IO](../../cpp_src/hb_io/hb_io.html), a C++ library which reads and
writes sparse linear systems stored in the Harwell Boeing (HB) format
for sparse matrices. This library is intended to handle the full range
of HB formats.

[HB\_TO\_MSM](../../m_src/hb_to_msm/hb_to_msm.html), a MATLAB program
which reads an HB file and converts the matrix to MATLAB's sparse matrix
format.

[HB\_TO\_ST](../../f77_src/hb_to_st/hb_to_st.html), a FORTRAN77 program
which converts the sparse matrix information stored in a Harwell-Boeing
file into a sparse triplet file.

[HBSMC](../../datasets/hbsmc/hbsmc.html), a dataset directory which
contains the Harwell Boeing Sparse Matrix Collection;

[LINPLUS](../../cpp_src/linplus/linplus.html), a C++ library which
includes routines to manipulate matrices stored in the HB sparse matrix
format.

[MM\_IO](../../f_src/mm_io/mm_io.html), a FORTRAN90 library which reads
and writes matrices in the Matrix Market format.

[MSM\_TO\_HB](../../m_src/msm_to_hb/msm_to_hb.html), a MATLAB program
which takes a matrix in MATLAB's sparse matrix format and writes it out
in the HB format.

[ST\_IO](../../cpp_src/st_io/st_io.html), a C++ library which reads and
writes sparse linear systems stored in the Sparse Triplet (ST) format.

[SUPERLU](../../c_src/superlu/superlu.html), a C library which includes
routines which can read and write matrices in the HB format.

### Reference: {#reference align="center"}

1.  Iain Duff, Roger Grimes, John Lewis,\
    User's Guide for the Harwell-Boeing Sparse Matrix Collection,\
    October 1992.
2.  Iain Duff, Roger Grimes, John Lewis,\
    Sparse Matrix Test Problems,\
    ACM Transactions on Mathematical Software,\
    Volume 15, pages 1-14, March 1989.
3.  <http://math.nist.gov/MatrixMarket/data/Harwell-Boeing/> the Matrix
    Market site.

### Source Code: {#source-code align="center"}

-   [hb\_io.cpp](hb_io.cpp), the source code.
-   [hb\_io\_oct.cpp](hb_io_oct.cpp), a special interface to Octave.
-   [hb\_io.hpp](hb_io.hpp), an include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hb\_io\_prb.cpp](hb_io_prb.cpp), a sample calling program.
-   [hb\_io\_prb\_output.txt](hb_io_prb_output.txt), the output file.

Data files you may copy include:

-   [rse\_5.txt](rse_5.txt), a sample HBSMC symmetric unassembled
    "element" matrix file.
-   [rua\_32.txt](rua_32.txt), a sample HBSMC unsymmetric assembled
    sparse matrix file.
-   [rua\_32\_file.txt](rua_32_file.txt), a full version of
    "rua\_32.txt" written by HB\_FILE\_WRITE.
-   [rua\_32\_header.txt](rua_32_header.txt), the header of
    "rua\_32.txt" written by HB\_HEADER\_WRITE.
-   [rua\_32\_rhs.txt](rua_32_rhs.txt), the headers, structure, values
    and right hand side of "rua\_32.txt".
-   [rua\_32\_structure.txt](rua_32_structure.txt), the headers and
    structure of "rua\_32.txt".
-   [rua\_32\_values.txt](rua_32_values.txt), the headers, structure,
    and values of "rua\_32.txt".
-   [rua\_32\_ax.txt](rua_32_ax.txt), a sample HBSMC unsymmetric
    assembled sparse matrix file, with exact solutions, and two right
    hand side vectors computed from the exact solutions by calling
    HB\_MATVEC\_A\_MEM.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_IS\_DIGIT** returns TRUE if a character is a decimal digit.
-   **CH\_IS\_FORMAT\_CODE** returns TRUE if a character is a FORTRAN
    format code.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **HB\_EXACT\_READ** reads the exact solution vectors in an HB file.
-   **HB\_EXACT\_WRITE** writes the exact solution vectors to an HB
    file.
-   **HB\_FILE\_READ** reads an HB file.
-   **HB\_FILE\_WRITE** writes an HB file.
-   **HB\_GUESS\_READ** reads the starting guess vectors in an HB file.
-   **HB\_GUESS\_WRITE** writes the starting guess vectors to an HB
    file.
-   **HB\_HEADER\_PRINT** prints the header of an HB file.
-   **HB\_HEADER\_READ** reads the header of an HB file.
-   **HB\_HEADER\_WRITE** writes the header of an HB file.
-   **HB\_MATVEC\_A\_MEM** multiplies an assembled Harwell Boeing matrix
    times a vector.
-   **HB\_RHS\_READ** reads the right hand side information in an HB
    file.
-   **HB\_RHS\_WRITE** writes the right hand side information to an HB
    file.
-   **HB\_STRUCTURE\_PRINT** prints the structure of an HB matrix.
-   **HB\_STRUCTURE\_READ** reads the structure of an HB matrix.
-   **HB\_STRUCTURE\_WRITE** writes the structure of an HB matrix.
-   **HB\_UA\_COLUMN\_INDEX** creates a column index for an unsymmetric
    assembled matrix.
-   **HB\_VALUES\_PRINT** prints the values of an HB matrix.
-   **HB\_VALUES\_READ** reads the values of an HB matrix.
-   **HB\_VALUES\_WRITE** writes the values of an HB matrix.
-   **HB\_VECMAT\_A\_MEM** multiplies a vector times an assembled
    Harwell Boeing matrix.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_PRINT\_PART** prints "part" of an I4VEC.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8CMAT\_PRINT\_SOME** prints some of an R8CMAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_PRINT\_PART** prints "part" of an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_SUBSTRING** returns a substring of a given string.
-   **S\_TO\_FORMAT** reads a FORTRAN format from a string.
-   **S\_TRIM** promotes the final null forward through trailing blanks.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 November 2016.*
