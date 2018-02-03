SANDIA\_RULES\
Quadrature Rules of Gaussian Type {#sandia_rules-quadrature-rules-of-gaussian-type align="center"}
=================================

------------------------------------------------------------------------

**SANDIA\_RULES** is a C++ library which generates a variety of
quadrature rules of various orders.

This library is used, in turn, by several other libraries, including
**SPARSE\_GRID\_MIXED**, **SPARSE\_GRID\_MIXED\_GROWTH**, and **SGMGA**.
This means that a program that calls any one of those libraries must
have access to a compiled copy of SANDIA\_RULES as well.

  Name                         Usual domain   Weight function
  ---------------------------- -------------- --------------------------
  Gauss-Legendre               \[-1,+1\]      1
  Clenshaw-Curtis              \[-1,+1\]      1
  Fejer Type 2                 \[-1,+1\]      1
  Gauss-Chebyshev 1            \[-1,+1\]      1/sqrt(1-x^2^)
  Gauss-Chebyshev 2            \[-1,+1\]      sqrt(1-x^2^)
  Gauss-Gegenbauer             \[-1,+1\]      (1-x^2^)^alpha^
  Gauss-Jacobi                 \[-1,+1\]      (1-x)^alpha^ (1+x)^beta^
  Gauss-Laguerre               \[0,+oo)       e^-x^
  Generalized Gauss-Laguerre   \[0,+oo)       x^alpha^ e^-x^
  Gauss-Hermite                (-oo,+oo)      e^-x\*x^
  Generalized Gauss-Hermite    (-oo,+oo)      |x|^alpha^ e^-x\*x^
  Hermite Genz-Keister         (-oo,+oo)      e^-x\*x^
  Newton-Cotes-Closed          \[-1,+1\]      1
  Newton-Cotes-Open            \[-1,+1\]      1
  Newton-Cotes-Open-Half       \[-1,+1\]      1

For example, a Gauss-Gegenbauer quadrature rule is used to approximate:

            Integral ( -1 <= x <= +1 ) f(x) (1-x^2)^alpha dx
          

where **alpha** is a real parameter chosen by the user.

The approximation to the integral is formed by computing a weighted sum
of function values at specific points:

            Sum ( 1 <= i <= n ) w(i) * f(x(i))
          

The quantities **x** are the *abscissas* of the quadrature rule, the
values **w** are the *weights* of the quadrature rule, and the number of
terms **n** in the sum is the *order* of the quadrature rule.

As a matter of convenience, most of the quadrature rules are available
through three related functions:

-   **name\_COMPUTE** returns points X and weights W;
-   **name\_COMPUTE\_POINTS** returns points X;
-   **name\_COMPUTE\_WEIGHTS** returns weights W;

In some cases, it is possible to compute points or weights separately;
in other cases, the point and weight functions actually call the
underlying function for the entire rule, and then discard the
unrequested information.

Some of these quadrature rules expect a parameter ALPHA, and perhaps
also a parameter BETA, in order to fully define the rule. Therefore, the
argument lists of these functions vary. They always include the input
quantity ORDER, but may have one or two additional inputs. In order to
offer a uniform interface, there is also a family of functions with a
standard set of input arguments, ORDER, NP, and P. Here NP is parameter
counter, and P is the parameter value vector P. Using this interface, it
is possible to call all the quadrature functions with the same argument
list. The uniform interface functions can be identified by the suffix
**\_NP** that appears in their names. Generally, these functions
"unpack" the parameter vector where needed, and then call the
corresponding basic function. Of course, for many rules NP is zero and P
may be a null pointer.

-   **name\_COMPUTE\_NP ( ORDER, NP, P, X, W )** unpacks parameters,
    calls name\_COMPUTE, returns points X and weights W;
-   **name\_COMPUTE\_POINTS\_NP ( ORDER, NP, P, X )** unpacks
    parameters, calls name\_COMPUTE\_POINTS, returns points X;
-   **name\_COMPUTE\_WEIGHTS\_NP ( ORDER, NP, P, W )** unpacks
    parameters, calls name\_COMPUTE\_WEIGHTS, returns weights W;

There is yet a third possible interface, in which no ALPHA or BETA
parameters appear in the function call; this interface is primarily
intended for a particular software environment. The interfaces are made
available in a separate library called **SANDIA\_RULES2**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SANDIA\_RULES** is available in [a C
version](../../c_src/sandia_rules/sandia_rules.md) and [a C++
version](../../master/sandia_rules/sandia_rules.md) and [a FORTRAN90
version](../../f_src/sandia_rules/sandia_rules.md) and [a MATLAB
version.](../../m_src/sandia_rules/sandia_rules.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV1\_RULE](../../master/chebyshev1_rule/chebyshev1_rule.md),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../master/chebyshev2_rule/chebyshev2_rule.md),
a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[GEGENBAUER\_RULE](../../master/gegenbauer_rule/gegenbauer_rule.md),
a C++ program which can compute and print a Gauss-Gegenbauer quadrature
rule.

