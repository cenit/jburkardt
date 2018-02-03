MANDELBROT\
Generate an ASCII Portable Pixel Map (PPM) Image of the Mandelbrot Set {#mandelbrot-generate-an-ascii-portable-pixel-map-ppm-image-of-the-mandelbrot-set align="center"}
======================================================================

------------------------------------------------------------------------

**MANDELBROT** is a C++ program which generates an ASCII Portable Pixel
Map (PPM) image of the Mandelbrot set.

The Mandelbrot set is a set of points C in the complex plane with the
property that the iteration

            z(n+1) = z(n)^2 + c
          

remains bounded.

All the points in the Mandelbrot set are known to lie within the circle
of radius 2 and center at the origin.

To make a plot of the Mandelbrot set, one starts with a given point C
and carries out the iteration for a fixed number of steps. If the
iterates never exceed 2 in magnitude, the point C is taken to be a
member of the Mandelbrot set.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MANDELBROT** is available in [a C
version](../../c_src/mandelbrot/mandelbrot.html) and [a C++
version](../../cpp_src/mandelbrot/mandelbrot.html) and [a FORTRAN77
version](../../f77_src/mandelbrot/mandelbrot.html) and [a FORTRAN90
version](../../f_src/mandelbrot/mandelbrot.html) and [a MATLAB
version.](../../m_src/mandelbrot/mandelbrot.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FOREST\_FIRE\_SIMULATION](../../c_src/forest_fire_simulation/forest_fire_simulation.html),
a C program which simulates the occurrence of fires and regrowth in a
forest, displaying the results using X Windows, by Michael Creutz.

[HODGE](../../c_src/hodge/hodge.html), a C program which implements a 2D
cellular automaton, that can be regarded as a model of the spread of an
illness, and whose parameters can be tuned to exhibit stability, regular
waves, or a variety of chaotic behavior. This is a simplified version of
a program by Martin Gerhardt and Heike Schuster

[MANDELBROT\_OPENMP](../../cpp_src/mandelbrot_openmp/mandelbrot_openmp.html),
a C++ program which generates an ASCII Portable Pixel Map (PPM) image of
the Mandelbrot fractal set, using OpenMP for parallel execution.

[PPMA\_IO](../../cpp_src/ppma_io/ppma_io.html), a C++ library which
handles the ASCII Portable Pixel Map (PPM) format.

[RANMAP](../../f_src/ranmap/ranmap.html), a FORTRAN90 program which
creates a PostScript file of images of iterated affine mappings;

[XISING](../../c_src/xising/xising.html), a C program which simulates
the variation in ferromagnetism in a material, displaying the results
using X Windows.

[XWAVES](../../c_src/xwaves/xwaves.html), a C program which simulates
the behavior of solution of certain forms of the wave equation,
displaying the results using X Windows.

### Reference: {#reference align="center"}

1.  Alexander Dewdney,\
    A computer microscope zooms in for a close look at the most
    complicated object in mathematics,\
    Scientific American,\
    Volume 257, Number 8, August 1985, pages 16-24.
2.  Heinz-Otto Peitgen, Hartmut Juergens, Dietmar Saupe,\
    Chaos and Fractals - New Frontiers in Science,\
    Springer, 1992,\
    ISBN: 0-387-20229-3,\
    LC: Q172.5.C45.P45.

### Source Code: {#source-code align="center"}

-   [mandelbrot.cpp](mandelbrot.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [mandelbrot.ppm](mandelbrot.ppm), the ASCII PPM file created by the
    program.
-   [mandelbrot.png](mandelbrot.png), a PNG version of the image.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MANDELBROT.
-   **PPMA\_WRITE** writes an ASCII portable pixel map file.
-   **PPMA\_WRITE\_DATA** writes the data of a PPMA file.
-   **PPMA\_WRITE\_HEADER** writes the header of a PPMA file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 July 2010.*
