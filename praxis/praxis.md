PRAXIS\
Scalar Function Optimization {#praxis-scalar-function-optimization align="center"}
============================

------------------------------------------------------------------------

**PRAXIS** is a C++ library which minimizes a scalar function of a
vector argument, without needing derivative information, by Richard
Brent.

PRAXIS seeks an M-dimensional point X which minimizes a given scalar
function F(X). The code is a refinement of Powell's method of conjugate
search directions. The user does not need to supply the partial
derivatives of the function F(X). In fact, the function F(X) need not be
smoothly differentiable.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PRAXIS** is available in [a C version](../../c_src/praxis/praxis.md)
and [a C++ version](../../master/praxis/praxis.md) and [a FORTRAN77
version](../../f77_src/praxis/praxis.md) and [a FORTRAN90
version](../../f_src/praxis/praxis.md) and [a MATLAB
version](../../m_src/praxis/praxis.md) and [a Python
version](../../py_src/praxis/praxis.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BRENT](../../master/brent/brent.md), a C++ library which contains
Richard Brent's routines for finding the zero, local minimizer, or
global minimizer of a scalar function of a scalar argument, without the
use of derivative information.

[COMPASS\_SEARCH](../../master/compass_search/compass_search.md), a
C++ library which seeks the minimizer of a scalar function of several
variables using compass search, a direct search algorithm that does not
use derivatives.

[TEST\_OPT\_CON](../../master/test_opt_con/test_opt_con.md), a C++
library which defines test problems for the minimization of a scalar
function of several variables, with the search constrained to lie within
a specified hyper-rectangle.

[TEST\_OPTIMIZATION](../../master/test_optimization/test_optimization.md),
a C++ library which defines test problems for the minimization of a
scalar function of several variables, as described by Molga and
Smutnicki.

### Reference: {#reference align="center"}

-   Richard Brent,\
    Algorithms for Minimization without Derivatives,\
    Dover, 2002,\
    ISBN: 0-486-41998-3,\
    LC: QA402.5.B74.

### Source Code: {#source-code align="center"}

-   [praxis.cpp](praxis.cpp), the source code.
-   [praxis.hpp](praxis.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [praxis\_prb.cpp](praxis_prb.cpp), sample calling program.
-   [praxis\_prb\_output.txt](praxis_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **FLIN** is the function of one variable to be minimized by MINNY.
-   **MINFIT** computes the singular value decomposition of an N by N
    array.
-   **MINNY** minimizes a scalar function of N variables along a line.
-   **PRAXIS** seeks an N-dimensional minimizer X of a scalar function
    F(X).
-   **PRINT2** prints certain data about the progress of the iteration.
-   **QUAD** seeks to minimize the scalar function F along a particular
    curve.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_HYPOT** returns the value of sqrt ( X\^2 + Y\^2 ).
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_IN\_PLACE** transposes a square matrix in place.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_MAX** returns the value of the maximum element in a R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in a R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SWAP** swaps the entries of two R8VEC's.
-   **SVSORT** descending sorts D and adjusts the corresponding columns
    of V.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 04 August 2016.*
