NIEDERREITER2\
The Niederreiter Quasirandom Sequence \[Base 2\] {#niederreiter2-the-niederreiter-quasirandom-sequence-base-2 align="center"}
================================================

------------------------------------------------------------------------

**NIEDERREITER2** is a C++ library which implements the Niederreiter
quasirandom sequence, using a base of 2.

A quasirandom or low discrepancy sequence, such as the Faure, Halton,
Hammersley, Niederreiter or Sobol sequences, is "less random" than a
pseudorandom number sequence, but more useful for such tasks as
approximation of integrals in higher dimensions, and in global
optimization. This is because low discrepancy sequences tend to sample
space "more uniformly" than random numbers. Algorithms that use such
sequences may have superior convergence.

NIEDERREITER2 is an adapation of the INLO2 and GOLO2 routines in ACM
TOMS Algorithm 738. The original code can only compute the "next"
element of the sequence. The revised code allows the user to specify the
index of the desired element.

The original, true, correct version of ACM TOMS Algorithm 738 is
available in the TOMS subdirectory of [the NETLIB web
site](http://www.netlib.org/).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NIEDERREITER2** is available in [a C++
version](../../cpp_src/niederreiter2/niederreiter2.html) and [a
FORTRAN90 version](../../f_src/niederreiter2/niederreiter2.html) and [a
MATLAB version.](../../m_src/niederreiter2/niederreiter2.html)

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

[LATIN\_EDGE](../../cpp_src/latin_edge/latin_edge.html), a C++ library
which computes Latin square data choosing the edge value.

[LATIN\_RANDOM](../../cpp_src/latin_random/latin_random.html), a C++
library which computes Latin square data choosing a random value in the
square.

[NIEDERREITER2\_DATASET](../../cpp_src/niederreiter2_dataset/niederreiter2_dataset.html),
a C++ program which creates a Niederreiter quasirandom dataset with base
2;

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
Sobol sequences.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes uniform random values.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes van der Corput sequences.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox,\
    Algorithm 659: Implementing Sobol's Quasirandom Sequence Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 14, Number 1, pages 88-100, 1988.
2.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Algorithm 738: Programs to Generate Niederreiter's Low-Discrepancy
    Sequences,\
    ACM Transactions on Mathematical Software,\
    Volume 20, Number 4, pages 494-495, 1994.
3.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, pages 195-213, 1992.
4.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.
5.  R Lidl, Harald Niederreiter,\
    Finite Fields,\
    Cambridge University Press, 1984, page 553.
6.  Harald Niederreiter,\
    Low-discrepancy and low-dispersion sequences,\
    Journal of Number Theory,\
    Volume 30, 1988, pages 51-70.
7.  Harald Niederreiter,\
    Random Number Generation and quasi-Monte Carlo Methods,\
    SIAM, 1992.

### Source Code: {#source-code align="center"}

-   [niederreiter2.cpp](niederreiter2.cpp), the source code;
-   [niederreiter2.hpp](niederreiter2.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [niederreiter2\_prb.cpp](niederreiter2_prb.cpp), the sample test
    code;
-   [niederreiter2\_prb\_output.txt](niederreiter2_prb_output.txt), the
    output file;

### List of Routines: {#list-of-routines align="center"}

-   **CALCC2** computes values of the constants C(I,J,R).
-   **CALCV2** calculates the value of the constants V(J,R).
-   **NIEDERREITER2** returns an element of the Niederreiter sequence
    base 2.
-   **NIEDERREITER2\_GENERATE** generates a set of Niederreiter values.
-   **PLYMUL2** multiplies two polynomials in the field of order 2
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **SETFLD2** sets up arithmetic tables for the finite field of
    order 2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 December 2009.*
