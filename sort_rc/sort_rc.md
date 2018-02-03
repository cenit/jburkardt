SORT\_RC\
Sort Using Reverse Communication {#sort_rc-sort-using-reverse-communication align="center"}
================================

------------------------------------------------------------------------

**SORT\_RC** is a C++ library which can sort a list of any kind of
objects, using reverse communication (RC).

The program works by repeatedly asking the user to compare two items on
the list. The user is free to carry out the comparison in the calling
program, in any desired way.

A typical usage, to sort an array of 100 items, might look something
like this:

            n = 100
            indx = 0   -- Indicates the beginning of a sort
     
            begin loop

              sort_rc ( n, &indx, &i, &j, isgn )

              if ( indx < 0 )   (Compare items I and J)

                if ( a[i-1] <= a[j-1] )
                  isgn = -1
                else
                  isgn = +1
     
               else if ( 0 < indx )  (Swap items I and J)
      
                 k      = a[i-1]
                 a[i-1] = a[j-1]
                 a[j-1] = k
     
               else
     
                 break from loop

            end loop
          

The original version of sort\_rc() requires the use of several variables
declared internally to the function, whose values must be preserved
between calls. The conventions for such computations vary from language
to language; moreover, this kind of approach means that a single copy of
the function cannot handle multiple requests for computation that might
arise, especially in parallel computations. For that reason, a revised
function, called sort\_safe\_rc(), is available, which does not rely on
hidden internal variables and may safely be used to manage multiple
simultaneous sorts.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SORT\_RC** is available in [a C
version](../../c_src/sort_rc/sort_rc.md) and [a C++
version](../../master/sort_rc/sort_rc.md) and [a FORTRAN77
version](../../f77_src/sort_rc/sort_rc.md) and [a FORTRAN90
version](../../f_src/sort_rc/sort_rc.md) and [a MATLAB
version](../../m_src/sort_rc/sort_rc.md) and [a Python
version](../../py_src/sort_rc/sort_rc.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BACKTRACK\_BINARY\_RC](../../master/backtrack_binary_rc/backtrack_binary_rc.md),
a C++ library which carries out a backtrack search for a set of binary
decisions, using reverse communication.

[BISECTION\_RC](../../master/bisection_rc/bisection_rc.md), a C++
library which seeks a solution to the equation F(X)=0 using bisection
within a user-supplied change of sign interval \[A,B\]. The procedure is
written using reverse communication.

[CG\_RC](../../master/cg_rc/cg_rc.md), a C++ library which implements
the conjugate gradient (CG) method for solving a positive definite
sparse linear system A\*x=b, using reverse communication (RC).

[LOCAL\_MIN\_RC](../../master/local_min_rc/local_min_rc.md), a C++
library which finds a local minimum of a scalar function of a scalar
variable, without the use of derivative information, using reverse
communication (RC), by Richard Brent.

[ROOT\_RC](../../master/root_rc/root_rc.md), a C++ library which
seeks a solution of a scalar nonlinear equation f(x) = 0, using reverse
communication (RC), by Gaston Gonnet.

[ROOTS\_RC](../../master/roots_rc/roots_rc.md), a C++ library which
seeks a solution of a system of nonlinear equations f(x) = 0, using
reverse communication (RC), by Gaston Gonnet.

[SUBSET](../../master/subset/subset.md), a C++ library which
enumerates, generates, randomizes, ranks and unranks combinatorial
objects including combinations, compositions, Gray codes, index sets,
partitions, permutations, polynomials, subsets, and Young tables.
Backtracking routines are included to solve some combinatorial problems.

[ZERO\_RC](../../master/zero_rc/zero_rc.md), a C++ library which
seeks solutions of a scalar nonlinear equation f(x) = 0, using reverse
communication (RC).

### Reference: {#reference align="center"}

1.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.

### Source Code: {#source-code align="center"}

-   [sort\_rc.cpp](sort_rc.cpp), the source code;
-   [sort\_rc.hpp](sort_rc.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [sort\_rc\_prb.cpp](sort_rc_prb.cpp), the calling program;
-   [sort\_rc\_prb\_output.txt](sort_rc_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_UNIFORM\_AB** returns a scaled pseudorandom I4VEC.
-   **SORT\_RC** externally sorts a list of items into ascending order.
-   **SORT\_SAFE\_RC** externally sorts a list of items into ascending
    order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 10 March 2015.*