[GEN\_HERMITE\_RULE](../../master/gen_hermite_rule/gen_hermite_rule.md),
a C++ program which can compute and print a generalized Gauss-Hermite
quadrature rule.

[GEN\_LAGUERRE\_RULE](../../master/gen_laguerre_rule/gen_laguerre_rule.md),
a C++ program which can compute and print a generalized Gauss-Laguerre
quadrature rule.

[HERMITE\_RULE](../../master/hermite_rule/hermite_rule.md), a C++
program which can compute and print a Gauss-Hermite quadrature rule.

[JACOBI\_RULE](../../master/jacobi_rule/jacobi_rule.md), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_RULE](../../master/laguerre_rule/laguerre_rule.md), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LEGENDRE\_RULE](../../master/legendre_rule/legendre_rule.md), a C++
program which can compute and print a Gauss-Legendre quadrature rule.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which contains sets of files that define quadrature
rules over various 1D intervals or multidimensional hypercubes.

[QUADRATURE\_RULES\_LEGENDRE](../../datasets/quadrature_rules_legendre/quadrature_rules_legendre.md),
a dataset directory which contains triples of files defining standard
Gauss-Legendre quadrature rules.

[SANDIA\_RULES2](../../master/sandia_rules2/sandia_rules2.md), a C++
library which contains a very small selection of functions which serve
as an interface between SANDIA\_SGMG or SANDIA\_SGMGA and SANDIA\_RULES.

[SGMGA](../../master/sgmga/sgmga.md), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SPARSE\_GRID\_MIXED](../../master/sparse_grid_mixed/sparse_grid_mixed.md),
a C++ library which creates a sparse grid dataset based on a mixed set
of 1D factor rules.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  William Cody,\
    An Overview of Software Development for Special Functions,\
    in Numerical Analysis Dundee, 1975,\
    edited by GA Watson,\
    Lecture Notes in Mathematics 506,\
    Springer, 1976.
3.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
4.  Sylvan Elhay, Jaroslav Kautsky,\
    Algorithm 655: IQPACK, FORTRAN Subroutines for the Weights of
    Interpolatory Quadrature,\
    ACM Transactions on Mathematical Software,\
    Volume 13, Number 4, December 1987, pages 399-415.
5.  Alan Genz, Bradley Keister,\
    Fully symmetric interpolatory rules for multiple integrals over
    infinite regions with Gaussian weight,\
    Journal of Computational and Applied Mathematics,\
    Volume 71, 1996, pages 299-309.
6.  John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thatcher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
7.  Knut Petras,\
    Smolyak Cubature of Given Polynomial Degree with Few Nodes for
    Increasing Dimension,\
    Numerische Mathematik,\
    Volume 93, Number 4, February 2003, pages 729-753.
8.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
9.  Shanjie Zhang, Jianming Jin,\
    Computation of Special Functions,\
    Wiley, 1996,\
    ISBN: 0-471-11963-6,\
    LC: QA351.C45

### Source Code: {#source-code align="center"}

-   [sandia\_rules.cpp](sandia_rules.cpp), the source code.
-   [sandia\_rules.hpp](sandia_rules.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sandia\_rules\_prb.cpp](sandia_rules_prb.cpp), a sample calling
    program.
