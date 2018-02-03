FEM2D\_PROJECT\_FUNCTION\
Piecewise Linear Finite Element Approximation {#fem2d_project_function-piecewise-linear-finite-element-approximation align="center"}
=============================================

------------------------------------------------------------------------

**FEM2D\_PROJECT\_FUNCTION** is a C++ program which projects a function
W(X,Y), given as a formula, into a given finite element space of
piecewise linear triangular elements.

The result is that the function W(x,y) is approximated by a finite
element function U(x,y) formed using piecewise linear triangular
elements.

The computational region is a rectangle, which is divided up into a mesh
of triangles using a grid of NX by NY points. For node K at grid point
(I,J) in the interior, the associated basis function Vk(x,y) is used to
pose the equation:

            Integral U(x,y) Vk(x,y) dx = Integral W(x,y) Vk(x,y) dx
          

while, for node K at grid point (I,J) on the boundary, the associated
degree of freedom is determined by the boundary condition

            U(x,y) = W(x,y),
          

The conditions define a linear system for the coefficients Uk in the
finite element expansion of U(x,y):

            U(x,y) = sum ( 1 <= K <= M*N ) Uk * Vk(x,y)
          

The program computes these coefficients, compares U and W pointwise at
the nodes, and computes the L2 norms of U, W and U-W.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_PROJECT\_FUNCTION** is available in [a C++
version](../../cpp_src/fem2d_project_function/fem2d_project_function.html)
and [a FORTRAN90
version](../../f_src/fem2d_project_function/fem2d_project_function.html)
and [a MATLAB
version](../../m_src/fem2d_project_function/fem2d_project_function.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D\_PROJECT](../../cpp_src/fem1d_project/fem1d_project.html), a C++
program which projects data into a finite element space, including the
least squares approximation of data, or the projection of a finite
element solution from one mesh to another.

[FEM2D](../../data/fem2d/fem2d.html), a data directory which contains
examples of 2D FEM files, three text files that describe a 2D finite
element geometry;

[FEM2D\_HEAT](../../cpp_src/fem2d_heat/fem2d_heat.html), a C++ program
which solves the time dependent heat equation in the unit square.

[FEM2D\_PACK](../../cpp_src/fem2d_pack/fem2d_pack.html), a C++ library
which includes utitlies for 2D finite element calculations.

[FEM2D\_POISSON](../../cpp_src/fem2d_poisson/fem2d_poisson.html), a C++
program which solves the 2D Poisson equation on a rectangle, using the
finite element method, and piecewise quadratic triangular elements.

[FEM2D\_PROJECT](../../cpp_src/fem2d_project/fem2d_project.html), a C++
program which projects a function F(X,Y), given as a data, into a given
finite element space of piecewise linear triangular elements.

[FEM2D\_SAMPLE](../../cpp_src/fem2d_sample/fem2d_sample.html), a C++
library which evaluates a finite element function defined on an order 3
or order 6 triangulation.

[HOT\_PIPE](../../m_src/hot_pipe/hot_pipe.html), a MATLAB program which
uses FEM\_50\_HEAT to solve the heat equation for a pipe model.

[HOT\_POINT](../../m_src/hot_point/hot_point.html), a MATLAB program
which uses **FEM\_50\_HEAT** to solve the heat equation for a 2D region
with a hot point.

[TRIANGULATION\_ORDER3](../../data/triangulation_order3/triangulation_order3.html),
a data directory which contains a description and examples of how an
order 3 (linear) triangulation is defined by a node and element file.

[TRIANGULATION\_ORDER3\_CONTOUR](../../m_src/triangulation_order3_contour/triangulation_order3_contour.html),
a MATLAB program which makes contour plot of data defined on an order 3
triangulation.

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
    LC: TA640.2.Z54

### Source Code: {#source-code align="center"}

-   [fem2d\_project\_function.cpp](fem2d_project_function.cpp), the
    source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem2d\_project\_function\_output.txt](fem2d_project_function_output.txt),
    the output file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main routine of the finite element program
    FEM2D\_PROJECT\_FUNCTION.
-   **EXACT** calculates the exact solution.
-   **R8GE\_FS** factors and solves a R8GE system.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 June 2009.*
