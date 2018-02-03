PARTIAL\_DIGEST\
Recursive Solutions of the Partial Digest Problem {#partial_digest-recursive-solutions-of-the-partial-digest-problem align="center"}
=================================================

------------------------------------------------------------------------

**PARTIAL\_DIGEST** is a C++ library which seeks solutions of the
partial digest problem.

In the partial digest problem, we assume that there are **N** objects
arranged along a line. We denote the position of object **I** by
**X(I)**. The positions of the objects are unknown. Instead, we have a
list of the distances between every distinct pair of objects. Note that
the distances are not "tagged"; that is, if there is a 175 on the list
of distances, we don't know which two objects are separated by that
distance. In the partial digest problem, we start with the
**(N\*(N-1))/2** distances, and must come up with at least one linear
arrangement of **N** objects that corresponds to the distances.

In the algorithm used here, we begin by arbitrarily setting **X(1)** to
zero.

For our second step, we find the largest entry in the distance table,
and set **X(2)** to that value.

On each recursive step thereafter, we find the largest unused distance,
**D**, and note that this must represent the distance of the next object
from either **X(1)** or **X(2)**.

Starting with the first possibility, we consider placing this next
object at **X(K)=D**. We now must search the distance table, and ensure
that the distances **|X(1)-X(K)|** through **|X(K-1)-X(K)|** all show
up. If so, then our tentative placement of the object is "plausible",
and we can proceed to the next step of recursion, seeking the location
of **X(K+1)**.

The second possibility to check on this recursive step is that we should
set **X(K)=X(2)-D**, since this would also explain the occurrence of the
distance **D**. The analysis of this case is otherwise the same as for
the first one.

This recursion is guaranteed to "encounter" every solution. (Of course,
there might be no solutions whatever.)

This approach has the advantage that recursion is relatively clean and
neat to program. Disadvantages include the fact that the amount of
memory required to store partial results will grow explosively as the
size of the problem increases. Also, it is difficult to intervene or
interrupt the recursive process. For instance, the calling program never
receives the computed solutions directly. Instead, the recursive routine
"realizes" that it has computed a solution, and can print it out.

For these reasons, it would be worth developing an equivalent version of
the routines that uses backtracking instead.

Note that this program used **integers** for the distances. While this
is somewhat unnatural, it is convenient when programming, since we are
searching the list of distances for values that we arrive at by
subtraction, and the slightest roundoff would mean that the algorithm
would fail. An alternative would be to allow floating point distances,
but to allow a very slight margin of error when looking for a distance
in the table that is equal to a difference calculated between two
positions.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PARTIAL\_DIGEST** is available in [a C
version](../../c_src/partial_digest/partial_digest.md) and [a C++
version](../../master/partial_digest/partial_digest.md) and [a
FORTRAN90 version](../../f_src/partial_digest/partial_digest.md) and
[a MATLAB version](../../m_src/partial_digest/partial_digest.md) and
[a Python version](../../py_src/partial_digest/partial_digest.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[SUBSET](../../master/subset/subset.md), a C++ library which carries
out various combinatorial computations.

[TEST\_PARTIAL\_DIGEST](../../master/test_partial_digest/test_partial_digest.md),
a C++ library which generates versions of the partial digest problem.

### Reference: {#reference align="center"}

1.  Pavel Pevzner,\
    Computational Molecular Biology,\
    MIT Press, 2000,\
    ISBN: 0-262-16197-4,\
    LC: QH506.P47.

### Source Code: {#source-code align="center"}

-   [partial\_digest.cpp](partial_digest.cpp), the source code.
-   [partial\_digest.txt](partial_digest.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PARTIAL\_DIGEST\_TEST.
-   **FIND\_DISTANCES** determines if the "free" distances include every
    ||X(I)-Y||.
-   **FIND\_DISTANCES\_TEST** tests FIND\_DISTANCES.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4\_UNIFORM\_AB\_TEST** tests I4\_UNIFORM\_AB.
-   **I4VEC\_MAX\_LAST** moves the maximum entry of an I4VEC to the last
    position.
-   **I4VEC\_MAX\_LAST\_TEST** tests I4VEC\_MAX\_LAST.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_PRINT\_TEST** tests I4VEC\_PRINT.
-   **PLACE** tries to place the next point for the partial digest
    problem.
-   **PARTIAL\_DIGEST\_RECUR** uses recursion on the partial digest
    problem.
-   **PARTIAL\_DIGEST\_RECUR\_TEST01** tests PARTIAL\_DIGEST\_RECUR.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 January 2018.*
