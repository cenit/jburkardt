WISHART\
Sample the Wishart Distribution for Random Covariance Matrices {#wishart-sample-the-wishart-distribution-for-random-covariance-matrices align="center"}
==============================================================

------------------------------------------------------------------------

**WISHART** is a C++ library which produces sample matrices from the
Wishart or Bartlett distributions, useful for sampling random covariance
matrices.

The Wishart distribution is a probability distribution for random
nonnegative-definite NxN matrices that can be used to select random
covariance matrices.

The objects of the distribution are NxN matrices which are the sum of DF
rank-one matrices X\*X' constructed from N-vectors X, where the vectors
X have zero mean and covariance SIGMA. This implies that the expected
value of a Wishart matrix is DF \* SIGMA.

A simplified version of the Wishart distribution assumes that SIGMA is
the identity matrix. We will call this the "unit Wishart distribution".

Because any Wishart matrix W is symmetric nonnegative definite, there is
an upper triangular factor T so that W = T' \* T. There is a
corresponding Bartlett distribution of the matrices T, so that one can
alternatively sample the Bartlett distribution by sampling the Bartlett
distribution for T, and then forming W.

In order to generate the necessary random values, the library relies on
the PDFLIB and RNGLIB libraries.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WISHART** is available in [a C
version](../../c_src/wishart/wishart.html) and [a C++
version](../../cpp_src/wishart/wishart.html) and [a FORTRAN77
version](../../f77_src/wishart/wishart.html) and [a FORTRAN90
version](../../f_src/wishart/wishart.html) and [a MATLAB
version](../../m_src/wishart/wishart.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA053](../../cpp_src/asa053/asa053.html), a C++ library which produces
sample matrices from the Wishart distribution, by William Smith and
Ronald Hocking. This is a version of Applied Statistics Algorithm 53.

[PDFLIB](../../cpp_src/pdflib/pdflib.html), a C++ library which
evaluates Probability Density Functions (PDF's) and produces random
samples from them, including beta, binomial, chi, exponential, gamma,
inverse chi, inverse gamma, multinomial, normal, scaled inverse chi, and
uniform.

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

### Reference: {#reference align="center"}

-   Patrick Odell, Alan Feiveson,\
    A numerical procedure to generate a sample covariance matrix,\
    Journal of the American Statistical Association,\
    Volume 61, Number 313, March 1966, pages 199-203.
-   Stanley Sawyer,\
    Wishart Distributions and Inverse-Wishart Sampling,\
    Washington University,\
    30 April 2007, 12 pages.

### Source Code: {#source-code align="center"}

-   [wishart.cpp](wishart.cpp), the source code.
-   [wishart.hpp](wishart.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [wishart\_prb.cpp](wishart_prb.cpp) a sample calling program.
-   [wishart\_prb\_output.txt](wishart_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BARTLETT\_SAMPLE** samples the Bartlett distribution.
-   **BARTLETT\_UNIT\_SAMPLE** samples the unit Bartlett distribution.
-   **JACOBI\_EIGENVALUE** carries out the Jacobi eigenvalue iteration.
-   **R8MAT\_ADD** adds one R8MAT to another.
-   **R8MAT\_CHOLESKY\_FACTOR\_UPPER** computes the upper Cholesky
    factor of a symmetric R8MAT.
-   **R8MAT\_COPY\_NEW** copies one R8MAT to a "new" R8MAT.
-   **R8MAT\_DIAG\_GET\_VECTOR** gets the value of the diagonal of an
    R8MAT.
-   **R8MAT\_DIAGONAL\_NEW** returns a diagonal matrix.
-   **R8MAT\_DIVIDE** divides an R8MAT by a scalar.
-   **R8MAT\_IDENTITY** sets an R8MAT to the identity matrix.
-   **R8MAT\_IDENTITY\_NEW** returns an identity matrix.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_MTM\_NEW** computes C = A' \* B.
-   **R8MAT\_NORM\_FRO\_AFFINE** returns the Frobenius norm of an R8MAT
    difference.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_ZERO\_NEW** returns a new zeroed R8MAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **WISHART\_SAMPLE** samples the Wishart distribution.
-   **WISHART\_UNIT\_SAMPLE** samples the unit Wishart distribution.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 August 2013.*
