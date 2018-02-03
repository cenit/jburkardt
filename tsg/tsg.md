TSG\
TASMANIAN Sparse Grid Library {#tsg-tasmanian-sparse-grid-library align="center"}
=============================

------------------------------------------------------------------------

**TSG** includes C++ programs which demonstrate the use of the
TasmanianSparseGrid (TSG) package, which implements routines for working
with sparse grids, to efficiently estimate integrals or compute
interpolants of scalar functions of multidimensional arguments.

TSG can create three kinds of rules:

-   Global grids, for globally smooth functions;
-   Local polynomial grids, a piecewise polynomial approach for
    non-smooth functions
-   Wavelet grids, also for non-smooth functions, but this option can
    sometimes achieve better accuracy with fewer points.

TSG is a family of algorithms for constructing multidimensional
quadrature and interpolation rules from tensor products of 1-dimensional
versions of such rules.

TSG includes a large variety of 1-dimensional rules, which are generally
defined, by default, over the interval \[-1,+1\]. In that case, the
multidimensional quadrature and interpolation rules will be defined over
the hypercube \[-1,+1\]\^d, but a simple linear transformation can be
carried out by TSG to redefine the linearly redefine the region.

The one-dimensional rules that can be used include:

-   Chebyshev;
-   Clenshaw Curtis;
-   Fejer Type 2;
-   Gauss Chebyshev Type 1;
-   Gauss Chebyshev Type 2;
-   Gauss Gegenbauer;
-   Gauss Hermite;
-   Gauss Jacobi;
-   Gauss Laguerre;
-   Gauss Legendre;
-   Local polynomial;
-   Local polynomial zero;
-   Local wavelet.

The TasmanianSparseGrid library is available for download from
<http://tasmanian.ornl.gov/>.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU GPL license.](../../txt/gnu_gpl.txt)

### Languages: {#languages align="center"}

**TSG** is available in [a C++ version](../../master/tsg/tsg.md) and
[a FORTRAN90 version](../../f_src/tsg/tsg.md) and [a MATLAB
version](../../m_src/tsg/tsg.md).

### Related Programs: {#related-programs align="center"}

[SGMG](../../master/sgmg/sgmg.md), a C++ library which creates a
sparse grid dataset based on a mixed set of 1D factor rules, and
experiments with the use of a linear growth rate for the quadrature
rules.

[SGMGA](../../master/sgmga/sgmga.md), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.md), a C library which
estimates the integral of a function over a M-dimensional hypercube
using a sparse grid, by Knut Petras;

[SPARSE\_GRID\_CC](../../master/sparse_grid_cc/sparse_grid_cc.md), a
C++ library which creates sparse grids based on Clenshaw-Curtis rules.

[SPARSE\_GRID\_HW](../../master/sparse_grid_hw/sparse_grid_hw.md), a
C++ library which creates sparse grids based on Gauss-Legendre,
Gauss-Hermite, Gauss-Patterson, or a nested variation of Gauss-Hermite
rules, by Florian Heiss and Viktor Winschel.

[SPINTERP](../../m_src/spinterp/spinterp.md), a MATLAB library which
carries out piecewise multilinear hierarchical sparse grid
interpolation; an earlier version of this software is ACM TOMS Algorithm
847, by Andreas Klimke;

### Author: {#author align="center"}

Miroslav Stoyanov, Oak Ridge National Laboratory, mkstoyanov@gmail.com.

### References: {#references align="center"}

1.  Miro Stoyanov,\
    User Manual: TASMANIAN Sparse Grids,\
    ORNL Report,\
    Oak Ridge National Laboratory, August 2013.

### Examples and Tests: {#examples-and-tests align="center"}

**TSG\_PRB** is a version of the example calling program provided with
the TasmanianSparseGrids software library.

-   [tsg\_prb.cpp](tsg_prb.cpp), the calling program;
-   [tsg\_prb\_output.txt](tsg_prb_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 November 2013.*
