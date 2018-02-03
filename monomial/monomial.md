MONOMIAL\
Multivariate Monomials {#monomial-multivariate-monomials align="center"}
======================

------------------------------------------------------------------------

**MONOMIAL** is a C++ library which enumerates, lists, ranks, unranks
and randomizes multivariate monomials in a space of D dimensions, with
total degree less than N, equal to N, or lying within a given range.

A (univariate) monomial in 1 variable x is simply any (nonnegative
integer) power of x:

            1, x, x^2, x^3, ...
          

The exponent of x is termed the degree of the monomial.

Since any polynomial p(x) can be written as

            p(x) = c(0) * x^0 + c(1) * x^1 + c(2) * x^2 + ... + c(n) * x^n
          

we may regard the monomials as a natural basis for the space of
polynomials, in which case the coefficients may be regarded as the
coordinates of the polynomial.

A (multivariate) monomial in D variables x(1), x(2), ..., x(d) is a
product of the form

            x(1)^e(1) * x(2)^e(2) * ... * x(d)^e(d)
          

where e(1) through e(d) are nonnegative integers. The sum of the
exponents is termed the degree of the monomial.

Any polynomial in D variables can be written as a linear combination of
monomials in D variables. The "total degree" of the polynomial is the
maximum of the degrees of the monomials that it comprises. For instance,
a polynomial in D = 2 variables of total degree 3 might have the form:

            p(x,y) = c(0,0) x^0 y^0
                   + c(1,0) x^1 y^0 + c(0,1) x^0 y^1 
                   + c(2,0) x^2 y^0 + c(1,1) x^1 y^1 + c(0,2) x^0 y^2
                   + c(3,0) x^3 y^0 + c(2,1) x^2 y^1 + c(1,2) x^1 y^2 + c(0,3) x^0 y^3
          

The monomials in D variables can be regarded as a natural basis for the
polynomials in D variables.

For multidimensional polynomials, a number of orderings are possible.
Two common orderings are "grlex" (graded lexicographic) and "grevlex"
(graded reverse lexicographic). Once an ordering is imposed, each
monomial in D variables has a rank, and it is possible to ask (and
answer!) the following questions:

How many monomials are there in D dimensions, of degree N, or up to and
including degree N, or between degrees N1 and N2?

Can you list in rank order the monomials in D dimensions, of degree N,
or up to and including degree N, or between degrees N1 and N2?

Given a monomial in D dimensions, can you determine the rank it holds in
the list of all such monomials?

Given a rank, can you determine the monomial in D dimensions that
occupies that position in the list of all such monomials?

Can you select at random a monomial in D dimensions from the set of all
such monomials of degree up to N?

As mentioned, two common orderings for monomials are "grlex" (graded
lexicographic) and "grevlex" (graded reverse lexicographic). The word
"graded" in both names indicates that, for both orderings, one monomial
is "less" than another if its total degree is less. Thus, for both
orderings, xyz\^2 is less than y\^5 because a monomial of degree 4 is
less than a monomial of degree 5.

But what happens when we compare two monomials of the same degree? For
the lexicographic ordering, one monomial is less than another if its
vector of exponents is lexicographically less. Given two vectors
v1=(x1,y1,z1) and v2=(x2,y2,z2), v1 is less than v2 if

-   x1 is less than x2;
-   or x1 = x2, but y1 is less than y2;
-   or x1 = x2, and y1 = y2, but z1 is less than z2;

(For a graded ordering, the third case can't occur, since we have
assumed the two monomials have the same degree, and hence the exponents
have the same sum.)

Thus, for the grlex ordering, we first order by degree, and then for two
monomials of the same degree, we use the lexicographic ordering. Here is
how the grlex ordering would arrange monomials in D=3 dimensions.

            #  monomial   expon
           --  ---------  -----
            1  1          0 0 0

            2        z    0 0 1
            3     y       0 1 0
            4  x          1 0 0

            5        z^2  0 0 2
            6     y  z    0 1 1
            7     y^2     0 2 0
            8  x     z    1 0 1
            9  x  y       1 1 0
           10  x^2        2 0 0

           11        z^3  0 0 3
           12     y  z^2  0 1 2
           13     y^2z    0 2 1
           14     y^3     0 3 0
           15  x     z^2  1 0 2
           16  x  y  z    1 1 1
           17  x  y^2     1 2 0
           18  x^2   z    2 0 1
           19  x^2y       2 1 0
           20  x^3        3 0 0

           21        z^4  0 0 4
           22     y  z^3  0 1 3
           23     y^2z^2  0 2 2
           24     y^3z    0 3 1
           25     y^4     0 4 0
           26  x     z^3  1 0 3
           27  x  y  z^2  1 1 2
           28  x  y^2z    1 2 1
           29  x  y^3     1 3 0
           30  x^2   z^2  2 0 2
           31  x^2y  z    2 1 1
           32  x^2y^2     2 2 0
           33  x^3   z    3 0 1
           34  x^3y       3 1 0
           35  x^4        4 0 0

           36        z^5  0 0 5
          ...  .........  .....
          

For the reverse lexicographic ordering, given two vectors, v1=(x1,y1,z1)
and v2=(x2,y2,z2), v1 is less than v2 if:

-   z1 is greater than z2;
-   or z1 = z2 but y1 is greater than y2;
-   or z1 = z2, and y1 = y2, but x1 is greater than x2.

(For a graded ordering, the third case can't occur, since we have
assumed the two monomials have the same degree, and hence the exponents
have the same sum.)

Thus, for the grevlex ordering, we first order by degree, and then for
two monomials of the same degree, we use the reverse lexicographic
ordering. Here is how the grevlex ordering would arrange monomials in
D=3 dimensions.

            #  monomial   expon
           --  ---------  -----
            1  1          0 0 0

            2        z    0 0 1
            3     y       0 1 0
            4  x          1 0 0

            5        z^2  0 0 2
            6     y  z    0 1 1
            7  x     z    1 0 1
            8     y^2     0 2 0
            9  x  y       1 1 0
           10  x^2        2 0 0

           11        z^3  0 0 3
           12     y  z^2  0 1 2
           13  x     z^2  1 0 2
           14     y^2z    0 2 1
           15  x  y  z    1 1 1
           16  x^2   z    2 0 1
           17     y^3     0 3 0
           18  x  y^2     1 2 0
           19  x^2y       2 1 0
           20  x^3        3 0 0

           21        z^4  0 0 4
           22     y  z^3  0 1 3
           23  x     z^3  1 0 3
           24     y^2z^2  0 2 2
           25  x  y  z^2  1 1 2
           26  x^2   z^2  2 0 2
           27     y^3z^1  0 3 1
           28  x  y^2z    1 2 1
           29  x^2y  z    2 1 1
           30  x^3   z    3 0 1
           31     y^4     0 4 0
           32  x  y^3     1 3 0
           33  x^2y^2     2 2 0
           34  x^3y       3 1 0
           35  x^4        4 0 0

           36        z^5  0 0 5
          ...  .........  .....
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MONOMIAL** is available in [a C
version](../../c_src/monomial/monomial.html) and [a C++
version](../../cpp_src/monomial/monomial.html) and [a FORTRAN77
version](../../f77_src/monomial/monomial.html) and [a FORTRAN90
version](../../f_src/monomial/monomial.html) and [a MATLAB
version](../../m_src/monomial/monomial.html) and [a Python
version](../../py_src/monomial/monomial.html).

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

[POLYNOMIAL](../../cpp_src/polynomial/polynomial.html), a C++ library
which adds, multiplies, differentiates, evaluates and prints
multivariate polynomials in a space of M dimensions.

[SET\_THEORY](../../cpp_src/set_theory/set_theory.html), a C++ library
which demonstrates MATLAB commands that implement various set theoretic
operations.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates, generates, ranks and unranks combinatorial objects including
combinations, compositions, Gray codes, index sets, partitions,
permutations, subsets, and Young tables.

### Source Code: {#source-code align="center"}

-   [monomial.cpp](monomial.cpp), the source code.
-   [monomial.hpp](monomial.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [monomial\_prb.cpp](monomial_prb.cpp), a sample calling program.
-   [monomial\_prb\_output.txt](monomial_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **MONO\_BETWEEN\_ENUM** enumerates monomials in D dimensions of
    degrees in a range.
-   **MONO\_BETWEEN\_NEXT\_GREVLEX:** grevlex next monomial with total
    degree between N1 and N2.
-   **MONO\_BETWEEN\_NEXT\_GRLEX:** grlex next monomial, degree between
    N1 and N2.
-   **MONO\_BETWEEN\_RANDOM:** random monomial with total degree between
    N1 and N2.
-   **MONO\_RANK\_GREVLEX** returns the grevlex rank of a monomial in D
    dimensions.
-   **MONO\_TOTAL\_ENUM** enumerates monomials in D dimensions of degree
    equal to N.
-   **MONO\_TOTAL\_NEXT\_GREVLEX:** grevlex next monomial with total
    degree equal to N.
-   **MONO\_TOTAL\_NEXT\_GRLEX:** grlex next monomial with total degree
    equal to N.
-   **MONO\_TOTAL\_RANDOM:** random monomial with total degree equal
    to N.
-   **MONO\_UNRANK\_GREVLEX** returns the monomial in D dimensions of
    given grevlex rank.
-   **MONO\_UPTO\_ENUM** enumerates monomials in D dimensions of degree
    up to N.
-   **MONO\_UPTO\_NEXT\_GREVLEX:** grevlex next monomial with total
    degree up to N.
-   **MONO\_UPTO\_NEXT\_GRLEX:** grlex next monomial with total degree
    up to N.
-   **MONO\_UPTO\_RANDOM:** random monomial with total degree less than
    or equal to N.
-   **RANK\_DEGREE\_GREVLEX** finds the degree of a monomial of given
    grevlex rank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 November 2013.*
