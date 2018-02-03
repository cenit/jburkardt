MANDELBROT\_PPM\
Binary PPM Image of the Mandelbrot Set {#mandelbrot_ppm-binary-ppm-image-of-the-mandelbrot-set align="center"}
======================================

------------------------------------------------------------------------

**MANDELBROT\_PPM** is a C++ program which creates a binary PPM image of
the Mandelbrot set, by Eric Weeks.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MANDELBROT\_PPM** is available in [a C
version](../../c_src/mandelbrot_ppm/mandelbrot_ppm.md) and [a C++
version](../../master/mandelbrot_ppm/mandelbrot_ppm.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FOREST\_FIRE\_SIMULATION](../../c_src/forest_fire_simulation/forest_fire_simulation.md),
a C program which simulates the occurrence of fires and regrowth in a
forest, displaying the results using X Windows, by Michael Creutz.

[MANDELBROT](../../master/mandelbrot/mandelbrot.md), a C++ program
which generates an ASCII PPM image of the Mandelbrot fractal set;

[MANDELBROT\_ASCII](../../c_src/mandelbrot_ascii/mandelbrot_ascii.md),
a C program which generates an ASCII TEXT image of the Mandelbrot
fractal set using just two lines of C.

[MANDELBROT\_OPENMP](../../master/mandelbrot_openmp/mandelbrot_openmp.md),
a C++ program which generates an ASCII Portable Pixel Map (PPM) image of
the Mandelbrot fractal set, using OpenMP for parallel execution.

[PPMB\_IO](../../master/ppmb_io/ppmb_io.md), a C++ library which
handles the Portable Pixel Map (binary) format.

[RANMAP](../../f_src/ranmap/ranmap.md), a FORTRAN90 program which
creates a PostScript file of images of iterated affine mappings;

[XISING](../../c_src/xising/xising.md), a C program which simulates
the variation in ferromagnetism in a material, displaying the results
using X Windows.

[XWAVES](../../c_src/xwaves/xwaves.md), a C program which simulates
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

-   [mandelbrot\_ppm.cpp](mandelbrot_ppm.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [mandelbrot.ppm](mandelbrot.ppm) the (binary) PPM image.
-   [mandelbrot.png](mandelbrot.png), a PNG version of the image.

### List of Routines: {#list-of-routines align="center"}

-   **MANDELBROT\_PPM** creates an ASCII PPM image of the Mandelbrot
    set.
-   **COLOR** writes the R, G and B colors for one pixel.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 26 December 2011.*
