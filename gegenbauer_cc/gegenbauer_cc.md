GEGENBAUER\_CC\
Gegenbauer Integral of a Function {#gegenbauer_cc-gegenbauer-integral-of-a-function align="center"}
=================================

------------------------------------------------------------------------

**GEGENBAUER\_CC** is a C++ library which uses a Clenshaw-Curtis
approach to approximate the integral of a function f(x) with a
Gegenbauer weight.

The Gegenbauer integral of a function f(x) is:

            value = integral ( -1 <= x <= + 1 ) ( 1 - x^2 )^(lambda-1/2) * f(x) dx
          

where -0.5 &lt; lambda.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GEGENBAUER\_CC** is available in [a C
version](../../c_src/gegenbauer_cc/gegenbauer_cc.html) and [a C++
version](../../cpp_src/gegenbauer_cc/gegenbauer_cc.html) and [a
FORTRAN90 version](../../f_src/gegenbauer_cc/gegenbauer_cc.html) and [a
MATLAB version](../../m_src/gegenbauer_cc/gegenbauer_cc.html) and [a
Python version](../../py_src/gegenbauer_cc/gegenbauer_cc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEGENBAUER\_POLYNOMIAL](../../cpp_src/gegenbauer_polynomial/gegenbauer_polynomial.html),
a C++ library which evaluates the Gegenbauer polynomial and associated
functions.

### Reference: {#reference align="center"}

1.  D B Hunter, H V Smith,\
    A quadrature formula of Clenshaw-Curtis type for the Gegenbauer
    weight function,\
    Journal of Computational and Applied Mathematics,\
    Volume 177, 2005, pages 389-400.

### Source Code: {#source-code align="center"}

-   [gegenbauer\_cc.cpp](gegenbauer_cc.cpp), the source code.
-   [gegenbauer\_cc.hpp](gegenbauer_cc.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [gegenbauer\_cc\_prb.cpp](gegenbauer_cc_prb.cpp) a sample calling
    program.
-   [gegenbauer\_cc\_prb\_output.txt](gegenbauer_cc_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **BESSELJ** evaluates the Bessel J function at an arbitrary real
    order.
-   **CHEBYSHEV\_EVEN1** returns the even Chebyshev coefficients of F.
-   **CHEBYSHEV\_EVEN2** returns the even Chebyshev coefficients of F.
-   **GEGENBAUER\_CC1** estimates the Gegenbauer integral of a function.
-   **GEGENBAUER\_CC2** estimates the Gegenbauer integral of a function.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **RJBESL** evaluates a sequence of Bessel J functions.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 January 2016.*
