FASTGL\
Fast computation of Gauss-Legendre Quadrature Points and Weights {#fastgl-fast-computation-of-gauss-legendre-quadrature-points-and-weights align="center"}
================================================================

------------------------------------------------------------------------

**FASTGL** is a C++ library which carries out the fast computation of
the K-th value and weight of an N-point Gauss-Legendre quadrature rule,
by Ignace Bogaert.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the BSD license.](../../txt/bsd_license.txt)

### Languages: {#languages align="center"}

**FASTGL** is available in [a C version](../../c_src/fastgl/fastgl.md)
and [a C++ version](../../master/fastgl/fastgl.md) and [a FORTRAN90
version](../../f_src/fastgl/fastgl.md) and [a MATLAB
version](../../m_src/fastgl/fastgl.md) and [a Python
version](../../py_src/fastgl/fastgl.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LEGENDRE\_RULE](../../master/legendre_rule/legendre_rule.md), a C++
program which computes a Gauss-Legendre quadrature rule.

[QUADMOM](../../master/quadmom/quadmom.md), a C++ library which
computes a Gaussian quadrature rule for a weight function rho(x) based
on the Golub-Welsch procedure that only requires knowledge of the
moments of rho(x).

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
contains information about quadrature rules, both as tabulated values,
and as computational procedures.

[TOMS655](../../master/toms655/toms655.md), a C++ library which
computes the weights for interpolatory quadrature rules; this library is
commonly called IQPACK, by Sylvan Elhay and Jaroslav Kautsky.

### Reference: {#reference align="center"}

1.  Ignace Bogaert,\
    Iteration-free computation of Gauss-Legendre quadrature nodes and
    weights,\
    SIAM Journal on Scientific Computing,\
    Volume 36, Number 3, 2014, pages A1008-1026.

### Source Code: {#source-code align="center"}

-   [fastgl.cpp](fastgl.cpp), the source code.
-   [fastgl.hpp](fastgl.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fastgl\_prb.cpp](fastgl_prb.cpp), a sample calling program.
-   [fastgl\_prb\_output.txt](fastgl_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **GLPair** computes the kth GL pair of an n-point rule.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 December 2015.*
