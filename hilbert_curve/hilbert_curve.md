HILBERT\_CURVE\
Convert between 1D and 2D coordinates of Hilbert Curve {#hilbert_curve-convert-between-1d-and-2d-coordinates-of-hilbert-curve align="center"}
======================================================

------------------------------------------------------------------------

**HILBERT\_CURVE** is a C++ library which can convert between 1D and 2D
coordinates of the Hilbert curve.

Mathematically, the Hilbert curve H is a continuous curve that passes
through every point in the unit square. Naturally, it is not possible to
draw, or even to imagine, such a curve. However, the Hilbert curve can
be described as the limit of a sequence of simpler curves Hn, where Hn
is drawn by dividing the unit square into an NxN array of cells Cn
(where N is a power of 2), and connecting the cell centers. The Hilbert
curve Hn will pass through each cell exactly once.

Computationally, the Hilbert curve Hn is very useful. It provides a way
of traversing a 2D array that tends to preserve locality. It provides an
interesting corresponding between points on the unit line segment
\[0,1\], expressed as base 4 decimal fractions, and cells in the
sequence of nested squares Cn. For instance, the point whose base four
decimal expansion begins 0.312... can be located by going to the 4th
cell of H2, then when that cell gets subdivided, going to the second
cell, then when that cell gets subdivided, going to the third cell.
(Note that, in order for the Hilbert curve to be connected, each time a
cell is subdivided, the ordering of the subcells is rotated or flipped
in a regular way.)

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HILBERT\_CURVE** is available in [a C
version](../../c_src/hilbert_curve/hilbert_curve.html) and [a C++
version](../../cpp_src/hilbert_curve/hilbert_curve.html) and [a
FORTRAN90 version](../../f_src/hilbert_curve/hilbert_curve.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MANDELBROT](../../cpp_src/mandelbrot/mandelbrot.html), a C++ program
which generates an ASCII Portable Pixel Map (PPM) image of the
Mandelbrot fractal set;

### Reference: {#reference align="center"}

1.  Brian Hayes,\
    Crinkly curves,\
    American Scientist,\
    Volume 101, Number 3, May-June 2013, pages 178-183.

### Source Code: {#source-code align="center"}

-   [hilbert\_curve.cpp](hilbert_curve.cpp), the source code.
-   [hilbert\_curve.hpp](hilbert_curve.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hilbert\_curve\_prb.cpp](hilbert_curve_prb.cpp) a sample calling
    program.
-   [hilbert\_curve\_prb\_output.txt](hilbert_curve_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **XY2D** converts a 2D Cartesian coordinate to a 1D Hilbert
    coordinate.
-   **D2XY** converts a 1D Hilbert coordinate to a 2D Cartesian
    coordinate.
-   **ROT** rotates and flips a quadrant appropriately
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 24 December 2015.*
