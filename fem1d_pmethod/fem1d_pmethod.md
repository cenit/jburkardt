FEM1D\_PMETHOD\
P-Method Finite Element Method for 1D problem. {#fem1d_pmethod-p-method-finite-element-method-for-1d-problem. align="center"}
==============================================

------------------------------------------------------------------------

**FEM1D\_PMETHOD** is a C++ program which applies the p-method version
of the finite element method to a two point boundary value problem in
one spatial dimension.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D\_PMETHOD** is available in [a C
version](../../c_src/fem1d_pmethod/fem1d_pmethod.md) and [a C++
version](../../master/fem1d_pmethod/fem1d_pmethod.md) and [a
FORTRAN77 version](../../f77_src/fem1d_pmethod/fem1d_pmethod.md) and
[a FORTRAN90 version](../../f_src/fem1d_pmethod/fem1d_pmethod.md) and
[a MATLAB version.](../../m_src/fem1d_pmethod/fem1d_pmethod.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D](../../data/fem1d/fem1d.md), a data directory which contains
examples of 1D FEM files, three text files that describe a 1D finite
element model;

[FEM1D](../../master/fem1d/fem1d.md), a C++ program which applies the
finite element method to a linear two point boundary value problem in a
1D region.

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

[FEM1D\_NONLINEAR](../../master/fem1d_nonlinear/fem1d_nonlinear.md),
a C++ program which applies the finite element method to a nonlinear two
point boundary value problem in a 1D region.

[FEM1D\_PACK](../../master/fem1d_pack/fem1d_pack.md), a C++ library
which contains utilities for 1D finite element calculations.

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

-   [fem1d\_pmethod.cpp](fem1d_pmethod.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem1d\_pmethod\_output.txt](fem1d_pmethod_output.txt), the printed
    output from a run of the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM1D\_PMETHOD.
-   **ALPBET** calculates the coefficients in the recurrence
    relationship.
-   **EXACT** compares the computed and exact solutions.
-   **FF** evaluates the right hand side function F(X) at any point X.
-   **ORTHO** tests the basis functions for orthogonality.
-   **OUT** prints out the computed solution.
-   **PHI** evaluates the I-th basis function at the point X.
-   **PP** returns the value of the coefficient function P(X).
-   **QUAD** returns the abscissas and weights for gaussian quadrature
    on \[-1,1\].
-   **QQ** returns the value of the coefficient function Q(X).
-   **SOL** solves a linear system for the finite element coefficients.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UEX** returns the value of the exact solution at a point X.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 November 2006.*
