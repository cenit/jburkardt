BISECTION\_INTEGER\
Seek Integer Roots for F(X)=0 {#bisection_integer-seek-integer-roots-for-fx0 align="center"}
=============================

------------------------------------------------------------------------

**BISECTION\_INTEGER** is a C++ library which seeks an integer solution
to the equation F(X)=0, using bisection within a user-supplied change of
sign interval \[A,B\].

A function F(X) confined to integer arguments is given, with an interval
\[A,B\] over which F changes sign. An integer C is sought such that A ≤
C ≤ B and F(C) = 0.

Because we are restricted to integer arguments, it may the case that
there is no such C.

This routine proceeds by a form of bisection, in which the enclosing
interval is restricted to be defined by integer values.

If the user has given a true change of sign interval \[A,B\], and if, in
the interval, there is a single integer value C for which F(C) = 0, with
the additional restrictions that F(C-1) and F(C+1) are of opposite
signs, then this procedure should locate and return C.

In particular, if the function F is monotone, and there is an integer
solution C in the interval, then this procedure will find it.

However, in general, even if there is an integer C in the interval, such
that F(C) = 0, this procedure may be unable to find it, particularly if
there are also nonintegral solutions within the same interval.

While any integer function can be used with this program, the bisection
approach is most useful if the integer function is monotone, or varies
slowly, or can be regarded as the restriction to integer arguments of a
continuous (and smoothly varying) function of a real argument. In such
cases, knowing that F is negative at A and positive at B suggests that F
generally increases from A to B, and might attain the value 0 at some
intermediate argument C.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BISECTION\_INTEGER** is available in [a C
version](../../c_src/bisection_integer/bisection_integer.md) and [a
C++ version](../../master/bisection_integer/bisection_integer.md) and
[a FORTRAN77
version](../../f77_src/bisection_integer/bisection_integer.md) and [a
FORTRAN90 version](../../f_src/bisection_integer/bisection_integer.md)
and [a MATLAB
version](../../m_src/bisection_integer/bisection_integer.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BISECTION\_RC](../../master/bisection_rc/bisection_rc.md), a C++
library which seeks a solution to the equation F(X)=0 using bisection
within a user-supplied change of sign interval \[A,B\]. The procedure is
written using reverse communication.

[BRENT](../../master/brent/brent.md), a C++ library which contains
Richard Brent's routines for finding the zero, local minimizer, or
global minimizer of a scalar function of a scalar argument, without the
use of derivative information.

[TEST\_ZERO](../../master/test_zero/test_zero.md), a C++ library
which defines functions which can be used to test zero finders.

### Source Code: {#source-code align="center"}

-   [bisection\_integer.cpp](bisection_integer.cpp), the source code.
-   [bisection\_integer.hpp](bisection_integer.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [bisection\_integer\_prb.cpp](bisection_integer_prb.cpp), a sample
    calling program.
-   [bisection\_integer\_prb\_output.txt](bisection_integer_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BISECTION\_INTEGER** seeks an integer root using bisection.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 August 2012.*
