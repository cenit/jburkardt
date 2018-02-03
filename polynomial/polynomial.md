POLYNOMIAL\
Multivariate Polynomials {#polynomial-multivariate-polynomials align="center"}
========================

------------------------------------------------------------------------

**POLYNOMIAL**, a C++ library which adds, multiplies, differentiates,
evaluates and prints multivariate polynomials in a space of M
dimensions.

Any polynomial in M variables can be written as a linear combination of
monomials in M variables. The "total degree" of the polynomial is the
maximum of the degrees of the monomials that it comprises. For instance,
a polynomial in M = 2 variables of total degree 3 might have the form:

            p(x,y) = c(0,0) x^0 y^0
                   + c(1,0) x^1 y^0 + c(0,1) x^0 y^1 
                   + c(2,0) x^2 y^0 + c(1,1) x^1 y^1 + c(0,2) x^0 y^2
                   + c(3,0) x^3 y^0 + c(2,1) x^2 y^1 + c(1,2) x^1 y^2 + c(0,3) x^0 y^3
          

The monomials in M variables can be regarded as a natural basis for the
polynomials in M variables.

When listing the monomials that form a polynomial, it is useful to have
an ordering that organizes them. One natural ordering can be illustrated
for the 3-dimensional case:

            1
            x, y, z
            x^2, xy, xz, y^2, yz, z^2
            x^3, x^2y, x^2z, xy^2, xyz, xz^2, y^3, y^2z, yz^2, z^3
            x^4, x^3y, ...
          

Here, a monomial precedes another if it has a lower degree. If the
monomials have the same degree, then a monomial precedes another if its
exponent vector lexically precedes that of the other. In other words, we
compare the two exponent vectors, reading from left to right, looking
for the first location where the exponents differ. The monomial with the
higher exponent at this point precedes the other.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POLYNOMIAL** is available in [a C
version](../../c_src/polynomial/polynomial.html) and [a C++
version](../../cpp_src/polynomial/polynomial.html) and [a FORTRAN77
version](../../f77_src/polynomial/polynomial.html) and [a FORTRAN90
version](../../f_src/polynomial/polynomial.html) and [a MATLAB
version](../../m_src/polynomial/polynomial.html) and [a Python
version](../../py_src/polynomial/polynomial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
routines for ranking, unranking, enumerating and randomly selecting
balanced sequences, cycles, graphs, Gray codes, subsets, partitions,
permutations, restricted growth functions, Pruefer codes and trees.

[HERMITE\_PRODUCT\_POLYNOMIAL](../../cpp_src/hermite_product_polynomial/hermite_product_polynomial.html),
a C++ library which defines Hermite product polynomials, creating a
multivariate polynomial as the product of univariate Hermite
polynomials.

[LEGENDRE\_PRODUCT\_POLYNOMIAL](../../cpp_src/legendre_product_polynomial/legendre_product_polynomial.html),
a C++ library which defines Legendre product polynomials, creating a
multivariate polynomial as the product of univariate Legendre
polynomials.

[MONOMIAL](../../cpp_src/monomial/monomial.html), a C++ library which
enumerates, lists, ranks, unranks and randomizes multivariate monomials
in a space of M dimensions, with total degree less than N, equal to N,
or lying within a given range.

[SET\_THEORY](../../cpp_src/set_theory/set_theory.html), a C++ library
which demonstrates MATLAB commands that implement various set theoretic
operations.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates, generates, ranks and unranks combinatorial objects including
combinations, compositions, Gray codes, index sets, partitions,
permutations, subsets, and Young tables.

### Source Code: {#source-code align="center"}

-   [polynomial.cpp](polynomial.cpp), the source code.
-   [polynomial.hpp](polynomial.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [polynomial\_prb.cpp](polynomial_prb.cpp), a sample calling program.
-   [polynomial\_prb\_output.txt](polynomial_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_FALL** computes the falling factorial function \[X\]\_N.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4VEC\_CONCATENATE** concatenates two I4VEC's.
-   **I4VEC\_PERMUTE** permutes an I4VEC in place.
-   **I4VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **MONO\_NEXT\_GRLEX** returns the next monomial in grlex order.
-   **MONO\_RANK\_GRLEX** computes the graded lexicographic rank of a
    monomial.
-   **MONO\_TOTAL\_NEXT\_GRLEX:** grlex next monomial with total degree
    equal to N.
-   **MONO\_UNRANK\_GRLEX** computes the composition of given grlex
    rank.
-   **MONO\_UPTO\_ENUM** enumerates monomials in D dimensions of degree
    up to N.
-   **MONO\_VALUE** evaluates a monomial.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **POLYNOMIAL\_ADD** adds two polynomials.
-   **POLYNOMIAL\_AXPY** adds a multiple of one polynomial to another.
-   **POLYNOMIAL\_COMPRESS** compresses a polynomial.
-   **POLYNOMIAL\_DIF** differentiates a polynomial.
-   **POLYNOMIAL\_MUL** multiplies two polynomials.
-   **POLYNOMIAL\_PRINT** prints a polynomial.
-   **POLYNOMIAL\_SCALE** scales a polynomial.
-   **POLYNOMIAL\_SORT** sorts the information in a polynomial.
-   **POLYNOMIAL\_VALUE** evaluates a polynomial.
-   **R8VEC\_CONCATENATE** concatenates two R8VEC's.
-   **R8VEC\_PERMUTE** permutes an R8VEC in place.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 01 January 2014.*
