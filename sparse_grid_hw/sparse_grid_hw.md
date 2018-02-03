SPARSE\_GRID\_HW\
Sparse Grids for Uniform and Normal Weights\
Heiss and Winschel {#sparse_grid_hw-sparse-grids-for-uniform-and-normal-weights-heiss-and-winschel align="center"}
============================================

------------------------------------------------------------------------

**SPARSE\_GRID\_HW** is a C++ library which can compute sparse grids for
multidimensional integration, based on 1D rules for the unit interval
with unit weight function, or for the real line with the Gauss-Hermite
weight function. The original MATLAB code is by Florian Heiss and Viktor
Winschel.

The original version of this software, and other information, is
available at [http://sparse-grids.de](http://sparse-grids.de/).

Four built-in 1D families of quadrature rules are supplied, and the user
can extend the package by supplying any family of 1D quadrature rules.

The built-in families are identified by a 3-letter key which is also the
name of the function that returns members of the family:

-   **gqu**, standard Gauss-Legendre quadrature rules, for the unit
    interval \[0,1\], with weight function w(x) = 1.
-   **gqn**, standard Gauss-Hermite quadrature rules, for the infinite
    interval (-oo,+oo), with weight function w(x) =
    exp(-x\*x/2)/sqrt(2\*pi).
-   **kpu**, Kronrod-Patterson quadrature rules, for the unit interval
    \[0,1\], with weight function w(x) = 1. These sacrifice some of the
    precision of **gqu** in order to provide a family of nested rules.
-   **kpn**, Kronrod-Patterson quadrature rules, for the infinite
    interval (-oo,+oo), with weight function w(x) =
    exp(-x\*x/2)/sqrt(2\*pi). These sacrifice some of the precision of
    **gqn** in order to provide a family of nested rules.

The user can build new sparse grids by supplying a 1D quadrature family.
Examples provided include:

-   **cce\_order**, Clenshaw-Curtis Exponential quadrature rules, for
    the unit interval \[0,1\], with weight function w(x) = 1. The K-th
    call returns the rule of order 1 if K is 1, and 2\*(K-1)+1
    otherwise.
-   **ccl\_order**, Clenshaw-Curtis Linear quadrature rules, for the
    unit interval \[0,1\], with weight function w(x) = 1. The K-th call
    returns the rule of order 2\*K-1.
-   **ccs\_order**, slow Clenshaw-Curtis Slow quadrature rules, for the
    unit interval \[0,1\], with weight function w(x) = 1. The K-th call
    returns the rule of order 1 if K is 1, and otherwise a rule whose
    order N has the form 2\^E+1 and is the lowest such order with
    precision at least 2\*K-1.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPARSE\_GRID\_HW** is available in [a C
version](../../c_src/sparse_grid_hw/sparse_grid_hw.html) and [a C++
version](../../cpp_src/sparse_grid_hw/sparse_grid_hw.html) and [a
FORTRAN77 version](../../f77_src/sparse_grid_hw/sparse_grid_hw.html) and
[a FORTRAN90 version](../../f_src/sparse_grid_hw/sparse_grid_hw.html)
and [a MATLAB version](../../m_src/sparse_grid_hw/sparse_grid_hw.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for various intervals and weight functions.

[SANDIA\_RULES](../../cpp_src/sandia_rules/sandia_rules.html), a C++
library which generates Gauss quadrature rules of various orders and
types.

[SGMGA](../../cpp_src/sgmga/sgmga.html), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.html), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids, by Knut
Petras.

### Author: {#author align="center"}

Original MATLAB code by Florian Heiss and Viktor Winschel. C++ version
by John Burkardt.

### Reference: {#reference align="center"}

-   Alan Genz, Bradley Keister,\
    Fully symmetric interpolatory rules for multiple integrals over
    infinite regions with Gaussian weight,\
    Journal of Computational and Applied Mathematics,\
    Volume 71, 1996, pages 299-309.
-   Florian Heiss, Viktor Winschel,\
    Likelihood approximation by numerical integration on sparse grids,\
    Journal of Econometrics,\
    Volume 144, Number 1, May 2008, pages 62-80.
-   Thomas Patterson,\
    The optimal addition of points to quadrature formulae,\
    Mathematics of Computation,\
    Volume 22, Number 104, October 1968, pages 847-856.
-   Knut Petras,\
    Smolyak Cubature of Given Polynomial Degree with Few Nodes for
    Increasing Dimension,\
    Numerische Mathematik,\
    Volume 93, Number 4, February 2003, pages 729-753.

### Source Code: {#source-code align="center"}

-   [sparse\_grid\_hw.cpp](sparse_grid_hw.cpp), the source code.
-   [sparse\_grid\_hw.hpp](sparse_grid_hw.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_grid\_hw\_prb.cpp](sparse_grid_hw_prb.cpp), a sample
    calling program.
-   [sparse\_grid\_hw\_prb\_output.txt](sparse_grid_hw_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CCE\_ORDER:** order of a Clenshaw-Curtis Exponential rule from the
    level.
-   **CCL\_ORDER** computes the order of a CCL rule from the level.
-   **CCS\_ORDER:** order of a "slow growth" Clenshaw Curtis quadrature
    rule.
-   **CC** computes a Clenshaw Curtis quadrature rule based on order.
-   **CPU\_TIME** reports the elapsed CPU time.
-   **FN\_INTEGRAL** is the integral of the Hermite test function.
-   **FN\_VALUE** is a Hermite test function.
-   **FU\_INTEGRAL** is the integral of the test function for the
    \[0,1\]\^D interval.
-   **FU\_VALUE** is a sample function for the \[0,1\]\^D interval.
-   **GET\_SEQ** generates all positive integer D-vectors that sum to
    NORM.
-   **GQN** provides data for Gauss quadrature with a normal weight.
-   **GQN\_ORDER** computes the order of a GQN rule from the level.
-   **GQN2\_ORDER** computes the order of a GQN rule from the level.
-   **GQU** provides data for Gauss quadrature with a uniform weight.
-   **GQU\_ORDER** computes the order of a GQU rule from the level.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_FACTORIAL2** computes the double factorial function.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MOP** returns the I-th power of -1 as an I4 value.
-   **I4\_POWER** returns the value of I\^J.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4VEC\_CUM0\_NEW** computes the cumulutive sum of the entries of
    an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **KPN** provides data for Kronrod-Patterson quadrature with a normal
    weight.
-   **KPN\_ORDER** computes the order of a KPN rule from the level.
-   **KPU** provides data for Kronrod-Patterson quadrature with a
    uniform weight.
-   **KPU\_ORDER** computes the order of a KPU rule from the level.
-   **NUM\_SEQ** returns the number of compositions of the integer N
    into K parts.
-   **NWSPGR** generates nodes and weights for sparse grid integration.
-   **NWSPGR\_SIZE** determines the size of a sparse grid rule.
-   **QUAD\_RULE\_PRINT** prints a multidimensional quadrature rule.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8CVV\_OFFSET** determines the row offsets of an R8CVV.
-   **R8CVV\_PRINT** prints an R8CVV.
-   **R8CVV\_RGET\_NEW** gets row I from an R8CVV.
-   **R8CVV\_RSET** sets row I from an R8CVV.
-   **R8MAT\_NORMAL\_01\_NEW** returns a unit pseudonormal R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DIRECT\_PRODUCT** creates a direct product of R8VEC's.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_TRANSPOSE\_PRINT** prints an R8VEC "transposed".
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **RULE\_SORT** sorts a multidimensional quadrature rule.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **SYMMETRIC\_SPARSE\_SIZE** sizes a symmetric sparse rule.
-   **TENSOR\_PRODUCT** generates a tensor product quadrature rule.
-   **TENSOR\_PRODUCT\_CELL** generates a tensor product quadrature
    rule.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 26 February 2014.*
