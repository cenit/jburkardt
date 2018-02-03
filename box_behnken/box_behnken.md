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
version](../../c_src/box_behnken/box_behnken.html) and [a C++
version](../../cpp_src/box_behnken/box_behnken.html) and [a FORTRAN77
version](../../f77_src/box_behnken/box_behnken.html) and [a FORTRAN90
version](../../f_src/box_behnken/box_behnken.html) and [a MATLAB
version](../../m_src/box_behnken/box_behnken.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CVT](../../cpp_src/cvt/cvt.html), a C++ library which computes elements
of a Centroidal Voronoi Tessellation.

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
elements of a Faure sequence.

[GRID](../../cpp_src/grid/grid.html), a C++ library which computes
elements of a grid sequence.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
elements of a Halton sequence.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley sequence.

[HEX\_GRID](../../cpp_src/hex_grid/hex_grid.html), a C++ library which
computes elements of a hexagonal grid dataset.

[IHS](../../cpp_src/ihs/ihs.html), a C++ library which computes elements
of an improved distributed Latin hypercube dataset.

[LATIN\_CENTER](../../cpp_src/latin_center/latin_center.html), a C++
library which computes elements of a Latin Hypercube dataset, choosing
center points.

[LATIN\_EDGE](../../cpp_src/latin_edge/latin_edge.html), a C++ library
which computes elements of a Latin Hypercube dataset, choosing edge
points.

[LATIN\_RANDOM](../../cpp_src/latin_random/latin_random.html), a C++
library which computes elements of a Latin Hypercube dataset, choosing
points at random.

[LATINIZE](../../cpp_src/latinize/latinize.html), a C++ library which
can "latinize" a dataset.

[LCVT](../../cpp_src/lcvt/lcvt.html), a C++ library which computes a
latinized Centroidal Voronoi Tessellation.

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes elements of a Niederreiter sequence using base 2.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
elements of a Sobol sequence.

[TABLE\_LATINIZE](../../cpp_src/table_latinize/table_latinize.html), a
C++ program which reads a table file containing a set of data, and
writes out a corresponding "latinized" version.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
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

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 October 2008.*
