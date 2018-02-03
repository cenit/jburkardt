RANDOM\_SORTED\
Generate Sorted Random Vectors {#random_sorted-generate-sorted-random-vectors align="center"}
==============================

------------------------------------------------------------------------

**RANDOM\_SORTED** is a C++ library which generates vectors of random
values which are already sorted.

Since the computation of the spacing between the values requires some
additional arithmetic, it is not immediately obvious when this procedure
will be faster than simply generating a vector of random values and then
sorting it.

Because the library can generate a sorted random vector of values
between 0 and 1, it is possible to generate sorted data samples from any
distribution for which the inverse Cumulative Density Function (CDF) is
known. For instance, to generate sorted normal data, simply generate
sorted uniform data, and then apply the inverse of the normal CDF, as in
the example code listed below.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RANDOM\_SORTED** is available in [a C
version](../../c_src/random_sorted/random_sorted.html) and [a C++
version](../../cpp_src/random_sorted/random_sorted.html) and [a
FORTRAN90 version](../../f_src/random_sorted/random_sorted.html) and [a
MATLAB version](../../m_src/random_sorted/random_sorted.html) and [a
Python version](../../py_src/random_sorted/random_sorted.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA183](../../cpp_src/asa183/asa183.html), a C++ library which
implements the Wichman-Hill random number generator (RNG).

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
a sequence of pseudorandom normally distributed values.

[RANDLC](../../cpp_src/randlc/randlc.html), a C++ library which
generates a sequence of pseudorandom numbers, used by the NAS Benchmark
programs.

[RANLIB](../../cpp_src/ranlib/ranlib.html), a C++ library which produces
random samples from Probability Density Functions (PDF's), including
Beta, Chi-square Exponential, F, Gamma, Multivariate normal, Noncentral
chi-square, Noncentral F, Univariate normal, random permutations, Real
uniform, Binomial, Negative Binomial, Multinomial, Poisson and Integer
uniform, by Barry Brown and James Lovato.

[RNGLIB](../../cpp_src/rnglib/rnglib.html), a C++ library which
implements a random number generator (RNG) with splitting facilities,
allowing multiple independent streams to be computed, by L'Ecuyer and
Cote.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes a sequence of uniformly distributed pseudorandom values.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes elements of a 1D van der Corput Quasi Monte
Carlo (QMC) sequence using a simple interface.

### Reference: {#reference align="center"}

1.  Jon Bentley, James Saxe,\
    Generating sorted lists of random numbers,\
    ACM Transactions on Mathematical Software,\
    Volume 6, Number 3, September 1980, pages 359-364.

### Source Code: {#source-code align="center"}

-   [random\_sorted.cpp](random_sorted.cpp), the source code.
-   [random\_sorted.hpp](random_sorted.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [random\_sorted\_prb.cpp](random_sorted_prb.cpp), a sample calling
    program.
-   [random\_sorted\_prb\_output.txt](random_sorted_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **NORMAL\_01\_CDF\_INV** inverts the standard normal CDF.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8POLY\_VALUE\_HORNER** evaluates a polynomial using Horner's
    method.
-   **R8VEC\_NORMAL\_01\_SORTED** returns a sorted normal 01 random
    vector.
-   **R8VEC\_TRANSPOSE\_PRINT** prints an R8VEC "transposed".
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01\_SORTED1** returns a sorted real random vector
    in \[0,1\].
-   **R8VEC\_UNIFORM\_01\_SORTED2** returns a sorted real random vector
    in \[0,1\].
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 29 March 2016.*
