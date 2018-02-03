 {#section align="center"}

**TEST\_OPTIMIZATION**\
Test Functions for Optimization

------------------------------------------------------------------------

**TEST\_OPTIMIZATION** is a C++ library which defines test problems for
the scalar function optimization problem.

The scalar function optimization problem is to find a value for the
M-dimensional vector X which minimizes the value of the given scalar
function F(X).

A special feature of this library is that all the functions can be
defined for any dimension 1 &lt;= M.

The functions defined include:

1.  The sphere model;
2.  The axis-parallel hyper-ellipsoid function;
3.  The rotated hyper-ellipsoid function;
4.  Rosenbrock's valley;
5.  Rastrigin's function;
6.  Schwefel's function;
7.  Griewank's function;
8.  The power sum function;
9.  Ackley's function;
10. Michalewicz's function;
11. The drop wave function;
12. The deceptive function;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_OPTIMIZATION** is available in [a C
version](../../c_src/test_optimization/test_optimization.html) and [a
C++ version](../../cpp_src/test_optimization/test_optimization.html) and
[a FORTRAN77
version](../../f77_src/test_optimization/test_optimization.html) and [a
FORTRAN90 version](../../f_src/test_optimization/test_optimization.html)
and [a MATLAB
version](../../m_src/test_optimization/test_optimization.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA047](../../cpp_src/asa047/asa047.html), a C++ library which
minimizes a scalar function of several variables using the Nelder-Mead
algorithm.

[BRENT](../../cpp_src/brent/brent.html), a C++ library which contains
Richard Brent's routines for finding the zero, local minimizer, or
global minimizer of a scalar function of a scalar argument, without the
use of derivative information.

[COMPASS\_SEARCH](../../cpp_src/compass_search/compass_search.html), a
C++ library which seeks the minimizer of a scalar function of several
variables using compass search, a direct search algorithm that does not
use derivatives.

[PRAXIS](../../cpp_src/praxis/praxis.html), a C++ library which
minimizes a scalar function of several variables.

[TEST\_OPT\_CON](../../cpp_src/test_opt_con/test_opt_con.html), a C++
library which defines test problems for the minimization of a scalar
function of several variables, with the search constrained to lie within
a specified hyper-rectangle.

### Reference: {#reference align="center"}

1.  Marcin Molga, Czeslaw Smutnicki,\
    Test functions for optimization needs.
2.  David Ackley,\
    A connectionist machine for genetic hillclimbing,\
    Springer, 1987,\
    ISBN13: 978-0898382365,\
    LC: Q336.A25.
3.  Hugues Bersini, Marco Dorigo, Stefan Langerman, Gregory Seront, Luca
    Gambardella,\
    Results of the first international contest on evolutionary
    optimisation,\
    In Proceedings of 1996 IEEE International Conference on Evolutionary
    Computation,\
    IEEE Press, pages 611-615, 1996.
4.  Laurence Dixon, Gabor Szego,\
    The optimization problem: An introduction,\
    in Towards Global Optimisation,\
    edited by Laurence Dixon, Gabor Szego,\
    North-Holland, 1975,\
    ISBN: 0444109552,\
    LC: QA402.5.T7.
5.  Zbigniew Michalewicz,\
    Genetic Algorithms + Data Structures = Evolution Programs,\
    Third Edition,\
    Springer, 1996,\
    ISBN: 3-540-60676-9,\
    LC: QA76.618.M53.
6.  Leonard Rastrigin,\
    Extremal control systems,\
    in Theoretical Foundations of Engineering Cybernetics Series,\
    Moscow: Nauka, Russian, 1974.
7.  Howard Rosenbrock,\
    An Automatic Method for Finding the Greatest or Least Value of a
    Function,\
    Computer Journal,\
    Volume 3, 1960, pages 175-184.
8.  Hans-Paul Schwefel,\
    Numerical optimization of computer models,\
    Wiley, 1981,\
    ISBN13: 978-0471099888,\
    LC: QA402.5.S3813.
9.  Bruno Shubert,\
    A sequential method seeking the global maximum of a function,\
    SIAM Journal on Numerical Analysis,\
    Volume 9, pages 379-388, 1972.
10. Aimo Toern, Antanas Zilinskas,\
    Global Optimization,\
    Lecture Notes in Computer Science, Number 350,\
    Springer, 1989,\
    ISBN13: 978-0387508719,\
    LC: QA402.T685

### Source Code: {#source-code align="center"}

-   [test\_optimization.cpp](test_optimization.cpp), the source code.
-   [test\_optimization.hpp](test_optimization.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_optimization\_prb.cpp](test_optimization_prb.cpp), a sample
    calling program.
-   [test\_optimization\_prb\_output.txt](test_optimization_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **P00\_AB** evaluates the limits of the optimization region for any
    problem.
-   **P00\_COMPASS\_SEARCH** carries out a direct search minimization
    algorithm.
-   **P00\_F** evaluates the objective function for any problem.
-   **P00\_PROBLEM\_NUM** returns the number of problems available.
-   **P00\_SOL** returns the solution for any problem.
-   **P00\_TITLE** returns a title for any problem.
-   **P01\_AB** evaluates the limits of the optimization region for
    problem 01.
-   **P01\_F** evaluates the objective function for problem 01.
-   **P01\_SOL** returns the solution for problem 01.
-   **P01\_TITLE** returns a title for problem 01.
-   **P02\_AB** evaluates the limits of the optimization region for
    problem 02.
-   **P02\_F** evaluates the objective function for problem 02.
-   **P02\_SOL** returns the solution for problem 02.
-   **P02\_TITLE** returns a title for problem 02.
-   **P03\_AB** evaluates the limits of the optimization region for
    problem 03.
-   **P03\_F** evaluates the objective function for problem 03.
-   **P03\_SOL** returns the solution for problem 03.
-   **P03\_TITLE** returns a title for problem 03.
-   **P04\_AB** evaluates the limits of the optimization region for
    problem 04.
-   **P04\_F** evaluates the objective function for problem 04.
-   **P04\_SOL** returns the solution for problem 04.
-   **P04\_TITLE** returns a title for problem 04.
-   **P05\_AB** evaluates the limits of the optimization region for
    problem 05.
-   **P05\_F** evaluates the objective function for problem 05.
-   **P05\_SOL** returns the solution for problem 05.
-   **P05\_TITLE** returns a title for problem 05.
-   **P06\_AB** evaluates the limits of the optimization region for
    problem 06.
-   **P06\_F** evaluates the objective function for problem 06.
-   **P06\_SOL** returns the solution for problem 06.
-   **P06\_TITLE** returns a title for problem 06.
-   **P07\_AB** evaluates the limits of the optimization region for
    problem 07.
-   **P07\_F** evaluates the objective function for problem 07.
-   **P07\_SOL** returns the solution for problem 07.
-   **P07\_TITLE** returns a title for problem 07.
-   **P08\_AB** evaluates the limits of the optimization region for
    problem 08.
-   **P08\_F** evaluates the objective function for problem 08.
-   **P08\_SOL** returns the solution for problem 08.
-   **P08\_TITLE** returns a title for problem 08.
-   **P09\_AB** evaluates the limits of the optimization region for
    problem 09.
-   **P09\_F** evaluates the objective function for problem 09.
-   **P09\_SOL** returns the solution for problem 09.
-   **P09\_TITLE** returns a title for problem 09.
-   **P10\_AB** evaluates the limits of the optimization region for
    problem 10.
-   **P10\_F** evaluates the objective function for problem 10.
-   **P10\_SOL** returns the solution for problem 10.
-   **P10\_TITLE** returns a title for problem 10.
-   **P11\_AB** evaluates the limits of the optimization region for
    problem 11.
-   **P11\_F** evaluates the objective function for problem 11.
-   **P11\_SOL** returns the solution for problem 11.
-   **P11\_TITLE** returns a title for problem 11.
-   **P12\_AB** evaluates the limits of the optimization region for
    problem 12.
-   **P12\_F** evaluates the objective function for problem 12.
-   **P12\_SOL** returns the solution for problem 12.
-   **P12\_TITLE** returns a title for problem 12.
-   **R8COL\_UNIFORM** fills an R8COL with scaled pseudorandom numbers.
-   **R8VEC\_INDICATOR** sets an R8VEC to the indicator vector.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 February 2012.*
