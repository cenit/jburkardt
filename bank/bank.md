BANK\
Bank Checksum Check Digit {#bank-bank-checksum-check-digit align="center"}
=========================

------------------------------------------------------------------------

**BANK** is a C++ library which can compute the check digit associated
with a US Bank Routing Number check digit, or it can report whether a
9-digit code is actually valid.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BANK** is available in [a C version](../../c_src/bank/bank.html) and
[a C++ version](../../cpp_src/bank/bank.html) and [a FORTRAN90
version](../../f_src/bank/bank.html) and [a MATLAB
version](../../m_src/bank/bank.html) and [a Python
version](../../py_src/bank/bank.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ISBN](../../cpp_src/isbn/isbn.html), a C++ library which can determine
the check digit for an International Standard Book Number or report
whether a given ISBN is valid.

[LUHN](../../cpp_src/luhn/luhn.html), a C++ program which computes the
Luhn check digit for a string, and can validate a string.

[UPC](../../cpp_src/upc/upc.html), a C++ library which can determine the
check digit for a Uniform Product Code (UPC) or report whether a given
UPC is valid.

### Source Code: {#source-code align="center"}

-   [bank.cpp](bank.cpp), the source code.
-   [bank.hpp](bank.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [bank\_prb.cpp](bank_prb.cpp), a sample calling program.
-   [bank\_prb\_output.txt](bank_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BANK\_CHECK\_DIGIT\_CALCULATE** returns the check digit of a bank
    checksum.
-   **BANK\_IS\_VALID** reports whether a bank checksum is valid.
-   **CH\_IS\_DIGIT** is TRUE if a character is a decimal digit.
-   **CH\_TO\_DIGIT** returns the value of a base 10 digit.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **S\_TO\_DIGITS** extracts N digits from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 October 2015.*
