HAMMERSLEY\
The Hammersley Quasi Monte Carlo (QMC) Sequence {#hammersley-the-hammersley-quasi-monte-carlo-qmc-sequence align="center"}
===============================================

------------------------------------------------------------------------

**HAMMERSLEY** is a C++ library which computes elements of a Hammersley
Quasi Monte Carlo (QMC) sequence using a simple interface.

A more sophisticated library is available in HAMMERSLEY\_ADVANCED, but I
find this simple version to be preferable for everyday use!

The standard M-dimensional Hammersley sequence based on N is simply
composed of a first component of successive fractions 0/N, 1/N, ...,
N/N, paired with M-1 1-dimensional van der Corput sequences, using as
bases the first M-1 primes.

The HAMMERSLEY function will return the M-dimensional element of this
sequence with index I.

The HAMMERSLEY\_SEQUENCE function will return the M-dimensional elements
of this sequence with indices I1 through I2.

The HAMMERSLEY\_INVERSE function accepts an M-dimensional value,
presumably computed by HAMMERSLEY, and returns its original index I.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HAMMERSLEY** is available in [a C
version](../../c_src/hammersley/hammersley.md) and [a C++
version](../../master/hammersley/hammersley.md) and [a FORTRAN90
version](../../f_src/hammersley/hammersley.md) and [a MATLAB
version](../../m_src/hammersley/hammersley.md) and [a Python
version](../../py_src/hammersley/hammersley.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CVT](../../master/cvt/cvt.md), a C++ library which computes elements
of a Centroidal Voronoi Tessellation.

[FAURE](../../master/faure/faure.md), a C++ library which computes
elements of a Faure sequence.

[HALTON](../../master/halton/halton.md), a C++ library which computes
elements of a Halton Quasi Monte Carlo (QMC) sequence.

[HAMMERSLEY\_ADVANCED](../../master/hammersley_advanced/hammersley_advanced.md),
a C++ library which computes elements of a Hammersley Quasi Monte Carlo
(QMC) sequence, using an advanced interface with many input options.

[HAMMERSLEY\_DATASET](../../master/hammersley_dataset/hammersley_dataset.md),
a C++ library which creates a Hammersley sequence and writes it to a
file.

[HEX\_GRID](../../master/hex_grid/hex_grid.md), a C++ library which
computes elements of a hexagonal grid dataset.

[IHS](../../master/ihs/ihs.md), a C++ library which computes elements
of an improved distributed Latin hypercube dataset.

[LATIN\_CENTER](../../master/latin_center/latin_center.md), a C++
library which computes elements of a Latin Hypercube dataset, choosing
center points.

[LATIN\_EDGE](../../master/latin_edge/latin_edge.md), a C++ library
which computes elements of a Latin Hypercube dataset, choosing edge
points.

[LATIN\_RANDOM](../../master/latin_random/latin_random.md), a C++
library which computes elements of a Latin Hypercube dataset, choosing
points at random.

[LATTICE\_RULE](../../master/lattice_rule/lattice_rule.md), a C++
library which approximates multidimensional integrals using lattice
rules.

[LCVT](../../master/lcvt/lcvt.md), a C++ library which computes a
latinized Centroidal Voronoi Tessellation.

[NIEDERREITER2](../../master/niederreiter2/niederreiter2.md), a C++
library which computes elements of a Niederreiter sequence using base 2.

[SOBOL](../../master/sobol/sobol.md), a C++ library which computes
elements of a Sobol sequence.

[TOMS647](../../master/toms647/toms647.md), a C++ library which is a
version of ACM TOMS algorithm 647, for evaluating Faure, Hammersley and
Sobol sequences.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes elements of a 1D van der Corput Quasi Monte
Carlo (QMC) sequence using a simple interface.

### Reference: {#reference align="center"}

1.  John Hammersley, Monte Carlo methods for solving multivariable
    problems, Proceedings of the New York Academy of Science, Volume 86,
    1960, pages 844-874.
2.  Ladislav Kocis, William Whiten,\
    Computational Investigations of Low-Discrepancy Sequences,\
    ACM Transactions on Mathematical Software,\
    Volume 23, Number 2, 1997, pages 266-294.

### Source Code: {#source-code align="center"}

-   [hammersley.cpp](hammersley.cpp), the source code.
-   [hammersley.hpp](hammersley.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hammersley\_prb.cpp](hammersley_prb.cpp), a sample calling program.
-   [hammersley\_prb\_output.txt](hammersley_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **HAMMERSLEY** computes an element of a Hammersley sequence.
-   **HAMMERSLEY\_INVERSE** inverts an element of the Hammersley
    sequence.
-   **HAMMERSLEY\_SEQUENCE** computes elements I1 through I2 of a
    Hammersley sequence.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 August 2016.*
