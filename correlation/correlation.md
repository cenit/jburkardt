CORRELATION\
Examples of Correlation Functions {#correlation-examples-of-correlation-functions align="center"}
=================================

------------------------------------------------------------------------

**CORRELATION** is a C++ library which contains examples of statistical
correlation functions.

The (nonstationary) correlation function c(s,t) must satisfy the
following properties:

1.  -1 ≤ c(s,t) ≤ +1;
2.  c(s,t) = c(t,s);
3.  c(s,s) = 1;

Most of the correlation functions considered here determine the
correlation of two random values y(x1) and y(x2), depending only on
distance, that is, on the norm ||x1-x2||, which we will denote by "r".
Such correlation functions are called "stationary".

The stationary correlation function c(r) must satisfy the following
properties:

1.  -1 ≤ c(r) ≤ +1;
2.  c(0) = 1;

It is often the case that a typical scale length "r0" is specified,
called the "correlation length". In that case, the correlation function
may be expressed in terms of the normalized distance r/r0.

Because correlation functions model physical situations, it is usually
the case that the correlation function will smoothly and steadily
decrease to 0 with r, or that it will oscillate between positive and
negative values, with an amplitude that is steadily decreasing. One of
the most popular correlation functions is the gaussian correlation,
which has many desirable statistical and mathematical properties.

Correlation functions available include:

-   *besselj*: [(plot)](besselj_plot.png), [(plots)](besselj_plots.png),
    [(sample paths)](besselj_paths.png)
-   *besselk*: [(plot)](besselk_plot.png), [(plots)](besselk_plots.png),
    [(sample paths)](besselk_paths.png)
-   *brownian* (nonstationary): [(plots)](brownian_plots.png), [(sample
    paths)](brownian_paths.png)
-   *circular*: [(plot)](circular_plot.png),
    [(plots)](circular_plots.png), [(sample paths)](circular_paths.png)
-   *constant*: [(plot)](constant_plot.png),
    [(plots)](constant_plots.png), [(sample paths)](constant_paths.png)
-   *cubic*: [(plot)](cubic_plot.png), [(plots)](cubic_plots.png),
    [(sample paths)](cubic_paths.png)
-   *damped\_cosine*: [(plot)](damped_cosine_plot.png),
    [(plots)](damped_cosine_plots.png), [(sample
    paths)](damped_cosine_paths.png)
-   *damped\_sine*: [(plot)](damped_sine_plot.png),
    [(plots)](damped_sine_plots.png), [(sample
    paths)](damped_sine_paths.png)
-   *exponential*: [(plot)](exponential_plot.png),
    [(plots)](exponential_plots.png), [(sample
    paths)](exponential_paths.png)
-   *gaussian*: [(plot)](gaussian_plot.png),
    [(plots)](gaussian_plots.png), [(sample paths)](gaussian_paths.png)
-   *hole*: [(plot)](hole_plot.png), [(plots)](hole_plots.png), [(sample
    paths)](hole_paths.png)
-   *linear*: [(plot)](linear_plot.png), [(plots)](linear_plots.png),
    [(sample paths)](linear_paths.png)
-   *matern (NU=2.5)*: [(plot)](matern_plot.png),
    [(plots)](matern_plots.png), [(sample paths)](matern_paths.png)
-   *pentaspherical*: [(plot)](pentaspherical_plot.png),
    [(plots)](pentaspherical_plots.png), [(sample
    paths)](pentaspherical_paths.png)
-   *power (E=2.0)*: [(plot)](power_plot.png),
    [(plots)](power_plots.png), [(sample paths)](power_paths.png)
-   *rational\_quadratic*: [(plot)](rational_quadratic_plot.png),
    [(plots)](rational_quadratic_plots.png), [(sample
    paths)](rational_quadratic_paths.png)
-   *spherical*: [(plot)](spherical_plot.png),
    [(plots)](spherical_plots.png), [(sample
    paths)](spherical_paths.png)
-   *white\_noise*: [(plot)](white_noise_plot.png),
    [(plots)](white_noise_plots.png), [(sample
    paths)](white_noise_paths.png)

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CORRELATION** is available in [a C
version](../../c_src/correlation/correlation.html) and [a C++
version](../../cpp_src/correlation/correlation.html) and [a FORTRAN77
version](../../f77_src/correlation/correlation.html) and [a FORTRAN90
version](../../f_src/correlation/correlation.html) and [a MATLAB
version](../../m_src/correlation/correlation.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BROWNIAN\_MOTION\_SIMULATION](../../cpp_src/brownian_motion_simulation/brownian_motion_simulation.html),
a C++ program which simulates Brownian motion in an M-dimensional
region.

[COLORED\_NOISE](../../cpp_src/colored_noise/colored_noise.html), a C++
library which generates samples of noise obeying a 1/f\^alpha power law.

[GNUPLOT](../../examples/gnuplot/gnuplot.html), examples which
illustrate the use of the gnuplot graphics program.

[PINK\_NOISE](../../cpp_src/pink_noise/pink_noise.html), a C++ library
which computes a pink noise signal obeying a 1/f power law.

[SDE](../../cpp_src/sde/sde.html), a C++ library which illustrates the
properties of stochastic differential equations (SDE's), and common
algorithms for their analysis, by Desmond Higham;

### Reference: {#reference align="center"}

1.  Petter Abrahamsen,\
    A Review of Gaussian Random Fields and Correlation Functions,\
    Norwegian Computing Center, 1997.

### Source Code: {#source-code align="center"}

-   [correlation.cpp](correlation.cpp), the source code.
-   [correlation.hpp](correlation.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [correlation\_prb.c](correlation_prb.c), a sample calling program.
-   [correlation\_prb\_output.txt](correlation_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CORRELATION\_BROWNIAN** computes the Brownian correlation
    function.
-   **CORRELATION\_BESSELJ** evaluates the Bessel J correlation
    function.
-   **CORRELATION\_BESSELK** evaluates the Bessel K correlation
    function.
-   **CORRELATION\_BROWNIAN\_DISPLAY** displays 4 slices of the Brownian
    Correlation.
-   **CORRELATION\_CIRCULAR** evaluates the circular correlation
    function.
-   **CORRELATION\_CONSTANT** evaluates the constant correlation
    function.
-   **CORRELATION\_COSINE\_DAMPED** evaluates the damped cosine
    correlation function.
-   **CORRELATION\_CUBIC** evaluates the cubic correlation function.
-   **CORRELATION\_DAMPED\_COSINE** evaluates the damped cosine
    correlation function.
-   **CORRELATION\_DAMPED\_SINE** evaluates the damped sine correlation
    function.
-   **CORRELATION\_EXPONENTIAL** evaluates the exponential correlation
    function.
-   **CORRELATION\_GAUSSIAN** evaluates the Gaussian correlation
    function.
-   **CORRELATION\_HOLE** evaluates the hole correlation function.
-   **CORRELATION\_LINEAR** evaluates the linear correlation function.
-   **CORRELATION\_MATERN** evaluates the Matern correlation function.
-   **CORRELATION\_PENTASPHERICAL** evaluates the pentaspherical
    correlation function.
-   **CORRELATION\_POWER** evaluates the power correlation function.
-   **CORRELATION\_RATIONAL\_QUADRATIC:** rational quadratic correlation
    function.
-   **CORRELATION\_SINE\_DAMPED** evaluates the damped sine correlation
    function.
-   **CORRELATION\_SPHERICAL** evaluates the spherical correlation
    function.
-   **CORRELATION\_TO\_COVARIANCE:** covariance matrix from a
    correlation matrix.
-   **CORRELATION\_WHITE\_NOISE** evaluates the white noise correlation
    function.
-   **COVARIANCE\_TO\_CORRELATION:** correlation matrix from a
    covariance matrix.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **MINIJ** returns the MINIJ matrix.
-   **R8\_B0MP** evaluates the modulus and phase for the Bessel J0 and
    Y0 functions.
-   **R8\_BESI1** evaluates the Bessel function I of order 1 of an R8
    argument.
-   **R8\_BESI1E** evaluates the exponentially scaled Bessel function
    I1(X).
-   **R8\_BESJ0** evaluates the Bessel function J of order 0 of an R8
    argument.
-   **R8\_BESK** evaluates the Bessel function K of order NU of an R8
    argument.
-   **R8\_BESK1** evaluates the Bessel function K of order 1 of an R8
    argument.
-   **R8\_BESK1E** evaluates the exponentially scaled Bessel function
    K1(X).
-   **R8\_BESKES:** a sequence of exponentially scaled K Bessel
    functions at X.
-   **R8\_BESKS** evaluates a sequence of K Bessel functions at X.
-   **R8\_CSEVL** evaluates a Chebyshev series.
-   **R8\_GAML** evaluates bounds for an R8 argument of the gamma
    function.
-   **R8\_GAMMA** evaluates the gamma function of an R8 argument.
-   **R8\_INITS** initializes a Chebyshev series.
-   **R8\_KNUS** computes a sequence of K Bessel functions.
-   **R8\_LGMC** evaluates the log gamma correction factor for an R8
    argument.
-   **R8\_MACH** returns real ( kind = 8 ) real machine-dependent
    constants.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_CHOLESKY\_FACTOR** computes the Cholesky factor of a
    symmetric matrix.
-   **R8MAT\_IS\_SYMMETRIC** checks an R8MAT for symmetry.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **SAMPLE\_PATH\_CHOLESKY** computes a sample path for a correlation
    function.
-   **SAMPLE\_PATH\_EIGEN** computes a sample path for a correlation
    function.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TQL2** computes all eigenvalues/vectors, real symmetric
    tridiagonal matrix.
-   **TRED2** transforms a real symmetric matrix to symmetric
    tridiagonal form.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 12 November 2012.*
