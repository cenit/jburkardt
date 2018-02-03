R8UT\
Linear Algebra Utilities {#r8ut-linear-algebra-utilities align="center"}
========================

------------------------------------------------------------------------

**R8UT** is a C++ library which carries out some basic linear algebra
operations on R8UT matrices (real 64 bit precision upper triangular
format).

### Licensing: {#licensing align="center"}

The computer code described and made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**R8UT** is available in [a C version](../../c_src/r8ut/r8ut.html) and
[a C++ version](../../cpp_src/r8ut/r8ut.html) and [a FORTRAN90
version](../../f_src/r8ut/r8ut.html) and [a MATLAB
version](../../m_src/r8ut/r8ut.html) and [a Python
version](../../py_src/r8ut/r8ut.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[R83](../../cpp_src/r83/r83.html), a C++ library which contains linear
algebra routines for R83 matrices (real, 64 bit, tridiagonal 3xN
format).

[R83S](../../cpp_src/r83s/r83s.html), a C++ library which contains
linear algebra routines for R83S matrices (real, 64 bit, tridiagonal
scalar format).

[R83V](../../cpp_src/r83v/r83v.html), a C++ library which contains
linear algebra routines for R83V matrices (real, 64 bit, tridiagonal
three vector format).

[R85](../../cpp_src/r85/r85.html), a C++ library which contains linear
algebra routines for R85 matrices (real, 64 bit, pentadiagonal format).

[R8BB](../../cpp_src/r8bb/r8bb.html), a C++ library which contains
linear algebra routines for R8BB matrices (real, 64 bit, border banded
format).

[R8BLT](../../cpp_src/r8blt/r8blt.html), a C++ library which contains
linear algebra routines for R8BLT matrices (real, 64 bit, band lower
triangular format).

[R8BTO](../../cpp_src/r8bto/r8bto.html), a C++ library which contains
linear algebra routines for R8BTO matrices (real, 64 bit, block Toeplitz
format).

[R8BUT](../../cpp_src/r8but/r8but.html), a C++ library which contains
linear algebra routines for R8BUT matrices (real, 64 bit, band upper
triangular format).

[R8CB](../../cpp_src/r8cb/r8cb.html), a C++ library which contains
linear algebra routines for R8CB matrices (real, 64 bit, Compressed Band
format).

[R8CBB](../../cpp_src/r8cbb/r8cbb.html), a C++ library which contains
linear algebra routines for R8CBB matrices (real, 64 bit, Compressed
Border Banded format).

[R8CC](../../cpp_src/r8cc/r8cc.html), a C++ library which contains
linear algebra routines for R8CC matrices (real, 64 bit, Compressed
Column (Colptr,Row,Value) format).

[R8GD](../../cpp_src/r8gd/r8gd.html), a C++ library which contains
linear algebra routines for R8GD matrices (real, 64 bit, general
diagonal format).

[R8GE](../../cpp_src/r8ge/r8ge.html), a C++ library which contains
linear algebra routines for R8GE matrices (real, 64 bit, General
format).

[R8LT](../../cpp_src/r8lt/r8lt.html), a C++ library which contains
linear algebra routines for R8LT matrices (real, 64 bit, lower
triangular format).

[R8LTT](../../cpp_src/r8ltt/r8ltt.html), a C++ library which contains
linear algebra routines for R8LTT matrices (real, 64 bit, lower
triangular Toeplitz format).

[R8NCF](../../cpp_src/r8ncf/r8ncf.html), a C++ library which contains
linear algebra routines for R8NCF matrices (real, 64 bit, nonsymmetric
coordinate format).

[R8PBL](../../cpp_src/r8pbl/r8pbl.html), a C++ library which contains
linear algebra routines for R8PBL matrices (real, 64 bit, positive
definite symmetric band lower format).

[R8PO](../../cpp_src/r8po/r8po.html), a C++ library which contains
linear algebra routines for R8PO matrices (real, 64 bit, positive
definite symmetric format).

[R8RI](../../cpp_src/r8ri/r8ri.html), a C++ library which contains
linear algebra routines for R8RI matrices (real, 64 bit, row indexed
format).

[R8S3](../../cpp_src/r8s3/r8s3.html), a C++ library which contains
linear algebra routines for R8S3 matrices (real, 64 bit, SLAP Triad
(I,J,AIJ) format).

[R8SD](../../cpp_src/r8sd/r8sd.html), a C++ library which contains
linear algebra routines for R8SD matrices (real, 64 bit, symmetric
diagonal format).

[R8SP](../../cpp_src/r8sp/r8sp.html), a C++ library which contains
linear algebra routines for R8SP matrices (real, 64 bit, SLAP Triad
(I,J,AIJ) format).

[R8SS](../../cpp_src/r8ss/r8ss.html), a C++ library which carries out
linear algebra operations for R8SS matrices (real, 64 bit, symmetric
skyline format).

[R8STO](../../cpp_src/r8sto/r8sto.html), a C++ library which contains
linear algebra routines for R8STO matrices (real, 64 bit, symmetric
Toeplitz N format).

[R8TO](../../cpp_src/r8to/r8to.html), a C++ library which contains
linear algebra routines for R8TO matrices (real, 64 bit, Toeplitz 2\*N-1
format).

[R8UTT](../../cpp_src/r8utt/r8utt.html), a C++ library which contains
linear algebra routines for R8UTT matrices (real, 64 bit, upper
triangular Toeplitz format).

[R8VM](../../cpp_src/r8vm/r8vm.html), a C++ library which contains
linear algebra routines for R8VM matrices (real, 64 bit, Vandermonde
format).

### Source Code: {#source-code align="center"}

-   [r8ut.cpp](r8ut.cpp), the source code;
-   [r8ut.hpp](r8ut.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [r8ut\_prb.cpp](r8ut_prb.cpp), the calling program;
-   [r8ut\_prb\_output.txt](r8ut_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_LOG\_10** returns the integer part of the logarithm base 10 of
    an I4.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8GE\_PRINT** prints an R8GE matrix.
-   **R8GE\_PRINT\_SOME** prints some of an R8GE matrix.
-   **R8UT\_DET** computes the determinant of an R8UT matrix.
-   **R8UT\_INDICATOR** sets up an R8UT indicator matrix.
-   **R8UT\_INVERSE** computes the inverse of an R8UT matrix.
-   **R8UT\_MM** computes C = A \* B, where A and B are R8UT matrices.
-   **R8UT\_MTM** computes C = A' \* B, where A and B are R8UT matrices.
-   **R8UT\_MTV** multiplies an R8VEC by an R8UT matrix.
-   **R8UT\_MV** multiplies an R8UT matrix by an R8VEC.
-   **R8UT\_PRINT** prints an R8UT matrix.
-   **R8UT\_PRINT\_SOME** prints some of an R8UT matrix.
-   **R8UT\_RANDOM** randomizes an R8UT matrix.
-   **R8UT\_SL** solves a linear system A\*x=b with A an R8UT matrix.
-   **R8UT\_SLT** solves a transposed linear system A'\*x=b with A an
    R8UT matrix.
-   **R8UT\_TO\_R8GE** copies an R8UT matrix to an R8GE matrix.
-   **R8UT\_ZEROS** zeroes an R8UT matrix.
-   **R8VEC\_INDICATOR1** sets an R8VEC to the indicator1 vector.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 August 2015.*
