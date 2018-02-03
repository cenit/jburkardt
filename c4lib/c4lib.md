C4LIB\
A Single Precision Complex Arithmetic Utility Library {#c4lib-a-single-precision-complex-arithmetic-utility-library align="center"}
=====================================================

------------------------------------------------------------------------

**C4LIB** is a C++ library which defines some elementary operations for
"C4" or "single precision complex" arithmetic.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**C4LIB** is available in [a C version](../../c_src/c4lib/c4lib.html)
and [a C++ version](../../cpp_src/c4lib/c4lib.html) and [a FORTRAN77
version](../../f77_src/c4lib/c4lib.html) and [a FORTRAN90
version](../../f_src/c4lib/c4lib.html) and [a MATLAB
version](../../m_src/c4lib/c4lib.html) and [a Python
version](../../py_src/c4lib/c4lib.html).

### Related Programs: {#related-programs align="center"}

[C4\_COMPLEX\_LIB](../../cpp_src/c4_complex_lib/c4_complex_lib.html), a
C++ library which defines a class called c4\_complex for complex numbers
with single precision components.

[C8LIB](../../cpp_src/c8lib/c8lib.html), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables;

[COMPLEX\_NUMBERS](../../cpp_src/complex_numbers/complex_numbers.html),
a C++ program which demonstrates some simple features involved in the
use of complex numbers in C programming.

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

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines, using "R8" or "double precision real" arithmetic.

### Source Code: {#source-code align="center"}

-   [c4lib.cpp](c4lib.cpp), the source code;
-   [c4lib.hpp](c4lib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [c4lib\_prb.cpp](c4lib_prb.cpp), the calling program;
-   [c4lib\_prb\_output.txt](c4lib_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C4\_ABS** returns the absolute value of a C4.
-   **C4\_ACOS** evaluates the inverse cosine of a C4.
-   **C4\_ACOSH** evaluates the inverse hyperbolic cosine of a C4.
-   **C4\_ADD** adds two C4's.
-   **C4\_ARG** returns the argument of a C4.
-   **C4\_ASIN** evaluates the inverse sine of a C4.
-   **C4\_ASINH** evaluates the inverse hyperbolic sine of a C4.
-   **C4\_ATAN** evaluates the inverse tangent of a C4.
-   **C4\_ATANH** evaluates the inverse hyperbolic tangent of a C4.
-   **C4\_CONJ** conjugates a C4.
-   **C4\_COPY** copies a C4.
-   **C4\_COS** evaluates the cosine of a C4.
-   **C4\_COSH** evaluates the hyperbolic cosine of a C4.
-   **C4\_CUBE\_ROOT** returns the principal cube root of a C4.
-   **C4\_DIV** divides two C4's.
-   **C4\_DIV\_R4** divides a C4 by an R4.
-   **C4\_EXP** exponentiates a C4.
-   **C4\_I** returns the value of the imaginary unit, i as a C4.
-   **C4\_IMAG** returns the imaginary part of a C4.
-   **C4\_INV** inverts a C4.
-   **C4\_LE\_L1** := X &lt;= Y for C4 values, and the L1 norm.
-   **C4\_LE\_L2** := X &lt;= Y for C4 values, and the L2 norm.
-   **C4\_LE\_LI** := X &lt;= Y for C4 values, and the L-oo norm.
-   **C4\_LOG** evaluates the logarithm of a C4.
-   **C4\_MAG** returns the magnitude of a C4.
-   **C4\_MUL** multiplies two C4's.
-   **C4\_NEG** negates a C4.
-   **C4\_NINT** returns the nearest complex integer of a C4.
-   **C4\_NORM\_L1** evaluates the L1 norm of a C4.
-   **C4\_NORM\_L2** evaluates the L2 norm of a C4.
-   **C4\_NORM\_LI** evaluates the L-oo norm of a C4.
-   **C4\_NORMAL\_01** returns a unit pseudonormal C4.
-   **C4\_ONE** returns the value of complex 1.
-   **C4\_PRINT** prints a C4.
-   **C4\_REAL** returns the real part of a C4.
-   **C4\_SIN** evaluates the sine of a C4.
-   **C4\_SINH** evaluates the hyperbolic sine of a C4.
-   **C4\_SQRT** returns the principal square root of a C4.
-   **C4\_SUB** subtracts two C4's.
-   **C4\_SWAP** swaps two C4's.
-   **C4\_TAN** evaluates the tangent of a C4.
-   **C4\_TANH** evaluates the hyperbolic tangent of a C4.
-   **C4\_TO\_CARTESIAN** converts a C4 to Cartesian form.
-   **C4\_TO\_POLAR** converts a C4 to polar form.
-   **C4\_UNIFORM\_01** returns a unit pseudorandom C4.
-   **C4\_ZERO** returns the value of 0 as a C4.
-   **C4MAT\_ADD** combines two C4MAT's using complex scalar factors.
-   **C4MAT\_ADD\_R4** combines two C4MAT's using real scalar factors.
-   **C4MAT\_COPY** copies one C4MAT to another.
-   **C4MAT\_COPY\_NEW** copies one C4MAT to a "new" C4MAT.
-   **C4MAT\_FSS** factors and solves a system with multiple right hand
    sides.
-   **C4MAT\_FSS\_NEW** factors and solves a system with multiple right
    hand sides.
-   **C4MAT\_IDENTITY\_NEW** sets a C4MAT to the identity.
-   **C4MAT\_INDICATOR\_NEW** returns the C4MAT indicator matrix.
-   **C4MAT\_MINVM** returns inverse(A) \* B for C4MAT's.
-   **C4MAT\_MINVM\_NEW** returns inverse(A) \* B for C4MAT's.
-   **C4MAT\_MM** multiplies two matrices.
-   **C4MAT\_MM\_NEW** multiplies two matrices.
-   **C4MAT\_NINT** rounds the entries of a C4MAT.
-   **C4MAT\_NORM\_FRO** returns the Frobenius norm of a C4MAT.
-   **C4MAT\_NORM\_L1** returns the matrix L1 norm of a C4MAT.
-   **C4MAT\_NORM\_LI** returns the matrix L-oo norm of a C4MAT.
-   **C4MAT\_PRINT** prints a C4MAT.
-   **C4MAT\_PRINT\_SOME** prints some of a C4MAT.
-   **C4MAT\_SCALE** scales a C4MAT by a complex scalar factor.
-   **C4MAT\_SCALE\_R4** scales a C4MAT by a real scalar factor.
-   **C4MAT\_UNIFORM\_01** returns a unit pseudorandom C4MAT.
-   **C4MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom C4MAT.
-   **C4MAT\_ZERO\_NEW** returns a new zeroed C4MAT.
-   **C4VEC\_COPY** copies a C4VEC.
-   **C4VEC\_COPY\_NEW** copies a C4VEC to a "new" C4VEC.
-   **C4VEC\_INDICATOR\_NEW** sets a C4VEC to the indicator vector.
-   **C4VEC\_NINT** rounds the entries of a C4VEC.
-   **C4VEC\_NORM\_L2** returns the L2 norm of a C4VEC.
-   **C4VEC\_PRINT** prints a C4VEC.
-   **C4VEC\_PRINT\_PART** prints "part" of a C4VEC.
-   **C4VEC\_PRINT\_SOME** prints some of a C4VEC.
-   **C4VEC\_SORT\_A\_L2** ascending sorts a C4VEC by L2 norm.
-   **C4VEC\_SPIRAL** returns N points on a spiral between C1 and C2.
-   **C4VEC\_UNIFORM\_01** returns a unit pseudorandom C4VEC.
-   **C4VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom C4VEC.
-   **C4VEC\_UNITY** returns the N roots of unity in a C4VEC.
-   **CARTESIAN\_TO\_C4** converts a Cartesian form to a C4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **POLAR\_TO\_C4** converts a polar form to a C4.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_CSQRT** returns the complex square root of an R4.
-   **R4\_FLOOR** rounds an R4 "down" (towards -oo) to the next integer.
-   **R4\_MAX** returns the maximum of two R4's.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R4\_SIGN** returns the sign of an R4.
-   **R4\_UNIFORM\_01** returns a unit pseudorandom R4.
-   **R4POLY2\_ROOT** returns the two roots of a quadratic polynomial.
-   **R4POLY3\_ROOT** returns the three roots of a cubic polynomial.
-   **R4POLY4\_ROOT** returns the four roots of a quartic polynomial.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 10 March 2014.*
