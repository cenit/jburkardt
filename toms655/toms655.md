TOMS655\
Weights for Interpolatory Quadrature {#toms655-weights-for-interpolatory-quadrature align="center"}
====================================

------------------------------------------------------------------------

**TOMS655** is a C++ library which computes weights for interpolatory
quadrature schemes, by Sylvan Elhay and Jaroslav Kautsky.

The typical use of this library is for the user to specify a quadrature
interval, a weight function, and a sequence of abscissas (which may be
repeated), and to request the corresponding weight vector so that an
interpolatory quadrature rule is produced.

Note that when an abscissa is repeated, this indicates that, at this
point, not only the function value but one or more derivatives are to be
used in the quadrature formula.

The library is also suitable for the simpler task of computing both the
abscissas and weights for a variety of classical Gaussian quadrature
rules, including

  Name                                Interval    Weight function
  ----------------------------------- ----------- ---------------------------------
  Legendre                            (a,b)       1.0
  Chebyshev Type 1                    (a,b)       ((b-x)\*(x-a))\^(-0.5)
  Gegenbauer                          (a,b)       ((b-x)\*(x-a))\^alpha
  Jacobi                              (a,b)       (b-x)\^alpha\*(x-a)\^beta
  Laguerre and Generalized Laguerre   (a,+oo)     (x-a)\^alpha\*exp(-b\*(x-a))
  Hermite and Generalized Hermite     (-oo,+oo)   |x-a|\^alpha\*exp(-b\*(x-a)\^2)
  Exponential                         (a,b)       |x-(a+b)/2.0|\^alpha
  Rational                            (a,+oo)     (x-a)\^alpha\*(x+b)\^beta

The original, true, correct version of ACM TOMS Algorithm 655 is
available through ACM:
[http://www.acm.org/pubs/calgo](http://www.acm.org/pubs/calgo/) or
NETLIB: <http://www.netlib.org/toms/index.html>.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS655** is available in [a C
version](../../c_src/toms655/toms655.html) and [a C++
version](../../cpp_src/toms655/toms655.html) and [a FORTRAN77
version](../../f77_src/toms655/toms655.html) and [a FORTRAN90
version](../../f_src/toms655/toms655.html) and [a MATLAB
version](../../m_src/toms655/toms655.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV1\_RULE](../../cpp_src/chebyshev1_rule/chebyshev1_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../cpp_src/chebyshev2_rule/chebyshev2_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[GEGENBAUER\_RULE](../../cpp_src/gegenbauer_rule/gegenbauer_rule.html),
a C++ program which can compute and print a Gauss-Gegenbauer quadrature
rule.

[GEN\_HERMITE\_RULE](../../cpp_src/gen_hermite_rule/gen_hermite_rule.html),
a C++ program which can compute and print a generalized Gauss-Hermite
quadrature rule.

[GEN\_LAGUERRE\_RULE](../../cpp_src/gen_laguerre_rule/gen_laguerre_rule.html),
a C++ program which can compute and print a generalized Gauss-Laguerre
quadrature rule.

[HERMITE\_RULE](../../cpp_src/hermite_rule/hermite_rule.html), a C++
program which computes a Gauss-Hermite quadrature rule.

[JACOBI\_RULE](../../cpp_src/jacobi_rule/jacobi_rule.html), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_RULE](../../cpp_src/laguerre_rule/laguerre_rule.html), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LEGENDRE\_RULE](../../cpp_src/legendre_rule/legendre_rule.html), a C++
program which computes a Gauss-Legendre quadrature rule.

[QUADMOM](../../cpp_src/quadmom/quadmom.html), a C++ library which
computes a Gaussian quadrature rule for a weight function rho(x) based
on the Golub-Welsch procedure that only requires knowledge of the
moments of rho(x).

[QUADRULE](../../cpp_src/quadrule/quadrule.html) a C++ library which
contains information about quadrature rules, both as tabulated values,
and as computational procedures.

### Reference: {#reference align="center"}

1.  Sylvan Elhay, Jaroslav Kautsky,\
    Algorithm 655: IQPACK, FORTRAN Subroutines for the Weights of
    Interpolatory Quadrature,\
    ACM Transactions on Mathematical Software,\
    Volume 13, Number 4, December 1987, pages 399-415.
2.  Jaroslav Kautsky, Sylvan Elhay,\
    Calculation of the Weights of Interpolatory Quadratures,\
    Numerische Mathematik,\
    Volume 40, Number 3, October 1982, pages 407-422.
3.  Roger Martin, James Wilkinson,\
    The Implicit QL Algorithm,\
    Numerische Mathematik,\
    Volume 12, Number 5, December 1968, pages 377-383.

### Source Code: {#source-code align="center"}

-   [toms655.cpp](toms655.cpp), the source code;
-   [toms655.hpp](toms655.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

**TOMS655\_PRB** tests various routines in the package.

-   [toms655\_prb.cpp](toms655_prb.cpp), a sample calling program;
-   [toms655\_prb\_output.txt](toms655_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CAWIQ** computes quadrature weights for a given set of knots.
-   **CDGQF** computes a Gauss quadrature formula with default A, B and
    simple knots.
-   **CEGQF** computes a quadrature formula and applies it to a
    function.
-   **CEGQFS** estimates an integral using a standard quadrature
    formula.
-   **CEIQF** constructs and applies a quadrature formula based on user
    knots.
-   **CEIQFS** computes and applies a quadrature formula based on user
    knots.
-   **CGQF** computes knots and weights of a Gauss quadrature formula.
-   **CGQFS** computes knots and weights of a Gauss quadrature formula.
-   **CHKQF** computes and prints the moments of a quadrature formula.
-   **CHKQFS** checks the polynomial accuracy of a quadrature formula.
-   **CLIQF** computes a classical quadrature formula, with optional
    printing.
-   **CIQF** computes weights for a classical weight function and any
    interval.
-   **CIQFS** computes some weights of a quadrature formula in the
    default interval.
-   **CLASS\_MATRIX** computes the Jacobi matrix for a quadrature rule.
-   **CLIQFS** computes the weights of a quadrature formula in the
    default interval.
-   **CWIQD** computes all the weights for a given knot.
-   **EIQF** evaluates an interpolatory quadrature formula.
-   **EIQFS** evaluates a quadrature formula defined by CLIQF or CLIQFS.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_SIGN** returns the sign of an I4.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **PARCHK** checks parameters ALPHA and BETA for classical weight
    functions.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_SIGN** returns the sign of an R8.
-   **SCMM** computes moments of a classical weight function scaled to
    \[A,B\].
-   **SCQF** scales a quadrature formula to a nonstandard interval.
-   **SCT** rescales distinct knots to an interval \[A,B\].
-   **SGQF** computes knots and weights of a Gauss Quadrature formula.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WM** evaluates the first M moments of classical weight functions.
-   **WTFN** evaluates the classical weight functions at given points.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 January 2010.*
