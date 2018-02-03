MACHINE\
Table of Machine Constants {#machine-table-of-machine-constants align="center"}
==========================

------------------------------------------------------------------------

**MACHINE** is a C++ library which returns machine constants,
particularly those related to arithmetic with single precision real and
double precision real quantities.

### MACHINE must be reset for your computer {#machine-must-be-reset-for-your-computer align="center"}

MACHINE is not an "intelligent" program; it's simply a way to store and
retrieve the information necessary to describe the arithmetic performed
on a given computer. Therefore, if you plan to use MACHINE on a
particular kind of computer, you must verify that the values being
returned are appropriate.

One way to do this is to run the program **MACHAR** which is an
"intelligent" program that actually tries to determine machine
arithmetic properties dynamically.

### MACHINE's arithmetic assumptions {#machines-arithmetic-assumptions align="center"}

**MACHINE** uses some simple conventions to describe how integers and
real numbers are stored on an arbitrary computer.

**MACHINE** assumes that integers are represented using **S** digits in
base **A**:

> **Sign \* ( X(S-1)\*A\^(S-1) + ... + X(1)\*A + X(0))**

**MACHINE** assumes that real numbers are represented using a mantissa
**T**, base **B** and exponent **E** as:

> **Sign \* T \* B^E^**

### What MACHINE can return {#what-machine-can-return align="center"}

**D1MACH** returns quantities associated with double precision
arithmetic, including:

1.  **B\^(EMIN-1)**, the smallest positive magnitude.
2.  **B\^EMAX\*(1-B\^(-T))**, the largest magnitude.
3.  **B\^(-T)**, the smallest relative spacing.
4.  **B\^(1-T)**, the largest relative spacing.
5.  **log10(B)**

**I1MACH** returns quantities associated with integer arithmetic, as
well as some integer quantities associated with real and double
precision arithmetic, and other machine-specific information.

1.  the standard input unit.
2.  the standard output unit.
3.  the standard punch unit.
4.  the standard error message unit.
5.  the number of bits per integer storage unit.
6.  the number of characters per integer storage unit.
7.  **A**, the base for integers.
8.  **S**, the number of base **A** digits in an integer.
9.  **A\^S-1**, the largest integer.
10. **B**, the base for single and double precision numbers.
11. **T**, the number of base **B** digits for single precision.
12. **EMIN**, the smallest exponent **E** for single precision.
13. **EMAX**, the largest exponent **E** for single precision.
14. **T**, the number of base **B** digits for double precision.
15. **EMIN**, the smallest exponent **E** for double precision.
16. **EMAX**, the largest exponent **E** for double precision.

**R1MACH** returns quantities associated with single precision
arithmetic, including:

1.  **B\^(EMIN-1)**, the smallest positive magnitude.
2.  **B\^EMAX\*(1-B\^(-T))**, the largest magnitude.
3.  **B\^(-T)**, the smallest relative spacing.
4.  **B\^(1-T)**, the largest relative spacing.
5.  **log10(B)**

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MACHINE** is available in [a C
version](../../c_src/machine/machine.md) and [a C++
version](../../master/machine/machine.md) and [a FORTRAN77
version](../../f77_src/machine/machine.md) and [a FORTRAN90
version](../../f_src/machine/machine.md) and [a MATLAB
version](../../m_src/machine/machine.md) and [a Python
version](../../py_src/machine/machine.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MACHAR](../../master/machar/machar.md), a C++ library which can
compute machine arithmetic quantities dynamically.

### Reference: {#reference align="center"}

1.  Phyllis Fox, Andrew Hall, Norman Schryer,\
    Algorithm 528: Framework for a Portable Library,\
    ACM Transactions on Mathematical Software,\
    Volume 4, Number 2, June 1978, page 176-188.
2.  <http://www.netlib.org/toms/528>\
    the NETLIB web site for ACM TOMS algorithms.

### Source Code: {#source-code align="center"}

-   [machine.cpp](machine.cpp), the source code.
-   [machine.hpp](machine.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [machine\_prb.cpp](machine_prb.cpp), a sample calling program.
-   [machine\_prb\_output.txt](machine_prb_output.txt), the output from
    a run of the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **D1MACH** returns double precision machine constants.
-   **I1MACH** returns integer machine constants.
-   **R1MACH** returns single precision machine constants.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 24 April 2007.*
