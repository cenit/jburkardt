LATIN\_RANDOM\
Latin Random Squares in M dimensions {#latin_random-latin-random-squares-in-m-dimensions align="center"}
====================================

------------------------------------------------------------------------

**LATIN\_RANDOM** is a C++ library which makes Latin Random Squares.

A Latin square is a selection of one point from each row and column of a
square matrix or table. In **M** dimensions, the corresponding item is a
set of **N** points, where, in each dimension, there is exactly one
point whose coordinates are in a given "column" or range of values. To
emphasize the use of higher dimensions, these objects are sometimes
called Latin hypersquares.

A Latin Random Square (I just made up this name) is a set of **N**
points, where one point is taken at random from each of the subsquares
of a Latin Square. These points may be regarded as an **M** dimensional
quasirandom pointset.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LATIN\_RANDOM** is available in [a C
version](../../c_src/latin_random/latin_random.html) and [a C++
version](../../cpp_src/latin_random/latin_random.html) and [a FORTRAN77
version](../../f77_src/latin_random/latin_random.html) and [a FORTRAN90
version](../../f_src/latin_random/latin_random.html) and [a MATLAB
version](../../m_src/latin_random/latin_random.html) and [a Python
version.](../../py_src/latin_random/latin_random.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../cpp_src/box_behnken/box_behnken.html), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CVT](../../cpp_src/cvt/cvt.html), a C++ library which computes points
in a Centroidal Voronoi Tessellation.

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
Faure sequences.

[GRID](../../cpp_src/grid/grid.html), a C++ library which computes
points on a grid.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
elements of a Halton Quasi Monte Carlo (QMC) sequence, using a simple
interface.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley Quasi Monte Carlo (QMC)
sequence, using a simple interface.

[HEX\_GRID](../../cpp_src/hex_grid/hex_grid.html), a C++ library which
computes sets of points in a 2D hexagonal grid.

[IHS](../../cpp_src/ihs/ihs.html), a C++ library which computes improved
Latin Hypercube datasets.

[LATIN\_CENTER](../../cpp_src/latin_center/latin_center.html), a C++
library which computes Latin square data choosing the center value.

[LATIN\_COVER](../../cpp_src/latin_cover/latin_cover.html), a C++
library which produces N Latin squares which cover an NxN square, or NxN
Latin cubes which cover an NxNxN cube.

[LATIN\_EDGE](../../cpp_src/latin_edge/latin_edge.html), a C++ library
which computes Latin square data choosing the edge value.

[LATIN\_RANDOM\_DATASET](../../cpp_src/latin_random_dataset/latin_random_dataset.html),
a C++ program which creates a Latin Random Hypercube dataset;

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes Niederreiter sequences with base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
Sobol sequences.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes uniform random values.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes van der Corput sequences.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Springer Verlag, pages 201-202, 1983.
2.  C J Colbourn, J H Dinitz,\
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
5.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms,\
    Academic Press, 1978, second edition,\
    ISBN 0-12-519260-6.
6.  Herbert Ryser,\
    Combinatorial Mathematics,\
    Mathematical Association of America, 1963.

### Source Code: {#source-code align="center"}

-   [latin\_random.cpp](latin_random.cpp), the source code.
-   [latin\_random.hpp](latin_random.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [latin\_random\_prb.cpp](latin_random_prb.cpp), a sample calling
    program.
-   [latin\_random\_prb\_output.txt](latin_random_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **LATIN\_RANDOM\_NEW** returns points in a Latin Random square.
-   **PERM\_UNIFORM\_NEW** selects a random permutation of N objects.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 November 2014.*
