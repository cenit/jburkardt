TEST\_PARTIAL\_DIGEST\
Test Problems for Partial Digest {#test_partial_digest-test-problems-for-partial-digest align="center"}
================================

------------------------------------------------------------------------

**TEST\_PARTIAL\_DIGEST** is a C++ library which can generate example
cases of the partial digest problem.

In the partial digest problem, we assume that there are **N** objects
arranged along a line. We denote the position of object **I** by
**X(I)**. The positions of the objects are unknown. Instead, we have a
list of the distances between every distinct pair of objects. Note that
the distances are not "tagged"; that is, if there is a 175 on the list
of distances, we don't know which two objects are separated by that
distance. In the partial digest problem, we start with the
**(N\*(N-1))/2** distances D, and must come up with at least one linear
arrangement of **N** objects that corresponds to the distances.

To use this library, the user specifies a number of objects N, and a
maximum separation DMAX. The library will generate N object locations in
an array called LOCATE, and the corresponding list of distances D.

-   N must be at least 2.
-   DMAX must be at least N - 1.
-   The entries in LOCATE will be distinct integers in ascending order.
-   LOCATE(1) = 0 and LOCATE(N) = DMAX.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_PARTIAL\_DIGEST** is available in [a C
version](../../c_src/test_partial_digest/test_partial_digest.md) and
[a C++
version](../../master/test_partial_digest/test_partial_digest.md) and
[a FORTRAN90
version](../../f_src/test_partial_digest/test_partial_digest.md) and
[a MATLAB
version](../../m_src/test_partial_digest/test_partial_digest.md) and
[a Python
version](../../py_src/test_partial_digest/test_partial_digest.md).

### Related Software and Data: {#related-software-and-data align="center"}

[SUBSET](../../master/subset/subset.md), a C++ library which carries
out various combinatorial computations.

### Reference: {#reference align="center"}

1.  Pavel Pevzner,\
    Computational Molecular Biology,\
    MIT Press, 2000,\
    ISBN: 0-262-16197-4,\
    LC: QH506.P47.

### Source Code: {#source-code align="center"}

-   [test\_partial\_digest.cpp](test_partial_digest.cpp), the source
    code.
-   [test\_partial\_digest.hpp](test_partial_digest.hpp), the include
    file.
-   [test\_partial\_digest.txt](test_partial_digest.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** tests the TEST\_PARTIAL\_DIGEST library.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4\_UNIFORM\_AB\_TEST** tests I4\_UNIFORM\_AB.
-   **I4VEC\_DISTANCES** computes a pairwise distance table.
-   **I4VEC\_DISTANCES\_TEST** tests I4VEC\_DISTANCES.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into an descending heap.
-   **I4VEC\_HEAP\_D\_TEST** tests I4VEC\_HEAP\_D.
-   **I4VEC\_PRINT** prints an I4VEC, with an optional title.
-   **I4VEC\_PRINT\_TEST** tests I4VEC\_PRINT.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_SORT\_HEAP\_A\_TEST** tests I4VEC\_SORT\_HEAP\_A.
-   **KSUB\_RANDOM** selects a random subset of size K from a set of
    size N.
-   **KSUB\_RANDOM\_TEST** tests KSUB\_RANDOM.
-   **TEST\_PARTIAL\_DIGEST** returns a partial digest test problem.
-   **TEST\_PARTIAL\_DIGEST\_TEST** tests TEST\_PARTIAL\_DIGEST.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 January 2018.*
