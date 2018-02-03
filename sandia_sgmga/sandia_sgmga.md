SANDIA\_SGMGA\
Sparse Grid Mixed Growth Anisotropic Rules. {#sandia_sgmga-sparse-grid-mixed-growth-anisotropic-rules. align="center"}
===========================================

------------------------------------------------------------------------

**SANDIA\_SGMGA** is a C++ library which implements a family of sparse
grid rules. These rules are "mixed", in that a different 1D quadrature
rule can be specified for each dimension. Moreover, each 1D quadrature
rule comes in a family of increasing size whose growth rate (typically
linear or exponential) is chosen by the user. Finally, the user may also
specify different weights for each dimension, resulting in anisotropic
rules.

**SANDIA\_SGMGA** is a variant of the SGMGA library. It has the same
capabilities as that library, but it uses a different interface to the
SANDIA\_RULES routines which compute points and weights of quadrater
rules. Instead of passing the parameters needed by some of those rules
as function arguments, these values are made available indirectly. This
library implements that indirect storage using a function called
**parameter**, which must therefore be supplied by the user as part of
every program that calls the library. Refer to the source code of the
example programs to see how **parameter** is defined and used.

**SANDIA\_SGMGA** calls routines from the **SANDIA\_RULES** and
**SANDIA\_RULES2** libraries. Source code or compiled copies of those
libraries must be available when a program wishes to use the
**SANDIA\_SGMGA** library.

  Name                         Abbreviation   Interval    Weight function
  ---------------------------- -------------- ----------- --------------------------
  Clenshaw-Curtis              CC             \[-1,+1\]   1
  Fejer Type 2                 F2             \[-1,+1\]   1
  Gauss Patterson              GP             \[-1,+1\]   1
  Gauss-Legendre               GL             \[-1,+1\]   1
  Gauss-Hermite                GH             (-oo,+oo)   e^-x\*x^
  Generalized Gauss-Hermite    GGH            (-oo,+oo)   |x|^alpha^ e^-x\*x^
  Gauss-Laguerre               LG             \[0,+oo)    e^-x^
  Generalized Gauss-Laguerre   GLG            \[0,+oo)    x^alpha^ e^-x^
  Gauss-Jacobi                 GJ             \[-1,+1\]   (1-x)^alpha^ (1+x)^beta^
  Hermite Genz-Keister         HGK            (-oo,+oo)   e^-x\*x^

In the sparse grid setting, for any 1D quadrature rule, it is necessary
to select a sequence of rules of increasing order (number of points),
indexed by a variable we will call the "level". Thus, although the
Clenshaw Curtis rule can be set up for any, a common procedure in sparse
grids is to choose select the rules of order 1, 3, 5, 9, 17, 33, ...,
assigning these the levels 0, 1, 2, 3, 4, 5 and so forth. The
relationship between level (L) and order (O) will be called the *growth
rule*.

The details of growth rules vary somewhat, depending on whether there is
nesting to take advantage of, whether the user wants to economize as
much as possible in the number of points added, and so on. For each
dimension, the user must specify a growth rule appropriate for the
chosen quadrature rule. We provide a number of predefined growth rules
that are suitable.

Here are the names of the growth rule functions, with a brief comment on
their behavior and use. These growth rule functions are available in the
**sandia\_rules** library where their details may be examined.

  Growth Rule                      Discussion
  -------------------------------- ----------------------------------------------------------------------------------
  level\_to\_order\_exp\_cc()      Clenshaw Curtis rule. Fast growth is exponential
  level\_to\_order\_exp\_f2()      Fejer Type 2 rule. Fast growth is exponential
  level\_to\_order\_exp\_gauss()   Gaussian rules. Fast growth is exponential, O=2\^(L+1)-1
  level\_to\_order\_exp\_hgk()     Genz-Keister rules for Hermite weight;
  level\_to\_order\_linear\_nn()   Linear growth for a non-nested rule;
  level\_to\_order\_linear\_wn()   Linear growth for a weakly-nested rule (typically, an abscissas at 0 is common);

Each growth rule has "slow", "moderate" and "fast" settings. A scalar
quantity GROWTH selects the rule order O for level L from the three
growth options for each 1D rule. In the case of exponentially growing
rules, the slow and moderate growth rules choose O indirectly, by
imposing a requirement on P, the degree of precision of the rule.

  Value   Name       Meaning
  ------- ---------- ----------------------------------------------------------------------
  0       Slow       O=L+1 for linear rules, P=2\*L+1 for exponential
  1       Moderate   O=2\*L+1 for linear rules, P=4\*L+1 for exponential
  2       Full       O=2\*L+1 for linear rules, O = next rule in sequence for exponential

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SANDIA\_SGMGA** is available in [a C++
version](../../cpp_src/sandia_sgmga/sandia_sgmga.html).

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

[SANDIA\_RULES2](../../cpp_src/sandia_rules2/sandia_rules2.html), a C++
library which contains a very small selection of functions which serve
as an interface between SANDIA\_SGMG or SANDIA\_SGMGA and SANDIA\_RULES.

[SANDIA\_SGMG](../../cpp_src/sandia_sgmg/sandia_sgmg.html), a C++
library which creates a sparse grid dataset based on a mixed set of 1D
factor rules, and experiments with the use of a linear growth rate for
the quadrature rules. This is a version of SPARSE\_GRID\_MIXED\_GROWTH
that uses a different procedure for supplying the parameters needed to
evaluate certain quadrature rules.

[SANDIA\_SPARSE](../../cpp_src/sandia_sparse/sandia_sparse.html), a C++
library which computes the points and weights of a Smolyak sparse grid,
based on a variety of 1-dimensional quadrature rules.

[SGMG](../../cpp_src/sgmg/sgmg.html), a C++ library which creates a
sparse grid dataset based on a mixed set of 1D factor rules, and
experiments with the use of a linear growth rate for the quadrature
rules.

[SGMGA](../../cpp_src/sgmga/sgmga.html), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.html), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids, by Knut
Petras.

