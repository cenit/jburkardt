MULTIGRID\_POISSON\_1D\
Multigrid Solver for 1D Poisson Problem {#multigrid_poisson_1d-multigrid-solver-for-1d-poisson-problem align="center"}
=======================================

------------------------------------------------------------------------

**MULTIGRID\_POISSON\_1D** is a C++ library which applies a multigrid
method to solve the linear system associated with a discretized version
of the 1D Poisson equation.

The 1D Poisson equation is assumed to have the form

            -u''(x) = f(x), for a < x < b
             u(a) = ua, u(b) = ub
          

Let K be a small positive integer called the mesh index, and let N =
2\^K be the corresponding number of uniform subintervals into which
\[A,B\] is divided. Assigning a value U(I) to each of the N+1 equally
spaced nodes with coordinate X(I), we approximate the equation by

            -U(i-1) + 2 U(i) - U(i+1)
            -------------------------   = f( X(i) ), 1 < I < N+1
                      h^2

            U(1) = ua, U(N+1) = ub.
          

It remains to solve the linear system for the desired values of U. This
could be done directly, or iteratively. An iterative method such as
Jacobi, Gauss-Seidel or SOR might be suitable, but experience shows that
the convergence rate of these iterative methods decreases drastically as
the value of K is increased - that is, as a more refined and accurate
answer is sought.

The multigrid method defines a nested set of grids, and corresponding
solutions, to the problem, and applies an iterative linear solver. By
transfering information from one grid to a finer or coarser one, a more
rapid convergence behavior can be encouraged.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MULTIGRID\_POISSON\_1D** is available in [a C
version](../../c_src/multigrid_poisson_1d/multigrid_poisson_1d.html) and
[a C++
version](../../cpp_src/multigrid_poisson_1d/multigrid_poisson_1d.html)
and [a FORTRAN77
version](../../f77_src/multigrid_poisson_1d/multigrid_poisson_1d.html)
and [a FORTRAN90
version](../../f_src/multigrid_poisson_1d/multigrid_poisson_1d.html) and
[a MATLAB
version](../../m_src/multigrid_poisson_1d/multigrid_poisson_1d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CYCLIC\_REDUCTION](../../cpp_src/cyclic_reduction/cyclic_reduction.html),
a C++ library which solves a tridiagonal linear system using cyclic
reduction.

[FD1D\_BVP](../../cpp_src/fd1d_bvp/fd1d_bvp.html), a C program which
applies the finite difference method to a two point boundary value
problem in one spatial dimension.

[MGMRES](../../cpp_src/mgmres/mgmres.html), a C++ library which applies
the restarted GMRES algorithm to solve a sparse linear system, by Lili
Ju.

### Reference: {#reference align="center"}

1.  William Briggs, Van Emden Henson, Steve McCormick,\
    A Multigrid Tutorial,\
    SIAM, 2000,\
    ISBN13: 978-0-898714-62-3,\
    LC: QA377.B75.
2.  William Hager,\
    Applied Numerical Linear Algebra,\
    Prentice-Hall, 1988,\
    ISBN13: 978-0130412942,\
    LC: QA184.H33.

### Source Code: {#source-code align="center"}

-   [multigrid\_poisson\_1d.cpp](multigrid_poisson_1d.cpp), the source
    code.
-   [multigrid\_poisson\_1d.hpp](multigrid_poisson_1d.hpp), the include
    file

### Examples and Tests: {#examples-and-tests align="center"}

-   [multigrid\_poisson\_1d\_prb.cpp](multigrid_poisson_1d_prb.cpp), a
    sample calling program.
-   [multigrid\_poisson\_1d\_prb\_output.txt](multigrid_poisson_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CTOF** transfers data from a coarse to a finer grid.
-   **FTOC** transfers data from a fine grid to a coarser grid.
-   **GAUSS\_SEIDEL** carries out one step of a Gauss-Seidel iteration.
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_POWER** returns the value of I\^J.
-   **MONOGRID\_POISSON\_1D** solves a 1D PDE, using the Gauss-Seidel
    method.
-   **MULTIGRID\_POISSON\_1D** solves a 1D PDE using the multigrid
    method.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 December 2011.*
