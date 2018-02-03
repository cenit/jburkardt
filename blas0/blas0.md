BLAS0\
Auxilliary Functions for Basic Linear Algebra Subprograms (BLAS) {#blas0-auxilliary-functions-for-basic-linear-algebra-subprograms-blas align="center"}
================================================================

------------------------------------------------------------------------

**BLAS0** is a C++ library which contains auxilliary functions for the
Basic Linear Algebra Subprograms (BLAS).

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BLAS0** is available in [a C version](../../c_src/blas0/blas0.html)
and [a C++ version](../../cpp_src/blas0/blas0.html) and [a FORTRAN77
version](../../f77_src/blas0/blas0.html) and [a FORTRAN90
version](../../f_src/blas0/blas0.html) and [a MATLAB
version](../../m_src/blas0/blas0.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1\_C](../../cpp_src/blas1_c/blas1_c.html), a C++ library which
contains basic linear algebra subprograms (BLAS) for vector-vector
operations, using single precision complex arithmetic, by Charles
Lawson, Richard Hanson, David Kincaid, Fred Krogh.

[BLAS1\_D](../../cpp_src/blas1_d/blas1_d.html), a C++ library which
contains basic linear algebra subprograms (BLAS) for vector-vector
operations, using double precision real arithmetic, by Charles Lawson,
Richard Hanson, David Kincaid, Fred Krogh.

[BLAS1\_S](../../cpp_src/blas1_s/blas1_s.html), a C++ library which
contains basic linear algebra subprograms (BLAS) for vector-vector
operations, using single precision real arithmetic, by Charles Lawson,
Richard Hanson, David Kincaid, Fred Krogh.

[BLAS1\_Z](../../cpp_src/blas1_z/blas1_z.html), a C++ library which
contains basic linear algebra subprograms (BLAS) for vector-vector
operations, using double precision complex arithmetic, by Charles
Lawson, Richard Hanson, David Kincaid, Fred Krogh.

[BLAS2](../../cpp_src/blas2/blas2.html), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-vector operations;

[BLAS3](../../cpp_src/blas3/blas3.html), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-matrix operations;

### Reference: {#reference align="center"}

1.  Charles Lawson, Richard Hanson, David Kincaid, Fred Krogh,\
    Algorithm 539: Basic Linear Algebra Subprograms for Fortran Usage,\
    ACM Transactions on Mathematical Software,\
    Volume 5, Number 3, September 1979, pages 308-323.

### Source Code: {#source-code align="center"}

-   [blas0.cpp](blas0.cpp), the source code.
-   [blas0.hpp](blas0.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [blas0\_prb.cpp](blas0_prb.cpp) a sample calling program.
-   [blas0\_prb\_output.txt](blas0_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C4\_UNIFORM\_01** returns a unit complex pseudorandom number.
-   **C8\_UNIFORM\_01** returns a unit double complex pseudorandom
    number.
-   **CABS1** returns the L1 norm of a number.
-   **CABS2** returns the L2 norm of a number.
-   **CMACH** computes machine parameters for complex arithmetic.
-   **CSIGN1** is a transfer-of-sign function.
-   **CSIGN2** is a transfer-of-sign function.
-   **DMACH** computes machine parameters of double precision real
    arithmetic.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **LSAME** returns TRUE if CA is the same letter as CB regardless of
    case.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_MAX** returns the maximum of two R4's.
-   **R4\_SIGN** returns the sign of an R4.
-   **R4\_UNIFORM\_01** returns a unit pseudorandom R4.
-   **R4\_UNIFORM\_AB** returns a scaled pseudorandom R4.
-   **R4MAT\_PRINT** prints an R4MAT.
-   **R4MAT\_PRINT\_SOME** prints some of an R4MAT.
-   **R4MAT\_TEST** sets up a test matrix.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8\_UNIFORM\_AB** returns a scaled pseudorandom R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TEST** sets up a test matrix.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **SMACH** computes machine parameters of float arithmetic.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **XERBLA** is an error handler for the LAPACK routines.
-   **ZABS1** returns the L1 norm of a complex .
-   **ZABS2** returns the L2 norm of a complex .
-   **ZMACH** computes machine parameters for complex arithmetic.
-   **ZSIGN1** is a complex transfer-of-sign function.
-   **ZSIGN2** is a complex transfer-of-sign function.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 April 2014.*
