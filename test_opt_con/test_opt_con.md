TEST\_OPT\_CON\
Test Functions for Scalar Optimization\
Constrained to a Hyper-Rectangle {#test_opt_con-test-functions-for-scalar-optimization-constrained-to-a-hyper-rectangle align="center"}
=======================================

------------------------------------------------------------------------

**TEST\_OPT\_CON** is a C++ library which defines a set of constrained
global optimization problems.

A typical constrained global optimization problem presents an
M-dimensional hyper-rectangle bounded by A(1:M) &lt;= X(1:M) &lt;=
B(1:M), and a scalar-valued function F(X). The task is to find a point X
within the hyper-rectangle at which the function takes its minimum
value.

This task is impossible, mathematically and in general. However, the
problems that can be solved mathematically are often not the ones
encountered in real life. Thus, it is useful to try to solve an
impossible problem, since an approximate answer to such a problem can be
all we can hope for or need.

The functions defined include:

1.  NM1: Niederreiter-McCurley function \#1, M = 4;
2.  NM2: Niederreiter-McCurley function \#2, M = 4;
3.  NM3: Niederreiter-McCurley function \#3, M = 4;
4.  NM4: Niederreiter-McCurley function \#4, M = 4;
5.  NM5: Niederreiter-McCurley function \#5, M = 4;
6.  NM6: Niederreiter-McCurley function \#6, M = 4;
7.  L02: Langerman function, M = 2;
8.  L10: Langerman function, M = 10;

For each function, the library includes a routine to evaluate the
function, but also routines to return the limits of the hyper-rectangle,
the spatial dimension, the solution, if known, and a title for the
problem. These routines have a standard set of names based on the
function index. For instance, for function \#3, we have the routines:

-   **P03\_AB** returns bounds for problem 3.
-   **P03\_F** returns the objective function value for problem 3.
-   **P03\_M** returns the spatial dimension for problem 3.
-   **P03\_SOL** returns known solutions for problem 3.
-   **P03\_TITLE** returns a title for problem 3.

Since the same interface is used for each function, if you wish to work
with problem 6 instead, you simply change the "03" to "06" in your
routine calls.

If you wish to call *all* of the functions, you can write a concise
program to do so by using the generic interface, in which the function
names use the prefix **P00\_**, and require the specific problem index
to be supplied as an extra input argument:

-   **P00\_AB** returns bounds for a problem specified by index.
-   **P00\_F** returns the objective function value for a problem
    specified by index.
-   **P00\_M** returns the spatial dimension for a problem specified by
    index.
-   **P00\_SOL** returns known solutions for a problem specified by
    index.
-   **P00\_TITLE** returns a title for a problem specified by index.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_OPT\_CON** is available in [a C
version](../../c_src/test_opt_con/test_opt_con.md) and [a C++
version](../../master/test_opt_con/test_opt_con.md) and [a FORTRAN77
version](../../f77_src/test_opt_con/test_opt_con.md) and [a FORTRAN90
version](../../f_src/test_opt_con/test_opt_con.md) and [a MATLAB
version](../../m_src/test_opt_con/test_opt_con.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA047](../../master/asa047/asa047.md), a C++ library which
minimizes a scalar function of several variables using the Nelder-Mead
algorithm.

[BRENT](../../master/brent/brent.md), a C++ library which contains
Richard Brent's routines for finding the zero, local minimizer, or
global minimizer of a scalar function of a scalar argument, without the
use of derivative information.

[COMPASS\_SEARCH](../../master/compass_search/compass_search.md), a
C++ program which minimizes a scalar function of several variables using
the compass search algorithm.

[PRAXIS](../../master/praxis/praxis.md), a C++ library which
implements the principal axis method of Richard Brent for minimization
of a function without the use of derivatives.

[TEST\_OPTIMIZATION](../../master/test_optimization/test_optimization.md),
a C++ library which defines test problems for the minimization of a
scalar function of several variables, as described by Molga and
Smutnicki.

[TOMS178](../../master/toms178/toms178.md), a C++ library which
optimizes a scalar functional of multiple variables using the
Hooke-Jeeves method.

### Reference: {#reference align="center"}

1.  Harald Niederreiter, Kevin McCurley,\
    Optimization of functions by quasi-random search methods,\
    Computing,\
    Volume 22, Number 2, 1979, pages 119-123.

### Source Code: {#source-code align="center"}

-   [test\_opt\_con.cpp](test_opt_con.cpp), the source code.
-   [test\_opt\_con.hpp](test_opt_con.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_opt\_con\_prb.cpp](test_opt_con_prb.cpp), a sample calling
    program.
-   [test\_opt\_con\_prb\_output.txt](test_opt_con_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **P00\_AB** returns bounds for a problem specified by index.
-   **P00\_F** returns the objective function value for a problem
    specified by index.
-   **P00\_M** returns the spatial dimension for a problem specified by
    index.
-   **P00\_PROBLEM\_NUM** returns the number of problems.
-   **P00\_SOL** returns known solutions for a problem specified by
    index.
-   **P00\_TITLE** returns a title for a problem specified by index.
-   **P01\_AB** returns bounds for problem 1.
-   **P01\_F** returns the objective function value for problem 1.
-   **P01\_M** returns the spatial dimension for problem 1.
-   **P01\_SOL** returns known solutions for problem 1.
-   **P01\_TITLE** returns a title for problem 1.
-   **P02\_AB** returns bounds for problem 2.
-   **P02\_F** returns the objective function value for problem 2.
-   **P02\_M** returns the spatial dimension for problem 2.
-   **P02\_SOL** returns known solutions for problem 2.
-   **P02\_TITLE** returns a title for problem 2.
-   **P03\_AB** returns bounds for problem 3.
-   **P03\_F** returns the objective function value for problem 3.
-   **P03\_M** returns the spatial dimension for problem 3.
-   **P03\_SOL** returns known solutions for problem 3.
-   **P03\_TITLE** returns a title for problem 3.
-   **P04\_AB** returns bounds for problem 4.
-   **P04\_F** returns the objective function value for problem 4.
-   **P04\_M** returns the spatial dimension for problem 4.
-   **P04\_SOL** returns known solutions for problem 4.
-   **P04\_TITLE** returns a title for problem 4.
-   **P05\_AB** returns bounds for problem 5.
-   **P05\_F** returns the objective function value for problem 5.
-   **P05\_M** returns the spatial dimension for problem 5.
-   **P05\_SOL** returns known solutions for problem 5.
-   **P05\_TITLE** returns a title for problem 5.
-   **P06\_AB** returns bounds for problem 6.
-   **P06\_F** returns the objective function value for problem 6.
-   **P06\_M** returns the spatial dimension for problem 6.
-   **P06\_SOL** returns known solutions for problem 6.
-   **P06\_TITLE** returns a title for problem 6.
-   **P07\_AB** returns bounds for problem 7.
-   **P07\_F** returns the objective function value for problem 5.
-   **P07\_M** returns the spatial dimension for problem 7.
-   **P07\_SOL** returns known solutions for problem 7.
-   **P07\_TITLE** returns a title for problem 7.
-   **P08\_AB** returns bounds for problem 8.
-   **P08\_F** returns the objective function value for problem 8.
-   **P08\_M** returns the spatial dimension for problem 8.
-   **P08\_SOL** returns known solutions for problem 8.
-   **P08\_TITLE** returns a title for problem 8.
-   **R8COL\_UNIFORM\_NEW** fills an R8COL with scaled pseudorandom
    numbers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 February 2012.*
