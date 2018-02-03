DREAM\
Markov Chain Monte Carlo acceleration by Differential Evolution {#dream-markov-chain-monte-carlo-acceleration-by-differential-evolution align="center"}
===============================================================

------------------------------------------------------------------------

**DREAM** is a C++ program which implements the DREAM algorithm for
accelerating Markov Chain Monte Carlo (MCMC) convergence using
differential evolution, by Guannan Zhang.

**DREAM** requires user input in the form of five C++ functions:

-   *problem\_size()*, defines the sizes of problem parameters;
-   *problem\_value()*, defines the value of problem parameters;
-   *prior\_density()*, evaluates the prior distribution;
-   *prior\_sample()*, samples the prior distribution;
-   *sample\_likelihood()*, evaluates the log likelihood function.

Examples of such user input are listed below.

DREAM requires access to a compiled version of the pdflib library, which
can evaluate a variety of Probability Density Functions (PDF's) and
produce samples from them. The user may wish to invoke this library when
constructing some of the user functions.

DREAM requires access to a compiled version of the rnglib library, in
order to generate random numbers.

An older implementation of the DREAM algorithm is available as DREAM1;
it requires a user main program and two input files.

The DREAM program was originally developed by Guannan Zhang, of Oak
Ridge National Laboratory (ORNL); it has been incorporated into the
DAKOTA package of Sandia National Laboratory, and forms part of the ORNL
package known as TASMANIAN.

### Web Link: {#web-link align="center"}

A version of the DREAM library is available in
[http://tasmanian.ornl.gov](http://tasmanian.ornl.gov/), the TASMANIAN
library, available from Oak Ridge National Laboratory.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DREAM** is available in [a C version](../../c_src/dream/dream.md)
and [a C++ version](../../master/dream/dream.md) and [a FORTRAN90
version](../../f_src/dream/dream.md) and [a MATLAB
version](../../m_src/dream/dream.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DREAM1](../../master/dream1/dream1.md), a C++ library which is an
older implementation of the DREAM algorithm for accelerating Markov
Chain Monte Carlo (MCMC) convergence using differential evolution, using
a user function main program and two input files to define the problem,
by Guannan Zhang.

[PDFLIB](../../master/pdflib/pdflib.md), a C++ library which
evaluates Probability Density Functions (PDF's) and produces random
samples from them, including beta, binomial, chi, exponential, gamma,
inverse chi, inverse gamma, multinomial, normal, scaled inverse chi, and
uniform.

[RANLIB](../../master/ranlib/ranlib.md), a C++ library which produces
random samples from Probability Density Functions (PDF's), including
Beta, Chi-square Exponential, F, Gamma, Multivariate normal, Noncentral
chi-square, Noncentral F, Univariate normal, random permutations, Real
uniform, Binomial, Negative Binomial, Multinomial, Poisson and Integer
uniform, by Barry Brown and James Lovato.

[RNGLIB](../../master/rnglib/rnglib.md), a C++ library which
implements a random number generator (RNG) with splitting facilities,
allowing multiple independent streams to be computed, by L'Ecuyer and
Cote.

### Author: {#author align="center"}

Original FORTRAN90 version by Guannan Zhang; C++ version by John
Burkardt.

### Reference: {#reference align="center"}

1.  Pierre LEcuyer, Serge Cote,\
    Implementing a Random Number Package with Splitting Facilities,\
    ACM Transactions on Mathematical Software,\
    Volume 17, Number 1, March 1991, pages 98-111.
2.  Jasper Vrugt, CJF ter Braak, CGH Diks, Bruce Robinson, James Hyman,
    Dave Higdon,\
    Accelerating Markov Chain Monte Carlo Simulation by Differential
    Evolution with Self-Adaptive Randomized Subspace Sampling,\
    International Journal of Nonlinear Sciences and Numerical
    Simulation,\
    Volume 10, Number 3, March 2009, pages 271-288.

### Source Code: {#source-code align="center"}

-   [dream.cpp](dream.cpp), the source code.
-   [dream.hpp](dream.hpp), the include file.
-   [dream\_user.hpp](dream_user.hpp), the include file for the user
    functions.

### Examples and Tests: {#examples-and-tests align="center"}

**PROBLEM0** is a small sample problem, in 10 dimensions, with a density
that is the maximum of two gaussians centered at (-5,-5,...,-5) and
(5,5,...,5).

-   [problem0.cpp](problem0.cpp), is a user written file, containing 5
    functions, which define the problem data.
-   [problem0\_output.txt](problem0_output.txt), the output file.
-   [problem0\_chain00.txt](problem0_chain00.txt), a chain data file.
-   [problem0\_chain01.txt](problem0_chain01.txt), a chain data file.
-   [problem0\_chain02.txt](problem0_chain02.txt), a chain data file.
-   [problem0\_chain03.txt](problem0_chain03.txt), a chain data file.
-   [problem0\_chain04.txt](problem0_chain04.txt), a chain data file.
-   [problem0\_chain05.txt](problem0_chain05.txt), a chain data file.
-   [problem0\_chain06.txt](problem0_chain06.txt), a chain data file.
-   [problem0\_chain07.txt](problem0_chain07.txt), a chain data file.
-   [problem0\_chain08.txt](problem0_chain08.txt), a chain data file.
-   [problem0\_chain09.txt](problem0_chain09.txt), a chain data file.
-   [problem0\_gr.txt](problem0_gr.txt), the Gelman-Rubin statistic
    file.
-   [problem0\_restart.txt](problem0_restart.txt), the restart file.

**PROBLEM1** is based on the first example in the Vrugt reference. The
Vrugt version involves 100 variables, with a multidimensional normal
distribution with specified mean vector and covariance matrix. So far, I
have simply set up the user routines, with just 5 variables, and created
a small stand-alone main program to test it. An important issue was to
find a simple and efficient way of handling the covariance. We need to
evaluate the matrix, compute its Cholesky factor, find its determinant,
just one time, and then provide this information to any function that
needs it, quickly and simply. In this version of the code, I opted to
define a "Covariance" structure, making it an "extern" variable so the
main program could access it.

-   [problem1.cpp](problem1.cpp), is a user written file, containing the
    5 functions required to define the problem data, as well as other
    functions to set the covariance.
-   [problem1\_covariance.hpp](problem1_covariance.hpp), an include file
    that defines the "Covariance" structure.
-   [problem1\_main.cpp](problem1_main.cpp), a stand-alone main program
    that calls the user functions to make some simple tests.
-   [problem1\_main\_output.txt](problem1_main_output.txt), the output
    file from the standalone main program.

**PROBLEM1C** is a version of PROBLEM1 that uses a class to store the
covariance information, instead of a structure. I didn't like this
approach, since it seemed like, every time I needed some information, I
had to call a function and provide an array to store a copy of the
information, rather than simply accessing the information directly.

-   [problem1c.cpp](problem1c.cpp), is a user written file, containing
    the 5 functions required to define the problem data, as well as
    other functions to set the covariance.
-   [problem1c\_covariance.hpp](problem1c_covariance.hpp), an include
    file that defines the Covariance class.
-   [problem1c\_covariance.cpp](problem1c_covariance.cpp), functions
    that implement the Covariance class.
-   [problem1c\_main.cpp](problem1c_main.cpp), a stand-alone main
    program that calls the user functions to make some simple tests.
-   [problem1c\_main\_output.txt](problem1c_main_output.txt), the output
    file from the standalone main program.

**PROBLEM2** is based on the second example in the Vrugt reference. The
Vrugt version involves 10 variables, with a "twisted" Gaussian density
function.

-   [problem2.cpp](problem2.cpp), is a user written file, containing the
    5 functions required to define problem 2.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for DREAM.
-   **CHAIN\_INIT** starts Markov chains from a prior distribution.
-   **CHAIN\_INIT\_PRINT** prints the initial values for Markov chains.
-   **CHAIN\_OUTLIERS** identifies and modifies outlier chains during
    burn-in.
-   **CHAIN\_WRITE** writes samples of each chain to separate files.
-   **CR\_DIS\_UPDATE** updates the CR distance.
-   **CR\_INDEX\_CHOOSE** chooses a CR index.
-   **CR\_INIT** initializes the crossover probability values.
-   **CR\_PROB\_UPDATE** updates the CR probabilities.
-   **DIFF\_COMPUTE** computes the differential evolution.
-   **DREAM\_ALGM** gets a candidate parameter sample.
-   **FILENAME\_INC** increments a partially numeric file name.
-   **GR\_COMPUTE** computes the Gelman Rubin statistics R used to check
-   **GR\_INIT** initializes Gelman-Rubin variables.
-   **GR\_WRITE** writes Gelman-Rubin R statistics into a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **INPUT\_PRINT** prints the data from the input file.
-   **JUMPRATE\_CHOOSE** chooses a jump rate from the jump rate table.
-   **JUMPRATE\_TABLE\_INIT** initializes the jump rate table.
-   **JUMPRATE\_TABLE\_PRINT** prints the jump rate table.
-   **R8\_ROUND\_I4** rounds an R8, returning an I4.
-   **R8BLOCK\_ZERO\_NEW** returns a new zeroed R8BLOCK.
-   **R8MAT\_ZERO\_NEW** returns a new zeroed R8MAT.
-   **R8VEC\_COPY\_NEW** copies an R8VEC to a new R8VEC.
-   **R8VEC\_HEAP\_D** reorders an R8VEC into a descending heap.
-   **R8VEC\_SORT\_HEAP\_A** ascending sorts an R8VEC using heap sort.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_TRANSPOSE\_PRINT** prints an R8VEC "transposed".
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **RESTART\_READ** reads parameter sample data from a restart file.
-   **RESTART\_WRITE** writes a restart file.
-   **SAMPLE\_CANDIDATE** generates candidate parameter samples.
-   **SAMPLE\_LIMITS** enforces limits on a sample variable.
-   **STD\_COMPUTE** computes the current standard deviations, for each
    parameter.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 June 2013.*
