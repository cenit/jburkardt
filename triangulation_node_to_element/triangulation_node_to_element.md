TRIANGULATION\_NODE\_TO\_ELEMENT\
Average Node Data to Create Element Data {#triangulation_node_to_element-average-node-data-to-create-element-data align="center"}
========================================

------------------------------------------------------------------------

**TRIANGULATION\_NODE\_TO\_ELEMENT** is a C++ program which reads
datafiles describing a set of nodes, their triangulation, and the value
of one or more quantities at each node, and outputs a file that averages
the quantities for each element. This operation in effect creates an
"order1" finite element model of the data.

The program reads three data files:

-   a node file, containing X, Y coordinates of points;
-   an element file, containing a list of sets of three points making up
    each triangular element; (if this file does not exist, the program
    will generate the element data automatically).
-   a node values file, containing the values of one or more data items
    at each node.

and creates

-   an element values file, containing the values of the data, averaged
    over the nodes in each element.

### Usage: {#usage align="center"}

> **triangulation\_node\_to\_element** *prefix*

where

-   *prefix*\_nodes.txt, lists the node coordinates;
-   *prefix*\_elements.txt lists the indices of nodes that form elements
    (this file is optional, and if not supplied, the information will be
    generated internally);
-   *prefix*\_values.txt contains the value assigned to each node.
-   *prefix*\_element\_values.txt will contain the values averaged over
    the nodes in each element.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_NODE\_TO\_ELEMENT** is available in [a C
version](../../c_src/triangulation_node_to_element/triangulation_node_to_element.md)
and [a C++
version](../../master/triangulation_node_to_element/triangulation_node_to_element.md)
and [a FORTRAN77
version](../../f77_src/triangulation_node_to_element/triangulation_node_to_element.md)
and [a FORTRAN90
version](../../f_src/triangulation_node_to_element/triangulation_node_to_element.md)
and [a MATLAB
version](../../m_src/triangulation_node_to_element/triangulation_node_to_element.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TRIANGULATION](../../master/triangulation/triangulation.md), a C++
library which carries out various operations on order 3 ("linear") or
order 6 ("quadratic") triangulations.

[TRIANGULATION\_L2Q](../../master/triangulation_l2q/triangulation_l2q.md),
a C++ program which reads information about a 3-node (linear)
triangulation and creates data defining a corresponding 6-node
(quadratic) triangulation;

[TRIANGULATION\_Q2L](../../master/triangulation_q2l/triangulation_q2l.md),
a C++ program which reads information about a 6-node (quadratic)
triangulation and creates data defining a corresponding 3-node (linear)
triangulation;

### Source Code: {#source-code align="center"}

-   [triangulation\_node\_to\_element.cpp](triangulation_node_to_element.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lake\_nodes.txt](lake_nodes.txt), the node coordinate file.
-   [lake\_elements.txt](lake_elements.txt), the element file.
-   [lake\_values.txt](lake_values.txt), the node values file.
-   [lake\_element\_values.txt](lake_element_values.txt), the
    element\_values file created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_NODE\_TO\_ELEMENT.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of the transpose of an
    I4MAT.
-   **I4MAT\_WRITE** writes an I4MAT file.
-   **MESH\_BASE\_ONE** ensures that the element definition is
    one-based.
-   **R8MAT\_DATA\_READ** reads data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 April 2014.*
