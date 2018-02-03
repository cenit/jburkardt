WEEKDAY\
Determine the Day of the Week {#weekday-determine-the-day-of-the-week align="center"}
=============================

------------------------------------------------------------------------

**WEEKDAY** is a C++ library which can determine the day of the week
corresponding to a given date; for instance, the battle of Hastings, on
14 October 1066 (Julian Calendar!), was a Saturday.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WEEKDAY** is available in [a C
version](../../c_src/weekday/weekday.html) and [a C++
version](../../cpp_src/weekday/weekday.html) and [a FORTRAN77
version](../../f77_src/weekday/weekday.html) and [a FORTRAN90
version](../../f_src/weekday/weekday.html) and [a MATLAB
version](../../m_src/weekday/weekday.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CALENDAR\_NYT](../../f_src/calendar_nyt/calendar_nyt.html), a FORTRAN90
library which shows the correspondence between dates and the New York
Times volume and issue number;

[CALENDAR\_RD](../../cpp_src/calendar_rd/calendar_rd.html), a C++
program which computes the representation of a given date in a number of
calendrical systems, by Edward Reingold, Nachum Dershowitz

[CALPAK](../../cpp_src/calpak/calpak.html), a C++ library which makes
various calendar calculations;

[DATES](../../datasets/dates/dates.html), a dataset directory which
contains lists of dates in various calendar systems.

[DOOMSDAY](../../cpp_src/doomsday/doomsday.html), a C++ library which is
given the year, month and day of a date, and uses John Conway's doomsday
algorithm to determine the corresponding day of the week.

[TEST\_VALUES](../../cpp_src/test_values/test_values.html), a C++
library which supplies test values of various mathematical functions.

### Reference: {#reference align="center"}

1.  Lewis Carroll (Charles Dodgson),\
    To Find the Day of the Week for Any Given Date,\
    Nature, 31 March 1887.
2.  Gary Meisters,\
    Lewis Carroll's Day-of-the-Week Algorithm,\
    Math Horizons,\
    November 2002, pages 24-25.
3.  Edward Reingold, Nachum Dershowitz,\
    Calendrical Calculations: The Millennium Edition,\
    Cambridge University Press, 2001,\
    ISBN: 0-521-77752-6,\
    LC: CE12.R45.
4.  Edward Richards,\
    Mapping Time, The Calendar and Its History,\
    Oxford, 1999,\
    ISBN: 0-19-850413-6,\
    LC: CE11.R5.

### Source Code: {#source-code align="center"}

-   [weekday.cpp](weekday.cpp), the source code.
-   [weekday.hpp](weekday.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [weekday\_prb.cpp](weekday_prb.cpp), a sample calling program.
-   [weekday\_prb\_output.txt](weekday_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **JED\_TO\_WEEKDAY** computes the day of the week from a JED.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MOD** returns the remainder of R8 division.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WEEKDAY\_TO\_NAME\_COMMON** returns the name of a Common weekday.
-   **WEEKDAY\_VALUES** returns the day of the week for various dates.
-   **Y\_COMMON\_TO\_ASTRONOMICAL** converts a Common year to an
    Astronomical year.
-   **YMD\_TO\_S\_COMMON** writes a Common YMD date into a string.
-   **YMD\_TO\_WEEKDAY\_COMMON** returns the weekday of a Common YMD
    date.
-   **YMD\_TO\_WEEKDAY\_ENGLISH** returns the weekday of an English YMD
    date.
-   **YMDF\_COMPARE** compares two YMDF dates.
-   **YMDF\_TO\_JED\_COMMON** converts a Common YMDF date to a JED.
-   **YMDF\_TO\_JED\_ENGLISH** converts an English YMDF date to a JED.
-   **YMDF\_TO\_JED\_GREGORIAN** converts a Gregorian YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_JULIAN** converts a Julian YMDF date to a JED.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 March 2010.*
