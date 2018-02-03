PCE\_ODE\_HERMITE\
Hermite Polynomial Chaos Expansion for a Scalar ODE {#pce_ode_hermite-hermite-polynomial-chaos-expansion-for-a-scalar-ode align="center"}
===================================================

------------------------------------------------------------------------

**PCE\_ODE\_HERMITE** is a C++ library which defines and solves a
time-dependent scalar exponential decay ODE with uncertain decay
coefficient, using a polynomial chaos expansion, in terms of Hermite
polynomials.

The deterministic equation is

            du/dt = - alpha * u,
            u(0) = u0
          

In the stochastic version, it is assumed that the decay coefficient
ALPHA is a Gaussian random variable with mean value ALPHA\_MU and
variance ALPHA\_SIGMA\^2.

The exact expected value of the stochastic equation is known to be

            u(t) = u0 * exp ( t^2/2)
          

This should be matched by the first component of the polynomial chaos
expansion.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PCE\_ODE\_HERMITE** is available in [a C
version](../../c_src/pce_ode_hermite/pce_ode_hermite.md) and [a C++
version](../../master/pce_ode_hermite/pce_ode_hermite.md) and [a
FORTRAN77 version](../../f77_src/pce_ode_hermite/pce_ode_hermite.md)
and [a FORTRAN90
version](../../f_src/pce_ode_hermite/pce_ode_hermite.md) and [a MATLAB
version](../../m_src/pce_ode_hermite/pce_ode_hermite.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLACK\_SCHOLES](../../master/black_scholes/black_scholes.md), a C++
library which implements some simple approaches to the Black-Scholes
option valuation theory, by Desmond Higham.

[HERMITE\_POLYNOMIAL](../../master/hermite_polynomial/hermite_polynomial.md),
a C++ library which evaluates the physicist's Hermite polynomial, the
probabilist's Hermite polynomial, the Hermite function, and related
functions.

[PCE\_BURGERS](../../master/pce_burgers/pce_burgers.md), a C++
program which defines and solves a version of the time-dependent viscous
Burgers equation, with uncertain viscosity, using a polynomial chaos
expansion in terms of Hermite polynomials, by Gianluca Iaccarino.

[SDE](../../master/sde/sde.md), a C++ library which illustrates the
properties of stochastic differential equations (SDE's), and common
algorithms for their analysis, by Desmond Higham;

[STOCHASTIC\_RK](../../master/stochastic_rk/stochastic_rk.md), a C++
library which applies a Runge Kutta (RK) scheme to a stochastic
differential equation.

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

-   [pce\_ode\_hermite.cpp](pce_ode_hermite.cpp), the source code.
-   [pce\_ode\_hermite.hpp](pce_ode_hermite.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pce\_ode\_hermite\_prb.cpp](pce_ode_hermite_prb.cpp), a sample
    calling program.
-   [pce\_ode\_hermite\_prb\_output.txt](pce_ode_hermite_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **HE\_DOUBLE\_PRODUCT\_INTEGRAL:** integral of
    He(i,x)\*He(j,x)\*e\^(-x\^2/2).
-   **HE\_TRIPLE\_PRODUCT\_INTEGRAL:** integral of
    He(i,x)\*He(j,x)\*He(k,x)\*e\^(-x\^2/2).
-   **PCE\_ODE\_HERMITE** applies the polynomial chaos expansion to a
    scalar ODE.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 18 March 2012.*
