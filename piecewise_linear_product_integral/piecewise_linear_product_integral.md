PIECEWISE\_LINEAR\_PRODUCT\_INTEGRAL\
Piecewise Linear Product Integral {#piecewise_linear_product_integral-piecewise-linear-product-integral align="center"}
=====================================

------------------------------------------------------------------------

**PIECEWISE\_LINEAR\_PRODUCT\_INTEGRAL** is a C++ library which
calculates the exact value of the integral of the product of two
piecewise linear functions F(X) and G(X).

The piecewise linear function F(X) is defined by

-   **F\_NUM**, the number of nodes;
-   **F\_X**(1:F\_NUM), the X coordinates of the nodes (in ascending
    order);
-   **F\_V**(1:F\_NUM), the value of F at each node;

The piecewise linear function G(X) is defined similarly, and there is no
requirement that G(X) uses the same nodes as F(X), or the same number of
nodes.

The task, then, is to determine the value of

            Integral ( A <= X <= B ) F(X) * G(X) dx
          

This value can be determined exactly, by breaking the interval ot
integration into subintervals over which F(X) and G(X) are simple linear
functions.

In finite element programs over 1-dimensional geometries, integrals like
this may occur when assembling the stiffness matrix, but these integrals
are generally treated using quadrature.

A more appropriate use for this function occurs when coarsening a finite
element solution, or constructing a piecewise linear least squares
finite element approximant to data that is regarded as a piecewise
linear function.

In case 1, we treat the original finite element solution as the function
F(X), and in case 2, we treat the data as a finite element function
whose mesh is implicit in the X coordinates of the given data.

Our G\_X is, in case 1, the coarse mesh and in case 2 the given mesh. To
determine the finite element coefficient U(I) on this mesh, we must
integrate our data function F(X) against the I-th basis function, which
in this case is simply the I-th "hat function. So to use our formula for
G(X), we set G\_V(1:G\_NUM) to 0, except that G\_V(I) = 1, and compute

            U(I) = Integral ( G_X(I-1) <= X <= G_X(I+1) ) F(X) * G(X) dx
          

Doing this for I from 1 to G\_NUM allows us to compute the coefficients
of the coarsened solution (case 1) or the least squares approximant to
the piecewise linear function representing the data F.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PIECEWISE\_LINEAR\_PRODUCT\_INTEGRAL** is available in [a C
version](../../c_src/piecewise_linear_product_integral/piecewise_linear_product_integral.html)
and [a C++
version](../../cpp_src/piecewise_linear_product_integral/piecewise_linear_product_integral.html)
and [a FORTRAN77
version](../../f77_src/piecewise_linear_product_integral/piecewise_linear_product_integral.html)
and [a FORTRAN90
version](../../f_src/piecewise_linear_product_integral/piecewise_linear_product_integral.html)
and [a MATLAB
version](../../m_src/piecewise_linear_product_integral/piecewise_linear_product_integral.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM](../../data/fem/fem.html), a data directory which contains a
description and examples of files that describe a finite element model.

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method to a 1D linear two point boundary value problem.

[FEM1D\_ADAPTIVE](../../cpp_src/fem1d_adaptive/fem1d_adaptive.html), a
C++ program which applies the finite element method to a 1D linear two
point boundary value problem using adaptive refinement to improve the
solution.

[FEM1D\_NONLINEAR](../../cpp_src/fem1d_nonlinear/fem1d_nonlinear.html),
a C++ program which applies the finite element method to a 1D nonlinear
two point boundary value problem.

[FEM1D\_PMETHOD](../../cpp_src/fem1d_pmethod/fem1d_pmethod.html), a C++
program which applies the p-method version of the finite element method
to a linear two point boundary value problem in a 1D region.

[FEM1D\_PROJECT](../../cpp_src/fem1d_project/fem1d_project.html), a C++
program which projects data into a finite element space, including the
least squares approximation of data, or the projection of a finite
element solution from one mesh to another.

[FEM1D\_SAMPLE](../../cpp_src/fem1d_sample/fem1d_sample.html), a C++
program which samples a scalar or vector finite element function of one
variable, defined by FEM files, returning interpolated values at the
sample points.

### Reference: {#reference align="center"}

1.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313.
2.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
3.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    TA640.2.Z54.

### Source Code: {#source-code align="center"}

-   [piecewise\_linear\_product\_integral.cpp](piecewise_linear_product_integral.cpp),
    the source code.
-   [piecewise\_linear\_product\_integral.hpp](piecewise_linear_product_integral.hpp),
    the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [piecewise\_linear\_product\_integral\_prb.cpp](piecewise_linear_product_integral_prb.cpp),
    a sample calling program.
-   [piecewise\_linear\_product\_integral\_prb\_output.txt](piecewise_linear_product_integral_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **PIECEWISE\_LINEAR\_PRODUCT\_INTEGRAL:** piecewise linear product
    integral.
-   **PIECEWISE\_LINEAR\_PRODUCT\_QUAD:** estimate piecewise linear
    product integral.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8VEC\_BRACKET3** finds the interval containing or nearest a given
    value.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 April 2009.*
