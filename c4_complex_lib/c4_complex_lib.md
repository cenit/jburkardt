C4\_COMPLEX\_LIB\
A C++ Class for Complex Arithmetic {#c4_complex_lib-a-c-class-for-complex-arithmetic align="center"}
==================================

------------------------------------------------------------------------

**C4\_COMPLEX\_LIB** is a C++ library which defines complex numbers and
the operations necessary to do arithmetic on them.

*Since the ANSI C++ standard library now includes a complex class, the
information described here is probably not of practical use. On the
other hand, it may be helpful as a practical demonstration of how to
define a useful arithmetic class.*

The **C4\_COMPLEX** class defines a *c4\_complex* number as a pair of
floats. A variable **c** in this class may be declared by

            c4_complex c;
          

The declaration can include an initialization:

            c4_complex c = c4_complex ( 1.0, 2.0 );
          

A variable **c** declared as *c4\_complex* may be assigned a value using
the *c4\_complex()* function:

            c = c4_complex ( a, b )
          

where **a** and **b** are float values; the assignment

            c = c4_complex ( a )
          

sets the real part of **c** to **a**, and the imaginary part to 0.

A variable **c** declared as *c4\_complex* may be used in addition,
subtraction, multiplication, or division with another c4\_complex value,
or a float value:

            c3 = c1 + c2;
            c3 = c1 - c2;
            c3 = c1 * c2;
            c3 = c1 / c2;
          

A variable **c** declared as *c4\_complex* may be conjugated, or its
real or imaginary part may be produced as a float value:

            c2 = ~c;
            d1 = c1.real ( );
            d2 = c1.imaginary ( );
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**C4\_COMPLEX\_LIB** is available in [a C
version](../../c_src/c4_complex_lib/c4_complex_lib.md) and [a C++
version](../../master/c4_complex_lib/c4_complex_lib.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C4LIB](../../master/c4lib/c4lib.md), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables using the C++ "complex " datatype.

[C8\_COMPLEX\_LIB](../../master/c8_complex_lib/c8_complex_lib.md), a
C++ library which defines a class called c8\_complex for complex numbers
with double precision components.

[CPP](../../master/cpp/cpp.md), C++ programs which includes an
example of the declaration and use of complex variables.

### Reference: {#reference align="center"}

1.  Steve Oualline,\
    Practical C++ Programming,\
    O'Reilly & Associates, 1997,\
    ISBN: 1-56592-139-9

### Source Code: {#source-code align="center"}

-   [c4\_complex\_lib.cpp](c4_complex_lib.cpp), the source code;
-   [c4\_complex\_lib.hpp](c4_complex_lib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [c4\_complex\_lib\_prb.cpp](c4_complex_lib_prb.cpp), the calling
    program;
-   [c4\_complex\_lib\_prb\_output.txt](c4_complex_lib_prb_output.txt),
    the output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 September 2013.*
