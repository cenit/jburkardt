CPP\_ARRAYS\
Vectors, Matrices, Tensors in C++ {#cpp_arrays-vectors-matrices-tensors-in-c align="center"}
=================================

------------------------------------------------------------------------

**CPP\_ARRAYS** is a directory of C++ programs which illustrate the use
of vectors, matrices and tensors.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CPP\_ARRAYS** is available in [a C
version](../../c_src/c_arrays/c_arrays.html) and [a C++
version](../../cpp_src/cpp_arrays/cpp_arrays.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CPP](../../cpp_src/cpp/cpp.html), C++ programs which illustrate some
features of the C++ language;

[CPP\_INTRINSICS](../../cpp_src/cpp_intrinsics/cpp_intrinsics.html), a
C++ program which illustrates the use of intrinsic functions.

[CPP\_RANDOM](../../cpp_src/cpp_random/cpp_random.html), C++ programs
which illustrate the use of the random number generator routines.

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

**ARRAYS** is a very simple example of how to set up arrays in C++. In
particular, we note that vectors are easy to declare with fixed or
dynamic dimensions, but that arrays of dimension 2 or greater aren't
easy to declare dynamically. The example shows how to work around this
by settting up a two dimensional array as a one dimensional vector.

-   [arrays.cpp](arrays.cpp), the source code;
-   [arrays\_output.txt](arrays_output.txt), the output file.

**POINTERS** shows how a two-dimensional array can be defined, either as
row or column major, using pointers. Unfortunately, the column major
format means that the double indexing lists the column index first!

-   [pointers.cpp](pointers.cpp), the source code;
-   [pointers\_output.txt](pointers_output.txt), the output file;

**TENSOR\_EXAMPLE1** demonstrates how a 3D array can be created by
repeated used of the **vector** operator.

-   [tensor\_example1.cpp](tensor_example1.cpp), the source code;
-   [tensor\_example1\_output.txt](tensor_example1_output.txt), the
    output file.

**TENSOR\_EXAMPLE2** demonstrates how a 3D array can be created by using
a class child of std::vector, which implements a 3D array as a linear
vector. This is probably more efficient.

-   [tensor\_example2.cpp](tensor_example2.cpp), the source code;
-   [tensor\_example2\_output.txt](tensor_example2_output.txt), the
    output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 October 2012.*
