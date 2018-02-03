SPARSE\_GRID\_MIXED\_DATASET\
Create Sparse Grid Using Mixed Rules {#sparse_grid_mixed_dataset-create-sparse-grid-using-mixed-rules align="center"}
====================================

------------------------------------------------------------------------

**SPARSE\_GRID\_MIXED\_DATASET** is a C++ program which creates a sparse
grid dataset from a mixture of 1D rules, using instructions from a user.

The available 1D quadrature rules are identified by a 2 or 3 letter
code, and include:

1.  **CC**, Clenshaw-Curtis:\
    defined on \[-1,+1\], with w(x)=1,\
    a closed, fully nested rule.
2.  **F2**, Fejer Type 2:\
    defined on (-1,+1), with w(x)=1,\
    an open, fully nested rule.
3.  **GP**, Gauss Patterson:\
    defined on (-1,+1), with w(x)=1,\
    a family of the midpoint rule, the 3 point Gauss Legendre rule, and
    then successive Patterson refinements,\
    an open, fully nested rule.
4.  **GL**, Gauss Legendre:\
    defined on (-1,+1), with w(x)=1,\
    an open, weakly nested rule.
5.  **GH**, Gauss Hermite:\
    defined on (-oo,+oo), with w(x)=exp(-x\*x),\
    an open, weakly nested rule.
6.  **GGH**, Generalized Gauss Hermite:\
    defined on (-oo,+oo), with w(x)=|x|\^alpha \* exp(-x\*x),\
    an open, weakly nested rule.
7.  **LG**, Gauss Laguerre:\
    defined on (0,+oo) with w(x)=exp(-x),\
    an open, non-nested rule.
8.  **GLG**, Generalized Gauss Laguerre:\
    defined on (0,+oo) with w(x)=x\^alpha \* exp(-x),\
    an open, non-nested rule.
9.  **GJ**, Gauss Jacobi:\
    defined on \[-1,+1\] with w(x)=(1-x)\^alpha (1+x)\^beta\
    an open, non-nested rule.
10. **GW**, Golub Welsch:\
    a rule defined by the user based on the Golub-Welsch algorithm,\
    with points and weights supplied by external routines,\
    presumably an open, non-nested rule.\
    *(not supported yet)*
11. **CCS**, Clenshaw-Curtis Slow-Growth:\
    defined on \[-1,+1\], with w(x)=1,\
    a closed, fully nested rule.
12. **F2S**, Fejer Type 2, Slow-Growth:\
    defined on (-1,+1), with w(x)=1,\
    an open, fully nested rule.
13. **GPS**, Gauss Patterson, Slow-Growth:\
    defined on (-1,+1), with w(x)=1,\
    a family of the midpoint rule, the 3 point Gauss Legendre rule, and
    then successive Patterson refinements,\
    an open, fully nested rule.

### Usage: {#usage align="center"}

The user first specifies:

-   **M** the spatial dimension of the quadrature region,
-   **L** the level that defines the Smolyak grid.

and these two values can actuallyb be specified on the command line.

Then the user specifies rules for each of the M dimensions. A rule, when
specified, may be used for one, or for multiple consecutive dimensions.

-   RULE identifies the 1D rule, and must be one of "CC", "F2", "GP",
    "GL", "GH", "GGH", "LG", "GLG", "GJ", "GW", "CCS", "F2S", "GPS".
-   the number of times the rule is to be used for consecutive
    dimensions;
-   ALPHA, a rule parameter, if needed. (Rules GGH, GLG and GJ);
-   BETA, a rule parameter, if needed. (Rule GJ only).

Finally, the user specifies a "file identifier", that is, the main part
of a string to be used when creating the files.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPARSE\_GRID\_MIXED\_DATASET** is available in [a C++
version](../../master/sparse_grid_mixed_dataset/sparse_grid_mixed_dataset.md)
and [a FORTRAN90
version](../../f_src/sparse_grid_mixed_dataset/sparse_grid_mixed_dataset.md)
and [a MATLAB
version](../../m_src/sparse_grid_mixed_dataset/sparse_grid_mixed_dataset.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[SANDIA\_RULES](../../master/sandia_rules/sandia_rules.md), a C++
library which produces 1D quadrature rules of Chebyshev, Clenshaw
Curtis, Fejer 2, Gegenbauer, generalized Hermite, generalized Laguerre,
Hermite, Jacobi, Laguerre, Legendre and Patterson types.

[SPARSE\_GRID\_CC](../../datasets/sparse_grid_cc/sparse_grid_cc.md), a
dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Clenshaw Curtis rule;

[SPARSE\_GRID\_CC\_DATASET](../../master/sparse_grid_cc_dataset/sparse_grid_cc_dataset.md),
a C++ program which creates a sparse grid dataset based on
Clenshaw-Curtis rules.

[SPARSE\_GRID\_CCS](../../datasets/sparse_grid_ccs/sparse_grid_ccs.md),
a dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Clenshaw Curtis rule with Slow Exponential Growth;

[SPARSE\_GRID\_F2](../../datasets/sparse_grid_f2/sparse_grid_f2.md), a
dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Fejer type 2 rule;

[SPARSE\_GRID\_GL](../../datasets/sparse_grid_gl/sparse_grid_gl.md), a
dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Gauss-Legendre rule;

[SPARSE\_GRID\_GL\_DATASET](../../master/sparse_grid_gl_dataset/sparse_grid_gl_dataset.md),
a C++ program which creates a sparse grid dataset based on
Gauss-Legendre rules.

[SPARSE\_GRID\_GP](../../datasets/sparse_grid_gp/sparse_grid_gp.md), a
dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Gauss-Patterson rule;

[SPARSE\_GRID\_HERMITE](../../datasets/sparse_grid_hermite/sparse_grid_hermite.md),
a dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Gauss-Hermite rule;

[SPARSE\_GRID\_HERMITE\_DATASET](../../master/sparse_grid_hermite_dataset/sparse_grid_hermite_dataset.md),
a C++ program which creates a sparse grid dataset based on Gauss-Hermite
rules.

[SPARSE\_GRID\_LAGUERRE](../../datasets/sparse_grid_laguerre/sparse_grid_laguerre.md),
a dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Gauss-Laguerre rule;

[SPARSE\_GRID\_LAGUERRE\_DATASET](../../master/sparse_grid_laguerre_dataset/sparse_grid_laguerre_dataset.md),
a C++ program which creates a sparse grid dataset based on
Gauss-Laguerrre rules.

[SPARSE\_GRID\_MIXED](../../master/sparse_grid_mixed/sparse_grid_mixed.md),
a C++ library which creates a sparse grid dataset based on a mixed set
of 1D factor rules.

[SPARSE\_GRID\_MIXED](../../datasets/sparse_grid_mixed/sparse_grid_mixed.md),
a dataset directory which contains multidimensional Smolyak sparse grids
based on a mixed set of 1D factor rules.

[SPARSE\_GRID\_NCC](../../datasets/sparse_grid_ncc/sparse_grid_ncc.md),
a dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Newton Cotes Closed rule;

[SPARSE\_GRID\_NCO](../../datasets/sparse_grid_nco/sparse_grid_nco.md),
a dataset directory which contains multidimensional Smolyak sparse grids
based on the 1D Newton Cotes Open rule;

[SPARSE\_GRID\_OPEN\_DATASET](../../master/sparse_grid_open_dataset/sparse_grid_open_dataset.md),
a C++ program which creates a sparse grid dataset based on open rules
(Fejer 2, Gauss-Patterson, Newton-Cotes-Open).

[SPARSE\_GRID\_TANH\_SINH](../../datasets/sparse_grid_tanh_sinh/sparse_grid_tanh_sinh.md),
a dataset directory which contains multidimensional Smolyak sparse grids
based on a 1D tanh-sinh rule;

### Reference: {#reference align="center"}

1.  Thomas Gerstner, Michael Griebel,\
    Numerical Integration Using Sparse Grids,\
    Numerical Algorithms,\
    Volume 18, Number 3-4, 1998, pages 209-232.
2.  Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
3.  Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.

### Source Code: {#source-code align="center"}

-   [sparse\_grid\_mixed\_dataset.cpp](sparse_grid_mixed_dataset.cpp),
    the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SPARSE\_GRID\_MIXED\_DATASET.
-   **CH\_CAP** capitalizes a single character.
-   **RULE\_STRING\_TO\_INDEX** converts a string identifying a rule to
    an index.
-   **S\_EQI** is a case insensitive comparison of two strings for
    equality.
-   **SPARSE\_GRID\_MIXED\_DATASET\_HANDLE** handles the creation of the
    dataset.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 25 December 2009.*
