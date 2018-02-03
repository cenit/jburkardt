CDFLIB\
Cumulative Density Functions {#cdflib-cumulative-density-functions align="center"}
============================

------------------------------------------------------------------------

**CDFLIB** is a C++ library which evaluates cumulative probability
density functions.

CDFLIB includes routines for evaluating the cumulative density functions
of a variety of standard probability distributions. An unusual feature
of this library is its ability to easily compute any one parameter of
the CDF given the others. This means that a single routine can evaluate
the CDF given the usual parameters, or determine the value of a
parameter that produced a given CDF value.

The probability distributions covered include:

-   the Beta distribution;
-   the binomial distribution;
-   the chi-square distribution;
-   the noncentral chi-square distribution;
-   the F distribution;
-   the noncentral F distribution;
-   the Gamma distribution;
-   the negative binomial distribution;
-   the normal distribution;
-   the Poisson distribution;
-   the T distribution;

Note that the F and noncentral F distributions are not necessarily
monotone in either degree of freedom argument. Consequently, there may
be two degree of freedom arguments that satisfy the specified condition.
An arbitrary one of these will be found by the routines.

The amount of computation required for the noncentral chisquare and
noncentral F distribution is proportional to the value of the
noncentrality parameter. Very large values of this parameter can require
immense numbers of computation. Consequently, when the noncentrality
parameter is to be calculated, the upper limit searched is 10,000.

<http://www.netlib.org/random>\
the NETLIB random number web site, distributes a TAR file of the source
code for the original CDFLIB library in C and FORTRAN;

<http://biostatistics.mdanderson.org/SoftwareDownload/SingleSoftware.aspx?Software_Id=21>
is a site at the University of Texas Department of Biostatistics and
Applied Mathematics which makes available a more up-to-date FORTRAN90
version of the software, known as **CDFLIB90**.

### Languages: {#languages align="center"}

**CDFLIB** is available in [a C version](../../c_src/cdflib/cdflib.html)
and [a C++ version](../../cpp_src/cdflib/cdflib.html) and [a FORTRAN90
version](../../f_src/cdflib/cdflib.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA310](../../cpp_src/asa310/asa310.html), a C++ library which computes
the CDF of the noncentral Beta distribution.

[BETA\_NC](../../cpp_src/beta_nc/beta_nc.html), a C++ library which
evaluates the CDF of the noncentral Beta distribution.

[GSL](../../cpp_src/gsl/gsl.html), a C++ library which contains routines
for evaluating, sampling and inverting various probability
distributions.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which contains
routines for sampling the normal distribution.

[PROB](../../cpp_src/prob/prob.html), a C++ library which contains
routines for evaluating and inverting the normal CDF, and many other
distributions.

[TEST\_VALUES](../../cpp_src/test_values/test_values.html), a C++
library which contains routines that store selected values of the normal
CDF, and many other statistical distributions.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
contains routines for sampling the uniform distribution.

### Author: {#author align="center"}

Barry Brown, James Lovato, Kathy Russell,\
Department of Biomathematics,\
University of Texas,\
Houston, Texas.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Jacobus Bus, Jacob Dekker,\
    Two Efficient Algorithms with Guaranteed Convergence for Finding a
    Zero of a Function,\
    ACM Transactions on Mathematical Software,\
    Volume 1, Number 4, December 1975, pages 330-345.
3.  William Cody,\
    Algorithm 715: SPECFUN - A Portable FORTRAN Package of Special
    Function Routines and Test Drivers,\
    ACM Transactions on Mathematical Software,\
    Volume 19, Number 1, March 1993, pages 22-32.
4.  William Cody,\
    Rational Chebyshev Approximations for the Error Function,\
    Mathematics of Computation,\
    Volume 23, Number 107, July 1969, pages 631-638.
5.  William Cody, Anthony Strecok, Henry Thacher,\
    Chebyshev Approximations for the Psi Function,\
    Mathematics of Computation,\
    Volume 27, Number 121, January 1973, pages 123-127.
6.  Armido DiDinato, Alfred Morris,\
    Algorithm 708: Significant Digit Computation of the Incomplete Beta
    Function Ratios,\
    ACM Transactions on Mathematical Software,\
    Volume 18, Number 3, September 1993, pages 360-373.
7.  Armido DiDinato, Alfred Morris,\
    Computation of the Incomplete Gamma Function Ratios and their
    Inverse,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, December 1986, pages 377-393.
8.  Phyllis Fox, Andrew Hall, Norman Schryer,\
    Algorithm 528: Framework for a Portable Library,\
    ACM Transactions on Mathematical Software,\
    Volume 4, Number 2, June 1978, page 176-188.
9.  William Kennedy, James Gentle,\
    Statistical Computing,\
    Marcel Dekker, 1980,\
    ISBN: 0824768981,\
    LC: QA276.4 K46.
10. Karl Pearson,\
    Tables of the Incomplete Beta Function,\
    Cambridge University Press, 1968,\
    ISBN: 0521059224,\
    LC: QA351.P38.
11. Frank Powell,\
    Statistical Tables for Sociology, Biology and Physical Sciences,\
    Cambridge University Press, 1982,\
    ISBN: 0521284732,\
    LC: QA276.25.S73.
12. Stephen Wolfram,\
    The Mathematica Book,\
    Fourth Edition,\
    Cambridge University Press, 1999,\
    ISBN: 0-521-64314-7,\
    LC: QA76.95.W65.
13. Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3.
14. <http://www.netlib.org/random>, the web site.

### Source Code: {#source-code align="center"}

-   [cdflib.cpp](cdflib.cpp), the source code;
-   [cdflib.hpp](cdflib.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [cdflib\_prb.cpp](cdflib_prb.cpp), a sample calling program;
-   [cdflib\_prb\_output.txt](cdflib_prb_output.txt), output from a run
    of the sample program;

### List of Routines: {#list-of-routines align="center"}

-   **ALGDIV** computes ln ( Gamma ( B ) / Gamma ( A + B ) ) when 8
    &lt;= B.
-   **ALNREL** evaluates the function ln ( 1 + A ).
-   **APSER** computes the incomplete beta ratio I(SUB(1-X))(B,A).
-   **BCORR** evaluates DEL(A0) + DEL(B0) - DEL(A0 + B0).
-   **BETA** evaluates the beta function.
-   **BETA\_ASYM** computes an asymptotic expansion for IX(A,B), for
    large A and B.
-   **BETA\_FRAC** evaluates a continued fraction expansion for IX(A,B).
-   **BETA\_GRAT** evaluates an asymptotic expansion for IX(A,B).
-   **BETA\_INC** evaluates the incomplete beta function IX(A,B).
-   **BETA\_INC\_VALUES** returns some values of the incomplete Beta
    function.
-   **BETA\_LOG** evaluates the logarithm of the beta function.
-   **BETA\_PSER** uses a power series expansion to evaluate IX(A,B)(X).
-   **BETA\_RCOMP** evaluates X\*\*A \* Y\*\*B / Beta(A,B).
-   **BETA\_RCOMP1** evaluates exp(MU) \* X\*\*A \* Y\*\*B / Beta(A,B).
-   **BETA\_UP** evaluates IX(A,B) - IX(A+N,B) where N is a positive
    integer.
-   **BINOMIAL\_CDF\_VALUES** returns some values of the binomial CDF.
-   **CDFBET** evaluates the CDF of the Beta Distribution.
-   **CDFBIN** evaluates the CDF of the Binomial distribution.
-   **CDFCHI** evaluates the CDF of the chi square distribution.
-   **CDFCHN** evaluates the CDF of the Noncentral Chi-Square.
-   **CDFF** evaluates the CDF of the F distribution.
-   **CDFFNC** evaluates the CDF of the Noncentral F distribution.
-   **CDFGAM** evaluates the CDF of the Gamma Distribution.
-   **CDFNBN** evaluates the CDF of the Negative Binomial distribution
-   **CDFNOR** evaluates the CDF of the Normal distribution.
-   **CDFPOI** evaluates the CDF of the Poisson distribution.
-   **CDFT** evaluates the CDF of the T distribution.
-   **CHI\_NONCENTRAL\_CDF\_VALUES** returns values of the noncentral
    chi CDF.
-   **CHI\_SQUARE\_CDF\_VALUES** returns some values of the Chi-Square
    CDF.
-   **CUMBET** evaluates the cumulative incomplete beta distribution.
-   **CUMBIN** evaluates the cumulative binomial distribution.
-   **CUMCHI** evaluates the cumulative chi-square distribution.
-   **CUMCHN** evaluates the cumulative noncentral chi-square
    distribution.
-   **CUMF** evaluates the cumulative F distribution.
-   **CUMFNC** evaluates the cumulative noncentral F distribution.
-   **CUMGAM** evaluates the cumulative incomplete gamma distribution.
-   **CUMNBN** evaluates the cumulative negative binomial distribution.
-   **CUMNOR** computes the cumulative normal distribution.
-   **CUMPOI** evaluates the cumulative Poisson distribution.
-   **CUMT** evaluates the cumulative T distribution.
-   **DBETRM** computes the Sterling remainder for the complete beta
    function.
-   **DEXPM1** evaluates the function EXP(X) - 1.
-   **DINVNR** computes the inverse of the normal distribution.
-   **DINVR** bounds the zero of the function and invokes DZROR.
-   **DLANOR** evaluates the logarithm of the asymptotic Normal CDF.
-   **DPMPAR** provides machine constants for double precision
    arithmetic.
-   **DSTINV** seeks a value X such that F(X) = Y.
-   **DSTREM** computes the Sterling remainder ln ( Gamma ( Z ) ) -
    Sterling ( Z ).
-   **DSTXR** sets quantities needed by the zero finder.
-   **DT1** computes an approximate inverse of the cumulative T
    distribution.
-   **DZROR** seeks the zero of a function using reverse communication.
-   **E0000** is a reverse-communication zero bounder.
-   **E00001** is a reverse-communication zero finder.
-   **ERF\_VALUES** returns some values of the ERF or "error" function.
-   **ERROR\_F** evaluates the error function ERF.
-   **ERROR\_FC** evaluates the complementary error function ERFC.
-   **ESUM** evaluates exp ( MU + X ).
-   **EVAL\_POL** evaluates a polynomial at X.
-   **EXPARG** returns the largest or smallest legal argument for EXP.
-   **F\_CDF\_VALUES** returns some values of the F CDF test function.
-   **F\_NONCENTRAL\_CDF\_VALUES** returns some values of the F CDF test
    function.
-   **FIFDINT** truncates a double number to an integer.
-   **FIFDMAX1** returns the maximum of two numbers a and b
-   **FIFDMIN1** returns the minimum of two numbers.
-   **FIFDSIGN** transfers the sign of the variable "sign" to the
    variable "mag"
-   **FIFIDINT** truncates a double number to a long integer
-   **FIFMOD** returns the modulo of a and b
-   **FPSER** evaluates IX(A,B)(X) for very small B.
-   **FTNSTOP** prints a message to standard error and then exits.
-   **GAM1** computes 1 / GAMMA(A+1) - 1 for -0.5D+00 &lt;= A &lt;= 1.5
-   **GAMMA\_INC** evaluates the incomplete gamma ratio functions P(A,X)
    and Q(A,X).
-   **GAMMA\_INC\_INV** computes the inverse incomplete gamma ratio
    function.
-   **GAMMA\_INC\_VALUES** returns some values of the incomplete Gamma
    function.
-   **GAMMA\_LN1** evaluates ln ( Gamma ( 1 + A ) ), for -0.2 &lt;= A
    &lt;= 1.25.
-   **GAMMA\_LOG** evaluates ln ( Gamma ( A ) ) for positive A.
-   **GAMMA\_RAT1** evaluates the incomplete gamma ratio functions
    P(A,X) and Q(A,X).
-   **GAMMA\_VALUES** returns some values of the Gamma function.
-   **GAMMA\_X** evaluates the gamma function.
-   **GSUMLN** evaluates the function ln(Gamma(A + B)).
-   **IPMPAR** returns integer machine constants.
-   **NEGATIVE\_BINOMIAL\_CDF\_VALUES** returns values of the negative
    binomial CDF.
-   **NORMAL\_CDF\_VALUES** returns some values of the Normal CDF.
-   **POISSON\_CDF\_VALUES** returns some values of the Poisson CDF.
-   **PSI** evaluates the psi or digamma function, d/dx ln(gamma(x)).
-   **PSI\_VALUES** returns some values of the Psi or Digamma function.
-   **RCOMP** evaluates exp(-X) \* X\*\*A / Gamma(A).
-   **REXP** evaluates the function EXP(X) - 1.
-   **RLOG** computes X - 1 - LN(X).
-   **RLOG1** evaluates the function X - ln ( 1 + X ).
-   **STUDENT\_CDF\_VALUES** returns some values of the Student CDF.
-   **STVALN** provides starting values for the inverse of the normal
    distribution.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 17 November 2006.*
