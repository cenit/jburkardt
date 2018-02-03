SANDIA\_RULES2\
Interface Functions for SANDIA\_RULES {#sandia_rules2-interface-functions-for-sandia_rules align="center"}
=====================================

------------------------------------------------------------------------

**SANDIA\_RULES2** is a C++ library which contains a special set of
interface functions to be used when SANDIA\_SGMG or SANDIA\_SGMGA wish
to call SANDIA\_RULES for quadrature rules.

The environment in which SANDIA\_SGMG and SANDIA\_SGMGA are used means
that it is inconvenient to pass extra parameters that might be needed to
define a particular quadrature rule; in particular, the generalized
Hermite, generalized Laguerre, and Jacobi quadrature rules require one
or two parameters for a complete definition.

These two libraries arrange for the parameters to be available through
class mechanisms, so that they do not appear in the parameter list. In
an attempt to reproduce that environment, SANDIA\_RULES2 supplies the
corresponding "parameter free" calling sequences for the quadrature
rules. In order to make this scheme actually work, we declare (but do
not produce) a function called **parameter ( )** which is presumed to be
able to return the necessary information.

If a user wishes to test the SANDIA\_RULES2 code, it is then necessary
to supply a version of the **parameter** function. An example is
exhibited in the test code. It is of little importance that this
interface is awkward. We are simply emulating the way the system works
elsewhere because we need to make sure that the results are computed
correctly!

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
  11      User-supplied Open Rule      UO             Moderate Linear        ?           ?
  12      User-supplied Closed Rule    UC             Moderate Linear        ?           ?

Also included in this library are functions for Newton-Cotes Open
("NCO") and Newton-Cotes Closed ("NCC") rules, which can be used as
"User Supplied" rules.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SANDIA\_RULES2** is available in [a C++
version](../../cpp_src/sandia_rules2/sandia_rules2.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV1\_RULE](../../cpp_src/chebyshev1_rule/chebyshev1_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../cpp_src/chebyshev2_rule/chebyshev2_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[GEGENBAUER\_RULE](../../cpp_src/gegenbauer_rule/gegenbauer_rule.html),
a C++ program which can compute and print a Gauss-Gegenbauer quadrature
rule.

[GEN\_HERMITE\_RULE](../../cpp_src/gen_hermite_rule/gen_hermite_rule.html),
a C++ program which can compute and print a generalized Gauss-Hermite
quadrature rule.

[GEN\_LAGUERRE\_RULE](../../cpp_src/gen_laguerre_rule/gen_laguerre_rule.html),
a C++ program which can compute and print a generalized Gauss-Laguerre
quadrature rule.

[HERMITE\_RULE](../../cpp_src/hermite_rule/hermite_rule.html), a C++
program which can compute and print a Gauss-Hermite quadrature rule.

[JACOBI\_RULE](../../cpp_src/jacobi_rule/jacobi_rule.html), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_RULE](../../cpp_src/laguerre_rule/laguerre_rule.html), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LEGENDRE\_RULE](../../cpp_src/legendre_rule/legendre_rule.html), a C++
program which can compute and print a Gauss-Legendre quadrature rule.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines 1-dimensional quadrature rules.

[SANDIA\_RULES](../../cpp_src/sandia_rules/sandia_rules.html), a C++
library which produces 1D quadrature rules of Chebyshev, Clenshaw
Curtis, Fejer 2, Gegenbauer, generalized Hermite, generalized Laguerre,
Hermite, Jacobi, Laguerre, Legendre and Patterson types.

[SANDIA\_SGMG](../../cpp_src/sandia_sgmg/sandia_sgmg.html), a C++
library which creates a sparse grid dataset based on a mixed set of 1D
factor rules, and experiments with the use of a linear growth rate for
the quadrature rules. This is a version of SPARSE\_GRID\_MIXED\_GROWTH
that uses a different procedure for supplying the parameters needed to
evaluate certain quadrature rules.

[SANDIA\_SGMGA](../../cpp_src/sandia_sgmga/sandia_sgmga.html), a C++
library which creates sparse grids based on a mixture of 1D quadrature
rules, allowing anisotropic weights for each dimension. This is a
version of SGMGA that uses a different procedure for supplying the
parameters needed to evaluate certain quadrature rules.

[SGMGA](../../cpp_src/sgmga/sgmga.html), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SPARSE\_GRID\_MIXED](../../cpp_src/sparse_grid_mixed/sparse_grid_mixed.html),
a C++ library which creates a sparse grid dataset based on a mixed set
of 1D factor rules.

