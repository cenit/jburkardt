TOMS179\
Modified Beta Function {#toms179-modified-beta-function align="center"}
======================

------------------------------------------------------------------------

**TOMS179** is a C++ library which implements ACM TOMS algorithm 179,
for evaluating the modified Beta function.

While the text of many ACM TOMS algorithms is available online through
ACM: [http://www.acm.org/pubs/calgo](http://www.acm.org/pubs/calgo/) or
NETLIB: <http://www.netlib.org/toms/index.html>, many of the early
algorithms are not available. This is one of them. I typed it in.

The original algorithm was published in the Algol language. Shortly
therafter, a distinct FORTRAN77 algorithm was published as a "remark" to
the original algorithm. A few modifications to the FORTRAN77 program
were proposed in a subsequent "remark".

### Usage: {#usage align="center"}

> *prob* = **mdbeta** ( *x*, *p*, *q*, &*ier* )

where

-   *x* is the point of evaluation;
-   *p* and *q* are parameters;
-   *prob*, (output), is the computed probability;
-   *ier*, (output), is an error flag.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS179** is available in [a C
version](../../c_src/toms179/toms179.html) and [a C++
version](../../cpp_src/toms179/toms179.html) and [a FORTRAN77
version](../../f77_src/toms179/toms179.html) and [a FORTRAN90
version](../../f_src/toms179/toms179.html) and [a MATLAB
version](../../m_src/toms179/toms179.html) and [a Python
version](../../py_src/toms179/toms179.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA063](../../cpp_src/asa063/asa063.html), a C++ library which
evaluates the incomplete Beta function.

[ASA109](../../cpp_src/asa109/asa109.html), a C++ library which inverts
the incomplete Beta function.

[ASA226](../../cpp_src/asa226/asa226.html), a C++ library which
evaluates the CDF of the noncentral Beta distribution.

[ASA310](../../cpp_src/asa310/asa310.html), a C++ library which computes
the CDF of the noncentral Beta distribution.

[BETA\_NC](../../cpp_src/beta_nc/beta_nc.html), a C++ library which
evaluates the CDF of the noncentral Beta distribution.

[DCDFLIB](../../cpp_src/dcdflib/dcdflib.html), a C++ library which
contains routines which evaluate a number of probability density
functions, including one based on the Beta function.

[PROB](../../cpp_src/prob/prob.html), a C++ library which contains
routines which evaluate a number of probability density functions,
including one based on the Beta function.

[TEST\_VALUES](../../cpp_src/test_values/test_values.html), a C++
library which contains routines which return sample values of various
functions, including the modified beta function, and the logarithm of
the gamma function.

[TOMS708](../../f_src/toms708/toms708.html), a FORTRAN90 library which
evaluates the incomplete beta function.

### Reference: {#reference align="center"}

1.  Nancy Bosten, EL Battiste,\
    Remark on Algorithm 179: Incomplete Beta Ratio,\
    Communications of the ACM,\
    Volume 17, Number 3, March 1974, pages 156-157.
2.  William Cody, Kenneth Hillstrom,\
    Chebyshev Approximations for the Natural Logarithm of the Gamma
    Function,\
    Mathematics of Computation,\
    Volume 21, Number 98, April 1967, pages 198-203.
3.  John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thacher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
4.  Oliver Ludwig,\
    Algorithm 179: Incomplete Beta Ratio,\
    Communications of the ACM,\
    Volume 6, Number 6, June 1963, page 314.
5.  Malcolm Pike, Jennie SooHoo,\
    Remark on Algorithm 179: Incomplete Beta Ratio,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Number 2, June 1976, pages 207-208.

### Source Code: {#source-code align="center"}

-   [toms179.cpp](toms179.cpp), the source code.
-   [toms179.hpp](toms179.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms179\_prb.cpp](toms179_prb.cpp), a sample calling program.
-   [toms179\_prb\_output.txt](toms179_prb_output.txt), the output from
    a run of the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **ALOGAM** calculates the natural logarithm of GAMMA ( X ).
-   **BETA\_CDF\_VALUES** returns some values of the Beta CDF.
-   **GAMMA\_LOG\_VALUES** returns some values of the Log Gamma
    function.
-   **MDBETA** evaluates the incomplete beta function.
-   **TIMESTAMP** prints out the current YMDHMS date as a timestamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 January 2008.*
