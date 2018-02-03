TEST\_NINT\
Multi-dimensional Integration\
Test Functions. {#test_nint-multi-dimensional-integration-test-functions. align="center"}
==============================

------------------------------------------------------------------------

**TEST\_NINT** is a C++ library which defines a set of test problems for
the approximate computation of integrals over multi-dimensional regions.

Routines are available to evaluate the integrand, return the exact value
of the integral, report the name of the problem, report the integration
limits, get, set or modify a base point.

The integrands is assigned an index. The integrands can be invoked by
index. Most integrands may be defined for any value of the spatial
dimension, which we denote here by **m**. Most integrands are defined on
the unit **m**-dimensional hypercube. Some integrands include one or
more parameters. These generally have default values, which can be
altered by the user.

For each problem, a set of routines are available with a standard
interface, for manipulating and evaluating the problem. For a problem
with index "87", for instance, we might have the following set of
routines. The most important is **P87\_F** which evaluates the
integrand. We probably also need **P87\_LIM** to determine the limits of
integration, and **P87\_EXACT** to get the exact value of the integral
(if known). A number of routines are available to set, get, or randomize
parameters associated with the problem.

-   **P87\_DEFAULT** sets default values for problem 87.
-   **P87\_EXACT** returns the exact integral for problem 87.
-   **P87\_F** evaluates the integrand for problem 87.
-   **P87\_I4** sets or gets integer scalar parameters for problem 87.
-   **P87\_I4VEC** sets or gets integer vector parameters for
    problem 87.
-   **P87\_LIM** returns the integration limits for problem 87.
-   **P87\_NAME** returns the name of problem 87.
-   **P87\_R8** sets or gets real scalar parameters for problem 87.
-   **P87\_R8VEC** sets or gets real vector parameters for problem 87.
-   **P87\_REGION** returns the name of the integration region for
    problem 87.
-   **P87\_TITLE** prints a title for problem 87.

The list of integrand functions includes:

1.  f(x) = ( sum ( x(1:m) ) )\*\*2;
2.  f(x) = ( sum ( 2 \* x(1:m) - 1 ) )\*\*4;
3.  f(x) = ( sum ( x(1:m) ) )\*\*5;
4.  f(x) = ( sum ( 2 \* x(1:m) - 1 ) )\*\*6;
5.  f(x) = 1 / ( 1 + sum ( 2 \* x(1:m) ) );
6.  f(x) = product ( 2 \* abs ( 2 \* x(1:m) - 1 ) );
7.  f(x) = product ( pi / 2 ) \* sin ( pi \* x(1:m) );
8.  f(x) = ( sin ( (pi/4) \* sum ( x(1:m) ) ) )\*\*2;
9.  f(x) = exp ( sum ( c(1:m) \* x(1:m) ) );
10. f(x) = sum ( abs ( x(1:m) - 0.5 ) );
11. f(x) = exp ( sum ( abs ( 2 \* x(1:m) - 1 ) ) );
12. f(x) = product ( 1 &lt;= i &lt;= m ) ( i \* cos ( i \* x(i) ) );
13. f(x) = product ( 1 &lt;= i &lt;= m ) t(n(i))(x(i)), t(n(i)) is a
    Chebyshev polynomial;
14. f(x) = sum ( 1 &lt;= i &lt;= m ) (-1)\*\*i \* product ( 1 &lt;= j
    &lt;= i ) x(j);
15. f(x) = product ( 1 &lt;= i &lt;= order ) x(mod(i-1,m)+1);
16. f(x) = sum ( abs ( x(1:m) - x0(1:m) ) );
17. f(x) = sum ( ( x(1:m) - x0(1:m) )\*\*2 );
18. f(x) = 1 inside an m-dimensional sphere around x0(1:m), 0 outside;
19. f(x) = product ( sqrt ( abs ( x(1:m) - x0(1:m) ) ) );
20. f(x) = ( sum ( x(1:m) ) )\*\*power;
21. f(x) = c \* product ( x(1:m)\^e(1:m) ) on the surface of an
    m-dimensional unit sphere;
22. f(x) = c \* product ( x(1:m)\^e(1:m) ) in an m-dimensional ball;
23. f(x) = c \* product ( x(1:m)\^e(1:m) ) in the unit m-dimensional
    simplex;
24. f(x) = product ( abs ( 4 \* x(1:m) - 2 ) + c(1:m) ) / ( 1 + c(1:m) )
    );
