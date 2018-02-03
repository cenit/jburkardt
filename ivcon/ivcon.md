IVCON\
3D Graphics File Conversion {#ivcon-3d-graphics-file-conversion align="center"}
===========================

------------------------------------------------------------------------

**IVCON** is a C++ program which reads and writes a small variety of 3D
graphics file formats, converting from one to the other.

This is by no means a perfect or even correct program! It was
home-grown, and developed, as needed, to handle a particular set of
files. It can make mistakes, or crash, rather more often than software
you pay for, written by someone who knows what they're doing.

The supported formats include:

-   [3DS](../../data/3ds/3ds.html) AutoCAD 3D Studio Max binary files;
-   [ASE](../../data/ase/ase.html) AutoCAD ASCII export files;
-   [BYU](../../data/byu/byu.html) Movie.BYU surface geometry files;
-   [DXF](../../data/dxf/dxf.html) AutoCAD DXF files;
-   [GMOD](../../data/gmod/gmod.html) Golgotha GMOD files;
-   [HRC](../../data/hrc/hrc.html) SoftImage hierarchical files;
-   [IV](../../data/iv/iv.html) SGI Inventor files;
-   OBJ - a file format from Alias (
    <http://www.alias.com/eng/index.shtml>)
-   [OFF](../../data/off/off.html) GEOMVIEW OFF files;
-   [POV](../../data/pov/pov.html) Persistence of Vision files (output
    only);
-   [SMF](../../data/smf/smf.html) Michael Garland's format for his
    QSLIM program;
-   [STL/STLA](../../data/stla/stla.html) ASCII Stereolithography files;
-   [STLB](../../data/stlb/stlb.html) binary Stereolithography files;
-   [TEC](../../data/tec/tec.html) TECPLOT files (output only);
-   [TRI/TRIA](../../data/tria/tria.html) a simple ASCII triangle format
    requested by Greg Hood;
-   [TRIB](../../data/trib/trib.html) a simple binary triangle format
    requested by Greg Hood;
-   [TXT](../../data/txt/txt.html) a text dump (output only);
-   [UCD](../../data/ucd/ucd.html) Advanced Visual Systems (AVS)
    Unstructured Cell Data (output only);
-   [VLA](../../data/vla/vla.html) Evans and Sutherland Digistar II VLA
    files for planetariums;
-   [WRL](../../data/wrl/wrl.html) WRL/VRML (Virtual Reality Modeling
    Language) files (output only).
-   [XGL](../../data/xgl/xgl.html) the XGL format, based on the XML
    language and OpenGl graphics (output only).

The program can be used in command line form, as in:

> **ivcon** *input.iv* *output.stl*

or can be used in an interactive mode, in which input and output files
can be read or converted in any order.

Graphics file formats are poorly documented; hence this program was
written primarily by examining typical files and struggling to interpret
them. Particularly in the case of Inventor and DXF files, the program is
not able to handle all the subtleties of the file format, and may mangle
data, or even crash.

Helpful corrections to the 3DS reader were supplied by John F Flanagan.
The GMOD reader and writer were written and supplied by Zik Saleeba.
Improvements to the DXF routines to handle polygon oriented files were
supplied by Zik Saleeba. The 3DS reader is based on a program by Martin
van Velsen, with the help of Gert van der Spoel.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Related Data and Programs: {#related-data-and-programs align="center"}

[IVREAD](../../f_src/ivread/ivread.html), a FORTRAN90 program which can
convert some 3D graphics files.

[TEC\_TO\_OBJ](../../f_src/tec_to_obj/tec_to_obj.html), a FORTRAN90
program which can read a TECPLOT file describing a surface in 3D
composed of triangles or quadrilaterals, and write an OBJ file.

### Reference: {#reference align="center"}

1.  Adrian Bowyer and John Woodwark,\
    A Programmer's Geometry,\
    Butterworths, 1983.
2.  James Foley, Andries van Dam, Steven Feiner, John Hughes,\
    Computer Graphics, Principles and Practice,\
    Addison Wesley, Second Edition, 1990.
3.  3D Systems, Inc,\
    Stereolithography Interface Specification,\
    October 1989.

### Source Code: {#source-code align="center"}

-   [ivcon.cpp](ivcon.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   **IVCON** converts various 3D graphics files.
-   **MAIN** is the main program for converting graphics files.
-   **ASE\_READ** reads an AutoCAD ASE file.
-   **ASE\_WRITE** writes graphics information to an AutoCAD ASE file.
-   **BYU\_READ** reads graphics data from a Movie.BYU surface geometry
    file.
-   **BYU\_WRITE** writes out the graphics data as a Movie.BYU surface
    geometry file.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_INDEX\_LAST** finds the last occurrence of a character in a
    string.
-   **CH\_IS\_SPACEis** TRUE if a character represents "white space".
-   **CH\_PAD** "pads" a character in a string with a blank on either
    side.
-   **CH\_READ** reads one character from a binary file.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CH\_WRITE** writes one character to a binary file.
-   **COMMAND\_LINE** carries out a command-line session of file
    conversion.
-   **COR3\_NORMAL\_SET** computes node normal vectors.
-   **COR3\_RANGE** computes the coordinate minima and maxima.
-   **DATA\_CHECK** checks the input data.
-   **DATA\_INIT** initializes the internal graphics data.
-   **DATA\_READ** reads a file into internal graphics data.
-   **DATA\_REPORT** gives a summary of the contents of the data file.
-   **DATA\_WRITE** writes the internal graphics data to a file.
-   **DXF\_READ** reads an AutoCAD DXF file.
-   **DXF\_WRITE** writes graphics information to an AutoCAD DXF file.
-   **EDGE\_COUNT** determines the number of edges in a graph.
-   **EDGE\_NULL\_DELETE** deletes face edges with zero length.
-   **FACE\_AREA\_SET** computes the area of the faces.
-   **FACE\_NORMAL\_AVE** sets face normals as average of face vertex
    normals.
-   **FACE\_NULL\_DELETE** deletes faces of order less than 3.
-   **FACE\_PRINT** prints out information about a face.
-   **FACE\_REVERSE\_ORDER** reverses the order of the nodes in each
    face.
-   **FACE\_SUBSET** selects a subset of the current faces as the new
    object.
-   **FACE\_TO\_LINE** converts face information to line information.
-   **FACE\_TO\_VERTEX\_MAT** extends face material definitions to
    vertices.
-   **FILE\_EXT** picks out the extension in a file name.
-   **FLOAT\_READ** reads 1 float from a binary file.
-   **FLOAT\_REVERSE\_BYTES** reverses the four bytes in a float.
-   **FLOAT\_WRITE** writes 1 float to a binary file.
-   **GMOD\_ARCH\_CHECK** inquires into some features of the computer
    architecture.
-   **GMOD\_READ** reads a golgotha GMOD file.
-   **GMOD\_READ\_FLOAT** reads a float from a Golgotha GMOD file.
-   **GMOD\_READ\_W16** reads a 16 bit word from a Golgotha GMOD file.
-   **GMOD\_READ\_W32** reads a 32 bit word from a Golgotha GMOD file.
-   **GMOD\_WRITE** writes a Golgotha GMOD file.
-   **GMOD\_WRITE\_FLOAT** writes a float to a Golgotha GMOD file.
-   **GMOD\_WRITE\_W16** writes a 16 bit word to a Golgotha GMOD file.
-   **GMOD\_WRITE** writes a 32 bit word to a Golgotha GMOD file.
-   **HELLO** prints an explanatory header message.
-   **HELP** prints a list of the interactive commands.
-   **HRC\_READ** reads graphics information from a SoftImage HRC file.
-   **HRC\_WRITE** writes graphics data to an HRC SoftImage file.
-   **I4\_MAX** returns the maximum of two I4s.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_WRAP** forces an integer to lie between given limits by
    wrapping.
-   **INIT\_PROGRAM\_DATA** initializes the internal program data.
-   **INTERACT** carries on an interactive session with the user.
-   **IV\_READ** reads graphics information from an Inventor file.
-   **IV\_WRITE** writes graphics information to an Inventor file.
-   **I4VEC\_MAX** returns the maximum element in an I4VEC.
-   **LONG\_INT\_READ** reads a long int from a binary file.
-   **LONG\_INT\_WRITE** writes a long int to a binary file.
-   **NEWS** reports the program change history.
-   **NODE\_TO\_VERTEX\_MAT** extends node material definitions to
    vertices.
-   **OBJ\_READ** reads a Wavefront OBJ file.
-   **OBJ\_WRITE** writes a Wavefront OBJ file.
-   **OFF\_READ** reads a GEOMVIEW OFF file.
-   **OFF\_WRITE** writes graphics information to a GEOMVIEW OFF file.
-   **POV\_WRITE** writes graphics information to a POV file.
-   **RCOL\_FIND** finds if a vector occurs in a table.
-   **RGB\_TO\_HUE** converts (R,G,B) colors to a hue value between 0
    and 1.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R4** reads an R4 from a string.
-   **S\_TO\_R4VEC** reads an R4VEC from a string.
-   **SHORT\_INT\_READ** reads a short int from a binary file.
-   **SHORT\_INT\_WRITE** writes a short int to a binary file.
-   **SMF\_READ** reads an SMF file.
-   **SMF\_WRITE** writes graphics information to an SMF file.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    linear order.
-   **STLA\_READ** reads an ASCII STL (stereolithography) file.
-   **STLA\_WRITE** writes an ASCII STL (stereolithography) file.
-   **STLB\_READ** reads a binary STL (stereolithography) file.
-   **STLB\_WRITE** writes a binary STL (stereolithography) file.
-   **TDS\_PRE\_PROCESS** divides the monolithic object into acceptably
    small pieces.
-   **TDS\_READ** reads a 3D Studio MAX binary 3DS file.
-   **TDS\_READ\_AMBIENT\_SECTION** ???
-   **TDS\_READ\_BACKGROUND\_SECTION** ???
-   **TDS\_READ\_BOOLEAN** ???
-   **TDS\_READ\_CAMERA\_SECTION** ???
-   **TDS\_READ\_EDIT\_SECTION** ???
-   **TDS\_READ\_KEYFRAME\_SECTION** ???
-   **TDS\_READ\_KEYFRAME\_OBJDES\_SECTION** ???
-   **TDS\_READ\_LIGHT\_SECTION** ???
-   **TDS\_READ\_U\_LONG\_INT** ???
-   **TDS\_READ\_LONG\_NAME** ???
-   **TDS\_READ\_MATDEF\_SECTION** ???
-   **TDS\_READ\_MATERIAL\_SECTION** ???
-   **TDS\_READ\_NAME** ???
-   **TDS\_READ\_OBJ\_SECTION** ???
-   **TDS\_READ\_OBJECT\_SECTION** ???
-   **TDS\_READ\_TEX\_VERTS\_SECTION** reads the texture vertex data.
-   **TDS\_READ\_TEXMAP\_SECTION** tries to get the TEXMAP name from the
    TEXMAP section.
-   **TDS\_READ\_U\_SHORT\_INT** ???
-   **TDS\_READ\_SPOT\_SECTION** ???
-   **TDS\_READ\_UNKNOWN\_SECTION** ???
-   **TDS\_READ\_VIEW\_SECTION** ???
-   **TDS\_READ\_VP\_SECTION** ???
-   **TDS\_WRITE** writes graphics information to a 3D Studio Max 3DS
    file.
-   **TDS\_WRITE\_STRING** ???
-   **TDS\_WRITE\_U\_SHORT\_INT** ???
-   **TEC\_WRITE** writes graphics information to a TECPLOT file.
-   **TMAT\_INIT** initializes the geometric transformation matrix.
-   **TMAT\_MXM** multiplies two geometric transformation matrices.
-   **TMAT\_MXP** multiplies a geometric transformation matrix times a
    point.
-   **TMAT\_MXP2** multiplies a geometric transformation matrix times N
    points.
-   **TMAT\_MXV** multiplies a geometric transformation matrix times a
    vector.
-   **TMAT\_ROT\_AXIS** applies an axis rotation to the geometric
    transformation matrix.
-   **TMAT\_ROT\_VECTOR** applies a rotation about a vector to the
    geometric transformation matrix.
-   **TMAT\_SCALE** applies a scaling to the geometric transformation
    matrix.
-   **TMAT\_SHEAR** applies a shear to the geometric transformation
    matrix.
-   **TMAT\_TRANS** applies a translation to the geometric
    transformation matrix.
-   **TRIA\_READ** reads an ASCII triangle file.
-   **TRIA\_WRITE** writes the graphics data to an ASCII "triangle"
    file.
-   **TRIB\_READ** reads a binary triangle file.
-   **TRIB\_WRITE** writes the graphics data to a binary "triangle"
    file.
-   **TXT\_WRITE** writes the graphics data to a text file.
-   **UCD\_WRITE** writes graphics data to an AVS UCD file.
-   **VERTEX\_NORMAL\_SET** recomputes the face vertex normal vectors.
-   **VERTEX\_TO\_FACE\_MATERIAL** extends vertex material definitions
    to faces.
-   **VERTEX\_TO\_NODE\_MATERIAL** extends vertex material definitions
    to nodes.
-   **VLA\_READ** reads a VLA file.
-   **VLA\_WRITE** writes internal graphics information to a VLA file.
-   **WRL\_WRITE** writes graphics data to a WRL file.
-   **XGL\_WRITE** writes an XGL file.

You can go up one level to [the graphics source codes](../g_src.html).

------------------------------------------------------------------------

*Last revised on 15 November 2006.*
