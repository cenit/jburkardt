EDGE\
Edge Detection {#edge-edge-detection align="center"}
==============

------------------------------------------------------------------------

**EDGE** is a C++ library which defines some test functions in 1D, 2D
and 3D for the detection of edges, and uses GNUPLOT to display images of
the functions.

In particular, we look at some simple functional examples in 1D, 2D, and
3D, that is, situations in which a formula is supplied so that the value
of a scalar quantity f() can be determined at any point in the region.
We are interested in examples in which the quantity f() exhibits jumps.
that is, sudden, sharp changes in value.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**EDGE** is available in [a C version](../../c_src/edge/edge.html) and
[a C++ version](../../cpp_src/edge/edge.html) and [a FORTRAN77
version](../../f77_src/edge/edge.html) and [a FORTRAN90
version](../../f_src/edge/edge.html) and [a MATLAB
version](../../m_src/edge/edge.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[IMAGE\_EDGE](../../cpp_src/image_edge/image_edge.html), a C++ library
which demonstrates a simple procedure for edge detection in images.

### Reference: {#reference align="center"}

-   Rick Archibald, Anne Gelb, Jungho Yoon,\
    Polynomial fitting for edge detection in irregularly sampled signals
    and images,\
    SIAM Journal on Numerical Analysis,\
    Volume 43, Number 1, 2006, pages 259-279.
-   Rick Archibald, Anne Gelb, Jungho Yoon,\
    Determining the location of discontinuities in the derivatives of
    functions,\
    Applied Numerical Mathematics,\
    Volume 58, 2008, pages 577-592.
-   Larry Shepp, Ben Logan,\
    The Fourier reconstruction of a head section,\
    IEEE Transactions on Nuclear Science,\
    Volume NS-21, June 1974, pages 21-43.
-   Larry Shepp,\
    Computerized tomography and nuclear magnetic resonance,\
    Journal of Computer Assisted Tomography,\
    Volume 4, Number 1, February 1980, pages 94-107.

### Source Code: {#source-code align="center"}

-   [edge.cpp](edge.cpp), the source code.
-   [edge.hpp](edge.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [edge\_prb.cpp](edge_prb.cpp), calls all the tests.
-   [edge\_prb\_output.txt](edge_prb_output.txt), the output file.
-   [fx1\_data.txt](fx1_data.txt), a data file for fx1.
-   [fx1\_commands.txt](fx1_commands.txt), GNUPLOT commands that can
    create an image of fx1.
-   [fx1.png](fx1.png), an image of fx1.
-   [fx2\_data.txt](fx2_data.txt), a data file for fx2.
-   [fx2\_commands.txt](fx2_commands.txt), GNUPLOT commands that can
    create an image of fx2.
-   [fx2.png](fx2.png), an image of fx2.
-   [fx3\_data.txt](fx3_data.txt), a data file for fx3.
-   [fx3\_commands.txt](fx3_commands.txt), GNUPLOT commands that can
    create an image of fx3.
-   [fx3.png](fx3.png), an image of fx3.
-   [fx4\_data.txt](fx4_data.txt), a data file for fx4.
-   [fx4\_commands.txt](fx4_commands.txt), GNUPLOT commands that can
    create an image of fx4.
-   [fx4.png](fx4.png), an image of fx4.
-   [fx5\_data.txt](fx5_data.txt), a data file for fx5.
-   [fx5\_commands.txt](fx5_commands.txt), GNUPLOT commands that can
    create an image of fx5.
-   [fx5.png](fx5.png), an image of fx5.
-   [fx6\_data.txt](fx6_data.txt), a data file for fx6.
-   [fx6\_commands.txt](fx6_commands.txt), GNUPLOT commands that can
    create an image of fx6.
-   [fx6.png](fx6.png), an image of fx6.
-   [fx7\_data.txt](fx7_data.txt), a data file for fx7.
-   [fx7\_commands.txt](fx7_commands.txt), GNUPLOT commands that can
    create an image of fx7.
-   [fx7.png](fx7.png), an image of fx7.
-   [fxy1\_data.txt](fxy1_data.txt), a data file for fxy1.
-   [fxy1\_commands.txt](fxy1_commands.txt), GNUPLOT commands that can
    create an image of fxy1.
-   [fxy1.png](fxy1.png), an image of fxy1.
-   [fxy2\_data.txt](fxy2_data.txt), a data file for fxy2.
-   [fxy2\_commands.txt](fxy2_commands.txt), GNUPLOT commands that can
    create an image of fxy2.
-   [fxy2.png](fxy2.png), an image of fxy2.
-   [fxy3\_data.txt](fxy3_data.txt), a data file for fxy3.
-   [fxy3\_commands.txt](fxy3_commands.txt), GNUPLOT commands that can
    create an image of fxy3.
-   [fxy3.png](fxy3.png), an image of fxy3.
-   [fxy4\_data.txt](fxy4_data.txt), a data file for fxy4.
-   [fxy4\_commands.txt](fxy4_commands.txt), GNUPLOT commands that can
    create an image of fxy4.
-   [fxy4.png](fxy4.png), an image of fxy4.
-   [fxy5\_data.txt](fxy5_data.txt), a data file for fxy5.
-   [fxy5\_commands.txt](fxy5_commands.txt), GNUPLOT commands that can
    create an image of fxy5.
-   [fxy5.png](fxy5.png), an image of fxy5.
-   [fxyz1\_x\_data.txt](fxyz1_x_data.txt), a data file for fxyz1 with x
    fixed at 0.
-   [fxyz1\_x\_commands.txt](fxyz1_x_commands.txt), GNUPLOT commands
    that can create an image of fxyz1\_x.
-   [fxyz1\_x.png](fxyz1_x.png), an image of fxyz1\_x.
-   [fxyz1\_y\_data.txt](fxyz1_y_data.txt), a data file for fxyz1 with y
    fixed at 0.
-   [fxyz1\_y\_commands.txt](fxyz1_y_commands.txt), GNUPLOT commands
    that can create an image of fxyz1\_y.
-   [fxyz1\_y.png](fxyz1_y.png), an image of fxyz1\_y.
-   [fxyz1\_z\_data.txt](fxyz1_z_data.txt), a data file for fxyz1 with z
    fixed at -0.1.
-   [fxyz1\_z\_commands.txt](fxyz1_z_commands.txt), GNUPLOT commands
    that can create an image of fxyz1\_z.
-   [fxyz1\_z.png](fxyz1_z.png), an image of fxyz1\_z.

### List of Routines: {#list-of-routines align="center"}

-   **FX1** is the first 1D example, scalar version.
-   **FX2** is the second 1D example, scalar version.
-   **FX3** is the third 1D example, scalar version.
-   **FX4** is the fourth 1D example, scalar version.
-   **FX5** is the fifth 1D example, scalar version.
-   **FXY1** is the first 2D example, scalar version.
-   **FXY2** is the second 2D example, scalar version.
-   **FXY3** is the third 2D example, scalar version.
-   **FXY4** is the fourth 2D example, scalar version.
-   **FXY5** is the fifth 2D example, scalar version.
-   **FXYZ1** is the first 3D example, scalar version.
-   **FX1\_VEC** is the first 1D example, vector version.
-   **FX2\_VEC** is the second 1D example, vector version.
-   **FX3\_VEC** is the third 1D example, vector version.
-   **FX4\_VEC** is the fourth 1D example, vector version.
-   **FX5\_VEC** is the fifth 1D example, vector version.
-   **FXY1\_VEC** is the first 2D example, vector version.
-   **FXY2\_VEC** is the second 2D example, vector version.
-   **FXY3\_VEC** is the third 2D example, vector version.
-   **FXY4\_VEC** is the fourth 2D example, vector version.
-   **FXY5\_VEC** is the fifth 2D example, vector version.
-   **FXYZ1\_VEC** is the first 3D example, vector version.
-   **R8VEC\_COPY\_NEW** copies an R8VEC.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 19 September 2014.*
