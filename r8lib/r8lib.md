R8LIB\
A Double Precision Real Arithmetic Utility Library {#r8lib-a-double-precision-real-arithmetic-utility-library align="center"}
==================================================

------------------------------------------------------------------------

**R8LIB** is a C++ library which contains a number of utility routines
for "R8" or "double precision real" arithmetic.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**R8LIB** is available in [a C version](../../c_src/r8lib/r8lib.html)
and [a C++ version](../../cpp_src/r8lib/r8lib.html) and [a FORTRAN90
version](../../f_src/r8lib/r8lib.html) and [a MATLAB
version](../../m_src/r8lib/r8lib.html) and [a Python
version](../../py_src/r8lib/r8lib.html).

### Related Programs: {#related-programs align="center"}

[C4LIB](../../cpp_src/c4lib/c4lib.html), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables;

[C8LIB](../../cpp_src/c8lib/c8lib.html), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables;

[I4LIB](../../cpp_src/i4lib/i4lib.html), a C++ library which contains
many utility routines, using "I4" or "single precision integer"
arithmetic.

[I8LIB](../../cpp_src/i8lib/i8lib.html), a C++ library which contains
many utility routines, using "I8" or "double precision integer"
arithmetic.

[L4LIB](../../cpp_src/l4lib/l4lib.html), a C++ library which contains
many utility routines, using one byte logical (L4) variables.

[R4LIB](../../cpp_src/r4lib/r4lib.html), a C++ library which contains
many utility routines, using "R4" or "single precision real" arithmetic.

[R8COL](../../cpp_src/r8col/r8col.html), a C++ library which contains
utility routines for R8COL's, that is, double precision real MxN arrays,
considered as N column vectors, each of length M. The data may be
thought of as a matrix of multiple columns, and many operations will be
carried out columnwise.

[R8ROW](../../cpp_src/r8row/r8row.html), a C++ library which contains
utility routines for R8ROW's, that is, double precision real MxN arrays,
considered as M row vectors, each of length N. The data may be thought
of as a matrix of multiple rows, and many operations will be carried out
rowwise.

### Source Code: {#source-code align="center"}

-   [r8lib.cpp](r8lib.cpp), the source code;
-   [r8lib.hpp](r8lib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [r8lib\_prb.cpp](r8lib_prb.cpp), the calling program;
-   [r8lib\_prb\_output.txt](r8lib_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **GAMMA\_VALUES** returns some values of the Gamma function.
-   **GAMMA\_LOG\_VALUES** returns some values of the Log Gamma
    function.
-   **I4\_LOG\_10** returns the integer part of the logarithm base 10 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4INT\_TO\_R8INT** maps an I4 interval to an R8 interval.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_INDICATOR0\_NEW** sets an I4VEC to the indicator vector
    (0,1,2,...).
-   **I4VEC\_INDICATOR1\_NEW** sets an I4VEC to the indicator vector
    (1,2,3,...).
-   **I4VEC\_PERMUTE** permutes an I4VEC in place.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **I4VEC\_ZEROS** zeroes an I4VEC.
-   **I4VEC\_ZEROS\_NEW** creates and zeroes an I4VEC.
-   **LEGENDRE\_ZEROS** returns the zeros of the Legendre polynomial of
    degree N.
-   **PERM0\_CHECK** checks a permutation of ( 0, ..., N-1 ).
-   **PERM0\_UNIFORM\_NEW** selects a random permutation of 0,...,N-1.
-   **PERM1\_CHECK** checks a permutation of (1, ..., N ).
-   **PERM1\_UNIFORM\_NEW** selects a random permutation of 1,...,N.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ACOS** computes the arc cosine function, with argument
    truncation.
-   **R8\_ACOSH** returns the inverse hyperbolic cosine of a number.
-   **R8\_ADD** adds two R8's.
-   **R8\_AGM** computes the arithmetic-geometric mean of A and B.
-   **R8\_AINT** truncates an R8 argument to an integer.
-   **R8\_ASIN** computes the arc sine function, with argument
    truncation.
-   **R8\_ASINH** returns the inverse hyperbolic sine of a number.
-   **R8\_ATAN** computes the inverse tangent of the ratio Y / X.
-   **R8\_ATANH** returns the inverse hyperbolic tangent of a number.
-   **R8\_BIG** returns a "big" R8.
-   **R8\_CAS** returns the "casine" of an R8.
-   **R8\_CEILING** rounds an R8 up to the nearest integral R8.
-   **R8\_CHOOSE** computes the combinatorial coefficient C(N,K).
-   **R8\_CHOP** chops an R8 to a given number of binary places.
-   **R8\_COSD** returns the cosine of an angle given in degrees.
-   **R8\_COT** returns the cotangent of an angle.
-   **R8\_COTD** returns the cotangent of an angle given in degrees.
-   **R8\_CSC** returns the cosecant of X.
-   **R8\_CSCD** returns the cosecant of an angle given in degrees.
-   **R8\_CUBE\_ROOT** returns the cube root of an R8.
-   **R8\_DEGREES** converts an angle from radian to degree measure.
-   **R8\_DIFF** computes (X-Y) to a specified accuracy.
-   **R8\_DIGIT** returns a particular decimal digit of an R8.
-   **R8\_DIVIDE\_I4** returns an I4 fraction as an R8.
-   **R8\_E** returns the value of the base of the natural logarithm
    system.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_EPSILON\_COMPUTE** computes the R8 roundoff unit.
-   **R8\_EXP** computes the exponential function, avoiding overflow and
    underflow.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL\_VALUES** returns values of the real factorial
    function.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **R8\_FACTORIAL2\_VALUES** returns values of the double factorial
    function.
-   **R8\_FALL** computes the falling factorial function \[X\]\_N.
-   **R8\_FALL\_VALUES** returns some values of the falling factorial
    function.
-   **R8\_FLOOR** rounds an R8 down to the nearest integral R8.
-   **R8\_FRACTION** uses real arithmetic on an integer ratio.
-   **R8\_FRACTIONAL** returns the fractional part of an R8.
-   **R8\_GAMMA** evaluates Gamma(X) for an R8.
-   **R8\_GAMMA\_LOG** evaluates the logarithm of the gamma function.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_HYPOT** returns the value of sqrt ( X\^2 + Y\^2 ).
-   **R8\_IN\_01** is TRUE if an R8 is in the range \[0,1\].
-   **R8\_INSIGNIFICANT** determines if an R8 is insignificant.
-   **R8\_IS\_INT** determines if an R8 represents an integer value.
-   **R8\_LOG\_10** returns the logarithm base 10 of the absolute value
    of an R8.
-   **R8\_LOG\_2** returns the logarithm base 2 of the absolute value of
    an R8.
-   **R8\_LOG\_B** returns the logarithm base B of an R8.
-   **R8\_MANT** computes the "mantissa" or "fraction part" of an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_MOD** returns the remainder of R8 division.
-   **R8\_MODP** returns the nonnegative remainder of R8 division.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R8\_NORMAL\_AB** returns a scaled pseudonormal R8.
-   **R8\_PI** returns the value of PI as an R8.
-   **R8\_PI\_SQRT** returns the square root of PI as an R8.
-   **R8\_POWER** computes an integer power of an R8.
-   **R8\_POWER\_FAST** computes the P-th power of R, for real R and
    integer P.
-   **R8\_PRINT** prints an R8.
-   **R8\_PYTHAG** computes sqrt ( A\*A + B\*B ), avoiding overflow and
    underflow.
-   **R8\_RADIANS** converts an angle from degree to radian measure.
-   **R8\_REVERSE\_BYTES** reverses the bytes in an R8.
-   **R8\_RISE** computes the rising factorial function \[X\]\^N.
-   **R8\_RISE\_VALUES** returns some values of the rising factorial
    function.
-   **R8\_ROUND** rounds an R8 to the nearest integral value.
-   **R8\_ROUND\_I4** rounds an R8, returning an I4.
-   **R8\_ROUND2** rounds an R8 in base 2.
-   **R8\_ROUNDB** rounds an R8 in a given base.
-   **R8\_ROUNDX** rounds an R8 in base 10.
-   **R8\_SECD** returns the secant of an angle given in degrees.
-   **R8\_SECH** evaluates the hyperbolic secant, while avoiding COSH
    overflow.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_SIGN3** returns the three-way sign of an R8.
-   **R8\_SIGN\_CHAR** returns a character indicating the sign of an R8.
-   **R8\_SIGN\_MATCH** is TRUE if two R8's are of the same sign.
-   **R8\_SIGN\_MATCH\_STRICT** is TRUE if two R8's are of the same
    strict sign.
-   **R8\_SIGN\_OPPOSITE** is TRUE if two R8's are not of the same sign.
-   **R8\_SIGN\_OPPOSITE\_STRICT** is TRUE if two R8's are strictly of
    opposite sign.
-   **R8\_SIGN2** returns the first argument with the sign of the
    second.
-   **R8\_SINCOS\_SUM** simplifies a\*sin(cx)+b\*cos(cx).
-   **R8\_SIND** returns the sine of an angle given in degrees.
-   **R8\_SQRT\_I4** returns the square root of an I4 as an R8.
-   **R8\_SUM** returns the sum of two R8's.
-   **R8\_SWAP** switches two R8's.
-   **R8\_SWAP3** swaps three R8's.
-   **R8\_TAND** returns the tangent of an angle given in degrees.
-   **R8\_TINY** returns a "tiny" R8.
-   **R8\_TO\_DHMS** converts an R8 day value into days, hours, minutes,
    seconds.
-   **R8\_TO\_I4** maps real X in \[XMIN, XMAX\] to integer IX in
    \[IXMIN, IXMAX\].
-   **R8\_TO\_R8\_DISCRETE** maps R to RD in \[RMIN, RMAX\] with NR
    possible values.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8\_UNIFORM\_AB** returns a scaled pseudorandom R8.
-   **R8\_UNSWAP3** unswaps three R8's.
-   **R8\_WALSH\_1D** evaluates the Walsh function of a real scalar
    argument.
-   **R8\_WRAP** forces an R8 to lie between given limits by wrapping.
-   **R82\_DIST\_L2** returns the L2 distance between a pair of R82's.
-   **R82\_PRINT** prints an R82.
-   **R82\_UNIFORM\_AB** returns a random R82 value in a given range.
-   **R82COL\_PRINT\_PART** prints "part" of an R82COL.
-   **R82POLY2\_PRINT** prints a second order polynomial in two
    variables.
-   **R82POLY2\_TYPE** analyzes a second order polynomial in two
    variables.
-   **R82POLY2\_TYPE\_PRINT** prints the meaning of the output from
    R82POLY2\_TYPE.
-   **R82ROW\_MAX** returns the maximum value in an R82ROW.
-   **R82ROW\_MIN** returns the minimum value in an R82ROW.
-   **R82ROW\_ORDER\_TYPE** finds if an R82ROW is (non)strictly
    ascending/descending.
-   **R82ROW\_PART\_QUICK\_A** reorders an R82ROW as part of a quick
    sort.
-   **R82ROW\_PERMUTE** permutes an R82ROW in place.
-   **R82ROW\_PRINT** prints an R82ROW.
-   **R82ROW\_PRINT\_PART** prints "part" of an R82ROW.
-   **R82ROW\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R82ROW.
-   **R82ROW\_SORT\_QUICK\_A** ascending sorts an R82ROW using quick
    sort.
-   **R83\_NORM** returns the Euclidean norm of an R83.
-   **R83COL\_PRINT\_PART** prints "part" of an R83COL.
-   **R83ROW\_MAX** returns the maximum value in an R83ROW.
-   **R83ROW\_MIN** returns the minimum value in an R83ROW.
-   **R83ROW\_PART\_QUICK\_A** reorders an R83ROW as part of a quick
    sort.
-   **R83ROW\_PRINT\_PART** prints "part" of an R83ROW.
-   **R83ROW\_SORT\_QUICK\_A** ascending sorts an R83ROW using quick
    sort.
-   **R8BLOCK\_DELETE** frees memory associated with an R8BLOCK.
-   **R8BLOCK\_EXPAND\_LINEAR** linearly interpolates new data into a 3D
    block.
-   **R8BLOCK\_NEW** allocates a new R8BLOCK.
-   **R8BLOCK\_PRINT** prints an R8BLOCK block (a 3D matrix).
-   **R8BLOCK\_ZEROS\_NEW** returns a new zeroed R8BLOCK.
-   **R8CMAT\_DELETE** frees memory associated with an R8CMAT.
-   **R8CMAT\_NEW** allocates a new R8CMAT.
-   **R8CMAT\_PRINT** prints an R8CMAT.
-   **R8CMAT\_PRINT\_SOME** prints some of an R8CMAT.
-   **R8CMAT\_TO\_R8MAT\_NEW** copies data from an R8CMAT to an R8MAT.
-   **R8CMAT\_ZEROS\_NEW** allocates and zeros a new R8CMAT.
-   **R8INT\_TO\_R8INT** maps one R8 interval to another.
-   **R8INT\_TO\_I4INT** maps an R8 interval to an integer interval.
-   **R8MAT\_ADD** computes C = alpha \* A + beta \* B for R8MAT's.
-   **R8MAT\_ADD\_NEW** computes C = alpha \* A + beta \* B for R8MAT's.
-   **R8MAT\_AMAX** returns the maximum absolute value entry of an
    R8MAT.
-   **R8MAT\_BORDER\_ADD** adds a "border" to an R8MAT.
-   **R8MAT\_BORDER\_CUT** cuts the "border" of an R8MAT.
-   **R8MAT\_CHOLESKY\_FACTOR** computes the Cholesky factor of a
    symmetric R8MAT.
-   **R8MAT\_CHOLESKY\_FACTOR\_UPPER:** upper Cholesky factor of a
    symmetric R8MAT.
-   **R8MAT\_CHOLESKY\_INVERSE** computes the inverse of a symmetric
    matrix.
-   **R8MAT\_CHOLESKY\_SOLVE** solves a Cholesky factored linear system
    A \* x = b.
-   **R8MAT\_CHOLESKY\_SOLVE\_UPPER** solves Cholesky factored linear
    system A \* x = b.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_COPY\_NEW** copies one R8MAT to a "new" R8MAT.
-   **R8MAT\_COVARIANCE** computes the sample covariance of a set of
    vector data.
-   **R8MAT\_DET** computes the determinant of an R8MAT.
-   **R8MAT\_DET\_2D** computes the determinant of a 2 by 2 R8MAT.
-   **R8MAT\_DET\_3D** computes the determinant of a 3 by 3 R8MAT.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **R8MAT\_DET\_5D** computes the determinant of a 5 by 5 R8MAT.
-   **R8MAT\_DIAG\_ADD\_SCALAR** adds a scalar to the diagonal of an
    R8MAT.
-   **R8MAT\_DIAG\_ADD\_VECTOR** adds a vector to the diagonal of an
    R8MAT.
-   **R8MAT\_DIAG\_GET\_VECTOR** gets the value of the diagonal of an
    R8MAT.
-   **R8MAT\_DIAG\_GET\_VECTOR\_NEW** gets the value of the diagonal of
    an R8MAT.
-   **R8MAT\_DIAG\_SET\_SCALAR** sets the diagonal of an R8MAT to a
    scalar value.
-   **R8MAT\_DIAG\_SET\_VECTOR** sets the diagonal of an R8MAT to a
    vector.
-   **R8MAT\_DIAGONAL\_NEW** returns a diagonal matrix.
-   **R8MAT\_DIFF\_FROBENIUS** returns the Frobenius norm of the
    difference of R8MAT's.
-   **R8MAT\_EXPAND\_LINEAR** linearly interpolates new data into an
    R8MAT.
-   **R8MAT\_EXPAND\_LINEAR2** expands an R8MAT by linear interpolation.
-   **R8MAT\_FLIP\_COLS\_NEW** makes a new copy of an R8MAT with
    reversed column order.
-   **R8MAT\_FLIP\_ROWS\_NEW** makes a new copy of an R8MAT with
    reversed row order.
-   **R8MAT\_FS** factors and solves a system with one right hand side.
-   **R8MAT\_FS\_NEW** factors and solves a system with one right hand
    side.
-   **R8MAT\_FSS** factors and solves a system with multiple right hand
    sides.
-   **R8MAT\_FSS\_NEW** factors and solves a system with multiple right
    hand sides.
-   **R8MAT\_GIVENS\_POST** computes the Givens postmultiplier rotation
    matrix.
-   **R8MAT\_GIVENS\_PRE** computes the Givens premultiplier rotation
    matrix.
-   **R8MAT\_HESS** approximates a Hessian matrix via finite
    differences.
-   **R8MAT\_HOUSE\_AXH** computes A\*H where H is a compact Householder
    matrix.
-   **R8MAT\_HOUSE\_AXH\_NEW** computes A\*H where H is a compact
    Householder matrix.
-   **R8MAT\_HOUSE\_FORM** constructs a Householder matrix from its
    compact form.
-   **R8MAT\_HOUSE\_HXA** computes H\*A where H is a compact Householder
    matrix.
-   **R8MAT\_HOUSE\_POST** computes a Householder post-multiplier
    matrix.
-   **R8MAT\_HOUSE\_PRE** computes a Householder pre-multiplier matrix.
-   **R8MAT\_IDENTITY** sets the square matrix A to the identity.
-   **R8MAT\_IDENTITY\_NEW** returns an identity matrix.
-   **R8MAT\_IN\_01** is TRUE if the entries of an R8MAT are in the
    range \[0,1\].
-   **R8MAT\_INDICATOR\_NEW** sets up an "indicator" R8MAT.
-   **R8MAT\_INSIGNIFICANT** determines if an R8MAT is insignificant.
-   **R8MAT\_INVERSE\_2D** inverts a 2 by 2 matrix using Cramer's rule.
-   **R8MAT\_INVERSE\_3D** inverts a 3 by 3 matrix using Cramer's rule.
-   **R8MAT\_INVERSE\_4D** inverts a 4 by 4 matrix using Cramer's rule.
-   **R8MAT\_IS\_IDENTITY** determines if an R8MAT is the identity.
-   **R8MAT\_IS\_SYMMETRIC** checks an R8MAT for symmetry.
-   **R8MAT\_JAC** estimates a dense jacobian matrix of the function FX.
-   **R8MAT\_KRONECKER** computes the Kronecker product of two R8MAT's.
-   **R8MAT\_L\_INVERSE** inverts a lower triangular R8MAT.
-   **R8MAT\_L\_PRINT** prints a lower triangular R8MAT.
-   **R8MAT\_L\_SOLVE** solves a lower triangular linear system.
-   **R8MAT\_L1\_INVERSE** inverts a unit lower triangular R8MAT.
-   **R8MAT\_LT\_SOLVE** solves a transposed lower triangular linear
    system.
-   **R8MAT\_LU** computes the LU factorization of a rectangular R8MAT.
-   **R8MAT\_MAX** returns the maximum entry of an R8MAT.
-   **R8MAT\_MAX\_INDEX** returns the location of the maximum entry of
    an R8MAT.
-   **R8MAT\_MAXCOL\_MINROW** gets the maximum column minimum row of an
    M by N matrix.
-   **R8MAT\_MAXROW\_MINCOL** gets the maximum row minimum column of an
    M by N matrix.
-   **R8MAT\_MEAN** returns the mean of an R8MAT.
-   **R8MAT\_MIN** returns the minimum entry of an R8MAT.
-   **R8MAT\_MIN\_INDEX** returns the location of the minimum entry of
    an R8MAT.
-   **R8MAT\_MINCOL\_MAXROW** gets the minimum column maximum row of an
    M by N matrix.
-   **R8MAT\_MINROW\_MAXCOL** gets the minimum row maximum column of an
    M by N matrix.
-   **R8MAT\_MINVM** computes inverse(A) \* B for R8MAT's.
-   **R8MAT\_MINVM\_NEW** returns inverse(A) \* B for R8MAT's.
-   **R8MAT\_MM** multiplies two matrices.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_MMT\_NEW** computes C = A \* B'.
-   **R8MAT\_MTM\_NEW** computes C = A' \* B.
-   **R8MAT\_MTV** multiplies a transposed matrix times a vector.
-   **R8MAT\_MTV\_NEW** multiplies a transposed matrix times a vector.
-   **R8MAT\_MV** multiplies a matrix times a vector.
-   **R8MAT\_MV\_NEW** multiplies a matrix times a vector.
-   **R8MAT\_NINT** rounds the entries of an R8MAT.
-   **R8MAT\_NONZEROS** returns the number of nonzeros in an R8MAT.
-   **R8MAT\_NORM\_EIS** returns the EISPACK norm of an R8MAT.
-   **R8MAT\_NORM\_FRO** returns the Frobenius norm of an R8MAT.
-   **R8MAT\_NORM\_FRO\_AFFINE** returns the Frobenius norm of an R8MAT
    difference.
-   **R8MAT\_NORM\_L1** returns the matrix L1 norm of an R8MAT.
-   **R8MAT\_NORM\_L2** returns the matrix L2 norm of an R8MAT.
-   **R8MAT\_NORM\_LI** returns the matrix L-oo norm of an R8MAT.
-   **R8MAT\_NORMAL\_01\_NEW** returns a unit pseudonormal R8MAT.
-   **R8MAT\_NULLSPACE** computes the nullspace of a matrix.
-   **R8MAT\_NULLSPACE\_SIZE** computes the size of the nullspace of a
    matrix.
-   **R8MAT\_ORTH\_UNIFORM\_NEW** returns a random orthogonal matrix.
-   **R8MAT\_PLOT** "plots" an R8MAT.
-   **R8MAT\_PLOT\_SYMBOL** returns a symbol for entries of an R8MAT.
-   **R8MAT\_POLY\_CHAR** computes the characteristic polynomial of an
    R8MAT.
-   **R8MAT\_POWER** computes a nonnegative power of an R8MAT.
-   **R8MAT\_POWER\_METHOD** applies the power method to a matrix.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_REF** computes the row echelon form of a matrix.
-   **R8MAT\_RMS** returns the RMS norm of an R8MAT.
-   **R8MAT\_ROW\_COPY** copies a vector into a row of an R8MAT.
-   **R8MAT\_RREF** computes the reduced row echelon form of a matrix.
-   **R8MAT\_SCALE** multiplies an R8MAT by a scalar.
-   **R8MAT\_SIGNIFICANT** determines if an R8MAT is significant
    compared to another.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_SOLVE\_2D** solves a 2 by 2 linear system using Cramer's
    rule.
-   **R8MAT\_SOLVE\_3D** solves a 3 by 3 linear system using Cramer's
    rule.
-   **R8MAT\_SOLVE2** computes the solution of an N by N linear system.
-   **R8MAT\_SUB\_NEW** computes C = A - B.
-   **R8MAT\_SUM** returns the sum of an R8MAT.
-   **R8MAT\_SYMM\_EIGEN** returns a symmetric matrix with given
    eigensystem.
-   **R8MAT\_SYMM\_JACOBI** applies Jacobi eigenvalue iteration to a
    symmetric matrix.
-   **R8MAT\_TO\_R8CMAT\_NEW** copies data from an R8MAT to an R8CMAT.
-   **R8MAT\_TO\_R8PLU** factors a general matrix.
-   **R8MAT\_TO\_R8RMAT** copies data from an R8MAT to an R8RMAT.
-   **R8MAT\_TRACE** computes the trace of an R8MAT.
-   **R8MAT\_TRANSPOSE\_IN\_PLACE** transposes a square R8MAT in place.
-   **R8MAT\_TRANSPOSE\_NEW** returns the transpose of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_U\_INVERSE** inverts an upper triangular R8MAT.
-   **R8MAT\_U\_SOLVE** solves an upper triangular linear system.
-   **R8MAT\_U1\_INVERSE** inverts a unit upper triangular R8MAT.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_AB** returns a scaled pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_AB\_NEW** returns a new scaled pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_ABVEC** returns a scaled pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_ABVEC\_NEW** returns a new scaled pseudorandom
    R8MAT.
-   **R8MAT\_UT\_SOLVE** solves a transposed upper triangular linear
    system.
-   **R8MAT\_VAND2** returns the N by N row Vandermonde matrix A.
-   **R8MAT\_VTMV** multiplies computes the scalar x' \* A \* y.
-   **R8MAT\_ZEROS** zeroes an R8MAT.
-   **R8MAT\_ZEROS\_NEW** returns a new zeroed R8MAT.
-   **R8PLU\_DET** computes the determinant of a real PLU matrix.
-   **R8PLU\_INVERSE** computes the inverse of a real PLU matrix.
-   **R8PLU\_MUL** computes A \* x using the PLU factors of A.
-   **R8PLU\_SOL** solves a linear system A\*x=b from the PLU factors.
-   **R8PLU\_TO\_R8MAT** recovers the matrix A that was factored by
    R8MAT\_TO\_R8PLU.
-   **R8POLY\_DEGREE** returns the degree of a polynomial.
-   **R8POLY\_DERIV** returns the derivative of a polynomial.
-   **R8POLY\_LAGRANGE\_0** evaluates the Lagrange factor at a point.
-   **R8POLY\_LAGRANGE\_1** evaluates the first derivative of the
    Lagrange factor.
-   **R8POLY\_LAGRANGE\_2** evaluates the second derivative of the
    Lagrange factor.
-   **R8POLY\_LAGRANGE\_COEF** returns the coefficients of a Lagrange
    polynomial.
-   **R8POLY\_LAGRANGE\_FACTOR** evaluates the polynomial Lagrange
    factor at a point.
-   **R8POLY\_LAGRANGE\_VAL** evaluates the IPOL-th Lagrange polynomial.
-   **R8POLY\_ORDER** returns the order of a polynomial.
-   **R8POLY\_PRINT** prints out a polynomial.
-   **R8POLY\_SHIFT** adjusts the coefficients of a polynomial for a new
    argument.
-   **R8POLY\_VALUE\_HORNER** evaluates a polynomial using Horner's
    method.
-   **R8POLY\_VALUES\_HORNER** evaluates a polynomial using Horner's
    method.
-   **R8POLY\_VALUE\_2D** evaluates a polynomial in 2 variables, X
    and Y.
-   **R8POLY2\_EX** finds the extremal point of a parabola determined by
    three points.
-   **R8POLY2\_EX2** finds the extremal point of a parabola determined
    by three points.
-   **R8POLY2\_RROOT** returns the real parts of the roots of a
    quadratic polynomial.
-   **R8POLY2\_VAL** evaluates a parabola defined by three data values.
-   **R8POLY2\_VAL2** evaluates a parabolic function through 3 points in
    a table.
-   **R8PP\_DELETE** frees the memory set aside by R8PP\_NEW.
-   **R8PP\_NEW** allocates a new R8PP.
-   **R8R8\_COMPARE** compares two R8R8's.
-   **R8R8\_PRINT** prints an R8R8.
-   **R8R8R8\_COMPARE** compares two R8R8R8's.
-   **R8R8R8VEC\_INDEX\_INSERT\_UNIQUE** inserts a unique R8R8R8 value
    in an indexed sorted list.
-   **R8R8R8VEC\_INDEX\_SEARCH** searches for an R8R8R8 value in an
    indexed sorted list.
-   **R8R8VEC\_INDEX\_INSERT\_UNIQUE** inserts a unique R8R8 value in an
    indexed sorted list.
-   **R8R8VEC\_INDEX\_SEARCH** searches for an R8R8 value in an indexed
    sorted list.
-   **R8RMAT\_COPY\_NEW** makes a new copy of an R8RMAT .
-   **R8RMAT\_DELETE** frees memory associated with an R8RMAT.
-   **R8RMAT\_FS\_NEW** factors and solves an R8RMAT system with one
    right hand side.
-   **R8RMAT\_NEW** allocates a new R8RMAT.
-   **R8RMAT\_PRINT** prints an R8RMAT.
-   **R8RMAT\_PRINT\_SOME** prints some of an R8RMAT.
-   **R8RMAT\_TO\_R8MAT** copies data from an R8RMAT to an R8MAT.
-   **R8RMAT\_ZEROS** allocates and zeroes a new R8RMAT.
-   **R8ROW\_COMPARE** compares two rows in an R8ROW.
-   **R8ROW\_MAX** returns the row maximums of an R8ROW.
-   **R8ROW\_MEAN** returns the row means of an R8ROW.
-   **R8ROW\_MIN** returns the row minimums of an R8ROW.
-   **R8ROW\_PRINT** prints an R8ROW.
-   **R8ROW\_PRINT\_SOME** prints some of an R8ROW.
-   **R8ROW\_REVERSE** reverses the order of the rows of an R8MAT.
-   **R8ROW\_RUNNING\_AVERAGE** computes the running averages of an
    R8ROW.
-   **R8ROW\_RUNNING\_SUM** computes the running sum of an R8ROW.
-   **R8ROW\_SORT\_HEAP\_A** ascending heapsorts an R8ROW.
-   **R8ROW\_SUM** returns the sums of the rows of an R8ROW.
-   **R8ROW\_SWAP** swaps two rows of an R8ROW.
-   **R8ROW\_TO\_R8VEC** converts an R8ROW into an R8VEC.
-   **R8ROW\_UNIFORM\_AB\_NEW** returns a new scaled pseudorandom R8ROW.
-   **R8ROW\_VARIANCE** returns the variances of an R8ROW.
-   **R8SLMAT\_PRINT** prints a strict lower triangular R8MAT.
-   **R8VEC\_01\_TO\_AB** shifts and rescales data to lie within given
    bounds.
-   **R8VEC\_AB\_TO\_01** shifts and rescales data to lie within
    \[0,1\].
-   **R8VEC\_AB\_TO\_CD** shifts and rescales data to lie within a given
    pair of bounds.
-   **R8VEC\_ADD** adds one R8VEC to another.
-   **R8VEC\_ALL\_NONPOSITIVE:** ( all ( A &lt;= 0 ) ) for R8VEC's.
-   **R8VEC\_AMAX** returns the maximum absolute value in an R8VEC.
-   **R8VEC\_AMAX\_INDEX** returns the index of the maximum absolute
    value in an R8VEC.
-   **R8VEC\_AMIN** returns the minimum absolute value in an R8VEC.
-   **R8VEC\_AMIN\_INDEX** returns the index of the minimum absolute
    value in an R8VEC.
-   **R8VEC\_ANY\_NEGATIVE:** ( any ( A &lt; 0 ) ) for R8VEC's.
-   **R8VEC\_ANY\_NONZERO:** ( any A nonzero ) for R8VEC's.
-   **R8VEC\_ANY\_NORMAL** returns some normal vector to V1.
-   **R8VEC\_ASCENDS** determines if an R8VEC is (weakly) ascending.
-   **R8VEC\_ASCENDS\_STRICTLY** determines if an R8VEC is strictly
    ascending.
-   **R8VEC\_ASUM** sums the absolute values of the entries of an R8VEC.
-   **R8VEC\_BIN** computes bins based on a given R8VEC.
-   **R8VEC\_BRACKET** searches a sorted array for successive brackets
    of a value.
-   **R8VEC\_BRACKET2** searches a sorted array for successive brackets
    of a value.
-   **R8VEC\_BRACKET3** finds the interval containing or nearest a given
    value.
-   **R8VEC\_BRACKET4** finds the interval containing or nearest a given
    value.
-   **R8VEC\_BRACKET5** brackets data between successive entries of a
    sorted R8VEC.
-   **R8VEC\_BRACKET6** brackets data between successive entries of a
    sorted R8VEC.
-   **R8VEC\_CHEBYSPACE\_NEW** creates a vector of Chebyshev spaced
    values in \[A,B\].
-   **R8VEC\_CHEBY1SPACE\_NEW** creates Type 1 Chebyshev spaced values
    in \[A,B\].
-   **R8VEC\_CHEBY2SPACE\_NEW** creates Type 2 Chebyshev spaced values
    in \[A,B\].
-   **R8VEC\_CIRCULAR\_VARIANCE** returns the circular variance of an
    R8VEC.
-   **R8VEC\_COMPARE** compares two R8VEC's.
-   **R8VEC\_CONCATENATE** concatenates two R8VEC's.
-   **R8VEC\_CONCATENATE\_NEW** concatenates two R8VEC's.
-   **R8VEC\_CONVOLUTION** returns the convolution of two R8VEC's.
-   **R8VEC\_CONVOLUTION\_CIRC** returns the discrete circular
    convolution of two R8VEC's.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_COPY\_NEW** copies an R8VEC to a new R8VEC.
-   **R8VEC\_CORRELATION** returns the correlation of two R8VEC's.
-   **R8VEC\_COVAR** computes the covariance of two vectors.
-   **R8VEC\_CROSS\_PRODUCT\_2D** finds the cross product of a pair of
    R8VEC's in 2D.
-   **R8VEC\_CROSS\_PRODUCT\_AFFINE\_2D** finds the affine cross product
    in 2D.
-   **R8VEC\_CROSS\_PRODUCT\_3D** computes the cross product of two
    R8VEC's in 3D.
-   **R8VEC\_CROSS\_PRODUCT\_AFFINE\_3D** computes the affine cross
    product in 3D.
-   **R8VEC\_CUM\_NEW** computes the cumulutive sums of an R8VEC.
-   **R8VEC\_CUM0\_NEW** computes the cumulutive sums of an R8VEC.
-   **R8VEC\_DIF** computes coefficients for estimating the N-th
    derivative.
-   **R8VEC\_DIFF\_NORM** returns the L2 norm of the difference of
    R8VEC's.
-   **R8VEC\_DIFF\_NORM\_L1** returns the L1 norm of the difference of
    R8VEC's.
-   **R8VEC\_DIFF\_NORM\_L2** returns the L2 norm of the difference of
    R8VEC's.
-   **R8VEC\_DIFF\_NORM\_LI** returns the L-oo norm of the difference of
    R8VEC's.
-   **R8VEC\_DIFF\_NORM\_SQUARED:** square of the L2 norm of the
    difference of R8VEC's.
-   **R8VEC\_DIRECT\_PRODUCT** creates a direct product of R8VEC's.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **R8VEC\_DISTANCE** returns the Euclidean distance between two
    R8VEC's.
-   **R8VEC\_DISTINCT** is true if the entries in an R8VEC are distinct.
-   **R8VEC\_DIVIDE** divides an R8VEC by a nonzero scalar.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_DOT\_PRODUCT\_AFFINE** computes the affine dot product.
-   **R8VEC\_ENTROPY** computes the entropy of an R8VEC.
-   **R8VEC\_EQ** is true if every pair of entries in two R8VEC's is
    equal.
-   **R8VEC\_EVEN** returns an R8VEC of values evenly spaced between ALO
    and AHI.
-   **R8VEC\_EVEN\_NEW** returns an R8VEC of values evenly spaced
    between ALO and AHI.
-   **R8VEC\_EVEN\_SELECT** returns the I-th of N evenly spaced values
    in \[ XLO, XHI \].
-   **R8VEC\_EVEN2** linearly interpolates new numbers into an R8VECa.
-   **R8VEC\_EVEN2\_SELECT** returns the I-th of N evenly spaced
    midpoint values.
-   **R8VEC\_EVEN3** evenly interpolates new data into an R8VEC.
-   **R8VEC\_EXPAND\_LINEAR** linearly interpolates new data into an
    R8VEC.
-   **R8VEC\_EXPAND\_LINEAR2** linearly interpolates new data into an
    R8VEC.
-   **R8VEC\_FIRST\_INDEX** indexes the first occurrence of values in an
    R8VEC.
-   **R8VEC\_FRAC** searches for the K-th smallest entry in an R8VEC.
-   **R8VEC\_FRACTION** returns the fraction parts of an R8VEC.
-   **R8VEC\_GT** == ( A1 &gt; A2 ) for two R8VEC's.
-   **R8VEC\_HEAP\_A** reorders an R8VEC into a ascending heap.
-   **R8VEC\_HEAP\_D** reorders an R8VEC into a descending heap.
-   **R8VEC\_HISTOGRAM** histograms an R8VEC.
-   **R8VEC\_HOUSE\_COLUMN** defines a Householder premultiplier that
    "packs" a column.
-   **R8VEC\_I4VEC\_DOT\_PRODUCT** computes the dot product of an R8VEC
    and an I4VEC.
-   **R8VEC\_IN\_01** is TRUE if the entries of an R8VEC are in the
    range \[0,1\].
-   **R8VEC\_IN\_AB** is TRUE if the entries of an R8VEC are in the
    range \[A,B\].
-   **R8VEC\_INDEX\_DELETE\_ALL** deletes all occurrences of a value
    from an indexed sorted list.
-   **R8VEC\_INDEX\_DELETE\_DUPES** deletes duplicates from an indexed
    sorted list.
-   **R8VEC\_INDEX\_DELETE\_ONE** deletes one copy of a value from an
    indexed sorted list.
-   **R8VEC\_INDEX\_INSERT** inserts a value in an indexed sorted list.
-   **R8VEC\_INDEX\_INSERT\_UNIQUE** inserts a unique value in an
    indexed sorted list.
-   **R8VEC\_INDEX\_ORDER** sorts an R8VEC using an index vector.
-   **R8VEC\_INDEX\_SEARCH** searches for a value in an indexed sorted
    R8VEC.
-   **R8VEC\_INDEX\_SORT\_UNIQUE** creates a sort index for an R8VEC.
-   **R8VEC\_INDEX\_SORTED\_RANGE:** search index sorted vector for
    elements in a range.
-   **R8VEC\_INDEXED\_HEAP\_D** creates a descending heap from an
    indexed R8VEC.
-   **R8VEC\_INDEXED\_HEAP\_D\_EXTRACT:** extract from heap descending
    indexed R8VEC.
-   **R8VEC\_INDEXED\_HEAP\_D\_INSERT:** insert value into heap
    descending indexed R8VEC.
-   **R8VEC\_INDEXED\_HEAP\_D\_MAX:** maximum value in heap descending
    indexed R8VEC.
-   **R8VEC\_INDICATOR0** sets an R8VEC to the indicator vector
    (0,1,2,...)
-   **R8VEC\_INDICATOR0\_NEW** sets an R8VEC to the indicator vector
    {0,1,2,...}.
-   **R8VEC\_INDICATOR1** sets an R8VEC to the indicator vector
    (1,2,3,...)
-   **R8VEC\_INDICATOR1\_NEW** sets an R8VEC to the indicator vector
    {1,2,3,...}.
-   **R8VEC\_INSERT** inserts a value into an R8VEC.
-   **R8VEC\_INSIGNIFICANT** determines if an R8VEC is insignificant.
-   **R8VEC\_IS\_INT** is TRUE if an R8VEC is integral.
-   **R8VEC\_IS\_NONNEGATIVE** is true if all entries in an R8VEC are
    nonnegative.
-   **R8VEC\_IS\_ZERO** is true if the entries in an R8VEC are all zero.
-   **R8VEC\_LEGENDRE\_NEW** creates a vector of Chebyshev spaced
    values.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_LINSPACE2\_NEW** creates a vector of linearly spaced
    values.
-   **R8VEC\_LT** == ( A1 &lt; A2 ) for two R8VEC's.
-   **R8VEC\_MASK\_PRINT** prints a masked R8VEC.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MAX\_ABS\_INDEX** returns the index of the maximum absolute
    value in an R8VEC.
-   **R8VEC\_MAX\_INDEX** returns the index of the maximum value in an
    R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MEAN\_GEOMETRIC** returns the geometric mean of an R8VEC.
-   **R8VEC\_MEDIAN** returns the median of an unsorted R8VEC.
-   **R8VEC\_MESH\_2D** creates a 2D mesh from X and Y vectors.
-   **R8VEC\_MIDSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_MIN\_INDEX** returns the index of the minimum value in an
    R8VEC.
-   **R8VEC\_MIN\_POS** returns the minimum positive value of an R8VEC.
-   **R8VEC\_MIRROR\_NEXT** steps through all sign variations of an
    R8VEC.
-   **R8VEC\_NEGATIVE\_STRICT:** all entries of R8VEC are strictly
    negative.
-   **R8VEC\_NINT** rounds the entries of an R8VEC.
-   **R8VEC\_NINT\_NEW** rounds the entries of an R8VEC.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_NORM\_AFFINE** returns the affine L2 norm of an R8VEC.
-   **R8VEC\_NORM\_L0** returns the l0 "norm" of an R8VEC.
-   **R8VEC\_NORM\_L1** returns the L1 norm of an R8VEC.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **R8VEC\_NORM\_LI** returns the L-oo norm of an R8VEC.
-   **R8VEC\_NORM\_LP** returns the LP norm of an R8VEC.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_NORMAL\_AB\_NEW** returns a scaled pseudonormal R8VEC.
-   **R8VEC\_NORMALIZE** normalizes an R8VEC.
-   **R8VEC\_NORMALIZE\_L1** normalizes an R8VEC to have unit sum.
-   **R8VEC\_NORMSQ** returns the squared L2 norm of an R8VEC.
-   **R8VEC\_NORMSQ\_AFFINE** returns the squared affine L2 norm of an
    R8VEC.
-   **R8VEC\_ONES\_NEW** creates a vector of 1's.
-   **R8VEC\_ORDER\_TYPE** determines if an R8VEC is (non)strictly
    ascending/descending.
-   **R8VEC\_PART\_QUICK\_A** reorders an R8VEC as part of a quick sort.
-   **R8VEC\_PERMUTE** applies a 0-based permutation to an R8VEC.
-   **R8VEC\_PERMUTE\_CYCLIC** performs a cyclic permutation of an
    R8VEC.
-   **R8VEC\_PERMUTE\_UNIFORM** randomly permutes an R8VEC.
-   **R8VEC\_POLARIZE** decomposes an R8VEC into normal and parallel
    components.
-   **R8VEC\_POSITIVE\_STRICT:** all entries of R8VEC are strictly
    positive.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_PRINT\_16** prints an R8VEC to 16 decimal places.
-   **R8VEC\_PRINT\_PART** prints "part" of an R8VEC.
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **R8VEC\_PRODUCT** returns the product of the entries of an R8VEC.
-   **R8VEC\_RANGE** finds the range of Y's within a restricted X range.
-   **R8VEC\_RANGE\_2** updates a range to include a new R8VEC
-   **R8VEC\_REVERSE** reverses the elements of an R8VEC.
-   **R8VEC\_RMS** returns the RMS norm of an R8VEC.
-   **R8VEC\_ROTATE** "rotates" the entries of an R8VEC in place.
-   **R8VEC\_RUNNING\_AVERAGE** computes the running average of an
    R8VEC.
-   **R8VEC\_RUNNING\_SIGN3** computes the running threeway sign of an
    R8VEC.
-   **R8VEC\_RUNNING\_SUM** computes the running sum of an R8VEC.
-   **R8VEC\_SCALAR\_TRIPLE\_PRODUCT** computes the scalar triple
    product.
-   **R8VEC\_SCALE** multiplies an R8VEC by a scale factor.
-   **R8VEC\_SEARCH\_BINARY\_A** searches an ascending sorted R8VEC.
-   **R8VEC\_SHIFT** performs a shift on an R8VEC.
-   **R8VEC\_SHIFT\_CIRCULAR** performs a circular shift on an R8VEC.
-   **R8VEC\_SORT\_BUBBLE\_A** ascending sorts an R8VEC using bubble
    sort.
-   **R8VEC\_SORT\_BUBBLE\_D** descending sorts an R8VEC using bubble
    sort.
-   **R8VEC\_SORT\_HEAP\_A** ascending sorts an R8VEC using heap sort.
-   **R8VEC\_SORT\_HEAP\_D** descending sorts an R8VEC using heap sort.
-   **R8VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R8VEC
-   **R8VEC\_SORT\_HEAP\_INDEX\_A\_NEW:** indexed heap ascending sort of
    an R8VEC
-   **R8VEC\_SORT\_HEAP\_INDEX\_D\_NEW:** indexed heap descending sort
    of an R8VEC.
-   **R8VEC\_SORT\_HEAP\_INDEX\_D\_NEW:** indexed heap descending sort
    of an R8VEC.
-   **R8VEC\_SORT\_HEAP\_MASK\_A:** indexed heap ascending sort of a
    masked R8VEC.
-   **R8VEC\_SORT\_INSERT\_A** ascending sorts an R8VEC using an
    insertion sort.
-   **R8VEC\_SORT\_INSERT\_INDEX\_A** ascending index sorts an R8VEC
    using insertion.
-   **R8VEC\_SORT\_QUICK\_A** ascending sorts an R8VEC using quick sort.
-   **R8VEC\_SORT\_SHELL\_A** ascending sorts an R8VEC using Shell's
    sort.
-   **R8VEC\_SORTED\_MERGE\_A** merges two ascending sorted R8VEC's.
-   **R8VEC\_SORTED\_NEAREST** returns the nearest element in a sorted
    R8VEC.
-   **R8VEC\_SORTED\_RANGE** searches a sorted vector for elements in a
    range.
-   **R8VEC\_SORTED\_SPLIT** "splits" a sorted R8VEC, given a splitting
    value.
-   **R8VEC\_SORTED\_UNDEX** returns unique sorted indexes for a sorted
    R8VEC.
-   **R8VEC\_SORTED\_UNIQUE** finds the unique elements in a sorted
    R8VEC.
-   **R8VEC\_SORTED\_UNIQUE\_COUNT** counts unique elements in a sorted
    R8VEC.
-   **R8VEC\_SORTED\_UNIQUE\_HIST** histograms unique elements of a
    sorted R8VEC.
-   **R8VEC\_SPLIT** "splits" an unsorted R8VEC based on a splitting
    value.
-   **R8VEC\_STD** returns the standard deviation of an R8VEC.
-   **R8VEC\_STEP** evaluates a unit step function.
-   **R8VEC\_STUTTER** makes a "stuttering" copy of an R8VEC.
-   **R8VEC\_STUTTER\_NEW** makes a "stuttering" copy of an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_SWAP** swaps the entries of two R8VEC's.
-   **R8VEC\_TRANSPOSE\_PRINT** prints an R8VEC "transposed".
-   **R8VEC\_UNDEX** returns unique sorted indexes for an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_AB** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_ABVEC** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_ABVEC\_NEW** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_UNIT\_NEW** generates a random unit vector.
-   **R8VEC\_UNIQUE\_COUNT** counts the unique elements in an unsorted
    R8VEC.
-   **R8VEC\_UNIQUE\_INDEX** indexes the unique occurrence of values in
    an R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **R8VEC\_VECTOR\_TRIPLE\_PRODUCT** computes the vector triple
    product.
-   **R8VEC\_WRITE** writes an R8VEC to a file.
-   **R8VEC\_ZEROS** zeroes an R8VEC.
-   **R8VEC\_ZEROS\_NEW** creates and zeroes an R8VEC.
-   **R8VEC2\_COMPARE** compares two elements of an R8VEC2.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **R8VEC2\_PRINT\_SOME** prints "some" of an R8VEC2.
-   **R8VEC2\_SORT\_A** ascending sorts an R8VEC2.
-   **R8VEC2\_SORT\_D** descending sorts an R8VEC2.
-   **R8VEC2\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R8VEC2.
-   **R8VEC2\_SORTED\_UNIQUE** keeps the unique elements in an R8VEC2.
-   **R8VEC2\_SORTED\_UNIQUE\_INDEX** indexes unique elements in a
    sorted R8VEC2.
-   **R8VEC2\_SUM\_MAX\_INDEX** returns the index of the maximum sum of
    two R8VEC's.
-   **R8VEC3\_PRINT** prints a triple of real vectors.
-   **ROOTS\_TO\_R8POLY** converts polynomial roots to polynomial
    coefficients.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 26 February 2016.*
