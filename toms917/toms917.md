TOMS917\
Evaluate Wright's Omega Function {#toms917-evaluate-wrights-omega-function align="center"}
================================

------------------------------------------------------------------------

**TOMS917** is a C++ library which evaluates Wright's Omega function, by
Piers Lawrence, Robert Corless, David Jeffrey.

The original, true, correct version of ACM TOMS Algorithm 917 is
available through ACM:
[http://www.acm.org/pubs/calgo](http://www.acm.org/pubs/calgo/) or
NETLIB: <http://www.netlib.org/toms/index.html>.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS917** is available in [a C
version](../../c_src/toms917/toms917.html) and [a C++
version](../../cpp_src/toms917/toms917.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TOMS443](../../cpp_src/toms443/toms443.html), a C++ library which
evaluates Lambert's W function. This is a version of ACM TOMS algorithm
443.

[TOMS743](../../cpp_src/toms743/toms743.html), a C++ library which
evaluates Lambert's W function. This is a version of ACM TOMS algorithm
743, by Barry, Barry and Culligan-Hensley.

### Author: {#author align="center"}

Piers Lawrence, Robert Corless, David Jeffrey.

### Reference: {#reference align="center"}

### Source Code: {#source-code align="center"}

-   [toms917.cpp](toms917.cpp), the source code.
-   [toms917.hpp](toms917.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms917\_prb.cpp](toms917_prb.cpp), a sample calling program.
-   [toms917\_prb\_output.txt](toms917_prb_output.txt), the output file.
-   [results.txt](results.txt), a table of results for accuracy checks.
-   [results\_benchmark.txt](results_benchmark.txt), the benchmark table
    of results.

### List of Routines: {#list-of-routines align="center"}

-   **WRIGHTOMEGA** is the simple routine for evaluating the Wright
    Omega function.
-   **WRIGHTOMEGA\_EXT** computes the Wright Omega function, with extra
    information.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C+= source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 May 2016.*
