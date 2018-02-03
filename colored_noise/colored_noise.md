COLORED\_NOISE\
1/F\^alpha Power Law Noise Generation {#colored_noise-1falpha-power-law-noise-generation align="center"}
=====================================

------------------------------------------------------------------------

**COLORED\_NOISE** is a C++ library which generates sequences that
simulate 1/f\^alpha power law noise. This includes white noise (alpha =
0), pink noise (alpha = 1) and brown noise or Brownian motion (alpha =
2), but also values of alpha between 0 and 2.

The original code listing by Kasdin referenced a number of functions
from the Numerical Recipes library (FOUR1, FREE\_VECTOR, GASDEV, RAN1,
REALFT, VECTOR). Numerical Recipes is a proprietary library whose
components cannot be freely distributed. Moreover, the referenced
functions have some peculiarities of implementation (the FFT is not
normalized; the FFT data must be a power of 2 in order; the code uses
single precision real arithmetic).

In the code presented here, references to Numerical Recipes functions
have been replaced by references to, and the source code of,
nonproprietary code. In particular, the Fourier transform is implemented
by a "slow Fourier transform" method, and by simple uniform and normal
random number generators. You are welcome to make an efficient code by
replacing these routines. The purpose of this posting is primarily to
demonstrate the method.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**COLORED\_NOISE** is available in [a C
version](../../c_src/colored_noise/colored_noise.html) and [a C++
version](../../cpp_src/colored_noise/colored_noise.html) and [a
FORTRAN77 version](../../f77_src/colored_noise/colored_noise.html) and
[a FORTRAN90 version](../../f_src/colored_noise/colored_noise.html) and
[a MATLAB version](../../m_src/colored_noise/colored_noise.html) and [a
Python version](../../py_src/colored_noise/colored_noise.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLACK\_SCHOLES](../../cpp_src/black_scholes/black_scholes.html), a C++
library which implements some simple approaches to the Black-Scholes
option valuation theory, by Desmond Higham.

[CORRELATION](../../cpp_src/correlation/correlation.html), a C++ library
which contains examples of statistical correlation functions.

[ORNSTEIN\_UHLENBECK](../../cpp_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html),
a C++ library which approximates solutions of the Ornstein-Uhlenbeck
stochastic differential equation (SDE) using the Euler method and the
Euler-Maruyama method.

[PINK\_NOISE](../../cpp_src/pink_noise/pink_noise.html), a C++ library
which computes a "pink noise" signal obeying a 1/f power law.

[SDE](../../cpp_src/sde/sde.html), a C++ library which illustrates the
properties of stochastic differential equations (SDE's), and common
algorithms for their analysis, by Desmond Higham;

[SFTPACK](../../cpp_src/sftpack/sftpack.html), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[STOCHASTIC\_RK](../../cpp_src/stochastic_rk/stochastic_rk.html), a C++
library which applies a Runge-Kutta scheme to a stochastic differential
equation.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes elements of a uniform pseudorandom sequence.

### Reference: {#reference align="center"}

1.  Martin Gardner,\
    White and brown music, fractal curves and one-over-f fluctuations,\
    Scientific American,\
    Volume 238, Number 4, April 1978, pages 16-32.
2.  Jeremy Kasdin,\
    Discrete Simulation of Colored Noise and Stochastic Processes and
    1/f\^a Power Law Noise Generation,\
    Proceedings of the IEEE,\
    Volume 83, Number 5, 1995, pages 802-827.
3.  Edoardo Milotti,\
    1/f noise: a pedagogical review,\
    arXiv:physics/0204033.
4.  Sophocles Orfanidis,\
    Introduction to Signal Processing,\
    Prentice-Hall, 1995,\
    ISBN: 0-13-209172-0,\
    LC: TK5102.5.O246.
5.  William Press,\
    Flicker Noises in Astronomy and Elsewhere,\
    Comments on Astrophysics,\
    Volume 7, Number 4, 1978, pages 103-119.
6.  Miroslav Stoyanov, Max Gunzburger, John Burkardt,\
    Pink Noise, 1/f\^alpha Noise, and Their Effect on Solutions of
    Differential Equations,\
    International Journal for Uncertainty Quantification,\
    Volume 1, Number 3, pages 257-278, 2011.

### Source Code: {#source-code align="center"}

-   [colored\_noise.cpp](colored_noise.cpp), the source code.
-   [colored\_noise.hpp](colored_noise.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [colored\_noise\_prb.cpp](colored_noise_prb.cpp) a sample calling
    program.
-   [colored\_noise\_prb\_output.txt](colored_noise_prb_output.txt), the
    output file.

**ALPHA** is a sequence of 9 sets of data, for ALPHA = 0.00 to ALPHA =
2.00, each time computing a sequence of 128 values, and using the same
sequence of random numbers. This makes the effect of ALPHA very clear.

-   [make\_plots.m](make_plots.m) a MATLAB program which reads the "txt"
    files and makes plots.
-   [alpha\_0.00.txt](alpha_0.00.txt) values for ALPHA = 0.00.
-   [alpha\_0.00.png](alpha_0.00.png), a plot.
-   [alpha\_0.25.txt](alpha_0.25.txt) values for ALPHA = 0.25.
-   [alpha\_0.25.png](alpha_0.25.png), a plot.
-   [alpha\_0.50.txt](alpha_0.50.txt) values for ALPHA = 0.50.
-   [alpha\_0.50.png](alpha_0.50.png), a plot.
-   [alpha\_0.75.txt](alpha_0.75.txt) values for ALPHA = 0.75.
-   [alpha\_0.75.png](alpha_0.75.png), a plot.
-   [alpha\_1.00.txt](alpha_1.00.txt) values for ALPHA = 1.00.
-   [alpha\_1.00.png](alpha_1.00.png), a plot.
-   [alpha\_1.25.txt](alpha_1.25.txt) values for ALPHA = 1.25.
-   [alpha\_1.25.png](alpha_1.25.png), a plot.
-   [alpha\_1.50.txt](alpha_1.50.txt) values for ALPHA = 1.50.
-   [alpha\_1.50.png](alpha_1.50.png), a plot.
-   [alpha\_1.75.txt](alpha_1.75.txt) values for ALPHA = 1.75.
-   [alpha\_1.75.png](alpha_1.75.png), a plot.
-   [alpha\_2.00.txt](alpha_2.00.txt) values for ALPHA = 2.00.
-   [alpha\_2.00.png](alpha_2.00.png), a plot.

### List of Routines: {#list-of-routines align="center"}

-   **F\_ALPHA** generates a 1/F\^ALPHA noise sequence.
-   **R8\_NORMAL\_01** returns a unit pseudonormal R8.
-   **R8\_TO\_STRING** converts an R8 to a C++ string.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_PRINT\_PART** prints "part" of an R8VEC.
-   **R8VEC\_SFTB** computes a "slow" backward Fourier transform of real
    data.
-   **R8VEC\_SFTF** computes a "slow" forward Fourier transform of real
    data.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 June 2010.*