25. f(x) = exp ( c \* product ( x(1:m) ) );
26. f(x) = product ( c(1:m) \* exp ( - c(1:m) \* x(1:m) ) );
27. f(x) = cos ( 2 \* pi \* r + sum ( c(1:m) \* x(1:m) ) ),\
    Genz "Oscillatory";
28. f(x) = 1 / product ( c(1:m)\*\*2 + (x(1:m) - x0(1:m))\*\*2),\
    Genz "Product Peak";
29. f(x) = 1 / ( 1 + sum ( c(1:m) \* x(1:m) ) )\*\*(m+r),\
    Genz "Corner Peak";
30. f(x) = exp(-sum(c(1:m)\*\*2 \* ( x(1:m) - x0(1:m))\*\*2 ) ),\
    Genz "Gaussian";
31. f(x) = exp ( - sum ( c(1:m) \* abs ( x(1:m) - x0(1:m) ) ) ), Genz
    "Continuous";
32. f(x) = exp(sum(c(1:m)\*x(1:m)) for x(1:m) &lt;= x0(1:m), 0
    otherwise,\
    Genz "Discontinuous";

### An Important Quote: {#an-important-quote align="center"}

> *"When good results are obtained in integrating a high-dimensional
> function, we should conclude first of all that an especially tractable
> integrand was tried and not that a generally successful method has
> been found. A secondary conclusion is that we might have made a very
> good choice in selecting an integration method to exploit whatever
> features of f made it tractable."*

Art Owen,\
Latin Supercube Sampling for Very High Dimensional Simulation,\
ACM Transactions on Modeling and Computer Simulations,\
Volume 8, Number 1, January 1998, pages 71-102.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_NINT** is available in [a C++
version](../../cpp_src/test_nint/test_nint.html) and [a FORTRAN90
version](../../f_src/test_nint/test_nint.html) and [a MATLAB
version](../../m_src/test_nint/test_nint.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CLENSHAW\_CURTIS\_RULE](../../cpp_src/clenshaw_curtis_rule/clenshaw_curtis_rule.html),
a C++ library which sets a Clenshaw Curtis quadrature grid in multiple
dimensions.

[GSL](../../cpp_src/gsl/gsl.html), a C++ library which includes routines
for estimating multidimensional integrals.

[INTEGRAL\_TEST](../../f_src/integral_test/integral_test.html), a
FORTRAN90 program which uses some of these test integrals to evaluate
sets of quadrature points.

[NINT\_EXACTNESS](../../cpp_src/nint_exactness/nint_exactness.html), a
C++ program which measures the polynomial exactness of a
multidimensional quadrature rule.

[NINTLIB](../../cpp_src/nintlib/nintlib.html), a C++ library which
numerically estimates integrals in multiple dimensions.

[PRODUCT\_RULE](../../cpp_src/product_rule/product_rule.html), a C++
program which creates a multidimensional quadrature rule as a product of
one dimensional rules.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.html),
a dataset directory which contains a description and examples of
quadrature rules defined by a set of "X", "W" and "R" files.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TESTPACK](../../cpp_src/testpack/testpack.html), a C++ library which
defines a set of integrands used to test multidimensional quadrature.

### Reference: {#reference align="center"}

1.  JD Beasley, SG Springer,\
    Algorithm AS 111: The Percentage Points of the Normal Distribution,\
    Applied Statistics,\
    Volume 26, 1977, pages 118-121.
2.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low-Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, July 1992, pages 195-213.
3.  Roger Broucke,\
    Algorithm 446: Ten Subroutines for the Manipulation of Chebyshev
    Series,\
    Communications of the ACM,\
    Volume 16, 1973, pages 254-256.
4.  William Cody, Kenneth Hillstrom,\
    Chebyshev Approximations for the Natural Logarithm of the Gamma
    Function, Mathematics of Computation,\
    Volume 21, Number 98, April 1967, pages 198-203.
