R4LIB\
A Single Precision Real Arithmetic Utility Library {#r4lib-a-single-precision-real-arithmetic-utility-library align="center"}
==================================================

------------------------------------------------------------------------

**R4LIB** is a C++ library which contains a number of utility routines
for "R4" or "single precision real" arithmetic.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**R4LIB** is available in [a C version](../../c_src/r4lib/r4lib.md)
and [a C++ version](../../master/r4lib/r4lib.md) and [a FORTRAN77
version](../../f77_src/r4lib/r4lib.md) and [a FORTRAN90
version](../../f_src/r4lib/r4lib.md) and [a MATLAB
version](../../m_src/r4lib/r4lib.md) and [a Python
version](../../py_src/r4lib/r4lib.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C4LIB](../../master/c4lib/c4lib.md), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables;

[C8LIB](../../master/c8lib/c8lib.md), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables;

[I4LIB](../../master/i4lib/i4lib.md), a C++ library which contains
many utility routines, using "I4" or "single precision integer"
arithmetic.

[I8LIB](../../master/i8lib/i8lib.md), a C++ library which contains
many utility routines, using "I8" or "double precision integer"
arithmetic.

[L4LIB](../../master/l4lib/l4lib.md), a C++ library which contains
many utility routines, using one byte logical (L4) variables.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines, using "R8" or "double precision real" arithmetic.

### Source Code: {#source-code align="center"}

-   [r4lib.cpp](r4lib.cpp), the source code;
-   [r4lib.hpp](r4lib.hpp), the header file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [r4lib\_prb.cpp](r4lib_prb.cpp), a sample calling program;
-   [r4lib\_prb\_output.txt](r4lib_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C4\_ARGUMENT** returns the argument of a C4.
-   **C4\_MAGNITUDE** returns the magnitude of a C4.
-   **C4\_SQRT** returns the principal square root of a C4.
-   **I4\_LOG\_10** returns the integer part of the logarithm base 10 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4INT\_TO\_R4INT** maps an I4 interval to an R4 interval.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **I4VEC\_PERMUTE** permutes an I4VEC in place.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_UNIFORM\_NEW** selects a random permutation of N objects.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_ADD** adds two R4's.
-   **R4\_ATAN** computes the inverse tangent of the ratio Y / X.
-   **R4\_CAS** returns the "casine" of an R4.
-   **R4\_CEILING** rounds an R4 "up" (towards +oo) to the next integer.
-   **R4\_CHOOSE** computes the binomial coefficient C(N,K) as an R4.
-   **R4\_CHOP** chops an R4 to a given number of binary places.
-   **R4\_CSQRT** returns the complex square root of an R4.
-   **R4\_CUBE\_ROOT** returns the cube root of an R4.
-   **R4\_DIFF** computes (X-Y) to a specified accuracy.
-   **R4\_DIGIT** returns a particular decimal digit of an R4.
-   **R4\_EPSILON** returns the R4 roundoff unit.
-   **R4\_EXP** computes the exponential function, avoiding overflow and
    underflow.
-   **R4\_FACTORIAL** computes the factorial of N.
-   **R4\_FACTORIAL2** computes the float factorial function.
-   **R4\_FLOOR** rounds an R4 "down" (towards -oo) to the next integer.
-   **R4\_FRACTION** uses real arithmetic on an integer ratio.
-   **R4\_FRACTIONAL** returns the fractional part of an R4.
-   **R4\_HUGE** returns a "huge" R4.
-   **R4\_IN\_01** is TRUE if an R4 is in the range \[0,1\].
-   **R4\_IS\_INT** determines if an R4 represents an integer value.
-   **R4\_LOG\_10** returns the logarithm base 10 of the absolute value
    of an R4.
-   **R4\_LOG\_2** returns the logarithm base 2 of the absolute value of
    an R4.
-   **R4\_LOG\_B** returns the logarithm base B of an R4.
-   **R4\_MANT** computes the "mantissa" or "fraction part" of an R4.
-   **R4\_MAX** returns the maximum of two R4's.
-   **R4\_MIN** returns the minimum of two R4's..
-   **R4\_MOD** returns the remainder of R4 division.
-   **R4\_MODP** returns the nonnegative remainder of R4 division.
-   **R4\_MOP** returns the I-th power of -1 as an R4 value.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R4\_NORMAL** returns a scaled pseudonormal R4.
-   **R4\_NORMAL\_01** returns a unit pseudonormal R4.
-   **R4\_PI** returns the value of PI as an R4.
-   **R4\_POWER** computes an integer power of an R4.
-   **R4\_POWER\_FAST** computes the P-th power of R, for real R and
    integer P.
-   **R4\_PYTHAG** computes sqrt ( A\*A + B\*B ), avoiding overflow and
    underflow.
-   **R4\_REVERSE\_BYTES** reverses the four bytes in an R4.
-   **R4\_ROUND2** rounds an R4 in base 2.
-   **R4\_ROUNDB** rounds an R4 in a given base.
-   **R4\_ROUNDX** rounds an R4 in base 10.
-   **R4\_SIGN** returns the sign of an R4.
-   **R4\_SIGN\_OPPOSITE** is TRUE if two R4's are not of the same sign.
-   **R4\_SIGN\_OPPOSITE\_STRICT** is TRUE if two R4's are strictly of
    opposite sign.
-   **R4\_SWAP** switches two R4's.
-   **R4\_SWAP3** swaps three R4's.
-   **R4\_TINY** returns a "tiny" R4.
-   **R4\_TO\_DHMS** converts an R4 day value into days, hours, minutes,
    seconds.
-   **R4\_TO\_I4** maps real X in \[XMIN, XMAX\] to integer IX in
    \[IXMIN, IXMAX\].
-   **R4\_TO\_R4\_DISCRETE** maps R to RD in \[RMIN, RMAX\] with NR
    possible values.
-   **R4\_UNIFORM** returns a scaled pseudorandom R4.
-   **R4\_UNIFORM\_01** returns a unit pseudorandom R4.
-   **R4\_UNSWAP3** unswaps three R4's.
-   **R4\_WALSH\_1D** evaluates the Walsh function of a real scalar
    argument.
-   **R4MAT\_BORDER\_ADD** adds a "border" to an R4MAT.
-   **R4MAT\_BORDER\_CUT** cuts the "border" of an R4MAT.
-   **R4MAT\_CHOLESKY\_FACTOR** computes the Cholesky factor of a
    symmetric R4MAT.
-   **R4MAT\_CHOLESKY\_SOLVE** solves a Cholesky factored linear system
    A \* x = b.
-   **R4MAT\_CHORESKY\_FACTOR** computes the "Choresky" factor of a
    symmetric R4MAT.
-   **R4MAT\_COPY** copies one R4MAT to another.
-   **R4MAT\_COPY\_NEW** copies one R4MAT to a "new" R4MAT.
-   **R4MAT\_DET** computes the determinant of an R4MAT.
-   **R4MAT\_DET\_2D** computes the determinant of a 2 by 2 R4MAT.
-   **R4MAT\_DET\_3D** computes the determinant of a 3 by 3 R4MAT.
-   **R4MAT\_DET\_4D** computes the determinant of a 4 by 4 R4MAT.
-   **R4MAT\_DET\_5D** computes the determinant of a 5 by 5 R4MAT.
-   **R4MAT\_DIAG\_ADD\_SCALAR** adds a scalar to the diagonal of an
    R4MAT.
-   **R4MAT\_DIAG\_ADD\_VECTOR** adds a vector to the diagonal of an
    R4MAT.
-   **R4MAT\_DIAG\_GET\_VECTOR** gets the value of the diagonal of an
    R4MAT.
-   **R4MAT\_DIAG\_SET\_SCALAR** sets the diagonal of an R4MAT to a
    scalar value.
-   **R4MAT\_DIAG\_SET\_VECTOR** sets the diagonal of an R4MAT to a
    vector.
-   **R4MAT\_EXPAND\_LINEAR** linearly interpolates new data into an
    R4MAT.
-   **R4MAT\_EXPAND\_LINEAR2** expands an R4MAT by linear interpolation.
-   **R4MAT\_FLIP\_COLS** swaps the columns of an R4MAT.
-   **R4MAT\_FLIP\_ROWS** swaps the rows of an R4MAT.
-   **R4MAT\_GIVENS\_POST** computes the Givens postmultiplier rotation
    matrix.
-   **R4MAT\_GIVENS\_PRE** computes the Givens premultiplier rotation
    matrix.
-   **R4MAT\_HESS** approximates a Hessian matrix via finite
    differences.
-   **R4MAT\_HOUSE\_AXH** computes A\*H where H is a compact Householder
    matrix.
-   **R4MAT\_HOUSE\_AXH\_NEW** computes A\*H where H is a compact
    Householder matrix.
-   **R4MAT\_HOUSE\_FORM** constructs a Householder matrix from its
    compact form.
-   **R4MAT\_HOUSE\_HXA** computes H\*A where H is a compact Householder
    matrix.
-   **R4MAT\_HOUSE\_POST** computes a Householder post-multiplier
    matrix.
-   **R4MAT\_HOUSE\_PRE** computes a Householder pre-multiplier matrix.
-   **R4MAT\_IDENTITY** sets the square matrix A to the identity.
-   **R4MAT\_IN\_01** is TRUE if the entries of an R4MAT are in the
    range \[0,1\].
-   **R4MAT\_INDICATOR\_NEW** sets up an "indicator" R4MAT.
-   **R4MAT\_INVERSE\_2D** inverts a 2 by 2 matrix using Cramer's rule.
-   **R4MAT\_INVERSE\_3D** inverts a 3 by 3 matrix using Cramer's rule.
-   **R4MAT\_INVERSE\_4D** inverts a 4 by 4 matrix using Cramer's rule.
-   **R4MAT\_JAC** estimates a dense jacobian matrix of the function FX.
-   **R4MAT\_L\_INVERSE** inverts a lower triangular R4MAT.
-   **R4MAT\_L\_PRINT** prints a lower triangular R4MAT.
-   **R4MAT\_L\_SOLVE** solves a lower triangular linear system.
-   **R4MAT\_L1\_INVERSE** inverts a unit lower triangular R4MAT.
-   **R4MAT\_LT\_SOLVE** solves a transposed lower triangular linear
    system.
-   **R4MAT\_LU** computes the LU factorization of a rectangular R4MAT.
-   **R4MAT\_MAX** returns the maximum entry of an R4MAT.
-   **R4MAT\_MAX\_INDEX** returns the location of the maximum entry of
    an R4MAT.
-   **R4MAT\_MAXCOL\_MINROW** gets the maximum column minimum row of an
    M by N matrix.
-   **R4MAT\_MAXROW\_MINCOL** gets the maximum row minimum column of an
    M by N matrix.
-   **R4MAT\_MIN** returns the minimum entry of an R4MAT.
-   **R4MAT\_MIN\_INDEX** returns the location of the minimum entry of
    an R4MAT.
-   **R4MAT\_MINCOL\_MAXROW** gets the minimum column maximum row of an
    M by N matrix.
-   **R4MAT\_MINROW\_MAXCOL** gets the minimum row maximum column of an
    M by N matrix.
-   **R4MAT\_MM** multiplies two matrices.
-   **R4MAT\_MM\_NEW** multiplies two matrices.
-   **R4MAT\_MTV** multiplies a transposed matrix times a vector.
-   **R4MAT\_MTXV** multiplies a transposed matrix times a vector.
-   **R4MAT\_MV** multiplies a matrix times a vector.
-   **R4MAT\_MXM** multiplies two matrices.
-   **R4MAT\_MXM\_NEW** multiplies two matrices.
-   **R4MAT\_MXV** multiplies a matrix times a vector.
-   **R4MAT\_NINT** rounds the entries of an R4MAT.
-   **R4MAT\_NORM\_EIS** returns the EISPACK norm of an R4MAT.
-   **R4MAT\_NORM\_FRO** returns the Frobenius norm of an R4MAT.
-   **R4MAT\_NULLSPACE** computes the nullspace of a matrix.
-   **R4MAT\_NULLSPACE\_SIZE** computes the size of the nullspace of a
    matrix.
-   **R4MAT\_ORTH\_UNIFORM\_NEW** returns a random orthogonal matrix.
-   **R4MAT\_PLOT** "plots" an R4MAT.
-   **R4MAT\_PLOT\_SYMBOL** returns a symbol for entries of an R4MAT.
-   **R4MAT\_POLY\_CHAR** computes the characteristic polynomial of an
    R4MAT.
-   **R4MAT\_POWER** computes a nonnegative power of an R4MAT.
-   **R4MAT\_POWER\_METHOD** applies the power method to a matrix.
-   **R4MAT\_PRINT** prints an R4MAT.
-   **R4MAT\_PRINT\_SOME** prints some of an R4MAT.
-   **R4MAT\_REF** computes the row echelon form of a matrix.
-   **R4MAT\_RREF** computes the reduced row echelon form of a matrix.
-   **R4MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R4MAT\_SOLVE\_2D** solves a 2 by 2 linear system using Cramer's
    rule.
-   **R4MAT\_SOLVE\_3D** solves a 3 by 3 linear system using Cramer's
    rule.
-   **R4MAT\_SOLVE2** computes the solution of an N by N linear system.
-   **R4MAT\_SYMM\_EIGEN** returns a symmetric matrix with given
    eigensystem.
-   **R4MAT\_SYMM\_JACOBI** applies Jacobi eigenvalue iteration to a
    symmetric matrix.
-   **R4MAT\_TO\_R4PLU** factors a general matrix.
-   **R4MAT\_TRACE** computes the trace of an R4MAT.
-   **R4MAT\_TRANSPOSE** returns the transpose of an R4MAT.
-   **R4MAT\_TRANSPOSE\_IN\_PLACE** transposes a square R4MAT in place.
-   **R4MAT\_TRANSPOSE\_PRINT** prints an R4MAT, transposed.
-   **R4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R4MAT,
    transposed.
-   **R4MAT\_U\_INVERSE** inverts an upper triangular R4MAT.
-   **R4MAT\_U1\_INVERSE** inverts a unit upper triangular R4MAT.
-   **R4MAT\_UNIFORM\_01** returns a unit pseudorandom R4MAT.
-   **R4MAT\_UNIFORM\_NEW** returns a scaled pseudorandom R4MAT.
-   **R4MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R4MAT.
-   **R4MAT\_VAND2** returns the N by N row Vandermonde matrix A.
-   **R4MAT\_ZERO** zeroes an R4MAT.
-   **R4MAT\_ZERO\_NEW** returns a new zeroed R4MAT.
-   **R4ROW\_SWAP** swaps two rows of an R4ROW.
-   **R4VEC\_AMAX** returns the maximum absolute value in an R4VEC.
-   **R4VEC\_AMAX\_INDEX** returns the index of the maximum absolute
    value in an R4VEC.
-   **R4VEC\_AMIN** returns the minimum absolute value in an R4VEC.
-   **R4VEC\_AMIN\_INDEX** returns the index of the minimum absolute
    value in an R4VEC.
-   **R4VEC\_COPY** copies an R4VEC.
-   **R4VEC\_COPY\_NEW** copies an R4VEC to a "new" R4VEC.
-   **R4VEC\_HOUSE\_COLUMN** defines a Householder premultiplier that
    "packs" a column.
-   **R4VEC\_IS\_INT** is TRUE if an R4VEC is integral.
-   **R4VEC\_MAX** returns the value of the maximum element in an R4VEC.
-   **R4VEC\_MEAN** returns the mean of an R4VEC.
-   **R4VEC\_MIN** returns the value of the minimum element in an R4VEC.
-   **R4VEC\_NORM** returns the L2 norm of an R4VEC.
-   **R4VEC\_NORM\_AFFINE** returns the affine L2 norm of an R4VEC.
-   **R4VEC\_NORM\_L1** returns the L1 norm of an R4VEC.
-   **R4VEC\_NORM\_L2** returns the L2 norm of an R4VEC.
-   **R4VEC\_NORM\_LI** returns the L-oo norm of an R4VEC.
-   **R4VEC\_NORM\_LP** returns the LP norm of an R4VEC.
-   **R4VEC\_NORMAL\_01** returns a unit pseudonormal R4VEC.
-   **R4VEC\_NORMALIZE** normalizes an R4VEC.
-   **R4VEC\_NORMALIZE\_L1** normalizes an R4VEC to have unit sum.
-   **R4VEC\_NORMSQ** returns the squared L2 norm of an R4VEC.
-   **R4VEC\_NORMSQ\_AFFINE** returns the squared affine L2 norm of an
    R4VEC.
-   **R4VEC\_PERMUTE\_CYCLIC** performs a cyclic permutation of an
    R4VEC.
-   **R4VEC\_PRINT\_PART** prints "part" of an R4VEC.
-   **R4VEC\_UNIFORM** returns a scaled pseudorandom R4VEC.
-   **R4VEC\_UNIFORM\_NEW** returns a scaled pseudorandom R4VEC.
-   **R4VEC\_UNIFORM\_01** returns a unit unit pseudorandom R4VEC.
-   **R4VEC\_UNIFORM\_01\_NEW** returns a unit unit pseudorandom R4VEC.
-   **R4VEC\_VARIANCE** returns the variance of an R4VEC.
-   **R4VEC\_ZERO** zeroes an R4VEC.
-   **R4VEC\_ZERO\_NEW** creates and zeroes an R4VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 May 2011.*
