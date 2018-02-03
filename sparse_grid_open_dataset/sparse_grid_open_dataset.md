SPARSE\_GRID\_OPEN\_DATASET\
Sparse Grid from Open 1D Quadrature Rule {#sparse_grid_open_dataset-sparse-grid-from-open-1d-quadrature-rule align="center"}
========================================

------------------------------------------------------------------------

**SPARSE\_GRID\_OPEN\_DATASET** is a C++ program which computes a sparse
quadrature rule for an arbitrary spatial dimension, associated with a
particular "level" of the Smolyak construction, and based on an open 1D
quadrature rule.

The program offers a choice of open 1D quadrature rules to be used:

-   **2: F2**, the Fejer type 2 rule;
-   **3: GP**, the Gauss-Patterson rule;
-   **4: NCO**, the Newton-Cotes Open rule;
-   **5: TS**, the Tanh-Sinh rule;

### Usage: {#usage align="center"}

> **sparse\_grid\_open\_dataset** *dim\_num* *level\_max* *rule*

where

-   **dim\_num** is the spatial dimension;
-   **level\_max** is the level of the Smolyak construction;
-   **rule** is the index (2/3/4/5) of the 1D quadrature rule to use.

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SPARSE\_GRID\_OPEN\_DATASET** is available in [a C++
version](../../cpp_src/sparse_grid_open_dataset/sparse_grid_open_dataset.html)
and [a FORTRAN90
version](../../f_src/sparse_grid_open_dataset/sparse_grid_open_dataset.html)
and [a MATLAB
version](../../m_src/sparse_grid_open_dataset/sparse_grid_open_dataset.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_DISPLAY](../../m_src/cc_display/cc_display.html), a MATLAB library
which can compute and display Clenshaw Curtis grids in two dimensions,
as well as sparse grids formed from sums of Clenshaw Curtis grids.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.html),
a dataset directory which defines quadrature rules; a number of examples
of sparse grid quadrature rules are included.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for various intervals and weight functions.

[SGMGA](../../cpp_src/sgmga/sgmga.html), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.html), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids.

[SPARSE\_GRID\_CC\_DATASET](../../cpp_src/sparse_grid_cc_dataset/sparse_grid_cc_dataset.html),
a C++ program which creates a sparse grid dataset based on
Clenshaw-Curtis rules.

[SPARSE\_GRID\_CLOSED\_DATASET](../../cpp_src/sparse_grid_closed_dataset/sparse_grid_closed_dataset.html),
a C++ program which creates a sparse grid dataset based on closed rules
(Clenshaw-Curtis, Newton-Cotes-Closed).

[SPARSE\_GRID\_DISPLAY](../../m_src/sparse_grid_display/sparse_grid_display.html),
a MATLAB library which can display a 2D or 3D sparse grid.

[SPARSE\_GRID\_F2](../../datasets/sparse_grid_f2/sparse_grid_f2.html), a
dataset directory which contains sparse grids based on a Fejer Type 2
rule.

[SPARSE\_GRID\_GL\_DATASET](../../cpp_src/sparse_grid_gl_dataset/sparse_grid_gl_dataset.html),
a C++ program which creates a sparse grid dataset based on
Gauss-Legendre rules.

[SPARSE\_GRID\_HERMITE\_DATASET](../../cpp_src/sparse_grid_hermite_dataset/sparse_grid_hermite_dataset.html),
a C++ program which creates a sparse grid dataset based on Gauss-Hermite
rules.

[SPARSE\_GRID\_LAGUERRE\_DATASET](../../cpp_src/sparse_grid_laguerre_dataset/sparse_grid_laguerre_dataset.html),
a C++ program which creates a sparse grid dataset based on
Gauss-Laguerrre rules.

[SPARSE\_GRID\_MIXED](../../cpp_src/sparse_grid_mixed/sparse_grid_mixed.html),
a C++ library which constructs a sparse grid using different rules in
each spatial dimension.

[SPARSE\_GRID\_MIXED\_DATASET](../../cpp_src/sparse_grid_mixed_dataset/sparse_grid_mixed_dataset.html),
a C++ program which creates a sparse grid dataset based on a mixture of
1D rules.

[SPARSE\_GRID\_MIXED\_GROWTH](../../cpp_src/sparse_grid_mixed_growth/sparse_grid_mixed_growth.html),
a C++ library which creates a sparse grid dataset based on a mixed set
of 1D factor rules, and experiments with the use of a linear growth rate
for the quadrature rules.

[SPARSE\_GRID\_NCC](../../datasets/sparse_grid_ncc/sparse_grid_ncc.html),
a dataset directory which contains sparse grids based on a Newton Cotes
closed rule.

[SPARSE\_GRID\_NCO](../../datasets/sparse_grid_nco/sparse_grid_nco.html),
a dataset directory which contains sparse grids based on a Newton Cotes
open rule.

[SPARSE\_GRID\_OPEN](../../cpp_src/sparse_grid_open/sparse_grid_open.html),
a C++ library which defines define sparse grids based on open nested
quadrature rules.

[TOMS847](../../m_src/toms847/toms847.html), a MATLAB program which uses
sparse grids to carry out multilinear hierarchical interpolation. It is
commonly known as SPINTERP, and is by Andreas Klimke.

### Reference: {#reference align="center"}

1.  Volker Barthelmann, Erich Novak, Klaus Ritter,\
    High Dimensional Polynomial Interpolation on Sparse Grids,\
    Advances in Computational Mathematics,\
    Volume 12, Number 4, 2000, pages 273-288.
2.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
3.  Walter Gautschi,\
    Numerical Quadrature in the Presence of a Singularity,\
    SIAM Journal on Numerical Analysis,\
    Volume 4, Number 3, 1967, pages 357-362.
