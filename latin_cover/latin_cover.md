LATIN\_COVER\
N Latin Squares which cover an NxN square. {#latin_cover-n-latin-squares-which-cover-an-nxn-square. align="center"}
==========================================

------------------------------------------------------------------------

**LATIN\_COVER** is a C++ library which produces a set of N Latin
Squares which cover an NxN square.

Given an NxN grid, a Latin Square is a selection of N pairs of indices
(I,J) such that every possible value of I and J occurs exactly once. A
picture for the case N = 5 may suggest what is going on:

              - - - 1 -
              - 1 - - -
            I 1 - - - -
              - - - - 1
              - - 1 - -
                  J
          

The above Latin Square can also be described by the index pairs (1,4),
(2,2), (3,1), (4,5), (5,3).

A Latin square will always contain N index pairs. Since the original
square contains NxN index pairs, it is interesting to speculate whether
it would be possible to find N Latin squares with the property that
every possible index pair (I,J) in the NxN square occurs in exactly one
of the Latin Squares. In that case, we would say that the Latin Squares
"cover" or decompose the square.

Here is an example which starts with the Latin square pictured above,
and generates 4 more Latin squares to cover the 5x5 square.

              3 2 5 1 4
              2 1 4 5 3
            I 1 5 3 4 2
              5 4 2 3 1
              4 3 1 2 5
                  J
          

Given a value N, this program produces a Latin cover for an NxN square.

Given a description of a Latin square of order N, this program produces
N-1 more Latin squares, so that together with the input Latin square, a
Latin cover is produced.

It is also possible to generate a 3D Latin covering. Here, a single
Latin cube contains only N subcubes, so we require NxN such cubes if we
have a hope of covering all the subcubes. The routine LATIN\_COVER\_3D
will compute such a covering.

A small example of a 3D a Latin Cover:

     
           K =        1
     
            J:       1       2       3
           I:
           1:        4       1       7
           2:        6       3       9
           3:        5       2       8
     
           K =        2
     
            J:       1       2       3
           I:
           1:        3       9       6
           2:        2       8       5
           3:        1       7       4
     
           K =        3
     
            J:       1       2       3
           I:
           1:        8       5       2
           2:        7       4       1
           3:        9       6       3
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LATIN\_COVER** is available in [a C
version](../../c_src/latin_cover/latin_cover.md) and [a C++
version](../../master/latin_cover/latin_cover.md) and [a FORTRAN77
version](../../f77_src/latin_cover/latin_cover.md) and [a FORTRAN90
version](../../f_src/latin_cover/latin_cover.md) and [a MATLAB
version](../../m_src/latin_cover/latin_cover.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LATIN\_CENTER](../../master/latin_center/latin_center.md), a C++
library which computes elements of a Latin Hypercube dataset, choosing
center points.

[LATIN\_EDGE](../../master/latin_edge/latin_edge.md), a C++ library
which computes elements of a Latin Hypercube dataset, choosing edge
points.

[LATIN\_RANDOM](../../master/latin_random/latin_random.md), a C++
library which computes elements of a Latin Hypercube dataset, choosing
points at random.

[LATINIZE](../../c_src/latinize/latinize.md), a C library which
adjusts N points in M dimensions to form a Latin hypercube.

### Reference: {#reference align="center"}

1.  Herbert Ryser,\
    Combinatorial Mathematics,\
    Mathematical Association of America, 1963.

### Source Code: {#source-code align="center"}

-   [latin\_cover.c](latin_cover.c), the source code.
-   [latin\_cover.h](latin_cover.h), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [latin\_cover\_prb.c](latin_cover_prb.c) a sample calling program.
-   [latin\_cover\_prb\_output.txt](latin_cover_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4BLOCK\_PRINT** prints an I4BLOCK.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **LATIN\_COVER** returns a 2D Latin Square Covering.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_PRINT** prints a permutation.
-   **PERM\_UNIFORM** selects a random permutation of N objects.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C source codes](../c_src.md).

------------------------------------------------------------------------

*Last revised on 05 August 2012.*
