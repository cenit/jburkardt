RAND48\
48-bit Random Number Generators {#rand48-48-bit-random-number-generators align="center"}
===============================

------------------------------------------------------------------------

**RAND48** is a C++ library which demonstrates the use of the rand48
function in the C **stdlib** library. The rand48 function uses 48-bit
arithmetic to generate uniformly distributed pseudorandom values. The
results can be returned as double precision values in \[0.0,1.0\], or as
long integers in \[-2\^31,2\^31\], or as nonnegative long integers in
\[0,2\^31\].

The underlying calculations are done in 48-bit integer arithmetic. The
user has the option of allowing the system to select the initial seed,
or of supplying 32 bits of the seed as a long int, or supplying all 48
bits of the seed as 3 16 bit values. The user can also supply the seed
as an explicit argument on each call, or make a single initialization
call with the desired seed.

Routines to set the seed:

-   **void srand48(long int seedval)**,\
    the user passes in a long int. The 32 bits of this value are used,
    along with 16 bits supplied internally. This is the most convenient
    routine to call.
-   **unsigned short int \*seed48(unsigned short int seedvec\[3\])**,\
    the user passes in 3 16 bit values which completely determine the
    seed. This gives the user full control over the seed.
-   **void lcong48(unsigned short int param\[7\])**,\
    allows the user to specify the seed as in **seed48**, but also the
    48 bit multiplier and 16 bit addend used in the linear congruential
    generator.

There are 3 routines available which return a random value, assuming
that the seed has been set in advance by a call to **srand48**,
**seed48**, or **lcong48**, or that the user is satisfied with a default
seed value. These routines have no input argument.

-   **double drand48(void)**\
    returns a double precision floating point value in \[0.0,1.0\];
-   **long int lrand48(void)**,\
    returns a nonnegative long integer in \[0,2\^31\];
-   **long int mrand48(void)**,\
    returns a long integer in \[-2\^31,2\^31\];

There are 3 routines available which return a random value, whose
computation is determined by the value of the seed vector in the input
argument. These routines do not require the user to call a seed
initialization routine first.

-   **double erand48(unsigned short int seedvec\[3\])**\
    returns a double precision floating point value in \[0.0,1.0\];
-   **long int nrand48(unsigned short int seedvec\[3\])**,\
    returns a nonnegative long integer in \[0,2\^31\];
-   **long int jrand48(unsigned short int seedvec\[3\])**,\
    returns a long integer in \[-2\^31,2\^31\];

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RAND48** is available in [a C version](../../c_src/rand48/rand48.html)
and [a C++ version](../../cpp_src/rand48/rand48.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA183](../../cpp_src/asa183/asa183.html), a C++ library which
implements the Wichman-Hill pseudorandom number generator.

[CPP\_RANDOM](../../cpp_src/cpp_random/cpp_random.html), C++ programs
which illustrate the use of the C++ random number generator routines.

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
elements of a Faure quasirandom sequence.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
elements of a Halton quasirandom sequence.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley quasirandom sequence.

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes elements of a Niederreiter sequence using base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[RANLIB](../../cpp_src/ranlib/ranlib.html), a C++ library which produces
random samples from Probability Density Functions (PDF's), including
Beta, Chi-square Exponential, F, Gamma, Multivariate normal, Noncentral
chi-square, Noncentral F, Univariate normal, random permutations, Real
uniform, Binomial, Negative Binomial, Multinomial, Poisson and Integer
uniform, by Barry Brown and James Lovato.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
elements of a Sobol quasirandom sequence.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes elements of a sequence of pseudorandom uniformly distributed
values.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes elements of a 1D van der Corput sequence.

### Reference: {#reference align="center"}

1.  Donald Knuth,\
    The Art of Computer Programming,\
    Volume 2, Seminumerical Algorithms,\
    Third Edition,\
    Addison Wesley, 1997,\
    ISBN: 0201896842,\
    LC: QA76.6.K64.

### Examples and Tests: {#examples-and-tests align="center"}

-   [rand48\_prb.cpp](rand48_prb.cpp), a sample calling program.
-   [rand48\_prb\_output.txt](rand48_prb_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 18 August 2008.*
