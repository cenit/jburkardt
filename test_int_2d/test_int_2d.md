TEST\_INT\_2D\
Quadrature Tests for 2D Finite Intervals {#test_int_2d-quadrature-tests-for-2d-finite-intervals align="center"}
========================================

------------------------------------------------------------------------

**TEST\_INT\_2D** is a C++ program which evaluates test integrands.

The test integrands would normally be used to testing 2D quadrature
software. It is possible to invoke a particular function by number, or
to try out all available functions, as demonstrated in the sample
calling program.

The current set of problems is:

1.  integral on \[0,1\]x\[0,1\] of f(x,y) = 1 / ( 1 - x \* y ); singular
    at \[1,1\].
2.  integral on \[-1,1\]x\[-1,1\] of f(x,y) = 1 / sqrt ( 1 - x \* x \*
    y \* y ); singular at \[1,1\], \[1,-1\], \[-1,1\], \[-1,-1\];
3.  integral on \[-1,1\]x\[-1,1\] of f(x,y) = 1 / sqrt ( 2 - x - y );
    singular at \[1,1\];
4.  integral on \[-1,1\]x\[-1,1\] of f(x,y) = 1 / sqrt ( 3 - x - 2 \* y
    ); singular along the line y = ( 3 - x ) / 2.
5.  integral on \[0,1\]x\[0,1\] of f(x,y) = sqrt ( x \* y ); singular
    along the lines y = 0 and x = 0.
6.  integral on \[-1,1\]x\[-1,1\] of f(x,y) = abs ( x \* x + y \* y -
    1/4 ); nondifferentiable along x\*x+y\*y=1/4.
7.  integral on \[0,1\]x\[0,1\] of f(x,y) = sqrt ( abs ( x - y ) );
    nondifferentiable along y = x.
8.  integral on \[0,5\]x\[0,5\] of f(x,y) = exp ( - ( (x-4)\^2 +
    (y-1)\^2 ) ), highly localized near (4,1).

The library includes not just the integrand, but also the interval of
integration, and the exact value of the integral. Thus, for each
integrand function, three subroutines are supplied. For instance, for
function \#5, we have the routines:

-   **P05\_FUN** evaluates the integrand for problem 5.
-   **P05\_LIM** returns the integration limits for problem 5.
-   **P05\_EXACT** returns the exact integral for problem 5.

So once you have the calling sequences for these routines, you can
easily evaluate the function, or integrate it between the appropriate
limits, or compare your estimate of the integral to the exact value.

Moreover, since the same interface is used for each function, if you
wish to work with problem 2 instead, you simply change the "05" to "02"
in your routine calls.

If you wish to call *all* of the functions, then you simply use the
generic interface, which again has three subroutines, but which requires
you to specify the problem number as an extra input argument:

-   **P00\_FUN** evaluates the integrand for any problem.
-   **P00\_LIM** returns the integration limits for any problem.
-   **P00\_EXACT** returns the exact integral for any problem.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_INT\_2D** is available in [a C
version](../../c_src/test_int_2d/test_int_2d.md) and [a C++
version](../../master/test_int_2d/test_int_2d.md) and [a FORTRAN90
version](../../f_src/test_int_2d/test_int_2d.md) and [a FORTRAN77
version](../../f77_src/test_int_2d/test_int_2d.md) and [a MATLAB
version](../../m_src/test_int_2d/test_int_2d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TEST\_INT](../../master/test_int/test_int.md), a C++ library which
defines test integrands for 1D quadrature rules.

[TEST\_INT\_HERMITE](../../master/test_int_hermite/test_int_hermite.md),
a C++ library which defines some test integration problems over infinite
intervals.

[TEST\_INT\_LAGUERRE](../../master/test_int_laguerre/test_int_laguerre.md),
a C++ library which defines test integrands for integration over
\[ALPHA,+oo).

### Reference: {#reference align="center"}

1.  Gwynne Evans,\
    Practical Numerical Integration,\
    Wiley, 1993,\
    ISBN: 047193898X,\
    LC: QA299.3E93.

### Source Code: {#source-code align="center"}

-   [test\_int\_2d.cpp](test_int_2d.cpp), the source code.
-   [test\_int\_2d.hpp](test_int_2d.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_int\_2d\_prb.cpp](test_int_2d_prb.cpp), a sample calling
    program.
-   [test\_int\_2d\_prb\_output.txt](test_int_2d_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **LEGENDRE\_DR\_COMPUTE:** Gauss-Legendre quadrature by
    Davis-Rabinowitz method.
-   **P00\_EXACT** returns the exact integral for any problem.
-   **P00\_FUN** evaluates the integrand for any problem.
-   **P00\_LIM** returns the integration limits for any problem.
-   **P00\_PROBLEM\_NUM** returns the number of test integration
    problems.
-   **P01\_EXACT** returns the exact integral for problem 1.
-   **P01\_FUN** evaluates the integrand for problem 1.
-   **P01\_LIM** returns the integration limits for problem 1.
-   **P02\_EXACT** returns the exact integral for problem 2.
-   **P02\_FUN** evaluates the integrand for problem 2.
-   **P02\_LIM** returns the integration limits for problem 2.
-   **P03\_EXACT** returns the exact integral for problem 3.
-   **P03\_FUN** evaluates the integrand for problem 3.
-   **P03\_LIM** returns the integration limits for problem 3.
-   **P04\_EXACT** returns the exact integral for problem 4.
-   **P04\_FUN** evaluates the integrand for problem 4.
-   **P04\_LIM** returns the integration limits for problem 4.
-   **P05\_EXACT** returns the exact integral for problem 5.
-   **P05\_FUN** evaluates the integrand for problem 5.
-   **P05\_LIM** returns the integration limits for problem 5.
-   **P06\_EXACT** returns the exact integral for problem 6.
-   **P06\_FUN** evaluates the integrand for problem 6.
-   **P06\_LIM** returns the integration limits for problem 6.
-   **P07\_EXACT** returns the exact integral for problem 7.
-   **P07\_FUN** evaluates the integrand for problem 7.
-   **P07\_LIM** returns the integration limits for problem 7.
-   **P08\_EXACT** returns the exact integral for problem 8.
-   **P08\_FUN** evaluates the integrand for problem 8.
-   **P08\_LIM** returns the integration limits for problem 8.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_CSEVL** evaluates a Chebyshev series.
-   **R8\_ERF** evaluates the error function of an R8 argument.
-   **R8\_ERFC** evaluates the co-error function of an R8 argument.
-   **R8\_INITS** initializes a Chebyshev series.
-   **R8\_MACH** returns double precision real machine constants.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 18 September 2011.*
