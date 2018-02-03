C++\_CALLS\_F77\
C++ Main Program Calls FORTRAN77 Subroutines {#c_calls_f77-c-main-program-calls-fortran77-subroutines align="center"}
============================================

------------------------------------------------------------------------

**C++\_CALLS\_F77** is a directory of C++ programs which illustrates how
a C++ main program can call a FORTRAN77 subroutine.

For this example, the KRONROD package is used. Note that the KRONROD
library is available in C++ and in FORTRAN77, so this example is not
created out of necessity (the C++ main program could have simply called
the C++ version of KRONROD). Instead, it is intended as an example of
how to do this when you have to (you don't have a C++ version of the
routines you want to use.)

When calling a FORTRAN77 routine from a C++ function, there are some
simple things that may be enough to guarantee success.

-   a FORTRAN77 subroutine is like a C++ void function, and should be
    declared this way in the C++ code. The qualifier **extern** should
    also be used.
-   a FORTRAN77 subroutine or function expects all its arguments to be
    passed by reference. This generally means simply that the C++
    function must pass scalar variables by reference, not value.
-   typically, when the FORTRAN77 compiler compiles the FORTRAN77 code,
    the names of functions and subroutines are stored with an appended
    underscore. In order for these names to be found by the C++ code, it
    is necessary that the C++ code declare and invoke the FORTRAN
    functions and subroutines with the underscore explicitly appended to
    the name.
-   in many cases, a FORTRAN compiler is simply a "front end" to a
    corresponding C++ compiler, as in the case of the GNU compilers
    gfortran and g++, or the Intel compilers ifort and icpp. This means
    that, as long as the corresponding compilers are used to compile the
    FORTRAN77 and C++ codes, it is probably possible to use either
    compiler to link and load the object codes; however, the load
    command may need to specify explicitly certain libraries associated
    with one of the languages. For instance, if loading using the gcc
    command, it is necessary to include "-l gfortran" so that the
    FORTRAN I/O libraries, among others, are included in the build.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**C++\_CALLS\_F77** is available in [a C
version](../../c_src/c_calls_f77/c_calls_f77.md) and [a C++
version](../../master/c++_calls_f77/c++_calls_f77.md) and [a MATLAB
version](../../m_src/matlab_calls_f77/matlab_calls_f77.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C\_CALLS\_F77](../../c_src/c_calls_f77/c_calls_f77.md), C programs
which illustrate a C program calling a FORTRAN77 subroutine.

[C++\_CALLS\_C](../../master/c++_calls_c/c++_calls_c.md), C++
programs which call a C function.

[C++\_CALLS\_F90](../../master/c++_calls_f90/c++_calls_f90.md), C++
programs which illustrate how a C++ main program can call a FORTRAN90
subroutine.

[F77\_CALLS\_C++](../../f77_src/f77_calls_c++/f77_calls_c++.md),
FORTRAN77 programs which illustrate how a FORTRAN77 program can call a
C++ function.

[KRONROD](../../master/kronrod/kronrod.md), a C++ library which can
compute a Gauss and Gauss-Kronrod pair of quadrature rules of arbitrary
order, by Robert Piessens, Maria Branders.

[KRONROD](../../f77_src/kronrod/kronrod.md), a FORTRAN77 library which
can compute a Gauss and Gauss-Kronrod pair of quadrature rules of
arbitrary order, by Robert Piessens, Maria Branders.

[MIXED](../../master/mixed/mixed.md) C++ programs which call a
function written in another programming language.

### Reference: {#reference align="center"}

-   [Calling FORTRAN Subroutines from Fortran, C and
    C++](../../pdf/keinert.pdf),\
    Fritz Keinert,\
    Mathematics Department,\
    Iowa State University.

### Source Code: {#source-code align="center"}

**KRONROD** is the FORTRAN77 source code for the KRONROD library. It
should be essentially unchanged from the standard version.

-   [kronrod.f](kronrod.f);

**KRONROD\_PRB** is the C++ source code for the main program. Some
changes have been made from the standard version in order to adjust for
the fact that we are calling a FORTRAN77 subroutine.

-   [kronrod\_prb.cpp](kronrod_prb.cpp);

### Examples and Tests: {#examples-and-tests align="center"}

-   [kronrod\_prb\_output.txt](kronrod_prb_output.txt), the output file;

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 07 December 2010.*
