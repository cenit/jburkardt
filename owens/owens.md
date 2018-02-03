OWENS\
Owen's T Function {#owens-owens-t-function align="center"}
=================

------------------------------------------------------------------------

**OWENS** is a C++ library which evaluates Owen's T function.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**OWENS** is available in [a C version](../../c_src/owens/owens.html)
and [a C++ version](../../cpp_src/owens/owens.html) and [a FORTRAN90
version](../../f_src/owens/owens.html) and [a MATLAB
version](../../m_src/owens/owens.html) and [a Python
version.](../../py_src/owens/owens.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA005](../../cpp_src/asa005/asa005.html), a C++ library which
evaluates the CDF of the noncentral T distribution, and uses Owen's T
function.

[ASA076](../../cpp_src/asa076/asa076.html), a C++ library which
evaluates Owen's T function.

[ASA243](../../cpp_src/asa243/asa243.html), a C++ library which
evaluates the CDF of the noncentral T distribution.

[TEST\_VALUES](../../cpp_src/test_values/test_values.html), a C++
library which includes selected values of many special functions.

### Reference: {#reference align="center"}

1.  Donald Owen,\
    Tables for Computing Bivariate Normal Probabilities,\
    Annals of Mathematical Statistics,\
    Volume 27, Number 4, December 1956, pages 1075-1090.
2.  Mike Patefield, David Tandy,\
    Fast and Accurate Calculation of Owen's T Function,\
    Journal of Statistical Software,\
    Volume 5, Number 5, 2000, pages 1-25.

### Source Code: {#source-code align="center"}

-   [owens.cpp](owens.cpp), the source code.
-   [owens.hpp](owens.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [owens\_prb.cpp](owens_prb.cpp), a sample calling program.
-   [owens\_prb.txt](owens_prb.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BIVARIATE\_NORMAL\_CDF\_VALUES** returns some values of the
    bivariate normal CDF.
-   **BIVPRB** computes a bivariate normal CDF for correlated X and Y.
-   **NORMAL\_01\_CDF\_VALUES** returns some values of the Normal 01
    CDF.
-   **NORMP** computes the cumulative density of the standard normal
    distribution.
-   **OWEN\_VALUES** returns some values of Owen's T function.
-   **Q** computes (1/2) \* p(H
-   **R8\_ABS** returns the absolute value of an R8.
-   **T** computes Owen's T function for arbitrary H and A.
-   **TFUN** computes Owen's T function for a restricted range of
    parameters.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **ZNORM1** evaluates the normal CDF from -oo to Z.
-   **ZNORM2** evaluates the normal CDF from Z to +oo.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 December 2011.*
