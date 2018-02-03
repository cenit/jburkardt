MINESWEEPER\
An ASCII-Graphics Emulation of Minesweeper {#minesweeper-an-ascii-graphics-emulation-of-minesweeper align="center"}
==========================================

------------------------------------------------------------------------

**MINESWEEPER** is a C++ program which emulates the popular Minesweeper
game, using ASCII graphics, by Detelina Stoyanova.

The program sets up an 8 by 8 board, with 10 mines. The minefield is
displayed, using '-' to indicate unknown squares, a blank for clear
squares, and a number for a clear square with that many mined neighbors.

The user selects a square by typing in the row and column number.

There are three optional inputs:

-   **M** means you want to mark a possible mine. The program asks you
    to specify a row and column, and places a '?' there.
-   **U** means you want to unmark a possible mine. The program places a
    '-' there.
-   **Q** means you want to quit the game immediately;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MINESWEEPER** is available in [a C++
version](../../master/minesweeper/minesweeper.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LIFE\_OPENGL](../../master/life_opengl/life_opengl.md), a C++
program which uses OpenGL to display the evolution of John Conway's
"Game of Life".

[LIGHTS\_OUT\_OPENGL](../../master/lights_out_opengl/lights_out_opengl.md),
a C++ program which sets up a "Lights Out" game and allows the user to
solve it, using the OpenGL graphics window.

### Author: {#author align="center"}

Detelina Stoyanova

### Reference: {#reference align="center"}

1.  Richard Kaye,\
    Minesweeper is NP Complete,\
    Mathematical Intelligencer,\
    Volume 22, Number 2, pages 9-15, 2000.

### Source Code: {#source-code align="center"}

-   [minesweeper.cpp](minesweeper.cpp), the source code.
-   [minesweeper.hpp](minesweeper.hpp), the include file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main function for the MINESWEEPER program.
-   **INITIALSTATE** initializes all the elements of the two arrays to
    -'s
-   **PRINTTABLE** prints the visible table.
-   **PLACEMINES** places MINES mines randomly in the table.
-   **CALCULATENUMBERS** calculates the number of mines adjacent to each
    square.
-   **GETNEIGHBORS** returns the indices of the 8 neighbors of a square.
-   **ISREALNEIGHBOR** checks which neighbors are "real neighbors".
-   **COUNTMINES** computes the number of mines that are neighbors to a
    square.
-   **PLAY** controls the game and allows the player to make moves.
-   **OPENSAFE** is called whenever a square with no neighboring mines
    is cleared.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 26 July 2011.*
