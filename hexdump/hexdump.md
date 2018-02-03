HEXDUMP\
Hexadecimal file dump {#hexdump-hexadecimal-file-dump align="center"}
=====================

------------------------------------------------------------------------

**HEXDUMP** is a C++ program which prints the contents of a file, byte
by byte, in hexadecimal format.

This sort of information can be useful when determining the format of a
file, checking for byte-swapping, or other common tasks.

On many computer systems, there's already a program called **hexdump**,
so you have to be careful that you know which program you are running!
You can type

> `         which hexdump       `

to see where the system is going to go if you issue the command. If you
don't like what this tells you, you can either invoke the command with
path information, or you can rename it, to say "my\_hexdump".

Thanks to John McCabe of Rutgers for pointing out and correcting a bug
which occurred on some machines if the byte value 0xFF was encountered,
30 January 2008.

### Usage: {#usage align="center"}

 **hexdump** *filename* 
:   reads *filename* and writes a hexadecimal dump to the standard
    output.

### Sample Output: {#sample-output align="center"}


            HEXDUMP: Hexadecimal dump of file: box.3ds.

               Address                   Hexadecimal values                  Printable
            -----  -----------------------------------------------  ----------------

                0  4d 4d 53 02 00 00 02 00 0a 00 00 00 03 00 00 00  MMS.............
               16  3d 3d 68 01 00 00 3e 3d 0a 00 00 00 03 00 00 00  ==h...>=........
               32  00 01 0a 00 00 00 00 00 80 3f 00 40 4e 01 00 00  .........?.@N...
               48  42 6f 78 30 31 00 00 41 42 01 00 00 10 41 68 00  Box01..AB....Ah.
               ...
          

### Languages: {#languages align="center"}

**HEXDUMP** is available in [a C++
version](../../cpp_src/hexdump/hexdump.html).

### Reference: {#reference align="center"}

1.  Howard Burdick,\
    Digital Imaging: Theory and Applications,\
    McGraw Hill, 1997,\
    ISBN: 0079130593,\
    LC: TA1637.B87.

### Source Code: {#source-code align="center"}

-   [hexdump.cpp](hexdump.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [text.txt](text.txt), a file;
-   [text.hex](text.hex), the hexadecimal dump file, created by typing

                    hexdump text.txt > text.hex
                  

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for HEXDUMP.
-   **HANDLE** creates a hexdump for a single file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
