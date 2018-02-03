PCE\_BURGERS\
Polynomial Chaos Expansion for Burgers Equation {#pce_burgers-polynomial-chaos-expansion-for-burgers-equation align="center"}
===============================================

------------------------------------------------------------------------

**PCE\_BURGERS** is a C++ library which defines and solves a version of
the time-dependent viscous Burgers equation, with uncertain viscosity,
using a polynomial chaos expansion, in terms of Hermite polynomials, by
Gianluca Iaccarino.

The time-dependent viscous Burgers equation to be solved is:

            du/dt = - d ( u*(1/2-u)) /dx + nu d2u/dx2  for -3.0 <= x <= 3.0
          

with boundary conditions

            u(-3.0) = 0.0, u(+3.0) = 1.0.
          

The viscosity nu is assumed to be an uncertain quantity with normal
distribution of known mean and variance.

A polynomial chaos expansion is to be used, with Hermite polynomial
basis functions h(i,x), 0 &lt;= i &lt;= n.

Because the first two Hermite polynomials are simply 1 and x, we have
that

            nu = nu_mean * h(0,x) + nu_variance * h(1,x).
          

We replace the time derivative by an explicit Euler approximation, so
that the equation now describes the value of U(x,t+dt) in terms of known
data at time t.

Now assume that the solution U(x,t) can be approximated by the truncated
expansion:

            U(x,t) = sum ( 0 <= i <= n ) c(i,t) * h(i,x)
          

In the equation, we replace U by its expansion, and then multiply
successively by each of the basis functions h(\*,x) to get a set of n+1
equations that can be used to determine the values of c(i,t+dt).

This process is repeated until the desired final time is reached.

At any time, the coefficients c(0,t) contain information definining the
expected value of u(x,t) at that time, while the higher order
coefficients can be used to determine higher moments.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PCE\_BURGERS** is available in [a C
version](../../c_src/pce_burgers/pce_burgers.md) and [a C++
version](../../master/pce_burgers/pce_burgers.md) and [a FORTRAN77
version](../../f77_src/pce_burgers/pce_burgers.md) and [a FORTRAN90
version](../../f_src/pce_burgers/pce_burgers.md) and [a MATLAB
version](../../m_src/pce_burgers/pce_burgers.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HERMITE\_POLYNOMIAL](../../master/hermite_polynomial/hermite_polynomial.md),
a C++ library which evaluates the physicist's Hermite polynomial, the
probabilist's Hermite polynomial, the Hermite function, and related
functions.

[PCE\_ODE\_HERMITE](../../master/pce_ode_hermite/pce_ode_hermite.md),
a C++ program which sets up a simple scalar ODE for exponential decay
with an uncertain decay rate, using a polynomial chaos expansion in
terms of Hermite polynomials.

[SDE](../../master/sde/sde.md), a C++ library which illustrates the
properties of stochastic differential equations (SDE's), and common
algorithms for their analysis, by Desmond Higham;

### Author: {#author align="center"}

The original FORTRAN90 version of this program was written by Gianluca
Iaccarino.

### Reference: {#reference align="center"}

1.  Roger Ghanem, Pol Spanos,\
    Stochastic Finite Elements: A Spectral Approach,\
    Revised Edition,\
    Dover, 2003,\
    ISBN: 0486428184,\
    LC: TA347.F5.G56.
2.  Dongbin Xiu,\
    Numerical Methods for Stochastic Computations: A Spectral Method
    Approach,\
    Princeton, 2010,\
    ISBN13: 978-0-691-14212-8,\
    LC: QA274.23.X58.

### Source Code: {#source-code align="center"}

-   [pce\_burgers.cpp](pce_burgers.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pce\_burgers\_output.txt](pce_burgers_output.txt), the output file.
-   [burgers.history.txt](burgers.history.txt), the value of the
    solution (expansion coefficients) at selected times.
-   [burgers.modes.txt](burgers.modes.txt), the modes of the solution at
    the final time.
-   [burgers.moments.txt](burgers.moments.txt), the mean and variance of
    the coefficients at each point, at the final time.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PCE\_BURGERS.
-   **HE\_DOUBLE\_PRODUCT\_INTEGRAL:** integral of
    He(i,x)\*He(j,x)\*e\^(-x\^2/2).
-   **HE\_TRIPLE\_PRODUCT\_INTEGRAL:** integral of
    He(i,x)\*He(j,x)\*He(k,x)\*e\^(-x\^2/2).
-   **R8\_FACTORIAL** computes the factorial of N.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 16 March 2012.*
