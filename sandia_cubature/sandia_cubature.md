SANDIA\_CUBATURE\
Numerical Integration\
in M Dimensions {#sandia_cubature-numerical-integration-in-m-dimensions align="center"}
======================

------------------------------------------------------------------------

**SANDIA\_CUBATURE** is a C++ library which implements quadrature rules
for certain multidimensional regions and weight functions.

We consider the following integration regions:

-   **CN\_GEG**, the N dimensional hypercube \[-1,+1\]\^N, with the
    Gegenbauer weight function:\
    w(alpha;x) = product ( 1 &lt;= i &lt;= n ) ( 1 - x(i)\^2 )\^alpha;
-   **CN\_JAC**, the N dimensional hypercube \[-1,+1\]\^N, with the Beta
    or Jacobi weight function:\
    w(alpha,beta;x) = product ( 1 &lt;= i &lt;= n ) ( 1 - x(i)
    )\^alpha \* ( 1 + x(i) )\^beta;
-   **CN\_LEG**, the N dimensional hypercube \[-1,+1\]\^N, with the
    Legendre weight function:\
    w(x) = 1;
-   **EN\_HER**, the N-dimensional product space (-oo,+oo)\^N, with the
    Hermite weight function:\
    w(x) = product ( 1 &lt;= i &lt;= n ) exp ( - x(i)\^2 );
-   **EPN\_GLG**, the positive product space \[0,+oo)\^N, with the
    generalized Laguerre weight function:\
    w(alpha;x) = product ( 1 &lt;= i &lt;= n ) x(i)\^alpha exp ( - x(i)
    );
-   **EPN\_LAG**, the positive product space \[0,+oo)\^N, with the
    exponential or Laguerre weight function:\
    w(x) = product ( 1 &lt;= i &lt;= n ) exp ( - x(i) );

The available rules for region **EN\_HER** all have odd precision,
ranging from 1 to 11. Some of these rules are valid for any spatial
dimension **N**. However, many of these rules are restricted to a
limited range, such as **2 &lt;= N &lt; 6**. Some of the rules have two
forms; in that case, the particular form is selectable by setting an
input argument **OPTION** to 1 or 2. Finally, note that in
multidimensional integration, the dependence of the order **O** (number
of abscissas) on the spatial dimension **N** is critical. Rules for
which the order is a multiple of **2\^N** are not practical for large
values of **N**. The source code for each rule lists its formula for the
order as a function of **N**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SANDIA\_CUBATURE** is available in [a C++
version](../../cpp_src/sandia_cubature/sandia_cubature.html) and [a
FORTRAN90 version](../../f_src/sandia_cubature/sandia_cubature.html) and
[a MATLAB version](../../m_src/sandia_cubature/sandia_cubature.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[SANDIA\_RULES](../../cpp_src/sandia_rules/sandia_rules.html), a C++
library which produces 1D quadrature rules of Chebyshev, Clenshaw
Curtis, Fejer 2, Gegenbauer, generalized Hermite, generalized Laguerre,
Hermite, Jacobi, Laguerre, Legendre and Patterson types.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of multidimensional reqions.

### Reference: {#reference align="center"}

1.  Arthur Stroud,\
    Approximate Calculation of Multiple Integrals,\
    Prentice Hall, 1971,\
    ISBN: 0130438936,\
    LC: QA311.S85.
2.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
3.  Dongbin Xiu,\
    Numerical integration formulas of degree two,\
    Applied Numerical Mathematics,\
    Volume 58, 2008, pages 1515-1520.

### Source Code: {#source-code align="center"}

-   [sandia\_cubature.cpp](sandia_cubature.cpp), the source code.
-   [sandia\_cubature.hpp](sandia_cubature.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sandia\_cubature\_prb.cpp](sandia_cubature_prb.cpp), a sample
    calling program.
-   [sandia\_cubature\_prb\_output.txt](sandia_cubature_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C1\_GEG\_MONOMIAL\_INTEGRAL:** integral of monomial with
    Gegenbauer weight on C1.
-   **C1\_JAC\_MONOMIAL\_INTEGRAL:** integral of a monomial with Jacobi
    weight over C1.
-   **C1\_LEG\_MONOMIAL\_INTEGRAL:** integral of monomial with Legendre
    weight on C1.
-   **CN\_GEG\_01\_1** implements a precision 1 rule for region CN\_GEG.
-   **CN\_GEG\_01\_1\_SIZE** sizes a precision 1 rule for region
    CN\_GEG.
-   **CN\_GEG\_02\_XIU** implements the Xiu precision 2 rule for region
    CN\_GEG.
-   **CN\_GEG\_02\_XIU\_SIZE** sizes the Xiu precision 2 rule for region
    CN\_GEG.
-   **CN\_GEG\_03\_XIU** implements the Xiu precision 3 rule for region
    CN\_GEG.
-   **CN\_GEG\_03\_XIU\_SIZE** sizes the Xiu precision 3 rule for region
    CN\_GEG.
-   **CN\_GEG\_MONOMIAL\_INTEGRAL:** integral of monomial with
    Gegenbauer weight on CN.
-   **CN\_JAC\_01\_1** implements a precision 1 rule for region CN\_JAC.
-   **CN\_JAC\_01\_1\_SIZE** sizes a precision 1 rule for region
    CN\_JAC.
-   **CN\_JAC\_02\_XIU** implements the Xiu precision 2 rule for region
    CN\_JAC.
-   **CN\_JAC\_02\_XIU\_SIZE** sizes the Xiu precision 2 rule for region
    CN\_JAC.
-   **CN\_JAC\_MONOMIAL\_INTEGRAL:** integral of a monomial with Jacobi
    weight over CN.
-   **CN\_LEG\_01\_1** implements the midpoint rule for region CN\_LEG.
-   **CN\_LEG\_01\_1\_SIZE** sizes the midpoint rule for region CN\_LEG.
-   **CN\_LEG\_02\_XIU** implements the Xiu precision 2 rule for region
    CN\_LEG.
-   **CN\_LEG\_02\_XIU\_SIZE** sizes the Xiu precision 2 rule for region
    CN\_LEG.
-   **CN\_LEG\_03\_1** implements the Stroud rule CN:3-1 for region
    CN\_LEG.
-   **CN\_LEG\_03\_1\_SIZE** sizes the Stroud rule CN:3-1 for region
    CN\_LEG.
-   **CN\_LEG\_03\_XIU** implements the Xiu precision 3 rule for region
    CN\_LEG.
-   **CN\_LEG\_03\_XIU\_SIZE** sizes the Xiu precision 3 rule for region
    CN\_LEG.
-   **CN\_LEG\_05\_1** implements the Stroud rule CN:5-1 for region
    CN\_LEG.
-   **CN\_LEG\_05\_1\_SIZE** sizes the Stroud rule CN:5-1 for region
    CN\_LEG.
-   **CN\_LEG\_05\_2** implements the Stroud rule CN:5-2 for region
    CN\_LEG.
-   **CN\_LEG\_05\_2\_SIZE** sizes the Stroud rule CN:5-2 for region
    CN\_LEG.
-   **CN\_LEG\_MONOMIAL\_INTEGRAL:** integral of monomial with Legendre
    weight on CN.
-   **EN\_HER\_01\_1** implements the Stroud rule 1.1 for region
    EN\_HER.
-   **EN\_HER\_01\_1\_SIZE** sizes the Stroud rule 1.1 for region
    EN\_HER.
-   **EN\_HER\_02\_XIU** implements the Xiu precision 2 rule for region
    EN\_HER.
-   **EN\_HER\_02\_XIU\_SIZE** sizes the Xiu precision 2 rule for region
    EN\_HER.
-   **EN\_HER\_03\_1** implements the Stroud rule 3.1 for region
    EN\_HER.
-   **EN\_HER\_03\_1\_SIZE** sizes the Stroud rule 3.1 for region
    EN\_HER.
-   **EN\_HER\_03\_XIU** implements the Xiu precision 3 rule for region
    EN\_HER.
-   **EN\_HER\_03\_XIU\_SIZE** sizes the Xiu precision 3 rule for region
    EN\_HER.
-   **EN\_HER\_05\_1** implements the Stroud rule 5.1 for region
    EN\_HER.
-   **EN\_HER\_05\_1\_SIZE** sizes the Stroud rule 5.1 for region
    EN\_HER.
-   **EN\_HER\_05\_2** implements the Stroud rule 5.2 for region
    EN\_HER.
-   **EN\_HER\_05\_2\_SIZE** sizes the Stroud rule 5.2 for region
    EN\_HER.
-   **EN\_HER\_MONOMIAL\_INTEGRAL** evaluates monomial integrals in
    EN\_HER.
-   **EP1\_GLG\_MONOMIAL\_INTEGRAL:** integral of monomial with GLG
    weight on EP1.
-   **EP1\_LAG\_MONOMIAL\_INTEGRAL:** integral of monomial with Laguerre
    weight on EP1.
-   **EPN\_GLG\_01\_1** implements a precision 1 rule for region
    EPN\_GLG.
-   **EPN\_GLG\_01\_1\_SIZE** sizes a precision 1 rule for region
    EPN\_GLG.
-   **EPN\_GLG\_02\_XIU** implements the Xiu precision 2 rule for region
    EPN\_GLG.
-   **EPN\_GLG\_02\_XIU\_SIZE** sizes the Xiu precision 2 rule for
    region EPN\_GLG.
-   **EPN\_GLG\_MONOMIAL\_INTEGRAL:** integral of monomial with GLG
    weight on EPN.
-   **EPN\_LAG\_01\_1** implements a precision 1 rule for region
    EPN\_LAG.
-   **EPN\_LAG\_01\_1\_SIZE** sizes a precision 1 rule for region
    EPN\_LAG.
-   **EPN\_LAG\_02\_XIU** implements the Xiu precision 2 rule for region
    EPN\_LAG.
-   **EPN\_LAG\_02\_XIU\_SIZE** sizes the Xiu precision 2 rule for
    region EPN\_LAG.
-   **EPN\_LAG\_MONOMIAL\_INTEGRAL:** integral of monomial with Laguerre
    weight on EPN.
-   **GW\_02\_XIU** implements the Golub-Welsch version of the Xiu rule.
-   **GW\_02\_XIU\_SIZE** sizes the Golub Welsch version of the Xiu
    rule.
-   **MONOMIAL\_VALUE** evaluates a monomial.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 March 2010.*
