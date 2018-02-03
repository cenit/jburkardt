LUHN\
Luhn Check Digit for Error Detection {#luhn-luhn-check-digit-for-error-detection align="center"}
====================================

------------------------------------------------------------------------

**LUHN** is a C++ library which demonstrates the calculation and use of
the Luhn check digit for error detection.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LUHN** is available in [a C version](../../c_src/luhn/luhn.html) and
[a C++ version](../../cpp_src/luhn/luhn.html) and [a FORTRAN90
version](../../f_src/luhn/luhn.html) and [a MATLAB
version](../../m_src/luhn/luhn.html) and [a Python
version.](../../py_src/luhn/luhn.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BANK](../../cpp_src/bank/bank.html), a C++ library which can compute
the check digit associated with a US Bank Routing Number check digit, or
it can report whether a 9-digit code is actually valid.

[ISBN](../../cpp_src/isbn/isbn.html), a C++ library which can determine
the check digit for an International Standard Book Number or report
whether a given ISBN is valid.

[UPC](../../cpp_src/upc/upc.html), a C++ library which can determine the
check digit for a Uniform Product Code (UPC) or report whether a given
UPC is valid.

### Source Code: {#source-code align="center"}

-   [luhn.cpp](luhn.cpp), the source code.
-   [luhn.hpp](luhn.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [luhn\_prb.cpp](luhn_prb.cpp), a sample calling program.
-   [luhn\_prb\_output.txt](luhn_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_IS\_DIGIT** is TRUE if a character is a decimal digit.
-   **CH\_TO\_DIGIT** returns the value of a base 10 digit.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **LUHN\_CHECK\_DIGIT\_CALCULATE** determines the Luhn check digit of
    a string.
-   **LUHN\_CHECKSUM** determines the Luhn checksum of a string.
-   **LUHN\_IS\_VALID** determines whether a string with Luhn check
    digit is valid.
-   **S\_DIGITS\_COUNT** counts the digits in a string.
-   **S\_TO\_DIGITS** extracts N digits from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 September 2015.*
