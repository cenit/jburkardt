LAGRANGE\_ND\
Multivariate Lagrange Interpolation {#lagrange_nd-multivariate-lagrange-interpolation align="center"}
===================================

------------------------------------------------------------------------

**LAGRANGE\_ND** is a C++ library which is given a set of ND points
X(\*) in D-dimensional space, and constructs a family of ND Lagrange
polynomials P(\*)(X), associating polynomial P(i) with point X(i), such
that, for 1 &lt;= i &lt;= ND,

            P(i)(X(i)) = 1
          

but, if i =/= j

            P(i)(X(j)) = 0
          

The library currently includes the following primary routines:

-   **LAGRANGE\_COMPLETE** requires that the number of data points ND is
    exactly **equal** to R, the number of monomials in D dimensions of
    total degree N or less;
-   **LAGRANGE\_COMPLETE2**, a version of LAGRANGE\_COMPLETE with
    improved "pivoting";
-   **LAGRANGE\_PARTIAL** allows the number of data points ND to be
    **less than or equal** to R, the number of monomials in D dimensions
    of total degree N or less;
-   **LAGRANGE\_PARTIAL2**, a version of LAGRANGE\_PARTIAL with improved
    "pivoting".

The set of ND polynomials P(\*)(X) are returned as a set of three
arrays:

-   **PO(i)** contains the order, the number of nonzero coefficients,
    for polynomial i;
-   **PC(i,j)** contains the coefficient of the j-th term in polynomial
    i;
-   **PE(i,j)** contains a code for the exponents of the monomial
    associated with the j-th term in polynomial i.

Each value of PE(i,j) is an exponent codes which can be converted to a
vector of exponents that define a monomial. For example, if we are
working in spatial dimension D=3, then if PE(i,j)=13, the corresponding
exponent vector is (0,2,1), so this means that the j-th term in
polynomial i is

            PC(i,j) * x^0 y^2 z^1
          

An exponent code can be converted to an exponent vector by calling
mono\_unrank\_grlex().

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGRANGE\_ND** is available in [a C++
version](../../master/lagrange_nd/lagrange_nd.md) and [a FORTRAN90
version](../../f_src/lagrange_nd/lagrange_nd.md) and [a MATLAB
version](../../m_src/lagrange_nd/lagrange_nd.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_ND](../../master/lagrange_interp_nd/lagrange_interp_nd.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of multivariate data, so that p(x(i)) = y(i).

[SPARSE\_INTERP\_ND](../../master/sparse_interp_nd/sparse_interp_nd.md)
a C++ library which can be used to define a sparse interpolant to a
function f(x) of a multidimensional argument.

[TEST\_INTERP\_ND](../../master/test_interp_nd/test_interp_nd.md), a
C++ library which defines test problems for interpolation of data z(x),
depending on an M-dimensional argument.

### Reference: {#reference align="center"}

1.  Philip Davis,\
    Interpolation and Approximation,\
    Dover, 1975,\
    ISBN: 0-486-62495-1,\
    LC: QA221.D33
2.  Tomas Sauer, Yuan Xu,\
    On multivariate Lagrange interpolation,\
    Mathematics of Computation,\
    Volume 64, Number 211, July 1995, pages 1147-1170.

### Source Code: {#source-code align="center"}

-   [lagrange\_nd.cpp](lagrange_nd.cpp), the source code.
-   [lagrange\_nd.hpp](lagrange_nd.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lagrange\_nd\_prb.cpp](lagrange_nd_prb.cpp), a sample calling
    program.
-   [lagrange\_nd\_prb\_output.txt](lagrange_nd_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4VEC\_CONCATENATE** concatenates two I4VEC's.
-   **I4VEC\_PERMUTE** permutes an I4VEC in place.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **LAGRANGE\_COMPLETE:** Complete Lagrange polynomial basis from
    data.
-   **LAGRANGE\_COMPLETE2:** Complete Lagrange polynomial basis from
    data.
-   **LAGRANGE\_PARTIAL:** Partial Lagrange polynomial basis from data.
-   **LAGRANGE\_PARTIAL2:** Partial Lagrange polynomial basis from data.
-   **MONO\_BETWEEN\_ENUM** enumerates monomials in D dimensions of
    degrees in a range.
-   **MONO\_BETWEEN\_NEXT\_GRLEX:** grlex next monomial, degree between
    N1 and N2.
-   **MONO\_NEXT\_GRLEX** returns the next monomial in grlex order.
-   **MONO\_TOTAL\_ENUM** enumerates monomials in D dimensions of degree
    equal to N.
-   **MONO\_TOTAL\_NEXT\_GRLEX:** grlex next monomial with total degree
    equal to N.
-   **MONO\_UNRANK\_GRLEX** computes the composition of given grlex
    rank.
-   **MONO\_UPTO\_ENUM** enumerates monomials in D dimensions of degree
    up to N.
-   **MONO\_VALUE** evaluates a monomial.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **POLYNOMIAL\_AXPY** adds a multiple of one polynomial to another.
-   **POLYNOMIAL\_COMPRESS** compresses a polynomial.
-   **POLYNOMIAL\_PRINT** prints a polynomial.
-   **POLYNOMIAL\_SORT** sorts the information in a polynomial.
-   **POLYNOMIAL\_VALUE** evaluates a polynomial.
-   **R8MAT\_IS\_IDENTITY** determines if an R8MAT is the identity.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_CONCATENATE** concatenates two R8VEC's.
-   **R8VEC\_PERMUTE** permutes an R8VEC in place.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 25 January 2014.*
