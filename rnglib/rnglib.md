RNGLIB\
A Package of Random Number Generators (RNG's) with Splitting Facilities {#rnglib-a-package-of-random-number-generators-rngs-with-splitting-facilities align="center"}
=======================================================================

------------------------------------------------------------------------

**RNGLIB** is a C++ library which implements random number generators
(RNG's) which can generate one or more streams of random numbers.

RNGLIB is a portable set of software tools for uniform random variate
generation. It provides for multiple generators running simultaneously,
and each generator has its sequence of numbers partitioned into many
long disjoint substreams. Simple procedure calls allow the user to make
any generator jump ahead to the beginning of its next substream.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RNGLIB** is available in [a C version](../../c_src/rnglib/rnglib.html)
and [a C++ version](../../cpp_src/rnglib/rnglib.html) and [a FORTRAN77
version](../../f77_src/rnglib/rnglib.html) and [a FORTRAN90
version](../../f_src/rnglib/rnglib.html) and [a MATLAB
version](../../m_src/rnglib/rnglib.html) and [a PYTHON
version](../../py_src/rnglib/rnglib.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA183](../../cpp_src/asa183/asa183.html), a C++ library which
implements the Wichman-Hill random number generator (RNG).

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
elements of a Faure quasirandom sequence.

[CPP\_RANDOM](../../cpp_src/cpp_random/cpp_random.html), C++ programs
which illustrate the use of C++'s random number generator (RNG)
functions.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
elements of a Halton quasirandom sequence.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley quasirandom sequence.

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes elements of a Niederreiter quasirandom sequence
with base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which
implements random number generators (RNG's) for normally distributed
values.

[RANDLC](../../cpp_src/randlc/randlc.html), a C++ library which
implements a random number generator (RNG) used by the NAS Benchmark
programs.

[RANDOM\_MPI](../../cpp_src/random_mpi/random_mpi.html), a C++ program
which demonstrates one way to generate the same sequence of random
numbers for both sequential execution and parallel execution under MPI.

[RANDOM\_SORTED](../../cpp_src/random_sorted/random_sorted.html), a C++
library which generates vectors of random values which are already
sorted.

[RANLIB](../../cpp_src/ranlib/ranlib.html), a C++ library which produces
random samples from Probability Density Functions (PDF's), including
Beta, Chi-square Exponential, F, Gamma, Multivariate normal, Noncentral
chi-square, Noncentral F, Univariate normal, random permutations, Real
uniform, Binomial, Negative Binomial, Multinomial, Poisson and Integer
uniform, by Barry Brown and James Lovato.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
elements of a Sobol quasirandom sequence.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
implements random number generators (RNG's) for a variety of arithmetic
types.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes elements of a van der Corput quasirandom
sequence.

[WALKER\_SAMPLE](../../cpp_src/walker_sample/walker_sample.html), a C++
library which efficiently samples a discrete probability vector using
Walker sampling.

[ZIGGURAT](../../cpp_src/ziggurat/ziggurat.html), a C++ program which
generates points from a uniform, normal or exponential distribution,
using the ziggurat method.

### Reference: {#reference align="center"}

1.  Pierre LEcuyer, Serge Cote,\
    Implementing a Random Number Package with Splitting Facilities,\
    ACM Transactions on Mathematical Software,\
    Volume 17, Number 1, March 1991, pages 98-111.

### Source Code: {#source-code align="center"}

-   [rnglib.cpp](rnglib.cpp), the source code.
-   [rnglib.hpp](rnglib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [rnglib\_prb.cpp](rnglib_prb.cpp), a sample calling program.
-   [rnglib\_prb\_output.txt](rnglib_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ADVANCE\_STATE** advances the state of the current generator.
-   **ANTITHETIC\_GET** queries the antithetic value for a given
    generator.
-   **ANTITHETIC\_MEMORY** stores the antithetic value for all
    generators.
-   **ANTITHETIC\_SET** sets the antithetic value for a given generator.
-   **CG\_GET** queries the CG values for a given generator.
-   **CG\_MEMORY** stores the CG values for all generators.
-   **CG\_SET** sets the CG values for a given generator.
-   **CGN\_GET** gets the current generator index.
-   **CGN\_MEMORY** stores the current generator index.
-   **CGN\_SET** sets the current generator index.
-   **GET\_STATE** returns the state of the current generator.
-   **I4\_UNI** generates a random positive integer.
-   **IG\_GET** queries the IG values for a given generator.
-   **IG\_MEMORY** stores the IG values for all generators.
-   **IG\_SET** sets the IG values for a given generator.
-   **INIT\_GENERATOR** sets the state of generator G to initial, last
    or new seed.
-   **INITIALIZE** initializes the random number generator library.
-   **INITIALIZED\_GET** queries the INITIALIZED value.
-   **INITIALIZED\_MEMORY** stores the INITIALIZED value for the
    package.
-   **INITIALIZED\_SET** sets the INITIALIZED value true.
-   **LG\_GET** queries the LG values for a given generator.
-   **LG\_MEMORY** stores the LG values for all generators.
-   **LG\_SET** sets the LG values for a given generator.
-   **MULTMOD** carries out modular multiplication.
-   **R4\_UNI\_01** returns a uniform random real number in \[0,1\].
-   **R8\_UNI\_01** returns a uniform random double in \[0,1\].
-   **SET\_INITIAL\_SEED** resets the initial seed and state for all
    generators.
-   **SET\_SEED** resets the initial seed and the state of generator G.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 August 2013.*
