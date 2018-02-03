FEM1D\_ADAPTIVE\
Finite Element Method with Adaptive Refinement {#fem1d_adaptive-finite-element-method-with-adaptive-refinement align="center"}
==============================================

------------------------------------------------------------------------

**FEM1D\_ADAPTIVE** is a C++ program which applies the finite element
method to a linear two point boundary value problem in one spatial
dimension, using adaptive refinement to estimate the error, refine the
mesh, and produce an improved solution.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D\_ADAPTIVE** is available in [a C
version](../../c_src/fem1d_adaptive/fem1d_adaptive.html) and [a C++
version](../../cpp_src/fem1d_adaptive/fem1d_adaptive.html) and [a
FORTRAN77 version](../../f77_src/fem1d_adaptive/fem1d_adaptive.html) and
[a FORTRAN90 version](../../f_src/fem1d_adaptive/fem1d_adaptive.html)
and [a MATLAB version.](../../m_src/fem1d_adaptive/fem1d_adaptive.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D](../../data/fem1d/fem1d.html), a data directory which contains
examples of 1D FEM files, three text files that describe a 1D finite
element model;

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method to a linear two point boundary value problem in a
1D region.

[FEM1D\_BVP\_LINEAR](../../cpp_src/fem1d_bvp_linear/fem1d_bvp_linear.html),
a C++ program which applies the finite element method, with piecewise
linear elements, to a two point boundary value problem in one spatial
dimension.

[FEM1D\_HEAT\_STEADY](../../cpp_src/fem1d_heat_steady/fem1d_heat_steady.html),
a C++ program which uses the finite element method to solve the steady
(time independent) heat equation in 1D.

[FEM1D\_NONLINEAR](../../cpp_src/fem1d_nonlinear/fem1d_nonlinear.html),
a C++ program which applies the finite element method to a nonlinear two
point boundary value problem in a 1D region.

[FEM1D\_PACK](../../cpp_src/fem1d_pack/fem1d_pack.html), a C++ library
which contains utilities for 1D finite element calculations.

[FEM1D\_PMETHOD](../../cpp_src/fem1d_pmethod/fem1d_pmethod.html), a C++
program which applies the p-method version of the finite element method
to a linear two point boundary value problem in a 1D region.

[FEM1D\_PROJECT](../../cpp_src/fem1d_project/fem1d_project.html), a C++
program which projects data into a finite element space, including the
least squares approximation of data, or the projection of a finite
element solution from one mesh to another.

[FEM1D\_SAMPLE](../../cpp_src/fem1d_sample/fem1d_sample.html), a C++
program which samples a scalar or vector finite element function of one
variable, defined by FEM files&lt;, returning interpolated values at the
sample points.

### Reference: {#reference align="center"}

1.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313..
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

-   [fem1d\_adaptive.cpp](fem1d_adaptive.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem1d\_adaptive\_output.txt](fem1d_adaptive_output.txt), the
    printed output from a run of the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM1D\_ADAPTIVE.
-   **ASSEMBLE** assembles the global matrix.
-   **FF** evaluates the function F in the differential equation.
-   **GEOMETRY** sets up some of the geometric information for the
    problem.
-   **GET\_ALPHA** returns the value of ALPHA, for use by problem 6.
-   **GET\_BETA** returns the value of BETA, for use by problem 5.
-   **GETPRB** returns the value of the current problem number.
-   **INIT** initializes some parameters that define the problem.
-   **OUTPUT** prints out the computed solution.
-   **PHI** evaluates a linear basis function and its derivative.
-   **PP** evaluates the function P in the differential equation.
-   **PRSYS** prints out the tridiagonal linear system.
-   **QQ** evaluates the function Q in the differential equation.
-   **R8\_MAX** returns the maximum of two double precision values.
-   **SOLVE** solves a tridiagonal matrix system of the form A\*x = b.
-   **SOLVEX** discretizes and solves a differential equation given the
    nodes.
-   **SOLVEY** computes error estimators for a finite element solution.
-   **SUBDIV** decides which intervals should be subdivided.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UEXACT** returns the value of the exact solution at any point X.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 November 2006.*
