COMPLEX\_NUMBERS\
Complex Numbers in C++ Programming {#complex_numbers-complex-numbers-in-c-programming align="center"}
==================================

------------------------------------------------------------------------

**COMPLEX\_NUMBERS** is a C++ program which demonstrates very briefly
some of the features of using complex numbers in a C++ program.

The first issue is how to declare a complex variable, including the
choice of single precision or double precision, whether the variable is
a scalar, vector, or array, and whether the variable is initialized with
a value, or assigned one.

A second issue concerns the question of how a complex variable is to be
printed out.

Another issue concerns how a complex variable is to operated on by the
arithmetic operators of addition, subtraction, multiplication, division,
and exponentiation.

The language also provides a number of intrinsic functions that can be
applied to a complex variable. The names of these functions can
sometimes be easy to forget. Moreover, it is occasionally true that
there may be a selection of functions with similar names (say, "exp",
"cexp" and "dcexp") which may or may not produce the desired results.

Another issue concerns the details of double precision calculation. Even
a single accidental use of a single precision function name in a double
precision computation can result in the loss of half the digits of
accuracy. Thus, it sometimes really matters whether you use "cmplx" or
"dcmplx" to assign values to a double precision complex variable.

An unusual feature of the C++ implementation of complex numbers is that
"complex &lt;float&gt;" and "complex &lt;double&gt;" are not as easily
used as an ordinary type when trying to "cast" values. That is, it may
be very tempting to try to assign a complex value with a statement such
as

> a = ( complex &lt;double&gt; ) ( 1.0, 2.0 ); (illegal!)

but this is wrong because (1.0,2.0) is not a legitimate numeric type
that is to be converted to another type, which is what a cast operator
requires. The statement, unfortunately, is not necessarily illegal, so
the compiler won't warn you, and my compiler will actually end up
setting **a** to 2, which is not what I wanted at all. The correct
assignment is

> a = complex &lt;double&gt; ( 1.0, 2.0 );

and you can read this as a call to a function whose arguments are the
real and imaginary parts of the desired result. People who are used to
the idea that parentheses never hurt should take note of this
counterexample!

A second, and more peculiar, feature to me is that it seems as though
the complex numbers created in C++ cannot easily interoperate with the
real and integer values. In particular, assuming the declaration

> a = complex &lt;double&gt; ( 1.0, 2.0 );

my compiler complained about statements like these:

            a = a + 1; (illegal!)
            a = a * 4; (illegal!)
            a = a / 8; (illegal!)
            a = 1 / a; (illegal!)
            a = pow ( 2, a ); (illegal!)
            a = pow ( 2.1, a ); (illegal!)
          

all of which became legal when I replaced the arithmetic operands by
corresponding complex &lt;double&gt; variables of the same value.

A third peculiarity of the C++ version of complex numbers is that the
function **norm ( z )** is stated to return *the norm of the complex
number **z***, but in fact, returns the *square* of the norm of the
number. The use of the word "norm" is a misuse, since the norm has a
commonly accepted mathematical definition as the square root of the sum
of the squares of the real and imaginary parts. Thus, the C++ function
returns the "norm" of 4+4i as 32 whereas the norm of 4+4i is sqrt(32).
As ever in computer languages, once a bad choice is made, it's never
rescinded. Be prepared for needless and inevitable confusion, though,
when using this function.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**COMPLEX\_NUMBERS** is available in [a C
version](../../c_src/complex_numbers/complex_numbers.html) and [a C++
version](../../cpp_src/complex_numbers/complex_numbers.html) and [a
FORTRAN77 version](../../f77_src/complex_numbers/complex_numbers.html)
and [a FORTRAN90
version](../../f_src/complex_numbers/complex_numbers.html) and [a MATLAB
version](../../m_src/complex_numbers/complex_numbers.html) and [a Python
version](../../py_src/complex_numbers/complex_numbers.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C4LIB](../../cpp_src/c4lib/c4lib.html), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables;

[C8LIB](../../cpp_src/c8lib/c8lib.html), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables;

### Source Code: {#source-code align="center"}

-   [complex\_numbers.cpp](complex_numbers.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [complex\_numbers\_output.txt](complex_numbers_output.txt), the
    output file;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 November 2010.*
