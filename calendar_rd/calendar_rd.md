CALENDAR\_RD\
Calendrical Conversions {#calendar_rd-calendrical-conversions align="center"}
=======================

------------------------------------------------------------------------

**CALENDAR\_RD** is a C++ program which returns information about a
given date, by Edward Reingold, Nachum Dershowitz.

The program is interactive. The user enters **y**, **m** and **d**,
which represent the year, (numeric) month, and day of a given date. Note
that **y** must be positive. Also note that all dates are implicitly
using the Gregorian calendar, extended backwards indefinitely.

Given **date** = (**y**,**m**,**d**), the program returns

-   the weekday;
-   the absolute date, that is, the number of days elapsed since the
    Gregorian date of Sunday, December 31, 1 BC;
-   the (month/day/year) date in the Gregorian calendar (this is simply
    (**m**,**d**,**y**);
-   the (month/day/year) date in the Julian calendar;
-   the (week/day/year) in the ISO calendar;
-   the (month/day/year) date in the Hebrew calendar;
-   the (month/day/year) date in the Islamic calendar;

The program halts when a nonpositive value of **y** is entered.

### Licensing: {#licensing align="center"}

This code is in the public domain, but any use of it should publicly
acknowledge its source.

### Languages: {#languages align="center"}

**CALENDAR\_RD** is available in [a C++
version](../../master/calendar_rd/calendar_rd.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ANALEMMA](../../master/analemma/analemma.md), a C++ program which
evaluates the equation of time, a formula for the difference between the
uniform 24 hour day and the actual position of the sun, by Brian Tung.

[CALENDAR\_NYT](../../f_src/calendar_nyt/calendar_nyt.md), a FORTRAN90
library which shows the correspondence between dates and the New York
Times volume and issue number;

[CALPAK](../../master/calpak/calpak.md), a C++ library which converts
between dates as computed on various calendars.

[DATES](../../datasets/dates/dates.md), a dataset directory which
contains lists of dates in various calendar systems.

[DOOMSDAY](../../master/doomsday/doomsday.md), a C++ library which is
given the year, month and day of a date, and uses John Conway's doomsday
algorithm to determine the corresponding day of the week.

[WEEKDAY](../../master/weekday/weekday.md), a C++ library which
determines the day of the week for a given day.

### Author: {#author align="center"}

Edward Reingold, Nachum Dershowitz.

### Reference: {#reference align="center"}

1.  Edward Reingold, Nachum Dershowitz,\
    Calendrical Calculations: The Millennium Edition,\
    Cambridge University Press, 2001,\
    ISBN: 0-521-77752-6,\
    LC: CE12.R45.
2.  Edward Reingold, Nachum Dershowitz,\
    Calendrical Calculations I,\
    Software - Practice and Experience,\
    Volume 20, Number 9, September 1990, pages 899-928.\
3.  Edward Reingold, Nachum Dershowitz, Stewart Clamen,\
    Calendrical Calculations, II: Three Historical Calendars,\
    Software - Practice and Experience,\
    Volume 23, Number 4, pages 383-404, April 1993.

### Source Code: {#source-code align="center"}

-   [calendar\_rd.cpp](calendar_rd.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [calendar\_rd\_input.txt](calendar_rd_input.txt), the input file.
-   [calendar\_rd\_output.txt](calendar_rd_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 07 December 2008.*
