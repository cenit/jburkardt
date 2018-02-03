C8LIB\
A Double Precision Complex Arithmetic Utility Library {#c8lib-a-double-precision-complex-arithmetic-utility-library align="center"}
=====================================================

------------------------------------------------------------------------

**C8LIB** is a C++ library which is a utility library for "C8" or
"double precision complex" arithmetic.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**C8LIB** is available in [a C version](../../c_src/c8lib/c8lib.html)
and [a C++ version](../../cpp_src/c8lib/c8lib.html) and [a FORTRAN77
version](../../f77_src/c8lib/c8lib.html) and [a FORTRAN90
version](../../f_src/c8lib/c8lib.html) and [a MATLAB
version](../../m_src/c8lib/c8lib.html) and [a Python
version](../../m_src/c8lib/c8lib.html)..

### Related Programs: {#related-programs align="center"}

[C4LIB](../../cpp_src/c4lib/c4lib.html), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables;

[C8\_COMPLEX\_LIB](../../cpp_src/c8_complex_lib/c8_complex_lib.html), a
C++ library which defines a class called "c8\_complex" for complex
numbers with double precision components.

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

-   [c8lib.cpp](c8lib.cpp), the source code;
-   [c8lib.hpp](c8lib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [c8lib\_prb.cpp](c8lib_prb.cpp), the calling program;
-   [c8lib\_prb\_output.txt](c8lib_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C8\_ABS** returns the absolute value of a C8.
-   **C8\_ACOS** evaluates the inverse cosine of a C8.
-   **C8\_ACOSH** evaluates the inverse hyperbolic cosine of a C8.
-   **C8\_ADD** adds two C8's.
-   **C8\_ARG** returns the argument of a C8.
-   **C8\_ASIN** evaluates the inverse sine of a C8.
-   **C8\_ASINH** evaluates the inverse hyperbolic sine of a C8.
-   **C8\_ATAN** evaluates the inverse tangent of a C8.
-   **C8\_ATANH** evaluates the inverse hyperbolic tangent of a C8.
-   **C8\_CONJ** conjugates a C8.
-   **C8\_COPY** copies a C8.
-   **C8\_COS** evaluates the cosine of a C8.
-   **C8\_COSH** evaluates the hyperbolic cosine of a C8.
-   **C8\_CUBE\_ROOT** returns the principal cube root of a C8.
-   **C8\_DIV** divides two C8's.
-   **C8\_DIV\_R8** divides a C8 by an R8.
-   **C8\_EXP** exponentiates a C8.
-   **C8\_I** returns the value of the imaginary unit, i as a C8.
-   **C8\_IMAG** returns the imaginary part of a C8.
-   **C8\_INV** inverts a C8.
-   **C8\_LE\_L1** := X &lt;= Y for C8 values, and the L1 norm.
-   **C8\_LE\_L2** := X &lt;= Y for C8 values, and the L2 norm.
-   **C8\_LE\_LI** := X &lt;= Y for C8 values, and the L-oo norm.
-   **C8\_LOG** evaluates the logarithm of a C8.
-   **C8\_MAG** returns the magnitude of a C8.
-   **C8\_MUL** multiplies two C8's.
-   **C8\_NEG** negates a C8.
-   **C8\_NINT** returns the nearest complex integer of a C8.
-   **C8\_NORM\_L1** evaluates the L1 norm of a C8.
-   **C8\_NORM\_L2** evaluates the L2 norm of a C8.
-   **C8\_NORM\_LI** evaluates the L-oo norm of a C8.
-   **C8\_NORMAL\_01** returns a unit pseudonormal C8.
-   **C8\_ONE** returns the value of complex 1.
-   **C8\_PRINT** prints a C8.
-   **C8\_REAL** returns the real part of a C8.
-   **C8\_SIN** evaluates the sine of a C8.
-   **C8\_SINH** evaluates the hyperbolic sine of a C8.
-   **C8\_SQRT** returns the principal square root of a C8.
-   **C8\_SUB** subtracts two C8's.
-   **C8\_SWAP** swaps two C8's.
-   **C8\_TAN** evaluates the tangent of a C8.
-   **C8\_TANH** evaluates the hyperbolic tangent of a C8.
-   **C8\_TO\_CARTESIAN** converts a C8 to Cartesian form.
-   **C8\_TO\_POLAR** converts a C8 to polar form.
-   **C8\_UNIFORM\_01** returns a unit pseudorandom C8.
-   **C8\_ZERO** returns the value of 0 as a C8.
-   **C8MAT\_ADD** combines two C8MAT's using complex scalar factors.
-   **C8MAT\_ADD\_R8** combines two C8MAT's using real scalar factors.
-   **C8MAT\_COPY** copies one C8MAT to another.
-   **C8MAT\_COPY\_NEW** copies one C8MAT to a "new" C8MAT.
-   **C8MAT\_FSS** factors and solves a system with multiple right hand
    sides.
-   **C8MAT\_FSS\_NEW** factors and solves a system with multiple right
    hand sides.
-   **C8MAT\_IDENTITY\_NEW** sets a C8MAT to the identity.
-   **C8MAT\_INDICATOR\_NEW** returns the C8MAT indicator matrix.
-   **C8MAT\_MINVM** returns inverse(A) \* B for C8MAT's.
-   **C8MAT\_MINVM\_NEW** returns inverse(A) \* B for C8MAT's.
-   **C8MAT\_MM** multiplies two matrices.
-   **C8MAT\_MM\_NEW** multiplies two matrices.
-   **C8MAT\_NINT** rounds the entries of a C8MAT.
-   **C8MAT\_NORM\_FRO** returns the Frobenius norm of a C8MAT.
-   **C8MAT\_NORM\_L1** returns the matrix L1 norm of a C8MAT.
-   **C8MAT\_NORM\_LI** returns the matrix L-oo norm of a C8MAT.
-   **C8MAT\_PRINT** prints a C8MAT.
-   **C8MAT\_PRINT\_SOME** prints some of a C8MAT.
-   **C8MAT\_SCALE** scales a C8MAT by a complex scalar factor.
-   **C8MAT\_SCALE\_R8** scales a C8MAT by a real scalar factor.
-   **C8MAT\_UNIFORM\_01** returns a unit pseudorandom C8MAT.
-   **C8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom C8MAT.
-   **C8MAT\_ZERO\_NEW** returns a new zeroed C8MAT.
-   **C8VEC\_COPY** copies a C8VEC.
-   **C8VEC\_COPY\_NEW** copies a C8VEC to a "new" C8VEC.
-   **C8VEC\_INDICATOR\_NEW** sets a C8VEC to the indicator vector.
-   **C8VEC\_NINT** rounds the entries of a C8VEC.
-   **C8VEC\_NORM\_L1** returns the L1 norm of a C8VEC.
-   **C8VEC\_NORM\_L2** returns the L2 norm of a C8VEC.
-   **C8VEC\_NORM\_LI** returns the Loo norm of a C8VEC.
-   **C8VEC\_PRINT** prints a C8VEC.
-   **C8VEC\_PRINT\_PART** prints "part" of a C8VEC.
-   **C8VEC\_PRINT\_SOME** prints some of a C8VEC.
-   **C8VEC\_SORT\_A\_L1** ascending sorts a C8VEC by L1 norm.
-   **C8VEC\_SORT\_A\_L2** ascending sorts a C8VEC by L2 norm.
-   **C8VEC\_SORT\_A\_LI** ascending sorts a C8VEC by Loo norm.
-   **C8VEC\_SPIRAL\_NEW** returns N points on a spiral between C1 and
    C2.
-   **C8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom C8VEC.
-   **C8VEC\_UNITY** returns the N roots of unity in a C8VEC.
-   **CARTESIAN\_TO\_C8** converts a Cartesian form to a C8.
-   **POLAR\_TO\_C8** converts a polar form to a C8.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ATAN** computes the inverse tangent of the ratio Y / X.
-   **R8\_CSQRT** returns the complex square root of an R8.
-   **R8\_FLOOR** rounds an R8 down to the nearest integral R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8POLY2\_ROOT** returns the two roots of a quadratic polynomial.
-   **R8POLY3\_ROOT** returns the three roots of a cubic polynomial.
-   **R8POLY4\_ROOT** returns the four roots of a quartic polynomial.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 February 2015.*
