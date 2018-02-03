GSL\
The GNU Scientific Library {#gsl-the-gnu-scientific-library align="center"}
==========================

------------------------------------------------------------------------

**GSL** is a directory of C++ programs which illustrate the use of the
GNU Scientific Library.

**GSL** includes routines for

-   BLAS (Basic Linear Algebra Subprogram) support;
-   Chebyshev Approximation;
-   Complex numbers;
-   Differential Equations;
-   Discrete Hankel Transforms;
-   Eigenvalues and Eigenvectors;
-   FFT, Fast Fourier Transforms;
-   Histograms;
-   IEEE Floating Point Calculations;
-   Interpolation;
-   Least Squares Fitting;
-   Linear Algebra;
-   Minimization;
-   Monte Carlo Integration;
-   N-Tuples;
-   Numerical Differentiation;
-   Permutations;
-   Physical Constants;
-   Quadrature (Numerical Integration);
-   Quasi-Random sequences;
-   Random Distributions;
-   Random Number Generation;
-   Root finding of general nonlinear equations;
-   Roots of Polynomials;
-   Series Acceleration;
-   Simulated Annealing;
-   Sorting;
-   Special Functions
    -   Airy
    -   Bessel
    -   Clausen
    -   Coulomb
    -   Coupling (Wigner 3j, 6j, 9j)
    -   Dawson
    -   Debye
    -   Dilogarithm
    -   Elliptic Integrals and Functions
    -   Error Function
    -   Exponential Function and Integrals
    -   Fermi-Dirac Function
    -   Gamma
    -   Gegenbauer
    -   Hypergeometric
    -   Laguerre
    -   Lambert W
    -   Legendre Functions; Spherical Harmonics
    -   Logarithm
    -   Power
    -   Psi or Digamma
    -   Synchrotron
    -   Transport
    -   Trigonometric Functions
    -   Zeta
-   Statistics;
-   Vectors and matrices;

### Usage: {#usage align="center"}

 **g++** *myprog.C* **-lgsl -lgslcblas** 
:   compiles *myprog.C* and links it with **GSL** and the necessary
    **BLAS** routines.

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1](../../master/blas1/blas1.md), a C++ library which implements
the BLAS Level 1 vector-vector routines, which is included in GSL.

[BLAS2](../../f_src/blas2/blas2.md), a FORTRAN90 library which
implements the BLAS Level 2 matrix-vector routines, which is included in
GSL.

[BLAS3](../../f_src/blas3/blas3.md), a FORTRAN90 library which
implements the BLAS Level 3 matrix-matrix routines, which is included in
GSL.

[POLPAK](../../master/polpak/polpak.md), a C++ library which
evaluates various recursive polynomials and other special functions.

[SPECFUN](../../f77_src/specfun/specfun.md), a FORTRAN77 library which
evaluates various special functions.

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which returns a few values of various special functions.

### Reference: {#reference align="center"}

1.  <http://www.gnu.org/software/gsl/> the GSL home page.
2.  Mark Gelassi, Jim Davies, James Tyler, Bryan Gough, Reid
    Priedhorsky, Gerard Jungman, Michael Booth, Fabrice Rossi,\
    GNU Scientific Library Reference Manual,\
    Network Theory Limited, 2005,\
    ISBN: 0954612078.

### Examples and Tests: {#examples-and-tests align="center"}

-   [gsl\_test.cpp](gsl_test.cpp), a calling program;
-   [gsl\_test\_output.txt](gsl_test_output.txt), the sample output.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
