PDFLIB\
Evaluate and Sample Probability Density Functions {#pdflib-evaluate-and-sample-probability-density-functions align="center"}
=================================================

------------------------------------------------------------------------

**PDFLIB** is a C++ library which evaluates Probability Density
Functions (PDF's) and produces random samples from them, including beta,
binomial, chi, exponential, gamma, inverse chi, inverse gamma,
multinomial, normal, scaled inverse chi, and uniform.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PDFLIB** is available in [a C version](../../c_src/pdflib/pdflib.html)
and [a C++ version](../../cpp_src/pdflib/pdflib.html) and [a FORTRAN90
version](../../f_src/pdflib/pdflib.html) and [a MATLAB
version](../../m_src/pdflib/pdflib.html) and [a Python
version](../../py_src/pdflib/pdflib.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LOG\_NORMAL\_TRUNCATED\_AB](../../cpp_src/log_normal_truncated_ab/log_normal_truncated_ab.html),
a C++ library which returns quantities associated with the log normal
Probability Distribution Function (PDF) truncated to the interval
\[A,B\].

[PROB](../../cpp_src/prob/prob.html), a C++ library which evaluates,
samples and inverts a number of Probability Density Functions (PDF's).

[RANLIB](../../cpp_src/ranlib/ranlib.html), a C++ library which produces
random samples from Probability Density Functions (PDF's), including
Beta, Chi-square Exponential, F, Gamma, Multivariate normal, Noncentral
chi-square, Noncentral F, Univariate normal, random permutations, Real
uniform, Binomial, Negative Binomial, Multinomial, Poisson and Integer
uniform, by Barry Brown and James Lovato.

[RNGLIB](../../cpp_src/rnglib/rnglib.html), a C++ library which
implements a random number generator (RNG) with splitting facilities,
allowing multiple independent streams to be computed, by L'Ecuyer and
Cote.

### Source Code: {#source-code align="center"}

-   [pdflib.cpp](pdflib.cpp), the source code.
-   [pdflib.hpp](pdflib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pdflib\_test.cpp](pdflib_test.cpp), a sample calling program.
-   [pdflib\_test.txt](pdflib_test.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_BINOMIAL\_PDF** evaluates the binomial PDF.
-   **I4\_BINOMIAL\_SAMPLE** generates a binomial random deviate.
-   **I4VEC\_MULTINOMIAL\_PDF** evaluates the multinomial PDF.
-   **I4VEC\_MULTINOMIAL\_SAMPLE** generates a multinomial random
    deviate.
-   **R8\_BETA\_PDF** evaluates the PDF of a beta distribution.
-   **R8\_BETA\_SAMPLE** generates a beta random deviate.
-   **R8\_CHI\_PDF** evaluates the PDF of a chi-squared distribution.
-   **R8\_CHI\_SAMPLE** generates a Chi-Square random deviate.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_EXPONENTIAL\_PDF** evaluates the PDF of an exponential
    distribution.
-   **R8\_EXPONENTIAL\_SAMPLE** samples the exponential PDF.
-   **R8\_EXPONENTIAL\_01\_PDF:** PDF of the standard exponential
    distribution.
-   **R8\_EXPONENTIAL\_01\_SAMPLE** samples the standard exponential
    PDF.
-   **R8\_GAMMA\_LOG** evaluates the logarithm of the gamma function.
-   **R8\_GAMMA\_PDF** evaluates the PDF of a gamma distribution.
-   **R8\_GAMMA\_SAMPLE** generates a Gamma random deviate.
-   **R8\_GAMMA\_01\_PDF** evaluates the PDF of a standard gamma
    distribution.
-   **R8\_GAMMA\_01\_SAMPLE** samples the standard Gamma distribution.
-   **R8\_INVCHI\_PDF** evaluates the PDF of an inverse chi-squared
    distribution.
-   **R8\_INVCHI\_SAMPLE** samples the inverse chi-squared distribution.
-   **R8\_INVGAM\_PDF** evaluates the PDF of an inverse gamma
    distribution.
-   **R8\_INVGAM\_SAMPLE** samples an inverse gamma distribution.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_NORMAL\_PDF** evaluates the PDF of a normal distribution.
-   **R8\_NORMAL\_SAMPLE** generates a normal random deviate.
-   **R8\_NORMAL\_01\_PDF** evaluates the PDF of a standard normal
    distribution.
-   **R8\_NORMAL\_01\_SAMPLE** samples the standard normal probability
    distribution.
-   **R8\_SCINVCHI\_PDF:** PDF for a scaled inverse chi-squared
    distribution.
-   **R8\_SCINVCHI\_SAMPLE:** sample a scaled inverse chi-squared
    distribution.
-   **R8\_UNIFORM\_PDF** evaluates the PDF of a uniform distribution.
-   **R8\_UNIFORM\_SAMPLE** generates a uniform random deviate.
-   **R8\_UNIFORM\_01\_PDF** evaluates the PDF of a standard uniform
    distribution.
-   **R8\_UNIFORM\_01\_SAMPLE** generates a uniform random deviate from
    \[0,1\].
-   **R8MAT\_MV\_NEW** multiplies a matrix times a vector.
-   **R8MAT\_POFAC** factors a real symmetric positive definite matrix.
-   **R8MAT\_POINV** computes the inverse of a factored positive
    definite matrix.
-   **R8MAT\_UPSOL** solves R \* X = B, for an upper triangular
    matrix R.
-   **R8MAT\_UTSOL** solves R' \* X = B for an upper triangular
    matrix R.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_MULTINORMAL\_PDF** evaluates a multivariate normal PDF.
-   **R8VEC\_MULTINORMAL\_SAMPLE** samples a multivariate normal PDF.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 August 2013.*
