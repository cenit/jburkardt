FIRE\_SERIAL\
Forest Fire Simulation, Serial Version {#fire_serial-forest-fire-simulation-serial-version align="center"}
======================================

------------------------------------------------------------------------

**FIRE\_SERIAL** is a C++ program which simulates a forest fire over a
rectangular array of trees, starting at a single random location. It is
intended as a starting point for the development of a parallel version.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FIRE\_SERIAL** is available in [a C
version](../../c_src/fire_serial/fire_serial.html) and [a C++
version](../../cpp_src/fire_serial/fire_serial.html) and [a FORTRAN77
version](../../f77_src/fire_serial/fire_serial.html) and [a FORTRAN90
version](../../f_src/fire_serial/fire_serial.html) and [a MATLAB
version](../../m_src/fire_serial/fire_serial.html) and [a Python
version](../../py_src/fire_serial/fire_serial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FFT\_SERIAL](../../cpp_src/fft_serial/fft_serial.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for developing a parallel version using
OpenMP.

[HEATED\_PLATE](../../cpp_src/heated_plate/heated_plate.html), a C++
program which solves the steady state heat equation in a 2D rectangular
region, and is intended as a starting point for implementing an OpenMP
parallel version.

[MD](../../cpp_src/md/md.html), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing an OpenMP parallel version.

[MXM\_SERIAL](../../cpp_src/mxm_serial/mxm_serial.html), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

[POISSON\_SERIAL](../../cpp_src/poisson_serial/poisson_serial.html), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, and is intended as the starting point for the
creation of a parallel version.

[PRIME\_SERIAL](../../cpp_src/prime_serial/prime_serial.html), a C++
program which counts the number of primes between 1 and N, intended as a
starting point for the creation of a parallel version.

[QUAD\_SERIAL](../../cpp_src/quad_serial/quad_serial.html), a C++
program which approximates an integral using a quadrature rule, and is
intended as a starting point for parallelization exercises.

[QUAD2D\_SERIAL](../../cpp_src/quad2d_serial/quad2d_serial.html), a C++
program which approximates an integral over a 2D region using a product
quadrature rule, and is intended as a starting point for parallelization
exercises.

[SEARCH\_SERIAL](../../cpp_src/search_serial/search_serial.html), a C++
program which searches integers between A and B for a value J such that
F(J) = C, intended as a starting point for the creation of a parallel
version.

[SUBSET\_SUM\_SERIAL](../../cpp_src/subset_sum_serial/subset_sum_serial.html),
a C++ program which seeks solutions of the subset sum problem, in which
it is desired to find a subset of a set of integers which has a given
sum; this version of the program is intended as a starting point for a
parallel approach.

### Reference: {#reference align="center"}

1.  Peter Arbenz, Wesley Petersen,\
    Introduction to Parallel Computing - A practical guide with examples
    in C,\
    Oxford University Press,\
    ISBN: 0-19-851576-6,\
    LC: QA76.58.P47.
2.  Rohit Chandra, Leonardo Dagum, Dave Kohr, Dror Maydan, Jeff
    McDonald, Ramesh Menon,\
    Parallel Programming in OpenMP,\
    Morgan Kaufmann, 2001,\
    ISBN: 1-55860-671-8,\
    LC: QA76.642.P32.
3.  Barbara Chapman, Gabriele Jost, Ruud vanderPas, David Kuck,\
    Using OpenMP: Portable Shared Memory Parallel Processing,\
    MIT Press, 2007,\
    ISBN13: 978-0262533027,\
    LC: QA76.642.C49.

### Source Code: {#source-code align="center"}

-   [fire\_serial.cpp](fire_serial.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fire\_serial\_output.txt](fire_serial_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FIRE\_SERIAL.
-   **FIRE\_SPREADS** determines whether the fire spreads.
-   **FOREST\_ALLOCATE** allocates memory for a forest of the given
    size.
-   **FOREST\_BURNS** models a single time step of the burning forest.
-   **FOREST\_DELETE** deletes the memory previously allocated for a
    forest.
-   **FOREST\_INITIALIZE** initializes the forest values.
-   **FOREST\_IS\_BURNING** reports whether any trees in the forest are
    burning.
-   **FOREST\_PRINT** prints the state of the trees in the forest.
-   **GET\_PERCENT\_BURNED** computes the percentage of the forest that
    burned.
-   **SEED\_BY\_TIME** seeds the random number generator using the time
    as a seed.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TREE\_IGNITE** sets a given tree to the SMOLDERING state.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 June 2013.*
