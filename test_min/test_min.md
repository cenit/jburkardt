TEST\_MIN\
Test problems for minimization {#test_min-test-problems-for-minimization align="center"}
==============================

------------------------------------------------------------------------

**TEST\_MIN** is a C++ library which defines problems involving the
minimization of a scalar function of a scalar argument.

TEST\_MIN can be useful for testing algorithms that attempt to minimize
a scalar function of a scalar argument. Each problem has an index
number, and there are a corresponding set of routines, with names
beginning with the index number, to:

-   evaluate f(x);
-   evaluate f'(x);
-   evaluate f"(x);
-   return the title of the problem;
-   return a starting point;
-   return a starting search interval;
-   return the exact solution;

There is also a "generic" problem interface, whose routines all begin
with "P00". This allows the user to call all possible problems in a
single simple loop, by passing the desired index number through the
generic interface.

The functions can be invoked by an index number, and include:

1.  f(x) = ( x - 2 )\^2 + 1;\
    [a PNG image](p01_f.png);
2.  f(x) = x\^2 + exp ( -x );\
    [a PNG image](p02_f.png);
3.  f(x) = x\^4 + 2x\^2 + x + 3;\
    [a PNG image](p03_f.png);
4.  f(x) = exp ( x ) + 0.01 / x;\
    [a PNG image](p04_f.png);
5.  f(x) = exp ( x ) - 2 \* x + 0.01 / x - 0.000001 / x\^2;\
    [a PNG image](p05_f.png);
6.  f(x) = 2 - x;\
    [a PNG image](p06_f.png);
7.  f(x) = ( x + sin ( x ) ) \* exp ( -x\^2 );\
    [a PNG image](p07_f.png);
8.  f(x) = 3 \* x\^2 + 1 + ( log ( ( x - pi )\^2 ) ) / pi\^4;\
    [a PNG image](p08_f.png);
9.  f(x) = x\^2 - 10 sin ( x\^2 - 3x + 2);\
    [a PNG image](p09_f.png);
10. f(x) =
    cos(x)+5\*cos(1.6\*x)-2\*cos(2\*x)+5\*cos(4.5\*x)+7\*cos(9\*x);\
    [a PNG image](p10_f.png);
11. f(x) = 1+|3x-1|;\
    [a PNG image](p11_f.png);

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_MIN** is available in [a C
version](../../c_src/test_min/test_min.md) and [a C++
version](../../master/test_min/test_min.md) and [a FORTRAN77
version](../../f77_src/test_min/test_min.md) and [a FORTRAN90
version](../../f_src/test_min/test_min.md) and [a MATLAB
version](../../m_src/test_min/test_min.md) and [a Python
version](../../py_src/test_min/test_min.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BRENT](../../master/brent/brent.md), a C++ library which contains
Richard Brent's routines for finding the zero, local minimizer, or
global minimizer of a scalar function of a scalar argument, without the
use of derivative information.

### Reference: {#reference align="center"}

1.  Isabel Beichl, Dianne O'Leary, Francis Sullivan,\
    Monte Carlo Minimization and Counting: One, Two, Too Many,\
    Computing in Science and Engineering,\
    Volume 9, Number 1, January/February 2007.
2.  Richard Brent,\
    Algorithms for Minimization without Derivatives,\
    Dover, 2002,\
    ISBN: 0-486-41998-3,\
    LC: QA402.5.B74.
3.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.
4.  Arnold Krommer, Christoph Ueberhuber,\
    Numerical Integration on Advanced Computer Systems,\
    Springer, 1994,\
    ISBN: 3540584102,\
    LC: QA299.3.K76.
5.  Dianne O'Leary,\
    Scientific Computing with Case Studies,\
    SIAM, 2008,\
    ISBN13: 978-0-898716-66-5,\
    LC: QA401.O44.
6.  LE Scales,\
    Introduction to Non-Linear Optimization,\
    Springer, 1985,\
    ISBN: 0-387-91252-5,\
    LC: QA402.5.S33.

### Source Code: {#source-code align="center"}

-   [test\_min.cpp](test_min.cpp), the source code.
-   [test\_min.hpp](test_min.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_min\_prb.cpp](test_min_prb.cpp), a sample problem.
-   [test\_min\_prb\_output.txt](test_min_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **P00\_F** evaluates the function for any problem.
-   **P00\_F1** evaluates the first derivative for any problem.
-   **P00\_F1\_DIF** approximates the first derivative via finite
    differences.
-   **P00\_F2** evaluates the second derivative for any problem.
-   **P00\_F2\_DIF** approximates the second derivative via finite
    differences.
-   **P00\_FMIN** seeks a minimizer of a scalar function of a scalar
    variable.
-   **P00\_INTERVAL** returns a bracketing interval for any problem.
-   **P00\_PROBLEM\_NUM** returns the number of problems available.
-   **P00\_SOL** returns the solution for any problem.
-   **P00\_START** returns a starting point for optimization for any
    problem.
-   **P00\_TITLE** returns a title for any problem.
-   **P01\_F** evaluates the objective function for problem 1.
-   **P01\_F1** evaluates the first derivative for problem 1.
-   **P01\_F2** evaluates the second derivative for problem 1.
-   **P01\_INTERVAL** returns a starting interval for optimization for
    problem 1.
-   **P01\_SOL** returns the solution for problem 1.
-   **P01\_START** returns a starting point for optimization for
    problem 1.
-   **P01\_TITLE** returns a title for problem 1.
-   **P02\_F** evaluates the objective function for problem 2.
-   **P02\_F1** evaluates the first derivative for problem 2.
-   **P02\_F2** evaluates the second derivative for problem 2.
-   **P02\_INTERVAL** returns a starting interval for optimization for
    problem 2.
-   **P02\_SOL** returns the solution for problem 2.
-   **P02\_START** returns a starting point for optimization for
    problem 2.
-   **P02\_TITLE** returns a title for problem 2.
-   **P03\_F** evaluates the objective function for problem 3.
-   **P03\_F1** evaluates the first derivative for problem 3.
-   **P03\_F2** evaluates the second derivative for problem 3.
-   **P03\_INTERVAL** returns a starting interval for optimization for
    problem 3.
-   **P03\_SOL** returns the solution for problem 3.
-   **P03\_START** returns a starting point for optimization for
    problem 3.
-   **P03\_TITLE** returns a title for problem 3.
-   **P04\_F** evaluates the objective function for problem 4.
-   **P04\_F1** evaluates the first derivative for problem 4.
-   **P04\_F2** evaluates the second derivative for problem 4.
-   **P04\_INTERVAL** returns a starting interval for optimization for
    problem 4.
-   **P04\_SOL** returns the solution for problem 4.
-   **P04\_START** returns a starting point for optimization for
    problem 4.
-   **P04\_TITLE** returns a title for problem 4.
-   **P05\_F** evaluates the objective function for problem 5.
-   **P05\_F1** evaluates the first derivative for problem 5.
-   **P05\_F2** evaluates the second derivative for problem 5.
-   **P05\_INTERVAL** returns a starting interval for optimization for
    problem 5.
-   **P05\_SOL** returns the solution for problem 5.
-   **P05\_START** returns a starting point for optimization for
    problem 5.
-   **P05\_TITLE** returns a title for problem 5.
-   **P06\_F** evaluates the objective function for problem 6.
-   **P06\_F1** evaluates the first derivative for problem 6.
-   **P06\_F2** evaluates the second derivative for problem 6.
-   **P06\_INTERVAL** returns a starting interval for optimization for
    problem 6.
-   **P06\_SOL** returns the solution for problem 6.
-   **P06\_START** returns a starting point for optimization for
    problem 6.
-   **P06\_TITLE** returns a title for problem 6.
-   **P07\_F** evaluates the objective function for problem 7.
-   **P07\_F1** evaluates the first derivative for problem 7.
-   **P07\_F2** evaluates the second derivative for problem 7.
-   **P07\_INTERVAL** returns a starting interval for optimization for
    problem 7.
-   **P07\_SOL** returns the solution for problem 7.
-   **P07\_START** returns a starting point for optimization for
    problem 7.
-   **P07\_TITLE** returns a title for problem 7.
-   **P08\_F** evaluates the objective function for problem 8.
-   **P08\_F1** evaluates the first derivative for problem 8.
-   **P08\_F2** evaluates the second derivative for problem 8.
-   **P08\_INTERVAL** returns a starting interval for optimization for
    problem 8.
-   **P08\_SOL** returns the solution for problem 8.
-   **P08\_START** returns a starting point for optimization for
    problem 8.
-   **P08\_TITLE** returns a title for problem 8.
-   **P09\_F** evaluates the objective function for problem 9.
-   **P09\_F1** evaluates the first derivative for problem 9.
-   **P09\_F2** evaluates the second derivative for problem 9.
-   **P09\_INTERVAL** returns a starting interval for optimization for
    problem 9.
-   **P09\_SOL** returns the solution for problem 9.
-   **P09\_START** returns a starting point for optimization for
    problem 9.
-   **P09\_TITLE** returns a title for problem 9.
-   **P10\_F** evaluates the objective function for problem 10.
-   **P10\_F1** evaluates the first derivative for problem 10.
-   **P10\_F2** evaluates the second derivative for problem 10.
-   **P10\_INTERVAL** returns a starting interval for optimization for
    problem 10.
-   **P10\_SOL** returns the solution for problem 10.
-   **P10\_START** returns a starting point for optimization for
    problem 10.
-   **P10\_TITLE** returns a title for problem 10.
-   **P11\_F** evaluates the objective function for problem 11.
-   **P11\_F1** evaluates the first derivative for problem 11.
-   **P11\_F2** evaluates the second derivative for problem 11.
-   **P11\_INTERVAL** returns a starting interval for optimization for
    problem 11.
-   **P11\_SOL** returns the solution for problem 11.
-   **P11\_START** returns a starting point for optimization for
    problem 11.
-   **P11\_TITLE** returns a title for problem 11.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_SIGN** returns the sign of an R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 February 2009*
