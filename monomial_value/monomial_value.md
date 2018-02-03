MONOMIAL\_VALUE\
Evaluate a Monomial in M dimensions {#monomial_value-evaluate-a-monomial-in-m-dimensions align="center"}
===================================

------------------------------------------------------------------------

**MONOMIAL\_VALUE** is a C++ library which evaluates a monomial in M
dimensions.

Let X represent a point in M dimensional space, and let E be a vector of
M integers. The value of the monomial with exponents E at the point X is

            V(X) = X(1)^E(1) * X(2)^E(2) * ... * X(M)^E(M)
          

This library supplies a convenient method of evaluating V(X) at multiple
points X.

The factor 0.0\^0 might occur if, for some I, we have X(I) = 0.0 and
E(I) = 0. In this case, we take the corresponding value to be 1.

The factor 0.0\^E(I) will cause problems if E(I) is negative.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MONOMIAL\_VALUE** is available in [a C
version](../../c_src/monomial_value/monomial_value.md) and [a C++
version](../../master/monomial_value/monomial_value.md) and [a
FORTRAN77 version](../../f77_src/monomial_value/monomial_value.md) and
[a FORTRAN90 version](../../f_src/monomial_value/monomial_value.md)
and [a MATLAB version](../../m_src/monomial_value/monomial_value.md)
and [a Python version](../../py_src/monomial_value/monomial_value.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

### Source Code: {#source-code align="center"}

-   [monomial\_value.cpp](monomial_value.cpp), the source code.
-   [monomial\_value.hpp](monomial_value.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [monomial\_value\_prb.cpp](monomial_value_prb.cpp), a sample calling
    program.
-   [monomial\_value\_prb\_output.txt](monomial_value_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **I4VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom I4VEC.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_NINT** rounds the entries of an R8MAT.
-   **R8MAT\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8MAT.
-   **R8VEC\_ONES\_NEW** creates a vector of 1's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 18 August 2014.*