4.  Thomas Gerstner, Michael Griebel,\
    Numerical Integration Using Sparse Grids,\
    Numerical Algorithms,\
    Volume 18, Number 3-4, 1998, pages 209-232.
5.  Prem Kythe, Michael Schaeferkotter,\
    Handbook of Computational Methods for Integration,\
    Chapman and Hall, 2004,\
    ISBN: 1-58488-428-2,\
    LC: QA299.3.K98.
6.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
7.  Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
8.  Thomas Patterson,\
    The Optimal Addition of Points to Quadrature Formulae,\
    Mathematics of Computation,\
    Volume 22, Number 104, October 1968, pages 847-856.
9.  Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.
10. Dennis Stanton, Dennis White,\
    Constructive Combinatorics,\
    Springer, 1986,\
    ISBN: 0387963472,\
    LC: QA164.S79.

### Source Code: {#source-code align="center"}

-   [sparse\_grid\_open\_dataset.cpp](sparse_grid_open_dataset.cpp), the
    source code.

### Examples and Tests: {#examples-and-tests align="center"}

**F2\_D2\_LEVEL2** is an example computation based on a Fejer type 2
rule in two dimensions and level 2.

-   [f2\_d2\_level2\_output.txt](f2_d2_level2_output.txt), the printed
    output from a run of the program for DIM\_NUM=2 and LEVEL\_MAX=2 and
    RULE=2.
-   [f2\_d2\_level2\_x.txt](f2_d2_level2_x.txt), the abscissas of the
    computed quadrature rule.
-   [f2\_d2\_level2\_w.txt](f2_d2_level2_w.txt), the weights of the
    computed quadrature rule.
-   [f2\_d2\_level2\_r.txt](f2_d2_level2_r.txt), the integration region
    of the computed quadrature rule.

**GP\_D2\_LEVEL2** is an example computation based on a Gauss-Patterson
rule in two dimensions and level 2.

-   [gp\_d2\_level2\_output.txt](gp_d2_level2_output.txt), the printed
    output from a run of the program for DIM\_NUM=2 and LEVEL\_MAX=2 and
    RULE=3.
-   [gp\_d2\_level2\_x.txt](gp_d2_level2_x.txt), the abscissas of the
    computed quadrature rule.
-   [gp\_d2\_level2\_w.txt](gp_d2_level2_w.txt), the weights of the
    computed quadrature rule.
-   [gp\_d2\_level2\_r.txt](gp_d2_level2_r.txt), the integration region
    of the computed quadrature rule.

**NCO\_D2\_LEVEL2** is an example computation based on a Newton-Cotes
Open rule in two dimensions and level 2.

-   [nco\_d2\_level2\_output.txt](nco_d2_level2_output.txt), the printed
    output from a run of the program for DIM\_NUM=2 and LEVEL\_MAX=2 and
    RULE=4.
-   [nco\_d2\_level2\_x.txt](nco_d2_level2_x.txt), the abscissas of the
    computed quadrature rule.
-   [nco\_d2\_level2\_w.txt](nco_d2_level2_w.txt), the weights of the
    computed quadrature rule.
-   [nco\_d2\_level2\_r.txt](nco_d2_level2_r.txt), the integration
    region of the computed quadrature rule.

**TS\_D2\_LEVEL4** is an example computation based on a tanh-sinh rule
in two dimensions and level 4.

-   [ts\_d2\_level4\_output.txt](ts_d2_level4_output.txt), the output
    file.
-   [ts\_d2\_level4\_x.txt](ts_d2_level4_x.txt), the abscissas.
-   [ts\_d2\_level4\_w.txt](ts_d2_level4_w.txt), the weights.
-   [ts\_d2\_level4\_r.txt](ts_d2_level4_r.txt), the region.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SPARSE\_GRID\_OPEN\_DATASET.
-   **ABSCISSA\_LEVEL\_OPEN\_ND:** first level at which given abscissa
    is generated.
-   **CHOOSE** computes the binomial coefficient C(N,K).
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **F2\_ABSCISSA** returns the I-th abscissa for the Fejer type 2
    rule.
-   **F2\_WEIGHTS** computes weights for a Fejer type 2 rule.
-   **GP\_ABSCISSA** returns the I-th abscissa for a Gauss-Patterson
    rule.
-   **GP\_WEIGHTS** sets weights for a Gauss-Patterson rule.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **INDEX\_TO\_LEVEL\_OPEN** determines the level of a point given its
    index.
-   **LEVEL\_TO\_ORDER\_OPEN** converts a level to an order for open
    rules.
-   **MULTIGRID\_INDEX1** returns an indexed multidimensional grid.
-   **MULTIGRID\_SCALE\_OPEN** renumbers a grid as a subgrid on a higher
    level.
-   **NCO\_ABSCISSA** returns the I-th abscissa for the Newton Cotes
    open rule.
-   **NCO\_WEIGHTS** computes weights for a Newton-Cotes Open rule.
-   **PRODUCT\_WEIGHTS\_OPEN:** weights for an open product rule.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SPARSE\_GRID\_OFN\_SIZE** sizes a sparse grid using Open Fully
    Nested rules.
-   **LEVELS\_OPEN\_INDEX** computes open grids with 0 &lt;= LEVEL &lt;=
    LEVEL\_MAX.
-   **SPGRID\_OPEN\_WEIGHTS** gathers the weights.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TS\_ABSCISSA** returns the I-th abscissa for the tanh-sinh rule.
-   **TS\_WEIGHTS** computes weights for a tanh-sinh rule.
-   **VEC\_COLEX\_NEXT2** generates vectors in colex order.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 December 2009.*
