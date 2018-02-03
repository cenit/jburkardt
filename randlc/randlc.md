RANDLC\
NAS Parallel Benchmark Pseudorandom Number Generator {#randlc-nas-parallel-benchmark-pseudorandom-number-generator align="center"}
====================================================

------------------------------------------------------------------------

**RANDLC** is a C++ library which implements a version of the
pseudorandom number generator used by the NAS Parallel Benchmarks.

The generator has the form

            X(K+1) = A * X(K) mod 2^46
          

where the suggested value of the multiplier A is 5\^13 = 1220703125.

This scheme generates 2\^44 numbers before repeating.

The web site for the NAS Parallel Benchmarks is
<http://www.nas.nasa.gov/Resources/Software/npb.html>.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RANDLC** is available in [a C version](../../c_src/randlc/randlc.html)
and [a C++ version](../../cpp_src/randlc/randlc.html) and [a FORTRAN77
version](../../f77_src/randlc/randlc.html) and [a FORTRAN90
version](../../f_src/randlc/randlc.html) and [a MATLAB
version](../../m_src/randlc/randlc.html) and [a Python
version](../../py_src/randlc/randlc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA183](../../cpp_src/asa183/asa183.html), a C++ library which
implements the Wichman-Hill pseudorandom number generator.

[CPP\_RANDOM](../../cpp_src/cpp_random/cpp_random.html), C++ programs
which illustrate the use of the C++ random number generator routines.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
a sequence of pseudorandom normally distributed values.

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
computes elements of a pseudorandom sequence.

### Reference: {#reference align="center"}

1.  David Bailey, Eric Barszcz, John Barton, D Browning, Robert Carter,
    Leonardo Dagum, Rod Fatoohi, Samuel Fineberg, Paul Frederickson,
    Thomas Lasinski, Robert Schreiber, Horst Simon, V Venkatakrishnan,
    Sisira Weeratunga,\
    The NAS Parallel Benchmarks,\
    RNR Technical Report RNR-94-007, March 1994.
2.  Donald Knuth,\
    The Art of Computer Programming, Volume 2, Seminumerical
    Algorithms,\
    Third Edition,\
    Addison Wesley, 1997,\
    ISBN: 0201896842,\
    LC: QA76.6.K64.

### Source Code: {#source-code align="center"}

-   [randlc.cpp](randlc.cpp), the source code.
-   [randlc.hpp](randlc.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [randlc\_prb.cpp](randlc_prb.cpp), a sample calling program.
-   [randlc\_prb\_output.txt](randlc_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **RANDLC** returns a uniform pseudorandom value.
-   **RANDLC\_JUMP** returns the K-th element of a uniform pseudorandom
    sequence.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 March 2010.*
