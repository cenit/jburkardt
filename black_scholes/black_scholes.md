BLACK\_SCHOLES\
The Black-Scholes Equation {#black_scholes-the-black-scholes-equation align="center"}
==========================

------------------------------------------------------------------------

**BLACK\_SCHOLES** is a C++ library which demonstrates several simple
approaches to the valuation of a European call using the Black-Scholes
equation, by Desmond Higham.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BLACK\_SCHOLES** is available in [a C
version](../../c_src/black_scholes/black_scholes.html) and [a C++
version](../../cpp_src/black_scholes/black_scholes.html) and [a
FORTRAN77 version](../../f77_src/black_scholes/black_scholes.html) and
[a FORTRAN90 version](../../f_src/black_scholes/black_scholes.html) and
[a MATLAB version](../../m_src/black_scholes/black_scholes.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COLORED\_NOISE](../../cpp_src/colored_noise/colored_noise.html), a C++
library which generates samples of noise obeying a 1/f\^alpha power law.

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

[STOCHASTIC\_RK](../../cpp_src/stochastic_rk/stochastic_rk.html), a C++
library which applies a Runge-Kutta scheme to a stochastic differential
equation.

### Author: {#author align="center"}

Original MATLAB version by Desmond Higham;\
C++ version by John Burkardt.

### Reference: {#reference align="center"}

1.  Desmond Higham,\
    Black-Scholes for Scientific Computing Students,\
    Computing in Science and Engineering,\
    Volume 6, Number 6, November/December 2004, pages 72-79.

### Source Code: {#source-code align="center"}

-   [black\_scholes.cpp](black_scholes.cpp), the source code.
-   [black\_scholes.hpp](black_scholes.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [black\_scholes\_prb.cpp](black_scholes_prb.cpp), a sample calling
    program.
-   [black\_scholes\_prb\_output.txt](black_scholes_prb_output.txt), the
    output file.
-   [asset\_path.txt](asset_path.txt), the output data file from the
    asset path test.

### List of Routines: {#list-of-routines align="center"}

-   **ASSET\_PATH** simulates the behavior of an asset price over time.
-   **BINOMIAL** uses the binomial method for a European call.
-   **BSF** evaluates the Black-Scholes formula for a European call.
-   **FORWARD** uses the forward difference method to value a European
    call option.
-   **MC** uses Monte Carlo valuation on a European call.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_PRINT\_PART** prints "part" of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **R8VEC\_WRITE** writes an R8VEC file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 18 February 2012.*
