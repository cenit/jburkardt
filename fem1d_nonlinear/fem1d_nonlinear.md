FEM1D\_NONLINEAR\
Finite Element Method for 1D Nonlinear Problem. {#fem1d_nonlinear-finite-element-method-for-1d-nonlinear-problem. align="center"}
===============================================

------------------------------------------------------------------------

**FEM1D\_NONLINEAR** is a C++ program which applies the finite element
method to a simple nonlinear boundary value problem in one spatial
dimension.

The nonlinear boundary problem involves an unknown function **u** on an
interval **\[a,b\]**. Typically, a single boundary condition, either
**u(a)** or **u'(a)**, is given at the left endpoint, and **u(b)** or
**u'(b)** at the right endpoint. The associated differential equation,
which must hold in the interior of **\[a,b\]**, happens to have the
form:

            -d/dx ( p(x) du/dx ) + q(x) * u + u * du/dx = f(x)
          

where **p(x)**, **q(x)** and **f(x)** are given functions.

The nonlinearity arises because of the term **u\*du/dx**; if this term
were not present, standard finite element techniques would allow the
system to be set up and solved almost as easily as a linear system of
algebraic equations is solved.

Newton's method, which works well for scalar nonlinear equations, can
also be applied to this problem, as long as we are willing to extend our
notions of a function and derivative. We need to imagine our
differential equation as a function **F(u)**:

            F(u) = -d/dx ( p(x) du/dx ) + q(x) * u + u * du/dx - f(x)
          

(with the boundary conditions wrapped in here somewhere as well!) If we
differentiate this function, we get a Jacobian operator, which is
evaluated at **u**, and applied to any small increment **v**. This
equation implicitly describes the tangent plane of solutions near to a
given solution **u**.

            J(u,v) = -d/dx ( p(x) dv/dx ) + q(x) * v + u * dv/dx + v * du/dx
          

Now if we apply the finite element formulation to represent **u** and
**v** in terms of sums of basis functions, we can set up a linear
system, to be evaluated at **u** and solved for the Newton increment
**delta\_u**:

            J(u,delta_u) = - F(u)
          

By using the Newton increment to update **u** and repeating the process
as needed, we can expect to get a good finite element solution of our
original nonlinear boundary value problem.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D\_NONLINEAR** is available in [a C
version](../../c_src/fem1d_nonlinear/fem1d_nonlinear.html) and [a C++
version](../../cpp_src/fem1d_nonlinear/fem1d_nonlinear.html) and [a
FORTRAN77 version](../../f77_src/fem1d_nonlinear/fem1d_nonlinear.html)
and [a FORTRAN90
version](../../f_src/fem1d_nonlinear/fem1d_nonlinear.html) and [a MATLAB
version.](../../m_src/fem1d_nonlinear/fem1d_nonlinear.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D](../../data/fem1d/fem1d.html), a data directory which contains
examples of 1D FEM files, three text files that describe a 1D finite
element model;

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method to a linear two point boundary value problem in
1D.

[FEM1D\_ADAPTIVE](../../cpp_src/fem1d_adaptive/fem1d_adaptive.html), a
C++ program which applies the finite element method to a linear two
point boundary value problem in a 1D region, using adaptive refinement
to improve the solution.

[FEM1D\_BVP\_LINEAR](../../cpp_src/fem1d_bvp_linear/fem1d_bvp_linear.html),
a C++ program which applies the finite element method, with piecewise
linear elements, to a two point boundary value problem in one spatial
dimension.

[FEM1D\_HEAT\_STEADY](../../cpp_src/fem1d_heat_steady/fem1d_heat_steady.html),
a C++ program which uses the finite element method to solve the steady
(time independent) heat equation in 1D.

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

-   [fem1d\_nonlinear.cpp](fem1d_nonlinear.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [problem1\_output.txt](problem1_output.txt), the output from solving
    problem 1.
-   [problem2\_output.txt](problem2_output.txt), the output from solving
    problem 2.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM1D\_NONLINEAR.
-   **ASSEMBLE\_NEWTON** assembles the Newton linear system.
-   **ASSEMBLE\_PICARD** assembles the Picard linear system.
-   **COMPARE** compares the computed and exact solutions.
-   **FF** returns the right hand side of the differential equation.
-   **GEOMETRY** sets up the geometry for the interval \[XL,XR\].
-   **INIT** initializes variables that define the problem.
-   **OUTPUT** prints out the computed solution at the nodes.
-   **PHI** evaluates a linear basis function and its derivative.
-   **PP** evaluates the function P in the differential equation.
-   **PRSYS** prints out the tridiagonal linear system.
-   **QQ** returns the value of the coefficient function Q(X).
-   **SOLVE** solves a tridiagonal matrix system of the form A\*x = b.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **U\_EXACT** returns the value of the exact solution at a point X.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 29 April 2007.*
