BURGERS\_SOLUTION\
Exact Solutions of Time Dependent 1D Viscous Burgers Equation {#burgers_solution-exact-solutions-of-time-dependent-1d-viscous-burgers-equation align="center"}
=============================================================

------------------------------------------------------------------------

**BURGERS\_SOLUTION** is a C++ library which evaluates exact solutions
of the time-dependent 1D viscous Burgers equation.

The form of the Burgers equation considered here is:

            du       du        d^2 u
            -- + u * -- = nu * -----
            dt       dx        dx^2
          

for -1.0 &lt; x &lt; +1.0, and 0.0 &lt; t.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BURGERS\_SOLUTION** is available in [a C
version](../../c_src/burgers_solution/burgers_solution.html) and [a C++
version](../../cpp_src/burgers_solution/burgers_solution.html) and [a
FORTRAN77 version](../../f77_src/burgers_solution/burgers_solution.html)
and [a FORTRAN90
version](../../f_src/burgers_solution/burgers_solution.html) and [a
MATLAB version](../../m_src/burgers_solution/burgers_solution.html) and
[a Python version](../../py_src/burgers_solution/burgers_solution.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BURGERS](../../datasets/burgers/burgers.html), a dataset directory
which contains 40 solutions of the Burgers equation in one space
dimension and time, at equally spaced times from 0 to 1, with values at
41 equally spaced nodes in \[0,1\];

[FD1D\_BURGERS\_LAX](../../cpp_src/fd1d_burgers_lax/fd1d_burgers_lax.html),
a C++ program which applies the finite difference method and the
Lax-Wendroff method to solve the non-viscous Burgers equation in one
spatial dimension and time.

[FD1D\_BURGERS\_LEAP](../../cpp_src/fd1d_burgers_leap/fd1d_burgers_leap.html),
a C++ program which applies the finite difference method and the
leapfrog approach to solve the non-viscous Burgers equation in one
spatial dimension and time.

### Reference: {#reference align="center"}

1.  Claude Basdevant, Michel Deville, Pierre Haldenwang, J Lacroix, J
    Ouazzani, Roger Peyret, Paolo Orlandi, Anthony Patera,\
    Spectral and finite difference solutions of the Burgers equation,\
    Computers and Fluids,\
    Volume 14, Number 1, 1986, pages 23-41.

### Source Code: {#source-code align="center"}

-   [burgers\_solution.cpp](burgers_solution.cpp), the source code.
-   [burgers\_solution.hpp](burgers_solution.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [burgers\_solution\_prb.cpp](burgers_solution_prb.cpp), a sample
    calling program.
-   [burgers\_solution\_prb\_output.txt](burgers_solution_prb_output.txt),
    the output file.
-   [burgers\_solution\_test01.txt](burgers_solution_test01.txt), a data
    file of solution \#1 values for -1 &lt;= x &lt;= +1, 0 &lt;= t &lt;=
    3/pi, using 11 grid points in x and in t.
-   [burgers\_solution\_test02.txt](burgers_solution_test02.txt), a data
    file of solution \#1 values for -1 &lt;= x &lt;= +1, 0 &lt;= t &lt;=
    3/pi, using 41 grid points in x and in t.
-   [burgers\_solution\_test03.txt](burgers_solution_test03.txt), a data
    file of solution \#2 values for 0 &lt;= x &lt;= 2 Pi, 0 &lt;= t
    &lt;= 1, using 11 grid points in x and in t.
-   [burgers\_solution\_test04.txt](burgers_solution_test04.txt), a data
    file of solution \#2 values for 0 &lt;= x &lt;= 2 Pi, 0 &lt;= t
    &lt;= 1, using 41 grid points in x and in t.

### List of Routines: {#list-of-routines align="center"}

-   **BURGERS\_VISCOUS\_TIME\_EXACT1** evaluates solution \#1 to the
    Burgers equation.
-   **BURGERS\_VISCOUS\_TIME\_EXACT1** evaluates solution \#2 to the
    Burgers equation.
-   **HERMITE\_EK\_COMPUTE** computes a Gauss-Hermite quadrature rule.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_EVEN\_NEW** returns an R8VEC of values evenly spaced
    between ALO and AHI.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 26 September 2015.*
