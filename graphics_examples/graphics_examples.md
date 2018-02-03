GRAPHICS\_EXAMPLES\
Sample Data for Graphics Demonstrations {#graphics_examples-sample-data-for-graphics-demonstrations align="center"}
=======================================

------------------------------------------------------------------------

**GRAPHICS\_EXAMPLES**, C++ programs which illustrate how various kinds
of data can be displayed and analyzed graphically.

These programs rely on the DISLIN package to set up the graphics output.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GRAPHICS\_EXAMPLES** programs are available in [a C
version](../../c_src/graphics_examples/graphics_examples.md) and [a
C++ version](../../master/graphics_examples/graphics_examples.md) and
[a dataset
version](../../datasets/graphics_examples/graphics_examples.md) and [a
FORTRAN77
version](../../f77_src/graphics_examples/graphics_examples.md) and [a
FORTRAN90 version](../../f_src/graphics_examples/graphics_examples.md)
and [a MATHEMATICA
version](../../math_src/graphics_examples/graphics_examples.md) and [a
MATLAB version](../../m_src/graphics_examples/graphics_examples.md)
and [a Python
version](../../py_src/graphics_examples/graphics_examples.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DISLIN](../../master/dislin/dislin.md), C++ programs which
illustrate the use of DISLIN, a scientific graphics package, by Helmut
Michels.

[GRAPHICS\_EXAMPLES\_CONVERT](../../examples/graphics_examples_convert/graphics_examples_convert.md),
examples which illustrate how various kinds of data can be processed and
modified using the ImageMagick program convert() and its related tools.

[GRAPHICS\_EXAMPLES\_GNUPLOT](../../examples/graphics_examples_gnuplot/graphics_examples_gnuplot.md),
examples which illustrate how various kinds of data can be displayed and
analyzed graphically using the interactive executable graphics program
gnuplot().

[GRAPHICS\_EXAMPLES\_GRACE](../../examples/graphics_examples_grace/graphics_examples_grace.md),
examples which illustrate how various kinds of data can be displayed and
analyzed graphically using the interactive executable graphics program
grace().

[GRAPHICS\_EXAMPLES\_PLOTLY](../../examples/graphics_examples_plotly/graphics_examples_plotly.md),
examples which illustrate how various kinds of data can be displayed and
analyzed graphically, using the plotly() program from a browser.

### Reference: {#reference align="center"}

1.  Andrew Frank, Arthur Asuncion,\
    UCI Machine Learning Repository,\
    http://archive.ics.uci.edu/ml,\
    School of Information and Computer Science,\
    University of California, Irvine, California.
2.  Philipp Janert,\
    Gnuplot in Action: Understanding Data with Graphs,\
    Manning, 2010,\
    ISBN13: 978-1-933988-39-8,\
    LC: QA276.4.J37.
3.  Wendy Martinez, Angel Martinez,\
    Computational Statistics Handbook with MATLAB,\
    Chapman and Hall / CRC, 2002,\
    ISBN: 1-58488-229-8,\
    LC: QA276.4.M272.
4.  Helmut Michels,\
    The Data Plotting Software DISLIN - version 10.4,\
    Shaker Media GmbH, January 2010,\
    ISBN13: 978-3-86858-517-9.

### Examples and Tests: {#examples-and-tests align="center"}

**CIRCLE\_INOUT** depicts 500 pairs of (X,Y) data points in the unit
square, 395 of which lie inside the unit circle, and 105 outside. If
possible, the "inside" points should be blue, the "outside" points red,
and the circle itself should also be drawn.

-   [circle\_in.txt](circle_in.txt), the coordinates of points inside
    the circle.
-   [circle\_out.txt](circle_out.txt), the coordinates of points outside
    the circle.
-   [circle\_inout.cpp](circle_inout.cpp), reads the data and makes a
    plot.
-   [circle\_inout.png](circle_inout.png), a PNG image of the plot.

**GEYSER** contains the waiting time in minutes between successive
eruptions of the Old Faithful geyser. 299 values are recorded. The data
ranges from 43 to 108. It should be displayed in 14 bins of width 5 from
40 to 110. The data comes from Martinez and Martinez.

-   [geyser.txt](geyser.txt), the data set;
-   [geyser\_binned.txt](geyser_binned.txt), the data set after being
    grouped into 14 bins;
-   [geyser.cpp](geyser.cpp), reads the data and makes a plot.
-   [geyser.png](geyser.png), a PNG image of the plot.

**LISSAJOUS** records 1000 points on a Lissajous curve defined by
x=sin(3\*t+pi/2), y=sin(4t). The curve is to be plotted and every tenth
point marked.

-   [lissajous.txt](lissajous.txt), the data.
-   [lissajous.cpp](lissajous.cpp), reads the data and makes a plot.
-   [lissajous.sh](lissajous.sh), commands to compile, link and run the
    sample calling program;
-   [lissajous\_output.txt](lissajous_output.txt), the output file.
-   [lissajous.png](lissajous.png), a PNG image of the plot.

**LYNX** records the yearly lynx harvest from 1821 to 1934. The graph
should plot the data points as circles, and connect consecutive data
points with straight line segments to suggest a curve.

-   [lynx.txt](lynx.txt), the data.
-   [lynx.cpp](lynx.cpp), creates the data and displays a scatter plot.
-   [lynx.sh](lynx.sh), commands to compile, link and run the sample
    calling program;
-   [lynx\_output.txt](lynx_output.txt), the output file.
-   [lynx.png](lynx.png), a PNG image of the plot.

**ORBITAL** records, on a 101x101 grid over \[0,4\*pi\]x\[0,4\*pi\], the
minimum distance between two planets given a pair of orbital angles. A
contour plot of this data is to be presented.

-   [orbital.txt](orbital.txt), the data.
-   [orbital.cpp](orbital.cpp), reads the data and makes a plot.
-   [orbital.sh](orbital.sh), commands to compile, link and run the
    sample calling program;
-   [orbital\_output.txt](orbital_output.txt), the output file.
-   [orbital.png](orbital.png), a PNG image of the plot.

**SCATTER\_PLOT** generates 500 pairs of (X,Y) data, which lie in the
unit square, and tend to cluster around (0.5,0.5).

-   [scatter\_plot.txt](scatter_plot.txt), the data.
-   [scatter\_plot.cpp](scatter_plot.cpp), creates the data and displays
    a scatter plot.
-   [scatter\_plot.sh](scatter_plot.sh), commands to compile, link and
    run the sample calling program;
-   [scatter\_plot\_output.txt](scatter_plot_output.txt), the output
    file.
-   [scatter\_plot.png](scatter_plot.png), a PNG image of the plot.

**SURFACE\_GRID** records, on a 41x41 grid over \[-2,2\]x\[-2,+2\], the
values z = exp(-(x\^2+y\^2)) \* cos(0.25\*x) \* sin(y) \*
cos(2\*(x\^2+y\^2)). The data is to be plotted as a surface.

-   [surface\_grid.txt](surface_grid.txt), the data.
-   [surface\_grid.cpp](surface_grid.cpp), reads the data and makes a
    plot.
-   [surface\_grid.sh](surface_grid.sh), commands to compile, link and
    run the sample calling program;
-   [surface\_grid\_output.txt](surface_grid_output.txt), the output
    file.
-   [surface\_grid.png](surface_grid.png), a PNG image of the plot.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 20 May 2011.*
