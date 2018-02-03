OPENMP\_RCC\
Using OpenMP on the FSU RCC HPC Cluster {#openmp_rcc-using-openmp-on-the-fsu-rcc-hpc-cluster align="center"}
=======================================

------------------------------------------------------------------------

**http://people.sc.fsu.edu/\~jburkardt/c\_src/openmp\_rcc/openmp\_rcc.html**

------------------------------------------------------------------------

**OPENMP\_RCC** is a C++ program which uses OpenMP parallel programming
directives, and is to be run on the Florida State University (FSU)
Research Computing Center (RCC) High Performance Computing (HPC)
Cluster, under the SLURM queue manager.

We will assume you have a working OpenMP program, and an account on the
FSU RCC system, that you have used SFTP to transfer a copy of your
program source code (perhaps called "myprog.cpp") to the HPC login node,
and that have used SSH to login to hpc-login.rcc.fsu.edu which is the
interactive login node.

The login node has 24 cores. You are not supposed to use the login node
for computation, since it is a shared resource where many users may be
logged in, doing editing or compiling or other tasks. However, it is
reasonable to run a small version of your program with a few cores as a
check. To do this, you can interactively type commands like this
(assuming that your program does not need a huge amount of memory or
time!):

            g++ -fopenmp myprog.cpp
            mv a.out myprog
            export OMP_NUM_THREADS=1
            ./myprog
            export OMP_NUM_THREADS=2
            ./myprog
          

Let's assume your program compiles, and that it runs substantially
faster with 2 threads. That means you are ready to run the full version
of your program, which may need a lot more memory and time. But in that
case, the program must be sent to a computational node, and your
commands must be put into a command file, along with some information
for the SLURM queue manager.

Here is an example of a SLURM script, which might be called "myprog.sh":

            #!/bin/bash
            #SBATCH -N 1            <-- Ask for 1 node.  OpenMP can only run on 1 node.
            #SBATCH -c 8            <-- Ask for 8 cores, because we want 8 threads.
            #SBATCH -J myprog       <-- Name the job.
            #SBATCH -p backfill     <-- Use the "backfill" queue
            #SBATCH -t 00:15:00     <-- Time limit 15 minutes.
            g++ -fopenmp -o myprog myprog.cpp
            export OMP_NUM_THREADS=8
            srun ./myprog           <-- "srun" must run your program.
          

Note that the **srun** command is required in order to run your program.

Because an OpenMP program uses shared memory, all threads must be on the
same node. Thus, the number of cores you can access is limited by the
number that are available on that node.

On the FSU RCC HPC cluster, there are several kinds of nodes. INTEL
nodes have 16 cores, "old" AMD nodes have 8 cores, and recent AMD nodes
have 48 cores. You can use the switch "\#SBATCH -C YEAR2010" to specify
that you want a 48 core AMD node (more, but slower cores) or "\#SBATCH
-C intel" to specify that you want a 16 core INTEL node (fewer, but
faster, cores).

You can compile your program interactively, in which case you can remove
the compile instruction from the batch job.

To submit the job to the queue, use the command

            sbatch myprog.sh
          

You will see an immediate response like

            Submitted batch job 909856
          

The number 909856 is an identifier for this job. In particular, output
from your program will be returned to you in a file called
slurm-909856.out (although if you are picky you can ask SLURM to use a
different naming convention).

Note that the output file may appear in your directory before the job is
finished, containing the output "so far". In some cases, you might want
your program to print out a final "End of execution!" message just so
you can know that it has completed normally.

After you have submitted the job, and before it is complete, there are
some useful SLURM commands:

-   **squeue** shows the status of the entire queue (too much
    information!);
-   **squeue | grep jburkardt** shows the status of all my jobs;
-   **squeue -u jburkardt** shows the status of all my jobs;
-   **scancel 909856** cancels job 909856;
-   **sacct -j 909856** reports on the status of this job, even after
    completion.
