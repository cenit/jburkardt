UPC\
Uniform Product Code Check Digit {#upc-uniform-product-code-check-digit align="center"}
================================

------------------------------------------------------------------------

**UPC** is a C++ library which can compute the check digit associated
with a uniform product code (UPC), or it can report whether a 12-digit
UPC is actually valid.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**UPC** is available in [a C version](../../c_src/upc/upc.html) and [a
C++ version](../../cpp_src/upc/upc.html) and [a FORTRAN90
version](../../f_src/upc/upc.html) and [a MATLAB
version](../../m_src/upc/upc.html) and [a Python
version](../../py_src/upc/upc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BANK](../../cpp_src/bank/bank.html), a C++ library which can compute
the check digit associated with a US Bank Routing Number check digit, or
it can report whether a 9-digit code is actually valid.

[ISBN](../../cpp_src/isbn/isbn.html), a C++ library which can determine
the check digit for an International Standard Book Number or report
whether a given ISBN is valid.

[LUHN](../../cpp_src/luhn/luhn.html), a C++ program which computes the
Luhn check digit for a string, and can validate a string.

### Reference: {#reference align="center"}

1.  David Savir, George Laurer,\
    The Characteristics and Decodability of the Universal Product Code,\
    IBM Systems Journal,\
    Volume 14, Number 1, pages 16-34, 1975.

### Source Code: {#source-code align="center"}

-   [upc.cpp](upc.cpp), the source code.
-   [upc.hpp](upc.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [upc\_prb.cpp](upc_prb.cpp), a sample calling program.
-   [upc\_prb\_output.txt](upc_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_IS\_DIGIT** is TRUE if a character is a decimal digit.
-   **CH\_TO\_DIGIT** returns the value of a base 10 digit.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **S\_TO\_DIGITS** extracts N digits from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UPC\_CHECK\_DIGIT\_CALCULATE** returns the check digit of a UPC.
-   **UPC\_IS\_VALID** reports whether a UPC is valid.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 10 September 2015.*
