CELL\
Manipulate Data in Cell Arrays {#cell-manipulate-data-in-cell-arrays align="center"}
==============================

------------------------------------------------------------------------

**CELL** is a C++ library which defines a cell array, a generalization
of an array which can compactly store and retrieve vector or matrix data
of varying size, such as the rows of a triangular matrix.

In MATLAB, a cell array is a structure which generalizes a matrix. It
can be thought of as an object A, whose entries can be indexed by
expressions such as A(I,J). In a matrix, each entry is a numeric scalar
object. In a cell array, each entry A(I,J) is simply an object of
unspecified type, dimension, and range.

In the simplified version of a cell array presented here, the cell array
is a vector (one index) or matrix (two indices), each of whose entries
is, in turn, a vector or a matrix of standard numeric type. We still
allow the individual entries to have differing ranges. Thus, a lower
triangular matrix can be thought of as a cell array A that stores the
rows. Row 3 of the triangular matrix can be thought of as the third
entry in A. To retrieve a particular number in row 3, we have to
determine where the row is stored, and then where the desired item is
stored in the row.

The vectors or matrices which are the entries of a particular cell array
will all share a common numeric type, which we will designate as

-   **C4**, 4 byte + 4 byte complex;
-   **C8**, 8 byte + 8 byte double precision complex;
-   **I4**, 4 byte integer;
-   **R4**, 4 byte real;
-   **R8**, 8 byte double precision real;

We use a simple code to describe the numeric type, indexing scheme, and
entry type of a cell array. For example, an "R8CVM" would be a cell
array of numeric type double precision real (R8), which is a single
indexed vector (V) whose entries are matrices (M).

To see how cell arrays can be useful, we will concentrate on the idea of
efficient storage. Thus, suppose we simply want to store rows 0 through
5 of Pascal's triangle. Since these quantities are integers, we could
use numeric type I4. Since we want to refer to items by row, we only
need a single index to access entries. Each entry is a row. This means
the code for the cell array would be I4CVV.

We could think of this cell array as having the following structure:

            A = { { 1 },
                  { 1, 1 },
                  { 1, 2, 1 },
                  { 1, 3, 3, 1 },
                  { 1, 4, 6, 4, 1 },
                  { 1, 5, 10, 10, 5, 1 } }
          

We can imagine that the cell array A is simply a vector of length 6, and
that the A(3), for example, is the vector {1,2,1}. On the other hand, in
this case it is very tempting to also consider the array notation
A(3,2), which now must be carefully interpreted, since the 3 is a cell
array index (3rd row) which is easy to know is only allowed to extend
from 1 to 6, while the 2 is a row index (item 2 of the current row)
whose validity is hard to know unless we know the legal extent of that
row.

Especially when we contemplate more complicated structures, it might be
better to replace the notation A(3,2) by A(3)(2), meaning third entry of
A, second item in that entry. In this way, we can immediately understand
that B(3,2)(4) means that B is a matrix of entries, each of which is a
vector, while C(3)(2,4) means C is a vector whose entries are matrices.

To create a cell array, the user must provide information about the
dimension (1 for "V" and 2 for "M") of the cell array, and the range of
each entry (length of V entries or rows\*columns for M entries). This is
used to determine the total size needed for the cell array, and the
offsets needed to quickly access individual items in the entries.

Cell arrays of type \*\*CVV are most commonly useful, given how often
triangular arrays and matrices occur, as well as lists, each of whose
entries is in turn a list of varying length.

Currently, only cell arrays of types I4CVV and R8CVV are implemented in
this library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CELL** is available in [a C version](../../c_src/cell/cell.html) and
[a C++ version](../../cpp_src/cell/cell.html) and [a FORTRAN77
version](../../f77_src/cell/cell.html) and [a FORTRAN90
version](../../f_src/cell/cell.html) and [a MATLAB
version](../../m_src/cell/cell.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[INDEX](../../cpp_src/index/index.html), a C++ library which converts a
multidimensional vector index to a one-dimensional vector index; it can
handle zero and one based indexing schemes, as well as column major and
row major conventions.

[SUBPAK](../../cpp_src/subpak/subpak.html), a C++ library which contains
many utility routines;

### Source Code: {#source-code align="center"}

-   [cell.cpp](cell.cpp), the source code.
-   [cell.hpp](cell.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cell\_prb.cpp](cell_prb.cpp), a sample calling program.
-   [cell\_prb\_output.txt](cell_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MIN** returns the minimum of two I4's.
-   **I4CVV\_IGET** gets item J from row I in an I4CVV.
-   **I4CVV\_IINC** increments item J from row I in an I4CVV.
-   **I4CVV\_INDX** indexes item J from row I in an I4CVV.
-   **I4CVV\_ISET** sets item J from row I in an I4CVV.
-   **I4CVV\_NGET\_NEW** gets N items JN(\*) from rows IN(\*) in an
    I4CVV.
-   **I4CVV\_NINC** increments items JN(\*) from rows IN(\*) in an
    I4CVV.
-   **I4CVV\_NNDX** gets N items JN(\*) from rows IN(\*) in an I4CVV.
-   **I4CVV\_NSET** sets items JN(\*) from rows IN(\*) in an I4CVV.
-   **I4CVV\_OFFSET** determines the row offsets of an I4CVV.
-   **I4CVV\_PRINT** prints an I4CVV.
-   **I4CVV\_RGET\_NEW** gets row I from an I4CVV.
-   **I4CVV\_RINC** increments row I in an I4CVV.
-   **I4CVV\_RNDX** indexes row I from an I4CVV.
-   **I4CVV\_RSET** sets row I from an I4CVV.
-   **I4CVV\_SIZE** determines the size of an I4CVV.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **R8CVV\_IGET** gets item J from row I in an R8CVV.
-   **R8CVV\_IINC** increments item J from row I in an R8CVV.
-   **R8CVV\_INDX** indexes item J from row I in an R8CVV.
-   **R8CVV\_ISET** sets item J from row I in an R8CVV.
-   **R8CVV\_NGET\_NEW** gets N items JN(\*) from rows IN(\*) in an
    R8CVV.
-   **R8CVV\_NINC** increments items JN(\*) from rows IN(\*) in an
    R8CVV.
-   **R8CVV\_NNDX** indexes N items JN(\*) from rows IN(\*) in an R8CVV.
-   **R8CVV\_NSET** sets items JN(\*) from rows IN(\*) in an R8CVV.
-   **R8CVV\_OFFSET** determines the row offsets of an R8CVV.
-   **R8CVV\_PRINT** prints an R8CVV.
-   **R8CVV\_RGET\_NEW** gets row I from an R8CVV.
-   **R8CVV\_RINC** increments row I in an R8CVV.
-   **R8CVV\_RNDX** indexes row I from an R8CVV.
-   **R8CVV\_RSET** sets row I from an R8CVV.
-   **R8CVV\_SIZE** determines the size of an R8CVV.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_TRANSPOSE\_PRINT** prints an R8VEC "transposed".
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 December 2012.*
