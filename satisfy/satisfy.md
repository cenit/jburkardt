SATISFY\
Seek Binary Circuit Inputs that Output 1 {#satisfy-seek-binary-circuit-inputs-that-output-1 align="center"}
========================================

------------------------------------------------------------------------

**SATISFY** is a C++ program which demonstrates, for a particular
circuit, an exhaustive search for solutions of the circuit satisfy
problem.

This problem assumes that we are given a logical circuit of AND, OR and
NOT gates, with N binary inputs and a single output. We are to determine
all inputs which produce a 1 as the output.

The general problem is NP complete, so there is no known polynomial-time
algorithm to solve the general case. The natural way to search for
solutions then is exhaustive search.

In an interesting way, this is a very extreme and discrete version of
the problem of maximizing a scalar function of multiple variables. The
difference is that here we know that both the input and output only have
the values 0 and 1, rather than a continuous range of real values!

This problem is a natural candidate for parallel computation, since the
individual evaluations of the circuit are completely independent.

The example circuit considered here has been described in conjunctive
normal form ("CNF"). This is a standard format for logical formulas. At
the highest level, the formula consists of *clauses* joined by the
**AND** (conjunction) operator. Each clause consists of *signed
literals* joined by the **OR** (disjunction) operator. Each signed
literal is either the name of a variable (positive literal), or the name
of a variable preceded by the **NOT** (negation) operator (a negative
literal). There is a CNF file format that can be used to store logical
formulas that have been cast into conjunctive normal form.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SATISFY** is available in [a C
version](../../c_src/satisfy/satisfy.html) and [a C++
version](../../cpp_src/satisfy/satisfy.html) and [a FORTRAN77
version](../../f77_src/satisfy/satisfy.html) and [a FORTRAN90
version](../../f_src/satisfy/satisfy.html) and [a MATLAB
version](../../m_src/satisfy/satisfy.html) and [a Python
version](../../py_src/satisfy/satisfy.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHANGE\_MAKING](../../cpp_src/change_making/change_making.html), a C++
library which considers the change making problem, in which a given sum
is to be formed using coins of various denominations.

[CNF](../../data/cnf/cnf.html), a data directory which describes the
DIMACS CNF file format for defining instances of the satisfy problem for
boolean formulas in conjunctive normal form.

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
many combinatorial routines.

[KNAPSACK\_01](../../cpp_src/knapsack_01/knapsack_01.html), a C++
library which uses brute force to solve small versions of the 0/1
knapsack problem;

[PARTITION\_PROBLEM](../../cpp_src/partition_problem/partition_problem.html),
a C++ library which seeks solutions of the partition problem, splitting
a set of integers into two subsets with equal sum.

[SATISFY\_MPI](../../cpp_src/satisfy_mpi/satisfy_mpi.html), a C++
program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfy problem, using MPI to carry
out the calculation in parallel.

[SATISFY\_OPENMP](../../cpp_src/satisfy_openmp/satisfy_openmp.html), a
C++ program which solves the circuit satisfy problem using the OpenMP
parallel programming system.

[SEARCH\_SERIAL](../../cpp_src/search_serial/search_serial.html), a C++
program which searches the integers from A to B for a value J such that
F(J) = C. this version of the program is intended as a starting point
for a parallel approach.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates combinations, partitions, subsets, index sets, and other
combinatorial objects.

[TSP\_BRUTE](../../cpp_src/tsp_brute/tsp_brute.html), a C++ program
which reads a file of city-to-city distances and solves the traveling
salesperson problem, using brute force.

### Reference: {#reference align="center"}

1.  Rina Dechter,\
    Enhancement Schemes for constraint processing: Backjumping,
    learning, and cutset decomposition,\
    Artificial Intelligence,\
    Volume 41, Number 3, January 1990, pages 273-312.
2.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.
3.  Steven Skiena,\
    The Algorithm Design Manual,\
    Springer, 1997,\
    ISBN: 0-387-94860-0,\
    LC: QA76.9.A43S55.

### Source Code: {#source-code align="center"}

-   [satisfy.cpp](satisfy.cpp), the source code.
-   [satisfy\_output.txt](satisfy_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SATISFY.
-   **BVEC\_NEXT** generates the next binary vector.
-   **CIRCUIT\_VALUE** returns the value of a circuit for a given input
    set.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 May 2008.*
