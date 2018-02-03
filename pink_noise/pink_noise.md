PINK\_NOISE\
Samples of a Pink Noise Signal {#pink_noise-samples-of-a-pink-noise-signal align="center"}
==============================

------------------------------------------------------------------------

**PINK\_NOISE** is a C++ library which can generate random values taken
from an approximate pink noise signal obeying a 1/f power law.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PINK\_NOISE** is available in [a C
version](../../c_src/pink_noise/pink_noise.html) and [a C++
version](../../cpp_src/pink_noise/pink_noise.html) and [a FORTRAN77
version](../../f77_src/pink_noise/pink_noise.html) and [a FORTRAN90
version](../../f_src/pink_noise/pink_noise.html) and [a MATLAB
version](../../m_src/pink_noise/pink_noise.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLACK\_SCHOLES](../../cpp_src/black_scholes/black_scholes.html), a C++
library which implements some simple approaches to the Black-Scholes
option valuation theory, by Desmond Higham.

[COLORED\_NOISE](../../cpp_src/colored_noise/colored_noise.html), a C++
library which generates samples of noise obeying a 1/f\^alpha power law.

[CORRELATION](../../cpp_src/correlation/correlation.html), a C++ library
which contains examples of statistical correlation functions.

[ORNSTEIN\_UHLENBECK](../../cpp_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html),
a C++ library which approximates solutions of the Ornstein-Uhlenbeck
stochastic differential equation (SDE) using the Euler method and the
Euler-Maruyama method.

[SDE](../../cpp_src/sde/sde.html), a C++ library which illustrates the
properties of stochastic differential equations (SDE's), and common
algorithms for their analysis, by Desmond Higham;

[STOCHASTIC\_RK](../../cpp_src/stochastic_rk/stochastic_rk.html), a C++
library which applies a Runge-Kutta scheme to a stochastic differential
equation.

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

-   [pink\_noise.cpp](pink_noise.cpp), the source code.
-   [pink\_noise.hpp](pink_noise.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pink\_noise\_prb.cpp](pink_noise_prb.cpp) a sample calling program.
-   [pink\_noise\_prb\_output.txt](pink_noise_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CDELAY2** is a circular buffer implementation of M-fold delay.
-   **CORR** computes the sample correlation of a signal sample.
-   **CROSS\_CORR** computes the sample cross correlation between two
    signal samples.
-   **RAN1F** is a 1/F random number generator.
-   **RANH** is a hold random number generator of period D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WRAP2** is a circular wrap of the pointer offset Q.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 June 2010.*
