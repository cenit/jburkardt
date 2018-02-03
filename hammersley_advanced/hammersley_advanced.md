HAMMERSLEY\_ADVANCED\
The Hammersley Quasi Monte Carlo (QMC) Sequence {#hammersley_advanced-the-hammersley-quasi-monte-carlo-qmc-sequence align="center"}
===============================================

------------------------------------------------------------------------

**HAMMERSLEY\_ADVANCED** is a C++ library which computes the Hammersley
Quasi Monte Carlo (QMC) sequence.

HAMMERSLEY\_ADVANCED includes several subroutines to make it easy to
manipulate this computation, to compute the next N entries, to compute a
particular entry, to restart the sequence at a particular point, or to
compute NDIM-dimensional versions of the sequence.

For the most straightforward use, try either

-   **I4\_TO\_HAMMERSLEY\_ADVANCED**, for one element of a sequence;
-   **I4\_TO\_HAMMERSLEY\_ADVANCED\_SEQUENCE**, for N elements of a
    sequence;

Both of these routines require explicit input values for all parameters.

For more convenience, there are two related routines with almost no
input arguments:

-   **HAMMERSLEY\_ADVANCED**, for one element of a sequence;
-   **HAMMERSLEY\_ADVANCED\_SEQUENCE**, for N elements of a sequence;

These routines allow the user to either rely on the default values of
parameters, or to change a few of them by calling appropriate routines.

Routines in this library select elements of a "leaped" subsequence of
the Hammersley sequence. The subsequence elements are indexed by a
quantity called STEP, which starts at 0. The STEP-th subsequence element
is simply the Hammersley sequence element with index

            SEED(1:NDIM) + STEP * LEAP(1:NDIM).
          

The arguments that the user may set include:

-   NDIM, the spatial dimension,\
    default: NDIM = 1,\
    required: 1 &lt;= NDIM;
-   STEP, the subsequence index.\
    default: STEP = 0,\
    required: 0 &lt;= STEP.
-   SEED(1:NDIM), the Hammersley sequence index corresponding to STEP =
    0.\
    default: SEED(1:NDIM) = (0, 0, ... 0),\
    required: 0 &lt;= SEED(1:NDIM);
-   LEAP(1:NDIM), the succesive jumps in the Hammersley sequence.\
    default: LEAP(1:NDIM) = (1, 1, ..., 1).\
    required: 1 &lt;= LEAP(1:NDIM).
-   BASE(1:NDIM), the Hammersley bases.\
    default: BASE(1:NDIM) = (2, 3, 5, 7, 11... ), or\
    (-N, 2, 3, 5, 7, 11,...) if **N** is known,\
    required: 1 &lt; BASE(I) for any van der Corput dimension I, or
    BASE(I) &lt; 0 to generate the fractional sequence J/|BASE(I)|.

In the standard NDIM-dimensional Hammersley sequence, it is assumed that
N, the number of values to be generated, is known beforehand. The first
dimension of entries in the sequence will have the form J/N for J from 1
to N. The remaining dimensions are computed using the 1-dimensional van
der Corput sequence, using successive primes as bases.

In a generalized Hammersley sequence, each coordinate is allowed to be a
fractional or van der Corput sequence. For any fractional sequence, the
denominator is arbitrary. However, it is extremely desirable that the
values in all coordinates stay between 0 and 1. This happens
automatically for any van der Corput sequence, but for fractional
sequences, this criterion is enforced using an appropriate *modulus*
function. The consequence is that if you specify a small "base" for a
fractional sequence, your sequence will soon wrap around and you will
get repeated values.

If you drop the first dimension of the standard NDIM-dimensional
Hammersley sequence, you get the standard Halton sequence of dimension
NDIM-1.

The standard Hammersley sequence has slightly better dispersion
properties than the standard Halton sequence. However, it suffers from
the problem that you must know, beforehand, the number of points you are
going to generate. Thus, if you have computed a Hammersley sequence of
length N = 100, and you want to compute a Hammersley sequence of length
200, you must discard your current values and start over. By contrast,
you can compute 100 points of a Halton sequence, and then 100 more, and
this will be the same as computing the first 200 points of the Halton
sequence in one calculation.

In low dimensions, the multidimensional Hammersley sequence quickly
"fills up" the space in a well-distributed pattern. However, for higher
dimensions (such as NDIM = 40) for instance, the initial elements of the
Hammersley sequence can be very poorly distributed; it is only when N,
the number of sequence elements, is large enough relative to the spatial
dimension, that the sequence is properly behaved. Remedies for this
problem were suggested by Kocis and Whiten.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HAMMERSLEY\_ADVANCED** is available in [a C++
version](../../cpp_src/hammersley_advanced/hammersley_advanced.html) and
[a FORTRAN90
version](../../f_src/hammersley_advanced/hammersley_advanced.html) and
[a MATLAB
version](../../m_src/hammersley_advanced/hammersley_advanced.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../cpp_src/box_behnken/box_behnken.html), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CVT](../../cpp_src/cvt/cvt.html), a C++ library which computes points
in a Centroidal Voronoi Tessellation.

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
Faure sequences.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
Halton sequences.

