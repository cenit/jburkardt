STOCHASTIC\_DIFFUSION\
Stochastic Diffusivity {#stochastic_diffusion-stochastic-diffusivity align="center"}
======================

------------------------------------------------------------------------

**STOCHASTIC\_DIFFUSION** is a C++ library which implement several
versions of a stochastic diffusivity coefficient, using GNUPLOT to
create graphic images of sample realizations of the diffusivity field.

The 1D diffusion equation has the form

            - d/dx ( DC(X) d/dx U(X) ) = F(X).
          

where DC(X) is a function called the *diffusivity* and F(X) is called
the *source term* or *forcing term*.

In the 1D stochastic version of the problem, the diffusivity function
includes the influence of stochastic parameters:

            - d/dx ( DC(X;OMEGA) d/dx U(X;OMEGA) ) = F(X).
          

The 2D diffusion equation has the form

            - Del ( DC(X,Y) Del U(X,Y) ) = F(X,Y).
          

In the 2D stochastic version of the problem, the diffusivity function
includes the influence of stochastic parameters:

            - Del ( DC(X,Y;OMEGA) Del U(X,Y;OMEGA) ) = F(X,Y).
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**STOCHASTIC\_DIFFUSION** is available in [a C
version](../../c_src/stochastic_diffusion/stochastic_diffusion.html) and
[a C++
version](../../cpp_src/stochastic_diffusion/stochastic_diffusion.html)
and [a FORTRAN77
version](../../f77_src/stochastic_diffusion/stochastic_diffusion.html)
and [a FORTRAN90
version](../../f_src/stochastic_diffusion/stochastic_diffusion.html) and
[a MATLAB
version](../../m_src/stochastic_diffusion/stochastic_diffusion.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLACK\_SCHOLES](../../cpp_src/black_scholes/black_scholes.html), a C++
library which implements some simple approaches to the Black-Scholes
option valuation theory;

[CORRELATION](../../cpp_src/correlation/correlation.html), a C++ library
which contains examples of statistical correlation functions.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[ORNSTEIN\_UHLENBECK](../../cpp_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html),
a C++ library which approximates solutions of the Ornstein-Uhlenbeck
stochastic differential equation (SDE) using the Euler method and the
Euler-Maruyama method.

[PCE\_ODE\_HERMITE](../../cpp_src/pce_ode_hermite/pce_ode_hermite.html),
a C++ program which sets up a simple scalar ODE for exponential decay
with an uncertain decay rate, using a polynomial chaos expansion in
terms of Hermite polynomials.

[SDE](../../cpp_src/sde/sde.html), a C++ library which illustrates the
properties of stochastic differential equations, and common algorithms
for their analysis, by Desmond Higham;

### Reference: {#reference align="center"}

1.  Ivo Babuska, Fabio Nobile, Raul Tempone,\
    A Stochastic Collocation Method for Elliptic Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 45, Number 3, 2007, pages 1005-1034.
2.  Howard Elman, Darran Furnaval,\
    Solving the stochastic steady-state diffusion problem using
    multigrid,\
    IMA Journal on Numerical Analysis,\
    Volume 27, Number 4, 2007, pages 675-688.
3.  Roger Ghanem, Pol Spanos,\
    Stochastic Finite Elements: A Spectral Approach,\
    Revised Edition,\
    Dover, 2003,\
    ISBN: 0486428184,\
    LC: TA347.F5.G56.
4.  Xiang Ma, Nicholas Zabaras,\
    An adaptive hierarchical sparse grid collocation algorithm for the
    solution of stochastic differential equations,\
    Journal of Computational Physics,\
    Volume 228, pages 3084-3113, 2009.
5.  Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
6.  Dongbin Xiu, George Karniadakis,\
    Modeling uncertainty in steady state diffusion problems via
    generalized polynomial chaos,\
    Computer Methods in Applied Mechanics and Engineering,\
    Volume 191, 2002, pages 4927-4948.

-   [stochastic\_diffusion.cpp](stochastic_diffusion.cpp), the source
    code.
-   [stochastic\_diffusion.hpp](stochastic_diffusion.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [stochastic\_diffusion\_prb.cpp](stochastic_diffusion_prb.cpp), a
    sample calling program.
-   [stochastic\_diffusion\_prb\_output.txt](stochastic_diffusion_prb_output.txt),
    the output file.

The test program makes a set of command and data files that can be used
by GNUPLOT to create graphic images.

-   [bnt\_data.txt](bnt_data.txt), the graphics data file.
-   [bnt\_commands.txt](bnt_commands.txt), the GNUPLOT command file.
-   [bnt\_contour.png](bnt_contour.png), a plot of the diffusivity as a
    function of X and Y.
-   [elman\_data.txt](elman_data.txt), the graphics data file.
-   [elman\_commands.txt](elman_commands.txt), the GNUPLOT command file.
-   [elman\_contour.png](elman_contour.png), a plot of the diffusivity
    as a function of X and Y.
-   [ntw\_data.txt](ntw_data.txt), the graphics data file.
-   [ntw\_commands.txt](ntw_commands.txt), the GNUPLOT command file.
-   [ntw\_contour.png](ntw_contour.png), a plot of the diffusivity as a
    function of X and Y.
-   [xk\_data.txt](xk_data.txt), the graphics data file.
-   [xk\_commands.txt](xk_commands.txt), the GNUPLOT command file.
-   [xk\_contour.png](xk_contour.png), a plot of the diffusivity as a
    function of X.

### List of Routines: {#list-of-routines align="center"}

-   **DIFFUSIVITY\_1D\_XK** evaluates a 1D stochastic diffusivity
    function.
-   **DIFFUSIVITY\_2D\_BNT** evaluates a 2D stochastic diffusivity
    function.
-   **DIFFUSIVITY\_2D\_ELMAN** evaluates a 2D stochastic diffusivity
    function.
-   **DIFFUSIVITY\_2D\_NTW** evaluates a 2D stochastic diffusivity
    function.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_MAX** returns the maximum entry of an R8MAT.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_MAX** returns the maximum value in an R8VEC.
-   **R8VEC\_MESH\_2D** creates a 2D mesh from X and Y vectors.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **THETA\_SOLVE** solves a pair of transcendental equations.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 07 August 2013.*
