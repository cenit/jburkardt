SGMGA\
Sparse Grid Mixed Growth Anisotropic Rules. {#sgmga-sparse-grid-mixed-growth-anisotropic-rules. align="center"}
===========================================

------------------------------------------------------------------------

**SGMGA** is a C++ library which implements a family of sparse grid
rules. These rules are "mixed", in that a different 1D quadrature rule
can be specified for each dimension. Moreover, each 1D quadrature rule
comes in a family of increasing size whose growth rate (typically linear
or exponential) is chosen by the user. Finally, the user may also
specify different weights for each dimension, resulting in anisotropic
rules.

SGMGA calls many routines from the **SANDIA\_RULES** library. Source
code or compiled copies of *both* libraries must be available when a
program wishes to use the **SGMGA** library.

Thanks to Drew Kouri, who pointed out a discrepancy in the computation
of the variable **level\_1d\_max** which meant that certain sparse grids
requested the generation of a 1D rule of a level that was higher than
necessary by 1. In particular, if the Gauss-Patterson rule was involved,
sparse grids that actually only needed rules of level 7 would ask also
for level 8, resulting in the computation being terminated. This problem
was corrected on 25 April 2011.

  Index   Name                         Abbreviation   Default Growth Rule    Interval    Weight function
  ------- ---------------------------- -------------- ---------------------- ----------- --------------------------
  1       Clenshaw-Curtis              CC             Moderate Exponential   \[-1,+1\]   1
  2       Fejer Type 2                 F2             Moderate Exponential   \[-1,+1\]   1
  3       Gauss Patterson              GP             Moderate Exponential   \[-1,+1\]   1
  4       Gauss-Legendre               GL             Moderate Linear        \[-1,+1\]   1
  5       Gauss-Hermite                GH             Moderate Linear        (-oo,+oo)   e^-x\*x^
  6       Generalized Gauss-Hermite    GGH            Moderate Linear        (-oo,+oo)   |x|^alpha^ e^-x\*x^
  7       Gauss-Laguerre               LG             Moderate Linear        \[0,+oo)    e^-x^
  8       Generalized Gauss-Laguerre   GLG            Moderate Linear        \[0,+oo)    x^alpha^ e^-x^
  9       Gauss-Jacobi                 GJ             Moderate Linear        \[-1,+1\]   (1-x)^alpha^ (1+x)^beta^
  10      Hermite Genz-Keister         HGK            Moderate Exponential   (-oo,+oo)   e^-x\*x^
  11      User Supplied Open           UO             Moderate Linear        ?           ?
  12      User Supplied Closed         UC             Moderate Linear        ?           ?

For a given family, a growth rule can be prescribed, which determines
the orders O of the sequence of rules selected from the family. The
selected rules are indexed by L, which starts at 0. The polynomial
precision P of the rule is sometimes used to determine the appropriate
order O.

  Index   Name                         Order Formula
  ------- ---------------------------- ----------------------------------------------------------
  0       Default                      "DF", moderate exponential or moderate linear
  1       "SL", Slow linear            O=L+1
  2       "SO", Slow Linear Odd        O=1+2\*((L+1)/2)
  3       "ML", Moderate Linear        O=2L+1
  4       "SE", Slow Exponential       select smallest exponential order O so that 2L+1 &lt;= P
  5       "ME", Moderate Exponential   select smallest exponential order O so that 4L+1 &lt;= P
  6       "FE", Full Exponential       O=2\^L+1 for Clenshaw Curtis, O=2\^(L+1)-1 otherwise.

### Web Link: {#web-link align="center"}

A version of the sparse grid library is available in
[http://tasmanian.ornl.gov](http://tasmanian.ornl.gov/), the TASMANIAN
library, available from Oak Ridge National Laboratory.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SGMGA** is available in [a C version](../../c_src/sgmga/sgmga.html)
and [a C++ version](../../cpp_src/sgmga/sgmga.html) and [a FORTRAN90
version](../../f_src/sgmga/sgmga.html) and [a MATLAB
version.](../../m_src/sgmga/sgmga.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[NINT\_EXACTNESS\_MIXED](../../cpp_src/nint_exactness_mixed/nint_exactness_mixed.html),
a C++ program which measures the polynomial exactness of a
multidimensional quadrature rule based on a mixture of 1D quadrature
rule factors.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for various intervals and weight functions.

[SANDIA\_RULES](../../cpp_src/sandia_rules/sandia_rules.html), a C++
library which produces 1D quadrature rules of Chebyshev, Clenshaw
Curtis, Fejer 2, Gegenbauer, generalized Hermite, generalized Laguerre,
Hermite, Jacobi, Laguerre, Legendre and Patterson types.

[SANDIA\_SGMGA](../../cpp_src/sandia_sgmga/sandia_sgmga.html), a C++
library which creates sparse grids based on a mixture of 1D quadrature
rules, allowing anisotropic weights for each dimension. This is a
version of SGMGA that uses a different procedure for supplying the
parameters needed to evaluate certain quadrature rules.

[SANDIA\_SPARSE](../../cpp_src/sandia_sparse/sandia_sparse.html), a C++
library which computes the points and weights of a Smolyak sparse grid,
based on a variety of 1-dimensional quadrature rules.

[SGMG](../../cpp_src/sgmg/sgmg.html), a C++ library which creates a
sparse grid dataset based on a mixed set of 1D factor rules, and
experiments with the use of a linear growth rate for the quadrature
rules.

[SGMGA](../../datasets/sgmga/sgmga.html), a dataset directory which
contains SGMGA files (Sparse Grid Mixed Growth Anisotropic), that is,
multidimensional Smolyak sparse grids based on a mixture of 1D rules,
and with a choice of exponential and linear growth rates for the 1D
rules and anisotropic weights for the dimensions.

[SMOLPACK](../../c_src/smolpack/smolpack.html), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids, by Knut
Petras.

[SPARSE\_GRID\_HW](../../cpp_src/sparse_grid_hw/sparse_grid_hw.html), a
C++ library which creates sparse grids based on Gauss-Legendre,
Gauss-Hermite, Gauss-Patterson, or a nested variation of Gauss-Hermite
rules, by Florian Heiss and Viktor Winschel.

[SPARSE\_GRID\_MIXED](../../cpp_src/sparse_grid_mixed/sparse_grid_mixed.html),
a C++ library which creates sparse grids based on a mix of 1D rules.

[TOMS847](../../m_src/toms847/toms847.html), a MATLAB program which uses
sparse grids to carry out multilinear hierarchical interpolation. It is
commonly known as SPINTERP, and is by Andreas Klimke.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Charles Clenshaw, Alan Curtis,\
    A Method for Numerical Integration on an Automatic Computer,\
    Numerische Mathematik,\
    Volume 2, Number 1, December 1960, pages 197-205.
3.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
4.  Michael Eldred, John Burkardt,\
    Comparison of Non-Intrusive Polynomial Chaos and Stochastic
    Collocation Methods for Uncertainty Quantification,\
    American Institute of Aeronautics and Astronautics,\
    Paper 2009-0976,\
    47th AIAA Aerospace Sciences Meeting Including The New Horizons
    Forum and Aerospace Exposition,\
    5 - 8 January 2009, Orlando, Florida.
5.  Walter Gautschi,\
    Numerical Quadrature in the Presence of a Singularity,\
    SIAM Journal on Numerical Analysis,\
    Volume 4, Number 3, September 1967, pages 357-362.
6.  Thomas Gerstner, Michael Griebel,\
    Numerical Integration Using Sparse Grids,\
    Numerical Algorithms,\
    Volume 18, Number 3-4, 1998, pages 209-232.
7.  Gene Golub, John Welsch,\
    Calculation of Gaussian Quadrature Rules,\
    Mathematics of Computation,\
    Volume 23, Number 106, April 1969, pages 221-230.
8.  Prem Kythe, Michael Schaeferkotter,\
    Handbook of Computational Methods for Integration,\
    Chapman and Hall, 2004,\
    ISBN: 1-58488-428-2,\
    LC: QA299.3.K98.
9.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
10. Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
11. Fabio Nobile, Raul Tempone, Clayton Webster,\
    An Anisotropic Sparse Grid Stochastic Collocation Method for Partial
    Differential Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2411-2442.
12. Thomas Patterson,\
    The Optimal Addition of Points to Quadrature Formulae,\
    Mathematics of Computation,\
    Volume 22, Number 104, October 1968, pages 847-856.
13. Knut Petras,\
    Smolyak Cubature of Given Polynomial Degree with Few Nodes for
    Increasing Dimension,\
    Numerische Mathematik,\
    Volume 93, Number 4, February 2003, pages 729-753.
14. Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.
15. Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
16. Joerg Waldvogel,\
    Fast Construction of the Fejer and Clenshaw-Curtis Quadrature
    Rules,\
    BIT Numerical Mathematics,\
    Volume 43, Number 1, 2003, pages 1-18.

### Source Code: {#source-code align="center"}

-   [sgmga.cpp](sgmga.cpp), the source code.
-   [sgmga.hpp](sgmga.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

**SGMGA\_ANISO\_NORMALIZE\_PRB** tests **SGMGA\_ANISO\_BALANCE**,
**SGMGA\_ANISO\_NORMALIZE** and **SGMGA\_IMPORTANCE\_TO\_ANISO**.

-   [sgmga\_aniso\_normalize\_prb.cpp](sgmga_aniso_normalize_prb.cpp),
    the program.
-   [sgmga\_aniso\_normalize\_prb\_output.txt](sgmga_aniso_normalize_prb_output.txt),
    the output file.

**SGMGA\_INDEX\_PRB** tests **SGMGA\_INDEX**.

-   [sgmga\_index\_prb.cpp](sgmga_index_prb.cpp), the program.
-   [sgmga\_index\_prb\_output.txt](sgmga_index_prb_output.txt), the
    output file.

**SGMGA\_POINT\_PRB** tests **SGMGA\_POINT**.

-   [sgmga\_point\_prb.cpp](sgmga_point_prb.cpp), the program.
-   [sgmga\_point\_prb\_output.txt](sgmga_point_prb_output.txt), the
    output file.

**SGMGA\_PRODUCT\_WEIGHT\_PRB** tests **SGMGA\_PRODUCT\_WEIGHT**.

-   [sgmga\_product\_weight\_prb.cpp](sgmga_product_weight_prb.cpp), the
    program.
-   [sgmga\_product\_weight\_prb\_output.txt](sgmga_product_weight_prb_output.txt),
    the output file.

**SGMGA\_SIZE\_PRB** tests **SGMGA\_SIZE** and **SGMGA\_SIZE\_TOTAL**.

-   [sgmga\_size\_prb.cpp](sgmga_size_prb.cpp), the program.
-   [sgmga\_size\_prb\_output.txt](sgmga_size_prb_output.txt), the
    output file.

**SGMGA\_SIZE\_TABLE** tabulates the point counts from **SGMGA\_SIZE**
for an isotropic rule over a range of dimensions and levels.

-   [sgmga\_size\_table.cpp](sgmga_size_table.cpp), the program.
-   [sgmga\_size\_table\_output.txt](sgmga_size_table_output.txt), the
    output file.

**SGMGA\_UNIQUE\_INDEX\_PRB** tests **SGMGA\_UNIQUE\_INDEX**.

-   [sgmga\_unique\_index\_prb.cpp](sgmga_unique_index_prb.cpp), the
    program.
-   [sgmgav\_index\_prb\_output.txt](sgmga_unique_index_prb_output.txt),
    the output file.

**SGMGA\_VCN\_PRB** tests **SGMGA\_VCN** and **SGMGA\_VCN\_ORDERED**.

-   [sgmga\_vcn\_prb.cpp](sgmga_vcn_prb.cpp), the program.
-   [sgmga\_vcn\_prb\_output.txt](sgmga_vcn_prb_output.txt), the output
    file.

**SGMGA\_VCN\_COEF\_PRB** tests **SGMGA\_VCN\_COEF**.

-   [sgmga\_vcn\_coef\_prb.cpp](sgmga_vcn_coef_prb.cpp), the program.
-   [sgmga\_vcn\_coef\_prb\_output.txt](sgmga_vcn_coef_prb_output.txt),
    the output file.

**SGMGA\_WEIGHT\_PRB** tests **SGMGA\_WEIGHT**.

-   [sgmga\_weight\_prb.cpp](sgmga_weight_prb.cpp), the program.
-   [sgmga\_weight\_prb\_output.txt](sgmga_weight_prb_output.txt), the
    output file.

**SGMGA\_WRITE\_PRB** tests **SGMGA\_WRITE**.

-   [sgmga\_write\_prb.cpp](sgmga_write_prb.cpp), the program.
-   [sgmga\_write\_prb\_output.txt](sgmga_write_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **SGMGA\_ANISO\_BALANCE** "balances" an anisotropic weight vector.
-   **SGMGA\_ANISO\_NORMALIZE** normalizes the SGMGA anisotropic weight
    vector.
-   **SGMGA\_IMPORTANCE\_TO\_ANISO:** importance vector to anisotropic
    weight vector.
-   **SGMGA\_INDEX** indexes an SGMGA grid.
-   **SGMGA\_POINT** computes the points of an SGMGA rule.
-   **SGMGA\_PRODUCT\_WEIGHT** computes the weights of a mixed product
    rule.
-   **SGMGA\_SIZE** sizes an SGMGA grid, discounting duplicates.
-   **SGMGA\_SIZE\_TOTAL** sizes an SGMGA grid, counting duplicates.
-   **SGMGA\_UNIQUE\_INDEX** maps nonunique to unique points.
-   **SGMGA\_VCN** returns the next constrained vector.
-   **SGMGA\_VCN\_COEF** returns the "next" constrained vector's
    coefficient.
-   **SGMGA\_VCN\_COEF\_NAIVE** returns the "next" constrained vector's
    coefficient.
-   **SGMGA\_VCN\_NAIVE** returns the next constrained vector.
-   **SGMGA\_VCN\_ORDERED** returns the "next" constrained vector, with
    ordering.
-   **SGMGA\_VCN\_ORDERED\_NAIVE** returns the "next" constrained
    vector, with ordering.
-   **SGMGA\_WEIGHT** computes weights for an SGMGA grid.
-   **SGMGA\_WRITE** writes an SGMGA rule to six files.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 June 2010.*