[SPARSE\_GRID\_DISPLAY](../../m_src/sparse_grid_display/sparse_grid_display.html),
a MATLAB program which can display a 2D or 3D sparse grid.

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

-   [sandia\_sgmga.cpp](sandia_sgmga.cpp), the source code.
-   [sandia\_sgmga.hpp](sandia_sgmga.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

**SANDIA\_SGMGA\_ANISO\_NORMALIZE\_PRB** tests
**SANDIA\_SGMGA\_ANISO\_BALANCE**, **SANDIA\_SGMGA\_ANISO\_NORMALIZE**
and **SANDIA\_SGMGA\_IMPORTANCE\_TO\_ANISO**.

-   [sandia\_sgmga\_aniso\_normalize\_prb.cpp](sandia_sgmga_aniso_normalize_prb.cpp),
    the program.
-   [sandia\_sgmga\_aniso\_normalize\_prb\_output.txt](sandia_sgmga_aniso_normalize_prb_output.txt),
    the output file.

**SANDIA\_SGMGA\_INDEX\_PRB** tests **SANDIA\_SGMGA\_INDEX**.

-   [sandia\_sgmga\_index\_prb.cpp](sandia_sgmga_index_prb.cpp), the
    program.
-   [sandia\_sgmga\_index\_prb\_output.txt](sandia_sgmga_index_prb_output.txt),
    the output file.

**SANDIA\_SGMGA\_POINT\_PRB** tests **SANDIA\_SGMGA\_POINT**.

-   [sandia\_sgmga\_point\_prb.cpp](sandia_sgmga_point_prb.cpp), the
    program.
-   [sandia\_sgmga\_point\_prb\_output.txt](sandia_sgmga_point_prb_output.txt),
    the output file.

**SANDIA\_SGMGA\_PRODUCT\_WEIGHT\_PRB** tests
**SANDIA\_SGMGA\_PRODUCT\_WEIGHT**.

-   [sandia\_sgmga\_product\_weight\_prb.cpp](sandia_sgmga_product_weight_prb.cpp),
    the program.
-   [sandia\_sgmga\_product\_weight\_prb\_output.txt](sandia_sgmga_product_weight_prb_output.txt),
    the output file.

**SANDIA\_SGMGA\_SIZE\_PRB** tests **SANDIA\_SGMGA\_SIZE** and
**SANDIA\_SGMGA\_SIZE\_TOTAL**.

-   [sandia\_sgmga\_size\_prb.cpp](sandia_sgmga_size_prb.cpp), the
    program.
-   [sandia\_sgmga\_size\_prb\_output.txt](sandia_sgmga_size_prb_output.txt),
    the output file.

**SANDIA\_SGMGA\_SIZE\_TABLE** tabulates the point counts from
**SANDIA\_SGMGA\_SIZE** for an isotropic rule over a range of dimensions
and levels.

-   [sandia\_sgmga\_size\_table.cpp](sandia_sgmga_size_table.cpp), the
    program.
-   [sandia\_sgmga\_size\_table\_output.txt](sandia_sgmga_size_table_output.txt),
    the output file.

**SANDIA\_SGMGA\_UNIQUE\_INDEX\_PRB** tests
**SANDIA\_SGMGA\_UNIQUE\_INDEX**.

-   [sandia\_sgmga\_unique\_index\_prb.cpp](sandia_sgmga_unique_index_prb.cpp),
    the program.
-   [sgmgav\_index\_prb\_output.txt](sandia_sgmga_unique_index_prb_output.txt),
    the output file.

**SANDIA\_SGMGA\_VCN\_PRB** tests **SANDIA\_SGMGA\_VCN** and
**SANDIA\_SGMGA\_VCN\_ORDERED**.

-   [sandia\_sgmga\_vcn\_prb.cpp](sandia_sgmga_vcn_prb.cpp), the
    program.
-   [sandia\_sgmga\_vcn\_prb\_output.txt](sandia_sgmga_vcn_prb_output.txt),
    the output file.

**SANDIA\_SGMGA\_VCN\_COEF\_PRB** tests **SANDIA\_SGMGA\_VCN\_COEF**.

-   [sandia\_sgmga\_vcn\_coef\_prb.cpp](sandia_sgmga_vcn_coef_prb.cpp),
    the program.
-   [sandia\_sgmga\_vcn\_coef\_prb\_output.txt](sandia_sgmga_vcn_coef_prb_output.txt),
    the output file.

**SANDIA\_SGMGA\_WEIGHT\_PRB** tests **SANDIA\_SGMGA\_WEIGHT**.

-   [sandia\_sgmga\_weight\_prb.cpp](sandia_sgmga_weight_prb.cpp), the
    program.
-   [sandia\_sgmga\_weight\_prb\_output.txt](sandia_sgmga_weight_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **SANDIA\_SGMGA\_ANISO\_BALANCE** "balances" an anisotropic weight
    vector.
-   **SANDIA\_SGMGA\_ANISO\_NORMALIZE** normalizes the SANDIA\_SGMGA
    anisotropic weight vector.
-   **SANDIA\_SGMGA\_IMPORTANCE\_TO\_ANISO:** importance vector to
    anisotropic weight vector.
-   **SANDIA\_SGMGA\_INDEX** indexes an SANDIA\_SGMGA grid.
-   **SANDIA\_SGMGA\_POINT** computes the points of an SANDIA\_SGMGA
    rule.
-   **SANDIA\_SGMGA\_PRODUCT\_WEIGHT** computes the weights of a mixed
    product rule.
-   **SANDIA\_SGMGA\_SIZE** sizes an SANDIA\_SGMGA grid, discounting
    duplicates.
-   **SANDIA\_SGMGA\_SIZE\_TOTAL** sizes an SANDIA\_SGMGA grid, counting
    duplicates.
-   **SANDIA\_SGMGA\_UNIQUE\_INDEX** maps nonunique to unique points.
-   **SANDIA\_SGMGA\_VCN** returns the next constrained vector.
-   **SANDIA\_SGMGA\_VCN\_COEF** returns the "next" constrained vector's
    coefficient.
-   **SANDIA\_SGMGA\_VCN\_COEF\_NAIVE:** "next" constrained vector's
    coefficient.
-   **SANDIA\_SGMGA\_VCN\_NAIVE** returns the next constrained vector.
-   **SANDIA\_SGMGA\_VCN\_ORDERED** returns the "next" constrained
    vector, with ordering.
-   **SANDIA\_SGMGA\_VCN\_ORDERED\_NAIVE** returns the "next"
    constrained vector, with ordering.
-   **SANDIA\_SGMGA\_WEIGHT** computes weights for an SANDIA\_SGMGA
    grid.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 January 2012.*
