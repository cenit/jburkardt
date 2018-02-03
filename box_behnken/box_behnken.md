BOX\_BEHNKEN\
Box-Behnken Sampling {#box_behnken-box-behnken-sampling align="center"}
====================

------------------------------------------------------------------------

**BOX\_BEHNKEN** is a C++ library which returns a set of sample argument
values to be used to analyze the behavior of a function.

Given **DIM\_NUM** parameters, each of which is prescribed to lie
between a minimum and maximum range, and a function taking these
parameters as arguments, this program returns a table of sets of
argument values that may be used to sample the function's behavior.

One sample point is the average. All other sample points are generated
by setting a single spatial coordinate to its average value, and all
other spatial coordinates to either the minimum or maximum. In this way,
1 + **DIM\_NUM**\*2\^(**DIM\_NUM**-1) points are generated.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BOX\_BEHNKEN** is available in [a C
version](../../c_src/box_behnken/box_behnken.md) and [a C++
version](../../master/box_behnken/box_behnken.md) and [a FORTRAN77
version](../../f77_src/box_behnken/box_behnken.md) and [a FORTRAN90
version](../../f_src/box_behnken/box_behnken.md) and [a MATLAB
version](../../m_src/box_behnken/box_behnken.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CVT](../../master/cvt/cvt.md), a C++ library which computes elements
of a Centroidal Voronoi Tessellation.

[FAURE](../../master/faure/faure.md), a C++ library which computes
elements of a Faure sequence.

[GRID](../../master/grid/grid.md), a C++ library which computes
elements of a grid sequence.

[HALTON](../../master/halton/halton.md), a C++ library which computes
elements of a Halton sequence.

[HAMMERSLEY](../../master/hammersley/hammersley.md), a C++ library
which computes elements of a Hammersley sequence.

[HEX\_GRID](../../master/hex_grid/hex_grid.md), a C++ library which
computes elements of a hexagonal grid dataset.

[IHS](../../master/ihs/ihs.md), a C++ library which computes elements
of an improved distributed Latin hypercube dataset.

[LATIN\_CENTER](../../master/latin_center/latin_center.md), a C++
library which computes elements of a Latin Hypercube dataset, choosing
center points.

[LATIN\_EDGE](../../master/latin_edge/latin_edge.md), a C++ library
which computes elements of a Latin Hypercube dataset, choosing edge
points.

[LATIN\_RANDOM](../../master/latin_random/latin_random.md), a C++
library which computes elements of a Latin Hypercube dataset, choosing
points at random.

[LATINIZE](../../master/latinize/latinize.md), a C++ library which
can "latinize" a dataset.

[LCVT](../../master/lcvt/lcvt.md), a C++ library which computes a
latinized Centroidal Voronoi Tessellation.

[NIEDERREITER2](../../master/niederreiter2/niederreiter2.md), a C++
library which computes elements of a Niederreiter sequence using base 2.

[SOBOL](../../master/sobol/sobol.md), a C++ library which computes
elements of a Sobol sequence.

[TABLE\_LATINIZE](../../master/table_latinize/table_latinize.md), a
C++ program which reads a table file containing a set of data, and
writes out a corresponding "latinized" version.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes elements of a (1 dimensional) van der Corput
sequence.

### Reference: {#reference align="center"}

1.  George Box, Donald Behnken,\
    Some new three level designs for the study of quantitative
    variables,\
    Technometrics,\
    Volume 2, pages 455-475, 1960.

### Source Code: {#source-code align="center"}

-   [box\_behnken.cpp](box_behnken.cpp), the source code.
-   [box\_behnken.hpp](box_behnken.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [box\_behnken\_prb.cpp](box_behnken_prb.cpp), a sample calling
    program.
-   [box\_behnken\_prb\_output.txt](box_behnken_prb_output.txt), the
    output file.
-   [box\_behnken\_04\_33.txt](box_behnken_04_33.txt), contains a
    Box-Behnken dataset of 33 values for 4 parameters.

### List of Routines: {#list-of-routines align="center"}

-   **BOX\_BEHNKEN** returns a Box-Behnken design for the given number
    of factors.
-   **BOX\_BEHNKEN\_SIZE** returns the size of a Box-Behnken design.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 October 2008.*
