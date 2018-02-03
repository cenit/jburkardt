NORMAL\
Normal Random Number Generators {#normal-normal-random-number-generators align="center"}
===============================

------------------------------------------------------------------------

**NORMAL** is a C++ library which returns a sequence of normally
distributed pseudorandom numbers.

NORMAL is based on two simple ideas:

-   the use of a fairly simple uniform pseudorandom number generator,
    which can be implemented in software;
-   the use of the Box-Muller transformation to convert pairs of
    uniformly distributed random values to pairs of normally distributed
    random values.

Using these ideas, it is not too hard to generate normal sequences of
real or complex values, of single or double precision. These values can
be generated as single quantities, vectors or matrices. An associated
seed actually determines the sequence. Varying the seed will result in
producing a different sequence.

The fundamental underlying random number generator used here is based on
a simple, old, and limited linear congruential random number generator
originally used in the IBM System 360.

This library makes it possible to compare certain computations that use
normal random numbers, written in C, C++, FORTRAN77, FORTRAN90, MATLAB
or Python.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NORMAL** is available in [a C version](../../c_src/normal/normal.md)
and [a C++ version](../../master/normal/normal.md) and [a FORTRAN77
version](../../f77_src/normal/normal.md) and [a FORTRAN90
version](../../f_src/normal/normal.md) and [a MATLAB
version](../../m_src/normal/normal.md) and [a Python
version](../../py_src/normal/normal.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA183](../../master/asa183/asa183.md), a C++ library which
implements the Wichman-Hill pseudorandom number generator.

[CPP\_RANDOM](../../master/cpp_random/cpp_random.md), C++ programs
which illustrate the use of the C++ random number generator routines.

[HALTON](../../master/halton/halton.md), a C++ library which computes
elements of a Halton Quasi Monte Carlo (QMC) sequence, using a simple
interface.

[HAMMERSLEY](../../master/hammersley/hammersley.md), a C++ library
which computes elements of a Hammersley Quasi Monte Carlo (QMC)
sequence, using a simple interface.

[RANDOM\_SORTED](../../master/random_sorted/random_sorted.md), a C++
library which generates vectors of random values which are already
sorted.

[RANLIB](../../master/ranlib/ranlib.md), a C++ library which produces
random samples from Probability Density Functions (PDF's), including
Beta, Chi-square Exponential, F, Gamma, Multivariate normal, Noncentral
chi-square, Noncentral F, Univariate normal, random permutations, Real
uniform, Binomial, Negative Binomial, Multinomial, Poisson and Integer
uniform, by Barry Brown and James Lovato.

[RNGLIB](../../master/rnglib/rnglib.md), a C++ library which
implements a random number generator (RNG) with splitting facilities,
allowing multiple independent streams to be computed, by L'Ecuyer and
Cote.

[TRUNCATED\_NORMAL](../../master/truncated_normal/truncated_normal.md),
a C++ library which works with the truncated normal distribution over
\[A,B\], or \[A,+oo) or (-oo,B\], returning the probability density
function (PDF), the cumulative density function (CDF), the inverse CDF,
the mean, the variance, and sample values.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes elements of a sequence of pseudorandom uniformly distributed
values.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes van der Corput sequences.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673.
2.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, December 1986, pages 362-376.
3.  Donald Knuth,\
    The Art of Computer Programming,\
    Volume 2, Seminumerical Algorithms,\
    Third Edition,\
    Addison Wesley, 1997,\
    ISBN: 0201896842.
4.  Pierre LEcuyer,\
    Random Number Generation,\
    in Handbook of Simulation,\
    edited by Jerry Banks,\
    Wiley, 1998,\
    ISBN: 0471134031,\
    LC: T57.62.H37.
5.  Peter Lewis, Allen Goodman, James Miller,\
    A Pseudo-Random Number Generator for the System/360,\
    IBM Systems Journal,\
    Volume 8, 1969, pages 136-143.

### Source Code: {#source-code align="center"}

-   [normal.cpp](normal.cpp), the source code.
-   [normal.hpp](normal.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [normal\_prb.cpp](normal_prb.cpp), a sample calling program.
-   [normal\_prb\_output.txt](normal_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C4\_NORMAL\_01** returns a unit pseudonormal C4.
-   **C8\_NORMAL\_01** returns a unit pseudonormal C8.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_NORMAL\_AB** returns a scaled pseudonormal I4.
-   **I8\_NORMAL\_AB** returns a scaled pseudonormal I8.
-   **R4\_NINT** returns the nearest I4 to an R4.
-   **R4\_NORMAL\_01** returns a unit pseudonormal R4.
-   **R4\_NORMAL\_AB** returns a scaled pseudonormal R4.
-   **R4\_UNIFORM\_01** returns a unit pseudorandom R4.
-   **R8\_NORMAL\_01** returns a unit pseudonormal R8.
-   **R8\_NORMAL\_AB** returns a scaled pseudonormal R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_NORMAL\_01** returns a unit pseudonormal R8MAT.
-   **R8MAT\_NORMAL\_01\_NEW** returns a unit pseudonormal R8MAT.
-   **R8MAT\_NORMAL\_AB** returns a scaled pseudonormal R8MAT.
-   **R8MAT\_NORMAL\_AB\_NEW** returns a scaled pseudonormal R8MAT.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_NORMAL\_AB** returns a scaled pseudonormal R8VEC.
-   **R8VEC\_NORMAL\_AB\_NEW** returns a scaled pseudonormal R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 August 2013.*
