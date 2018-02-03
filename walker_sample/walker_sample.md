WALKER\_SAMPLE\
Efficient Probability Vector Sampling {#walker_sample-efficient-probability-vector-sampling align="center"}
=====================================

------------------------------------------------------------------------

**WALKER\_SAMPLE** is a C++ library which efficiently samples a discrete
probability vector.

For outcomes labeled 1, 2, 3, ..., N, a discrete probability vector X is
an array of N non-negative values which sum to 1, such that X\[i\] is
the probability of outcome i.

To sample the probability vector is to produce a sequence of outcomes
i1, i2, i3, ..., which are each drawn with probability corresponding to
X. For a general discrete probability vector X, a single sample
operation might be expected to take a time that is proportional to O(N),
the number of outcomes. Walker showed that, by constructing a new data
structure, it was possible to carry out a sample in time of order O(1),
that is, independent of the number of possible outcomes.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WALKER\_SAMPLE** is available in [a C
version](../../c_src/walker_sample/walker_sample.html) and [a C++
version](../../cpp_src/walker_sample/walker_sample.html) and [a
FORTRAN90 version](../../f_src/walker_sample/walker_sample.html) and [a
Matlab version](../../m_src/walker_sample/walker_sample.html) and [a
Python version](../../py_src/walker_sample/walker_sample.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HISTOGRAM\_DATA\_2D\_SAMPLE](../../cpp_src/histogram_data_2d_sample/histogram_data_2d_sample.html),
a C++ program which demonstrates how to construct a Probability Density
Function (PDF) from a frequency table over a 2D domain, and then to use
that PDF to create new samples.

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

[RANLIB](../../cpp_src/ranlib/ranlib.html), a C++ library which produces
random samples from Probability Density Functions (PDF's), including
Beta, Chi-square Exponential, F, Gamma, Multivariate normal, Noncentral
chi-square, Noncentral F, Univariate normal, random permutations, Real
uniform, Binomial, Negative Binomial, Multinomial, Poisson and Integer
uniform, by Barry Brown and James Lovato.

### Reference: {#reference align="center"}

1.  Donald Knuth,\
    Seminumerical algorithms,\
    Addison-Wesley-Longman, 1999.
2.  Warren Smith,\
    How to sample from a probability distribution,\
    April 18, 2002.
3.  Alastair Walker,\
    An efficient method for generating discrete random variables with
    general distributions,\
    ACM Transactions on Mathematical Software,\
    Volume 3, Number 3, September 1977, pages 253-256.

### Source Code: {#source-code align="center"}

-   [walker\_sample.cpp](walker_sample.cpp), the source code;
-   [walker\_sample.hpp](walker_sample.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [walker\_sample\_prb.cpp](walker_sample_prb.cpp), the calling
    program;
-   [walker\_sample\_prb\_output.txt](walker_sample_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **NORMALIZE** scales a vector X so its entries sum to 1.
-   **RANDOM\_PERMUTATION** applies a random permutation to an array.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WALKER\_BUILD** sets up the data for a Walker sampler.
-   **WALKER\_SAMPLE** returns a random sample i=1..N with prob X\[i\].
-   **WALKER\_TEST01** tests the Walker sampler with a Zipf-type
    probability vector.
-   **WALKER\_VERIFY** verifies a Walker Sampler structure.
-   **ZIPF\_PROBABILITY** sets up a Zipf probability vector.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 19 February 2016.*
