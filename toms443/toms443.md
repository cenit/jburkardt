TOMS443\
Evaluation of Lambert's W function. {#toms443-evaluation-of-lamberts-w-function. align="center"}
===================================

------------------------------------------------------------------------

**TOMS443** is a C++ library which evaluates Lambert's W function. This
is a version of ACM TOMS algorithm 443, by Fritsch, Shafer and Crowley.

Lambert's W function W(X) satisfies the equation

            W(x) * exp ( W(x) ) = x
          

The text of many ACM TOMS algorithms is available online through ACM:
[http://www.acm.org/pubs/calgo](http://www.acm.org/pubs/calgo/) or
NETLIB: <http://www.netlib.org/toms/index.md>.

### Languages: {#languages align="center"}

**TOMS443** is available in [a C
version](../../c_src/toms443/toms443.md) and [a C++
version](../../master/toms443/toms443.md) and [a FORTRAN77
version](../../f77_src/toms443/toms443.md) and [a FORTRAN90
version](../../f_src/toms443/toms443.md) and [a MATLAB
version](../../m_src/toms443/toms443.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which contains routines which return sample values of various
functions, including the modified beta function, and the logarithm of
the gamma function.

[TOMS743](../../master/toms743/toms743.md), a C++ library which
evaluates Lambert's W function. This is a version of ACM TOMS algorithm
743, by Barry, Barry and Culligan-Hensley.

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

-   [toms443.cpp](toms443.cpp), the source code.
-   [toms443.hpp](toms443.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms443\_prb.cpp](toms443_prb.cpp), a sample calling program.
-   [toms443\_prb\_output.txt](toms443_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **WEW\_A** evaluates Lambert's W function using code appropriate for
    a CDC 6600 (default 64 bit precision).
-   **WEW\_B** evaluates Lambert's W function using code appropriate for
    a computer with precision of about 3.0E-07.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 June 2014.*
