GRID\
Random Points on a Uniform Grid {#grid-random-points-on-a-uniform-grid align="center"}
===============================

------------------------------------------------------------------------

**GRID** is a C++ library which randomly selects N distinct points on a
uniform grid in the unit hypercube in M-dimensional space.

Note that, unless N is an Mth power of an integer, the program must
generate a regular grid with too many points, and then omit some.
Choosing which points to omit is done with a random number generator,
whose actions are controlled by SEED.

The actual placement of the grid within the unit hypercube leaves some
options for the use. It is easiest to describe the options in the 1
dimensional case, and in terms of where the first and last grid point
are. Assuming we have N evenly spaced points to place between 0 and 1,
the centering options are

-   CENTER = 1: first point is 0.0, last point is 1.0;
-   CENTER = 2: first point is 1/(N+1), last point is N/(N+1);
-   CENTER = 3: first point is 0, last point is (N-1)/N;
-   CENTER = 4: first point is 1/N, last point is 1;
-   CENTER = 5: first point is 1/(2\*N), last point is (2\*N-1)/(2\*N);

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GRID** is available in [a C version](../../c_src/grid/grid.md) and
[a C++ version](../../master/grid/grid.md) and [a FORTRAN90
version](../../f_src/grid/grid.md) and [a MATLAB
version](../../m_src/grid/grid.md) and [a Python
version](../../py_src/grid/grid.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../master/box_behnken/box_behnken.md), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CLENSHAW\_CURTIS\_RULE](../../master/clenshaw_curtis_rule/clenshaw_curtis_rule.md),
a C++ library which defines a multiple dimension Clenshaw Curtis
quadrature rule.

[CVT](../../master/cvt/cvt.md), a C++ library which computes elements
of a Centroidal Voronoi Tessellation.

[DISK\_GRID](../../master/disk_grid/disk_grid.md), a C++ library
which computes grid points that lie inside a disk of user specified
radius and center in 2D, using GNUPLOT to create an image of the grid.

[FAURE](../../master/faure/faure.md), a C++ library which computes
elements of a Faure quasirandom sequence.

[GRID\_DATASET](../../master/grid_dataset/grid_dataset.md), a C++
program which creates a grid sequence and writes it to a file.

[HALTON](../../master/halton/halton.md), a C++ library which computes
elements of a Halton quasirandom sequence.

[HAMMERSLEY](../../master/hammersley/hammersley.md), a C++ library
which computes elements of a Hammersley quasirandom sequence.

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

[LCVT](../../master/lcvt/lcvt.md), a C++ library which computes a
latinized Centroidal Voronoi Tessellation.

[NIEDERREITER](../../master/niederreiter/niederreiter.md), a C++
library which computes elements of a Niederreiter quasirandom sequence
\[arbitrary base\].

[SIMPLEX\_GRID](../../master/simplex_grid/simplex_grid.md), a C++
library which generates a regular grid of points over the interior of an
arbitrary simplex in M dimensions.

[SOBOL](../../master/sobol/sobol.md), a C++ library which computes
elements of a Sobol quasirandom sequence.

[SPHERE\_GRID](../../master/sphere_grid/sphere_grid.md), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, on the surface
of the unit sphere in 3D.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes uniform random values.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes van der Corput sequences.

### Source Code: {#source-code align="center"}

-   [grid.cpp](grid.cpp), the source code.
-   [grid.hpp](grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [grid\_prb.cpp](grid_prb.cpp), a sample problem.
-   [grid\_prb\_output.txt](grid_prb_output.txt), sample problem output.

### List of Routines: {#list-of-routines align="center"}

-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **GRID\_GENERATE** generates a grid dataset.
-   **GRID\_SIDE** finds the smallest DIM\_NUM-dimensional grid
    containing at least N points.
-   **GRID\_WRITE** writes a grid dataset to a file.
-   **I4\_LOG\_10** returns the whole part of the logarithm base 10 of
    an integer.
-   **I4\_TO\_S** converts an integer to a string.
-   **KSUB\_RANDOM2** selects a random subset of size K from a set of
    size N.
-   **R8\_EPSILON** returns the round off unit for double precision
    arithmetic.
-   **R8\_UNIFORM\_01** returns a unit double precision pseudorandom
    number.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **TUPLE\_NEXT\_FAST** computes the next element of a tuple space,
    "fast".

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
