C++\_CALLS\_C\
C++ Main Program Calls C Functions {#c_calls_c-c-main-program-calls-c-functions align="center"}
==================================

------------------------------------------------------------------------

**C++\_CALLS\_C** is a directory of C++ programs which illustrates how a
C++ program can call a C function.

For this example, the KRONROD package is used. Note that the KRONROD
library is available in C++ and in C, so this example is not created out
of necessity (the C++ main program could have simply called the C++
version of KRONROD). Instead, it is intended as an example of how to do
this when you have to (you don't have a C++ version of the routines you
want to use.)

When calling a C function from a C++ function, there are some simple
things that may be enough to guarantee success.

-   the C++ code should declare interfaces to the C functions using the
    "extern C" qualifier, as in

        extern "C" 
        {
          void kronrod ( int n, double eps, double x[], double w1[], double w2[] );
          void timestamp ( );
        }
                  

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**C++\_CALLS\_C** is available in [a C++
version](../../master/c++_calls_c/c++_calls_c.md) and [a FORTRAN77
version](../../f77_src/f77_calls_c/f77_calls_c.md) and [a FORTRAN90
version](../../f_src/f90_calls_c/f90_calls_c.md) and [a MATLAB
version](../../m_src/matlab_calls_c/matlab_calls_c.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C++\_CALLS\_F77](../../master/c++_calls_f77/c++_calls_f77.md), C++
programs which call a FORTRAN77 subroutine.

[C++\_CALLS\_F90](../../master/c++_calls_f90/c++_calls_f90.md), C++
programs which call a FORTRAN90 subroutine.

[KRONROD](../../c_src/kronrod/kronrod.md), a C library which can
compute a Gauss and Gauss-Kronrod pair of quadrature rules of arbitrary
order, by Robert Piessens, Maria Branders.

[KRONROD](../../master/kronrod/kronrod.md), a C++ library which can
compute a Gauss and Gauss-Kronrod pair of quadrature rules of arbitrary
order, by Robert Piessens, Maria Branders.

[MIXED](../../master/mixed/mixed.md), C++ programs which call a
function written in another programming language.

### Source Code: {#source-code align="center"}

**KRONROD** is the C source code for the KRONROD library. It should be
essentially unchanged from the standard version.

-   [kronrod.c](kronrod.c), the source code;
-   [kronrod.h](kronrod.h), the include file;

**KRONROD\_PRB** is the C++ source code for the main program. Some
changes have been made from the standard version in order to adjust for
the fact that we are calling a FORTRAN77 subroutine.

-   [kronrod\_prb.cpp](kronrod_prb.cpp);

### Examples and Tests: {#examples-and-tests align="center"}

-   [kronrod\_prb\_output.txt](kronrod_prb_output.txt), the output file;

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 18 March 2014.*