[SPARSE\_GRID\_MIXED\_GROWTH](../../cpp_src/sparse_grid_mixed_growth/sparse_grid_mixed_growth.html),
a C++ library which creates a sparse grid dataset based on a mixed set
of 1D factor rules, and experiments with the use of a linear growth rate
for the quadrature rules.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  William Cody,\
    An Overview of Software Development for Special Functions,\
    in Numerical Analysis Dundee, 1975,\
    edited by GA Watson,\
    Lecture Notes in Mathematics 506,\
    Springer, 1976.
3.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
4.  Alan Genz, Bradley Keister,\
    Fully symmetric interpolatory rules for multiple integrals over
    infinite regions with Gaussian weight,\
    Journal of Computational and Applied Mathematics,\
    Volume 71, 1996, pages 299-309.
5.  John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thatcher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
6.  Knut Petras,\
    Smolyak Cubature of Given Polynomial Degree with Few Nodes for
    Increasing Dimension,\
    Numerische Mathematik,\
    Volume 93, Number 4, February 2003, pages 729-753.
7.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
8.  Shanjie Zhang, Jianming Jin,\
    Computation of Special Functions,\
    Wiley, 1996,\
    ISBN: 0-471-11963-6,\
    LC: QA351.C45

### Source Code: {#source-code align="center"}

-   [sandia\_rules2.cpp](sandia_rules2.cpp), the source code.
-   [sandia\_rules2.hpp](sandia_rules2.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sandia\_rules2\_prb.cpp](sandia_rules2_prb.cpp), a sample calling
    program.
-   [sandia\_rules2\_prb\_output.txt](sandia_rules2_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CCN\_POINTS** computes nested Clenshaw Curtis quadrature points.
-   **CCN\_WEIGHTS** computes nested Clenshaw Curtis quadrature weights.
-   **CLENSHAW\_CURTIS\_POINTS** computes Clenshaw Curtis quadrature
    points.
-   **CLENSHAW\_CURTIS\_WEIGHTS** computes Clenshaw Curtis quadrature
    weights.
-   **FEJER2\_POINTS** computes Fejer type 2 quadrature points.
-   **FEJER2\_WEIGHTS** computes Fejer type 2 quadrature weights.
-   **GEN\_HERMITE\_POINTS:** Generalized Hermite quadrature points.
-   **GEN\_HERMITE\_WEIGHTS:** Generalized Hermite quadrature weights.
-   **GEN\_LAGUERRE\_POINTS:** Generalized Laguerre quadrature points.
-   **GEN\_LAGUERRE\_WEIGHTS:** Generalized Laguerre quadrature weights.
-   **HCC\_POINTS** computes Hermite-Cubic-Chebyshev-Spacing quadrature
    points.
-   **HCC\_WEIGHTS** computes Hermite-Cubic-Chebyshev-Spacing quadrature
    weights.
-   **HCE\_POINTS** computes Hermite-Cubic-Equal-Spacing quadrature
    points.
-   **HCE\_WEIGHTS** computes Hermite-Cubic-Equal-Spacing quadrature
    weights.
-   **HERMITE\_GENZ\_KEISTER\_POINTS** looks up Genz-Keister Hermite
    abscissas.
-   **HERMITE\_GENZ\_KEISTER\_WEIGHTS** looks up Genz-Keister Hermite
    weights.
-   **HERMITE\_POINTS** computes Hermite quadrature points.
-   **HERMITE\_WEIGHTS** computes Hermite quadrature weights.
-   **JACOBI\_POINTS** computes Jacobi quadrature points.
-   **JACOBI\_WEIGHTS** computes Jacobi quadrature weights.
-   **LAGUERRE\_POINTS** computes Laguerre quadrature points.
-   **LAGUERRE\_WEIGHTS** computes Laguerre quadrature weights.
-   **LEGENDRE\_POINTS** computes Legendre quadrature points.
-   **LEGENDRE\_WEIGHTS** computes Legendre quadrature weights.
-   **NCC\_POINTS** computes Newton Cotes Closed quadrature points.
-   **NCC\_WEIGHTS** computes Newton Cotes Closed quadrature weights.
-   **NCO\_POINTS** computes Newton Cotes Open quadrature points.
-   **NCO\_WEIGHTS** computes Newton Cotes Open quadrature weights.
-   **PATTERSON\_POINTS** looks up Patterson quadrature points.
-   **PATTERSON\_WEIGHTS** looks up Patterson quadrature weights.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 August 2011.*
