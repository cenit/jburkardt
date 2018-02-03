ZIGGURAT\
Ziggurat Random Number Generator (RNG) {#ziggurat-ziggurat-random-number-generator-rng align="center"}
======================================

------------------------------------------------------------------------

**ZIGGURAT** is a C++ library which generates random variates from the
uniform, normal or exponential distributions, by Marsaglia and Tsang.

The uniform numbers are generated directly. The ziggurat method is used
to compute the normal and exponential values.

In the inline version, the underlying generators are implemented
"inline", invoking a function call only in exceptional cases. This
results in very fast execution.

In this implementation, the advantages of inline code are not used. All
the routines and inline functions are isolated in a separate file, so
that a user invokes them through the familiar library interface.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ZIGGURAT** is available in [a C
version](../../c_src/ziggurat/ziggurat.md) and [a C++
version](../../master/ziggurat/ziggurat.md) and [a FORTRAN77
version](../../f77_src/ziggurat/ziggurat.md) and [a FORTRAN90
version](../../f_src/ziggurat/ziggurat.md) and [a MATLAB
version](../../m_src/ziggurat/ziggurat.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FAURE](../../master/faure/faure.md), a C++ library which computes
elements of a Faure quasirandom sequence.

[HALTON](../../master/halton/halton.md), a C++ library which computes
elements of a Halton quasirandom sequence.

[HAMMERSLEY](../../master/hammersley/hammersley.md), a C++ library
which computes elements of a Hammersley quasirandom sequence.

[IHS](../../master/ihs/ihs.md), a C++ library which computes elements
of an improved distributed Latin hypercube dataset.

[NIEDERREITER2](../../master/niederreiter2/niederreiter2.md), a C++
library which computes elements of a Niederreiter quasirandom sequence
with base 2.

[NORMAL](../../master/normal/normal.md), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[RBOX](../../c_src/rbox/rbox.md), a C program which generates a set of
points in a region, selected at random according to a given
distribution.

[RNGLIB](../../master/rnglib/rnglib.md), a C++ library which
implements a random number generator (RNG) with splitting facilities,
allowing multiple independent streams to be computed, by L'Ecuyer and
Cote.

[SOBOL](../../master/sobol/sobol.md), a C++ library which computes
elements of a Sobol quasirandom sequence.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes elements of uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes elements of a van der Corput quasirandom
sequence.

[ZIGGURAT\_INLINE](../../master/ziggurat_inline/ziggurat_inline.md),
a C++ library which implements uniform, normal and exponential random
number generators (RNG's) using the ziggurat method, by Marsaglia and
Tsang. In this version, the underlying generators are implemented
inline, for increased speed.

[ZIGGURAT\_OPENMP](../../master/ziggurat_openmp/ziggurat_openmp.md),
a C++ program which demonstrates how the ZIGGURAT library can be used to
generate random numbers in an OpenMP parallel program.

### Author: {#author align="center"}

George Marsaglia, Wai Wan Tsang.

### Reference: {#reference align="center"}

1.  Philip Leong, Guanglie Zhang, Dong-U Lee, Wayne Luk, John
    Villasenor,\
    A comment on the implementation of the ziggurat method,\
    Journal of Statistical Software,\
    Volume 12, Number 7, February 2005.
2.  George Marsaglia, Wai Wan Tsang,\
    The Ziggurat Method for Generating Random Variables,\
    Journal of Statistical Software,\
    Volume 5, Number 8, October 2000, seven pages.

### Source Code: {#source-code align="center"}

-   [ziggurat.cpp](ziggurat.cpp), the source code.
-   [ziggurat.hpp](ziggurat.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ziggurat\_prb.cpp](ziggurat_prb.cpp) a sample calling program.
-   [ziggurat\_prb\_output.txt](ziggurat_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CONG\_SEEDED** evaluates the CONG congruential random number
    generator.
-   **CPU\_TIME** returns the current reading on the CPU clock.
-   **KISS\_SEEDED** evaluates the KISS random number generator.
-   **MWC\_SEEDED** evaluates the MWC multiply-with-carry random number
    generator.
-   **R4\_EXP** returns an exponentially distributed single precision
    real value.
-   **R4\_EXP\_SETUP** sets data needed by R4\_EXP.
-   **R4\_NOR** returns a normally distributed single precision real
    value.
-   **R4\_NOR\_SETUP** sets data needed by R4\_NOR.
-   **R4\_UNI** returns a uniformly distributed real value.
-   **SHR3\_SEEDED** evaluates the SHR3 generator for integers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 18 October 2013.*