-   [sandia\_rules\_prb\_output.txt](sandia_rules_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **BINARY\_VECTOR\_NEXT** generates the next binary vector.
-   **CCN\_COMPUTE** computes a nested Clenshaw Curtis quadrature rule.
-   **CCN\_COMPUTE\_NP** computes a nested Clenshaw Curtis quadrature
    rule.
-   **CCN\_COMPUTE\_POINTS:** compute nested Clenshaw Curtis points.
-   **CCN\_COMPUTE\_POINTS\_NP:** nested Clenshaw Curtis quadrature
    points.
-   **CCN\_COMPUTE\_WEIGHTS:** weights for nested Clenshaw Curtis rule.
-   **CCN\_COMPUTE\_WEIGHTS\_NP:** nested Clenshaw Curtis quadrature
    weights.
-   **CHEBYSHEV1\_COMPUTE** computes a Chebyshev type 1 quadrature rule.
-   **CHEBYSHEV1\_COMPUTE\_NP** computes a Chebyshev type 1 quadrature
    rule.
-   **CHEBYSHEV1\_COMPUTE\_POINTS** computes Chebyshev type 1 quadrature
    points.
-   **CHEBYSHEV1\_COMPUTE\_POINTS\_NP** computes Chebyshev type 1
    quadrature points.
-   **CHEBYSHEV1\_COMPUTE\_WEIGHTS** computes Chebyshev type 1
    quadrature weights.
-   **CHEBYSHEV1\_COMPUTE\_WEIGHTS\_NP:** Chebyshev type 1 quadrature
    weights.
-   **CHEBYSHEV1\_INTEGRAL** evaluates a monomial Chebyshev type 1
    integral.
-   **CHEBYSHEV2\_COMPUTE** computes a Chebyshev type 2 quadrature rule.
-   **CHEBYSHEV2\_COMPUTE\_NP** computes a Chebyshev type 2 quadrature
    rule.
-   **CHEBYSHEV2\_COMPUTE\_POINTS** computes Chebyshev type 2 quadrature
    points.
-   **CHEBYSHEV2\_COMPUTE\_POINTS\_NP** computes Chebyshev type 2
    quadrature points.
-   **CHEBYSHEV2\_COMPUTE\_WEIGHTS** computes Chebyshev type 2
    quadrature weights.
-   **CHEBYSHEV2\_COMPUTE\_WEIGHTS\_NP:** Chebyshev type 2 quadrature
    weights.
-   **CHEBYSHEV2\_INTEGRAL** evaluates a monomial Chebyshev type 2
    integral.
-   **CLENSHAW\_CURTIS\_COMPUTE** computes a Clenshaw Curtis quadrature
    rule.
-   **CLENSHAW\_CURTIS\_COMPUTE\_NP** computes a Clenshaw Curtis
    quadrature rule.
-   **CLENSHAW\_CURTIS\_COMPUTE\_POINTS** computes Clenshaw Curtis
    quadrature points.
-   **CLENSHAW\_CURTIS\_COMPUTE\_POINTS\_NP:** Clenshaw Curtis
    quadrature points.
-   **CLENSHAW\_CURTIS\_COMPUTE\_WEIGHTS** computes Clenshaw Curtis
    quadrature weights.
-   **CLENSHAW\_CURTIS\_COMPUTE\_WEIGHTS\_NP:** Clenshaw Curtis
    quadrature weights.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **CPU\_TIME** reports the elapsed CPU time.
-   **DIF\_DERIV** computes the derivative of a polynomial in divided
    difference form.
-   **DIF\_SHIFT\_X** replaces one abscissa of a divided difference
    table with a new one.
-   **DIF\_SHIFT\_ZERO** shifts a divided difference table so that all
    abscissas are zero.
-   **DIF\_TO\_R8POLY** converts a divided difference table to a
    standard polynomial.
-   **FEJER2\_COMPUTE** computes a Fejer type 2 rule.
-   **FEJER2\_COMPUTE\_NP** computes a Fejer type 2 rule.
-   **FEJER2\_COMPUTE\_POINTS** computes Fejer type 2 quadrature points.
-   **FEJER2\_COMPUTE\_POINTS\_NP** computes Fejer type 2 quadrature
    points.
-   **FEJER2\_COMPUTE\_WEIGHTS** computes Fejer type 2 quadrature
    weights.
-   **FEJER2\_COMPUTE\_WEIGHTS\_NP** computes Fejer type 2 quadrature
    weights.
-   **GEGENBAUER\_COMPUTE** computes a Gegenbauer quadrature rule.
-   **GEGENBAUER\_COMPUTE\_NP** computes a Gegenbauer quadrature rule.
-   **GEGENBAUER\_COMPUTE\_POINTS** computes Gegenbauer quadrature
    points.
-   **GEGENBAUER\_COMPUTE\_POINTS\_NP** computes Gegenbauer quadrature
    points.
-   **GEGENBAUER\_COMPUTE\_WEIGHTS** computes Gegenbauer quadrature
    weights.
-   **GEGENBAUER\_COMPUTE\_WEIGHTS\_NP** computes Gegenbauer quadrature
    weights.
-   **GEGENBAUER\_INTEGRAL** integrates a monomial with Gegenbauer
    weight.
-   **GEGENBAUER\_RECUR** evaluates a Gegenbauer polynomial.
-   **GEGENBAUER\_ROOT** improves an approximate root of a Gegenbauer
    polynomial.
-   **GEN\_HERMITE\_COMPUTE** computes a generalized Gauss-Hermite
    quadrature rule.
-   **GEN\_HERMITE\_COMPUTE\_NP** computes a Generalized Hermite
    quadrature rule.
-   **GEN\_HERMITE\_COMPUTE\_POINTS** computes Generalized Hermite
    quadrature points.
-   **GEN\_HERMITE\_COMPUTE\_POINTS\_NP:** Generalized Hermite
    quadrature points.
-   **GEN\_HERMITE\_COMPUTE\_WEIGHTS** computes Generalized Hermite
    quadrature weights.
-   **GEN\_HERMITE\_COMPUTE\_WEIGHTS\_NP:** Generalized Hermite
    quadrature weights.
-   **GEN\_HERMITE\_DR\_COMPUTE** computes a Generalized Hermite
    quadrature rule.
-   **GEN\_HERMITE\_INTEGRAL** evaluates a monomial Generalized Hermite
    integral.
-   **GEN\_LAGUERRE\_COMPUTE:** generalized Gauss-Laguerre quadrature
    rule.
-   **GEN\_LAGUERRE\_COMPUTE\_NP** computes a Generalized Laguerre
    quadrature rule.
-   **GEN\_LAGUERRE\_COMPUTE\_POINTS:** Generalized Laguerre quadrature
    points.
-   **GEN\_LAGUERRE\_COMPUTE\_POINTS\_NP:** Generalized Laguerre
    quadrature points.
-   **GEN\_LAGUERRE\_COMPUTE\_WEIGHTS:** Generalized Laguerre quadrature
    weights.
-   **GEN\_LAGUERRE\_COMPUTE\_WEIGHTS\_NP:** Generalized Laguerre
    quadrature weights.
-   **GEN\_LAGUERRE\_INTEGRAL** evaluates a monomial Generalized
    Laguerre integral.
-   **GEN\_LAGUERRE\_SS\_COMPUTE** computes a Generalized Laguerre
    quadrature rule.
-   **GEN\_LAGUERRE\_SS\_RECUR** evaluates a Generalized Laguerre
    polynomial.
-   **GEN\_LAGUERRE\_SS\_ROOT** improves a root of a Generalized
    Laguerre polynomial.
-   **HC\_COMPUTE\_WEIGHTS\_FROM\_POINTS:** Hermite-Cubic weights,
    user-supplied points.
-   **HCC\_COMPUTE** computes a Hermite-Cubic-Chebyshev-Spacing
    quadrature rule.
-   **HCC\_COMPUTE\_NP** computes a Hermite-Cubic-Chebyshev-Spacing
    quadrature rule.
-   **HCC\_COMPUTE\_POINTS** computes Hermite-Cubic-Chebyshev-Spacing
    quadrature points.
-   **HCC\_COMPUTE\_POINTS\_NP:** Hermite-Cubic-Chebyshev-Spacing
    quadrature points.
-   **HCC\_COMPUTE\_WEIGHTS:** Hermite-Cubic-Chebyshev-Spacing
    quadrature weights.
-   **HCC\_COMPUTE\_WEIGHTS\_NP:** Hermite-Cubic-Chebyshev-Spacing
    quadrature weights.
-   **HCE\_COMPUTE** computes a Hermite-Cubic-Equal-Spacing quadrature
    rule.
-   **HCE\_COMPUTE\_NP** computes a Hermite-Cubic-Equal-Spacing
    quadrature rule.
-   **HCE\_COMPUTE\_POINTS** computes Hermite-Cubic-Equal-Spacing
    quadrature points.
-   **HCE\_COMPUTE\_POINTS\_NP:** Hermite-Cubic-Equal-Spacing quadrature
    points.
-   **HCE\_COMPUTE\_WEIGHTS:** Hermite-Cubic-Equal-Spacing quadrature
    weights.
-   **HCE\_COMPUTE\_WEIGHTS\_NP:** Hermite-Cubic-Equal-Spacing
    quadrature weights.
-   **HERMITE\_COMPUTE** computes a Gauss-Hermite quadrature rule.
-   **HERMITE\_COMPUTE\_NP** computes a Hermite quadrature rule.
-   **HERMITE\_COMPUTE\_POINTS** computes Hermite quadrature points.
-   **HERMITE\_COMPUTE\_POINTS\_NP** computes Hermite quadrature points.
-   **HERMITE\_COMPUTE\_WEIGHTS** computes Hermite quadrature weights.
-   **HERMITE\_COMPUTE\_WEIGHTS\_NP** computes Hermite quadrature
    weights.
-   **HERMITE\_GENZ\_KEISTER\_LOOKUP** looks up a Genz-Keister Hermite
    rule.
-   **HERMITE\_GENZ\_KEISTER\_LOOKUP\_POINTS** looks up Genz-Keister
    Hermite abscissas.
-   **HERMITE\_GENZ\_KEISTER\_LOOKUP\_POINTS\_NP** looks up Genz-Keister
    Hermite abscissas.
-   **HERMITE\_GENZ\_KEISTER\_LOOKUP\_WEIGHTS** looks up Genz-Keister
    Hermite weights.
-   **HERMITE\_GENZ\_KEISTER\_LOOKUP\_WEIGHTS\_NP** looks up
    Genz-Keister Hermite weights.
-   **HERMITE\_GK18\_LOOKUP\_POINTS:** abscissas of a Hermite
    Genz-Keister 18 rule.
-   **HERMITE\_GK22\_LOOKUP\_POINTS** looks up Hermite Genz-Keister 22
    points.
-   **HERMITE\_GK24\_LOOKUP\_POINTS** looks up Hermite Genz-Keister 24
    points.
-   **HERMITE\_INTEGRAL** evaluates a monomial Hermite integral.
-   **HERMITE\_INTERPOLANT** sets up a divided difference table from
    Hermite data.
-   **HERMITE\_INTERPOLANT\_RULE:** quadrature rule for a Hermite
    interpolant.
-   **HERMITE\_INTERPOLANT\_VALUE** evaluates the Hermite interpolant
    polynomial.
-   **HERMITE\_LOOKUP** looks up abscissas and weights for Gauss-Hermite
    quadrature.
-   **HERMITE\_LOOKUP\_POINTS** looks up abscissas for Hermite
    quadrature.
-   **HERMITE\_LOOKUP\_WEIGHTS** looks up weights for Hermite
    quadrature.
-   **HERMITE\_SS\_COMPUTE** computes a Hermite quadrature rule.
-   **HERMITE\_SS\_RECUR** finds the value and derivative of a Hermite
    polynomial.
-   **HERMITE\_SS\_ROOT** improves an approximate root of a Hermite
    polynomial.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **I4MAT\_COPY** copies one I4MAT to another.
-   **I4MAT\_COPY\_NEW** copies an I4MAT to a "new" I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file.
-   **I4VEC\_ADD\_NEW** computes C = A + B for I4VEC's.
-   **I4VEC\_ANY\_LT:** ( any ( A &lt; B ) ) for I4VEC's.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_COPY\_NEW** copies an I4VEC to a "new" I4VEC.
-   **I4VEC\_MIN\_MV** determines U(1:N) /\\ V for vectors U and a
    single vector V.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **JACOBI\_COMPUTE:** Elhay-Kautsky method for Gauss-Jacobi
    quadrature rule.
-   **JACOBI\_COMPUTE\_NP** computes a Jacobi quadrature rule.
-   **JACOBI\_COMPUTE\_POINTS** computes Jacobi quadrature points.
-   **JACOBI\_COMPUTE\_POINTS\_NP** computes Jacobi quadrature points.
-   **JACOBI\_COMPUTE\_WEIGHTS** computes Jacobi quadrature weights.
-   **JACOBI\_COMPUTE\_WEIGHTS\_NP** computes Jacobi quadrature weights.
-   **JACOBI\_INTEGRAL** integrates a monomial with Jacobi weight.
-   **JACOBI\_SS\_COMPUTE** computes a Jacobi quadrature rule.
-   **JACOBI\_SS\_RECUR** evaluates a Jacobi polynomial.
-   **JACOBI\_SS\_ROOT** improves an approximate root of a Jacobi
    polynomial.
-   **LAGUERRE\_COMPUTE:** Laguerre quadrature rule by the Elhay-Kautsky
    method.
-   **LAGUERRE\_COMPUTE\_NP** computes a Laguerre quadrature rule.
-   **LAGUERRE\_COMPUTE\_POINTS** computes Laguerre quadrature points.
-   **LAGUERRE\_COMPUTE\_POINTS\_NP** computes Laguerre quadrature
    points.
-   **LAGUERRE\_COMPUTE\_WEIGHTS** computes Laguerre quadrature weights.
-   **LAGUERRE\_COMPUTE\_WEIGHTS\_NP** computes Laguerre quadrature
    weights.
-   **LAGUERRE\_INTEGRAL** evaluates a monomial Laguerre integral.
-   **LAGUERRE\_LOOKUP** looks up abscissas and weights for Laguerre
    quadrature.
-   **LAGUERRE\_LOOKUP\_POINTS** looks up abscissas for Laguerre
    quadrature.
-   **LAGUERRE\_LOOKUP\_WEIGHTS** looks up weights for Laguerre
    quadrature.
-   **LAGUERRE\_SS\_COMPUTE** computes a Laguerre quadrature rule.
-   **LAGUERRE\_SS\_RECUR** evaluates a Laguerre polynomial.
-   **LAGUERRE\_SS\_ROOT** improves a root of a Laguerre polynomial.
-   **LEGENDRE\_COMPUTE:** Legendre quadrature rule by the Elhay-Kautsky
    method.
-   **LEGENDRE\_COMPUTE\_NP** computes a Legendre quadrature rule.
-   **LEGENDRE\_COMPUTE\_POINTS** computes Legendre quadrature points.
-   **LEGENDRE\_COMPUTE\_POINTS\_NP** computes Legendre quadrature
    points.
-   **LEGENDRE\_COMPUTE\_WEIGHTS** computes Legendre quadrature weights.
-   **LEGENDRE\_COMPUTE\_WEIGHTS\_NP** computes Legendre quadrature
    weights.
-   **LEGENDRE\_DR\_COMPUTE** computes a Legendre quadrature rule.
-   **LEGENDRE\_INTEGRAL** evaluates a monomial Legendre integral.
-   **LEGENDRE\_LOOKUP** looks up abscissas and weights for
    Gauss-Legendre quadrature.
-   **LEGENDRE\_LOOKUP\_POINTS** looks up abscissas for Gauss-Legendre
    quadrature.
-   **LEGENDRE\_LOOKUP\_WEIGHTS** looks up weights for Gauss-Legendre
    quadrature.
-   **LEGENDRE\_ZEROS** returns the zeros of the Legendre polynomial of
    degree N.
-   **LEVEL\_GROWTH\_TO\_ORDER:** convert Level and Growth to Order.
-   **LEVEL\_TO\_ORDER\_DEFAULT:** default growth.
-   **LEVEL\_TO\_ORDER\_EXPONENTIAL:** exponential growth.
-   **LEVEL\_TO\_ORDER\_EXPONENTIAL\_SLOW:** slow exponential growth;
-   **LEVEL\_TO\_ORDER\_LINEAR:** linear growth.
-   **LEVEL\_TO\_ORDER\_EXP\_CC** is used for Clenshaw-Curtis type
    rules.
-   **LEVEL\_TO\_ORDER\_EXP\_F2** is used for Fejer 2 type rules.
-   **LEVEL\_TO\_ORDER\_EXP\_GAUSS** is used for Gauss type rules.
-   **LEVEL\_TO\_ORDER\_EXP\_GP** is used for Gauss-Patterson type
    rules.
-   **LEVEL\_TO\_ORDER\_EXP\_HGK** is used for Hermite Genz-Keister type
    rules.
-   **LEVEL\_TO\_ORDER\_LINEAR\_NN** is used for non-nested Gauss type
    rules.
-   **LEVEL\_TO\_ORDER\_LINEAR\_WN** is used for weakly-nested Gauss
    type rules.
-   **NC\_COMPUTE** computes a Newton-Cotes quadrature rule.
-   **NC\_COMPUTE\_NEW** computes a Newton-Cotes quadrature rule.
-   **NCC\_COMPUTE\_POINTS:** points of a Newton-Cotes Closed quadrature
    rule.
-   **NCC\_COMPUTE\_WEIGHTS:** weights of a Newton-Cotes Closed
    quadrature rule.
-   **NCO\_COMPUTE\_POINTS:** points for a Newton-Cotes Open quadrature
    rule.
-   **NCO\_COMPUTE\_WEIGHTS:** weights for a Newton-Cotes Open
    quadrature rule.
-   **NCOH\_COMPUTE\_POINTS** computes points for a Newton-Cotes "open
    half" quadrature rule.
-   **NCOH\_COMPUTE\_WEIGHTS** computes weights for a Newton-Cotes "open
    half" quadrature rule.
-   **PATTERSON\_LOOKUP** looks up Patterson quadrature points and
    weights.
-   **PATTERSON\_LOOKUP\_POINTS** looks up Patterson quadrature points.
-   **PATTERSON\_LOOKUP\_POINTS\_NP** looks up Patterson quadrature
    points.
-   **PATTERSON\_LOOKUP\_WEIGHTS** looks up Patterson quadrature
    weights.
-   **PATTERSON\_LOOKUP\_WEIGHTS\_NP** looks up Patterson quadrature
    weights.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_COUNT** counts the tolerably unique
    points.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_COUNT\_INC1** counts the tolerably
    unique points.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_COUNT\_INC2** counts the tolerably
    unique points.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_INDEX** indexes the tolerably unique
    points.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_INDEX\_INC1** indexes the tolerably
    unique points.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_INDEX\_INC2** indexes unique temporary
    points.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_INDEX\_INC3** merges index data.
-   **POINT\_UNIQUE\_INDEX** indexes unique points.
-   **PRODUCT\_MIXED\_WEIGHT** computes the weights of a mixed product
    rule.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_CEILING** rounds an R8 "up" (towards +oo) to the next integer.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **R8\_FLOOR** rounds an R8 "down" (towards -infinity) to the next
    integer.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_HYPER\_2F1** evaluates the hypergeometric function
    2F1(A,B,C,X).
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8\_PSI** evaluates the function Psi(X).
-   **R8\_SIGN** returns the sign of an R8.
-   **R8COL\_COMPARE** compares two columns in an R8COL.
-   **R8COL\_SORT\_HEAP\_A** ascending heapsorts an R8COL.
-   **R8COL\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R8COL.
-   **R8COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in a sorted
    R8COL.
-   **R8COL\_SWAP** swaps columns J1 and J2 of an R8COL.
-   **R8COL\_TOL\_UNDEX** indexes tolerably unique entries of an R8COL.
-   **R8COL\_TOL\_UNIQUE\_COUNT** counts tolerably unique entries in an
    R8COL.
-   **R8COL\_UNDEX** returns unique sorted indexes for an R8COL.
-   **R8COL\_UNIQUE\_INDEX** indexes the first occurrence of values in
    an R8COL.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8POLY\_ANT\_VAL** evaluates the antiderivative of an R8POLY in
    standard form.
-   **R8VEC\_CHEBYSHEV\_NEW** creates a vector of Chebyshev spaced
    values.
-   **R8VEC\_COMPARE** compares two R8VEC's.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_COPY\_NEW** copies an R8VEC to a "new" R8VEC.
-   **R8VEC\_DIFF\_NORM\_LI** returns the L-oo norm of the difference of
    R8VEC's.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_I4VEC\_DOT\_PRODUCT** computes the dot product of an R8VEC
    and an I4VEC.
-   **R8VEC\_INDEX\_SORTED\_RANGE:** search index sorted vector for
    elements in a range.
-   **R8VEC\_INDEXED\_HEAP\_D** creates a descending heap from an
    indexed R8VEC.
-   **R8VEC\_INDEXED\_HEAP\_D\_EXTRACT:** extract from heap descending
    indexed R8VEC.
-   **R8VEC\_INDEXED\_HEAP\_D\_INSERT:** insert value into heap
    descending indexed R8VEC.
-   **R8VEC\_INDEXED\_HEAP\_D\_MAX:** maximum value in heap descending
    indexed R8VEC.
-   **R8VEC\_LEGENDRE\_NEW** creates a vector of Chebyshev spaced
    values.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_MIN\_POS** returns the minimum positive value of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SCALE** multiples an R8VEC by a scale factor.
-   **R8VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R8VEC
-   **R8VEC\_SORT\_HEAP\_INDEX\_A\_NEW** does an indexed heap ascending
    sort of an R8VEC
-   **R8VEC\_STUTTER** makes a "stuttering" copy of an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VEC\_COLEX\_NEXT3** generates vectors in colex order.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 December 2011.*
