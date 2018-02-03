LIFE\_SERIAL\
John Conway's Game of Life {#life_serial-john-conways-game-of-life align="center"}
==========================

------------------------------------------------------------------------

**LIFE\_SERIAL** is a C++ program which computes a few steps of the
evolution of John Conway's Game of Life, intended as a starting point
for implementing a parallel version.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LIFE\_SERIAL** is available in [a C
version](../../c_src/life_serial/life_serial.md) and [a C++
version](../../master/life_serial/life_serial.md) and [a FORTRAN77
version](../../f77_src/life_serial/life_serial.md) and [a FORTRAN90
version](../../f_src/life_serial/life_serial.md) and [a MATLAB
version](../../m_src/life_serial/life_serial.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CIRCLE\_GRID\_DISPLAY](../../m_src/circle_grid_display/circle_grid_display.md),
a MATLAB program which reads a matrix of integers, and draws a
corresponding grid of circles filled with color.

[FFT\_SERIAL](../../master/fft_serial/fft_serial.md), a C++ program
which demonstrates the computation of a Fast Fourier Transform (FFT),
and is intended as a starting point for implementing a parallel version.

[FIRE\_SERIAL](../../master/fire_serial/fire_serial.md), a C++
program which simulates a forest fire over a rectangular array of trees,
starting at a single random location. It is intended as a starting point
for the development of a parallel version.

[LIFE\_OPENGL](../../master/life_opengl/life_opengl.md), a C++
program which uses OpenGL to display the evolution of John Conway's Game
of Life, by Simon Green.

[MXM\_SERIAL](../../master/mxm_serial/mxm_serial.md), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

[POISSON\_SERIAL](../../master/poisson_serial/poisson_serial.md), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, intended as the starting point for the creation
of a parallel version.

[PRIME\_SERIAL](../../master/prime_serial/prime_serial.md), a C++
program which counts the number of primes between 1 and N, intended as a
starting point for the creation of a parallel version.

[QUAD\_SERIAL](../../master/quad_serial/quad_serial.md), a C++
program which approximates an integral using a quadrature rule, and is
intended as a starting point for parallelization exercises.

[QUAD2D\_SERIAL](../../master/quad2d_serial/quad2d_serial.md), a C++
program which approximates an integral over a 2D region using a product
quadrature rule, and is intended as a starting point for parallelization
exercises.

[SEARCH\_SERIAL](../../master/search_serial/search_serial.md), a C++
program which searches integers between A and B for a value J such that
F(J) = C, intended as a starting point for the creation of a parallel
version.

[SUBSET\_SUM\_SERIAL](../../master/subset_sum_serial/subset_sum_serial.md),
a C++ program which seeks solutions of the subset sum problem, in which
it is desired to find a subset of a set of integers which has a given
sum; this version of the program is intended as a starting point for a
parallel approach.

### Reference: {#reference align="center"}

1.  Martin Gardner,\
    Mathematical Games: The Fantastic Combinations of John Conway's new
    solitaire game "Life",\
    Scientific American,\
    Volume 223, Number 4, October 1970, pages 120-123.\

### Source Code: {#source-code align="center"}

-   [life\_serial.cpp](life_serial.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

Executing the program produces a series of text files containing 0's and
1's, to indicate the current state of the game:

-   [life\_000.txt](life_000.txt)
-   [life\_000.png](life_000.png), a color grid created by
    circle\_grid\_display().
-   [life\_001.txt](life_001.txt)
-   [life\_001.png](life_001.png), a color grid created by
    circle\_grid\_display().
-   [life\_002.txt](life_002.txt)
-   [life\_003.txt](life_003.txt)
-   [life\_004.txt](life_004.txt)
-   [life\_005.txt](life_005.txt)
-   [life\_006.txt](life_006.txt)
-   [life\_007.txt](life_007.txt)
-   [life\_008.txt](life_008.txt)
-   [life\_009.txt](life_009.txt)
-   [life\_010.txt](life_010.txt)

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LIFE\_SERIAL.
-   **FILENAME\_INC** increments a partially numeric file name.
-   **LIFE\_INIT** initializes the life grid.
-   **LIFE\_UPDATE** updates a Life grid.
-   **LIFE\_WRITE** writes a grid to a file.
-   **R8\_UNIFORM\_01** returns a pseudorandom R8 scaled to \[0,1\].
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 September 2013.*
