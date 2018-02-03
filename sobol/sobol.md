SOBOL\
The Sobol Quasirandom Sequence {#sobol-the-sobol-quasirandom-sequence align="center"}
==============================

------------------------------------------------------------------------

**SOBOL** is a C++ library which computes elements of the Sobol
quasirandom sequence, by Bennett Fox.

A quasirandom or low discrepancy sequence, such as the Faure, Halton,
Hammersley, Niederreiter or Sobol sequences, is "less random" than a
pseudorandom number sequence, but more useful for such tasks as
approximation of integrals in higher dimensions, and in global
optimization. This is because low discrepancy sequences tend to sample
space "more uniformly" than random numbers. Algorithms that use such
sequences may have superior convergence.

SOBOL is an adapation of the INSOBL and GOSOBL routines in ACM TOMS
Algorithm 647 and ACM TOMS Algorithm 659. The original code can only
compute the "next" element of the sequence. The revised code allows the
user to specify the index of any desired element.

A remark by Joe and Kuo shows how to extend the algorithm from the
original maximum spatial dimension of 40 up to a maximum spatial
dimension of 1111. The FORTRAN90 and C++ versions of this program have
been updated in this way. In particular, the extra data in the C++
version of the program was kindly formatted and supplied by Steffan
Berridge.

The routines with a prefix of **I8\_** use 64 bit integers, and use the
*long int* to get this. On some systems, a *long int* is simply 32 bits.
In that case, try using the *long long int* datatype instead.

The original, true, correct versions of ACM TOMS Algorithm 647 and ACM
TOMS Algorithm 659 are available in the TOMS subdirectory of [the NETLIB
web site](http://www.netlib.org/). The version displayed here has been
converted to FORTRAN90, and other internal changes have been made to
suit me.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SOBOL** is available in [a C++
version](../../cpp_src/sobol/sobol.html) and [a FORTRAN90
version](../../f_src/sobol/sobol.html) and [a MATLAB
version](../../m_src/sobol/sobol.html) and [a Python
version](../../py_src/sobol/sobol.html)

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

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes Niederreiter sequences with base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL\_DATASET](../../cpp_src/sobol_dataset/sobol_dataset.html), a C++
program which computes a Sobol quasirandom sequence and writes it to a
file.

[TOMS647](../../f_src/toms647/toms647.html) a FORTRAN90 library which
evaluates Faure, Halton and Sobol sequences.

[TOMS659](../../f77_src/toms659/toms659.html) a FORTRAN77 library which
evaluates Sobol sequences.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes uniform random values.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes a van der Corput sequences.

### Author: {#author align="center"}

Original FORTRAN77 version by Bennett Fox; C++ version by John Burkardt.

### Reference: {#reference align="center"}

1.  IA Antonov, VM Saleev,\
    An Economic Method of Computing LP Tau-Sequences,\
    USSR Computational Mathematics and Mathematical Physics,\
    Volume 19, 1980, pages 252-256.
2.  Paul Bratley, Bennett Fox,\
    Algorithm 659: Implementing Sobol's Quasirandom Sequence Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 14, Number 1, March 1988, pages 88-100.
3.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, July 1992, pages 195-213.
4.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673,\
    LC: QA76.9.C65.B73.
5.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, December 1986, pages 362-376.
6.  Stephen Joe, Frances Kuo,\
    Remark on Algorithm 659: Implementing Sobol's Quasirandom Sequence
    Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 29, Number 1, March 2003, pages 49-57.
7.  Harald Niederreiter,\
    Random Number Generation and quasi-Monte Carlo Methods,\
    SIAM, 1992,\
    ISBN13: 978-0-898712-95-7,\
    LC: QA298.N54.
8.  William Press, Brian Flannery, Saul Teukolsky, William Vetterling,\
    Numerical Recipes in FORTRAN: The Art of Scientific Computing,\
    Second Edition,\
    Cambridge University Press, 1992,\
    ISBN: 0-521-43064-X,\
    LC: QA297.N866.
9.  Ilya Sobol,\
    Uniformly Distributed Sequences with an Additional Uniform
    Property,\
    USSR Computational Mathematics and Mathematical Physics,\
    Volume 16, 1977, pages 236-242.
10. Ilya Sobol, YL Levitan,\
    The Production of Points Uniformly Distributed in a Multidimensional
    Cube (in Russian),\
    Preprint IPM Akademii Nauk SSSR,\
    Number 40, Moscow 1976.

### Source Code: {#source-code align="center"}

-   [sobol.cpp](sobol.cpp), the source code;
-   [sobol.hpp](sobol.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [sobol\_prb.cpp](sobol_prb.cpp), the sample test code;
-   [sobol\_prb\_output.txt](sobol_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_BIT\_HI1** returns the position of the high 1 bit base 2 in an
    integer.
-   **I4\_BIT\_LO0** returns the position of the low 0 bit base 2 in an
    integer.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_SOBOL** generates a new quasirandom Sobol vector with each
    call.
-   **I4\_SOBOL\_GENERATE** generates a Sobol dataset.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I8\_BIT\_HI1** returns the position of the high 1 bit base 2 in an
    integer.
-   **I8\_BIT\_LO0** returns the position of the low 0 bit base 2 in an
    integer.
-   **I8\_SOBOL** generates a new quasirandom Sobol vector with each
    call.
-   **I8\_SOBOL\_GENERATE** generates a Sobol dataset.
-   **I8\_MAX** returns the maximum of two I8's.
-   **I8\_MIN** returns the smaller of two I8's.
-   **I8\_UNIFORM** returns a scaled pseudorandom I8.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R4\_UNIFORM\_01** returns a unit pseudorandom R4.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TAU\_SOBOL** defines favorable starting seeds for Sobol sequences.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 December 2009.*
