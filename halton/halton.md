HALTON\
The Halton Quasi Monte Carlo (QMC) Sequence {#halton-the-halton-quasi-monte-carlo-qmc-sequence align="center"}
===========================================

------------------------------------------------------------------------

**HALTON** is a C++ library which computes elements of a Halton Quasi
Monte Carlo (QMC) sequence using a simple interface.

A more sophisticated library is available in HALTON\_ADVANCED, but I
find this simple version to be preferable for everyday use!

The standard M-dimensional Halton sequence is simply composed of M
1-dimensional van der Corput sequences, using as bases the first M
primes.

The HALTON function will return the M-dimensional element of this
sequence with index I.

The HALTON\_SEQUENCE function will return the M-dimensional elements of
this sequence with indices I1 through I2.

The HALTON\_INVERSE function accepts an M-dimensional value, presumably
computed by HALTON, and returns its original index I.

The HALTON\_BASE function allows the user to replace the standard basis
of primes with some other choice.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HALTON** is available in [a C version](../../c_src/halton/halton.html)
and [a C++ version](../../cpp_src/halton/halton.html) and [a FORTRAN90
version](../../f_src/halton/halton.html) and [a MATLAB
version](../../m_src/halton/halton.html) and [a Python
version](../../py_src/halton/halton.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley Quasi Monte Carlo (QMC)
sequence, using a simple interface.

[LATIN\_RANDOM](../../cpp_src/latin_random/latin_random.html), a C++
library which computes elements of a Latin Hypercube dataset, choosing
points at random.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes elements of a 1D van der Corput Quasi Monte
Carlo (QMC) sequence using a simple interface.

### Reference: {#reference align="center"}

1.  John Halton,\
    On the efficiency of certain quasi-random sequences of points in
    evaluating multi-dimensional integrals,\
    Numerische Mathematik,\
    Volume 2, 1960, pages 84-90.
2.  John Halton, GB Smith,\
    Algorithm 247: Radical-Inverse Quasi-Random Point Sequence,\
    Communications of the ACM,\
    Volume 7, 1964, pages 701-702.
3.  Ladislav Kocis, William Whiten,\
    Computational Investigations of Low-Discrepancy Sequences,\
    ACM Transactions on Mathematical Software,\
    Volume 23, Number 2, 1997, pages 266-294.

### Source Code: {#source-code align="center"}

-   [halton.cpp](halton.cpp), the source code.
-   [halton.hpp](halton.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [halton\_prb.cpp](halton_prb.cpp), a sample problem.
-   [halton\_prb\_output.txt](halton_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **HALTON** computes an element of a Halton sequence.
-   **HALTON\_BASE** computes an element of a Halton sequence with user
    bases.
-   **HALTON\_INVERSE** inverts an element of the Halton sequence.
-   **HALTON\_SEQUENCE** computes elements I1 through I2 of a Halton
    sequence.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R8\_MOD** returns the remainder of R8 division.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 19 August 2016.*
