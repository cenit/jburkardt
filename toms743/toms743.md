TOMS743\
Evaluation of Lambert's W function. {#toms743-evaluation-of-lamberts-w-function. align="center"}
===================================

------------------------------------------------------------------------

**TOMS743** is a C++ library which evaluates Lambert's W function. This
is a version of ACM TOMS algorithm 743, by Barry, Barry and
Culligan-Hensley.

Lambert's W function W(X) satisfies the equation

            W(x) * exp ( W(x) ) = x
          

The text of many ACM TOMS algorithms is available online through ACM:
[http://www.acm.org/pubs/calgo](http://www.acm.org/pubs/calgo/) or
NETLIB: <http://www.netlib.org/toms/index.md>.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS743** is available in [a C
version](../../c_src/toms743/toms743.md) and [a C++
version](../../master/toms743/toms743.md) and [a FORTRAN77
version](../../f77_src/toms743/toms743.md) and [a FORTRAN90
version](../../f_src/toms743/toms743.md) and [a MATLAB
version](../../m_src/toms743/toms743.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which contains routines which return sample values of various
functions, including the modified beta function, and the logarithm of
the gamma function.

[TOMS443](../../master/toms443/toms443.md), a C++ library which
evaluates Lambert's W function. This is a version of ACM TOMS algorithm
443.

### Reference: {#reference align="center"}

1.  Fred Fritsch, RE Shafer, WP Crowley,\
    Algorithm 443: Solution of the Transcendental Equation W\*exp(W)=X,\
    Communications of the ACM,\
    Volume 16, Number 1, February 1973, pages 123-124.
2.  Andrew Barry, S. J. Barry, Patricia Culligan-Hensley,\
    Algorithm 743: WAPR - A Fortran routine for calculating real values
    of the W-function,\
    ACM Transactions on Mathematical Software,\
    Volume 21, Number 2, June 1995, pages 172-181.

### Source Code: {#source-code align="center"}

-   [toms743.cpp](toms743.cpp), the source code.
-   [toms743.hpp](toms743.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms743\_prb.cpp](toms743_prb.cpp), a sample calling program.
-   [toms743\_prb\_output.txt](toms743_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BISECT** approximates the W function using bisection.
-   **CRUDE** returns a crude approximation for the W function.
-   **NBITS\_COMPUTE** computes the mantissa length minus one.
-   **TIMESTAMP** prints out the current YMDHMS date as a timestamp.
-   **WAPR** approximates the W function.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 17 June 2014.*
