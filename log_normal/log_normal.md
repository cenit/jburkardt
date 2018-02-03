LOG\_NORMAL\
The Log Normal Probability Density Function {#log_normal-the-log-normal-probability-density-function align="center"}
===========================================

------------------------------------------------------------------------

**LOG\_NORMAL** is a C++ library which can evaluate quantities
associated with the log normal Probability Density Function (PDF).

If X is a variable drawn from the log normal distribution, then
correspondingly, the logarithm of X will have the normal distribution.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LOG\_NORMAL** is available in [a C
version](../../c_src/log_normal/log_normal.html) and [a C++
version](../../cpp_src/log_normal/log_normal.html) and [a FORTRAN90
version](../../f_src/log_normal/log_normal.html) and [a MATLAB
version](../../m_src/log_normal/log_normal.html) and [a Python
version](../../py_src/log_normal/log_normal.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LOG\_NORMAL\_TRUNCATED\_AB](../../cpp_src/log_normal_truncated_ab/log_normal_truncated_ab.html),
a C++ library which returns quantities associated with the log normal
Probability Distribution Function (PDF) truncated to the interval
\[A,B\].

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which samples
the normal distribution.

[PROB](../../cpp_src/prob/prob.html), a C++ library which evaluates,
samples, inverts, and characterizes a number of Probability Density
Functions (PDF's) and Cumulative Density Functions (CDF's), including
anglit, arcsin, benford, birthday, bernoulli, beta\_binomial, beta,
binomial, bradford, burr, cardiod, cauchy, chi, chi squared, circular,
cosine, deranged, dipole, dirichlet mixture, discrete, empirical,
english sentence and word length, error, exponential, extreme values, f,
fisk, folded normal, frechet, gamma, generalized logistic, geometric,
gompertz, gumbel, half normal, hypergeometric, inverse gaussian,
laplace, levy, logistic, log normal, log series, log uniform, lorentz,
maxwell, multinomial, nakagami, negative binomial, normal, pareto,
planck, poisson, power, quasigeometric, rayleigh, reciprocal, runs,
sech, semicircular, student t, triangle, uniform, von mises, weibull,
zipf.

[TRUNCATED\_NORMAL](../../cpp_src/truncated_normal/truncated_normal.html),
a C++ library which works with the truncated normal distribution over
\[A,B\], or \[A,+oo) or (-oo,B\], returning the probability density
function (PDF), the cumulative density function (CDF), the inverse CDF,
the mean, the variance, and sample values.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
samples the uniform distribution.

### Source Code: {#source-code align="center"}

-   [log\_normal.cpp](log_normal.cpp), the source code.
-   [log\_normal.hpp](log_normal.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [log\_normal\_prb.cpp](log_normal_prb.cpp) a sample calling program.
-   [log\_normal\_prb\_output.txt](log_normal_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **LOG\_NORMAL\_CDF** evaluates the Lognormal CDF.
-   **LOG\_NORMAL\_CDF\_INV** inverts the Lognormal CDF.
-   **LOG\_NORMAL\_CDF\_VALUES** returns some values of the Log Normal
    CDF.
-   **LOG\_NORMAL\_CHECK** checks the parameters of the Lognormal PDF.
-   **LOG\_NORMAL\_MEAN** returns the mean of the Lognormal PDF.
-   **LOG\_NORMAL\_PDF** evaluates the Lognormal PDF.
-   **LOG\_NORMAL\_SAMPLE** samples the Lognormal PDF.
-   **LOG\_NORMAL\_VARIANCE** returns the variance of the Lognormal PDF.
-   **LOG\_SERIES\_CDF** evaluates the Logarithmic Series CDF.
-   **NORMAL\_01\_CDF** evaluates the Normal 01 CDF.
-   **NORMAL\_01\_CDF\_INV** inverts the standard normal CDF.
-   **NORMAL\_CDF** evaluates the Normal CDF.
-   **NORMAL\_CDF\_INV** inverts the Normal CDF.
-   **NORMAL\_CHECK** checks the parameters of the Normal PDF.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8POLY\_VALUE** evaluates a double precision polynomial.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 March 2015.*
