SPARSE\_GRID\_GL\_DATASET\
Create Gauss-Legendre Sparse Grid Dataset {#sparse_grid_gl_dataset-create-gauss-legendre-sparse-grid-dataset align="center"}
=========================================

------------------------------------------------------------------------

**SPARSE\_GRID\_GL\_DATASET** is a C++ program which creates a
Gauss-Legendre sparse grid dataset.

### Usage: {#usage align="center"}

> **sparse\_grid\_gl\_dataset** *dim\_num* *level\_max*

where

-   *dim\_num* is the spatial dimension, typically between 2 and 10;
-   *level\_max* is the sparse grid level, typically between 0 and 6,
    which controls the number of points in the grid. The 1D rules used
    will have order 2\^(level\_max)+1.

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SPARSE\_GRID\_GL\_DATASET** is available in [a C++
version](../../master/sparse_grid_gl_dataset/sparse_grid_gl_dataset.md)
and [a FORTRAN90
version](../../f_src/sparse_grid_gl_dataset/sparse_grid_gl_dataset.md)
and [a MATLAB
version.](../../m_src/sparse_grid_gl_dataset/sparse_grid_gl_dataset.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_DISPLAY](../../m_src/cc_display/cc_display.md), a MATLAB library
which can compute and display Clenshaw Curtis grids in two dimensions,
as well as sparse grids formed from sums of Clenshaw Curtis grids.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which defines quadrature rules; a number of examples
of sparse grid quadrature rules are included.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines quadrature rules for various intervals and weight functions.

[SGMGA](../../master/sgmga/sgmga.md), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.md), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids.

[SPARSE\_GRID\_CC](../../datasets/sparse_grid_cc/sparse_grid_cc.md), a
dataset directory which contains the abscissas of sparse grids based on
a Clenshaw Curtis rule.

[SPARSE\_GRID\_CC\_DATASET](../../master/sparse_grid_cc_dataset/sparse_grid_cc_dataset.md),
a C++ program which creates a sparse grid dataset based on
Clenshaw-Curtis rules.

[SPARSE\_GRID\_F2](../../datasets/sparse_grid_f2/sparse_grid_f2.md), a
dataset directory which contains the abscissas of sparse grids based on
a Fejer Type 2 rule.

[SPARSE\_GRID\_GL](../../master/sparse_grid_gl/sparse_grid_gl.md), a
C++ library which can create a Gauss-Legendre sparse grid.

[SPARSE\_GRID\_GL](../../datasets/sparse_grid_gl/sparse_grid_gl.md), a
dataset directory which contains Gauss-Legendre sparse grids.

[SPARSE\_GRID\_GP](../../datasets/sparse_grid_gp/sparse_grid_gp.md), a
dataset directory which contains the abscissas of sparse grids based on
a Gauss Patterson rule.

[SPARSE\_GRID\_HERMITE\_DATASET](../../master/sparse_grid_hermite_dataset/sparse_grid_hermite_dataset.md),
a C++ program which creates a sparse grid dataset based on Gauss-Hermite
rules.

[SPARSE\_GRID\_LAGUERRE\_DATASET](../../master/sparse_grid_laguerre_dataset/sparse_grid_laguerre_dataset.md),
a C++ program which creates a sparse grid dataset based on
Gauss-Laguerrre rules.

[SPARSE\_GRID\_MIXED\_DATASET](../../master/sparse_grid_mixed_dataset/sparse_grid_mixed_dataset.md),
a C++ program which creates a sparse grid dataset based on a mixture of
1D rules.

[SPARSE\_GRID\_NCC](../../datasets/sparse_grid_ncc/sparse_grid_ncc.md),
a dataset directory which contains the abscissas of sparse grids based
on a Newton Cotes closed rule.

[SPARSE\_GRID\_NCO](../../datasets/sparse_grid_nco/sparse_grid_nco.md),
a dataset directory which contains the abscissas of sparse grids based
on a Newton Cotes open rule.

[SPARSE\_GRID\_OPEN\_DATASET](../../master/sparse_grid_open_dataset/sparse_grid_open_dataset.md),
a C++ program which creates a sparse grid dataset based on open rules
(Fejer 2, Gauss-Patterson, Newton-Cotes-Open).

[TOMS847](../../m_src/toms847/toms847.md), a MATLAB program which uses
sparse grids to carry out multilinear hierarchical interpolation. It is
commonly known as SPINTERP, and is by Andreas Klimke.

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

-   [sparse\_grid\_gl\_dataset.cpp](sparse_grid_gl_dataset.cpp), the
    source code.

### Examples and Tests: {#examples-and-tests align="center"}

Here are the three quadrature files created by the command

> **sparse\_grid\_gl\_dataset 2 3**

-   [sparse\_grid\_gl\_dataset\_output.txt](sparse_grid_gl_dataset_output.txt),
    the printed output from the program.
-   [gl\_d2\_level3\_r.txt](gl_d2_level3_r.txt), the "R" or "region"
    file.
-   [gl\_d2\_level3\_w.txt](gl_d2_level3_w.txt), the "W" or "weight"
    file.
-   [gl\_d2\_level3\_x.txt](gl_d2_level3_x.txt), the "X" or "abscissa"
    file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SPARSE\_GRID\_GL\_DATASET.
-   **CHOOSE** computes the binomial coefficient C(N,K).
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **GL\_ABSCISSA** sets abscissas for multidimensional Gauss-Legendre
    quadrature.
-   **GL\_WEIGHTS** returns weights for certain Gauss-Legendre
    quadrature rules.
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **INDEX\_LEVEL\_GL:** determine first level at which given index is
    generated.
-   **LEVEL\_TO\_ORDER\_OPEN** converts a level to an order for open
    rules.
-   **MULTIGRID\_INDEX\_Z** returns an indexed multidimensional grid.
-   **PRODUCT\_WEIGHT\_GL:** weights for a product Gauss-Legendre rule.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SPARSE\_GRID\_GL** computes a sparse grid of Gauss-Legendre
    points.
-   **SPARSE\_GRID\_GL\_INDEX** indexes the points forming a sparse grid
    of GL points.
-   **SPARSE\_GRID\_GL\_SIZE** sizes a sparse grid of Gauss-Legendre
    points.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VEC\_COLEX\_NEXT2** generates vectors in colex order.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 07 November 2009.*
