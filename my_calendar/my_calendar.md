MY\_CALENDAR\
Simple calendar reminder utility {#my_calendar-simple-calendar-reminder-utility align="center"}
================================

------------------------------------------------------------------------

**MY\_CALENDAR** is a C++ program which carries out a simple calendar
reminder service.

It reads the file "calendar" stored in the user's home directory. It
prints every line that contains a string suggesting today's date, or
"nearby" dates. On Sunday through Thursday, a nearby date is today or
tomorrow. On Friday and Saturday a nearby date includes today through
Monday. Most reasonable combinations of dates are recognized.

Some things happen every Monday or Thursday, and it is natural to record
in your calendar file a single entry that reads:

            Mondays - Pay blackmailer
          

**MY\_CALENDAR** will recognize such a line, and print it every Monday,
ensuring prompt payment.

### Usage: {#usage align="center"}

 **my\_calendar** 
:   will read the file *calendar* in your home directory, and print out
    lines referring to today or tomorrow.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MY\_CALENDAR** is available in [a C++
version](../../master/my_calendar/my_calendar.md).

### Source Code: {#source-code align="center"}

-   [my\_calendar.cpp](my_calendar.cpp), the source code;
-   [my\_calendar.txt](my_calendar.txt), a sample set of data that could
    go into a calendar file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MY\_CALENDAR.
-   **CH\_IS\_DIGIT** returns TRUE if a character is a decimal digit.
-   **INCLUDES\_DATE** reports if a line contains a given date.
-   **INCLUDES\_WEEKDAY** checks if a line refers to a "generic"
    weekday.
-   **IS\_LEAP\_YEAR** determines if a given year was a leap year.
-   **MONTH\_LENGTH** returns the number of days in a given month.
-   **NEXT\_DAY** increments the date by one day;
-   **PARSE\_COMMAND\_LINE** parses the command line.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
