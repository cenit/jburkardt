FEM1D\_LAGRANGE\
1D Finite Element Code Using Lagrange Basis Polynomials {#fem1d_lagrange-1d-finite-element-code-using-lagrange-basis-polynomials align="center"}
=======================================================

------------------------------------------------------------------------

**FEM1D\_LAGRANGE** is a C++ library which sets up the matrices and
vectors associated with the finite element method (FEM) solution of a
boundary value problem (BVP) -u''+u=f(x), using Lagrange basis
polynomials.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D\_LAGRANGE** is available in [a C
version](../../c_src/r8lib/r8lib.html) and [a C++
version](../../cpp_src/r8lib/r8lib.html) and [a FORTRAN77
version](../../f77_src/r8lib/r8lib.html) and [a FORTRAN90
version](../../f_src/r8lib/r8lib.html) and [a MATLAB
version](../../m_src/r8lib/r8lib.html).

### Related Programs: {#related-programs align="center"}

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method (FEM) to a 1D linear two point boundary value
problem (BVP).

[LAGRANGE\_INTERP\_1D](../../cpp_src/lagrange_interp_1d/lagrange_interp_1d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

### Source Code: {#source-code align="center"}

-   [fem1d\_lagrange.cpp](fem1d_lagrange.cpp), the source code.
-   [fem1d\_lagrange.hpp](fem1d_lagrange.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem1d\_lagrange\_prb.cpp](fem1d_lagrange_prb.cpp), a sample calling
    program.
-   [fem1d\_lagrange\_prb\_output.txt](fem1d_lagrange_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **FEM1D\_LAGRANGE\_STIFFNESS** evaluates the Lagrange polynomial
    stiffness matrix.
-   **LAGRANGE\_DERIVATIVE** evaluates the Lagrange basis derivative.
-   **LAGRANGE\_VALUE** evaluates the Lagrange basis polynomials.
-   **LEGENDRE\_SET** sets abscissas and weights for Gauss-Legendre
    quadrature.
-   **R8MAT\_FS** factors and solves a system with one right hand side.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 19 November 2014.*
