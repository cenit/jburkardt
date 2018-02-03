UNIFORM\
A Uniform Random Number Generator (RNG) {#uniform-a-uniform-random-number-generator-rng align="center"}
=======================================

------------------------------------------------------------------------

**UNIFORM** is a C++ library which returns a sequence of uniformly
distributed pseudorandom numbers.

The fundamental underlying random number generator is based on a simple,
old, and limited linear congruential random number generator originally
used in the IBM System 360. If you want state of the art random number
generation, look elsewhere!

The C++ math library already has random number functions, and it is not
the purpose of UNIFORM to replace or improve them.

Rather, this library makes it possible to compare certain computations
that use uniform random numbers, written in C, C++, FORTRAN77,
FORTRAN90, Mathematica, MATLAB, or Python.

Various types of random data can be computed. The routine names are
chosen to indicate the corresponding type:

-   **B**, an integer binary value of 0 or 1.
-   **C4**, complex &lt;float&gt;
-   **C8**, complex &lt;double&gt;
-   **CH**, char
-   **I4**, int
-   **L4**, bool
-   **R4**, float
-   **R8**, double

In some cases, a one dimension vector or two dimensional array of values
is to be generated, and part of the name will therefore include:

-   **VEC**, vector;
-   **MAT**, a matrix of data;

The underlying random numbers are generally defined over some unit
interval or region. Routines are available which return these "unit"
values, while other routines allow the user to specify limits between
which the unit values are rescaled. The name of a routine will usually
include a tag suggestig which is the case:

-   **01**, the data lies in a nit interval or region;
-   **AB**, the data lies in a scaled interval or region;

The random number generator embodied here is not very sophisticated. It
will not have the best properties of distribution, noncorrelation and
long period. It is not the purpose of this library to achieve such
worthy goals. This is simply a reasonably portable library that can be
implemented in various languages, on various machines, and for which it
is possible, for instance, to regard the output as a function of the
seed, and moreover, to work directly with the sequence of seeds, if
necessary.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**UNIFORM** is available in [a C
version](../../c_src/uniform/uniform.html) and [a C++
version](../../cpp_src/uniform/uniform.html) and [a FORTRAN77
version](../../f77_src/uniform/uniform.html) and [a FORTRAN90
version](../../f_src/uniform/uniform.html) and [a Mathematica
version](../../math_src/uniform/uniform.html) and [a MATLAB
version](../../m_src/uniform/uniform.html) and [a Python
version](../../py_src/uniform/uniform.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA183](../../cpp_src/asa183/asa183.html), a C++ library which
implements the Wichman-Hill random number generator (RNG).

[BOX\_BEHNKEN](../../cpp_src/box_behnken/box_behnken.html), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CPP\_RANDOM](../../cpp_src/cpp_random/cpp_random.html), C++ programs
which illustrate the use of the C++ random number generator routines.

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
elements of a Faure quasirandom sequence.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
elements of a Halton Quasi Monte Carlo (QMC) sequence, using a simple
interface.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley Quasi Monte Carlo (QMC)
sequence, using a simple interface.

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes elements of a Niederreiter sequence using base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[RANDLC](../../cpp_src/randlc/randlc.html), a C++ library which
generates a sequence of pseudorandom numbers, used by the NAS Benchmark
programs.

[RANDOM\_SORTED](../../cpp_src/random_sorted/random_sorted.html), a C++
library which generates vectors of random values which are already
sorted.

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

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
elements of a Sobol quasirandom sequence.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes elements of a 1D van der Corput sequence.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673,\
    LC: QA76.9.C65.B73.
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
    ISBN: 0201896842,\
    LC: QA76.6.K64.
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
    Volume 8, Number 2, 1969, pages 136-143.
6.  Stephen Park, Keith Miller,\
    Random Number Generators: Good Ones are Hard to Find,\
    Communications of the ACM,\
    Volume 31, Number 10, October 1988, pages 1192-1201.
7.  Eric Weisstein,\
    CRC Concise Encyclopedia of Mathematics,\
    CRC Press, 2002,\
    Second edition,\
    ISBN: 1584883472,\
    LC: QA5.W45.
8.  Barry Wilkinson, Michael Allen,\
    Parallel Programming: Techniques and Applications Using Networked
    Workstations and Parallel Computers,\
    Prentice Hall,\
    ISBN: 0-13-140563-2,\
    LC: QA76.642.W54.

