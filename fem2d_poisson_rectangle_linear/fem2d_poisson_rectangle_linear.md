FEM2D\_POISSON\_RECTANGLE\_LINEAR\
Finite Element Solution of the 2D Poisson Equation {#fem2d_poisson_rectangle_linear-finite-element-solution-of-the-2d-poisson-equation align="center"}
==================================================

------------------------------------------------------------------------

**FEM2D\_POISSON\_RECTANGLE\_LINEAR** is a C++ program which solves the
2D Poisson equation using the finite element method with piecewise
linear triangular elements.

The computational region is a rectangle, with Dirichlet boundary
conditions applied along the boundary. The state variable U(X,Y) is then
constrained by:

            - ( Uxx + Uyy ) = F(x,y)  in the region
                     U(x,y) = G(x,y)  on the region boundary
          

The computational region is first covered with an NX by NY rectangular
array of points, creating (NX-1)\*(NY-1) subrectangles. Each
subrectangle is divided into two triangles, creating a total of
2\*(NX-1)\*(NY-1) geometric "elements".

We now assume that the unknown function U(x,y) can be represented as a
linear combination of the basis functions associated with each node. For
each node I, we determine a basis function PHI(I)(x,y), and evaluate the
following finite element integral:

            Integral ( Ux(x,y) * PHIx(I)(x,y) + Uy(x,y) * PHIy(I)(x,y) ) =
            Integral ( F(x,y) * PHI(I)(x,y)
          

The set of all such equations yields a linear system for the
coefficients of the representation of U.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_RECTANGLE\_LINEAR** is available in [a C
version](../../c_src/fem2d_poisson/fem2d_poisson.md) and [a C++
version](../../master/fem2d_poisson/fem2d_poisson.md) and [a
FORTRAN77 version](../../f77_src/fem2d_poisson/fem2d_poisson.md) and
[a FORTRAN90 version](../../f_src/fem2d_poisson/fem2d_poisson.md) and
[a MATLAB version](../../m_src/fem2d_poisson/fem2d_poisson.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON\_RECTANGLE](../../master/fem2d_poisson_rectangle/fem2d_poisson_rectangle.md),
a C++ program which solves the 2D Poisson equation on a rectangle, using
the finite element method, and piecewise quadratic triangular elements.

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

-   [fem2d\_poisson\_rectangle\_linear.cpp](fem2d_poisson_rectangle_linear.cpp),
    the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem2d\_poisson\_rectangle\_linear\_output.txt](fem2d_poisson_rectangle_linear_output.txt),
    the output file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main routine of the finite element program
    FEM2D\_POISSON\_RECTANGLE\_LINEAR.
-   **EXACT** calculates the exact solution and its first derivatives.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8GE\_FS** factors and solves a R8GE system.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 28 November 2008.*
