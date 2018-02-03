TOMS515\
K subsets of an N set {#toms515-k-subsets-of-an-n-set align="center"}
=====================

------------------------------------------------------------------------

**TOMS515** is a C++ library which lists the subsets of size K selected
from a set of size N.

### Languages: {#languages align="center"}

**TOMS515** is available in [a C
version](../../c_src/toms515/toms515.html) and [a C++
version](../../cpp_src/toms515/toms515.html) and [a FORTRAN77
version](../../f77_src/toms515/toms515.html) and [a FORTRAN90
version](../../f_src/toms515/toms515.html) and [a MATLAB
version](../../m_src/toms515/toms515.html) and [a Python
version](../../py_src/toms515/toms515.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates combinations, partitions, subsets, index sets, and other
combinatorial objects.

### Reference: {#reference align="center"}

1.  Bill Buckles, Matthew Lybanon,\
    Algorithm 515: Generation of a Vector from the Lexicographical
    Index,\
    ACM Transactions on Mathematical Software,\
    Volume 3, Number 2, June 1977, pages 180-182.

### Source Code: {#source-code align="center"}

-   [toms515.cpp](toms515.cpp), the source code.
-   [toms515.hpp](toms515.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms515\_prb.cpp](toms515_prb.cpp), a sample calling program.
-   [toms515\_prb\_output.txt](toms515_prb_output.txt), the output from
    a run of the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **BINOM** computes the binomial coefficient.
-   **COMB** selects a subset of order P from a set of order N.
-   **I4\_CHOOSE\_CHECK** reports whether the binomial coefficient can
    be computed.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **R8\_GAMMA\_LOG** evaluates the logarithm of the gamma function.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 April 2016.*
