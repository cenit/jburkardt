NIEDERREITER\
The Niederreiter Quasirandom Sequence \[Arbitrary base\] {#niederreiter-the-niederreiter-quasirandom-sequence-arbitrary-base align="center"}
========================================================

------------------------------------------------------------------------

**NIEDERREITER** is a C++ library which implements the Niederreiter
quasirandom sequence, using an "arbitrary" base; more correctly, the
code is not restricted to using a base of 2, but can instead use a base
that is a prime or a power of a prime.

A quasirandom or low discrepancy sequence, such as the Faure, Halton,
Hammersley, Niederreiter or Sobol sequences, is "less random" than a
pseudorandom number sequence, but more useful for such tasks as
approximation of integrals in higher dimensions, and in global
optimization. This is because low discrepancy sequences tend to sample
space "more uniformly" than random numbers. Algorithms that use such
sequences may have superior convergence.

NIEDERREITER is an adaptation of the INLO and GOLO routines in ACM TOMS
Algorithm 738. The original code can only compute the "next" element of
the sequence. The revised code allows the user to specify the index of
the desired element.

The original, true, correct version of ACM TOMS Algorithm 738 is
available in the TOMS subdirectory of [the NETLIB web
site](http://www.netlib.org/). The version displayed here has been
converted to FORTRAN90, and other internal changes have been made to
suit me.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NIEDERREITER** is available in [a C++
version](../../master/niederreiter/niederreiter.md) and [a FORTRAN90
version.](../../f_src/niederreiter/niederreiter.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CVT](../../master/cvt/cvt.md), a C++ library which computes elements
of a Centroidal Voronoi Tessellation.

[FAURE](../../master/faure/faure.md), a C++ library which computes
elements of a Faure quasirandom sequence.

[GRID](../../master/grid/grid.md), a C++ library which computes
elements of a grid dataset.

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

[NIEDERREITER2](../../master/niederreiter2/niederreiter2.md), a C++
library which computes a Niederreiter sequence for a base of 2.

[NORMAL](../../master/normal/normal.md), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL](../../master/sobol/sobol.md), a C++ library which computes
elements of a Sobol quasirandom sequence.

[TOMS738](../../f_src/toms738/toms738.md), a FORTRAN90 library which
is a version of ACM TOMS algorithm 738, for evaluating Niederreiter
sequences.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes elements of a van der Corput pseudorandom
sequence.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox,\
    Algorithm 659: Implementing Sobol's Quasirandom Sequence Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 14, Number 1, 1988, pages 88-100.
2.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Algorithm 738: Programs to Generate Niederreiter's Low-Discrepancy
    Sequences,\
    ACM Transactions on Mathematical Software,\
    Volume 20, Number 4, 1994, pages 494-495.
3.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, 1992, pages 195-213.
4.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, 1986, pages 362-376.
5.  Rudolf Lidl, Harald Niederreiter,\
    Finite Fields,\
    Second Edition,\
    Cambridge University Press, 1997,\
    ISBN: 0521392314,\
    LC: QA247.3.L53
6.  Harald Niederreiter,\
    Low-discrepancy and low-dispersion sequences,\
    Journal of Number Theory,\
    Volume 30, 1988, pages 51-70.
7.  Harald Niederreiter,\
    Random Number Generation and quasi-Monte Carlo Methods,\
    SIAM, 1992,\
    ISBN13: 978-0-898712-95-7.

### Source Code: {#source-code align="center"}

**GFARIT** must be run first, to set up a tables of addition and
multiplication.

-   [gfarit.cpp](gfarit.cpp), the source code;
-   [gfarit\_output.txt](gfarit_output.txt), output from a run of
    GFARIT;
-   [gfarit.txt](gfarit.txt), the data file created by the run;

**GFPLYS** must be run second, to set up a table of irreducible
polynomials.

-   [gfplys.cpp](gfplys.cpp), the source code;
-   [gfplys\_output.txt](gfplys_output.txt), output from a run of
    GFPLYS;
-   [gfplys.txt](gfplys.txt), the data file created by the run;

Once **GFARIT** and **GFPLYS** have been run to set up the tables, the
**NIEDERREITER** routines can be used.

-   [niederreiter.cpp](niederreiter.cpp), the source code;
-   [niederreiter.hpp](niederreiter.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [niederreiter\_prb.cpp](niederreiter_prb.cpp), the sample test code;
-   [niederreiter\_prb\_output.txt](niederreiter_prb_output.txt), output
    from a run of the test code;

### List of Routines: {#list-of-routines align="center"}

-   **CALCC** calculates the value of the constants C(I,J,R).
-   **CALCV** calculates the constants V(J,R).
-   **GOLO** generates a new quasi-random vector on each call.
-   **I4\_CHARACTERISTIC** gives the characteristic for an integer.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **INLO** calculates the values of C(I,J,R).
-   **NIEDERREITER** returns an element of a Niederreiter sequence for
    base BASE.
-   **NIEDERREITER\_GENERATE** generates a set of Niederreiter values.
-   **NIEDERREITER\_WRITE** writes a set of Niederreiter values to a
    file.
-   **PLYMUL** multiplies one polynomial by another.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **SETFLD** sets up the arithmetic tables for a finite field.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 24 September 2007.*
