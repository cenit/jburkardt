LEGENDRE\_PRODUCT\_POLYNOMIAL\
Multivariate Products of Legendre Polynomials {#legendre_product_polynomial-multivariate-products-of-legendre-polynomials align="center"}
=============================================

------------------------------------------------------------------------

**LEGENDRE\_PRODUCT\_POLYNOMIAL**, a C++ library which defines a
Legendre product polynomial (LPP), creating a multivariate polynomial as
the product of univariate Legendre polynomials.

The Legendre polynomials are a polynomial sequence L(I,X), with
polynomial I having degree I.

The first few Legendre polynomials are

            0: 1
            1: x
            2: 3/2 x^2 - 1/2
            3: 5/2 x^3 - 3/2 x
            4: 35/8 x^4 - 30/8 x^2 + 3/8
            5: 63/8 x^5 - 70/8 x^3 + 15/8 x
          

A Legendre product polynomial may be defined in a space of M dimensions
by choosing M indices. To evaluate the polynomial at a point X, compute
the product of the corresponding Legendre polynomials, with each the
I-th polynomial evaluated at the I-th coordinate:

            L((I1,I2,...IM),X) = L(1,X(1)) * L(2,X(2)) * ... * L(M,X(M)).
          

Families of polynomials which are formed in this way can have useful
properties for interpolation, derivable from the properties of the 1D
family.

While it is useful to generate a Legendre product polynomial from its
index set, and it is easy to evaluate it directly, the sum of two
Legendre product polynomials cannot be reduced to a single Legendre
product polynomial. Thus, it may be useful to generate the Legendre
product polynomial from its indices, but then to convert it to a
standard polynomial form.

The representation of arbitrary multivariate polynomials can be
complicated. In this library, we have chosen a representation involving
the spatial dimension M, and three pieces of data, O, C and E.

-   O is the number of terms in the polynomial.
-   C() is a real vector of length O, containing the coefficients of
    each term.
-   E() is an integer vector of length O, which defines the index (the
    exponents of X(1) through X(M)) of each term.

The exponent indexing is done in a natural way, suggested by the
following indexing for the case M = 2:

            1: x^0 y^0  
            2: x^0 y^1
            3: x^1 y^0
            4: x^0 y^2
            5: x^1 y^1
            6; x^2 y^0
            7: x^0 y^3
            8: x^1 y^2
            9: x^2 y^1
           10: x^3 y^0
           ...
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LEGENDRE\_PRODUCT\_POLYNOMIAL** is available in [a C
version](../../c_src/legendre_product_polynomial/legendre_product_polynomial.html)
and [a C++
version](../../cpp_src/legendre_product_polynomial/legendre_product_polynomial.html)
and [a FORTRAN77
version](../../f77_src/legendre_product_polynomial/legendre_product_polynomial.html)
and [a FORTRAN90
version](../../f_src/legendre_product_polynomial/legendre_product_polynomial.html)
and [a MATLAB
version](../../m_src/legendre_product_polynomial/legendre_product_polynomial.html)
and [a Python
version](../../py_src/legendre_product_polynomial/legendre_product_polynomial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMBO](../../cpp_src/combo/combo.html), a C library which includes
routines for ranking, unranking, enumerating and randomly selecting
balanced sequences, cycles, graphs, Gray codes, subsets, partitions,
permutations, restricted growth functions, Pruefer codes and trees.

[HERMITE\_PRODUCT\_POLYNOMIAL](../../cpp_src/hermite_product_polynomial/hermite_product_polynomial.html),
a C++ library which defines Hermite product polynomials, creating a
multivariate polynomial as the product of univariate Hermite
polynomials.

[LEGENDRE\_POLYNOMIAL](../../cpp_src/legendre_polynomial/legendre_polynomial.html),
a C library which evaluates the Legendre polynomial and associated
functions.

[MONOMIAL](../../cpp_src/monomial/monomial.html), a C++ library which
enumerates, lists, ranks, unranks and randomizes multivariate monomials
in a space of M dimensions, with total degree less than N, equal to N,
or lying within a given range.

[POLPAK](../../cpp_src/polpak/polpak.html), a C++ library which
evaluates a variety of mathematical functions, including Chebyshev,
Gegenbauer, Hermite, Jacobi, Laguerre, Legendre polynomials, and the
Collatz sequence.

[POLYNOMIAL](../../cpp_src/polynomial/polynomial.html), a C++ library
which adds, multiplies, differentiates, evaluates and prints
multivariate polynomials in a space of M dimensions.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates, generates, ranks and unranks combinatorial objects including
combinations, compositions, Gray codes, index sets, partitions,
permutations, subsets, and Young tables.

### Source Code: {#source-code align="center"}

-   [lpp.cpp](lpp.cpp), the source code.
-   [lpp.sh](lpp.sh), BASH commands to compile the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lpp\_prb.cpp](lpp_prb.cpp) a sample calling program.
-   [lpp\_prb\_output.txt](lpp_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_ENUM** returns the number of compositions of the integer N
    into K parts.
-   **COMP\_NEXT\_GRLEX** returns the next composition in grlex order.
-   **COMP\_RANDOM\_GRLEX:** random composition with degree less than or
    equal to NC.
-   **COMP\_RANK\_GRLEX** computes the graded lexicographic rank of a
    composition.
-   **COMP\_UNRANK\_GRLEX** computes the composition of given grlex
    rank.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_PERMUTE** permutes an I4VEC in place.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom I4VEC.
-   **LP\_COEFFICIENTS:** coefficients of Legendre polynomials P(n,x).
-   **LP\_VALUE** evaluates the Legendre polynomials P(n,x).
-   **LP\_VALUES** returns values of the Legendre polynomials P(n,x).
-   **LPP\_TO\_POLYNOMIAL** writes a Legendre Product Polynomial as a
    polynomial.
-   **LPP\_VALUE** evaluates a Legendre Product Polynomial at several
    points X.
-   **MONO\_NEXT\_GRLEX** returns the next monomial in grlex order.
-   **MONO\_PRINT** prints a monomial.
-   **MONO\_RANK\_GRLEX** computes the graded lexicographic rank of a
    monomial.
-   **MONO\_UNRANK\_GRLEX** computes the composition of given grlex
    rank.
-   **MONO\_UPTO\_ENUM** enumerates monomials in M dimensions of degree
    up to N.
-   **MONO\_UPTO\_NEXT\_GRLEX:** grlex next monomial with total degree
    up to N.
-   **MONO\_UPTO\_RANDOM:** random monomial with total degree less than
    or equal to N.
-   **MONO\_VALUE** evaluates a monomial.
-   **PERM\_CHECK0** checks a 0-based permutation.
-   **PERM\_UNIFORM\_NEW** selects a random permutation of N objects.
-   **POLYNOMIAL\_COMPRESS** compresses a polynomial.
-   **POLYNOMIAL\_PRINT** prints a polynomial.
-   **POLYNOMIAL\_SORT** sorts the information in a polynomial.
-   **POLYNOMIAL\_VALUE** evaluates a polynomial.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_UNIFORM\_AB\_NEW** returns a new scaled pseudorandom R8MAT.
-   **R8VEC\_PERMUTE** permutes an R8VEC in place.
-   **R8VEC\_PRINT** prints an R8VEC
-   **R8VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 November 2014.*
