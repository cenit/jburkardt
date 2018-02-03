CAUCHY\_PRINCIPAL\_VALUE\
Estimate Singular Integrals {#cauchy_principal_value-estimate-singular-integrals align="center"}
===========================

------------------------------------------------------------------------

**CAUCHY\_PRINCIPAL\_VALUE** is a C++ library which uses Gauss-Legendre
quadrature to estimate the Cauchy Principal Value of certain singular
integrals.

The singular integrals to be considered will have the form:

            Integral ( a <= t <= b ) f(t) / ( t - x ) dt
          

The Cauchy Principal Value is defined as

            CPV = limit ( s --> x ) Integral ( a <= t <= s ) f(t) / ( t - x ) dt
                + limit ( x <-- s ) Integral ( s <= t <= b ) f(t) / ( t - x ) dt
          

We suppose that our singular integral is posed on an interval that is
symmetric with respect to the location of the singularity:

            Integral ( x-d <= t <= x+d ) f(t) / ( t - x ) dt
          

and we propose to estimate the integral using a Gauss-Legendre rule of
even order N:

            CPV approx sum ( 1 <= i <= N ) w(i) * f(xi(i)*d+x) / xi(i)
          

where xi(i) and w(i) are the points and weights, respectively, of the
Gauss-Legendre rule.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CAUCHY\_PRINCIPAL\_VALUE** is available in [a C
version](../../c_src/cauchy_principal_value/cauchy_principal_value.html)
and [a C++
version](../../cpp_src/cauchy_principal_value/cauchy_principal_value.html)
and [a FORTRAN77
version](../../f77_src/cauchy_principal_value/cauchy_principal_value.html)
and [a FORTRAN90
version](../../f_src/cauchy_principal_value/cauchy_principal_value.html)
and [a MATLAB
version](../../m_src/cauchy_principal_value/cauchy_principal_value.html)
and [a Python
version](../../py_src/cauchy_principal_value/cauchy_principal_value.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for approximating an integral over a 1D domain.

### Reference: {#reference align="center"}

1.  Julian Noble,\
    Gauss-Legendre Principal Value Integration,\
    Computing in Science and Engineering,\
    Volume 2, Number 1, January-February 2000, pages 92-95.

### Source Code: {#source-code align="center"}

-   [cpv.cpp](cpv.cpp), the source code.
-   [cpv.hpp](cpv.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cpv\_prb.cpp](cpv_prb.cpp), a sample calling program.
-   [cpv\_prb\_output.txt](cpv_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CPV** estimates the Cauchy Principal Value of an integral.
-   **LEGENDRE\_SET** sets abscissas and weights for Gauss-Legendre
    quadrature.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 01 April 2015.*
