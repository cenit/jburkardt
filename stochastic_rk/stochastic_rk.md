STOCHASTIC\_RK\
Runge-Kutta Integrator for Stochastic Differential Equations {#stochastic_rk-runge-kutta-integrator-for-stochastic-differential-equations align="center"}
============================================================

------------------------------------------------------------------------

**STOCHASTIC\_RK** is a C++ library which implements Runge-Kutta
integration methods for stochastic differential equations.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**STOCHASTIC\_RK** is available in [a C
version](../../c_src/stochastic_rk/stochastic_rk.html) and [a C++
version](../../cpp_src/stochastic_rk/stochastic_rk.html) and [a
FORTRAN77 version](../../f77_src/stochastic_rk/stochastic_rk.html) and
[a FORTRAN90 version](../../f_src/stochastic_rk/stochastic_rk.html) and
[a MATLAB version](../../m_src/stochastic_rk/stochastic_rk.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLACK\_SCHOLES](../../cpp_src/black_scholes/black_scholes.html), a C++
library which implements some simple approaches to the Black-Scholes
option valuation theory;

[COLORED\_NOISE](../../cpp_src/colored_noise/colored_noise.html), a C++
library which generates samples of noise obeying a 1/f\^alpha power law.

[FEYNMAN\_KAC\_2D](../../cpp_src/feynman_kac_2d/feynman_kac_2d.html), a
C++ program which demonstrates the use of the Feynman-Kac algorithm for
solving certain partial differential equations.

[ORNSTEIN\_UHLENBECK](../../cpp_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html),
a C++ library which approximates solutions of the Ornstein-Uhlenbeck
stochastic differential equation (SDE) using the Euler method and the
Euler-Maruyama method.

[PCE\_ODE\_HERMITE](../../cpp_src/pce_ode_hermite/pce_ode_hermite.html),
a C++ program which sets up a simple scalar ODE for exponential decay
with an uncertain decay rate, using a polynomial chaos expansion in
terms of Hermite polynomials.

[PINK\_NOISE](../../cpp_src/pink_noise/pink_noise.html), a C++ library
which computes a "pink noise" signal obeying a 1/f power law.

[SDE](../../cpp_src/sde/sde.html), a C++ library which illustrates the
properties of stochastic differential equations (SDE's), and common
algorithms for their analysis, by Desmond Higham;

[STOCHASTIC\_DIFFUSION](../../cpp_src/stochastic_diffusion/stochastic_diffusion.html),
a C++ library which implements several versions of a stochastic
diffusivity coefficient.

### Reference: {#reference align="center"}

1.  Jeremy Kasdin,\
    Runge-Kutta algorithm for the numerical integration of stochastic
    differential equations,\
    Journal of Guidance, Control, and Dynamics,\
    Volume 18, Number 1, January-February 1995, pages 114-120.
2.  Jeremy Kasdin,\
    Discrete Simulation of Colored Noise and Stochastic Processes and
    1/f\^a Power Law Noise Generation,\
    Proceedings of the IEEE,\
    Volume 83, Number 5, 1995, pages 802-827.

### Source Code: {#source-code align="center"}

-   [stochastic\_rk.cpp](stochastic_rk.cpp), the source code.
-   [stochastic\_rk.hpp](stochastic_rk.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [stochastic\_rk\_prb.cpp](stochastic_rk_prb.cpp), a sample calling
    program.
-   [stochastic\_rk\_prb\_output.txt](stochastic_rk_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **RK1\_TI\_STEP** takes one step of a stochastic Runge Kutta scheme.
-   **RK2\_TI\_STEP** takes one step of a stochastic Runge Kutta scheme.
-   **RK3\_TI\_STEP** takes one step of a stochastic Runge Kutta scheme.
-   **RK4\_TI\_STEP** takes one step of a stochastic Runge Kutta scheme.
-   **RK1\_TV\_STEP** takes one step of a stochastic Runge Kutta scheme.
-   **RK2\_TV\_STEP** takes one step of a stochastic Runge Kutta scheme.
-   **RK4\_TV\_STEP** takes one step of a stochastic Runge Kutta scheme.
-   **R8\_NORMAL\_01** returns a unit pseudonormal R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 July 2010.*
