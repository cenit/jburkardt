COMPASS\_SEARCH\
The Compass Search Optimization Algorithm {#compass_search-the-compass-search-optimization-algorithm align="center"}
=========================================

------------------------------------------------------------------------

**COMPASS\_SEARCH** is a C++ library which seeks the minimizer of a
scalar function of several variables using compass search, a direct
search algorithm that does not use derivatives.

The algorithm, which goes back to Fermi and Metropolis, is easy to
describe. The algorithm begins with a starting point X, and a step size
DELTA.

For each dimension I, the algorithm considers perturbing X(I) by adding
or subtracting DELTA.

If a perturbation is found which decreases the function, this becomes
the new X. Otherwise DELTA is halved.

The iteration halts when DELTA reaches a minimal value.

The algorithm is not guaranteed to find a global minimum. It can, for
instance, easily be attracted to a local minimum. Moreover, the
algorithm can diverge if, for instance, the function decreases as the
argument goes to infinity.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**COMPASS\_SEARCH** is available in [a C
version](../../c_src/compass_search/compass_search.html) and [a C++
version](../../cpp_src/compass_search/compass_search.html) and [a
FORTRAN77 version](../../f77_src/compass_search/compass_search.html) and
[a FORTRAN90 version](../../f_src/compass_search/compass_search.html)
and [a MATLAB version](../../m_src/compass_search/compass_search.html)
and [a Python version](../../py_src/compass_search/compass_search.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA047](../../cpp_src/asa047/asa047.html), a C++ library which
minimizes a scalar function of several variables using the Nelder-Mead
algorithm.

[ENTRUST](../../m_src/entrust/entrust.html), a MATLAB program which
minimizes a scalar function of several variables using trust-region
methods.

[NELDER\_MEAD](../../m_src/nelder_mead/nelder_mead.html), a MATLAB
program which minimizes a scalar function of several variables using the
Nelder-Mead algorithm.

[PRAXIS](../../f_src/praxis/praxis.html), a FORTRAN90 library which
implements the principal axis method of Richard Brent for minimization
of a function without the use of derivatives.

[TEST\_OPT](../../cpp_src/test_opt/test_opt.html), a C++ library which
defines test problems requiring the minimization of a scalar function of
several variables.

[TOMS178](../../cpp_src/toms178/toms178.html), a C++ library which
optimizes a scalar functional of multiple variables using the
Hooke-Jeeves method.

### Author: {#author align="center"}

John Burkardt

### Reference: {#reference align="center"}

1.  Evelyn Beale,\
    On an Iterative Method for Finding a Local Minimum of a Function of
    More than One Variable,\
    Technical Report 25,\
    Statistical Techniques Research Group,\
    Princeton University, 1958.
2.  Richard Brent,\
    Algorithms for Minimization without Derivatives,\
    Dover, 2002,\
    ISBN: 0-486-41998-3,\
    LC: QA402.5.B74.
3.  Charles Broyden,\
    A class of methods for solving nonlinear simultaneous equations,\
    Mathematics of Computation,\
    Volume 19, 1965, pages 577-593.
4.  David Himmelblau,\
    Applied Nonlinear Programming,\
    McGraw Hill, 1972,\
    ISBN13: 978-0070289215,\
    LC: T57.8.H55.
5.  Tamara Kolda, Robert Michael Lewis, Virginia Torczon,\
    Optimization by Direct Search: New Perspectives on Some Classical
    and Modern Methods,\
    SIAM Review,\
    Volume 45, Number 3, 2003, pages 385-482.
6.  Ken McKinnon,\
    Convergence of the Nelder-Mead simplex method to a nonstationary
    point,\
    SIAM Journal on Optimization,\
    Volume 9, Number 1, 1998, pages 148-158.
7.  Zbigniew Michalewicz,\
    Genetic Algorithms + Data Structures = Evolution Programs,\
    Third Edition,\
    Springer, 1996,\
    ISBN: 3-540-60676-9,\
    LC: QA76.618.M53.
8.  Jorge More, Burton Garbow, Kenneth Hillstrom,\
    Testing unconstrained optimization software,\
    ACM Transactions on Mathematical Software,\
    Volume 7, Number 1, March 1981, pages 17-41.
9.  Michael Powell,\
    An Iterative Method for Finding Stationary Values of a Function of
    Several Variables,\
    Computer Journal,\
    Volume 5, 1962, pages 147-151.
10. Howard Rosenbrock,\
    An Automatic Method for Finding the Greatest or Least Value of a
    Function,\
    Computer Journal,\
    Volume 3, 1960, pages 175-184.

### Source Code: {#source-code align="center"}

-   [compass\_search.cpp](compass_search.cpp), the source code.
-   [compass\_search.hpp](compass_search.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [compass\_search\_prb.cpp](compass_search_prb.cpp), a sample calling
    program.
-   [compass\_search\_prb\_output.txt](compass_search_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMPASS\_SEARCH** carries out a direct search minimization
    algorithm.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 January 2012.*