5.  Richard Crandall,\
    Projects in Scientific Computing,\
    Springer, 2005,\
    ISBN: 0387950095,\
    LC: Q183.9.C733.
6.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
7.  Gerald Folland,\
    How to Integrate a Polynomial Over a Sphere,\
    American Mathematical Monthly,\
    Volume 108, Number 5, May 2001, pages 446-448.
8.  Leslie Fox, Ian Parker,\
    Chebyshev Polynomials in Numerical Analysis,\
    Oxford Press, 1968,\
    LC: QA297.F65.
9.  Alan Genz,\
    Testing Multidimensional Integration Routines,\
    in Tools, Methods, and Languages for Scientific and Engineering
    Computation,\
    edited by B Ford, JC Rault, F Thomasset,\
    North-Holland, 1984, pages 81-94,\
    ISBN: 0444875700,\
    LC: Q183.9.I53.
10. Alan Genz,\
    A Package for Testing Multiple Integration Subroutines,\
    in Numerical Integration: Recent Developments, Software and
    Applications,\
    edited by Patrick Keast, Graeme Fairweather,\
    Reidel, 1987, pages 337-340,\
    ISBN: 9027725144,\
    LC: QA299.3.N38.
11. Kenneth Hanson,\
    Quasi-Monte Carlo: halftoning in high dimensions?\
    in Computatinal Imaging,\
    Edited by CA Bouman, RL Stevenson,\
    Proceedings SPIE,\
    Volume 5016, 2003, pages 161-172.
12. John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thatcher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
13. Claude Itzykson, Jean-Michel Drouffe,\
    Statistical Field Theory,\
    Volume 1,\
    Cambridge, 1991,\
    ISBN: 0-521-40806-7,\
    LC: QC174.8.I89.
14. Stephen Joe, Frances Kuo\
    Remark on Algorithm 659: Implementing Sobol's Quasirandom Sequence
    Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 29, Number 1, March 2003, pages 49-57.
15. David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.
16. Bradley Keister,\
    Multidimensional Quadrature Algorithms,\
    Computers in Physics,\
    Volume 10, Number 2, March/April, 1996, pages 119-122.
17. Arnold Krommer, Christoph Ueberhuber,\
    Numerical Integration on Advanced Compuer Systems,\
    Springer, 1994,\
    ISBN: 3540584102,\
    LC: QA299.3.K76.
18. Anargyros Papageorgiou, Joseph Traub,\
    Faster Evaluation of Multidimensional Integrals,\
    Computers in Physics,\
    Volume 11, Number 6, November/December 1997, pages 574-578.
19. Thomas Patterson,\
    On the Construction of a Practical Ermakov-Zolotukhin Multiple
    Integrator,\
    in Numerical Integration: Recent Developments, Software and
    Applications,\
    edited by Patrick Keast and Graeme Fairweather,\
    D. Reidel, 1987, pages 269-290.
20. Arthur Stroud,\
    Approximate Calculation of Multiple Integrals,\
    Prentice Hall, 1971,\
    ISBN: 0130438936,\
    LC: QA311.S85.
21. Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
22. Xiaoqun Wang, Kai-Tai Fang,\
    The Effective Dimension and quasi-Monte Carlo Integration,\
    Journal of Complexity,\
    Volume 19, pages 101-124, 2003.

### Source Code: {#source-code align="center"}

