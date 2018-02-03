HERMITE\_PRODUCT\_POLYNOMIAL\
Multivariate Products of Hermite Polynomials {#hermite_product_polynomial-multivariate-products-of-hermite-polynomials align="center"}
============================================

------------------------------------------------------------------------

**HERMITE\_PRODUCT\_POLYNOMIAL**, a C++ library which defines a Hermite
product polynomial (HePP), creating a multivariate polynomial as the
product of univariate Hermite polynomials.

The Hermite polynomials are a polynomial sequence He(i,x), with
polynomial I having degree I.

The first few Hermite polynomials He(i,x) are

            0: 1
            1: x
            2: x^2 -  1
            3: x^3 -  3 x
            4: x^4 -  6 x^2 + 3
            5: x^5 - 10 x^3 + 15 x
          

A Hermite product polynomial may be defined in a space of M dimensions
by choosing M indices. To evaluate the polynomial at a point X, compute
the product of the corresponding Hermite polynomials, with each the I-th
polynomial evaluated at the I-th coordinate:

            He((I1,I2,...IM),X) = He(1,X(1)) * He(2,X(2)) * ... * He(M,X(M)).
          

Families of polynomials which are formed in this way can have useful
properties for interpolation, derivable from the properties of the 1D
family.

While it is useful to generate a Hermite product polynomial from its
index set, and it is easy to evaluate it directly, the sum of two
Hermite product polynomials cannot be reduced to a single Hermite
product polynomial. Thus, it may be useful to generate the Hermite
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

**HERMITE\_PRODUCT\_POLYNOMIAL** is available in [a C
version](../../c_src/hermite_product_polynomial/hermite_product_polynomial.html)
and [a C++
version](../../cpp_src/hermite_product_polynomial/hermite_product_polynomial.html)
and [a FORTRAN77
version](../../f77_src/hermite_product_polynomial/hermite_product_polynomial.html)
and [a FORTRAN90
version](../../f_src/hermite_product_polynomial/hermite_product_polynomial.html)
and [a MATLAB
version](../../m_src/hermite_product_polynomial/hermite_product_polynomial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
routines for ranking, unranking, enumerating and randomly selecting
balanced sequences, cycles, graphs, Gray codes, subsets, partitions,
permutations, restricted growth functions, Pruefer codes and trees.

[HERMITE\_POLYNOMIAL](../../cpp_src/hermite_polynomial/hermite_polynomial.html),
a C++ library which evaluates the Hermite polynomial and associated
functions.

[LEGENDRE\_PRODUCT\_POLYNOMIAL](../../cpp_src/legendre_product_polynomial/legendre_product_polynomial.html),
a C++ library which defines Legendre product polynomials, creating a
multivariate polynomial as the product of univariate Legendre
polynomials.

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

-   [hpp.cpp](hpp.cpp), the source code.
-   [hpp.hpp](hpp.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hpp\_prb.cpp](hpp_prb.cpp), a sample calling program.
-   [hpp\_prb\_output.txt](hpp_prb_output.txt), the output file.

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
-   **HEP\_COEFFICIENTS:** coefficients of He(n,x).
-   **HEP\_VALUE** evaluates the Hermite polynomials He(n,x).
-   **HEP\_VALUES:** tabulated values of He(i,x).
-   **HEPP\_TO\_POLYNOMIAL** writes a Hermite Product Polynomial as a
    polynomial.
-   **HEPP\_VALUE** evaluates a Hermite Product Polynomial at several
    points X.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_PERMUTE** permutes an I4VEC in place.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an I4VEC.
-   **I4VEC\_SUM** returns the sum of the entries of an I4VEC.
-   **MONO\_RANK\_GRLEX** computes the graded lexicographic rank of a
    monomial.
-   **MONO\_UNRANK\_GRLEX** computes the monomial of given grlex rank.
-   **MONO\_VALUE** evaluates a monomial.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **POLYNOMIAL\_COMPRESS** compresses a polynomial.
-   **POLYNOMIAL\_PRINT** prints a polynomial.
-   **POLYNOMIAL\_SORT** sorts the information in a polynomial.
-   **POLYNOMIAL\_VALUE** evaluates a polynomial.
-   **R8VEC\_PERMUTE** permutes an R8VEC in place.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_AB** returns a scaled pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 October 2014.*
