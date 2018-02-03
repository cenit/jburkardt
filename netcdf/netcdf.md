NETCDF\
Reading and Writing NETCDF Files {#netcdf-reading-and-writing-netcdf-files align="center"}
================================

------------------------------------------------------------------------

**NETCDF** is a directory of C++ programs which illustrate the use of
the NETCDF library and file format.

NETCDF (Network Common Data Form) is a set of software libraries and
machine-independent data formats that support the creation, access, and
sharing of array-oriented scientific data.

For some reason, the C++ version of the NETCDF user guide does not
include any examples of programs whatsoever. One has to infer what to do
based solely on the description of the classes. The example programs in
this directory are supplied by the NETCDF implementors, and must serve
as partial, though scantily documented, substitutes for the missing
information in the user guide.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NETCDF** is available in [a C version](../../c_src/netcdf/netcdf.html)
and [a C++ version](../../cpp_src/netcdf/netcdf.html) and [a FORTRAN77
version](../../f77_src/netcdf/netcdf.html) and [a FORTRAN90
version](../../f_src/netcdf/netcdf.html) and [a MATLAB
version](../../m_src/netcdf/netcdf.html).

### Related Programs: {#related-programs align="center"}

[CDL](../../data/cdl/cdl.html), a data directory which contains examples
of CDL files, a text version of NETCDF files created by the NCDUMP
program;

[GFD2](../../datasets/gfd2/gfd2.html), a dataset directory which
contains geophysical data, stored in NetCDF format.

[GFD2](../../m_src/gfd2/gfd2.html), MATLAB programs which simulate
geophysical fluid dynamics.

[NETCDF](../../data/netcdf/netcdf.html), a data directory which contains
examples of NETCDF files, a format for the interchange of scientific
data.

### Reference: {#reference align="center"}

1.  Russ Rew, Glenn Davis, Steve Emmerson, Harvey Davies, Ed Hartne,\
    The NetCDF User's Guide,\
    Unidata Program Center, March 2009.
2.  Russ Rew,\
    The NetCDF C++ Interface Guide,\
    Unidata Program Center, August 2008.

### Examples and Tests: {#examples-and-tests align="center"}

**SIMPLE\_XY\_WR** writes data to a NETCDF file. The data is a simple
two-dimensional array.

-   [simple\_xy\_wr.cpp](simple_xy_wr.cpp), the program;
-   [simple\_xy\_wr\_output.txt](simple_xy_wr_output.txt), the output
    file.
-   [simple\_xy.nc](simple_xy.nc), the NETCDF file created by the
    program.
-   [simple\_xy.cdl](../../data/cdl/simple_xy.cdl), the CDL text file
    version of the NETCDF file.

**SIMPLE\_XY\_RD** reads data from a NETCDF file.

-   [simple\_xy.nc](simple_xy.nc), the NETCDF file to be read.
-   [simple\_xy\_rd.cpp](simple_xy_rd.cpp), the program;
-   [simple\_xy\_rd\_output.txt](simple_xy_rd_output.txt), the output
    file.

**SFC\_PRES\_TEMP\_WR** writes data to a NETCDF file. The data will
include units attributes and coordinate dimensions.

-   [sfc\_pres\_temp\_wr.cpp](sfc_pres_temp_wr.cpp), the program;
-   [sfc\_pres\_temp\_wr\_output.txt](sfc_pres_temp_wr_output.txt), the
    output file.
-   [sfc\_pres\_temp.nc](sfc_pres_temp.nc), the NETCDF file created by
    the program.
-   [sfc\_pres\_temp.cdl](../../data/cdl/sfc_pres_temp.cdl), the CDL
    text file version of the NETCDF file.

**SFC\_PRES\_TEMP\_RD** reads data from a NETCDF file.

-   [sfc\_pres\_temp.nc](sfc_pres_temp.nc), the NETCDF file to be read.
-   [sfc\_pres\_temp\_rd.cpp](sfc_pres_temp_rd.cpp), the program;
-   [sfc\_pres\_temp\_rd\_output.txt](sfc_pres_temp_rd_output.txt), the
    output file.

**PRES\_TEMP\_4D\_WR** writes data to a NETCDF file. The data will be
four-dimensional and use a record dimension.

-   [pres\_temp\_4D\_wr.cpp](pres_temp_4D_wr.cpp), the program;
-   [pres\_temp\_4D\_wr\_output.txt](pres_temp_4D_wr_output.txt), the
    output file.
-   [pres\_temp\_4D.nc](pres_temp_4D.nc), the NETCDF file created by the
    program.
-   [pres\_temp\_4D.cdl](../../data/cdl/pres_temp_4D.cdl), the CDL text
    file version of the NETCDF file.

**PRES\_TEMP\_4D\_RD** reads data from a NETCDF file.

-   [pres\_temp\_4D.nc](pres_temp_4D.nc), the NETCDF file to be read.
-   [pres\_temp\_4D\_rd.cpp](pres_temp_4D_rd.cpp), the program;
-   [pres\_temp\_4D\_rd\_output.txt](pres_temp_4D_rd_output.txt), the
    output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 December 2009.*
