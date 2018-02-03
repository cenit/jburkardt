LINPACK\_BENCH\
The LINPACK Benchmark {#linpack_bench-the-linpack-benchmark align="center"}
=====================

------------------------------------------------------------------------

**LINPACK\_BENCH** is a C++ program which carries out the LINPACK
Benchmark.

The LINPACK benchmark is a test problem used to rate the performance of
a computer on a simple linear algebra problem.

The test problem requires the user to set up a random dense matrix **A**
of size **N** = 1000, and a right hand side vector **B** which is the
product of **A** and a vector **X** of all 1's. The first task is to
compute an LU factorization of **A**. The second task is to use the LU
factorization to solve the linear system

> **A** \* **X** = **B**.

The number of floating point operations required for these two tasks is
roughly

> ops = 2 \* N\*N\*N / 3 + 2 \* N \* N,

therefore, the "MegaFLOPS" rating, or millions of floating point
operations per second, can be found as

> mflops = ops / ( cpu \* 1000000 ).

On a given computer, if you run the benchmark for a sequence of
increasing values of N, the behavior of the MegaFLOPS rating will vary
as you pass through three main zones of behavior:

-   a *rising* zone, as both the local cache memory and the processor
    are not challenged.
-   a *flat* zone, where the processor is challenged, that is, it is
    performing at top efficiency.
-   a *decaying* zone, where the local cache memory is also challenged,
    that is the matrix is so large that the cache is not big enough to
    keep the necessary data close enough to the processor to keep it
    running at top speed.

  Language   Precision   Type   Machine             Comment   MegaFLOPS
  ---------- ----------- ------ ------------------- --------- -----------
  C++        Single      Real   DHCP95 (Apple G5)   g++       222
                                                               
  C++        Double      Real   DHCP95 (Apple G5)   g++       167
  C++        Double      Real   chili (ALPHA)       g++       51

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINPACK\_BENCH** is available in [a C
version](../../c_src/linpack_bench/linpack_bench.html) and [a C++
version](../../cpp_src/linpack_bench/linpack_bench.html) and [a
FORTRAN77 version](../../f77_src/linpack_bench/linpack_bench.html) and
[a FORTRAN90 version](../../f_src/linpack_bench/linpack_bench.html) and
[a JAVA version](../../j_src/linpack_bench/linpack_bench.html) and [a
MATLAB version](../../m_src/linpack_bench/linpack_bench.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPACK\_D](../../cpp_src/linpack_d/linpack_d.html), a C++ library
which solves linear systems using double precision real arithmetic;

[MATMUL](../../f_src/matmul/matmul.html), a FORTRAN90 program which is
an interactive matrix multiplication benchmark program.

[MDBNCH](../../f77_src/mdbnch/mdbnch.html), a FORTRAN77 program which is
a benchmark code for a molecular dynamics calculation.

[MEMORY\_TEST](../../cpp_src/memory_test/memory_test.html), a C++
program which declares and uses a sequence of larger and larger vectors,
to see how big a vector can be used on a given machine and compiler.

[MXM](../../cpp_src/mxm/mxm.html), a C++ program which sets up a matrix
multiplication problem A=B\*C of arbitrary size, and compares the time
required for IJK, IKJ, JIK, JKI, KIJ and KJI orderings of the loops.

[SUM\_MILLION](../../cpp_src/sum_million/sum_million.html), a C++
program which sums the integers from 1 to 1,000,000, as a demonstration
of how to rate a computer's speed;

[TIMER](../../cpp_src/timer/timer.html), a C++ library which
demonstrates how to measure CPU time or elapsed time.

### Reference: {#reference align="center"}

1.  <http://www.netlib.org/benchmark/1000s> the LINPACK benchmark
    website (single precision).
2.  <http://www.netlib.org/benchmark/1000d> the LINPACK benchmark
    website (double precision).
3.  Jack Dongarra,\
    Performance of Various Computers Using Standard Linear Equations
    Software, Technical Report CS-89-85,\
    Electrical Engineering and Computer Science Department,\
    University of Tennessee, 2008.
4.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
5.  George Fishman,\
    Multiplicative congruential random number generators with modulus
    2\*\*b: an exhaustive analysis for b = 32 and a partial analysis for
    b = 48,\
    Mathematics of Computation,\
    Volume 189, 1990, pages 331-344.
6.  Charles Lawson, Richard Hanson, David Kincaid, Fred Krogh,\
    Algorithm 539: Basic Linear Algebra Subprograms for Fortran Usage,\
    ACM Transactions on Mathematical Software,\
    Volume 5, Number 3, September 1979, pages 308-323.

### Source Code: {#source-code align="center"}

**LINPACK\_BENCH\_S** is the single precision version of the program.

-   [linpack\_bench\_s.cpp](linpack_bench_s.cpp), the source code.
-   [linpack\_bench\_s\_dhcp95\_output.txt](linpack_bench_s_dhcp95_output.txt),
    the output from an Apple Power5 named "dhcp95".

**LINPACK\_BENCH\_D** is the double precision version of the program.

-   [linpack\_bench\_d.cpp](linpack_bench_d.cpp), the source code.
-   [linpack\_bench\_d\_chili\_output.txt](linpack_bench_d_chili_output.txt),
    the output from an ALPHA named "chili".
-   [linpack\_bench\_d\_dhcp95\_output.txt](linpack_bench_d_dhcp95_output.txt),
    the output from an Apple Power5 named "dhcp95".

### List of Routines: {#list-of-routines align="center"}

Here are the routines for the double precision version of the program:

-   **MAIN** is the main program for LINPACK\_BENCH\_D.
-   **CPU\_TIME** returns the current reading on the CPU clock.
-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **DGEFA** factors a real general matrix.
-   **DGESL** solves a real general linear system A \* X = B.
-   **DSCAL** scales a vector by a constant.
-   **IDAMAX** finds the index of the vector element of maximum absolute
    value.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_RANDOM** returns a uniformly distributed random number between
    0 and 1.
-   **R8MAT\_GEN** generates a random R8MAT..
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 March 2008.*
