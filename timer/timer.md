TIMER\
Compute Elapsed Time {#timer-compute-elapsed-time align="center"}
====================

------------------------------------------------------------------------

**TIMER** is a directory of C++ programs which compute the elapsed CPU
time or wall clock time of a part of a calculation.

The idea is that you want to determine the amount of CPU time taken by a
piece of your code, so you write lines like this:

            time1 = timer ( );
            for (  i = 0; i < n; i++ )
              ...some big calculation...
            }
            time2 = timer ( );
            cout << "Elapsed CPU time = " << time2 - time1 << " seconds\n";
          

You should not trust a CPU timer. If you run the same code several times
in a row, you are likely to get different results, especially if you are
trying to time things that don't take long. The time will often also
vary depending on the system load, the number of other users or
processes running, and other factors.

Another problem is "wrap around". Some timers reach a maximum value, and
then reset themselves to zero. If this happens to you, (it's happened to
me many times!) you may find that a certain procedure seems to take
negative time!

Some timers return CPU time, that is, the amount of elapsed computer
time that was used by your program; other routines return "real" time or
"wall clock" time, which will not account for situations in which your
program started, and then was paused for some reason (swapped out,
waiting for I/O, or other system functions), and then finished.

For parallel programming, the important thing to measure is the elapsed
wallclock time. This can be found by subtracting an initial reading of
the wallclock time from a final one.

The OpenMP system provides a function used as follows:

            seconds = omp_get_wtime ( )
            operations to time;
            seconds = omp_get_wtime ( ) - seconds;
          

while the MPI system provides a similar function used as:

            seconds = MPI_Wtime ( );
            operations;
            seconds = MPI_Wtime ( ) - seconds;
          

and in MATLAB, wallclock time can be taken with "tic" and "toc":

            tic;
            operation;
            seconds = toc;
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TIMER** is available in [a C version](../../c_src/timer/timer.md)
and [a C++ version](../../master/timer/timer.md) and [a FORTRAN77
version](../../f77_src/timer/timer.md) and [a FORTRAN90
version](../../f_src/timer/timer.md) and [a MATLAB
version](../../m_src/timer/timer.md) and [a PYTHON
version](../../py_src/timer/timer.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MPI](../../master/mpi/mpi.md), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computations in a distributed memory environment.

[OPENMP](../../master/openmp/openmp.md), C++ programs which
illustrate the use of the OpenMP application program interface for
carrying out parallel computations in a shared memory environment.

[SUM\_MILLION](../../master/sum_million/sum_million.md), a C++
program which sums the integers from 1 to 1,000,000, as a demonstration
of how to rate a computer's speed;

[TIMESTAMP](../../master/timestamp/timestamp.md), a C++ library which
can display the current wall clock time.

[WTIME](../../master/wtime/wtime.md), a C++ library which returns a
reading of the wall clock time in seconds.

### Examples and Tests: {#examples-and-tests align="center"}

**TIMER\_CHRONO** uses the C++ high precision CHRONO routines:

-   [timer\_chrono.cpp](timer_chrono.cpp), the test;
-   [timer\_chrono.txt](timer_chrono.txt), output from the test;

**TIMER\_CLOCK** uses the CLOCK routine for CPU time measurements:

-   [timer\_clock.cpp](timer_clock.cpp), the test;
-   [timer\_clock.txt](timer_clock.txt), output from the test;

**TIMER\_OMP\_GET\_WTIME** uses the OpenMP wall clock function
**omp\_get\_wtime()**:

-   [timer\_omp\_get\_wtime.cpp](timer_omp_get_wtime.cpp), the test;
-   [timer\_omp\_get\_wtime.txt](timer_omp_get_wtime.txt), the output
    file.

**TIMER\_TIME** uses the TIME routine for real time measurements. These
are no more accurate than one second, however:

-   [timer\_time.cpp](timer_time.cpp), the test;
-   [timer\_time.txt](timer_time.txt), output from the test;

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 May 2017.*
