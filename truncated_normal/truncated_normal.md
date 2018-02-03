TRUNCATED\_NORMAL\
The Truncated Normal Distribution {#truncated_normal-the-truncated-normal-distribution align="center"}
=================================

------------------------------------------------------------------------

**TRUNCATED\_NORMAL** is a C++ library which computes quantities
associated with the truncated normal distribution.

In statistics and probability, many quantities are well modeled by the
normal distribution, often called the "bell curve". The main features of
the normal distribution are that it has an average value or mean, whose
probability exceeds that of all other values, and that on either side of
the mean, the density function smoothly decreases, without every
becoming zero.

For various reasons, it may be preferable to work with a truncated
normal distribution. This may be because the normal distribution is a
good fit for our data, but for physical reasons we know our data can
never be negative, or we only wish to consider data within a particular
range of interest to us, which we might symbolize as \[A,B\], or
\[A,+oo), or (-oo,B), depending on the truncation we apply.

It is possible to define a truncated normal distribution by first
assuming the existence of a "parent" normal distribution, with mean MU
and standard deviation SIGMA. We may then derive a modified distribution
which is zero outside the region of interest, and inside the region, has
the same "shape" as the parent normal distribution, although scaled by a
constant so that its integral is 1.

Note that, although we define the truncated normal distribution function
in terms of a parent normal distribution with mean MU and standard
deviation SIGMA, in general, the mean and standard deviation of the
truncated normal distribution are different values entirely; however,
their values can be worked out from the parent values MU and SIGMA, and
the truncation limits. That is what is done in the "\_mean()" and
"\_variance()" functions.

### Details {#details align="center"}

Define the unit normal distribution probability density function (PDF)
for any -oo &lt; x &lt; +oo:

            N(0,1)(x) = 1/sqrt(2*pi) * exp ( - x^2 / 2 )
          

This library includes the following functions for N(0,1)(x):

-   normal\_01\_cdf(): returns CDF, given X.
-   normal\_01\_cdf\_inv(): returns X, given CDF.
-   normal\_01\_mean(): returns the mean (which will be 0).
-   normal\_01\_moment(): returns moments.
-   normal\_01\_pdf(): returns PDF.
-   normal\_01\_sample(): randomly samples.
-   normal\_01\_variance(): returns variance (which will be 1).

For a normal distribution with mean MU and standard deviation SIGMA, the
formula for the PDF is:

            N(MU,S)(x) = 1 / sqrt(2*pi) / sigma * exp ( - ( ( x - mu ) / sigma )^2 )
          

This library includes the following functions for N(MU,SIGMA)(x):

-   normal\_ms\_cdf(): returns CDF, given X.
-   normal\_ms\_cdf\_inv(): returns X, given CDF.
-   normal\_ms\_mean(): returns mean (which will be MU).
-   normal\_ms\_moment(): returns moments.
-   normal\_ms\_moment\_central(): returns central moments.
-   normal\_ms\_pdf(): returns PDF.
-   normal\_ms\_sample(): randomly samples.
-   normal\_ms\_variance(): returns variance (which will be SIGMA\^2).

Define the truncated normal distribution PDF with parent normal
N(MU,SIGMA)(x), for a &lt; x &lt; b:

            NAB(MU,SIGMA)(x) = N(MU,SIGMA)(x) / ( cdf(N(MU,SIGMA))(b) - cdf(N(MU,SIGMA))(a) )
          

This library includes the following functions for NAB(MU,SIGMA)(x)

-   truncated\_normal\_ab\_cdf(): returns CDF, given X.
-   truncated\_normal\_ab\_cdf\_inv(): returns X, given CDF.
-   truncated\_normal\_ab\_mean(): returns mean.
-   truncated\_normal\_ab\_moment(): returns moments.
-   truncated\_normal\_ab\_pdf(): returns PDF.
-   truncated\_normal\_ab\_sample(): randomly samples.
-   truncated\_normal\_ab\_variance(): returns variance.

Define the lower truncated normal distribution PDF with parent normal
N(MU,SIGMA)(x), for a &lt; x &lt; +oo:

            NA(MU,SIGMA)(x) = N(MU,SIGMA)(x) / ( 1 - cdf(N(MU,SIGMA))(a) )
          

This library includes the following functions for NA(MU,SIGMA)(x):

-   truncated\_normal\_a\_cdf(): returns CDF, given X.
-   truncated\_normal\_a\_cdf\_inv(): returns X, given CDF.
-   truncated\_normal\_a\_mean(): returns mean.
-   truncated\_normal\_a\_moment(): returns moments.
-   truncated\_normal\_a\_pdf(): returns PDF.
-   truncated\_normal\_a\_sample(): randomly samples.
-   truncated\_normal\_a\_variance(): returns variance.

Define the upper truncated normal distribution PDF with parent normal
N(MU,SIGMA), for -oo &lt; x &lt; b:

            NB(MU,SIGMA)(x) = N(MU,SIGMA)(x) / cdf(N(MU,SIGMA))(b)
          

This library includes the following functions for NB(MU,SIGMA)(x):

-   truncated\_normal\_b\_cdf(): returns CDF, given X.
-   truncated\_normal\_b\_cdf\_inv(): returns X, given CDF.
-   truncated\_normal\_b\_mean(): returns mean.
-   truncated\_normal\_b\_moment(): returns moments.
-   truncated\_normal\_b\_pdf(): returns PDF.
-   truncated\_normal\_b\_sample(): randomly samples.
-   truncated\_normal\_b\_variance(): returns variance.

### Demonstrations {#demonstrations align="center"}

The CDF and CDF\_INV functions should be inverses of each other. A
simple test of the truncated AB normal functions would be

            mu = 100.0;
            sigma = 25.0;
            a = 50.0;
            b = 120.0;
            seed = 123456789;

            [ x, seed ] = truncated_normal_ab_sample ( mu, sigma, a, b, seed );
            cdf = truncated_normal_ab_cdf ( x, mu, sigma, a, b );
            x2 = truncated_normal_ab_cdf_inv ( cdf, mu, sigma, a, b );
          

and compare **x** and **x2**, which should be quite close if the inverse
function is working correctly.

A simple test of the mean and variance functions might be to compare the
theoretical mean and variance to the sample mean and variance of a
sample of 1,000 values:

            sample_num = 1000;
            mu = 100.0;
            sigma = 25.0;
            a = 50.0;
            b = 120.0;
            seed = 123456789;

            for i = 1 : sample_num
              [ x(i), seed ] = truncated_normal_ab_sample ( mu, sigma, a, b, seed );
            end

            m = truncated_normal_ab_mean ( mu, sigma, a, b );
            v = truncated_normal_ab_variance ( mu, sigma, a, b );
            ms = mean ( x );
            vs = var ( x );
          

Typically, the values of **m** and **ms**, of **v** and **vs** should be
"reasonably close".

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRUNCATED\_NORMAL** is available in [a C
version](../../c_src/truncated_normal/truncated_normal.md) and [a C++
version](../../master/truncated_normal/truncated_normal.md) and [a
FORTRAN77 version](../../f77_src/truncated_normal/truncated_normal.md)
and [a FORTRAN90
version](../../f_src/truncated_normal/truncated_normal.md) and [a
MATHEMATICA
version](../../math_src/truncated_normal/truncated_normal.md) and [a
MATLAB version](../../m_src/truncated_normal/truncated_normal.md) and
[a Python version](../../py_src/truncated_normal/truncated_normal.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LOG\_NORMAL\_TRUNCATED\_AB](../../master/log_normal_truncated_ab/log_normal_truncated_ab.md),
a C++ library which returns quantities associated with the log normal
Probability Distribution Function (PDF) truncated to the interval
\[A,B\].

[NORMAL](../../master/normal/normal.md), a C++ library which samples
the normal distribution.

[PDFLIB](../../master/pdflib/pdflib.md), a C++ library which
evaluates Probability Density Functions (PDF's) and produces random
samples from them, including beta, binomial, chi, exponential, gamma,
inverse chi, inverse gamma, multinomial, normal, scaled inverse chi, and
uniform.

[PROB](../../master/prob/prob.md), a C++ library which evaluates
Probability Density Functions (PDF's) and Cumulative Density Functions
(CDF's), means, variances, and samples for a variety of standard
probability distributions.

[TRUNCATED\_NORMAL\_RULE](../../master/truncated_normal_rule/truncated_normal_rule.md),
a C++ program which computes a quadrature rule for a normal probability
density function (PDF), also called a Gaussian distribution, that has
been truncated to \[A,+oo), (-oo,B\] or \[A,B\].

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
samples the uniform distribution.

### Reference: {#reference align="center"}

-   Norman Johnson, Samuel Kotz, Narayanaswamy Balakrishnan,\
    Continuous Univariate Distributions,\
    Second edition,\
    Wiley, 1994,\
    ISBN: 0471584940,\
    LC: QA273.6.J6.

### Source Code: {#source-code align="center"}

-   [truncated\_normal.cpp](truncated_normal.cpp), the source code;
-   [truncated\_normal.hpp](truncated_normal.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [truncated\_normal\_prb.cpp](truncated_normal_prb.cpp), the calling
    program;
-   [truncated\_normal\_prb\_output.txt](truncated_normal_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **NORMAL\_01\_CDF** evaluates the Normal 01 CDF.
-   **NORMAL\_01\_CDF\_INV** inverts the standard normal CDF.
-   **NORMAL\_01\_MEAN** returns the mean of the Normal 01 PDF.
-   **NORMAL\_01\_MOMENT** evaluates moments of the Normal 01 PDF.
-   **NORMAL\_01\_PDF** evaluates the Normal 01 PDF.
-   **NORMAL\_01\_SAMPLE** samples the standard normal probability
    distribution.
-   **NORMAL\_01\_VARIANCE** returns the variance of the Normal 01 PDF.
-   **NORMAL\_CDF** evaluates the Normal CDF.
-   **NORMAL\_CDF\_INV** inverts the Normal CDF.
-   **NORMAL\_MEAN** returns the mean of the Normal PDF.
-   **NORMAL\_MOMENT** evaluates moments of the Normal PDF.
-   **NORMAL\_MOMENT\_CENTRAL** evaluates central moments of the Normal
    PDF.
-   **NORMAL\_MOMENT\_CENTRAL\_VALUES:** moments 0 through 10 of the
    Normal PDF.
-   **NORMAL\_MOMENT\_VALUES** evaluates moments 0 through 8 of the
    Normal PDF.
-   **NORMAL\_PDF** evaluates the Normal PDF.
-   **NORMAL\_SAMPLE** samples the Normal PDF.
-   **NORMAL\_VARIANCE** returns the variance of the Normal PDF.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_LOG\_2** returns the logarithm base 2 of the absolute value of
    an R8.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8POLY\_VALUE** evaluates a double precision polynomial.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRUNCATED\_NORMAL\_AB\_CDF** evaluates the truncated Normal CDF.
-   **TRUNCATED\_NORMAL\_AB\_CDF\_VALUES:** values of the Truncated
    Normal CDF.
-   **TRUNCATED\_NORMAL\_AB\_CDF\_INV** inverts the truncated Normal
    CDF.
-   **TRUNCATED\_NORMAL\_AB\_MEAN** returns the mean of the truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_AB\_MOMENT:** moments of the truncated Normal
    PDF.
-   **TRUNCATED\_NORMAL\_AB\_PDF** evaluates the truncated Normal PDF.
-   **TRUNCATED\_NORMAL\_AB\_PDF\_VALUES:** values of the Truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_AB\_SAMPLE** samples the truncated Normal PDF.
-   **TRUNCATED\_NORMAL\_AB\_VARIANCE** returns the variance of the
    truncated Normal PDF.
-   **TRUNCATED\_NORMAL\_A\_CDF** evaluates the lower truncated Normal
    CDF.
-   **TRUNCATED\_NORMAL\_A\_CDF\_VALUES:** values of the Lower Truncated
    Normal CDF.
-   **TRUNCATED\_NORMAL\_A\_CDF\_INV** inverts the lower truncated
    Normal CDF.
-   **TRUNCATED\_NORMAL\_A\_MEAN** returns the mean of the lower
    truncated Normal PDF.
-   **TRUNCATED\_NORMAL\_A\_MOMENT:** moments of the lower truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_A\_PDF** evaluates the lower truncated Normal
    PDF.
-   **TRUNCATED\_NORMAL\_A\_PDF\_VALUES:** values of the Lower Truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_A\_SAMPLE** samples the lower truncated Normal
    PDF.
-   **TRUNCATED\_NORMAL\_A\_VARIANCE:** variance of the lower truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_B\_CDF** evaluates the upper truncated Normal
    CDF.
-   **TRUNCATED\_NORMAL\_B\_CDF\_VALUES:** values of the upper Truncated
    Normal CDF.
-   **TRUNCATED\_NORMAL\_B\_CDF\_INV** inverts the upper truncated
    Normal CDF.
-   **TRUNCATED\_NORMAL\_B\_MEAN** returns the mean of the upper
    truncated Normal PDF.
-   **TRUNCATED\_NORMAL\_B\_MOMENT:** moments of the upper truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_B\_PDF** evaluates the upper truncated Normal
    PDF.
-   **TRUNCATED\_NORMAL\_B\_PDF\_VALUES:** values of the Upper Truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_B\_SAMPLE** samples the upper truncated Normal
    PDF.
-   **TRUNCATED\_NORMAL\_B\_VARIANCE:** variance of the upper truncated
    Normal PDF.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 September 2013.*
