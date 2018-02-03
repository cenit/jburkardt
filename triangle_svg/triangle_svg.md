TRIANGLE\_SVG\
Plot Triangle and Points with Scalable Vector Graphics (SVG) {#triangle_svg-plot-triangle-and-points-with-scalable-vector-graphics-svg align="center"}
============================================================

------------------------------------------------------------------------

**TRIANGLE\_SVG** is a C++ library which uses Scalable Vector Graphics
(SVG) to create a plot of a triangle and any number of points. Such
plots can illustrate quadrature rules or sampling methods for the
triangle.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_SVG** is available in [a C
version](../../c_src/triangle_svg/triangle_svg.html) and [a C++
version](../../cpp_src/triangle_svg/triangle_svg.html) and [a FORTRAN77
version](../../f77_src/triangle_svg/triangle_svg.html) and [a FORTRAN90
version](../../f_src/triangle_svg/triangle_svg.html) and [a MATLAB
version](../../m_src/triangle_svg/triangle_svg.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TRIANGULATION\_SVG](../../cpp_src/triangulation_svg/triangulation_svg.html),
a C++ program which creates a Scalable Vector Graphics (SVG) image of a
triangulation, which can be displayed by a web browser.

### Reference: {#reference align="center"}

1.  W3C, Scalable Vector Graphics 1.1 (Second Edition), 16 August 2011,
    http://www.w3.org/TR/SVG11/

### Source Code: {#source-code align="center"}

-   [triangle\_svg.cpp](triangle_svg.cpp), the source code.
-   [triangle\_svg.hpp](triangle_svg.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_svg\_prb.cpp](triangle_svg_prb.cpp), a sample calling
    program.
-   [triangle\_svg\_prb\_output.txt](triangle_svg_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **R8\_TO\_I4** maps real X in \[XMIN, XMAX\] to integer IX in
    \[IXMIN, IXMAX\].
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_SVG** plots a triangle and points in SVG format.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 21 April 2014.*
