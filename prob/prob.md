PROB\
Probability Density Functions {#prob-probability-density-functions align="center"}
=============================

------------------------------------------------------------------------

**PROB** is a C++ library which handles various discrete and continuous
probability density functions (PDF's).

For a discrete variable X, PDF(X) is the probability that the value X
will occur; for a continuous variable, PDF(X) is the probability density
of X, that is, the probability of a value between X and X+dX is PDF(X)
\* dX.

The corresponding cumulative density functions or "CDF"'s are also
handled. For a discrete or continuous variable, CDF(X) is the
probability that the variable takes on a value less than or equal to X.

In some cases, the inverse of the CDF can easily be computed. If

            X = CDF_INV ( P )
          

then we are asserting that the value **X** has a cumulative probability
density function of **P**, in other words, the probability that the
variable is less than or equal to **X** is **P**. If the CDF cannot be
analytically inverted, there are simple ways to try to estimate the
inverse. Depending on the PDF, these methods may be rapid and accurate,
or not.

For most distributions, the *mean* or "average value" or "expected
value" is also available. For a discrete variable, MEAN is simply the
sum of the products X \* PDF(X); for a continuous variable, MEAN is the
integral of X \* PDF(X) over the range. For the distributions covered
here, the means are known beforehand, and no summation or integration is
required.

For most distributions, the variance is available. For a discrete
variable, the variance is the sum of the products ( X - MEAN )\^2 \*
PDF(X); for a continuous variable, the variance is the integral of ( X -
MEAN )\^2 \* PDF(X) over the range. The square root of the variance is
known as the *standard deviation*. For the distributions covered here,
the variances are often known beforehand, and no summation or
integration is required.

For many of the distributions, it is possible to repeatedly request
"samples", that is, a pseudorandom sequence of realizations of the PDF.
These samples are always associated with an integer seed, which controls
the calculation. Using the same seed as input will guarantee the same
sample value on output. Ultimately, a random number generator must be
invoked internally. In most cases, the current code will call a routine
called **R8\_RANDOM** or **I4\_RANDOM**, each of which in turn calls a
routine called **R8\_UNIFORM\_01**. You may prefer a different random
number generator for this purpose.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PROB** is available in [a C version](../../c_src/prob/prob.md) and
[a C++ version](../../master/prob/prob.md) and [a FORTRAN77
version](../../f77_src/prob/prob.md) and [a FORTRAN90
version](../../f_src/prob/prob.md) and [a MATLAB
version](../../m_src/prob/prob.md) and [a Python
version](../../py_src/prob/prob.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA152](../../master/asa152/asa152.md), a C++ library which
evaluates point and cumulative probabilities associated with the
hypergeometric distribution; this is Applied Statistics Algorithm 152;

[ASA226](../../master/asa226/asa226.md), a C++ library which
evaluates the CDF of the noncentral Beta distribution.

[ASA241](../../master/asa241/asa241.md), a C++ library which
evaluates the percentage points of the normal distribution.

[ASA243](../../master/asa243/asa243.md), a C++ library which
evaluates the CDF of the noncentral T distribution.

[ASA310](../../master/asa310/asa310.md), a C++ library which computes
the CDF of the noncentral Beta distribution.

[BETA\_NC](../../master/beta_nc/beta_nc.md), a C++ library which
evaluates the CDF of the noncentral Beta distribution.

[CDFLIB](../../master/cdflib/cdflib.md), a C++ library which
evaluates the cumulative density function (CDF), inverse CDF, and
certain other inverse functions, for distributions including beta,
binomial, chi-square, noncentral chi-square, F, noncentral F, gamma,
negative binomial, normal, Poisson, and students T, by Barry Brown,
James Lovato, Kathy Russell.

[DISCRETE\_PDF\_SAMPLE\_2D](../../master/discrete_pdf_sample_2d/discrete_pdf_sample_2d.md),
a C++ program which demonstrates how to construct a Probability Density
Function (PDF) from a table of sample data, and then to use that PDF to
create new samples.

[GSL](../../master/gsl/gsl.md), a C++ library which includes many
routines for evaluating probability distributions.

[LOG\_NORMAL](../../master/log_normal/log_normal.md), a C++ library
which returns quantities associated with the log normal Probability
Distribution Function (PDF).

[LOG\_NORMAL\_TRUNCATED\_AB](../../master/log_normal_truncated_ab/log_normal_truncated_ab.md),
a C++ library which returns quantities associated with the log normal
Probability Distribution Function (PDF) truncated to the interval
\[A,B\].

[NORMAL](../../master/normal/normal.md), a C++ library which samples
the normal distribution.

[RANDOM\_DATA](../../master/random_data/random_data.md), a C++
library which generates sample points for various probability
distributions, spatial dimensions, and geometries;

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which contains sample values for a number of distributions.

[TRUNCATED\_NORMAL](../../master/truncated_normal/truncated_normal.md),
a C++ library which works with the truncated normal distribution over
\[A,B\], or \[A,+oo) or (-oo,B\], returning the probability density
function (PDF), the cumulative density function (CDF), the inverse CDF,
the mean, the variance, and sample values.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
samples the uniform distribution.

[ZIGGURAT](../../master/ziggurat/ziggurat.md), a C++ program which
generates points from a uniform, normal or exponential distribution,
using the ziggurat method.

### Reference: {#reference align="center"}

1.  Roger Abernathy, Robert Smith,\
    Algorithm 724,\
    Program to Calculate F Percentiles,\
    ACM Transactions on Mathematical Software,\
    Volume 19, Number 4, December 1993, pages 481-483.
2.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
3.  AG Adams,\
    Algorithm 39: Areas Under the Normal Curve,\
    Computer Journal,\
    Volume 12, 1969, pages 197-198.
4.  Joachim Ahrens, Ulrich Dieter,\
    Generating Gamma Variates by a Modified Rejection Technique,\
    Communications of the ACM,\
    Volume 25, Number 1, January 1982, pages 47-54.
5.  Joachim Ahrens, Ulrich Dieter,\
    Computer Methods for Sampling from Gamma, Beta, Poisson and Binomial
    Distributions.\
    Computing,\
    Volume 12, 1974, pages 223-246.
6.  Joachim Ahrens, Klaus-Dieter Kohrt, Ulrich Dieter,\
    Algorithm 599: Sampling from Gamma and Poisson Distributions,\
    ACM Transactions on Mathematical Software,\
    Volume 9, Number 2, June 1983, pages 255-257.
7.  Jerry Banks, editor,\
    Handbook of Simulation,\
    Wiley, 1998,\
    ISBN: 0471134031,\
    LC: T57.62.H37.
8.  JD Beasley, SG Springer,\
    Algorithm AS 111: The Percentage Points of the Normal Distribution,\
    Applied Statistics,\
    Volume 26, 1977, pages 118-121.
9.  Frank Benford,\
    The Law of Anomalous Numbers,\
    Proceedings of the American Philosophical Society,\
    Volume 78, 1938, pages 551-572.
10. Jose Bernardo,\
    Algorithm AS 103: Psi ( Digamma ) Function,\
    Applied Statistics,\
    Volume 25, Number 3, 1976, pages 315-317.
11. Donald Best, Nicholas Fisher,\
    Efficient Simulation of the von Mises Distribution,\
    Applied Statistics,\
    Volume 28, Number 2, pages 152-157.
12. Donald Best, Roberts,\
    Algorithm AS 91: The Percentage Points of the Chi-Squared
    Distribution,\
    Applied Statistics,\
    Volume 24, Number 3, 1975, pages 385-390.
13. Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673.
14. William Cody,\
    An Overview of Software Development for Special Functions, in
    Numerical Analysis Dundee, 1975,\
    edited by GA Watson,\
    Lecture Notes in Mathematics, 506,\
    Springer, 1976.
15. William Cody,\
    Rational Chebyshev Approximations for the Error Function,\
    Mathematics of Computation,\
    Volume 23, Number 107, July 1969, pages 631-638.
16. William Cody, Kenneth Hillstrom,\
    Chebyshev Approximations for the Natural Logarithm of the Gamma
    Function, Mathematics of Computation,\
    Volume 21, Number 98, April 1967, pages 198-203.
17. BE Cooper,\
    Algorithm AS 5: The Integral of the Non-Central T-Distribution,\
    Applied Statistics,\
    Volume 17, 1968, page 193.
18. Luc Devroye,\
    Non-Uniform Random Variate Generation,\
    Springer, 1986,\
    ISBN: 0387963057,\
    LC: QA274.D48
19. Merran Evans, Nicholas Hastings, Brian Peacock,\
    Statistical Distributions,\
    Wiley, 2000,\
    ISBN: 0471371246,\
    LC: QA273.6E92.
20. Nicholas Fisher,\
    Statistical Analysis of Circular Data,\
    Cambridge, 1993,\
    ISBN: 0521568900,\
    LC: QA276.F488
21. Nicholas Fisher, Toby Lewis, Brian Embleton,\
    Statistical Analysis of Spherical Data,\
    Cambridge, 2003,\
    ISBN13: 978-0521456999,\
    LC: QA276.F489
22. Darren Glass, Philip Lowry,\
    Quasigeometric Distributions and Extra Inning Baseball Games,\
    Mathematics Magazine,\
    Volume 81, Number 2, April 2008, pages 127-137.
23. John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thatcher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
24. Geoffrey Hill,\
    Algorithm 518: Incomplete Bessel Function I0: The Von Mises
    Distribution,\
    ACM Transactions on Mathematical Software,\
    Volume 3, Number 3, September 1977, pages 279-284.
25. Ted Hill,\
    The First Digit Phenomenon,\
    American Scientist,\
    Volume 86, July/August 1998, pages 358-363.
26. Mark Johnson,\
    Multivariate Statistical Simulation: A Guid to Selecting and
    Generating Continuous Multivariate Distributions,\
    Wiley, 1987,\
    ISBN: 0471822906,\
    LC: QA278.J62
27. Norman Johnson, Samuel Kotz, Narayanaswamy Balakrishnan,\
    Continuous Univariate Distributions,\
    Second edition,\
    Wiley, 1994,\
    ISBN: 0471584940,\
    LC: QA273.6.J6
28. Norman Johnson, Samuel Kotz, Adrienne Kemp,\
    Univariate Discrete Distributions,\
    Third edition,\
    Wiley, 2005,\
    ISBN: 0471272469,\
    LC: QA273.6.J64
29. William Kennedy, James Gentle,\
    Statistical Computing,\
    Marcel Dekker, 1980,\
    ISBN: 0824768981,\
    LC: QA276.4 K46.
30. Robert Knop,\
    Algorithm 441: Random Deviates from the Dipole Distribution,\
    ACM Transactions on Mathematical Software,\
    Volume 16, Number 1, January 1973, page 51.
31. Kalimutha Krishnamoorthy,\
    Handbook of Statistical Distributions with Applications,\
    Chapman and Hall, 2006,\
    ISBN: 1-58488-635-8,\
    LC: QA273.6.K75.
32. Henry Kucera, Winthrop Francis,\
    Computational Analysis of Present-Day American English,\
    Brown University Press, 1967,\
    LC: PE2839.K8.
33. Kenneth Lange,\
    Mathematical and Statistical Methods for Genetic Analysis,\
    Springer, 1997,\
    ISBN: 0387953892,\
    LC: QH438.4.M33.L36.
34. Alfred Lotka,\
    The frequency distribution of scientific productivity,\
    Journal of the Washington Academy of Sciences,\
    Volume 16, Number 12, 1926, pages 317-324.
35. KL Majumder, GP Bhattacharjee,\
    Algorithm AS63: The incomplete Beta Integral,\
    Applied Statistics,\
    Volume 22, number 3, 1973, pages 409-411.
36. Kanti Mardia, Peter Jupp,\
    Directional Statistics,\
    Wiley, 2000,\
    ISBN: 0471953334,\
    LC: QA276.M335
37. [Michael
    McLaughlin](http://www.geocities.com/~mikemclaughlin/math_stat/Dists/Compendium.md)\
    A Compendium of Common Probability Distributions
38. Paul Nahin,\
    Digital Dice: Computational Solutions to Practical Probability
    Problems,\
    Princeton University Press, 2008,\
    ISBN13: 978-0-691-12698-2,\
    LC: QA273.25.N34.
39. Keith Ord,\
    Families of Frequency Distributions,\
    Lubrecht & Cramer, 1972,\
    ISBN: 0852641370.
40. Donald Owen,\
    Tables for Computing Bivariate Normal Probabilities,\
    The Annals of Mathematical Statistics,\
    Volume 27, Number 4, December 1956, pages 1075-1090.
41. Frank Powell,\
    Statistical Tables for Sociology, Biology and Physical Sciences,\
    Cambridge University Press, 1982,\
    ISBN: 0521284732,\
    LC: QA276.25.S73.
42. Sudarshan Raghunathan,\
    Making a Supercomputer Do What You Want: High Level Tools for
    Parallel Programming,\
    Computing in Science and Engineering,\
    Volume 8, Number 5, September/October 2006, pages 70-80.
43. Ralph Raimi,\
    The Peculiar Distribution of First Digits,\
    Scientific American,\
    December 1969, pages 109-119.
44. Reuven Rubinstein,\
    Monte Carlo Optimization, Simulation and Sensitivity of Queueing
    Networks,\
    Krieger, August 1992,\
    ISBN: 0894647644,\
    LC: QA298.R79
45. BE Schneider,\
    Algorithm AS 121: Trigamma Function,\
    Applied Statistics,\
    Volume 27, Number 1, 1978, page 97-99.
46. BL Shea,\
    Algorithm AS 239: Chi-squared and Incomplete Gamma Integral,\
    Applied Statistics,\
    Volume 37, Number 3, 1988, pages 466-473.
47. Eric Weisstein,\
    CRC Concise Encyclopedia of Mathematics,\
    CRC Press, 2002,\
    Second edition,\
    ISBN: 1584883472,\
    LC: QA5.W45
48. Michael Wichura,\
    Algorithm AS 241: The Percentage Points of the Normal Distribution,\
    Applied Statistics,\
    Volume 37, Number 3, 1988, pages 477-484.
49. Herbert Wilf,\
    Some New Aspects of the Coupon Collector's Problem,\
    SIAM Review,\
    Volume 48, Number 3, September 2006, pages 549-565.
50. ML Wolfson, HV Wright,\
    Algorithm 160: Combinatorial of M Things Taken N at a Time,\
    Communications of the ACM,\
    Volume 6, Number 4, April 1963, page 161.
51. JC Young, CE Minder,\
    Algorithm AS 76: An Algorithm Useful in Calculating Non-Central T
    and Bivariate Normal Distributions,\
    Applied Statistics,\
    Volume 23, Number 3, 1974, pages 455-457.
52. Daniel Zwillinger, Steven Kokoska,\
    Standard Probability and Statistical Tables,\
    CRC Press, 2000,\
    ISBN: 1-58488-059-7,\
    LC: QA273.3.Z95.

### Source Code: {#source-code align="center"}

-   [prob.cpp](prob.cpp), the source code;
-   [prob.hpp](prob.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [prob\_prb.cpp](prob_prb.cpp), the calling program;
-   [prob\_prb\_output.txt](prob_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ANGLE\_CDF** evaluates the Angle CDF.
-   **ANGLE\_MEAN** returns the mean of the Angle PDF.
-   **ANGLE\_PDF** evaluates the Angle PDF.
-   **ANGLIT\_CDF** evaluates the Anglit CDF.
-   **ANGLIT\_CDF\_INV** inverts the Anglit CDF.
-   **ANGLIT\_MEAN** returns the mean of the Anglit PDF.
-   **ANGLIT\_PDF** evaluates the Anglit PDF.
-   **ANGLIT\_SAMPLE** samples the Anglit PDF.
-   **ANGLIT\_VARIANCE** returns the variance of the Anglit PDF.
-   **ARCSIN\_CDF** evaluates the Arcsin CDF.
-   **ARCSIN\_CDF\_INV** inverts the Arcsin CDF.
-   **ARCSIN\_CHECK** checks the parameter of the Arcsin CDF.
-   **ARCSIN\_MEAN** returns the mean of the Arcsin PDF.
-   **ARCSIN\_PDF** evaluates the Arcsin PDF.
-   **ARCSIN\_SAMPLE** samples the Arcsin PDF.
-   **ARCSIN\_VARIANCE** returns the variance of the Arcsin PDF.
-   **BENFORD\_CDF** returns the Benford CDF.
-   **BENFORD\_PDF** returns the Benford probability of one or more
    significant digits.
-   **BERNOULLI\_CDF** evaluates the Bernoulli CDF.
-   **BERNOULLI\_CDF\_INV** inverts the Bernoulli CDF.
-   **BERNOULLI\_CHECK** checks the parameter of the Bernoulli CDF.
-   **BERNOULLI\_MEAN** returns the mean of the Bernoulli PDF.
-   **BERNOULLI\_PDF** evaluates the Bernoulli PDF.
-   **BERNOULLI\_SAMPLE** samples the Bernoulli PDF.
-   **BERNOULLI\_VARIANCE** returns the variance of the Bernoulli PDF.
-   **BESSEL\_I0** evaluates the modified Bessel function I0.
-   **BESSEL\_I0\_VALUES** returns some values of the I0 Bessel
    function.
-   **BESSEL\_I1** evaluates the Bessel I function of order I.
-   **BESSEL\_I1\_VALUES** returns some values of the I1 Bessel
    function.
-   **BESSEL\_IX\_VALUES** returns some values of the Ix Bessel
    function.
-   **BETA\_BINOMIAL\_CDF** evaluates the Beta Binomial CDF.
-   **BETA\_BINOMIAL\_CDF\_INV** inverts the Beta Binomial CDF.
-   **BETA\_BINOMIAL\_CHECK** checks the parameters of the Beta Binomial
    PDF.
-   **BETA\_BINOMIAL\_MEAN** returns the mean of the Beta Binomial PDF.
-   **BETA\_BINOMIAL\_PDF** evaluates the Beta Binomial PDF.
-   **BETA\_BINOMIAL\_SAMPLE** samples the Beta Binomial CDF.
-   **BETA\_BINOMIAL\_VARIANCE** returns the variance of the Beta
    Binomial PDF.
-   **BETA\_CDF** evaluates the Beta CDF.
-   **BETA\_CDF\_INV** inverts the Beta CDF.
-   **BETA\_CDF\_INV\_OLD** inverts the Beta CDF.
-   **BETA\_CHECK** checks the parameters of the Beta PDF.
-   **BETA\_CDF\_VALUES** returns some values of the Beta CDF.
-   **BETA\_INC** returns the value of the incomplete Beta function.
-   **BETA\_INC\_VALUES** returns some values of the incomplete Beta
    function.
-   **BETA\_MEAN** returns the mean of the Beta PDF.
-   **BETA\_PDF** evaluates the Beta PDF.
-   **BETA\_SAMPLE** samples the Beta PDF.
-   **BETA\_VALUES** returns some values of the Beta function.
-   **BETA\_VARIANCE** returns the variance of the Beta PDF.
-   **BINOMIAL\_CDF** evaluates the Binomial CDF.
-   **BINOMIAL\_CDF\_INV** inverts the Binomial CDF.
-   **BINOMIAL\_CHECK** checks the parameter of the Binomial PDF.
-   **BINOMIAL\_MEAN** returns the mean of the Binomial PDF.
-   **BINOMIAL\_PDF** evaluates the Binomial PDF.
-   **BINOMIAL\_SAMPLE** samples the Binomial PDF.
-   **BINOMIAL\_VARIANCE** returns the variance of the Binomial PDF.
-   **BIRTHDAY\_CDF** returns the Birthday Concurrence CDF.
-   **BIRTHDAY\_CDF\_INV** inverts the Birthday Concurrence CDF.
-   **BIRTHDAY\_PDF** returns the Birthday Concurrence PDF.
-   **BIRTHDAY\_SAMPLE** samples the Birthday Concurrence PDF.
-   **BRADFORD\_CDF** evaluates the Bradford CDF.
-   **BRADFORD\_CDF\_INV** inverts the Bradford CDF.
-   **BRADFORD\_CHECK** checks the parameters of the Bradford PDF.
-   **BRADFORD\_MEAN** returns the mean of the Bradford PDF.
-   **BRADFORD\_PDF** evaluates the Bradford PDF.
-   **BRADFORD\_SAMPLE** samples the Bradford PDF.
-   **BRADFORD\_VARIANCE** returns the variance of the Bradford PDF.
-   **BUFFON\_BOX\_PDF** evaluates the Buffon Box PDF.
-   **BUFFON\_BOX\_SAMPLE** samples the Buffon Box distribution.
-   **BUFFON\_PDF** evaluates the Buffon PDF.
-   **BUFFON\_SAMPLE** samples the Buffon PDF.
-   **BURR\_CDF** evaluates the Burr CDF.
-   **BURR\_CDF\_INV** inverts the Burr CDF.
-   **BURR\_CHECK** checks the parameters of the Burr CDF.
-   **BURR\_MEAN** returns the mean of the Burr PDF.
-   **BURR\_PDF** evaluates the Burr PDF.
-   **BURR\_SAMPLE** samples the Burr PDF.
-   **BURR\_VARIANCE** returns the variance of the Burr PDF.
-   **CARDIOID\_CDF** evaluates the Cardioid CDF.
-   **CARDIOID\_CDF\_INV** inverts the Cardioid CDF.
-   **CARDIOID\_CHECK** checks the parameters of the Cardioid CDF.
-   **CARDIOID\_MEAN** returns the mean of the Cardioid PDF.
-   **CARDIOID\_PDF** evaluates the Cardioid PDF.
-   **CARDIOID\_SAMPLE** samples the Cardioid PDF.
-   **CARDIOID\_VARIANCE** returns the variance of the Cardioid PDF.
-   **CAUCHY\_CDF** evaluates the Cauchy CDF.
-   **CAUCHY\_CDF\_INV** inverts the Cauchy CDF.
-   **CAUCHY\_CDF\_VALUES** returns some values of the Cauchy CDF.
-   **CAUCHY\_CHECK** checks the parameters of the Cauchy CDF.
-   **CAUCHY\_MEAN** returns the mean of the Cauchy PDF.
-   **CAUCHY\_PDF** evaluates the Cauchy PDF.
-   **CAUCHY\_SAMPLE** samples the Cauchy PDF.
-   **CAUCHY\_VARIANCE** returns the variance of the Cauchy PDF.
-   **CHEBYSHEV1\_CDF** evaluates the Chebyshev1 CDF.
-   **CHEBYSHEV1\_CDF\_INV** inverts the Chebyshev1 CDF.
-   **CHEBYSHEV1\_MEAN** returns the mean of the Chebyshev1 PDF.
-   **CHEBYSHEV1\_PDF** evaluates the Chebyshev1 PDF.
-   **CHEBYSHEV1\_SAMPLE** samples the Chebyshev1 PDF.
-   **CHEBYSHEV1\_VARIANCE** returns the variance of the Chebyshev1 PDF.
-   **CHI\_CDF** evaluates the Chi CDF.
-   **CHI\_CDF\_INV** inverts the Chi CDF.
-   **CHI\_CHECK** checks the parameters of the Chi CDF.
-   **CHI\_MEAN** returns the mean of the Chi PDF.
-   **CHI\_PDF** evaluates the Chi PDF.
-   **CHI\_SAMPLE** samples the Chi PDF.
-   **CHI\_VARIANCE** returns the variance of the Chi PDF.
-   **CHI\_SQUARE\_CDF** evaluates the Chi squared CDF.
-   **CHI\_SQUARE\_CDF\_INV** inverts the Chi squared PDF.
-   **CHI\_SQUARE\_CDF\_VALUES** returns some values of the Chi-Square
    CDF.
-   **CHI\_SQUARE\_CHECK** checks the parameter of the central Chi
    squared PDF.
-   **CHI\_SQUARE\_MEAN** returns the mean of the central Chi squared
    PDF.
-   **CHI\_SQUARE\_PDF** evaluates the central Chi squared PDF.
-   **CHI\_SQUARE\_SAMPLE** samples the central Chi squared PDF.
-   **CHI\_SQUARE\_VARIANCE** returns the variance of the central Chi
    squared PDF.
-   **CHI\_SQUARE\_NONCENTRAL\_CDF\_VALUES** returns values of the
    noncentral chi CDF.
-   **CHI\_SQUARE\_NONCENTRAL\_CHECK** checks the parameters of the
    noncentral Chi Squared PDF.
-   **CHI\_SQUARE\_NONCENTRAL\_MEAN** returns the mean of the noncentral
    Chi squared PDF.
-   **CHI\_SQUARE\_NONCENTRAL\_SAMPLE** samples the noncentral Chi
    squared PDF.
-   **CHI\_SQUARE\_NONCENTRAL\_VARIANCE:** variance of the noncentral
    Chi squared PDF.
-   **CIRCULAR\_NORMAL\_01\_MEAN** returns the mean of the Circular
    Normal 01 PDF.
-   **CIRCULAR\_NORMAL\_01\_PDF** evaluates the Circular Normal 01 PDF.
-   **CIRCULAR\_NORMAL\_01\_SAMPLE** samples the Circular Normal 01 PDF.
-   **CIRCULAR\_NORMAL\_01\_VARIANCE** returns the variance of the
    Circular Normal 01 PDF.
-   **CIRCULAR\_NORMAL\_MEAN** returns the mean of the Circular Normal
    PDF.
-   **CIRCULAR\_NORMAL\_PDF** evaluates the Circular Normal PDF.
-   **CIRCULAR\_NORMAL\_SAMPLE** samples the Circular Normal PDF.
-   **CIRCULAR\_NORMAL\_VARIANCE** returns the variance of the Circular
    Normal PDF.
-   **COSINE\_CDF** evaluates the Cosine CDF.
-   **COSINE\_CDF\_INV** inverts the Cosine CDF.
-   **COSINE\_CHECK** checks the parameters of the Cosine CDF.
-   **COSINE\_MEAN** returns the mean of the Cosine PDF.
-   **COSINE\_PDF** evaluates the Cosine PDF.
-   **COSINE\_SAMPLE** samples the Cosine PDF.
-   **COSINE\_VARIANCE** returns the variance of the Cosine PDF.
-   **COUPON\_COMPLETE\_PDF** evaluates the Complete Coupon Collection
    PDF.
-   **COUPON\_MEAN** returns the mean of the Coupon PDF.
-   **COUPON\_SAMPLE** simulates the coupon collector's problem.
-   **COUPON\_VARIANCE** returns the variance of the Coupon PDF.
-   **DERANGED\_CDF** evaluates the Deranged CDF.
-   **DERANGED\_CDF\_INV** inverts the Deranged CDF.
-   **DERANGED\_CHECK** checks the parameter of the Deranged PDF.
-   **DERANGED\_ENUM** returns the number of derangements of N objects.
-   **DERANGED\_MEAN** returns the mean of the Deranged CDF.
-   **DERANGED\_PDF** evaluates the Deranged PDF.
-   **DERANGED\_SAMPLE** samples the Deranged PDF.
-   **DERANGED\_VARIANCE** returns the variance of the Deranged CDF.
-   **DIGAMMA** calculates the digamma or Psi function.
-   **DIPOLE\_CDF** evaluates the Dipole CDF.
-   **DIPOLE\_CDF\_INV** inverts the Dipole CDF.
-   **DIPOLE\_CHECK** checks the parameters of the Dipole CDF.
-   **DIPOLE\_PDF** evaluates the Dipole PDF.
-   **DIPOLE\_SAMPLE** samples the Dipole PDF.
-   **DIRICHLET\_CHECK** checks the parameters of the Dirichlet PDF.
-   **DIRICHLET\_MEAN** returns the means of the Dirichlet PDF.
-   **DIRICHLET\_MOMENT2** returns the second moments of the Dirichlet
    PDF.
-   **DIRICHLET\_PDF** evaluates the Dirichlet PDF.
-   **DIRICHLET\_SAMPLE** samples the Dirichlet PDF.
-   **DIRICHLET\_VARIANCE** returns the variances of the Dirichlet PDF.
-   **DIRICHLET\_MIX\_CHECK** checks the parameters of a Dirichlet
    mixture PDF.
-   **DIRICHLET\_MIX\_MEAN** returns the means of a Dirichlet mixture
    PDF.
-   **DIRICHLET\_MIX\_PDF** evaluates a Dirichlet mixture PDF.
-   **DIRICHLET\_MIX\_SAMPLE** samples a Dirichlet mixture PDF.
-   **DIRICHLET\_MULTINOMIAL\_PDF** evaluates a Dirichlet Multinomial
    PDF.
-   **DISCRETE\_CDF** evaluates the Discrete CDF.
-   **DISCRETE\_CDF\_INV** inverts the Discrete CDF.
-   **DISCRETE\_CHECK** checks the parameters of the Discrete CDF.
-   **DISCRETE\_MEAN** evaluates the mean of the Discrete PDF.
-   **DISCRETE\_PDF** evaluates the Discrete PDF.
-   **DISCRETE\_SAMPLE** samples the Discrete PDF.
-   **DISCRETE\_VARIANCE** evaluates the variance of the Discrete PDF.
-   **DISK\_MEAN** returns the mean of disk points.
-   **DISK\_SAMPLE** samples points in a disk.
-   **DISK\_VARIANCE** returns the variance of points in a disk.
-   **E\_CONSTANT** returns the value of E.
-   **EMPIRICAL\_DISCRETE\_CDF** evaluates the Empirical Discrete CDF.
-   **EMPIRICAL\_DISCRETE\_CDF\_INV** inverts the Empirical Discrete
    CDF.
-   **EMPIRICAL\_DISCRETE\_CHECK** checks the parameters of the
    Empirical Discrete CDF.
-   **EMPIRICAL\_DISCRETE\_MEAN** returns the mean of the Empirical
    Discrete PDF.
-   **EMPIRICAL\_DISCRETE\_PDF** evaluates the Empirical Discrete PDF.
-   **EMPIRICAL\_DISCRETE\_SAMPLE** samples the Empirical Discrete PDF.
-   **EMPIRICAL\_DISCRETE\_VARIANCE** returns the variance of the
    Empirical Discrete PDF.
-   **ENGLISH\_LETTER\_CDF** evaluates the English Letter CDF.
-   **ENGLISH\_LETTER\_CDF\_INV** inverts the English Letter CDF.
-   **ENGLISH\_LETTER\_PDF** evaluates the English Letter PDF.
-   **ENGLISH\_LETTER\_SAMPLE** samples the English Letter PDF.
-   **ENGLISH\_SENTENCE\_LENGTH\_CDF** evaluates the English Sentence
    Length CDF.
-   **ENGLISH\_SENTENCE\_LENGTH\_CDF\_INV** inverts the English Sentence
    Length CDF.
-   **ENGLISH\_SENTENCE\_LENGTH\_MEAN** evaluates the mean of the
    English Sentence Length PDF.
-   **ENGLISH\_SENTENCE\_LENGTH\_PDF** evaluates the English Sentence
    Length PDF.
-   **ENGLISH\_SENTENCE\_LENGTH\_SAMPLE** samples the English Sentence
    Length PDF.
-   **ENGLISH\_SENTENCE\_LENGTH\_VARIANCE:** variance of the English
    Sentence Length PDF.
-   **ENGLISH\_WORD\_LENGTH\_CDF** evaluates the English Word Length
    CDF.
-   **ENGLISH\_WORD\_LENGTH\_CDF\_INV** inverts the English Word Length
    CDF.
-   **ENGLISH\_WORD\_LENGTH\_MEAN** evaluates the mean of the English
    Word Length PDF.
-   **ENGLISH\_WORD\_LENGTH\_PDF** evaluates the English Word Length
    PDF.
-   **ENGLISH\_WORD\_LENGTH\_SAMPLE** samples the English Word Length
    PDF.
-   **ENGLISH\_WORD\_LENGTH\_VARIANCE:** variance of the English Word
    Length PDF.
-   **ERLANG\_CDF** evaluates the Erlang CDF.
-   **ERLANG\_CDF\_INV** inverts the Erlang CDF.
-   **ERLANG\_CHECK** checks the parameters of the Erlang PDF.
-   **ERLANG\_MEAN** returns the mean of the Erlang PDF.
-   **ERLANG\_PDF** evaluates the Erlang PDF.
-   **ERLANG\_SAMPLE** samples the Erlang PDF.
-   **ERLANG\_VARIANCE** returns the variance of the Erlang PDF.
-   **EULER\_CONSTANT** returns the value of the Euler-Mascheroni
    constant.
-   **EXPONENTIAL\_01\_CDF** evaluates the Exponential 01 CDF.
-   **EXPONENTIAL\_01\_CDF\_INV** inverts the Exponential 01 CDF.
-   **EXPONENTIAL\_01\_MEAN** returns the mean of the Exponential 01
    PDF.
-   **EXPONENTIAL\_01\_PDF** evaluates the Exponential 01 PDF.
-   **EXPONENTIAL\_01\_SAMPLE** samples the Exponential PDF with
    parameter 1.
-   **EXPONENTIAL\_01\_VARIANCE** returns the variance of the
    Exponential 01 PDF.
-   **EXPONENTIAL\_CDF** evaluates the Exponential CDF.
-   **EXPONENTIAL\_CDF\_INV** inverts the Exponential CDF.
-   **EXPONENTIAL\_CDF\_VALUES** returns some values of the Exponential
    CDF.
-   **EXPONENTIAL\_CHECK** checks the parameters of the Exponential CDF.
-   **EXPONENTIAL\_MEAN** returns the mean of the Exponential PDF.
-   **EXPONENTIAL\_PDF** evaluates the Exponential PDF.
-   **EXPONENTIAL\_SAMPLE** samples the Exponential PDF.
-   **EXPONENTIAL\_VARIANCE** returns the variance of the Exponential
    PDF.
-   **EXTREME\_VALUES\_CDF** evaluates the Extreme Values CDF.
-   **EXTREME\_VALUES\_CDF\_INV** inverts the Extreme Values CDF.
-   **EXTREME\_VALUES\_CDF\_VALUES** returns some values of the Extreme
    Values CDF.
-   **EXTREME\_VALUES\_CHECK** checks the parameters of the Extreme
    Values CDF.
-   **EXTREME\_VALUES\_MEAN** returns the mean of the Extreme Values
    PDF.
-   **EXTREME\_VALUES\_PDF** evaluates the Extreme Values PDF.
-   **EXTREME\_VALUES\_SAMPLE** samples the Extreme Values PDF.
-   **EXTREME\_VALUES\_VARIANCE** returns the variance of the Extreme
    Values PDF.
-   **F\_CDF** evaluates the F central CDF.
-   **F\_CDF\_VALUES** returns some values of the F CDF test function.
-   **F\_CHECK** checks the parameters of the F PDF.
-   **F\_MEAN** returns the mean of the F central PDF.
-   **F\_PDF** evaluates the F central PDF.
-   **F\_SAMPLE** samples the F central PDF.
-   **F\_VARIANCE** returns the variance of the F central PDF.
-   **F\_NONCENTRAL\_CDF\_VALUES** returns some values of the F CDF test
    function.
-   **F\_NONCENTRAL\_CHECK** checks the parameters of the F noncentral
    PDF.
-   **F\_NONCENTRAL\_MEAN** returns the mean of the F noncentral PDF.
-   **F\_NONCENTRAL\_VARIANCE** returns the variance of the F noncentral
    PDF.
-   **FERMI\_DIRAC\_SAMPLE** samples a (continuous) Fermi-Dirac
    distribution.
-   **FISHER\_PDF** evaluates the Fisher PDF.
-   **FISHER\_SAMPLE** samples the Fisher distribution.
-   **FISK\_CDF** evaluates the Fisk CDF.
-   **FISK\_CDF\_INV** inverts the Fisk CDF.
-   **FISK\_CHECK** checks the parameters of the Fisk PDF.
-   **FISK\_MEAN** returns the mean of the Fisk PDF.
-   **FISK\_PDF** evaluates the Fisk PDF.
-   **FISK\_SAMPLE** samples the Fisk PDF.
-   **FISK\_VARIANCE** returns the variance of the Fisk PDF.
-   **FOLDED\_NORMAL\_CDF** evaluates the Folded Normal CDF.
-   **FOLDED\_NORMAL\_CDF\_INV** inverts the Folded Normal CDF.
-   **FOLDED\_NORMAL\_CHECK** checks the parameters of the Folded Normal
    CDF.
-   **FOLDED\_NORMAL\_MEAN** returns the mean of the Folded Normal PDF.
-   **FOLDED\_NORMAL\_PDF** evaluates the Folded Normal PDF.
-   **FOLDED\_NORMAL\_SAMPLE** samples the Folded Normal PDF.
-   **FOLDED\_NORMAL\_VARIANCE** returns the variance of the Folded
    Normal PDF.
-   **FRECHET\_CDF** evaluates the Frechet CDF.
-   **FRECHET\_CDF\_INV** inverts the Frechet CDF.
-   **FRECHET\_MEAN** returns the mean of the Frechet PDF.
-   **FRECHET\_PDF** evaluates the Frechet PDF.
-   **FRECHET\_SAMPLE** samples the Frechet PDF.
-   **FRECHET\_VARIANCE** returns the variance of the Frechet PDF.
-   **GAMMA\_CDF** evaluates the Gamma CDF.
-   **GAMMA\_CDF\_VALUES** returns some values of the Gamma CDF.
-   **GAMMA\_CHECK** checks the parameters of the Gamma PDF.
-   **GAMMA\_MEAN** returns the mean of the Gamma PDF.
-   **GAMMA\_PDF** evaluates the Gamma PDF.
-   **GAMMA\_SAMPLE** samples the Gamma PDF.
-   **GAMMA\_VARIANCE** returns the variance of the Gamma PDF.
-   **GAMMA\_INC\_VALUES** returns some values of the incomplete Gamma
    function.
-   **GENLOGISTIC\_CDF** evaluates the Generalized Logistic CDF.
-   **GENLOGISTIC\_CDF\_INV** inverts the Generalized Logistic CDF.
-   **GENLOGISTIC\_CHECK** checks the parameters of the Generalized
    Logistic CDF.
-   **GENLOGISTIC\_MEAN** returns the mean of the Generalized Logistic
    PDF.
-   **GENLOGISTIC\_PDF** evaluates the Generalized Logistic PDF.
-   **GENLOGISTIC\_SAMPLE** samples the Generalized Logistic PDF.
-   **GENLOGISTIC\_VARIANCE** returns the variance of the Generalized
    Logistic PDF.
-   **GEOMETRIC\_CDF** evaluates the Geometric CDF.
-   **GEOMETRIC\_CDF\_INV** inverts the Geometric CDF.
-   **GEOMETRIC\_CDF\_VALUES** returns values of the geometric CDF.
-   **GEOMETRIC\_CHECK** checks the parameter of the Geometric CDF.
-   **GEOMETRIC\_MEAN** returns the mean of the Geometric PDF.
-   **GEOMETRIC\_PDF** evaluates the Geometric PDF.
-   **GEOMETRIC\_SAMPLE** samples the Geometric PDF.
-   **GEOMETRIC\_VARIANCE** returns the variance of the Geometric PDF.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **GOMPERTZ\_CDF** evaluates the Gompertz CDF.
-   **GOMPERTZ\_CDF\_INV** inverts the Gompertz CDF.
-   **GOMPERTZ\_CHECK** checks the parameters of the Gompertz PDF.
-   **GOMPERTZ\_PDF** evaluates the Gompertz PDF.
-   **GOMPERTZ\_SAMPLE** samples the Gompertz PDF.
-   **GUMBEL\_CDF** evaluates the Gumbel CDF.
-   **GUMBEL\_CDF\_INV** inverts the Gumbel CDF.
-   **GUMBEL\_MEAN** returns the mean of the Gumbel PDF.
-   **GUMBEL\_PDF** evaluates the Gumbel PDF.
-   **GUMBEL\_SAMPLE** samples the Gumbel PDF.
-   **GUMBEL\_VARIANCE** returns the variance of the Gumbel PDF.
-   **HALF\_NORMAL\_CDF** evaluates the Half Normal CDF.
-   **HALF\_NORMAL\_CDF\_INV** inverts the Half Normal CDF.
-   **HALF\_NORMAL\_CHECK** checks the parameters of the Half Normal
    PDF.
-   **HALF\_NORMAL\_MEAN** returns the mean of the Half Normal PDF.
-   **HALF\_NORMAL\_PDF** evaluates the Half Normal PDF.
-   **HALF\_NORMAL\_SAMPLE** samples the Half Normal PDF.
-   **HALF\_NORMAL\_VARIANCE** returns the variance of the Half Normal
    PDF.
-   **HYPERGEOMETRIC\_CDF** evaluates the Hypergeometric CDF.
-   **HYPERGEOMETRIC\_CDF\_VALUES** returns some values of the
    hypergeometric CDF.
-   **HYPERGEOMETRIC\_CHECK** checks the parameters of the
    Hypergeometric CDF.
-   **HYPERGEOMETRIC\_MEAN** returns the mean of the Hypergeometric PDF.
-   **HYPERGEOMETRIC\_PDF** evaluates the Hypergeometric PDF.
-   **HYPERGEOMETRIC\_SAMPLE** samples the Hypergeometric PDF.
-   **HYPERGEOMETRIC\_VARIANCE** returns the variance of the
    Hypergeometric PDF.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_CHOOSE\_LOG** computes the logarithm of the Binomial
    coefficient.
-   **I4\_HUGE** returns a "huge" I4
-   **I4\_IS\_POWER\_OF\_10** reports whether an I4 is a power of 10.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4ROW\_MAX** returns the maximums of an I4ROW.
-   **I4ROW\_MEAN** returns the means of an I4ROW.
-   **I4ROW\_MIN** returns the minimums of an I4ROW.
-   **I4ROW\_VARIANCE** returns the variances of an I4ROW.
-   **I4VEC\_MAX** returns the maximum of an I4VEC
-   **I4VEC\_MEAN** returns the mean of an I4VEC.
-   **I4VEC\_MIN** returns the minimum of an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_RUN\_COUNT** counts runs of equal values in an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom I4VEC.
-   **I4VEC\_UNIQUE\_COUNT** counts the unique elements in an unsorted
    I4VEC.
-   **I4VEC\_VARIANCE** returns the variance of an I4VEC.
-   **INVERSE\_GAUSSIAN\_CDF** evaluates the Inverse Gaussian CDF.
-   **INVERSE\_GAUSSIAN\_CHECK** checks the parameters of the Inverse
    Gaussian CDF.
-   **INVERSE\_GAUSSIAN\_MEAN** returns the mean of the Inverse Gaussian
    PDF.
-   **INVERSE\_GAUSSIAN\_PDF** evaluates the Inverse Gaussian PDF.
-   **INVERSE\_GAUSSIAN\_SAMPLE** samples the Inverse Gaussian PDF.
-   **INVERSE\_GAUSSIAN\_VARIANCE** returns the variance of the Inverse
    Gaussian PDF.
-   **LAPLACE\_CDF\_VALUES** returns some values of the Laplace CDF.
-   **LAPLACE\_CDF** evaluates the Laplace CDF.
-   **LAPLACE\_CDF\_INV** inverts the Laplace CDF.
-   **LAPLACE\_CHECK** checks the parameters of the Laplace PDF.
-   **LAPLACE\_MEAN** returns the mean of the Laplace PDF.
-   **LAPLACE\_PDF** evaluates the Laplace PDF.
-   **LAPLACE\_SAMPLE** samples the Laplace PDF.
-   **LAPLACE\_VARIANCE** returns the variance of the Laplace PDF.
-   **LERCH** estimates the Lerch transcendent function.
-   **LEVY\_CDF** evaluates the Levy CDF.
-   **LEVY\_CDF\_INV** inverts the Levy CDF.
-   **LEVY\_PDF** evaluates the Levy PDF.
-   **LEVY\_SAMPLE** samples the Levy PDF.
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
-   **LOG\_SERIES\_CDF\_INV** inverts the Logarithmic Series CDF.
-   **LOG\_SERIES\_CDF\_VALUES** returns some values of the log series
    CDF.
-   **LOG\_SERIES\_CHECK** checks the parameter of the Logarithmic
    Series PDF.
-   **LOG\_SERIES\_MEAN** returns the mean of the Logarithmic Series
    PDF.
-   **LOG\_SERIES\_PDF** evaluates the Logarithmic Series PDF.
-   **LOG\_SERIES\_SAMPLE** samples the Logarithmic Series PDF.
-   **LOG\_SERIES\_VARIANCE** returns the variance of the Logarithmic
    Series PDF.
-   **LOG\_UNIFORM\_CDF** evaluates the Log Uniform CDF.
-   **LOG\_UNIFORM\_CDF\_INV** inverts the Log Uniform CDF.
-   **LOG\_UNIFORM\_CHECK** checks the parameters of the Log Uniform
    CDF.
-   **LOG\_UNIFORM\_MEAN** returns the mean of the Log Uniform PDF.
-   **LOG\_UNIFORM\_PDF** evaluates the Log Uniform PDF.
-   **LOG\_UNIFORM\_SAMPLE** samples the Log Uniform PDF.
-   **LOG\_UNIFORM\_VARIANCE** returns the variance of the Log Uniform
    PDF.
-   **LOGISTIC\_CDF** evaluates the Logistic CDF.
-   **LOGISTIC\_CDF\_INV** inverts the Logistic CDF.
-   **LOGISTIC\_CDF\_VALUES** returns some values of the Logistic CDF.
-   **LOGISTIC\_CHECK** checks the parameters of the Logistic CDF.
-   **LOGISTIC\_MEAN** returns the mean of the Logistic PDF.
-   **LOGISTIC\_PDF** evaluates the Logistic PDF.
-   **LOGISTIC\_SAMPLE** samples the Logistic PDF.
-   **LOGISTIC\_VARIANCE** returns the variance of the Logistic PDF.
-   **LORENTZ\_CDF** evaluates the Lorentz CDF.
-   **LORENTZ\_CDF\_INV** inverts the Lorentz CDF.
-   **LORENTZ\_MEAN** returns the mean of the Lorentz PDF.
-   **LORENTZ\_PDF** evaluates the Lorentz PDF.
-   **LORENTZ\_SAMPLE** samples the Lorentz PDF.
-   **LORENTZ\_VARIANCE** returns the variance of the Lorentz PDF.
-   **MAXWELL\_CDF** evaluates the Maxwell CDF.
-   **MAXWELL\_CDF\_INV** inverts the Maxwell CDF.
-   **MAXWELL\_CHECK** checks the parameters of the Maxwell CDF.
-   **MAXWELL\_MEAN** returns the mean of the Maxwell PDF.
-   **MAXWELL\_PDF** evaluates the Maxwell PDF.
-   **MAXWELL\_SAMPLE** samples the Maxwell PDF.
-   **MAXWELL\_VARIANCE** returns the variance of the Maxwell PDF.
-   **MULTICOEF\_CHECK** checks the parameters of the multinomial
    coefficient.
-   **MULTINOMIAL\_COEF1** computes a Multinomial coefficient.
-   **MULTINOMIAL\_COEF2** computes a Multinomial coefficient.
-   **MULTINOMIAL\_CHECK** checks the parameters of the Multinomial PDF.
-   **MULTINOMIAL\_COVARIANCE** returns the covariances of the
    Multinomial PDF.
-   **MULTINOMIAL\_MEAN** returns the means of the Multinomial PDF.
-   **MULTINOMIAL\_PDF** computes a Multinomial PDF.
-   **MULTINOMIAL\_SAMPLE** samples the Multinomial PDF.
-   **MULTINOMIAL\_VARIANCE** returns the variances of the Multinomial
    PDF.
-   **MULTIVARIATE\_NORMAL\_SAMPLE** samples the Multivariate Normal
    PDF.
-   **NAKAGAMI\_CDF** evaluates the Nakagami CDF.
-   **NAKAGAMI\_CHECK** checks the parameters of the Nakagami PDF.
-   **NAKAGAMI\_MEAN** returns the mean of the Nakagami PDF.
-   **NAKAGAMI\_PDF** evaluates the Nakagami PDF.
-   **NAKAGAMI\_VARIANCE** returns the variance of the Nakagami PDF.
-   **NEGATIVE\_BINOMIAL\_CDF** evaluates the Negative Binomial CDF.
-   **NEGATIVE\_BINOMIAL\_CDF\_INV** inverts the Negative Binomial CDF.
-   **NEGATIVE\_BINOMIAL\_CDF\_VALUES** returns values of the negative
    binomial CDF.
-   **NEGATIVE\_BINOMIAL\_CHECK** checks parameters of the Negative
    Binomial PDF.
-   **NEGATIVE\_BINOMIAL\_MEAN** returns the mean of the Negative
    Binomial PDF.
-   **NEGATIVE\_BINOMIAL\_PDF** evaluates the Negative Binomial PDF.
-   **NEGATIVE\_BINOMIAL\_SAMPLE** samples the Negative Binomial PDF.
-   **NEGATIVE\_BINOMIAL\_VARIANCE** returns the variance of the
    Negative Binomial PDF.
-   **NORMAL\_01\_CDF** evaluates the Normal 01 CDF.
-   **NORMAL\_01\_CDF\_INV** inverts the standard normal CDF.
-   **NORMAL\_01\_CDF\_VALUES** returns some values of the Normal 01
    CDF.
-   **NORMAL\_01\_MEAN** returns the mean of the Normal 01 PDF.
-   **NORMAL\_01\_PDF** evaluates the Normal 01 PDF.
-   **NORMAL\_01\_SAMPLE** samples the standard normal probability
    distribution.
-   **NORMAL\_01\_VARIANCE** returns the variance of the Normal 01 PDF.
-   **NORMAL\_01\_VECTOR** samples the standard normal probability
    distribution.
-   **NORMAL\_CDF** evaluates the Normal CDF.
-   **NORMAL\_CDF\_INV** inverts the Normal CDF.
-   **NORMAL\_CDF\_VALUES** returns some values of the Normal CDF.
-   **NORMAL\_CHECK** checks the parameters of the Normal PDF.
-   **NORMAL\_MEAN** returns the mean of the Normal PDF.
-   **NORMAL\_PDF** evaluates the Normal PDF.
-   **NORMAL\_SAMPLE** samples the Normal PDF.
-   **NORMAL\_VARIANCE** returns the variance of the Normal PDF.
-   **NORMAL\_VECTOR** samples the normal probability distribution.
-   **NORMAL\_TRUNCATED\_AB\_CDF** evaluates the truncated Normal CDF.
-   **NORMAL\_TRUNCATED\_AB\_CDF\_INV** inverts the truncated Normal
    CDF.
-   **NORMAL\_TRUNCATED\_AB\_MEAN** returns the mean of the truncated
    Normal PDF.
-   **NORMAL\_TRUNCATED\_AB\_PDF** evaluates the truncated Normal PDF.
-   **NORMAL\_TRUNCATED\_AB\_SAMPLE** samples the truncated Normal PDF.
-   **NORMAL\_TRUNCATED\_AB\_VARIANCE** returns the variance of the
    truncated Normal PDF.
-   **NORMAL\_TRUNCATED\_A\_CDF** evaluates the lower truncated Normal
    CDF.
-   **NORMAL\_TRUNCATED\_A\_CDF\_INV** inverts the lower truncated
    Normal CDF.
-   **NORMAL\_TRUNCATED\_A\_MEAN** returns the mean of the lower
    truncated Normal PDF.
-   **NORMAL\_TRUNCATED\_A\_PDF** evaluates the lower truncated Normal
    PDF.
-   **NORMAL\_TRUNCATED\_A\_SAMPLE** samples the lower truncated Normal
    PDF.
-   **NORMAL\_TRUNCATED\_A\_VARIANCE:** variance of the lower truncated
    Normal PDF.
-   **NORMAL\_TRUNCATED\_B\_CDF** evaluates the upper truncated Normal
    CDF.
-   **NORMAL\_TRUNCATED\_B\_CDF\_INV** inverts the upper truncated
    Normal CDF.
-   **NORMAL\_TRUNCATED\_B\_MEAN** returns the mean of the upper
    truncated Normal PDF.
-   **NORMAL\_TRUNCATED\_B\_PDF** evaluates the upper truncated Normal
    PDF.
-   **NORMAL\_TRUNCATED\_B\_SAMPLE** samples the upper truncated Normal
    PDF.
-   **NORMAL\_TRUNCATED\_B\_VARIANCE:** variance of the upper truncated
    Normal PDF.
-   **OWEN\_VALUES** returns some values of Owen's T function.
-   **PARETO\_CDF** evaluates the Pareto CDF.
-   **PARETO\_CDF\_INV** inverts the Pareto CDF.
-   **PARETO\_CHECK** checks the parameters of the Pareto CDF.
-   **PARETO\_MEAN** returns the mean of the Pareto PDF.
-   **PARETO\_PDF** evaluates the Pareto PDF.
-   **PARETO\_SAMPLE** samples the Pareto PDF.
-   **PARETO\_VARIANCE** returns the variance of the Pareto PDF.
-   **PEARSON\_05\_CHECK** checks the parameters of the Pearson 5 PDF.
-   **PEARSON\_05\_MEAN** evaluates the mean of the Pearson 5 PDF.
-   **PEARSON\_05\_PDF** evaluates the Pearson 5 PDF.
-   **PEARSON\_05\_SAMPLE** samples the Pearson 5 PDF.
-   **PLANCK\_CHECK** checks the parameters of the Planck PDF.
-   **PLANCK\_MEAN** returns the mean of the Planck PDF.
-   **PLANCK\_PDF** evaluates the Planck PDF.
-   **PLANCK\_SAMPLE** samples the Planck PDF.
-   **PLANCK\_VARIANCE** returns the variance of the Planck PDF.
-   **POINT\_DISTANCE\_1D\_PDF** evaluates the point distance PDF in 1D.
-   **POINT\_DISTANCE\_2D\_PDF** evaluates the point distance PDF in 2D.
-   **POINT\_DISTANCE\_3D\_PDF** evaluates the point distance PDF in the
    3D.
-   **POISSON\_CDF** evaluates the Poisson CDF.
-   **POISSON\_CDF\_INV** inverts the Poisson CDF.
-   **POISSON\_CDF\_VALUES** returns some values of the Poisson CDF.
-   **POISSON\_CHECK** checks the parameter of the Poisson PDF.
-   **POISSON\_KERNEL** evaluates the Poisson kernel.
-   **POISSON\_MEAN** returns the mean of the Poisson PDF.
-   **POISSON\_PDF** evaluates the Poisson PDF.
-   **POISSON\_SAMPLE** samples the Poisson PDF.
-   **POISSON\_VARIANCE** returns the variance of the Poisson PDF.
-   **POWER\_CDF** evaluates the Power CDF.
-   **POWER\_CDF\_INV** inverts the Power CDF.
-   **POWER\_CHECK** checks the parameter of the Power PDF.
-   **POWER\_MEAN** returns the mean of the Power PDF.
-   **POWER\_PDF** evaluates the Power PDF.
-   **POWER\_SAMPLE** samples the Power PDF.
-   **POWER\_VARIANCE** returns the variance of the Power PDF.
-   **PSI\_VALUES** returns some values of the Psi or Digamma function.
-   **QUASIGEOMETRIC\_CDF** evaluates the Quasigeometric CDF.
-   **QUASIGEOMETRIC\_CDF\_INV** inverts the Quasigeometric CDF.
-   **QUASIGEOMETRIC\_CHECK** checks the parameters of the
    Quasigeometric CDF.
-   **QUASIGEOMETRIC\_MEAN** returns the mean of the Quasigeometric PDF.
-   **QUASIGEOMETRIC\_PDF** evaluates the Quasigeometric PDF.
-   **QUASIGEOMETRIC\_SAMPLE** samples the Quasigeometric PDF.
-   **QUASIGEOMETRIC\_VARIANCE** returns the variance of the
    Quasigeometric PDF.
-   **R8\_BETA** returns the value of the Beta function.
-   **R8\_CEILING** rounds an R8 "up" to the nearest integer.
-   **R8\_CSC** returns the cosecant of X.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_ERROR\_F** evaluates the error function ERF.
-   **R8\_ERROR\_F\_INVERSE** inverts the error function ERF.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_GAMMA\_INC** computes the incomplete Gamma function.
-   **R8\_GAMMA\_LOG** calculates the logarithm of GAMMA ( X ) for
    positive X.
-   **R8\_GAMMA\_LOG\_INT** computes the logarithm of Gamma of an
    integer N.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_MODP** returns the nonnegative remainder of R8 division.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_PI** returns the value of PI.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8\_ZETA** estimates the Riemann Zeta function.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8POLY\_VALUE\_HORNER** evaluates a polynomial using Horner's
    method.
-   **R8ROW\_MAX** returns the maximums of an R8ROW.
-   **R8ROW\_MEAN** returns the means of an R8ROW.
-   **R8ROW\_MIN** returns the minimums of an R8ROW.
-   **R8ROW\_VARIANCE** returns the variances of an R8ROW.
-   **R8VEC\_CIRCULAR\_VARIANCE** returns the circular variance of an
    R8VEC
-   **R8VEC\_DIFF\_NORM** returns the L2 norm of the difference of
    R8VEC's.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **R8VEC\_LENGTH** returns the Euclidean length of an R8VEC
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC
-   **R8VEC\_UNIT\_SUM** normalizes an R8VEC to have unit sum.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **RAYLEIGH\_CDF** evaluates the Rayleigh CDF.
-   **RAYLEIGH\_CDF\_INV** inverts the Rayleigh CDF.
-   **RAYLEIGH\_CDF\_VALUES** returns some values of the Rayleigh CDF.
-   **RAYLEIGH\_CHECK** checks the parameter of the Rayleigh PDF.
-   **RAYLEIGH\_MEAN** returns the mean of the Rayleigh PDF.
-   **RAYLEIGH\_PDF** evaluates the Rayleigh PDF.
-   **RAYLEIGH\_SAMPLE** samples the Rayleigh PDF.
-   **RAYLEIGH\_VARIANCE** returns the variance of the Rayleigh PDF.
-   **RECIPROCAL\_CDF** evaluates the Reciprocal CDF.
-   **RECIPROCAL\_CDF\_INV** inverts the Reciprocal CDF.
-   **RECIPROCAL\_CHECK** checks the parameters of the Reciprocal CDF.
-   **RECIPROCAL\_MEAN** returns the mean of the Reciprocal PDF.
-   **RECIPROCAL\_PDF** evaluates the Reciprocal PDF.
-   **RECIPROCAL\_SAMPLE** samples the Reciprocal PDF.
-   **RECIPROCAL\_VARIANCE** returns the variance of the Reciprocal PDF.
-   **RIBESL** calculates I Bessel function with non-integer orders.
-   **RUNS\_MEAN** returns the mean of the Runs PDF.
-   **RUNS\_PDF** evaluates the Runs PDF.
-   **RUNS\_SAMPLE** samples the Runs PDF.
-   **RUNS\_SIMULATE** simulates a case governed by the Runs PDF.
-   **RUNS\_VARIANCE** returns the variance of the Runs PDF.
-   **SECH** returns the hyperbolic secant.
-   **SECH\_CDF** evaluates the Hyperbolic Secant CDF.
-   **SECH\_CDF\_INV** inverts the Hyperbolic Secant CDF.
-   **SECH\_CHECK** checks the parameters of the Hyperbolic Secant CDF.
-   **SECH\_MEAN** returns the mean of the Hyperbolic Secant PDF.
-   **SECH\_PDF** evaluates the Hypebolic Secant PDF.
-   **SECH\_SAMPLE** samples the Hyperbolic Secant PDF.
-   **SECH\_VARIANCE** returns the variance of the Hyperbolic Secant
    PDF.
-   **SEMICIRCULAR\_CDF** evaluates the Semicircular CDF.
-   **SEMICIRCULAR\_CDF\_INV** inverts the Semicircular CDF.
-   **SEMICIRCULAR\_CHECK** checks the parameters of the Semicircular
    CDF.
-   **SEMICIRCULAR\_MEAN** returns the mean of the Semicircular PDF.
-   **SEMICIRCULAR\_PDF** evaluates the Semicircular PDF.
-   **SEMICIRCULAR\_SAMPLE** samples the Semicircular PDF.
-   **SEMICIRCULAR\_VARIANCE** returns the variance of the Semicircular
    PDF.
-   **SIN\_POWER\_INT** evaluates the sine power integral.
-   **SPHERE\_UNIT\_AREA\_ND** computes the surface area of a unit
    sphere in ND.
-   **STIRLING2\_VALUE** computes a Stirling number of the second kind.
-   **STUDENT\_CDF** evaluates the central Student T CDF.
-   **STUDENT\_CDF\_VALUES** returns some values of the Student CDF.
-   **STUDENT\_CHECK** checks the parameter of the central Student T
    CDF.
-   **STUDENT\_MEAN** returns the mean of the central Student T PDF.
-   **STUDENT\_PDF** evaluates the central Student T PDF.
-   **STUDENT\_SAMPLE** samples the central Student T PDF.
-   **STUDENT\_VARIANCE** returns the variance of the central Student T
    PDF.
-   **STUDENT\_NONCENTRAL\_CDF** evaluates the noncentral Student T CDF.
-   **STUDENT\_NONCENTRAL\_CDF\_VALUES** returns values of the
    noncentral Student CDF.
-   **TFN** calculates the T function of Owen.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_CDF** evaluates the Triangle CDF.
-   **TRIANGLE\_CDF\_INV** inverts the Triangle CDF.
-   **TRIANGLE\_CHECK** checks the parameters of the Triangle CDF.
-   **TRIANGLE\_MEAN** returns the mean of the Triangle PDF.
-   **TRIANGLE\_PDF** evaluates the Triangle PDF.
-   **TRIANGLE\_SAMPLE** samples the Triangle PDF.
-   **TRIANGLE\_VARIANCE** returns the variance of the Triangle PDF.
-   **TRIANGULAR\_CDF** evaluates the Triangular CDF.
-   **TRIANGULAR\_CDF\_INV** inverts the Triangular CDF.
-   **TRIANGULAR\_CHECK** checks the parameters of the Triangular CDF.
-   **TRIANGULAR\_MEAN** returns the mean of the Triangular PDF.
-   **TRIANGULAR\_PDF** evaluates the Triangular PDF.
-   **TRIANGULAR\_SAMPLE** samples the Triangular PDF.
-   **TRIANGULAR\_VARIANCE** returns the variance of the Triangular PDF.
-   **TRIGAMMA** calculates the TriGamma function.
-   **UNIFORM\_01\_CDF** evaluates the Uniform 01 CDF.
-   **UNIFORM\_01\_CDF\_INV** inverts the Uniform 01 CDF.
-   **UNIFORM\_01\_MEAN** returns the mean of the Uniform 01 PDF.
-   **UNIFORM\_01\_PDF** evaluates the Uniform 01 PDF.
-   **UNIFORM\_01\_SAMPLE** is a random number generator.
-   **UNIFORM\_01\_VARIANCE** returns the variance of the Uniform 01
    PDF.
-   **UNIFORM\_01\_ORDER\_SAMPLE** samples the Uniform 01 Order PDF.
-   **UNIFORM\_CDF** evaluates the Uniform CDF.
-   **UNIFORM\_CDF\_INV** inverts the Uniform CDF.
-   **UNIFORM\_CHECK** checks the parameters of the Uniform CDF.
-   **UNIFORM\_MEAN** returns the mean of the Uniform PDF.
-   **UNIFORM\_PDF** evaluates the Uniform PDF.
-   **UNIFORM\_SAMPLE** samples the Uniform PDF.
-   **UNIFORM\_VARIANCE** returns the variance of the Uniform PDF.
-   **UNIFORM\_DISCRETE\_CDF** evaluates the Uniform Discrete CDF.
-   **UNIFORM\_DISCRETE\_CDF\_INV** inverts the Uniform Discrete CDF.
-   **UNIFORM\_DISCRETE\_CHECK** checks the parameters of the Uniform
    discrete CDF.
-   **UNIFORM\_DISCRETE\_MEAN** returns the mean of the Uniform discrete
    PDF.
-   **UNIFORM\_DISCRETE\_PDF** evaluates the Uniform discrete PDF.
-   **UNIFORM\_DISCRETE\_SAMPLE** samples the Uniform discrete PDF.
-   **UNIFORM\_DISCRETE\_VARIANCE** returns the variance of the Uniform
    discrete PDF.
-   **UNIFORM\_NSPHERE\_SAMPLE** samples the Uniform Unit Sphere PDF.
-   **VON\_MISES\_CDF** evaluates the von Mises CDF.
-   **VON\_MISES\_CDF\_INV** inverts the von Mises CDF.
-   **VON\_MISES\_CDF\_VALUES** returns some values of the von Mises
    CDF.
-   **VON\_MISES\_CHECK** checks the parameters of the von Mises PDF.
-   **VON\_MISES\_CIRCULAR\_VARIANCE** returns the circular variance of
    the von Mises PDF.
-   **VON\_MISES\_MEAN** returns the mean of the von Mises PDF.
-   **VON\_MISES\_PDF** evaluates the von Mises PDF.
-   **VON\_MISES\_SAMPLE** samples the von Mises PDF.
-   **WEIBULL\_CDF** evaluates the Weibull CDF.
-   **WEIBULL\_CDF\_INV** inverts the Weibull CDF.
-   **WEIBULL\_CDF\_VALUES** returns some values of the Weibull CDF.
-   **WEIBULL\_CHECK** checks the parameters of the Weibull CDF.
-   **WEIBULL\_MEAN** returns the mean of the Weibull PDF.
-   **WEIBULL\_PDF** evaluates the Weibull PDF.
-   **WEIBULL\_SAMPLE** samples the Weibull PDF.
-   **WEIBULL\_VARIANCE** returns the variance of the Weibull PDF.
-   **WEIBULL\_DISCRETE\_CDF** evaluates the Discrete Weibull CDF.
-   **WEIBULL\_DISCRETE\_CDF\_INV** inverts the Discrete Weibull CDF.
-   **WEIBULL\_DISCRETE\_CHECK** checks the parameters of the discrete
    Weibull CDF.
-   **WEIBULL\_DISCRETE\_PDF** evaluates the discrete Weibull PDF.
-   **WEIBULL\_DISCRETE\_SAMPLE** samples the discrete Weibull PDF.
-   **ZIPF\_CDF** evaluates the Zipf CDF.
-   **ZIPF\_CDF\_INV** inverts the Zipf CDF.
-   **ZIPF\_CHECK** checks the parameter of the Zipf PDF.
-   **ZIPF\_MEAN** returns the mean of the Zipf PDF.
-   **ZIPF\_PDF** evaluates the Zipf PDF.
-   **ZIPF\_SAMPLE** samples the Zipf PDF.
-   **ZIPF\_VARIANCE** returns the variance of the Zipf PDF.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 02 August 2016.*
