TOMS462\
Bivariate Normal Distribution {#toms462-bivariate-normal-distribution align="center"}
=============================

------------------------------------------------------------------------

**TOMS462** is a C++ library which evaluates the upper right tail of the
bivariate normal distribution; that is, the probability that normal
variables X and Y with correlation R will satisfy H &lt;= X and K &lt;=
Y.

While the text of many ACM TOMS algorithms is available online through
ACM: [http://www.acm.org/pubs/calgo](http://www.acm.org/pubs/calgo/) or
NETLIB: <http://www.netlib.org/toms/index.md>, most of the early
algorithms are not available. This is one of them. I typed it in.

### Usage: {#usage align="center"}

 value = **bivnor ( ah, ak, r )** 
:   computes **VALUE**, the probability that two variables, *X* and *Y*
    related by a bivariate normal distribution with correlation **R**,
    satisfy **AH** &lt;= *X* and **AK** &lt;= *Y*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS462** is available in [a C
version](../../c_src/toms462/toms462.md) and [a C++
version](../../master/toms462/toms462.md) and [a FORTRAN77
version](../../f77_src/toms462/toms462.md) and [a FORTRAN90
version](../../f_src/toms462/toms462.md) and [a MATLAB
version](../../m_src/toms462/toms462.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[OWENS](../../master/owens/owens.md), a C++ library which evaluates
Owen's T function.

[PROB](../../master/prob/prob.md), a C++ library which contains a
number of routines for evaluating cumulative distribution functions.

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which supplies test values of various mathematical functions.

### Reference: {#reference align="center"}

1.  Thomas Donnelly,\
    Algorithm 462: Bivariate Normal Distribution,\
    Communications of the ACM,\
    October 1973, Volume 16, Number 10, page 638.
2.  Donald Owen,\
    Tables for Computing Bivariate Normal Probabilities,\
    Annals of Mathematical Statistics,\
    Volume 27, Number 4, pages 1075-1090, December 1956.

### Source Code: {#source-code align="center"}

-   [toms462.cpp](toms462.cpp), the source code.
-   [toms462.hpp](toms462.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms462\_prb.cpp](toms462_prb.cpp), a sample calling program.
-   [toms462\_prb\_output.txt](toms462_prb_output.txt), the output from
    a run of the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **BIVARIATE\_NORMAL\_CDF\_VALUES** returns some values of the
    bivariate normal CDF.
-   **BIVNOR** computes the bivariate normal CDF.
-   **GAUSS** returns the area of the lower tail of the normal curve.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 13 April 2012.*
