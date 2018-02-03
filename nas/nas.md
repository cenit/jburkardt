NAS\
A Revision of the NASA Kernel Benchmark Program {#nas-a-revision-of-the-nasa-kernel-benchmark-program align="center"}
===============================================

------------------------------------------------------------------------

**NAS** is a C++ program which is a revision of David Bailey's NASA
kernel benchmark program.

The NAS benchmark program was developed around 1984, and measured
computational performance on a representative range of realistic
calculations. One motivation for this benchmark was to move beyond the
LINPACK benchmark, which focussed on a single highly structured
procedure.

Benchmarking computers has become much more difficult now that memory,
I/O, multicores and distributed memory have all become significant
factors in computing performance. Nonetheless, the NAS benchmarks
provide an interesting insight into the floating point processing power
of a system, and so, for this reason, a version of the program has been
created that retains the functionality of the original, while being
somewhat easier to transfer to other languages.

One might expect comparable numerical performance of C++ and FORTRAN
programs. That this does not seem to happen for the C++ and FORTRAN90
versions of NAS reflects, most likely, the fact that the C++ version was
"translated" in a fairly straightforward manner, resulting in some
awkward and inefficient expressions; in particular, FORTRAN arrays which
were multiply-indexed were implemented in C++ as vectors, with the
resulting overhead of computing indices explicitly. Thus, it is likely
that a more careful revision of the C++ source code would result in
substantial performance improvements. I, on the other hand, am simply
terribly relieved that the C++ program gets the right answers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NAS** is available in [a C version](../../c_src/nas/nas.html) and [a
C++ version](../../cpp_src/nas/nas.html) and [a FORTRAN77
version](../../f77_src/nas/nas.html) and [a FORTRAN90
version](../../f_src/nas/nas.html) and [a MATLAB
version](../../m_src/nas/nas.html) and [a Python
version](../../py_src/nas/nas.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPACK\_BENCH](../../cpp_src/linpack_bench/linpack_bench.html), a C++
program which measures the time taken by **LINPACK** to solve a
particular linear system.

[MATMUL](../../c_src/matmul/matmul.html), a C program which is an
interactive matrix multiplication benchmark.

[MDBNCH](../../f77_src/mdbnch/mdbnch.html), a FORTRAN77 program which is
a benchmark molecular simulation calculation.

### Reference: {#reference align="center"}

1.  David Bailey, John Barton,\
    The NAS Kernel Benchmark Program,\
    Numerical Aerodynamics Simulations Systems Division,\
    NASA Ames Research Center,\
    13 June 1986.

### Source Code: {#source-code align="center"}

-   [nas.cpp](nas.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [nas\_output.txt](nas_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for NAS.
-   **MXMTST** is the test program for MXM.
-   **MXM** computes the matrix product C = A \* B.
-   **FFTTST** is the test program for CFFT2D1 and CFFTD2.
-   **CFFT2D1** performs complex radix 2 FFT''s on the first dimension.
-   **CFFT2D2** performs complex radix 2 FFT''s on the second dimension.
-   **CHOTST** is the test program for CHOLSKY.
-   **CHOLSKY** carries out Cholesky decomposition and back
    substitution.
-   **BTRTST** is the test program for BTRIX.
-   **BTRIX** is a block tridiagonal solver in one direction.
-   **GMTTST** is the test program for GMTRY.
-   **GMTRY** computes solid-related arrays.
-   **EMITST** is the test program for EMIT.
-   **EMIT** creates new vortices according to certain boundary
    conditions.
-   **VPETST** is the test program for VPENTA.
-   **VPENTA** inverts 3 pentadiagonal systems simultaneously.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8VEC\_COPY** copies an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WTIME** reports the elapsed wallclock time.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 November 2010.*
