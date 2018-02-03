SPARSE\_COUNT\
Sparse Grids Using a Single Factor {#sparse_count-sparse-grids-using-a-single-factor align="center"}
==================================

------------------------------------------------------------------------

**SPARSE\_COUNT** is a C++ library which contains routines for the
analysis and construction of sparse grids in which a fixed family of 1D
quadrature rules is used for all spatial dimensions.

By contrast, library MIXED allows different rules to be used in
different dimensions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPARSE\_COUNT** is available in [a C++
version](../../cpp_src/sparse_count/sparse_count.html) and [a FORTRAN90
version](../../f_src/sparse_count/sparse_count.html) and [a MATLAB
version](../../m_src/sparse_count/sparse_count.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MIXED](../../cpp_src/sparse_grid_mixed/sparse_grid_mixed.html), a
library which creates a sparse grid dataset based on a mixed set of 1D
factor rules.

### Reference: {#reference align="center"}

1.  Volker Barthelmann, Erich Novak, Klaus Ritter,\
    High Dimensional Polynomial Interpolation on Sparse Grids,\
    Advances in Computational Mathematics,\
    Volume 12, Number 4, 2000, pages 273-288.
2.  Thomas Gerstner, Michael Griebel,\
    Numerical Integration Using Sparse Grids,\
    Numerical Algorithms,\
    Volume 18, Number 3-4, 1998, pages 209-232.
3.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
4.  Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
5.  Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.
6.  Dennis Stanton, Dennis White,\
    Constructive Combinatorics,\
    Springer, 1986,\
    ISBN: 0387963472,\
    LC: QA164.S79.

### Source Code: {#source-code align="center"}

-   [sparse\_count.cpp](sparse_count.cpp), the source code.
-   [sparse\_count.hpp](sparse_count.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_count\_prb.cpp](sparse_count_prb.cpp), a sample calling
    program.
-   [sparse\_count\_prb\_output.txt](sparse_count_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CC\_S\_SIZE:** Clenshaw Curtis Slow Exponential Growth.
-   **CFN\_E\_SIZE;** Closed Fully Nested, Exponential Growth.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **F2\_S\_SIZE:** Fejer Type 2 Slow Growth.
-   **GP\_S\_SIZE:** Gauss Patterson, Slow Growth.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **OFN\_E\_SIZE:** Open Fully Nested, Exponential Growth.
-   **ONN\_E\_SIZE:** Open Non Nested, Exponential Growth.
-   **ONN\_L\_SIZE:** Open Non Nested, Linear Growth.
-   **OWN\_E\_SIZE:** Open Weakly Nested, Exponential Growth.
-   **OWN\_L2\_SIZE:** Open Weakly Nested, Linear 2 Growth.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 April 2014.*
