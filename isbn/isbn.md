ISBN\
Check Digit for International Standard Book Number {#isbn-check-digit-for-international-standard-book-number align="center"}
==================================================

------------------------------------------------------------------------

**ISBN** is a C++ library which can compute the check digit for an
International Standard Book Number (ISBN), or report whether a given
ISBN is valid.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ISBN** is available in [a C version](../../c_src/isbn/isbn.html) and
[a C++ version](../../cpp_src/isbn/isbn.html) and [a FORTRAN90
version](../../f_src/isbn/isbn.html) and [a MATLAB
version](../../m_src/isbn/isbn.html) and [a Python
version](../../py_src/isbn/isbn.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BANK](../../cpp_src/bank/bank.html), a C++ library which can compute
the check digit associated with a US Bank Routing Number check digit, or
it can report whether a 9-digit code is actually valid.

[LUHN](../../cpp_src/luhn/luhn.html), a C++ program which computes the
Luhn check digit for a string, and can validate a string.

[UPC](../../cpp_src/upc/upc.html), a C++ library which can determine the
check digit for a Uniform Product Code (UPC) or report whether a given
UPC is valid.

### Reference: {#reference align="center"}

1.  

### Source Code: {#source-code align="center"}

-   [isbn.cpp](isbn.cpp), the source code.
-   [isbn.hpp](isbn.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [isbn\_prb.cpp](isbn_prb.cpp), a sample calling program.
-   [isbn\_prb\_output.txt](isbn_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_IS\_DIGIT** is TRUE if a character is a decimal digit.
-   **CH\_TO\_DIGIT** returns the value of a base 10 digit.
-   **I4\_TO\_ISBN** converts an I4 to an ISBN digit.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **ISBN\_CHECK\_DIGIT\_CALCULATE** determines the check digit for an
    ISBN.
-   **ISBN\_IS\_VALID** reports whether an ISBN is valid.
-   **ISBN\_TO\_I4** converts an ISBN character into an integer.
-   **S\_TO\_DIGITS** extracts N digits from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 September 2015.*
