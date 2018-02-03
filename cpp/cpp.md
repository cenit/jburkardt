CPP\
Simple C++ Examples {#cpp-simple-c-examples align="center"}
===================

------------------------------------------------------------------------

**C++** is a directory of C++ examples which illustrate some of the
features of the language.

Depending on your computer, you may invoke the **C++** compiler by a
command like **c++**, **CC**, **cxx**, **g++** (the Gnu compiler),
**icc** (the Intel compiler), **pcCC** (the Portland Group compiler), or
**xlc++** (the IBM compiler).

Depending on your compiler, your C++ files may need to have the
extension ".C", ".cc", ".cxx", ".cpp" or even ".c++". In particular,
Microsoft Visual C++ does not "know" the difference between upper and
lower case in file extensions. If you call your file "fred.C", it will
think your file is a C file, not a C++ file. For Microsoft Visual C++,
always use the file name extension ".cpp"!

It is customary for include files to have the extension ".H", but I have
also seen ".h", ".hxx" and ".hpp" extensions used.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

Directories related to **CPP** are available in [a C
version](../../c_src/c/c.md) and [a C++
version](../../master/cpp/cpp.md) and [a FORTRAN77
version](../../f77_src/f77/f77.md) and [a FORTRAN90
version](../../f_src/f90/f90.md) and [a MATLAB
version](../../m_src/matlab/matlab.md) and [a Python
version](../../py_src/py/py.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CPP\_ARRAYS](../../master/cpp_arrays/cpp_arrays.md), C++ programs
which illustrate the use of vectors, matrices and tensors.

[CPP\_INTRINSICS](../../master/cpp_intrinsics/cpp_intrinsics.md), a
C++ program which illustrates the use of intrinsic functions.

[CPP\_RANDOM](../../master/cpp_random/cpp_random.md), C++ programs
which illustrate the use of the random number generator routines.

[MAKEFILES](../../master/makefiles/makefiles.md), C++ programs which
illustrate the use of MAKEFILES for maintaining a software project;

[MIXED](../../master/mixed/mixed.md), C++ programs which call a
function written in another programming language.

[MPI](../../master/mpi/mpi.md), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computations in a distributed memory environment.

[OPENMP](../../master/openmp/openmp.md), C++ programs which
illustrate the use of the OpenMP application program interface for
carrying out parallel computations in a shared memory environment.

### Reference: {#reference align="center"}

1.  Paul Deitel, Harvey Deitel,\
    C++: How to Program,\
    Seventh Edition,\
    Prentice Hall, 2011,\
    ISBN: 978-013-216541-9,\
    LC: QA76.73.C153.D45.
2.  Steve Oaulline,\
    Practical C++ Programming,\
    Second Edition,\
    O'Reilly, 2003,\
    ISBN: 1-56592-139-9,\
    LC: QA76.73.C15.O84.
3.  Bjarne Stroustrup,\
    The C++ Programming Language,\
    Addison-Wesley, 2000,\
    ISBN: 0-201-70073-5,\
    LC: QA76.73.C153.S77.

### Examples and Tests: {#examples-and-tests align="center"}

**ARRAY\_RETURN** demonstrates how a function can call another function
which creates and returns several arrays in its argument list. To do
this requires some tricky use of pointers.

-   [array\_return.cpp](array_return.cpp), the source code;
-   [array\_return\_output.txt](array_return_output.txt), the output
    file;

**BIG\_INTS\_REAL** shows what can go wrong when you try to move large
integer values into and out of real variables.

-   [big\_ints\_real.cpp](big_ints_real.cpp), the source code;
-   [big\_ints\_real\_output.txt](big_ints_real_output.txt), the output
    file;

**CHARACTER\_ARG** demonstrates how a C++ function can return character
information through its argument.

-   [character\_arg.cpp](character_arg.cpp), the source code;
-   [character\_arg\_output.txt](character_arg_output.txt), the output
    file;

**COMPLEX\_VALUES** demonstrates the use of the ANSI COMPLEX class for
complex arithmetic. (At the moment, I am having a terrible time just
trying to use the assignment operator!)

-   [complex\_values.cpp](complex_values.cpp), the source code;
-   [complex\_values\_output.txt](complex_values_output.txt), the output
    file.

**DYNAMIC\_ARRAY\_2D** shows how to create a 2D array dynamically, so
that addresses like "a\[2\]\[5\]" are legal.

-   [dynamic\_array\_2d.cpp](dynamic_array_2d.cpp), the source code;
-   [dynamic\_array\_2d\_output.txt](dynamic_array_2d_output.txt), the
    output file.

**FUNCTION\_POINTER** shows how a variable can be created which can
point to a function; the target of the pointer can be changed so that a
different function is indicated.

-   [function\_pointer.cpp](function_pointer.cpp), the source code;
-   [function\_pointer\_output.txt](function_pointer_output.txt), the
    output file.

**FUNCTION\_POINTER\_ARRAY** shows how a variable can be created which
can be an array of pointers to function.

-   [function\_pointer\_array.cpp](function_pointer_array.cpp), the
    source code;
-   [function\_pointer\_array\_output.txt](function_pointer_array_output.txt),
    the output file.

**FUNCTION\_POINTER\_ARRAY\_NEW** shows how a variable can be created
which can be a DYNAMICALLY ALLOCATED array of pointers to function. In
other words, this is one way to create an array of function pointers
whose dimension is not specified in advance. Then the array can be sized
with the NEW command and freed with the DELETE command.

-   [function\_pointer\_array\_new.cpp](function_pointer_array_new.cpp),
    the source code;
-   [function\_pointer\_array\_new\_output.txt](function_pointer_array_new_output.txt),
    the output file.

**HELLO** is just a "Hello, world!" program.

-   [hello.cpp](hello.cpp), the source code;
-   [hello\_output.txt](hello_output.txt), the output file.

**LIMITS** prints out some information about the range and accuracy of
various numeric types.

-   [limits.cpp](limits.cpp), the source code;
-   [limits\_output.txt](limits_output.txt), the output file.

**NOT\_ALLOCATED\_ARRAYS** shows that you should initialize your array
pointers to NULL, and reset them to NULL after you delete your arrays.
Otherwise, an unallocated or delete array is liable to have a deceptive
nonnull value!

-   [not\_allocated\_arrays.cpp](not_allocated_arrays.cpp), the source
    code;
-   [not\_allocated\_arrays\_output.txt](not_allocated_arrays_output.txt),
    the output file.

**POISSON** solves the Poisson equation on a 2D grid. This program uses
dynamically allocated doubly dimensioned arrays.

-   [poisson.cpp](poisson.cpp), the source code;
-   [poisson\_output.txt](poisson_output.txt), the output file;

**PRECISION\_OUTPUT** shows how the manipulator function setprecision()
changes the precision for all subsequent floating point output
operations, and how the precision() function can be better used, to
record the initial precision, change it, or reset it to the default
value.

-   [precision\_output.cpp](precision_output.cpp), the source code;
-   [precision\_output\_output.txt](precision_output_output.txt), the
    output file.

**SIZES** prints out the sizes of various datatypes.

-   [sizes.cpp](sizes.cpp), the source code;
-   [sizes\_output.txt](sizes_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 March 2012.*
