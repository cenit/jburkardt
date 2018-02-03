C++\_CONDOR\
C++ Execution Under the CONDOR Batch Queueing System {#c_condor-c-execution-under-the-condor-batch-queueing-system align="center"}
====================================================

------------------------------------------------------------------------

**C++\_CONDOR** is a directory of examples which demonstrate how a C++
program can be executed on a remote machine using the CONDOR batch
queueing system.

CONDOR allows a user to submit jobs for batch execution on an informal
cluster composed of various computers that often have idle time. Based
on information from the user's submission file, CONDOR chooses one or
more appropriate and available computers, transfers files to the target
systems, executes the program, and returns data to the user.

CONDOR has many features, and its proper use varies from site to site.
The information in this document was inspired by the CONDOR system
supported by the FSU Research Computing Center (RCC). Some of the
information therefore is peculiar to this local installation.

The first thing to note is that the FSU CONDOR cluster does not have a
shared file system. Thus, you should probably imagine that you are
trying to run your program on a remote machine that might be someone's
iPhone. None of your files are there, and if you don't say so, you don't
even know what kind of processor or operating system you are dealing
with!

So you are responsible for explaining to CONDOR what files you want to
transfer to this remote machine, and you must specify whether you have
any requirements, such as a specific operating system or processor type.
In particular, when working with a C++ program, you must precompile the
program on the CONDOR login node, and one of your requirements will then
be that the remote computer has the same processor and operating system
as the login node.

The information about file transfer and system requirements is all part
of what is called a CONDOR submission script. The script is a
combination of comment lines, which begin with the "\#" sign, commands
of the form "A = B" which set certain options, and a few commands that
make things happen. A typical script might be called "program.condor".

The user and CONDOR interact on a special computer called the CONDOR
login node or submit node. The user's files must be transferred there,
the user's CONDOR submission script must be submitted there, and the
results from the remote machine will be copied back to this place.

The user logs into the CONDOR submit node interactively:

            ssh condor-login.rcc.fsu.edu
          

There are TWO reasons why this might not work for you, however.

1.  you must already have a valid RCC account;
2.  you must be logged in locally; as far as I can tell, you can't log
    in from home, or another university, or a national lab, for
    instance;

File transfer is done with the SFTP command.

            sftp condor-login.rcc.fsu.edu
              put program.condor
              put mandelbrot.f90
              quit
          

When ready, the CONDOR submission script is sent by the command

            condor_submit program.condor
          

The user can check on the status of the job with the command

            condor_q
          

If all goes well, the job output will be returned to the CONDOR submit
node. However, if things do not go well, or the job is taking too much
time, user "username" can delete all jobs in the condor queue with the
command

            condor_rm username
          

### Using Files: {#using-files align="center"}

On the FSU RCC Condor cluster, you must first copy your files to the
CONDOR login machine. When you submit your job to the CONDOR queue,
however, the program execution will take place on some unknown machine,
which initially does not have any of your files. Therefore, an important
part of using CONDOR is making sure that you copy to the remote machine
all the files needed for input, including a compiled copy of your C
program. Luckily, CONDOR will automatically copy back to the login node
every file that is created by the program execution.

Because the file system is not shared, the following commands should
appear in your CONDOR script:

            should_transfer_files = yes
            when_to_transfer_output = on_exit
          

that allows you to specify the name of this file.

If your executable reads from "standard input", (such as the C++
statement

            cin >> i;
          

then your CONDOR job will need a file containing that information.
CONDOR includes a command of the form

            input = filename
          

that allows you to specify the name of this file. Similarly, if your
program writes to "standard output", such as the C++ statement

            cout << "The answer is " << 42 << "\n";
          

then CONDOR allows you to specify the name of a file where this
information will go:

            output = filename
          

The input file must exist on your CONDOR login node before you submit
the job. The output file is created during the run, and will
automatically be copied back to your CONDOR login node when the job is
completed.

Your job may require other data files to run than simply the standard
input file. If so, you need to tell CONDOR the names of these files, in
a comma-separated list:

            transfer_input_files = file1, file2, ..., file99
          

Your job may create many files aside from simply standard output.
Luckily, all files created by the run will be automatically copied back.

We are going to compile the C executable on the CONDOR login node, but
run it on some other remote machine. Therefore, we need the following
command to guarantee that the remote machine can understand the
executable:

            requirements = ( OpSYS="LINUX" && Arch=="X86_64 )
          

Suppose that the C++ program we want to run is named "mandelbrot.cpp".
We compile this program on the CONDOR login node with commands like

            g++ mandelbrot.cpp -lm
            mv a.out mandelbrot
          

which creates an executable program called "mandelbrot". This program
must be copied to the remote machine, so your CONDOR script must include
the statement:

            executable = mandelbrot
          

### A Sample CONDOR Script {#a-sample-condor-script align="center"}

Here is a file called "mandelbrot.condor" which ought to be able to run
our compiled program somewhere, and return the results to us:

            universe = vanilla
            executable = mandelbrot
            arguments =
            input =
            requirements = ( OpSYS="LINUX" && Arch=="X86_64 )
            should_transfer_files = yes
            when_to_transfer_files = on_exit
            notification = never
            output = mandelbrot_output.txt
            log = mandelbrot_log.txt
            queue
          

A few comments are in order.

-   The "universe" command is required, and on the FSU CONDOR system, we
    only have the "vanilla" universe.
-   The "arguments" command allows you to pass commandline arguments to
    the executable program.
-   Setting "notification" to "yes" will cause CONDOR to send you email
    when the job completes, and perhaps at some other stages as well.
-   The "log" command species a name to use for the file in which CONDOR
    records the progress of the job.
-   The "error" command allows you to capture output to standard error.
-   The "queue" command is necessary, and tells CONDOR to actually begin
    running your job.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**C++\_CONDOR** is available in [a C
version](../../c_src/c_condor/c_condor.html) and [a C++
version](../../cpp_src/c++_condor/c++_condor.html) and [a FORTRAN77
version](../../f77_src/f77_condor/f77_condor.html) and [a FORTRAN90
version](../../f_src/f90_condor/f90_condor.html) and [a MATLAB
version](../../m_src/matlab_condor/matlab_condor.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[C\_CONDOR](../../c_src/c_condor/c_condor.html), C programs which
illustrate how a C program can be run in batch mode using the condor
queueing system.

[CONDOR](../../examples/condor/condor.html), examples which demonstrates
the use of the CONDOR queueing system to submit jobs that run on a one
or more remote machines.

[F77\_CONDOR](../../f77_src/f77_condor/f77_condor.html), FORTRAN77
programs which illustrate how a FORTRAN77 program can be run in batch
mode using the condor queueing system.

[F90\_CONDOR](../../f_src/f90_condor/f90_condor.html), programs which
illustrate how a FORTRAN90 program can be executed with the CONDOR batch
queueing system.

[MATLAB\_CONDOR](../../m_src/matlab_condor/matlab_condor.html), programs
which illustrate how a MATLAB program can be executed with the CONDOR
batch queueing system.

### Reference: {#reference align="center"}

1.  <http://www.cs.wisc.edu/htcondor/>,\
    The HTCondor home page;

### Examples and Tests: {#examples-and-tests align="center"}

**MANDELBROT** is an example which creates a PPM image file of the
Mandelbrot set.

-   [mandelbrot.cpp](mandelbrot.cpp), the program. This must be compiled
    and named "mandelbrot".
-   [mandelbrot.condor](mandelbrot.condor), the CONDOR submission file.
    This is used by issuing the command "condor\_submit simple.condor".
-   [mandelbrot.ppm](mandelbrot.ppm), the PPM image file created on the
    remote machine.
-   [mandelbrot.png](mandelbrot.png), a PNG version of the image file.
-   [mandelbrot\_output.txt](mandelbrot_output.txt), the output file.
-   [mandelbrot\_log.txt](mandelbrot_log.txt), CONDOR's log file
    (records the job submission, execution, and completion).

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 29 August 2013.*
