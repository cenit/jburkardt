LATIN\_CENTER\
Latin Center Squares in M dimensions {#latin_center-latin-center-squares-in-m-dimensions align="center"}
====================================

------------------------------------------------------------------------

**LATIN\_CENTER** is a C++ library which makes Latin Center Squares.

A Latin square is a selection of one point from each row and column of a
square matrix or table. In M dimensions, the corresponding item is a set
of N points, where, in each dimension, there is exactly one point whose
coordinates are in a given "column" or range of values. To emphasize the
use of higher dimensions, these objects are sometimes called Latin
hypersquares.

Once a Latin Square has been created, a Latin Center Square is
determined by choosing the center of each subsquare.

Here is an image of a Latin centered grid with spatial dimension **M** =
2 and number of points **N** = 10.
![](../../datasets/latin_center/latin_center_02_00010.png){width="340"
height="440"}

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LATIN\_CENTER** is available in [a C++
version](../../master/latin_center/latin_center.md) and [a FORTRAN90
version](../../f_src/latin_center/latin_center.md) and [a MATLAB
version.](../../m_src/latin_center/latin_center.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../master/box_behnken/box_behnken.md), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CVT](../../master/cvt/cvt.md), a C++ library which computes points
in a Centroidal Voronoi Tessellation.

[FAURE](../../master/faure/faure.md), a C++ library which computes
Faure sequences.

[GRID](../../master/grid/grid.md), a C++ library which computes
points on a grid.

[HALTON](../../master/halton/halton.md), a C++ library which computes
elements of a Halton Quasi Monte Carlo (QMC) sequence, using a simple
interface.

[HAMMERSLEY](../../master/hammersley/hammersley.md), a C++ library
which computes elements of a Hammersley Quasi Monte Carlo (QMC)
sequence, using a simple interface.

[HEX\_GRID](../../master/hex_grid/hex_grid.md), a C++ library which
computes sets of points in a 2D hexagonal grid.

[IHS](../../master/ihs/ihs.md), a C++ library which computes improved
Latin Hypercube datasets.

[LATIN\_CENTER\_DATASET](../../master/latin_center_dataset/latin_center_dataset.md),
a C++ program which creates a Latin Center Hypercube dataset;

[LATIN\_COVER](../../master/latin_cover/latin_cover.md), a C++
library which produces N Latin squares which cover an NxN square, or NxN
Latin cubes which cover an NxNxN cube.

[LATIN\_EDGE](../../master/latin_edge/latin_edge.md), a C++ library
which computes Latin square data choosing the edge value.

[LATIN\_RANDOM](../../master/latin_random/latin_random.md), a C++
library which computes Latin square data choosing a random value in the
square.

[NIEDERREITER2](../../master/niederreiter2/niederreiter2.md), a C++
library which computes Niederreiter sequences with base 2.

[NORMAL](../../master/normal/normal.md), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL](../../master/sobol/sobol.md), a C++ library which computes
Sobol sequences.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes uniform random values.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes van der Corput sequences.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Springer Verlag, pages 201-202, 1983.
2.  C J Colbourn and J H Dinitz,\
    CRC Handbook of Combinatorial Design,\
    CRC, 1996.
3.  Bennett Fox,\
    Algorithm 647:\
    Implementation and Relative Efficiency of Quasirandom Sequence
    Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.
4.  M D McKay, W J Conover, R J Beckman,\
    A Comparison of Three Methods for Selecting Values of Input
    Variables in the Analysis of Output From a Computer Code,\
    Technometrics,\
    Volume 21, pages 239-245, 1979.
5.  Albert Nijenhuis and Herbert Wilf,\
    Combinatorial Algorithms,\
    Academic Press, 1978, second edition,\
    ISBN 0-12-519260-6.
6.  Herbert Ryser,\
    Combinatorial Mathematics,\
    Mathematical Association of America, 1963.

### Source Code: {#source-code align="center"}

-   [latin\_center.cpp](latin_center.cpp), the source code.
-   [latin\_center.hpp](latin_center.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [latin\_center\_prb.cpp](latin_center_prb.cpp), a sample calling
    program.
-   [latin\_center\_prb\_output.txt](latin_center_prb_output.txt), the
    output from a run of the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_SWAP** switches two integer values.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **LATIN\_CENTER** returns center points in a Latin square.
-   **PERM\_UNIFORM** selects a random permutation of N objects.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 December 2006.*