[HAMMERSLEY\_DATASET](../../cpp_src/hammersley_dataset/hammersley_dataset.html),
a C++ program which computes Hammersley datasets.

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

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
Sobol sequences.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes uniform random values.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes van der Corput sequences.

### Reference: {#reference align="center"}

1.  John Hammersley,\
    Monte Carlo methods for solving multivariable problems,\
    Proceedings of the New York Academy of Science,\
    Volume 86, 1960, pages 844-874.
2.  Ladislav Kocis, William Whiten,\
    Computational Investigations of Low-Discrepancy Sequences,\
    ACM Transactions on Mathematical Software,\
    Volume 23, Number 2, 1997, pages 266-294.

### Source Code: {#source-code align="center"}

-   [hammersley\_advanced.cpp](hammersley_advanced.cpp), the source
    code.
-   [hammersley\_advanced.hpp](hammersley_advanced.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hammersley\_advanced\_prb.cpp](hammersley_advanced_prb.cpp), a
    sample problem.
-   [hammersley\_advanced\_prb\_output.txt](hammersley_advanced_prb_output.txt),
    the output file.
-   [hammersley\_04\_00010.txt](../../datasets/hammersley/hammersley_04_00010.txt),
    a Hammersley datafile created by the sample problem.

### List of Routines: {#list-of-routines align="center"}

-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **ATAN4** computes the inverse tangent of the ratio Y / X.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **HALHAM\_LEAP\_CHECK** checks LEAP for a Halton or Hammersley
    sequence.
-   **HALHAM\_N\_CHECK** checks N for a Halton or Hammersley sequence.
-   **HALHAM\_DIM\_NUM\_CHECK** checks DIM\_NUM for a Halton or
    Hammersley sequence.
-   **HALHAM\_SEED\_CHECK** checks SEED for a Halton or Hammersley
    sequence.
-   **HALHAM\_STEP\_CHECK** checks STEP for a Halton or Hammersley
    sequence.
-   **HALHAM\_WRITE** writes a Halton or Hammersley dataset to a file.
-   **HAMMERSLEY** computes the next element in a leaped Hammersley
    subsequence.
-   **HAMMERSLEY\_BASE\_CHECK** checks BASE for a Hammersley sequence.
-   **HAMMERSLEY\_BASE\_GET** gets the base vector for a leaped
    Hammersley subsequence.
-   **HAMMERSLEY\_BASE\_SET** sets the base vector for a leaped
    Hammersley subsequence.
-   **HAMMERSLEY\_DIM\_NUM\_GET** gets the spatial dimension for a
    leaped Hammersley subsequence.
-   **HAMMERSLEY\_DIM\_NUM\_SET** sets the spatial dimension for a
    leaped Hammersley subsequence.
-   **HAMMERSLEY\_LEAP\_GET** gets the leap vector for a leaped
    Hammersley subsequence.
-   **HAMMERSLEY\_LEAP\_SET** sets the leap vector for a leaped
    Hammersley subsequence.
-   **HAMMERSLEY\_SEED\_GET** gets the seed vector for a leaped
    Hammersley subsequence.
-   **HAMMERSLEY\_SEED\_SET** sets the seed vector for a leaped
    Hammersley subsequence.
-   **HAMMERSLEY\_SEQUENCE** computes N elements in an
    DIM\_NUM-dimensional Hammersley sequence.
-   **HAMMERSLEY\_STEP\_GET** gets the step for the leaped Hammersley
    subsequence.
-   **HAMMERSLEY\_STEP\_SET** sets the step for a leaped Hammersley
    subsequence.
-   **I4\_LOG\_10** returns the whole part of the logarithm base 10 of
    an integer.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_TO\_HAMMERSLEY** computes one element of a leaped Hammersley
    subsequence.
-   **I4\_TO\_HAMMERSLEY\_SEQUENCE** computes N elements of a leaped
    Hammersley subsequence.
-   **I4\_TO\_S** converts an integer to a string.
-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8VEC\_DOT\_PRODUCT** returns the dot product of two R8VEC's.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **U1\_TO\_SPHERE\_UNIT\_2D** maps a point in the unit interval onto
    the circle in 2D.
-   **U2\_TO\_BALL\_UNIT\_2D** maps points from the unit box to the unit
    ball in 2D.
-   **U2\_TO\_SPHERE\_UNIT\_3D** maps a point in the unit box to the
    unit sphere in 3D.
-   **U3\_TO\_BALL\_UNIT\_3D** maps points from the unit box to the unit
    ball in 3D.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 October 2006.*