-   [test\_nint.cpp](test_nint.cpp), the source code.
-   [test\_nint.hpp](test_nint.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_nint\_prb.cpp](test_nint_prb.cpp), a sample problem.
-   [test\_nint\_prb\_output.txt](test_nint_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CSEVL** evaluates an N term Chebyshev series.
-   **ERROR\_F** computes the error function.
-   **ERROR\_FC** computes the complementary error function.
-   **GAMMA\_LOG** calculates the natural logarithm of GAMMA ( X ) for
    positive X.
-   **GET\_PROBLEM\_NUM** returns the number of test integration
    problems.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_POWER** returns the value of I\^J.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **INITS** estimates the order of an orthogonal series for a given
    accuracy.
-   **NORMAL\_01\_CDF\_INV** inverts the Normal 01 CDF.
-   **P00\_BOX\_GL05** uses Gauss-Legendre quadrature in an
    N-dimensional box.
-   **P00\_BOX\_MC** integrates over an multi-dimensional box using
    Monte Carlo.
-   **P00\_DEFAULT** sets a problem to a default state.
-   **P00\_EXACT** returns the exact integral for any problem.
-   **P00\_F** evaluates the integrand for any problem.
-   **P00\_I4** sets or gets I4 parameters for any problem.
-   **P00\_LIM** returns the integration limits for any problem.
-   **P00\_NAME** returns the name of the problem.
-   **P00\_R8VEC** sets or gets R8VEC parameters for any problem.
-   **P00\_REGION** returns the name of the integration region for any
    problem.
-   **P00\_REMAP01** remaps points in \[0,1\]\^DIM\_NUM into
    \[A(1:DIM\_NUM),B(1:DIM\_NUM)\].
-   **P00\_TITLE** prints a title for any problem.
-   **P00\_VOLUME** returns the volume of the integration region.
-   **P01\_DEFAULT** sets default values for problem 01.
-   **P01\_EXACT** returns the exact integral for problem 01.
-   **P01\_F** evaluates the integrand for problem 01.
-   **P01\_I4** sets or gets I4 parameters for problem 01.
-   **P01\_LIM** returns the integration limits for problem 01.
-   **P01\_NAME** returns the name of problem 01.
-   **P01\_REGION** returns the name of the integration region for
    problem 01.
-   **P01\_TITLE** prints a title for problem 01.
-   **P02\_DEFAULT** sets default values for problem 02.
-   **P02\_EXACT** returns the exact integral for problem 02.
-   **P02\_F** evaluates the integrand for problem 02.
-   **P02\_I4** sets or gets I4 parameters for problem 02.
-   **P02\_LIM** returns the integration limits for problem 02.
-   **P02\_NAME** returns the name of problem 02.
-   **P02\_REGION** returns the name of the integration region for
    problem 02.
-   **P02\_TITLE** prints a title for problem 02.
-   **P03\_DEFAULT** sets default values for problem 03.
-   **P03\_EXACT** returns the exact integral for problem 03.
-   **P03\_F** evaluates the integrand for problem 03.
-   **P03\_I4** sets or gets I4 parameters for problem 03.
-   **P03\_LIM** returns the integration limits for problem 03.
-   **P03\_NAME** returns the name of problem 03.
-   **P03\_REGION** returns the name of the integration region for
    problem 03.
-   **P03\_TITLE** prints a title for problem 03.
-   **P04\_DEFAULT** sets default values for problem 04.
-   **P04\_EXACT** returns the exact integral for problem 04.
-   **P04\_F** evaluates the integrand for problem 04.
-   **P04\_I4** sets or gets I4 parameters for problem 04.
-   **P04\_LIM** returns the integration limits for problem 04.
-   **P04\_NAME** returns the name of problem 04.
-   **P04\_REGION** returns the name of the integration region for
    problem 04.
-   **P04\_TITLE** prints a title for problem 04.
-   **P05\_DEFAULT** sets default values for problem 05.
-   **P05\_EXACT** returns the exact integral for problem 05.
-   **P05\_F** evaluates the integrand for problem 05.
-   **P05\_I4** sets or gets I4 parameters for problem 05.
-   **P05\_LIM** returns the integration limits for problem 05.
-   **P05\_NAME** returns the name of problem 05.
-   **P05\_REGION** returns the name of the integration region for
    problem 05.
-   **P05\_TITLE** prints a title for problem 05.
-   **P06\_DEFAULT** sets default values for problem 06.
-   **P06\_EXACT** returns the exact integral for problem 06.
-   **P06\_F** evaluates the integrand for problem 06.
-   **P06\_I4** sets or gets I4 parameters for problem 06.
-   **P06\_LIM** returns the integration limits for problem 06.
-   **P06\_NAME** returns the name of problem 06.
-   **P06\_REGION** returns the name of the integration region for
    problem 06.
-   **P06\_TITLE** prints a title for problem 06.
-   **P07\_DEFAULT** sets default values for problem 07.
-   **P07\_EXACT** returns the exact integral for problem 07.
-   **P07\_F** evaluates the integrand for problem 07.
-   **P07\_I4** sets or gets I4 parameters for problem 07.
-   **P07\_LIM** returns the integration limits for problem 07.
-   **P07\_NAME** returns the name of problem 07.
-   **P07\_REGION** returns the name of the integration region for
    problem 07.
-   **P07\_TITLE** prints a title for problem 07.
-   **P08\_DEFAULT** sets default values for problem 08.
-   **P08\_EXACT** returns the exact integral for problem 08.
-   **P08\_F** evaluates the integrand for problem 08.
-   **P08\_I4** sets or gets I4 parameters for problem 08.
-   **P08\_LIM** returns the integration limits for problem 08.
-   **P08\_NAME** returns the name of problem 08.
-   **P08\_REGION** returns the name of the integration region for
    problem 08.
-   **P08\_TITLE** prints a title for problem 08.
-   **P09\_DEFAULT** sets default values for problem 09.
-   **P09\_EXACT** returns the exact integral for problem 09.
-   **P09\_F** evaluates the integrand for problem 09.
-   **P09\_I4** sets or gets I4 parameters for problem 09.
-   **P09\_LIM** returns the integration limits for problem 09.
-   **P09\_NAME** returns the name of problem 09.
-   **P09\_R8VEC** sets or gets R8VEC parameters for problem 09.
-   **P09\_REGION** returns the name of the integration region for
    problem 09.
-   **P09\_TITLE** prints a title for problem 09.
-   **P10\_DEFAULT** sets default values for problem 10.
-   **P10\_EXACT** returns the exact integral for problem 10.
-   **P10\_F** evaluates the integrand for problem 10.
-   **P10\_I4** sets or gets I4 parameters for problem 10.
-   **P10\_LIM** returns the integration limits for problem 10.
-   **P10\_NAME** returns the name of problem 10.
-   **P10\_REGION** returns the name of the integration region for
    problem 10.
-   **P10\_TITLE** prints a title for problem 10.
-   **P11\_DEFAULT** sets default values for problem 11.
-   **P11\_EXACT** returns the exact integral for problem 11.
-   **P11\_F** evaluates the integrand for problem 11.
-   **P11\_I4** sets or gets I4 parameters for problem 11.
-   **P11\_LIM** returns the integration limits for problem 11.
-   **P11\_NAME** returns the name of problem 11.
-   **P11\_REGION** returns the name of the integration region for
    problem 11.
-   **P11\_TITLE** prints a title for problem 11.
-   **P12\_DEFAULT** sets default values for problem 12.
-   **P12\_EXACT** returns the exact integral for problem 12.
-   **P12\_F** evaluates the integrand for problem 12.
-   **P12\_I4** sets or gets I4 parameters for problem 12.
-   **P12\_LIM** returns the integration limits for problem 12.
-   **P12\_NAME** returns the name of problem 12.
-   **P12\_REGION** returns the name of the integration region for
    problem 12.
-   **P12\_TITLE** prints a title for problem 12.
-   **P13\_DEFAULT** sets default values for problem 13.
-   **P13\_EXACT** returns the exact integral for problem 13.
-   **P13\_F** evaluates the integrand for problem 13.
-   **P13\_I4** sets or gets I4 parameters for problem 13.
-   **P13\_LIM** returns the integration limits for problem 13.
-   **P13\_NAME** returns the name of problem 13.
-   **P13\_REGION** returns the name of the integration region for
    problem 13.
-   **P13\_TITLE** prints a title for problem 13.
-   **P14\_DEFAULT** sets default values for problem 14.
-   **P14\_EXACT** returns the exact integral for problem 14.
-   **P14\_F** evaluates the integrand for problem 14.
-   **P14\_I4** sets or gets I4 parameters for problem 14.
-   **P14\_LIM** returns the integration limits for problem 14.
-   **P14\_NAME** returns the name of problem 14.
-   **P14\_REGION** returns the name of the integration region for
    problem 14.
-   **P14\_TITLE** prints a title for problem 14.
-   **P15\_DEFAULT** sets default values for problem 15.
-   **P15\_EXACT** returns the exact integral for problem 15.
-   **P15\_F** evaluates the integrand for problem 15.
-   **P15\_I4** sets or gets I4 parameters for problem 15.
-   **P15\_LIM** returns the integration limits for problem 15.
-   **P15\_NAME** returns the name of problem 15.
-   **P15\_REGION** returns the name of the integration region for
    problem 15.
-   **P15\_TITLE** prints a title for problem 15.
-   **P16\_DEFAULT** sets default values for problem 16.
-   **P16\_EXACT** returns the exact integral for problem 16.
-   **P16\_F** evaluates the integrand for problem 16.
-   **P16\_I4** sets or gets I4 parameters for problem 16.
-   **P16\_LIM** returns the integration limits for problem 16.
-   **P16\_NAME** returns the name of problem 16.
-   **P16\_R8VEC** sets or gets R8VEC parameters for problem 16.
-   **P16\_REGION** returns the name of the integration region for
    problem 16.
-   **P16\_TITLE** prints a title for problem 16.
-   **P17\_DEFAULT** sets default values for problem 17.
-   **P17\_EXACT** returns the exact integral for problem 17.
-   **P17\_F** evaluates the integrand for problem 17.
-   **P17\_I4** sets or gets I4 parameters for problem 17.
-   **P17\_LIM** returns the integration limits for problem 17.
-   **P17\_NAME** returns the name of problem 17.
-   **P17\_R8VEC** sets or gets R8VEC parameters for problem 17.
-   **P17\_REGION** returns the name of the integration region for
    problem 17.
-   **P17\_TITLE** prints a title for problem 17.
-   **P18\_DEFAULT** sets default values for problem 18.
-   **P18\_EXACT** returns the exact integral for problem 18.
-   **P18\_F** evaluates the integrand for problem 18.
-   **P18\_I4** sets or gets I4 parameters for problem 18.
-   **P18\_LIM** returns the integration limits for problem 18.
-   **P18\_NAME** returns the name of problem 18.
-   **P18\_R8** sets or gets R8 parameters for problem 18.
-   **P18\_R8VEC** sets or gets R8VEC parameters for problem 18.
-   **P18\_REGION** returns the name of the integration region for
    problem 18.
-   **P18\_TITLE** prints a title for problem 18.
-   **P19\_DEFAULT** sets default values for problem 19.
-   **P19\_EXACT** returns the exact integral for problem 19.
-   **P19\_F** evaluates the integrand for problem 19.
-   **P19\_I4** sets or gets I4 parameters for problem 19.
-   **P19\_LIM** returns the integration limits for problem 19.
-   **P19\_NAME** returns the name of problem 19.
-   **P19\_R8VEC** sets or gets R8VEC parameters for problem 19.
-   **P19\_REGION** returns the name of the integration region for
    problem 19.
-   **P19\_TITLE** prints a title for problem 19.
-   **P20\_DEFAULT** sets default values for problem 20.
-   **P20\_EXACT** returns the exact integral for problem 20.
-   **P20\_F** evaluates the integrand for problem 20.
-   **P20\_I4** sets or gets I4 parameters for problem 20.
-   **P20\_LIM** returns the integration limits for problem 20.
-   **P20\_NAME** returns the name of problem 20.
-   **P20\_R8** sets or gets R8 parameters for problem 20.
-   **P20\_REGION** returns the name of the integration region for
    problem 20.
-   **P20\_TITLE** prints a title for problem 20.
-   **P21\_DEFAULT** sets default values for problem 21.
-   **P21\_EXACT** returns the exact integral for problem 21.
-   **P21\_F** evaluates the integrand for problem 21.
-   **P21\_I4** sets or gets I4 parameters for problem 21.
-   **P21\_I4VEC** sets or gets I4VEC parameters for problem 21.
-   **P21\_LIM** returns the integration limits for problem 21.
-   **P21\_NAME** returns the name of problem 21.
-   **P21\_R8** sets or gets R8 parameters for problem 21.
-   **P21\_REGION** returns the name of the integration region for
    problem 21.
-   **P21\_TITLE** prints a title for problem 21.
-   **P22\_DEFAULT** sets default values for problem 22.
-   **P22\_EXACT** returns the exact integral for problem 22.
-   **P22\_F** evaluates the integrand for problem 22.
-   **P22\_I4** sets or gets I4 parameters for problem 22.
-   **P22\_I4VEC** sets or gets I4VEC parameters for problem 22.
-   **P22\_LIM** returns the integration limits for problem 22.
-   **P22\_NAME** returns the name of problem 22.
-   **P22\_R8** sets or gets R8 parameters for problem 22.
-   **P22\_REGION** returns the name of the integration region for
    problem 22.
-   **P22\_TITLE** prints a title for problem 22.
-   **P23\_DEFAULT** sets default values for problem 23.
-   **P23\_EXACT** returns the exact integral for problem 23.
-   **P23\_F** evaluates the integrand for problem 23.
-   **P23\_I4** sets or gets I4 parameters for problem 23.
-   **P23\_I4VEC** sets or gets I4VEC parameters for problem 23.
-   **P23\_LIM** returns the integration limits for problem 23.
-   **P23\_NAME** returns the name of problem 23.
-   **P23\_R8** sets or gets R8 parameters for problem 23.
-   **P23\_REGION** returns the name of the integration region for
    problem 23.
-   **P23\_TITLE** prints a title for problem 23.
-   **P24\_DEFAULT** sets default values for problem 24.
-   **P24\_EXACT** returns the exact integral for problem 24.
-   **P24\_F** evaluates the integrand for problem 24.
-   **P24\_I4** sets or gets I4 parameters for problem 24.
-   **P24\_LIM** returns the integration limits for problem 24.
-   **P24\_NAME** returns the name of problem 24.
-   **P24\_R8VEC** sets or gets R8VEC parameters for problem 24.
-   **P24\_REGION** returns the name of the integration region for
    problem 24.
-   **P24\_TITLE** prints a title for problem 24.
-   **P25\_DEFAULT** sets default values for problem 25.
-   **P25\_EXACT** returns the exact integral for problem 25.
-   **P25\_F** evaluates the integrand for problem 25.
-   **P25\_I4** sets or gets I4 parameters for problem 25.
-   **P25\_LIM** returns the integration limits for problem 25.
-   **P25\_NAME** returns the name of problem 25.
-   **P25\_R8** sets or gets R8 parameters for problem 25.
-   **P25\_REGION** returns the name of the integration region for
    problem 25.
-   **P25\_TITLE** prints a title for problem 10.
-   **P26\_DEFAULT** sets default values for problem 26.
-   **P26\_EXACT** returns the exact integral for problem 26.
-   **P26\_F** evaluates the integrand for problem 26.
-   **P26\_I4** sets or gets I4 parameters for problem 26.
-   **P26\_LIM** returns the integration limits for problem 26.
-   **P26\_NAME** returns the name of problem 26.
-   **P26\_R8VEC** sets or gets R8VEC parameters for problem 26.
-   **P26\_REGION** returns the name of the integration region for
    problem 26.
-   **P26\_TITLE** prints a title for problem 26.
-   **P27\_DEFAULT** sets default values for problem 27.
-   **P27\_EXACT** returns the exact integral for problem 27.
-   **P27\_F** evaluates the integrand for problem 27.
-   **P27\_I4** sets or gets I4 parameters for problem 27.
-   **P27\_LIM** returns the integration limits for problem 27.
-   **P27\_NAME** returns the name of problem 27.
-   **P27\_R8** sets or gets R8 parameters for problem 27.
-   **P27\_R8VEC** sets or gets R8VEC parameters for problem 27.
-   **P27\_REGION** returns the name of the integration region for
    problem 27.
-   **P27\_TITLE** prints a title for problem 27.
-   **P28\_DEFAULT** sets default values for problem 28.
-   **P28\_EXACT** returns the exact integral for problem 28.
-   **P28\_F** evaluates the integrand for problem 28.
-   **P28\_I4** sets or gets I4 parameters for problem 28.
-   **P28\_LIM** returns the integration limits for problem 28.
-   **P28\_NAME** returns the name of problem 28.
-   **P28\_R8VEC** sets or gets R8VEC parameters for problem 28.
-   **P28\_REGION** returns the name of the integration region for
    problem 28.
-   **P28\_TITLE** prints a title for problem 28.
-   **P29\_DEFAULT** sets default values for problem 29.
-   **P29\_EXACT** returns the exact integral for problem 29.
-   **P29\_F** evaluates the integrand for problem 29.
-   **P29\_I4** sets or gets I4 parameters for problem 29.
-   **P29\_LIM** returns the integration limits for problem 29.
-   **P29\_NAME** returns the name of problem 29.
-   **P29\_R8** sets or gets R8 parameters for problem 29.
-   **P29\_R8VEC** sets or gets R8VEC parameters for problem 29.
-   **P29\_REGION** returns the name of the integration region for
    problem 29.
-   **P29\_TITLE** prints a title for problem 29.
-   **P30\_DEFAULT** sets default values for problem 30.
-   **P30\_EXACT** returns the exact integral for problem 30.
-   **P30\_F** evaluates the integrand for problem 30.
-   **P30\_I4** sets or gets I4 parameters for problem 30.
-   **P30\_LIM** returns the integration limits for problem 30.
-   **P30\_NAME** returns the name of problem 30.
-   **P30\_R8VEC** sets or gets R8VEC parameters for problem 30.
-   **P30\_REGION** returns the name of the integration region for
    problem 30.
-   **P30\_TITLE** prints a title for problem 30.
-   **P31\_DEFAULT** sets default values for problem 31.
-   **P31\_EXACT** returns the exact integral for problem 31.
-   **P31\_F** evaluates the integrand for problem 31.
-   **P31\_I4** sets or gets I4 parameters for problem 31.
-   **P31\_LIM** returns the integration limits for problem 31.
-   **P31\_NAME** returns the name of problem 31.
-   **P31\_R8VEC** sets or gets R8VEC parameters for problem 31.
-   **P31\_REGION** returns the name of the integration region for
    problem 31.
-   **P31\_TITLE** prints a title for problem 31.
-   **P32\_DEFAULT** sets default values for problem 32.
-   **P32\_EXACT** returns the exact integral for problem 32.
-   **P32\_F** evaluates the integrand for problem 32.
-   **P32\_I4** sets or gets I4 parameters for problem 32.
-   **P32\_LIM** returns the integration limits for problem 32.
-   **P32\_NAME** returns the name of problem 32.
-   **P32\_R8VEC** sets or gets R8VEC parameters for problem 32.
-   **P32\_REGION** returns the name of the integration region for
    problem 32.
-   **P32\_TITLE** prints a title for problem 32.
-   **P33\_DEFAULT** sets default values for problem 33.
-   **P33\_EXACT** returns the exact integral for problem 33.
-   **P33\_F** evaluates the integrand for problem 33.
-   **P33\_I4** sets or gets I4 parameters for problem 33.
-   **P33\_LIM** returns the integration limits for problem 33.
-   **P33\_NAME** returns the name of problem 33.
-   **P33\_REGION** returns the name of the integration region for
    problem 33.
-   **P33\_TITLE** prints a title for problem 33.
-   **P34\_DEFAULT** sets default values for problem 34.
-   **P34\_EXACT** returns the exact integral for problem 34.
-   **P34\_F** evaluates the integrand for problem 34.
-   **P34\_I4** sets or gets I4 parameters for problem 34.
-   **P34\_LIM** returns the integration limits for problem 34.
-   **P34\_NAME** returns the name of problem 34.
-   **P34\_REGION** returns the name of the integration region for
    problem 34.
-   **P34\_TITLE** prints a title for problem 34.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_CHOOSE** computes the combinatorial coefficient C(N,K).
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_GAMMA** returns the value of the Gamma function at X.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_NINT** returns the integer that is nearest to a double value.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_TINY** returns a "tiny" R8.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **R8VEC\_PRINT** prints an R8VEC
-   **R8VEC\_PRODUCT** returns the product of the entries of an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SIMPLEX\_UNIT\_VOLUME\_ND** computes the volume of the unit
    simplex in ND.
-   **SPHERE\_UNIT\_AREA\_ND** computes the surface area of a unit
    sphere in ND.
-   **SPHERE\_UNIT\_VOLUME\_ND** computes the volume of a unit sphere in
    ND.
-   **SPHERE\_VOLUME\_ND** computes the volume of an implicit sphere in
    ND.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TUPLE\_NEXT** computes the next element of a tuple space.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 March 2008.*
