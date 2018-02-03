TEST\_APPROX\
Test Data for Approximation Algorithms {#test_approx-test-data-for-approximation-algorithms align="center"}
======================================

------------------------------------------------------------------------

**TEST\_APPROX** is a C++ library which provides sets of test data for
approximation algorithms.

TEST\_APPROX contains a number of vectors of data (X(1:N),Y(1:N)) for
which no underlying functional relationship is given.

The task of interpolation software is to find, from some given class of
functions, the function G(X) which exactly matches the known data
values. That is, G(X(1:N)) = Y(1:N).

The task of approximation software is to find, from some given class of
functions, the function H(X) for which some approximation error is
minimized. There are many forms of error measurement. For instance, the
error might simply be the sum of the differences of the function and the
data at the data abscissas:

> l1(X) = sum ( 1 &lt;= I &lt;= N ) abs ( H(X(I)) - Y(I) )

or the square root of the sum of squares

> l2(X) = sqrt ( sum ( 1 &lt;= I &lt;= N ) ( H(X(I)) - Y(I) )\^2 )

or the maximum pointwise error:

> l\_inf(X) = max ( abs ( H(X(I)) - Y(I) ) )

In cases where a functional form is given, the error might be measured
in terms of the integral of the absolute value of the difference over
some interval:

> L1(X,A,B) = integral ( A &lt;= X &lt;= B ) abs ( H(X) - F(X) ) dx

and so on.

The problems available include:

1.  [p01\_data.png](p01_data.png): DeBoor example, Mars position data
2.  [p02\_data.png](p02_data.png): DeBoor example, roughly linear data
3.  [p03\_data.png](p03_data.png): The pulse data, 0 0 0 0 0 1 0 0 0 0
    0;
4.  [p04\_data.png](p04_data.png): The jump data, 0 0 0 0 0 1/2 1 1 1 1
    1;
5.  [p05\_data.png](p05_data.png): DeBoor's Titanium Property data;
6.  [p06\_data.png](p06_data.png): The Sawtooth data;
7.  [p07\_data.png](p07_data.png): Concavity test data;
8.  [p08\_data.png](p08_data.png): Extrapolation test data;
9.  [p09\_data.png](p09_data.png): Sunspot data, 1700-1960;
10. [p10\_data.png](p10_data.png): 100 samples of y=2+5x+10\*N(0,1),
    where N(0,1) is a random normal value with 0 mean and unit variance;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_APPROX** is available in [a C
version](../../c_src/test_approx/test_approx.html) and [a C++
version](../../cpp_src/test_approx/test_approx.html) and [a FORTRAN77
version](../../f77_src/test_approx/test_approx.html) and [a FORTRAN90
version](../../f_src/test_approx/test_approx.html) and [a MATLAB
version](../../m_src/test_approx/test_approx.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV](../../cpp_src/chebyshev/chebyshev.html), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[DIVDIF](../../cpp_src/divdif/divdif.html), a C++ library which includes
many routines to construct and evaluate divided difference interpolants.

[SPLINE](../../cpp_src/spline/spline.html), a C++ library which includes
many routines to construct and evaluate spline interpolants and
approximants.

[TEST\_APPROX](../../datasets/test_approx/test_approx.html), a dataset
directory which contains sets of data (x,y) for which an approximating
formula is desired.

[TEST\_INTERP\_1D](../../cpp_src/test_interp_1d/test_interp_1d.html), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

### Reference: {#reference align="center"}

1.  Samuel Conte, Carl deBoor,\
    Elementary Numerical Analysis,\
    Second Edition,\
    McGraw Hill, 1972,\
    ISBN: 07-012446-4,\
    LC: QA297.C65.
2.  Carl deBoor,\
    A Practical Guide to Splines,\
    Springer, 2001,\
    ISBN: 0387953663,\
    LC: QA1.A647.v27.
3.  Max Waldmeier,\
    The Sunspot-Activity in the Years 1610-1960,\
    Shulthess, 1961,\
    LC: QB525.W34.

### Source Code: {#source-code align="center"}

-   [test\_approx.cpp](test_approx.cpp), the source code;
-   [test\_approx.hpp](test_approx.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_approx\_prb.cpp](test_approx_prb.cpp), the calling program;
-   [test\_approx\_prb\_output.txt](test_approx_prb_output.txt), the
    sample output.

**TEST07** creates data files for an Overhauser spline interpolant to
data set 7.

-   [test07\_data.txt](test07_data.txt) the data.
-   [test07\_approx.txt](test07_approx.txt) the interpolant values.
-   [test07.png](test07.png) a PNG image of the data and interpolant.

**TEST08** creates data files for a cubic spline interpolant to data set
7.

-   [test08\_data.txt](test08_data.txt) the data.
-   [test08\_approx.txt](test08_approx.txt) the interpolant values.
-   [test08.png](test08.png) a PNG image of the data and interpolant.

**TEST10** creates data files for a B-spline approximant to data set 7.

-   [test10\_data.txt](test10_data.txt) the data.
-   [test10\_approx.txt](test10_approx.txt) the approximant values.
-   [test10.png](test10.png) a PNG image of the data and approximant.

**TEST11** creates data files for a beta spline approximant to data set
7:

-   [test11\_data.txt](test11_data.txt) the data.
-   [test11\_approx.txt](test11_approx.txt) the approximant values.
-   [test11.png](test11.png) a PNG image of the data and approximant.

**TEST12** creates data files for a Bernstein approximant to data set 5.

-   [test12\_data.txt](test12_data.txt) the data.
-   [test12\_approx.txt](test12_approx.txt) the interpolant values.
-   [test12.png](test12.png) a PNG image of the data and approximant.

**TEST13** creates data files for a cubic spline interpolant to data set
5.

-   [test13\_data.txt](test13_data.txt) the data.
-   [test13\_approx.txt](test13_approx.txt) the interpolant values.
-   [test13.png](test13.png) a PNG image of the data and interpolant.

### List of Routines: {#list-of-routines align="center"}

-   **P00\_DAT** returns the data vector for any problem.
-   **P00\_DATA\_NUM** returns the dimension of the data vector for any
    problem.
-   **P00\_PROB\_NUM** returns the number of test problems.
-   **P00\_STORY** prints the "story" for any problem.
-   **P00\_TITLE** returns the title of any problem.
-   **P01\_DAT** returns the data vector for problem 1.
-   **P01\_DATA\_NUM** returns the dimension of the data vector for
    problem 1.
-   **P01\_STORY** prints the "story" for problem 1.
-   **P01\_TITLE** returns the title of problem 1.
-   **P02\_DAT** returns the data vector for problem 2.
-   **P02\_DATA\_NUM** returns the dimension of the data vector for
    problem 2.
-   **P02\_STORY** prints the "story" for problem 2.
-   **P02\_TITLE** returns the title of problem 2.
-   **P03\_DAT** returns the data vector for problem 3.
-   **P03\_DATA\_NUM** returns the dimension of the data vector for
    problem 3.
-   **P03\_STORY** prints the "story" for problem 3.
-   **P03\_TITLE** returns the title of problem 3.
-   **P04\_DAT** returns the data vector for problem 4.
-   **P04\_DATA\_NUM** returns the dimension of the data vector for
    problem 4.
-   **P04\_STORY** prints the "story" for problem 4.
-   **P04\_TITLE** returns the title of problem 4.
-   **P05\_DAT** returns the data vector for problem 5.
-   **P05\_DATA\_NUM** returns the dimension of the data vector for
    problem 5.
-   **P05\_STORY** prints the "story" for problem 5.
-   **P05\_TITLE** returns the title of problem 5.
-   **P06\_DAT** returns the data vector for problem 6.
-   **P06\_DATA\_NUM** returns the dimension of the data vector for
    problem 6.
-   **P06\_STORY** prints the "story" for problem 6.
-   **P06\_TITLE** returns the title of problem 6.
-   **P07\_DAT** returns the data vector for problem 7.
-   **P07\_DATA\_NUM** returns the dimension of the data vector for
    problem 7.
-   **P07\_STORY** prints the "story" for problem 7
-   **P07\_TITLE** returns the title of problem 7.
-   **P08\_DAT** returns the data vector for problem 8.
-   **P08\_DATA\_NUM** returns the dimension of the data vector for
    problem 8.
-   **P08\_STORY** prints the "story" for problem 8.
-   **P08\_TITLE** returns the title of problem 8.
-   **P09\_DAT** returns the data vector for problem 9.
-   **P09\_DATA\_NUM** returns the dimension of the data vector for
    problem 9.
-   **P09\_STORY** prints the "story" for problem 09
-   **P09\_TITLE** returns the title of problem 09.
-   **P10\_DAT** returns the data vector for problem 10.
-   **P10\_DATA\_NUM** returns the dimension of the data vector for
    problem 10.
-   **P10\_STORY** prints the "story" for problem 10.
-   **P10\_TITLE** returns the title of problem 10.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **R8VEC2\_WRITE** writes an R8VEC2 file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 February 2012.*
