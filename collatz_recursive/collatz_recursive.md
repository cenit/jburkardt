COLLATZ\_RECURSIVE\
Demonstration of Recursive Programming for the Collatz Sequence {#collatz_recursive-demonstration-of-recursive-programming-for-the-collatz-sequence align="center"}
===============================================================

------------------------------------------------------------------------

**COLLATZ\_RECURSIVE** is a C++ library which demonstrates recursive
programming by considering the simple Collatz 3n+1 problem.

The rules for generation of the Collatz sequence are recursive. If **T**
is the current entry of the sequence, (**T** is assumed to be a positive
integer), then the next entry, **U** is determined as follows:

1.  if **T** is 1, terminate the sequence;
2.  else if **T** is even, **U** = **T**/2.
3.  else (if **T** is odd and not 1), **U** = 3\***T**+1;

Although the Collatz sequence seems to be finite for every starting
point, this has not been proved. Over the range of starting values that
have been examined, a great irregularity has been observed in the number
of entries in the corresponding sequence.

The Collatz sequence is also known as the "hailstone" sequence or the
"3n+1" sequence.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**COLLATZ\_RECURSIVE** is available in [a C
version](../../c_src/collatz_recursive/collatz_recursive.md) and [a
C++ version](../../master/collatz_recursive/collatz_recursive.md) and
[a FORTRAN90
version](../../f_src/collatz_recursive/collatz_recursive.md) and [a
MATLAB version](../../m_src/collatz_recursive/collatz_recursive.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[POLPAK](../../master/polpak/polpak.md), a C++ library which
evaluates a variety of mathematical functions, including Chebyshev,
Gegenbauer, Hermite, Jacobi, Laguerre, Legendre polynomials, and the
Collatz sequence.

### Reference: {#reference align="center"}

1.  Eric Weisstein,\
    "The Collatz Problem",\
    CRC Concise Encyclopedia of Mathematics,\
    CRC Press, 2002,\
    Second edition,\
    ISBN: 1584883472,\
    LC: QA5.W45.

### Source Code: {#source-code align="center"}

-   [collatz\_recursive.cpp](collatz_recursive.cpp), the source code.
-   [collatz\_recursive.hpp](collatz_recursive.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [collatz\_recursive\_prb.cpp](collatz_recursive_prb.cpp), a sample
    calling program.
-   [collatz\_recursive\_prb\_output.txt](collatz_recursive_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COLLATZ\_PATH** uses recursion to print the path of a Collatz
    sequence.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 March 2012.*
