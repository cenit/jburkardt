SANDIA\_SPARSE\
Sparse Grids for Sandia {#sandia_sparse-sparse-grids-for-sandia align="center"}
=======================

------------------------------------------------------------------------

**SANDIA\_SPARSE** is a C++ library which can be used to compute the
points and weights of a Smolyak sparse grid, based on a variety of
1-dimensional quadrature rules.

The sparse grids that can be created may be based on any one of a
variety of 1D quadrature rules. However, only **isotropic** grids are
generated, that is, the same 1D quadrature rule is used in each
dimension, and the same maximum order is used in each dimension. This is
a limitation of this library, and not an inherent limitation of the
sparse grid method.

The 1D quadrature rules that can be used to construct sparse grids
include:

-   **CFN**, Closed Fully Nested rules:
    -   **CC**, Clenshaw-Curtis:\
        defined on \[-1,+1\], with w(x)=1.
-   **OFN**, Open Fully Nested rules:
    -   **F1**, Fejer Type 1:\
        defined on (-1,+1), with w(x)=1.
    -   **F2**, Fejer Type 2:\
        defined on (-1,+1), with w(x)=1.
    -   **GP**, Gauss Patterson:\
        defined on (-1,+1), with w(x)=1,\
        a family of the midpoint rule, the 3 point Gauss Legendre rule,
        and then successive Patterson refinements.
-   **OWN**, Open Weakly Nested rules:
    -   **GL**, Gauss Legendre:\
        defined on (-1,+1), with w(x)=1.
    -   **GH**, Gauss Hermite:\
        defined on (-oo,+oo), with w(x)=exp(-x\*x).
-   **ONN**, Open Non-Nested rules:
    -   **LG**, Gauss Laguerre:\
        defined on (0,+oo) with w(x)=exp(-x).

### Point Growth of 1D Rules {#point-growth-of-1d-rules align="center"}

A major advantage of sparse grids is that they can achieve accuracy that
is comparable to a corresponding product rule, while using far fewer
points, that is, evaluations of the function that is to be integrated.
We will leave aside the issue of comparing accuracy for now, and simply
focus on the pattern of point growth.

A sparse grid is essentially a linear combination of lower order product
grids. One way point growth is controlled is to only use product grids
based on a set of factors that are nested. In other words, the
underlying 1D rules are selected so that, when we increase the order of
such a rule, all the points of the current rule are included in the new
one.

The exact details of how this works depend on the particular 1D rule
being used and the nesting behavior it satisfies. We classify the cases
as follows:

-   **CFN**, "Closed, Fully Nested", based on Clenshaw Curtis.
-   **OFN**, "Open, Fully Nested", based on Fejer Type 1, Fejer Type 2,
    or Gauss Patterson.
-   **OWN**, "Open, Weakly Nested", based on Gauss Legendre or Gauss
    Hermite rules.
-   **ONN**, "Open, Non-Nested", based on Gauss Laguerre rules;

For **CFN** rules we have the following relationship between the level
(index of the grid) and the 1D order (the number of points in the 1D
rule.)

            order = 2level + 1
          

except that for the special case of **level=0** we assign **order=1**.

For **OFN**, **OWN** and **ONN** rules, the relationship between level
and 1D order is:

            order = 2level+1 - 1
          

Thus, as we allow **level** to grow, the **order** of the 1D closed and
open rules behaves as follows:

  --------------------------------------------------------------------------
  Level                    CFN                      OFN/OWN/ONN
  ------------------------ ------------------------ ------------------------
  0                        1                        
                           1                        

  1                        3                        
                           3                        

  2                        5                        
                           7                        

  3                        9                        
                           15                       

  4                        17                       
                           31                       

  5                        33                       
                           63                       

  6                        65                       
                           127                      

  7                        129                      
                           255                      

  8                        257                      
                           511                      

  9                        513                      
                           1,023                    

  10                       1,025                    
                           2,057                    
  --------------------------------------------------------------------------

When we move to multiple dimensions, the counting becomes more
complicated. This is because a multidimensional sparse grid is made up
of a logical sum of product grids. A multidimensional sparse grid has a
multidimensional level, which is a single number. Each product grid that
forms part of this sparse grid has a multidimensional level which is the
sum of the 1D levels of its factors. A sparse grid whose
multidimensional level is represented by **LEVEL** includes all product
grids whose level ranges **LEVEL**+1-**DIM** and **LEVEL**.

Thus, as one example, if **DIM** is 2, the sparse grid of level 3,
formed from a CFN rule, will be formed from the following product rules.

  level   level 1   level 2   order 1   order 2   order
  ------- --------- --------- --------- --------- -------
  1       0         1         1         3         3
  1       1         0         3         1         3
  2       0         2         1         5         5
  2       1         1         3         3         9
  2       2         0         5         1         5

Because of the nesting pattern for **CFN** rules, instead of 25 points
(the sum of the orders), we will actually have just 13 unique points.

For a **CFN** sparse grid, here is the pattern of growth in the number
of points, as a function of spatial dimension and grid level:

  -----------------------------------------------------------------------------
  DIM          1            2            3            4            5
  ------------ ------------ ------------ ------------ ------------ ------------
  Level                                                             

  0            1            1            1                         
               1                                                   
               1                                                   

  1            3            9            11                        
               5                                                   
               7                                                   

  2            5            41           61                        
               13                                                  
               25                                                  

  3            9            137          241                       
               29                                                  
               69                                                  

  4            17           401          801                       
               65                                                  
               177                                                 

  5            33           1,105        2,433                     
               145                                                 
               441                                                 

  6            65           2,929        6,993                     
               321                                                 
               1,073                                               

  7            129          7,537        19,313                    
               705                                                 
               2,561                                               

  8            257          18,945       51,713                    
               1,537                                               
               6,017                                               
  -----------------------------------------------------------------------------

For an **OFN** sparse grid, here is the pattern of growth in the number
of points, as a function of spatial dimension and grid level:

  -----------------------------------------------------------------------------
  DIM          1            2            3            4            5
  ------------ ------------ ------------ ------------ ------------ ------------
  Level                                                             

  0            1            1            1                         
               1                                                   
               1                                                   

  1            3            9            11                        
               5                                                   
               7                                                   

  2            7            49           71                        
               17                                                  
               31                                                  

  3            15           209          351                       
               49                                                  
               111                                                 

  4            31           769          1,471                     
               129                                                 
               351                                                 

  5            63           2,561        5,503                     
               321                                                 
               1,023                                               

  6            127          7,937        18,943                    
               769                                                 
               2,815                                               

  7            255          23,297       61,183                    
               1,793                                               
               7,423                                               

  8            511          65,537       187,903                   
               4,097                                               
               18,943                                              
  -----------------------------------------------------------------------------

For an **OWN** sparse grid, here is the pattern of growth in the number
of points, as a function of spatial dimension and grid level:

  -----------------------------------------------------------------------------
  DIM          1            2            3            4            5
  ------------ ------------ ------------ ------------ ------------ ------------
  Level                                                             

  0            1            1            1                         
               1                                                   
               1                                                   

  1            3            9            11                        
               5                                                   
               7                                                   

  2            7            57           81                        
               21                                                  
               37                                                  

  3            15           289          471                       
               73                                                  
               159                                                 

  4            31           1,265        2,341                     
               225                                                 
               597                                                 

  5            63           4,969        10,363                    
               637                                                 
               2,031                                               

  6            127          17,945       41,913                    
               1,693                                               
               6,405                                               

  7            255          60,577       157,583                   
               4,289                                               
               19,023                                              

  8            511          193,457      557,693                   
               10,473                                              
               53,829                                              
  -----------------------------------------------------------------------------

For an **ONN** sparse grid, here is the pattern of growth in the number
of points, as a function of spatial dimension and grid level:

  -----------------------------------------------------------------------------
  DIM          1            2            3            4            5
  ------------ ------------ ------------ ------------ ------------ ------------
  Level                                                             

  0            1            1            1                         
               1                                                   
               1                                                   

  1            3            13           16                        
               7                                                   
               10                                                  

  2            7            95           141                       
               29                                                  
               58                                                  

  3            15           515          906                       
               95                                                  
               255                                                 

  4            31           2,309        4,746                     
               273                                                 
               945                                                 

  5            63           9,065        21,503                    
               723                                                 
               3,120                                               

  6            127          32,259       87,358                    
               1,813                                               
               9,484                                               

  7            255          106,455      325,943                   
               4,375                                               
               27,109                                              

  8            511          330,985      1,135,893                 
               10,265                                              
               73,915                                              
  -----------------------------------------------------------------------------

### Usage: {#usage align="center"}

To integrate a function **f(x)** over a multidimensional cube
\[-1,+1\]\^DIM using a sparse grid based on a Clenshaw Curtis rule, we
might use a program something like the following:

          dim = 2;
          level = 3;
          rule = 1;

          point_num = levels_index_size ( dim, level, rule );

          w = new double[point_num];
          x = new double[dim*point_num];

          sparse_grid ( dim, level, rule, point_num, w, x );

          quad = 0.0;
          for ( j = 0; j < point_num; j++ )
          {
            quad = quad + w[j] * f ( x+j*dim );
          }
        

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SANDIA\_SPARSE** is available in [a C++
version](../../cpp_src/sandia_sparse/sandia_sparse.html) and [a
FORTRAN90 version](../../f_src/sandia_sparse/sandia_sparse.html) and [a
MATLAB version.](../../m_src/sandia_sparse/sandia_sparse.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

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

[SPARSE\_GRID\_CC](../../cpp_src/sparse_grid_cc/sparse_grid_cc.html), a
C++ library which can define a multidimensional sparse grid based on a
1D Clenshaw Curtis rule.

[SPARSE\_GRID\_CC\_DATASET](../../cpp_src/sparse_grid_cc_dataset/sparse_grid_cc_dataset.html),
a C++ program which reads user input, creates a multidimensional sparse
grid based on a 1D Clenshaw Curtis rule and writes it to three files
that define a quadrature rule.

[SPINTERP](../../m_src/spinterp/spinterp.html), a MATLAB library which
uses a sparse grid to perform multilinear hierarchical interpolation, by
Andreas Klimke.

### Reference: {#reference align="center"}

1.  Volker Barthelmann, Erich Novak, Klaus Ritter,\
    High Dimensional Polynomial Interpolation on Sparse Grids,\
    Advances in Computational Mathematics,\
    Volume 12, Number 4, 2000, pages 273-288.
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
4.  Thomas Gerstner, Michael Griebel,\
    Numerical Integration Using Sparse Grids,\
    Numerical Algorithms,\
    Volume 18, Number 3-4, 1998, pages 209-232.
5.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
6.  Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
7.  Fabio Nobile, Raul Tempone, Clayton Webster,\
    An Anisotropic Sparse Grid Stochastic Collocation Method for Partial
    Differential Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2411-2442.
8.  Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.
9.  Dennis Stanton, Dennis White,\
    Constructive Combinatorics,\
    Springer, 1986,\
    ISBN: 0387963472,\
    LC: QA164.S79.

### Source Code: {#source-code align="center"}

-   [sandia\_sparse.cpp](sandia_sparse.cpp), the source code.
-   [sandia\_sparse.hpp](sandia_sparse.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sandia\_sparse\_prb.cpp](sandia_sparse_prb.cpp), a sample calling
    program.
-   [sandia\_sparse\_prb\_output.txt](sandia_sparse_prb_output.txt), the
    output from a run of the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **ABSCISSA\_LEVEL\_CLOSED\_ND:** first level at which an abscissa is
    generated.
-   **ABSCISSA\_LEVEL\_OPEN\_ND:** first level at which given abscissa
    is generated.
-   **CC\_ABSCISSA** returns the I-th abscissa of the Clenshaw Curtis
    rule.
-   **CC\_WEIGHTS** computes Clenshaw Curtis weights.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **F1\_ABSCISSA** returns the I-th abscissa for the Fejer type 1
    rule.
-   **F1\_WEIGHTS** computes weights for a Fejer type 1 rule.
-   **F2\_ABSCISSA** returns the I-th abscissa for the Fejer type 2
    rule.
-   **F2\_WEIGHTS** computes weights for a Fejer type 2 rule.
-   **GH\_ABSCISSA** sets abscissas for multidimensional Gauss-Hermite
    quadrature.
-   **GH\_WEIGHTS** returns weights for certain Gauss-Hermite quadrature
    rules.
-   **GL\_ABSCISSA** sets abscissas for multidimensional Gauss-Legendre
    quadrature.
-   **GL\_WEIGHTS** returns weights for certain Gauss-Legendre
    quadrature rules.
-   **GP\_ABSCISSA** returns the I-th abscissa for a Gauss-Patterson
    rule.
-   **GP\_WEIGHTS** sets weights for a Gauss-Patterson rule.
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4VEC\_PRODUCT** multiplies the entries of an integer vector.
-   **INDEX\_LEVEL\_OWN:** determine first level at which given index is
    generated.
-   **INDEX\_TO\_LEVEL\_CLOSED** determines the level of a point given
    its index.
-   **INDEX\_TO\_LEVEL\_OPEN** determines the level of a point given its
    index.
-   **LEVEL\_TO\_ORDER\_CLOSED** converts a level to an order for closed
    rules.
-   **LEVEL\_TO\_ORDER\_OPEN** converts a level to an order for open
    rules.
-   **LEVELS\_INDEX** indexes a sparse grid.
-   **LEVELS\_INDEX\_CFN** indexes a sparse grid made from CFN 1D rules.
-   **LEVELS\_INDEX\_OFN** indexes a sparse grid made from OFN 1D rules.
-   **LEVELS\_INDEX\_ONN** indexes a sparse grid made from ONN 1D rules.
-   **LEVELS\_INDEX\_OWN** indexes a sparse grid made from OWN 1D rules.
-   **LEVELS\_INDEX\_SIZE** sizes a sparse grid.
-   **LEVELS\_INDEX\_SIZE\_CFN** sizes a sparse grid made from CFN 1D
    rules.
-   **LEVELS\_INDEX\_SIZE\_ONN** sizes a sparse grid made from ONN 1D
    rules.
-   **LEVELS\_INDEX\_SIZE\_OWN** sizes a sparse grid made from OWN 1D
    rules.
-   **LG\_ABSCISSA** sets abscissas for multidimensional Gauss-Laguerre
    quadrature.
-   **LG\_WEIGHTS** returns weights for certain Gauss-Laguerre
    quadrature rules.
-   **MONOMIAL\_INTEGRAL\_HERMITE** integrates a Hermite mononomial.
-   **MONOMIAL\_INTEGRAL\_LAGUERRE** integrates a Laguerre monomial.
-   **MONOMIAL\_INTEGRAL\_LEGENDRE** integrates a Legendre monomial.
-   **MONOMIAL\_QUADRATURE** applies a quadrature rule to a monomial.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **MULTIGRID\_INDEX\_CFN** indexes a sparse grid based on CFN 1D
    rules.
-   **MULTIGRID\_INDEX\_OFN** indexes a sparse grid based on OFN 1D
    rules.
-   **MULTIGRID\_INDEX\_ONN** indexes a sparse grid based on ONN 1D
    rules.
-   **MULTIGRID\_INDEX\_OWN** returns an indexed multidimensional grid.
-   **MULTIGRID\_SCALE\_CLOSED** renumbers a grid as a subgrid on a
    higher level.
-   **MULTIGRID\_SCALE\_OPEN** renumbers a grid as a subgrid on a higher
    level.
-   **PRODUCT\_WEIGHTS** computes the weights of a product rule.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **SPARSE\_GRID** computes a sparse grid.
-   **SPARSE\_GRID\_CC\_SIZE** sizes a sparse grid using Clenshaw Curtis
    rules.
-   **SPARSE\_GRID\_CFN** computes a sparse grid based on a CFN 1D rule.
-   **SPARSE\_GRID\_OFN** computes a sparse grid based on an OFN 1D
    rule.
-   **SPARSE\_GRID\_OFN\_SIZE** sizes a sparse grid using Open Fully
    Nested rules.
-   **SPARSE\_GRID\_ONN** computes a sparse grid based on a ONN 1D rule.
-   **SPARSE\_GRID\_OWN** computes a sparse grid based on an OWN 1D
    rule.
-   **SPARSE\_GRID\_WEIGHTS\_CFN** computes sparse grid weights based on
    a CFN 1D rule.
-   **SPARSE\_GRID\_WEIGHTS\_OFN** computes sparse grid weights based on
    a OFN 1D rule.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VEC\_COLEX\_NEXT2** generates vectors in colex order.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 December 2009.*