-   **sacct -u jburkardt** reports on the status of all my jobs, even
    after completion.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**OPENMP\_RCC** is available in [a C
version](../../c_src/openmp_rcc/openmp_rcc.html) and [a C++
version](../../cpp_src/openmp_rcc/openmp_rcc.html) and [a FORTRAN90
version](../../f_src/openmp_rcc/openmp_rcc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIJKSTRA\_OPENMP](../../cpp_src/dijkstra_openmp/dijkstra_openmp.html),
a C++ program which uses OpenMP to parallelize a simple example of
Dijkstra's minimum distance algorithm for graphs.

[FFT\_OPENMP](../../cpp_src/fft_openmp/fft_openmp.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform in
parallel, using OpenMP.

[HEATED\_PLATE\_OPENMP](../../cpp_src/heated_plate_openmp/heated_plate_openmp.html),
a C++ program which solves the steady (time independent) heat equation
in a 2D rectangular region, using OpenMP to run in parallel.

[HELLO\_OPENMP](../../cpp_src/hello_openmp/hello_openmp.html), a C++
program which prints out "Hello, world!" using the OpenMP parallel
programming environment.

[MANDELBROT\_OPENMP](../../cpp_src/mandelbrot_openmp/mandelbrot_openmp.html),
a C++ program which generates an ASCII Portable Pixel Map (PPM) image of
the Mandelbrot fractal set, using OpenMP for parallel execution.

[MD\_OPENMP](../../cpp_src/md_openmp/md_openmp.html), a C++ program
which carries out a molecular dynamics simulation using OpenMP.

[MULTITASK\_OPENMP](../../cpp_src/multitask_openmp/multitask_openmp.html),
a C++ program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using OpenMP for
parallel execution.

[MXM\_OPENMP](../../cpp_src/mxm_openmp/mxm_openmp.html), a C++ program
which computes a dense matrix product C=A\*B, using OpenMP for parallel
execution.

[OPENMP](../../cpp_src/openmp/openmp.html), C++ programs which
illustrate the use of the OpenMP application program interface for
carrying out parallel computations in a shared memory environment.

[POISSON\_OPENMP](../../cpp_src/poisson_openmp/poisson_openmp.html), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, using the Jacobi iteration to solve the linear
system, and OpenMP to carry out the Jacobi iteration in parallel.

[PRIME\_OPENMP](../../cpp_src/prime_openmp/prime_openmp.html), a C++
program which counts the number of primes between 1 and N, using OpenMP
for parallel execution.

[QUAD\_OPENMP](../../cpp_src/quad_openmp/quad_openmp.html), a C++
program which approximates an integral using a quadrature rule, and
carries out the computation in parallel using OpenMP.

[RANDOM\_OPENMP](../../cpp_src/random_openmp/random_openmp.html), a C++
program which illustrates how a parallel program using OpenMP can
generate multiple distinct streams of random numbers.

[SATISFY\_OPENMP](../../cpp_src/satisfy_openmp/satisfy_openmp.html), a
C++ program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfiability problem, using OpenMP
for parallel execution.

[SCHEDULE\_OPENMP](../../cpp_src/schedule_openmp/schedule_openmp.html),
a C++ program which demonstrates the default, static, and dynamic
methods of "scheduling" loop iterations in OpenMP to avoid work
imbalance.

[SGEFA\_OPENMP](../../cpp_src/sgefa_openmp/sgefa_openmp.html), a C++
program which reimplements the SGEFA/SGESL linear algebra routines from
LINPACK for use with OpenMP.

[ZIGGURAT\_OPENMP](../../cpp_src/ziggurat_openmp/ziggurat_openmp.html),
a C++ program which demonstrates how the ZIGGURAT library can be used to
generate random numbers in an OpenMP parallel program.

### Source Code: {#source-code align="center"}

-   [heated\_plate\_openmp.cpp](heated_plate_openmp.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

**HEATED\_PLATE\_LOCAL** runs the program interactively.

-   [heated\_plate\_local\_output.txt](heated_plate_local_output.txt)
    the output file.

**HEATED\_PLATE\_RCC** runs the program in batch mode on the FSU RCC HPC
cluster.

-   [heated\_plate\_rcc\_output.txt](heated_plate_rcc_output.txt) the
    output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 16 November 2015.*
