DOOMSDAY\
Day of Week for Given Date {#doomsday-day-of-week-for-given-date align="center"}
==========================

------------------------------------------------------------------------

**DOOMSDAY** is a C++ library which is given the year, month and day of
a date, and uses John Conway's doomsday algorithm to determine the
corresponding day of the week.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DOOMSDAY** is available in [a C
version](../../c_src/doomsday/doomsday.md) and [a C++
version](../../master/doomsday/doomsday.md) and [a FORTRAN77
version](../../f77_src/doomsday/doomsday.md) and [a FORTRAN90
version](../../f_src/doomsday/doomsday.md) and [a MATLAB
version](../../m_src/doomsday/doomsday.md) and [a Python
version](../../py_src/doomsday/doomsday.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CALENDAR\_NYT](../../f_src/calendar_nyt/calendar_nyt.md), a FORTRAN90
library which shows the correspondence between dates and the New York
Times volume and issue number;

[CALENDAR\_RD](../../master/calendar_rd/calendar_rd.md), a C++
program which computes the representation of a given date in a number of
calendrical systems, by Edward Reingold and Nachum Dershowitz

[CALPAK](../../master/calpak/calpak.md), a C++ library which makes
various calendar calculations;

[DATES](../../datasets/dates/dates.md), a dataset directory which
contains lists of dates in various calendar systems.

[WEEKDAY](../../master/weekday/weekday.md), a C++ library which
determines the day of the week for a given day.

### Reference: {#reference align="center"}

1.  Lewis Carroll (Charles Dodgson),\
    To Find the Day of the Week for Any Given Date,\
    Nature, 31 March 1887.
2.  John Conway,\
    Tomorrow is the Day After Doomsday,\
    Eureka,\
    Volume 36, October 1973, pages 28-31.
3.  Gary Meisters,\
    Lewis Carroll's Day-of-the-Week Algorithm,\
    Math Horizons,\
    November 2002, pages 24-25.

### Source Code: {#source-code align="center"}

-   [doomsday.cpp](doomsday.cpp), the source code.
-   [doomsday.hpp](doomsday.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [doomsday\_prb.cpp](doomsday_prb.cpp), a sample calling program.
-   [doomsday\_prb\_output.txt](doomsday_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **DOOMSDAY\_GREGORIAN:** weekday given any date in Gregorian
    calendar.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WEEKDAY\_TO\_NAME\_COMMON** returns the name of a Common weekday.
-   **WEEKDAY\_VALUES** returns the day of the week for various dates.
-   **YEAR\_IS\_LEAP\_GREGORIAN** returns TRUE if the Gregorian year was
    a leap year.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 28 May 2012.*
