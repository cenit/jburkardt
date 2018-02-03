LOG\_NORMAL\_TRUNCATED\_AB\
The Log Normal PDF Truncated to \[A,B\] {#log_normal_truncated_ab-the-log-normal-pdf-truncated-to-ab align="center"}
=======================================

------------------------------------------------------------------------

**LOG\_NORMAL\_TRUNCATED\_AB** is a C++ library which can evaluate
quantities associated with the log normal Probability Density Function
(PDF) truncated to the interval \[A,B\].

### Licensing: {#licensing align="center"}

The computer code described and made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LOG\_NORMAL\_TRUNCATED\_AB** is available in [a C
version](../../c_src/log_normal_truncated_ab/log_normal_truncated_ab.html)
and [a C++
version](../../cpp_src/log_normal_truncated_ab/log_normal_truncated_ab.html)
and [a FORTRAN90
version](../../f_src/log_normal_truncated_ab/log_normal_truncated_ab.html)
and [a MATLAB
version](../../m_src/log_normal_truncated_ab/log_normal_truncated_ab.html)
and [a Python
version](../../py_src/log_normal_truncated_ab/log_normal_truncated_ab.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LOG\_NORMAL](../../cpp_src/log_normal/log_normal.html), a C++ library
which samples the log normal distribution.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which samples
the normal distribution.

[PDFLIB](../../cpp_src/pdflib/pdflib.html), a C++ library which
evaluates Probability Density Functions (PDF's) and produces random
samples from them, including beta, binomial, chi, exponential, gamma,
inverse chi, inverse gamma, multinomial, normal, scaled inverse chi, and
uniform.

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

[UNIFORM](../../c_src/uniform/uniform.html), a C library which samples
the uniform distribution.

### Reference: {#reference align="center"}

### Source Code: {#source-code align="center"}

-   [log\_normal\_truncated\_ab.cpp](log_normal_truncated_ab.cpp), the
    source code.
-   [log\_normal\_truncated\_ab.hpp](log_normal_truncated_ab.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [log\_normal\_truncated\_ab\_prb.cpp](log_normal_truncated_ab_prb.cpp)
    a sample calling program.
-   [log\_normal\_truncated\_ab\_prb\_output.txt](log_normal_truncated_ab_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LOG\_NORMAL\_CDF** evaluates the Log Normal CDF.
-   **LOG\_NORMAL\_CDF\_INV** inverts the Log Normal CDF.
-   **LOG\_NORMAL\_PDF** evaluates the Log Normal PDF.
-   **LOG\_NORMAL\_TRUNCATED\_AB\_CDF** evaluates the Log Normal
    truncated AB CDF.
-   **LOG\_NORMAL\_TRUNCATED\_AB\_CDF\_INV** inverts the Log Normal
    truncated AB CDF.
-   **LOG\_NORMAL\_TRUNCATED\_AB\_CHECK** checks the Log Normal
    truncated AB PDF.
-   **LOG\_NORMAL\_TRUNCATED\_AB\_MEAN:** mean of the Log Normal
    truncated AB PDF.
-   **LOG\_NORMAL\_TRUNCATED\_AB\_PDF** evaluates the Log Normal
    truncated AB PDF.
-   **LOG\_NORMAL\_TRUNCATED\_AB\_SAMPLE** samples the Log Normal
    truncated AB PDF.
-   **LOG\_NORMAL\_TRUNCATED\_AB\_VARIANCE:** variance of Log Normal
    truncated AB PDF.
-   **NORMAL\_01\_CDF** evaluates the Normal 01 CDF.
-   **NORMAL\_01\_CDF\_INV** inverts the standard normal CDF.
-   **NORMAL\_CDF** evaluates the Normal CDF.
-   **NORMAL\_CDF\_INV** inverts the Normal CDF.
-   **NORMAL\_CHECK** checks the parameters of the Normal PDF.
-   **R8\_UNIFORM\_AB** returns a pseudorandom R8 scaled to \[A,B\].
-   **R8POLY\_VALUE\_HORNER** evaluates a polynomial using Horner's
    method.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 March 2016.*
