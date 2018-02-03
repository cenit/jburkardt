LEBESGUE\
Estimate the Lebesgue Constant {#lebesgue-estimate-the-lebesgue-constant align="center"}
==============================

------------------------------------------------------------------------

**LEBESGUE** is a C++ library which is given a set of nodes in 1D, and
plots the Lebesgue function, and estimates the Lebesgue constant, which
measures the maximum magnitude of the potential error of Lagrange
polynomial interpolation, and which uses gnuplot to make plots of the
Lebesgue function.

Any set of nodes in the real line X(I), for 1 &lt;= I &lt;= N, defines a
corresponding set of Lagrange basis functions:

            L(I)(X) = product ( 1 <= J <= N, J /= I ) ( X    - X(J) ) 
                    / product ( 1 <= J <= N, J /= I ) ( X(I) - X(J) )
          

with the property that

            L(I)(X(J)) = 0 if I /= J
                         1 if I  = J
          

The Lebesgue function is formed by the sum of the absolute values of
these Lagrange basis functions:

            LF(X) = sum ( 1 <= I <= N ) | L(I)(X) |
          

and the Lebesgue constant LC is the maximum value of LF(X) over the
interpolation interval, which is typically X(1) to X(N), or min ( X(\*)
), max ( X(\*) ), or \[-1,+1\], or some user-defined interval.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LEBESGUE** is available in [a C
version](../../c_src/lebesgue/lebesgue.html) and [a C++
version](../../cpp_src/lebesgue/lebesgue.html) and [a FORTRAN77
version](../../f77_src/lebesgue/lebesgue.html) and [a FORTRAN90
version](../../f_src/lebesgue/lebesgue.html) and [a MATLAB
version](../../m_src/lebesgue/lebesgue.html) and [a Python
version](../../py_src/lebesgue/lebesgue.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[INTERP](../../cpp_src/interp/interp.html), a C++ library which can be
used for parameterizing and interpolating data;

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for approximating an integral over a 1D domain.

### Reference: {#reference align="center"}

1.  Jean-Paul Berrut, Lloyd Trefethen,\
    Barycentric Lagrange Interpolation,\
    SIAM Review,\
    Volume 46, Number 3, September 2004, pages 501-517.

### Source Code: {#source-code align="center"}

-   [lebesgue.cpp](lebesgue.cpp), the source code.
-   [lebesgue.hpp](lebesgue.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lebesgue\_prb.cpp](lebesgue_prb.cpp), a sample calling program.
-   [lebesgue\_prb\_output.txt](lebesgue_prb_output.txt), the output
    file.

The test programs create plots of the Lebesgue function for specific
sizes of the point sets.

-   [chebyshev1.png](chebyshev1.png)
-   [chebyshev2.png](chebyshev2.png)
-   [chebyshev3.png](chebyshev3.png)
-   [chebyshev4.png](chebyshev4.png)
-   [equidistant1.png](equidistant1.png)
-   [equidistant2.png](equidistant2.png)
-   [equidistant3.png](equidistant3.png)
-   [fejer1.png](fejer1.png)
-   [fejer2.png](fejer2.png)

### List of Routines: {#list-of-routines align="center"}

-   **CHEBYSHEV1** returns the Type 1 Chebyshev points.
-   **CHEBYSHEV2** returns the Type 2 Chebyshev points.
-   **CHEBYSHEV3** returns the Type 3 Chebyshev points.
-   **CHEBYSHEV4** returns the Type 4 Chebyshev points.
-   **EQUIDISTANT1** returns the Type 1 Equidistant points.
-   **EQUIDISTANT2** returns the Type 2 Equidistant points.
-   **EQUIDISTANT3** returns the Type 3 Equidistant points.
-   **FEJER1** returns the Type 1 Fejer points.
-   **FEJER2** returns the Type 2 Fejer points.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **LAGRANGE\_VALUE** evaluates the Lagrange polynomials.
-   **LEBESGUE\_CONSTANT** estimates the Lebesgue constant for a set of
    points.
-   **LEBESGUE\_FUNCTION** evaluates the Lebesgue function for a set of
    points.
-   **LEBESGUE\_PLOT** plots the Lebesgue function for a set of points.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 04 March 2014.*
