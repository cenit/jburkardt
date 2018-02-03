FEM1D\
Piecewise Linear Finite Element Method for 1D problem. {#fem1d-piecewise-linear-finite-element-method-for-1d-problem. align="center"}
======================================================

------------------------------------------------------------------------

**FEM1D** is a C++ program which applies the finite element method (FEM)
to a linear two point boundary value problem (BVP) in one spatial
dimension.

### Licensing: {#licensing align="center"}

The computer code described and made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D** is available in [a C version](../../c_src/fem1d/fem1d.md)
and [a C++ version](../../master/fem1d/fem1d.md) and [a FORTRAN77
version](../../f77_src/fem1d/fem1d.md) and [a FORTRAN90
version](../../f_src/fem1d/fem1d.md) and [a MATLAB
version](../../m_src/fem1d/fem1d.md) and [a Python
version.](../../py_src/fem1d/fem1d.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D](../../data/fem1d/fem1d.md), a data directory which contains
examples of 1D FEM files, three text files that describe a 1D finite
element model;

[FEM1D\_ADAPTIVE](../../master/fem1d_adaptive/fem1d_adaptive.md), a
C++ program which applies the finite element method to a linear two
point boundary value problem in a 1D region, using adaptive refinement
to improve the solution.

[FEM1D\_BVP\_LINEAR](../../master/fem1d_bvp_linear/fem1d_bvp_linear.md),
a C++ program which applies the finite element method, with piecewise
linear elements, to a two point boundary value problem in one spatial
dimension.

[FEM1D\_HEAT\_STEADY](../../master/fem1d_heat_steady/fem1d_heat_steady.md),
a C++ program which uses the finite element method to solve the steady
(time independent) heat equation in 1D.

[FEM1D\_LAGRANGE](../../master/fem1d_lagrange/fem1d_lagrange.md), a
C++ library which sets up the matrices and vectors associated with the
finite element method (FEM) solution of a boundary value problem (BVP)
-u''+u=f(x), using Lagrange basis polynomials.

[FEM1D\_NONLINEAR](../../master/fem1d_nonlinear/fem1d_nonlinear.md),
a C++ program which applies the finite element method to a nonlinear two
point boundary value problem in a 1D region.

[FEM1D\_PACK](../../master/fem1d_pack/fem1d_pack.md), a C++ library
which contains utilities for 1D finite element calculations.

[FEM1D\_PMETHOD](../../master/fem1d_pmethod/fem1d_pmethod.md), a C++
program which applies the p-method version of the finite element method
to a linear two point boundary value problem in a 1D region.

[FEM1D\_PROJECT](../../master/fem1d_project/fem1d_project.md), a C++
program which projects data into a finite element space, including the
least squares approximation of data, or the projection of a finite
element solution from one mesh to another.

[FEM1D\_SAMPLE](../../master/fem1d_sample/fem1d_sample.md), a C++
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
    LC: TA640.2.Z54

### Source Code: {#source-code align="center"}

-   [fem1d.cpp](fem1d.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem1d\_output.txt](fem1d_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM1D.
-   **ASSEMBLE** assembles the matrix and right-hand-side of the linear
    system.
-   **FF** evaluates the right hand side function.
-   **GEOMETRY** sets up the geometry for the interval \[XL,XR\].
-   **INIT** assigns values to variables which define the problem.
-   **OUTPUT** prints out the computed solution.
-   **PHI** evaluates a linear basis function and its derivative.
-   **PP** evaluates the function P in the differential equation.
-   **PRSYS** prints out the tridiagonal linear system.
-   **QQ** evaluates the function Q in the differential equation.
-   **SOLVE** solves a tridiagonal matrix system of the form A\*x = b.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 October 2006.*