### Source Code: {#source-code align="center"}

-   [uniform.cpp](uniform.cpp), the source code.
-   [uniform.hpp](uniform.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [uniform\_prb.cpp](uniform_prb.cpp), a sample calling program.
-   [uniform\_prb\_output.txt](uniform_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C4\_UNIFORM\_01** returns a unit pseudorandom C4.
-   **C4MAT\_UNIFORM\_01** returns a unit pseudorandom C4MAT.
-   **C4MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom C4MAT.
-   **C4VEC\_UNIFORM\_01** returns a unit pseudorandom C4VEC.
-   **C4VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom C4VEC.
-   **C8\_UNIFORM\_01** returns a unit pseudorandom C8.
-   **C8MAT\_UNIFORM\_01** returns a unit pseudorandom C8MAT.
-   **C8MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom C8MAT.
-   **C8VEC\_UNIFORM\_01** returns a unit pseudorandom C8VEC.
-   **C8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom C8VEC.
-   **CH\_UNIFORM** returns a scaled pseudorandom CH.
-   **CONGRUENCE** solves a congruence of the form ( A \* X = C ) mod B.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_GCD** finds the greatest common divisor of I and J.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_LOG\_10** returns the whole part of the logarithm base 10 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_SEED\_ADVANCE** "advances" the seed.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_SWAP** switches two I4's.
-   **I4\_TO\_S** converts an I4 to a string.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_UNIFORM\_0I** is a portable random integer generator.
-   **I4MAT\_UNIFORM** returns a scaled pseudorandom I4MAT.
-   **I4MAT\_UNIFORM\_NEW** returns a new scaled pseudorandom I4MAT.
-   **I4VEC\_MAX** returns the maximum element in an I4VEC.
-   **I4VEC\_MEAN** returns the mean of an I4VEC.
-   **I4VEC\_MIN** returns the minimum element in an I4VEC.
-   **I4VEC\_UNIFORM** returns a scaled pseudorandom I4VEC.
-   **I4VEC\_UNIFORM\_NEW** returns a scaled pseudorandom I4VEC.
-   **I4VEC\_VARIANCE** returns the variance of an I4VEC.
-   **I8\_HUGE** returns a "huge" I8.
-   **I8\_MAX** returns the maximum of two I8's.
-   **I8\_MIN** returns the smaller of two I8's.
-   **I8\_UNIFORM** returns a scaled pseudorandom I8.
-   **L\_UNIFORM** returns a pseudorandom L.
-   **LCRG\_ANBN** computes the "N-th power" of a linear congruential
    generator.
-   **LCRG\_EVALUATE** evaluates an LCRG, y = ( A \* x + B ) mod C.
-   **LCRG\_SEED** computes the N-th seed of a linear congruential
    generator.
-   **LMAT\_UNIFORM** returns a pseudorandom LMAT.
-   **LMAT\_UNIFORM\_NEW** returns a new pseudorandom LMAT.
-   **LVEC\_UNIFORM\_NEW** returns a pseudorandom LVEC.
-   **POWER\_MOD** computes ( A\^N ) mod M.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R4\_UNIFORM** returns a scaled pseudorandom R4.
-   **R4\_UNIFORM\_01** returns a unit pseudorandom R4.
-   **R4MAT\_UNIFORM** returns a scaled pseudorandom R4MAT.
-   **R4MAT\_UNIFORM\_NEW** returns a new scaled pseudorandom R4MAT.
-   **R4MAT\_UNIFORM\_01** returns a unit pseudorandom R4MAT.
-   **R4MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R4MAT.
-   **R4VEC\_UNIFORM** returns a scaled pseudorandom R4VEC.
-   **R4VEC\_UNIFORM\_NEW** returns a scaled pseudorandom R4VEC.
-   **R4VEC\_UNIFORM\_01** returns a unit unit pseudorandom R4VEC.
-   **R4VEC\_UNIFORM\_01\_NEW** returns a unit unit pseudorandom R4VEC.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_UNIFORM** returns a scaled pseudorandom R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8I8\_UNIFORM** returns a scaled pseudorandom R8 using an I8 seed.
-   **R8I8\_UNIFORM\_01** returns a unit pseudorandom R8 using an I8
    seed.
-   **R8MAT\_UNIFORM** returns a scaled pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_NEW** returns a new scaled pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8MAT.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_UNIFORM** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_NEW** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 March 2010.*
