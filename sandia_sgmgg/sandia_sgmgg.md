SANDIA\_SGMGG\
Sparse Grid Mixed Growth, Generalized Construction {#sandia_sgmgg-sparse-grid-mixed-growth-generalized-construction align="center"}
==================================================

------------------------------------------------------------------------

**SANDIA\_SGMGG** is a C++ library which contains some experimental code
for the investigation of sparse grids constructed in a generalized
fashion, in which the set of indices corresponding to a sparse grid is
chosen in a generalized way, rather than being defined by a linear
constraint.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SANDIA\_SGMGG** is available in [a C++
version](../../master/sandia_sgmgg/sandia_sgmgg.md) and [a FORTRAN90
version](../../f_src/sandia_sgmgg/sandia_sgmgg.md) and [a MATLAB
version.](../../m_src/sandia_sgmgg/sandia_sgmgg.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[SANDIA\_RULES](../../master/sandia_rules/sandia_rules.md), a C++
library which produces 1D quadrature rules of Chebyshev, Clenshaw
Curtis, Fejer 2, Gegenbauer, generalized Hermite, generalized Laguerre,
Hermite, Jacobi, Laguerre, Legendre and Patterson types.

[SGMGA](../../master/sgmga/sgmga.md), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

### Reference: {#reference align="center"}

1.  Thomas Gerstner, Michael Griebel,\
    Dimension-adaptive tensor-product quadrature,\
    Computing,\
    Volume 71, Number 1, August 2003, pages 65-87.

### Source Code: {#source-code align="center"}

-   [sandia\_sgmgg.cpp](sandia_sgmgg.cpp), the source code.
-   [sandia\_sgmgg.hpp](sandia_sgmgg.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sandia\_sgmgg\_prb.cpp](sandia_sgmgg_prb.cpp), a sample calling
    program.
-   [sandia\_sgmgg\_prb\_output.txt](sandia_sgmgg_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **SANDIA\_SGMGG\_COEF\_INC2** computes tentative coefficient
    changes.
-   **SANDIA\_SGMGG\_COEF\_NAIVE** returns the combinatorial
    coefficients.
-   **SANDIA\_SGMGG\_NEIGHBOR\_NAIVE** returns the immediate forward
    neighbor array.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 January 2011.*
