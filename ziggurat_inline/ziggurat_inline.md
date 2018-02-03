ZIGGURAT\_INLINE\
Ziggurat Method for Exponential or Normal Random Numbers {#ziggurat_inline-ziggurat-method-for-exponential-or-normal-random-numbers align="center"}
========================================================

------------------------------------------------------------------------

**ZIGGURAT\_INLINE** is a C++ library which rapidly generates random
variates from the uniform, normal or exponential distributions.

The uniform numbers are generated directly. The ziggurat method is used
to compute the normal and exponential values.

In this version, the underlying generators are implemented "inline",
invoking a function call only in exceptional cases. This results in very
fast execution.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ZIGGURAT\_INLINE** is available in [a C
version](../../c_src/ziggurat_inline/ziggurat_inline.html) and [a C++
version](../../cpp_src/ziggurat_inline/ziggurat_inline.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
elements of a Faure quasirandom sequence.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
elements of a Halton quasirandom sequence.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley quasirandom sequence.

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes elements of a Niederreiter quasirandom sequence
with base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
elements of a Sobol quasirandom sequence.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes elements of uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes elements of a van der Corput quasirandom
sequence.

[ZIGGURAT](../../cpp_src/ziggurat/ziggurat.html), a C++ program which
generates points from a uniform, normal or exponential distribution,
using the ziggurat method.

[ZIGGURAT\_OPENMP](../../cpp_src/ziggurat_openmp/ziggurat_openmp.html),
a C++ program which demonstrates how the ZIGGURAT library can be used to
generate random numbers in an OpenMP parallel program.

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

-   [ziggurat\_inline.cpp](ziggurat_inline.cpp), the source code.
-   [ziggurat\_inline.hpp](ziggurat_inline.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ziggurat\_inline\_prb.cpp](ziggurat_inline_prb.cpp) a sample
    calling program.
-   [ziggurat\_inline\_prb\_output.txt](ziggurat_inline_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CONG\_SEEDED** evaluates the CONG generator for uint32\_t's.
-   **CONG\_VALUE** evaluates the CONG generator for uint32\_t's.
-   **CPU\_TIME** returns the current reading on the CPU clock.
-   **EFIX** generates variates when rejection occurs in the exponential
    code.
-   **KISS\_SEEDED** evaluates the KISS random number generator.
-   **KISS\_VALUE** evaluates the KISS generator for uint32\_t's.
-   **MWC\_SEEDED** evaluates the MWC multiply-with-carry random number
    generator.
-   **MWC\_VALUE** evaluates the MWC generator for uint32\_t's.
-   **NFIX** generates variates when rejection occurs in the normal
    code.
-   **R4\_EXP\_SETUP** sets data needed by R4\_EXP.
-   **R4\_EXP\_VALUE** returns an exponentially distributed float.
-   **R4\_NOR\_SETUP** sets data needed by R4\_NOR.
-   **R4\_NOR\_VALUE** returns a normally distributed float.
-   **R4\_UNI\_VALUE** returns a uniformly distributed float.
-   **SHR3\_SEEDED** evaluates the SHR3 generator for unsigned 32 bit
    integers.
-   **SHR3\_VALUE** evaluates the SHR3 generator for unsigned 32 bit
    integers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **ZIGGET** gets the seeds.
-   **ZIGSET** sets the seeds and creates the tables for the Ziggurat
    method.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 18 October 2013.*
