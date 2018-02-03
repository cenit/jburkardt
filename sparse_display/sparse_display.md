SPARSE\_DISPLAY\
Sparsity Pattern of a Matrix {#sparse_display-sparsity-pattern-of-a-matrix align="center"}
============================

------------------------------------------------------------------------

**SPARSE\_DISPLAY** is a C++ library which can read information defining
a matrix of numbers and display the sparsity pattern or location of the
nonzero elements using gnuplot. This operation is already available in
the built-in MATLAB "spy" command.

The user can call "spy\_ge" and pass in a matrix, in general (GE)
format; the routine will then locate the nonzero entries, and write out
a data file and a command file which together can be used to instruct
gnuplot to create a sparsity plot.

If the user already has a file containing a list of pairs of indices
(I,J) corresponding to nonzero matrix entries, then the user can call
"spy\_file", which will write out a command file only. Together, the
user data file and the command file can be used to instruct gnuplot to
create a sparsity plot.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPARSE\_DISPLAY** is available in [a C
version](../../c_src/sparse_display/sparse_display.html) and [a C++
version](../../cpp_src/sparse_display/sparse_display.html) and [a
FORTRAN77 version](../../f77_src/sparse_display/sparse_display.html) and
[a FORTRAN90 version](../../f_src/sparse_display/sparse_display.html)
and [a MATLAB version](../../m_src/sparse_display/sparse_display.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CG](../../cpp_src/cg/cg.html), a C++ library which implements a simple
version of the conjugate gradient (CG) method for solving a system of
linear equations of the form A\*x=b, suitable for situations in which
the matrix A is positive definite (only real, positive eigenvalues) and
symmetric.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[MM\_IO](../../cpp_src/mm_io/mm_io.html), a C++ library which reads and
writes sparse linear systems stored in the Matrix Market (MM) format.

[WATHEN](../../cpp_src/wathen/wathen.html), a C++ library which compares
storage schemes (full, banded, sparse triplet) and solution strategies
(Linpack full, Linpack banded, conjugate gradient (CG)) for linear
systems involving the Wathen matrix, which can arise when solving a
problem using the finite element method (FEM).

### Source Code: {#source-code align="center"}

-   [sparse\_display.cpp](sparse_display.cpp), the source code.
-   [sparse\_display.hpp](sparse_display.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_display\_prb.cpp](sparse_display_prb.cpp), a sample calling
    program.
-   [sparse\_display\_prb\_output.txt](sparse_display_prb_output.txt),
    the output file.
-   [wathen\_ge\_data.txt](wathen_ge_data.txt), data defining the
    location of the nonzero entries of the Wathen matrix.
-   [wathen\_ge\_commands.txt](wathen_ge_commands.txt), gnuplot commands
    to display the data.
-   [wathen\_ge.png](wathen_ge.png), an image of the sparsity pattern
    for the Wathen matrix.
-   [before\_data.txt](before_data.txt), data defining the location of
    the nonzero entries of a matrix, as created by DEAL.II.
-   [before\_commands.txt](before_commands.txt), gnuplot commands to
    display the data.
-   [before.png](before.png), an image of the sparsity pattern for the
    before matrix.
-   [after\_data.txt](after_data.txt), data defining the location of the
    nonzero entries of a matrix, as created by DEAL.II (after reordering
    of variables).
-   [after\_commands.txt](after_commands.txt), gnuplot commands to
    display the data.
-   [after.png](after.png), an image of the sparsity pattern for the
    after matrix.
-   [30x20\_data.txt](30x20_data.txt), data defining the location of the
    nonzero entries of the 30x20 matrix.
-   [30x20\_commands.txt](30x20_commands.txt), gnuplot commands to
    display the data.
-   [30x20.png](30x20.png), an image of the sparsity pattern for the
    30x20 matrix.

### List of Routines: {#list-of-routines align="center"}

-   **SPY\_FILE** plots a sparsity pattern stored in a file.
-   **SPY\_GE** plots a sparsity pattern for a general storage (GE)
    matrix.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 June 2014.*
