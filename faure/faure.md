FAURE\
The Faure Quasirandom Sequence {#faure-the-faure-quasirandom-sequence align="center"}
==============================

------------------------------------------------------------------------

**FAURE** is a C++ library which computes elements of the Faure
quasirandom sequence.

A quasirandom or low discrepancy sequence, such as the Faure, Halton,
Hammersley, Niederreiter or Sobol sequences, is "less random" than a
pseudorandom number sequence, but more useful for such tasks as
approximation of integrals in higher dimensions, and in global
optimization. This is because low discrepancy sequences tend to sample
space "more uniformly" than random numbers. Algorithms that use such
sequences may have superior convergence. Faure sequences, in particular,
seem to have become popular in mathematical finance simulations.

FAURE is adapted from code in ACM TOMS Algorithm 647. The original,
true, correct version of ACM TOMS Algorithm 647 is available in the TOMS
subdirectory of [the NETLIB web site](http://www.netlib.org/).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FAURE** is available in [a C++
version](../../master/faure/faure.md) and [a FORTRAN90
version](../../f_src/faure/faure.md) and [a MATLAB
version](../../m_src/faure/faure.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../master/box_behnken/box_behnken.md), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CVT](../../master/cvt/cvt.md), a C++ library which computes elements
of a Centroidal Voronoi Tessellation.

[FAURE](../../dataset/faure/faure.md), a dataset directory which
contains files of sample Faure datasets.

[FAURE\_DATASET](../../master/faure_dataset/faure_dataset.md), a C++
program which can create a Faure quasirandom dataset.

[GRID](../../master/grid/grid.md), a C++ library which computes
elements of a grid sequence.

[HALTON](../../master/halton/halton.md), a C++ library which computes
elements of a Halton Quasi Monte Carlo (QMC) sequence, using a simple
interface.

[HAMMERSLEY](../../master/hammersley/hammersley.md), a C++ library
which computes elements of a Hammersley Quasi Monte Carlo (QMC)
sequence, using a simple interface.

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
library which computes elements of a Niederreiter quasirandom sequence
using base 2.

[NORMAL](../../master/normal/normal.md), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL](../../master/sobol/sobol.md), a C++ library which computes
Sobol sequences.

[TOMS647](../../f77_src/toms647/toms647.md), a FORTRAN77 library which
is a version of ACM TOMS algorithm 647, for evaluating Faure, Halton and
Sobol quasirandom sequences.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes elements of a 1D van der Corput sequence.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, July 1992, pages 195-213.
2.  Henri Faure,\
    Discrepance de suites associees a un systeme de numeration (en
    dimension s),\
    Acta Arithmetica,\
    Volume 41, 1982, pages 337-351.
3.  Henri Faure,\
    Good permutations for extreme discrepancy,\
    Journal of Number Theory,\
    Volume 42, 1992, pages 47-56.
4.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, December 1986, pages 362-376.

### Source Code: {#source-code align="center"}

-   [faure.cpp](faure.cpp), the source code;
-   [faure.hpp](faure.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [faure\_prb.cpp](faure_prb.cpp), the sample test code;
-   [faure\_prb\_output.txt](faure_prb_output.txt), output from a run of
    the test code;

### List of Routines: {#list-of-routines align="center"}

-   **BINOMIAL\_TABLE** computes a table of bionomial coefficients MOD
    QS.
-   **FAURE** generates a new quasirandom Faure vector with each call.
-   **FAURE\_GENERATE** generates a Faure dataset.
-   **I4\_LOG\_I4** returns the logarithm of an I4 to an I4 base.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **PRIME\_GE** returns the smallest prime greater than or equal to N.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 December 2009.*
