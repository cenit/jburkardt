SOLVE\
Linear Solver for Double Dimensioned Arrays {#solve-linear-solver-for-double-dimensioned-arrays align="center"}
===========================================

------------------------------------------------------------------------

**SOLVE** is a C++ library which implements a linear solver which makes
it easy to create doubly-dimensioned arrays and solve associated linear
systems.

The purpose of the library is to allow the user to declare a square
matrix A of any size, access matrix entries using the usual double
indexing formula **A\[i\]\[j\]=value;**, and call a linear solver to
solve A\*x=b using a call like:

            x = solve ( n, A, b );
          

In C and C++, it can be awkward to set up matrices in a way that makes
it easy to access them with the usual two index form, and to pass these
matrices back and forth to other functions. This is because, when using
the simplest interface to another function, it is necessary that the
second dimension, that is, the number of columns, be declared as a fixed
integer, not a variable. Such an interface is impossible to use with a
general purpose linear solver.

These problems can be overcome by using a data structure known as a
pointer to a pointer. However, creating and deleting such objects can be
unfamiliar to the average user. This library hides the details behind an
object called an R8RMAT, that is, a double precision real (R8) row-major
(R) matrix (MAT). A set of functions, with the "r8rmat\_" label, are
provided to make it easy to create and delete such objects, and more
importantly, to solve an associated linear system.

The SOLVE library makes it possible to set up and solve linear systems
in a natural way, as long as the user does the following:

-   declare the matrix as a "double \*\*" quantity;
-   call **r8rmat\_new()** or **r8rmat\_zero()** to create, or create
    and zero out, the matrix.
-   call **r8rmat\_fs\_new()** to solve the linear system.
-   call **r8rmat\_delete()** to free the matrix memory when no longer
    needed.

The library can also be useful because:

-   it shows the steps involved in a simple Gauss-elimination procedure;
-   it can be used to count the number of operations in
    Gauss-elimination;
-   it can be used as a guide for writing a corresponding program in
    another language;
-   its performance can be compared to corresponding versions in Fortran
    or Matlab;
-   it can be used as a starting point for exploring band storage,
    sparse storage, iterative solutions and other topics in linear
    algebra.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SOLVE** is available in [a C version](../../c_src/solve/solve.html)
and [a C++ version](../../cpp_src/solve/solve.html) and [a FORTRAN77
version](../../f77_src/solve/solve.html) and [a FORTRAN90
version](../../f_src/solve/solve.html) and [a MATLAB
version](../../m_src/solve/solve.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ALLOCATABLE\_ARRAY](../../cpp_src/allocatable_array/allocatable_array.html),
a C++ program which demonstrates how a C++ function can declare a
pointer to an array, call a function, which can then allocate it and
fill it with data, and then return the allocated and initialized array
to the calling function through the argument list.

[CPP\_ARRAYS](../../cpp_src/cpp_arrays/cpp_arrays.html), C++ programs
which illustrate the use of vectors, matrices and tensors.

[LINPACK](../../cpp_src/linpack/linpack.html), a C++ library which
solves linear systems for a variety of matrix storage schemes, real or
complex arithmetic, and single or double precision. It includes a
routine for computing the singular value decomposition (SVD) of a
rectangular matrix. The original version of this library is by Jack
Dongarra, Jim Bunch, Cleve Moler, Pete Stewart.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the linear least squares (LLS) solution of a rectangular linear
system A\*x=b.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

### Source Code: {#source-code align="center"}

-   [solve.cpp](solve.cpp), the source code.
-   [solve.hpp](solve.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [solve\_prb.cpp](solve_prb.cpp) a sample calling program.
-   [solve\_prb\_output.txt](solve_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **R8RMAT\_COPY\_NEW** makes a new copy of an R8RMAT .
-   **R8RMAT\_DELETE** frees the memory set aside by R8RMAT\_NEW.
-   **R8RMAT\_FS\_NEW** factors and solves an R8RMAT system with one
    right hand side.
-   **R8RMAT\_NEW** sets up an R8RMAT of the desired dimensions.
-   **R8RMAT\_ZERO** sets up and zeros an R8RMAT of the desired
    dimensions.
-   **R8VEC\_COPY\_NEW** copies an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 May 2014.*
