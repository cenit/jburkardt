CNF\_IO\
Read or Write a CNF File {#cnf_io-read-or-write-a-cnf-file align="center"}
========================

------------------------------------------------------------------------

**CNF\_IO** is a C++ library which can read or write a file, in the
DIMACS CNF format, containing information about a boolean formula
written in conjunctive normal form.

Boolean expressions, written in conjunctive normal form, may be used as
test cases for the satisfiability problem. That problem seeks to
determine all possible combinations of variable values that result in
the formula being evaluated as TRUE.

The routines in CNF\_IO are intended to make it possible to transfer
information between a CNF file and a computer program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CNF\_IO** is available in [a C++
version](../../master/cnf_io/cnf_io.md) and [a FORTRAN77
version](../../f77_src/cnf_io/cnf_io.md) and [a FORTRAN90
version.](../../f_src/cnf_io/cnf_io.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CNF](../../data/cnf/cnf.md), a data directory which describes the
DIMACS CNF file format for specifying instances of the satisfiability
problem for boolean formulas in conjunctive normal form.

[SATISFY](../../master/satisfy/satisfy.md), a C++ program which
demonstrates, for a particular circuit, an exhaustive search for
solutions of the circuit satisfiability problem.

### Reference: {#reference align="center"}

1.  Rina Dechter,\
    Enhancement Schemes for constraint processing: Backjumping,
    learning, and cutset decomposition,\
    Artificial Intelligence,\
    Volume 41, Number 3, January 1990, pages 273-312.

### Source Code: {#source-code align="center"}

-   [cnf\_io.cpp](cnf_io.cpp), the source code.
-   [cnf\_io.hpp](cnf_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cnf\_io\_prb.cpp](cnf_io_prb.cpp), a sample calling program.
-   [cnf\_io\_prb\_output.txt](cnf_io_prb_output.txt), the output file.
-   [test01\_v3\_c2.cnf](test01_v3_c2.cnf), a CNF file, for 3 variables
    and 2 clauses, written by the sample program.
-   [test02\_v16\_c18.cnf](test02_v6_c18.cnf), a CNF file, for 16
    variables and 18 clauses, written by the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_IS\_SPACE** is TRUE if a character represents "white space".
-   **CNF\_DATA\_READ** reads the data of a CNF file.
-   **CNF\_DATA\_WRITE** writes data to a CNF file.
-   **CNF\_EVALUATE** evaluates a formula in CNF form.
-   **CNF\_HEADER\_READ** reads the header of a CNF file.
-   **CNF\_HEADER\_WRITE** writes the header for a CNF file.
-   **CNF\_PRINT** prints CNF information.
-   **CNF\_WRITE** writes the header and data of a CNF file.
-   **I4\_POWER** returns the value of I\^J.
-   **LVEC\_NEXT** generates the next logical vector.
-   **S\_ADJUSTL** flushes a string left.
-   **S\_BLANKS\_DELETE** replaces consecutive blanks by one blank.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_WORD\_EXTRACT\_FIRST** extracts the first word from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 June 2008.*
