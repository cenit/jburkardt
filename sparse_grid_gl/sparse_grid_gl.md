SPARSE\_GRID\_GL\
Sparse Grids Based on Gauss-Legendre Rules {#sparse_grid_gl-sparse-grids-based-on-gauss-legendre-rules align="center"}
==========================================

------------------------------------------------------------------------

**SPARSE\_GRID\_GL** is a C++ library which constructs sparse grids
based on 1D Gauss-Legendre rules.

Sparse grids are more naturally constructed from a nested family of
quadrature rules. Gauss-Legendre rules are not nested, but have higher
accuracy. Thus, there is a tradeoff. If we compare two sparse grids of
the same "level", one using Gauss-Legendre rules and the other, say,
Clenshaw-Curtis rules, then the Gauss-Legendre sparse grid will have
higher accuracy...but also a significantly greater number of points.
When measuring efficiency, we really need to balance the cost in
quadrature points against the accuracy, and so it is not immediately
obvious which choice is best!

To slightly complicate matters, Gauss-Legendre rules are very weakly
nested, in that the rules of odd order all include the abscissa value
X=0.0. A sparse grid constructed from Gauss-Legendre rules will thus
have to keep track of this minor point as well.

Here is a table showing the number of points in a sparse grid based on
Gauss-Legendre rules, indexed by the spatial dimension, and by the
"level", which is simply an index for the family of sparse grids.

  DIM:         1       2       3       4       5
  ------------ ------- ------- ------- ------- --------
  LEVEL\_MAX                                    
  0            1       1       1       1       1
  1            3       5       7       9       11
  2            9       21      37      57      81
  3            23      73      159     289     471
  4            53      225     597     1265    2341
  5            115     637     2031    4969    10363
  6            241     1693    6405    17945   41913
                                                
  DIM:         6       7       8       9       10
  LEVEL\_MAX                                    
  0            1       1       1       1       1
  1            13      15      17      19      21
  2            109     141     177     217     261
  3            713     1023    1409    1879    2441
  4            3953    6245    9377    13525   18881
  5            19397   33559   54673   84931   126925
                                                
  DIM:         100                              
  LEVEL\_MAX                                    
  0            1                                
  1            201                              
  2            20601                            

### Web Link: {#web-link align="center"}

A version of the sparse grid library is available in
[http://tasmanian.ornl.gov](http://tasmanian.ornl.gov/), the TASMANIAN
library, available from Oak Ridge National Laboratory.

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SPARSE\_GRID\_GL** is available in [a C++
version](../../cpp_src/sparse_grid_gl/sparse_grid_gl.html) and [a
FORTRAN90 version](../../f_src/sparse_grid_gl/sparse_grid_gl.html) and
[a MATLAB version.](../../m_src/sparse_grid_gl/sparse_grid_gl.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_DISPLAY](../../m_src/cc_display/cc_display.html), a MATLAB library
which can compute and display Clenshaw Curtis grids in two dimensions,
as well as sparse grids formed from sums of Clenshaw Curtis grids.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.html),
a dataset directory which contains quadrature rules; a number of
examples of sparse grid quadrature rules are included.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for various intervals and weight functions.

[SGMG](../../cpp_src/sgmg/sgmg.html), a C++ library which creates a
sparse grid dataset based on a mixed set of 1D factor rules, and
experiments with the use of a linear growth rate for the quadrature
rules.

[SGMGA](../../cpp_src/sgmga/sgmga.html), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.html), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids.

[SPARSE\_GRID\_CC](../../cpp_src/sparse_grid_cc/sparse_grid_cc.html), a
C++ library which define sparse grids based on 1D Clenshaw Curtis
quadrature rules.

[SPARSE\_GRID\_CLOSED](../../cpp_src/sparse_grid_closed/sparse_grid_closed.html),
a C++ library which define sparse grids based on closed nested
quadrature rules.

[SPARSE\_GRID\_DISPLAY](../../m_src/sparse_grid_display/sparse_grid_display.html),
a MATLAB library which can display a 2D or 3D sparse grid.

[SPARSE\_GRID\_F2](../../datasets/sparse_grid_f2/sparse_grid_f2.html), a
dataset directory which contains sparse grids based on a Fejer Type 2
rule.

[SPARSE\_GRID\_GL](../../datasets/sparse_grid_gl/sparse_grid_gl.html), a
dataset directory of sparse grids based on a Gauss Legendre rule.

[SPARSE\_GRID\_GP](../../datasets/sparse_grid_gp/sparse_grid_gp.html), a
dataset directory of sparse grids based on a Gauss Patterson rule.

[SPARSE\_GRID\_HERMITE](../../cpp_src/sparse_grid_hermite/sparse_grid_hermite.html),
a C++ library which creates sparse grids based on Gauss-Hermite rules.

[SPARSE\_GRID\_LAGUERRE](../../cpp_src/sparse_grid_laguerre/sparse_grid_laguerre.html),
a C++ library which creates sparse grids based on Gauss-Laguerre rules.

[SPARSE\_GRID\_MIXED](../../cpp_src/sparse_grid_mixed/sparse_grid_mixed.html),
a C++ library which constructs a sparse grid using different rules in
each spatial dimension.

[SPARSE\_GRID\_NCC](../../datasets/sparse_grid_ncc/sparse_grid_ncc.html),
a dataset directory of sparse grids based on a Newton Cotes closed rule.

[SPARSE\_GRID\_NCO](../../datasets/sparse_grid_nco/sparse_grid_nco.html),
a dataset directory of sparse grids based on a Newton Cotes open rule.

[SPARSE\_GRID\_OPEN](../../cpp_src/sparse_grid_open/sparse_grid_open.html),
a C++ library which defines sparse grids based on open nested quadrature
rules.

[TOMS847](../../m_src/toms847/toms847.html), a MATLAB program which uses
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

-   [sparse\_grid\_gl.cpp](sparse_grid_gl.cpp), the source code.
-   [sparse\_grid\_gl.hpp](sparse_grid_gl.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_grid\_gl\_prb.cpp](sparse_grid_gl_prb.cpp), a sample
    calling program.
-   [sparse\_grid\_gl\_prb\_output.txt](sparse_grid_gl_prb_output.txt),
    the output file.
-   [gl\_d2\_level3\_r.txt](../../datasets/sparse_grid_gl/gl_d2_level3_r.txt),
    the "R" data for a sparse quadrature rule.
-   [gl\_d2\_level3\_w.txt](../../datasets/sparse_grid_gl/gl_d2_level3_w.txt),
    the "W" data for a sparse quadrature rule.
-   [gl\_d2\_level3\_x.txt](../../datasets/sparse_grid_gl/gl_d2_level3_x.txt),
    the "X" data for a sparse quadrature rule.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **GL\_ABSCISSA** sets abscissas for multidimensional Gauss-Legendre
    quadrature.
-   **GL\_WEIGHTS** returns weights for certain Gauss-Legendre
    quadrature rules.
-   **CHOOSE** computes the binomial coefficient C(N,K).
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
-   **MONOMIAL\_INT01** returns the integral of a monomial over the
    \[0,1\] hypercube.
-   **MONOMIAL\_QUADRATURE** applies a quadrature rule to a monomial.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **MULTIGRID\_INDEX\_Z** returns an indexed multidimensional grid.
-   **PRODUCT\_WEIGHT\_GL:** weights for a product Gauss-Legendre rule.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
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

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 November 2009.*
