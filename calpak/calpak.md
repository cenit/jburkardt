CALPAK\
Calendar Calculations {#calpak-calendar-calculations align="center"}
=====================

------------------------------------------------------------------------

**CALPAK** is a C++ library which computes various simple calendrical
quantities.

These include converting from day-number/year to day/month/year format,
calculating the time difference between two dates, finding the day of
the week of a given date, and other feats.

Some common methods of marking the date include:

-   **JED**, the Julian Ephemeris Date, a count of days since a long
    time ago;
-   **YMD**, for "year, month, day";
-   **YJ**, for "year, day number".

While there have been many calendars over the years, it is instructive
to contemplate just the crazy story of our current "common" calendar. To
this day, people disagree about whether there was a year 0, although the
Julian calendar was a Roman invention, and Dionysius Exiguus, who gets
the blame for shifting the Julian calendar's starting date to the birth
year of Christ four hundred years afterwards, didn't have an accurate
idea of when that was.

There was a controversial shift from the Julian to the Gregorian
calendar, which took place *piecemeal* throughout the Catholic world,
with several countries actually switching back and forth more than once,
and with England holding out on the old system until after George
Washington was born (which means he was born on February 11 AND February
22).

People didn't agree on when the year started, so that January and
February, in particular, were a little murky about which year they
belonged to, and the year sometimes started around March 22, near the
vernal equinox.

There are a number of side issues, including

-   determining the day of the week of a given date;
-   determining the number of days between two dates;
-   the computation of the date of certain holidays;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CALPAK** is available in [a C version](../../c_src/calpak/calpak.html)
and [a C++ version](../../cpp_src/calpak/calpak.html) and [a FORTRAN90
version](../../f_src/calpak/calpak.html) and [a MATLAB
version](../../m_src/calpak/calpak.html) and [a Python
version](../../py_src/calpak/calpak.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ANALEMMA](../../c_src/analemma/analemma.html), a C program which
evaluates the equation of time, a formula for the difference between the
uniform 24 hour day and the actual position of the sun, by Brian Tung.

[CALENDAR\_NYT](../../f_src/calendar_nyt/calendar_nyt.html), a FORTRAN90
library which shows the correspondence between dates and the New York
Times volume and issue number;

[CALENDAR\_RD](../../cpp_src/calendar_rd/calendar_rd.html), a C++
program which computes the representation of a given date in a number of
calendrical systems, by Edward Reingold and Nachum Dershowitz

[DATES](../../datasets/dates/dates.html), a dataset directory which
contains lists of dates in various calendar systems.

[DOOMSDAY](../../cpp_src/doomsday/doomsday.html), a C++ library which is
given the year, month and day of a date, and uses John Conway's doomsday
algorithm to determine the corresponding day of the week.

[WEEKDAY](../../cpp_src/weekday/weekday.html), a C++ library which
determines the day of the week for a given day.

### Reference: {#reference align="center"}

1.  Anonymous,\
    A Correction; Welcome to 51,254,\
    The New York Times,\
    01 January 2000, Volume 149, Issue 51254.
2.  James Barron,\
    What's in a Number? 143 Years of News,\
    The New York Times,\
    14 March 1995, Volume 144, Issue 50000.
3.  Bonnie Blackburn, Leofranc Holford-Stevens,\
    The Oxford Companion to the Year,\
    Oxford, 1999,\
    ISBN: 0192142313,\
    LC: CE73.B553.
4.  Lewis Carroll (Charles Dodgson),\
    To Find the Day of the Week for Any Given Date,\
    Nature, 31 March 1887.
5.  John Conway,\
    Tomorrow is the Day After Doomsday,\
    Eureka,\
    Volume 36, October 1973, pages 28-31.
6.  Peter Duffett-Smith,\
    Practical Astronomy With Your Calculator,\
    Third Edition,\
    Cambridge University Press, 1996,\
    ISBN: 0-521-35699-7,\
    LC: QB62.5.D83.
7.  Donald Knuth,\
    The Art of Computer Programming,\
    Volume 1, Fundamental Algorithms,\
    Third Edition,\
    Addison-Wesley, 1997,\
    ISBN: 0201896834,\
    LC: QA76.6.K64.
8.  Donald Knuth,\
    The Calculation of Easter,\
    Communications of the ACM,\
    Volume 5, Number 4, April 1962, pages 209-210.
9.  Gary Meisters,\
    Lewis Carroll's Day-of-the-Week Algorithm,\
    Math Horizons,\
    November 2002, pages 24-25.
10. Lance Latham,\
    Standard C Date/Time Library,\
    Programming the World's Calendars and Clocks,\
    Miller Freeman, 1998,\
    ISBN: 0-87930-496-0.
11. The New York Times,\
    Page One, 1896-1996, A Special Commemorative Edition Celebrating the
    100th Anniversary of the Purchase of the New York Times by Adolph S
    Ochs,\
    Galahad Books, 1996,\
    ISBN: 0-88365-961-1,\
    LC: D411.P25.
12. The New York Times,\
    The Complete First Pages, 1851-2008,\
    Black Dog & Leventhal Publishers, 2008,\
    ISBN13: 978-1-57912-749-7,\
    LC: D351.N53.
13. Thomas OBeirne,\
    Puzzles and Paradoxes,\
    Oxford University Press, 1965,\
    LC: QA95.O2.
14. Frank Parise, editor,\
    The Book of Calendars,\
    Gorgias, 2002,\
    ISBN: 1931956766,\
    LC: CE11.K4.
15. William Press, Brian Flannery, Saul Teukolsky, William Vetterling,\
    Numerical Recipes in FORTRAN: The Art of Scientific Computing,\
    Second Edition,\
    Cambridge University Press, 1992,\
    ISBN: 0-521-43064-X,\
    LC: QA297.N866.
16. Edward Reingold, Nachum Dershowitz,\
    Calendrical Calculations: The Millennium Edition,\
    Cambridge University Press, 2001,\
    ISBN: 0-521-77752-6,\
    LC: CE12.R45.
17. Edward Reingold, Nachum Dershowitz,\
    Calendrical Calculations I,\
    Software - Practice and Experience,\
    Volume 20, Number 9, September 1990, pages 899-928.\
18. Edward Reingold, Nachum Dershowitz, Stewart Clamen,\
    Calendrical Calculations, II: Three Historical Calendars,\
    Software - Practice and Experience,\
    Volume 23, Number 4, pages 383-404, April 1993.
19. Edward Richards,\
    Mapping Time, The Calendar and Its History,\
    Oxford, 1999,\
    ISBN: 0-19-850413-6,\
    LC: CE11.R5.
20. Ian Stewart,\
    Easter is a Quasicrystal,\
    Scientific American,\
    Volume 284, Number 3, March 2001, pages 80-83.
21. Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3,\
    LC: QA47.M315.

### Source Code: {#source-code align="center"}

-   [calpak.cpp](calpak.cpp), the source code;
-   [calpak.hpp](calpak.hpp), the include file;
-   [calpak\_test.txt](calpak_test.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CWS\_TO\_JED\_GPS** converts a GPS CWS date to a JED.
-   **DATENUM\_TO\_JED** converts a MATLAB date number to a JED.
-   **DAY\_BORROW\_ALEXANDRIAN** borrows days from months in an
    Alexandrian date.
-   **DAY\_BORROW\_COMMON** borrows days from months in a Common date.
-   **DAY\_BORROW\_EG\_CIVIL** borrows days from months in an Egyptian
    Civil date.
-   **DAY\_BORROW\_ENGLISH** borrows days from months in an English
    date.
-   **DAY\_BORROW\_GREGORIAN** borrows days from months in a Gregorian
    date.
-   **DAY\_BORROW\_HEBREW** borrows days from months in a Hebrew date.
-   **DAY\_BORROW\_ISLAMIC** borrows days from months in an Islamic
    date.
-   **DAY\_BORROW\_JULIAN** borrows days from months in a Julian date.
-   **DAY\_BORROW\_REPUBLICAN** borrows days from months in a Republican
    date.
-   **DAY\_BORROW\_ROMAN** borrows days from months in a Roman date.
-   **DAY\_CARRY\_ALEXANDRIAN** carries days to months in an Alexandrian
    date.
-   **DAY\_CARRY\_COMMON** carries days to months in a Common date.
-   **DAY\_CARRY\_EG\_CIVIL** carries days to months in an Egyptian
    Civil date.
-   **DAY\_CARRY\_ENGLISH** carries days to months in an English date.
-   **DAY\_CARRY\_GREGORIAN** carries days to months in a Gregorian
    date.
-   **DAY\_CARRY\_HEBREW** carries days to months in a Hebrew date.
-   **DAY\_CARRY\_ISLAMIC** carries days to months in an Islamic date.
-   **DAY\_CARRY\_JULIAN** carries days to months in a Julian date.
-   **DAY\_CARRY\_REPUBLICAN** carries days to months in a Republican
    date.
-   **DAY\_CARRY\_ROMAN** carries days to months in a Roman date.
-   **DAY\_LIST\_COMMON** prints a list of days between two dates.
-   **DAYS\_BEFORE\_MONTH\_COMMON** returns the number of days before a
    Common month.
-   **DAYS\_BEFORE\_MONTH\_GREGORIAN** returns the number of days before
    a Gregorian month.
-   **DAYS\_BEFORE\_MONTH\_JULIAN** returns the number of days before a
    Julian month.
-   **DEFLATE\_COMMON** "deflates" dates in the Common Calendar
    transition month.
-   **DEFLATE\_ENGLISH** "deflates" dates in the English Calendar
    transition month.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **EASTER\_DS** computes the month and day of Easter for a Common
    year.
-   **EASTER\_EGR** computes the month and day of Easter for a Common
    year.
-   **EASTER\_EGR2** computes the month and day of Easter for a Common
    year.
-   **EASTER\_JULIAN** computes the date of Easter in the Julian
    calendar.
-   **EPOCH\_TO\_JED\_AKBAR** returns the epoch of the Akbar calendar as
    a JED.
-   **EPOCH\_TO\_JED\_ALEXANDRIAN:** epoch of the Alexandrian calendar
    as a JED.
-   **EPOCH\_TO\_JED\_ARMENIAN** returns the epoch of the Armenian
    calendar as a JED.
-   **EPOCH\_TO\_JED\_BAHAI** returns the epoch of the Bahai calendar as
    a JED.
-   **EPOCH\_TO\_JED\_BESSEL** returns the epoch of the Bessel calendar
    as a JED.
-   **EPOCH\_TO\_JED\_CHINESE** returns the epoch of the Chinese
    calendar as a JED.
-   **EPOCH\_TO\_JED\_COMMON** returns the epoch of the Common calendar
    as a JED.
-   **EPOCH\_TO\_JED\_COPTIC** returns the epoch of the Coptic calendar
    as a JED.
-   **EPOCH\_TO\_JED\_DECCAN** returns the epoch of the Fasli Deccan
    calendar as a JED.
-   **EPOCH\_TO\_JED\_EG\_CIVIL:** epoch of the Egyptian Civil calendar
    as a JED.
-   **EPOCH\_TO\_JED\_EG\_LUNAR:** epoch of the Egyptian Lunar calendar
    as a JED.
-   **EPOCH\_TO\_JED\_ENGLISH** returns the epoch of the English
    calendar as a JED.
-   **EPOCH\_TO\_JED\_ETHIOPIAN** returns the epoch of the Ethiopian
    calendar as a JED.
-   **EPOCH\_TO\_JED\_GPS** returns the epoch of the GPS calendar as a
    JED.
-   **EPOCH\_TO\_JED\_GREEK** returns the epoch of the Greek calendar as
    a JED.
-   **EPOCH\_TO\_JED\_GREGORIAN** returns the epoch of the Gregorian
    calendar as a JED.
-   **EPOCH\_TO\_JED\_HEBREW** returns the epoch of the Hebrew calendar
    as a JED.
-   **EPOCH\_TO\_JED\_HINDU\_LUNAR:** epoch of the Hindu lunar calendar
    as a JED.
-   **EPOCH\_TO\_JED\_HINDU\_SOLAR:** epoch of the Hindu solar calendar
    as a JED.
-   **EPOCH\_TO\_JED\_ISLAMIC\_A** returns the epoch of the Islamic A
    calendar as a JED.
-   **EPOCH\_TO\_JED\_ISLAMIC\_B** returns the epoch of the Islamic B
    calendar as a JED.
-   **EPOCH\_TO\_JED\_JED** returns the epoch of the JED as a JED.
-   **EPOCH\_TO\_JED\_JELALI** returns the epoch of the Jelali calendar
    as a JED.
-   **EPOCH\_TO\_JED\_JULIAN** returns the epoch of the Julian calendar
    as a JED.
-   **EPOCH\_TO\_JED\_KHWARIZMIAN:** epoch of the Khwarizmian calendar
    as a JED.
-   **EPOCH\_TO\_JED\_MACEDONIAN:** epoch of the Macedonian calendar as
    a JED.
-   **EPOCH\_TO\_JED\_MATLAB:** epoch of the "MATLAB calendar" as a JED.
-   **EPOCH\_TO\_JED\_MAYAN\_LONG:** epoch of the Mayan long count
    calendar as a JED.
-   **EPOCH\_TO\_JED\_MJD** returns the epoch of the MJD calendar as a
    JED.
-   **EPOCH\_TO\_JED\_NYT** returns the epoch of the NYT calendar as a
    JED.
-   **EPOCH\_TO\_JED\_PERSIAN** returns the epoch of the Persian
    calendar as a JED.
-   **EPOCH\_TO\_JED\_PERSIAN\_SOLAR:** epoch of the Persian solar
    calendar as a JED.
-   **EPOCH\_TO\_JED\_RD** returns the epoch of the RD calendar as a
    JED.
-   **EPOCH\_TO\_JED\_REPUBLICAN:** epoch of the Republican calendar as
    a JED.
-   **EPOCH\_TO\_JED\_ROMAN** returns the epoch of the Roman calendar as
    a JED.
-   **EPOCH\_TO\_JED\_SAKA** returns the epoch of the Saka calendar as a
    JED.
-   **EPOCH\_TO\_JED\_SOOR\_SAN:** epoch of the Fasli Soor San calendar
    as a JED.
-   **EPOCH\_TO\_JED\_SYRIAN** returns the epoch of the Syrian calendar
    as a JED.
-   **EPOCH\_TO\_JED\_UNIX** returns the epoch of the UNIX calendar as a
    JED.
-   **EPOCH\_TO\_JED\_Y2K** returns the epoch of the Y2K calendar as a
    JED.
-   **EPOCH\_TO\_JED\_ZOROASTRIAN:** epoch of the Zoroastrian calendar
    as a JED.
-   **FRAC\_BORROW\_COMMON** borrows fractions from days in a Common
    YMDF date.
-   **FRAC\_BORROW\_ENGLISH** borrows fractions from days in an English
    YMDF date.
-   **FRAC\_BORROW\_GREGORIAN** borrows fractions from days in a
    Gregorian YMDF date.
-   **FRAC\_BORROW\_HEBREW** borrows fractions from days in a Hebrew
    YMDF date.
-   **FRAC\_BORROW\_ISLAMIC** borrows fractions from days in an Islamic
    YMDF date.
-   **FRAC\_BORROW\_JULIAN** borrows fractions from days in a Julian
    YMDF date.
-   **FRAC\_BORROW\_REPUBLICAN** borrows fractions from days in a
    Republican YMDF date.
-   **FRAC\_BORROW\_ROMAN** borrows fractions from days in a Roman YMDF
    date.
-   **FRAC\_CARRY\_COMMON** carries fractions from days in a Common YMDF
    date.
-   **FRAC\_CARRY\_ENGLISH** carries fractions from days in an English
    YMDF date.
-   **FRAC\_CARRY\_GREGORIAN** carries fractions from days in a
    Gregorian YMDF date.
-   **FRAC\_CARRY\_HEBREW** carries fractions from days in a Hebrew YMDF
    date.
-   **FRAC\_CARRY\_ISLAMIC** carries fractions from days in an Islamic
    YMDF date.
-   **FRAC\_CARRY\_JULIAN** carries fractions from days in a Julian YMDF
    date.
-   **FRAC\_CARRY\_REPUBLICAN** carries fractions from days in a
    Republican YMDF date.
-   **FRAC\_CARRY\_ROMAN** carries fractions from days in a Roman YMDF
    date.
-   **FRAC\_TO\_HMS** converts a fractional day into hours, minutes,
    seconds.
-   **HOUR\_BORROW\_COMMON** "borrows" a day of hours.
-   **HOUR\_CARRY\_COMMON** is given a YMDH date, and carries hours to
    days.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_SWAP** switches two I4's.
-   **I4\_TO\_A** returns the I-th alphabetic character.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **INFLATE\_COMMON** "inflates" dates in the Common Calendar
    transition month.
-   **INFLATE\_ENGLISH** "inflates" dates in the English Calendar
    transition month.
-   **J\_BORROW\_COMMON** borrows year-days from years in a Common date.
-   **J\_BORROW\_ENGLISH** borrows year-days from years in an English
    date.
-   **J\_BORROW\_GREGORIAN** borrows year-days from years in a Gregorian
    date.
-   **J\_BORROW\_HEBREW** borrows year-days from years in a Hebrew date.
-   **J\_BORROW\_ISLAMIC** borrows year-days from years in an Islamic
    date.
-   **J\_BORROW\_JULIAN** borrows year-days from years in a Julian date.
-   **J\_BORROW\_REPUBLICAN** borrows year-days from years in a
    Republican date.
-   **J\_BORROW\_ROMAN** borrows year-days from years in a Roman date.
-   **J\_CARRY\_COMMON** carries year-days to years in a Common date.
-   **J\_CARRY\_ENGLISH** carries year-days to years in an English date.
-   **J\_CARRY\_GREGORIAN** carries year-days to years in a Gregorian
    date.
-   **J\_CARRY\_HEBREW** carries year-days to years in a Hebrew date.
-   **J\_CARRY\_ISLAMIC** carries year-days to years in an Islamic date.
-   **J\_CARRY\_JULIAN** carries year-days to years in a Julian date.
-   **J\_CARRY\_REPUBLICAN** carries year-days to years in a Republican
    date.
-   **J\_CARRY\_ROMAN** carries year-days to years in a Roman date.
-   **JED\_CHECK** checks a Julian Ephemeris Date.
-   **JED\_TEST** returns some "interesting" JED's.
-   **JED\_TO\_CWS\_GPS** converts a JED to a GPS CWS date.
-   **JED\_TO\_DATENUM** converts a JED to a MATLAB date number.
-   **JED\_TO\_MAYAN\_LONG** converts a JED to a Mayan long count date.
-   **JED\_TO\_MAYAN\_ROUND** converts a JED to a Mayan round date.
-   **JED\_TO\_MJD** converts a JED to a modified JED.
-   **JED\_TO\_NEAREST\_NOON** converts a JED to the JED of the nearest
    noon.
-   **JED\_TO\_NEXT\_NOON** converts a JED to the JED of the next noon.
-   **JED\_TO\_RD** converts a JED to an RD.
-   **JED\_TO\_SS\_UNIX** converts a JED to a UNIX SS date.
-   **JED\_TO\_WEEKDAY** computes the day of the week from a JED.
-   **JED\_TO\_YEAR\_HEBREW:** the year in the Hebrew calendar when a
    JED occurred.
-   **JED\_TO\_YEARCOUNT\_BESSEL** converts a JED to Bessel year count.
-   **JED\_TO\_YEARCOUNT\_JULIAN** converts a JED to a Julian year
    count.
-   **JED\_TO\_YJF\_COMMON** converts a JED to a Common YJF date.
-   **JED\_TO\_YJF\_ENGLISH** converts a JED to an English YJF date.
-   **JED\_TO\_YJF\_GREGORIAN** converts a JED to a Gregorian YJF date.
-   **JED\_TO\_YJF\_HEBREW** converts a JED to a Hebrew YJF date.
-   **JED\_TO\_YJF\_ISLAMIC\_A** converts a JED to an Islamic-A YJF
    date.
-   **JED\_TO\_YJF\_ISLAMIC\_B** converts a JED to an Islamic-B YJF
    date.
-   **JED\_TO\_YJF\_JULIAN** converts a JED to a Julian YJF date.
-   **JED\_TO\_YJF\_REPUBLICAN** converts a JED to a Republican YJF
    date.
-   **JED\_TO\_YJF\_ROMAN** converts a JED to a Roman YJF date.
-   **JED\_TO\_YMDF\_ALEXANDRIAN** converts a JED to an Alexandrian YMDF
    date.
-   **JED\_TO\_YMDF\_ARMENIAN** converts a JED to an Armenian YMDF date.
-   **JED\_TO\_YMDF\_BAHAI** converts a JED to a Bahai YMDF date.
-   **JED\_TO\_YMDF\_COMMON** converts a JED to a Common YMDF date.
-   **JED\_TO\_YMDF\_COPTIC** converts a JED to a Coptic YMDF date.
-   **JED\_TO\_YMDF\_EG\_CIVIL** converts a JED to an Egyptian Civil
    YMDF date.
-   **JED\_TO\_YMDF\_EG\_LUNAR** converts a JED to an Egyptian Lunar
    YMDF date.
-   **JED\_TO\_YMDF\_ENGLISH** converts a JED to an English YMDF date.
-   **JED\_TO\_YMDF\_ETHIOPIAN** converts a JED to an Ethiopian YMDF
    date.
-   **JED\_TO\_YMDF\_GREGORIAN2** converts a JED to a Gregorian YMDF
    date.
-   **JED\_TO\_YMDF\_HEBREW** converts a JED to a Hebrew YMDF date.
-   **JED\_TO\_YMDF\_HINDU\_SOLAR** converts a JED to a Hindu solar YMDF
    date.
-   **JED\_TO\_YMDF\_ISLAMIC\_A** converts a JED to an Islamic A YMDF
    date.
-   **JED\_TO\_YMDF\_ISLAMIC\_B** converts a JED to an Islamic B YMDF
    date.
-   **JED\_TO\_YMDF\_JELALI** converts a JED to a Jelali YMDF date.
-   **JED\_TO\_YMDF\_JULIAN** converts a JED to a Julian YMDF date.
-   **JED\_TO\_YMDF\_JULIAN2** converts a JED to a Julian YMDF date.
-   **JED\_TO\_YMDF\_JULIAN3** converts a JED to a Julian YMDF date.
-   **JED\_TO\_YMDF\_KHWARIZMIAN** converts a JED to a Khwarizmian YMDF
    date.
-   **JED\_TO\_YMDF\_MACEDONIAN** converts a JED to a Macedonian YMDF
    date.
-   **JED\_TO\_YMDF\_PERSIAN** converts a JED to a Persian YMDF date.
-   **JED\_TO\_YMDF\_REPUBLICAN** converts a JED to a Republican YMDF
    date.
-   **JED\_TO\_YMDF\_ROMAN** converts a JED to a Roman YMDF date.
-   **JED\_TO\_YMDF\_SAKA** converts a JED to a Saka YMDF date.
-   **JED\_TO\_YMDF\_SOOR\_SAN** converts a JED to a Soor San YMDF date.
-   **JED\_TO\_YMDF\_SYRIAN** converts a JED to a Syrian YMDF date.
-   **JED\_TO\_YMDF\_ZOROASTRIAN** converts a JED to a Zoroastrian YMDF
    date.
-   **MAYAN\_LONG\_TO\_JED** converts a Mayan long count date to a JED.
-   **MAYAN\_ROUND\_TO\_JED** converts a Mayan round date to a JED.
-   **MINUTE\_BORROW\_COMMON** "borrows" an hour of minutes in a Common
    date.
-   **MINUTE\_CARRY\_COMMON:** given a Common YMDHMS date, carries
    minutes to hours.
-   **MJD\_TO\_JED** converts a modified JED to a JED.
-   **MONTH\_BORROW\_ALEXANDRIAN** borrows a year of months on
    Alexandrian calendar.
-   **MONTH\_BORROW\_BAHAI** borrows a year of months on the Bahai
    calendar.
-   **MONTH\_BORROW\_COMMON** borrows a year of months on the Common
    calendar.
-   **MONTH\_BORROW\_EG\_CIVIL** borrows a year of months on Egyptian
    Civil calendar.
-   **MONTH\_BORROW\_ENGLISH** borrows a year of months on the English
    calendar.
-   **MONTH\_BORROW\_GREGORIAN** borrows a year of months on the
    Gregorian calendar.
-   **MONTH\_BORROW\_HEBREW** borrows a year of months on the Hebrew
    calendar.
-   **MONTH\_BORROW\_ISLAMIC** borrows a year of months on the Islamic
    calendar.
-   **MONTH\_BORROW\_JULIAN** borrows a year of months on the Julian
    calendar.
-   **MONTH\_BORROW\_REPUBLICAN** borrows a year of months on the
    Republican calendar.
-   **MONTH\_BORROW\_ROMAN** borrows a year of months on the Roman
    calendar.
-   **MONTH\_CARRY\_ALEXANDRIAN** carries a year of months on the
    Alexandrian calendar.
-   **MONTH\_CARRY\_BAHAI** carries a year of months on the Bahai
    calendar.
-   **MONTH\_CARRY\_COMMON** carries a year of months on the Common
    calendar.
-   **MONTH\_CARRY\_EG\_CIVIL** carries a year of months on the Egyptian
    Civil calendar.
-   **MONTH\_CARRY\_ENGLISH** carries a year of months on the English
    calendar.
-   **MONTH\_CARRY\_GREGORIAN** carries a year of months on the
    Gregorian calendar.
-   **MONTH\_CARRY\_HEBREW** carries a year of months on the Hebrew
    calendar.
-   **MONTH\_CARRY\_ISLAMIC** carries a year of months on the Islamic
    calendar.
-   **MONTH\_CARRY\_JULIAN** carries a year of months on the Julian
    calendar.
-   **MONTH\_CARRY\_REPUBLICAN** carries a year of months on the
    Republican calendar.
-   **MONTH\_CARRY\_ROMAN** carries a year of months on the Roman
    calendar.
-   **MONTH\_LENGTH\_ALEXANDRIAN** returns the number of days in an
    Alexandrian month.
-   **MONTH\_LENGTH\_BAHAI** returns the number of days in a Bahai
    month.
-   **MONTH\_LENGTH\_COMMON** returns the number of days in a Common
    month.
-   **MONTH\_LENGTH\_COPTIC** returns the number of days in a Coptic
    month.
-   **MONTH\_LENGTH\_EG\_CIVIL** returns the number of days in an
    Egyptian Civil month.
-   **MONTH\_LENGTH\_EG\_LUNAR** returns the number of days in an
    Egyptian Lunar month.
-   **MONTH\_LENGTH\_ENGLISH** returns the number of days in an English
    month.
-   **MONTH\_LENGTH\_ETHIOPIAN** returns the number of days in an
    Ethiopian month.
-   **MONTH\_LENGTH\_GREEK** returns the number of days in a Greek
    month.
-   **MONTH\_LENGTH\_GREGORIAN** returns the number of days in a
    Gregorian month.
-   **MONTH\_LENGTH\_HEBREW** returns the number of days in a Hebrew
    month.
-   **MONTH\_LENGTH\_HINDU\_SOLAR** returns the number of days in a
    Hindu solar month.
-   **MONTH\_LENGTH\_IRANIAN** returns the number of days in an Iranian
    month.
-   **MONTH\_LENGTH\_ISLAMIC** returns the number of days in an Islamic
    month.
-   **MONTH\_LENGTH\_JULIAN** returns the number of days in a Julian
    month.
-   **MONTH\_LENGTH\_LUNAR** returns the number of days in a lunar
    month.
-   **MONTH\_LENGTH\_PERSIAN** returns the number of days in a Persian
    month.
-   **MONTH\_LENGTH\_REPUBLICAN** returns the number of days in a
    Republican month.
-   **MONTH\_LENGTH\_ROMAN** returns the number of days in a Roman
    month.
-   **MONTH\_LENGTH\_SYNODIC** returns the mean synodic month length.
-   **MONTH\_TO\_MONTH\_NAME\_COMMON** returns the name of a Common
    month.
-   **MONTH\_TO\_MONTH\_NAME\_COMMON3** returns the abbreviated name of
    a Common month.
-   **MONTH\_TO\_NONES\_ROMAN** returns the day of the nones of a Roman
    month.
-   **MOTHERS\_DAY** computes the date of Mother's Day (US) for a Common
    year.
-   **NEW\_YEAR\_TO\_JED\_HEBREW** returns the JED of the beginning of a
    Hebrew year.
-   **NOW\_TO\_JED** expresses the current date as JED.
-   **NOW\_TO\_YJF\_COMMON** expresses the current date as a Common YJF
    date.
-   **NOW\_TO\_YMDF\_COMMON** expresses the current date as a Common
    YMDF date.
-   **NOW\_TO\_YMDHMS\_COMMON** expresses the current date as a Common
    YMDHMS date.
-   **NYT\_TO\_JED** converts an NYT date to a JED.
-   **NYT\_TO\_YMD** converts an NYT date to a YMD date.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MOD** returns the remainder of R8 division.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_SWAP** switches two R8's.
-   **R8\_UNIFORM** returns a scaled pseudorandom R8.
-   **RD\_TO\_JED** converts an RD to a JED.
-   **SECOND\_BORROW\_COMMON** "borrows" a minute of seconds in a common
    date.
-   **SECOND\_CARRY\_COMMON:** given a Common YMDHMS date, carries
    seconds to minutes.
-   **SS\_TO\_JED\_UNIX** converts a UNIX SS date to a JED.
-   **THANKSGIVING\_CANADA** computes Canadian Thanksgiving for a Common
    year.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRANSITION\_TO\_JED\_COMMON** returns the Common calendar
    transition as a JED.
-   **TRANSITION\_TO\_JED\_ENGLISH** returns the English calendar
    transition as a JED.
-   **TRANSITION\_TO\_JED\_JED** returns the JED calendar transition as
    a JED.
-   **TRANSITION\_TO\_JED\_MAYAN\_LONG:** Mayan long count calendar
    transition as a JED.
-   **WEEKDAY\_CHECK\_COMMON** makes sure the Common weekday number is
    between 1 and 7.
-   **WEEKDAY\_TO\_NAME\_BAHAI** returns the name of a Bahai weekday.
-   **WEEKDAY\_TO\_NAME\_COMMON** returns the name of a Common weekday.
-   **WEEKDAY\_TO\_NAME\_COMMON2** returns the abbreviated name of a
    Common weekday.
-   **WEEKDAY\_TO\_NAME\_COMMON3** returns the abbreviated name of a
    Common weekday.
-   **Y\_ASTRONOMICAL\_TO\_COMMON** converts an Astronomical year to a
    Common year.
-   **Y\_CHECK\_ALEXANDRIAN** checks an Alexandrian year.
-   **Y\_CHECK\_BAHAI** checks a Bahai year.
-   **Y\_CHECK\_COMMON** checks a Common year.
-   **Y\_CHECK\_EG\_CIVIL** checks an Egyptian Civil year.
-   **Y\_CHECK\_ENGLISH** checks an English year.
-   **Y\_CHECK\_GREEK** checks a Greek year.
-   **Y\_CHECK\_GREGORIAN** checks a Gregorian year.
-   **Y\_CHECK\_HEBREW** checks a Hebrew year.
-   **Y\_CHECK\_ISLAMIC** checks an Islamic year.
-   **Y\_CHECK\_JULIAN** checks a Julian year.
-   **Y\_CHECK\_REPUBLICAN** checks a Republican year.
-   **Y\_CHECK\_ROMAN** checks a Roman year.
-   **Y\_COMMON\_TO\_ASTRONOMICAL** converts a Common year to an
    Astronomical year.
-   **Y\_JULIAN\_TO\_ROMAN** converts a Julian year to a Roman year.
-   **Y\_ROMAN\_TO\_JULIAN** converts a Roman year to a Julian year.
-   **Y\_TO\_S\_COMMON** writes a Common year into a string.
-   **YEAR\_IS\_EMBOLISMIC\_EG\_LUNAR:** TRUE if the Egyptian Lunar year
    was embolismic.
-   **YEAR\_IS\_EMBOLISMIC\_GREEK** returns TRUE if the Greek year was
    embolismic.
-   **YEAR\_IS\_EMBOLISMIC\_HEBREW** returns TRUE if the Hebrew year was
    embolismic.
-   **YEAR\_IS\_LEAP\_ALEXANDRIAN:** TRUE if the Alexandrian year was a
    leap year.
-   **YEAR\_IS\_LEAP\_BAHAI** returns TRUE if the Bahai year was a leap
    year.
-   **YEAR\_IS\_LEAP\_COMMON** returns TRUE if the Common year was a
    leap year.
-   **YEAR\_IS\_LEAP\_COPTIC** returns TRUE if the Coptic year was a
    leap year.
-   **YEAR\_IS\_LEAP\_EG\_LUNAR:** TRUE if the Egyptian Lunar year was a
    leap year.
-   **YEAR\_IS\_LEAP\_ENGLISH** returns TRUE if the English year was a
    leap year.
-   **YEAR\_IS\_LEAP\_ETHIOPIAN** returns TRUE if the Ethiopian year was
    a leap year.
-   **YEAR\_IS\_LEAP\_GREEK** returns TRUE if the Greek year was a leap
    year.
-   **YEAR\_IS\_LEAP\_GREGORIAN** returns TRUE if the Gregorian year was
    a leap year.
-   **YEAR\_IS\_LEAP\_IRANIAN** returns TRUE if the Iranian year was a
    leap year.
-   **YEAR\_IS\_LEAP\_ISLAMIC** returns TRUE if the Islamic year was a
    leap year.
-   **YEAR\_IS\_LEAP\_JULIAN** returns TRUE if the Julian year was a
    leap year.
-   **YEAR\_IS\_LEAP\_PERSIAN** returns TRUE if the Persian year was a
    leap year.
-   **YEAR\_IS\_LEAP\_REPUBLICAN** returns TRUE if the Republican year
    was a leap year.
-   **YEAR\_IS\_LEAP\_ROMAN** returns TRUE if the Roman year was a leap
    year.
-   **YEAR\_LENGTH\_ALEXANDRIAN** returns the number of days in an
    Alexandrian year.
-   **YEAR\_LENGTH\_BAHAI** returns the number of days in a Bahai year.
-   **YEAR\_LENGTH\_COMMON** returns the number of days in a Common
    year.
-   **YEAR\_LENGTH\_COPTIC** returns the number of days in a Coptic
    year.
-   **YEAR\_LENGTH\_EG\_CIVIL** returns the number of days in an
    Egyptian Civil year.
-   **YEAR\_LENGTH\_EG\_LUNAR** returns the number of days in an
    Egyptian lunar year.
-   **YEAR\_LENGTH\_ENGLISH** returns the number of days in an English
    year.
-   **YEAR\_LENGTH\_ETHIOPIAN** returns the number of days in an
    Ethiopian year.
-   **YEAR\_LENGTH\_GREEK** returns the number of days in a Greek year.
-   **YEAR\_LENGTH\_GREGORIAN** returns the number of days in a
    Greegorian year.
-   **YEAR\_LENGTH\_HEBREW** returns the number of days in a Hebrew
    year.
-   **YEAR\_LENGTH\_HINDU\_SOLAR** returns the number of days in a Hindu
    solar year.
-   **YEAR\_LENGTH\_ISLAMIC** returns the number of days in an Islamic
    year.
-   **YEAR\_LENGTH\_JULIAN** returns the number of days in a Julian
    year.
-   **YEAR\_LENGTH\_LUNAR** returns the number of days in a "lunar
    year".
-   **YEAR\_LENGTH\_PERSIAN** returns the number of days in a Persian
    year.
-   **YEAR\_LENGTH\_REPUBLICAN** returns the number of days in a
    Republican year.
-   **YEAR\_LENGTH\_ROMAN** returns the number of days in a Roman year.
-   **YEAR\_LENGTH\_SOLAR** returns the number of days in a "solar
    year".
-   **YEAR\_LENGTH\_MONTHS\_ALEXANDRIAN:** number of months in an
    Alexandrian year.
-   **YEAR\_LENGTH\_MONTHS\_BAHAI:** number of months in a Bahai year.
-   **YEAR\_LENGTH\_MONTHS\_COMMON** returns the number of months in a
    Common year.
-   **YEAR\_LENGTH\_MONTHS\_COPTIC:** number of months in a Coptic year.
-   **YEAR\_LENGTH\_MONTHS\_EG\_CIVIL:** number of months in an Egyptian
    Civil year.
-   **YEAR\_LENGTH\_MONTHS\_EG\_LUNAR:** number of months in an Egyptian
    lunar year.
-   **YEAR\_LENGTH\_MONTHS\_ENGLISH** returns the number of months in an
    English year.
-   **YEAR\_LENGTH\_MONTHS\_ETHIOPIAN** returns the number of months in
    an Ethiopian year.
-   **YEAR\_LENGTH\_MONTHS\_GREEK** returns the number of months in a
    Greek year.
-   **YEAR\_LENGTH\_MONTHS\_GREGORIAN** returns the number of months in
    a Gregorian year.
-   **YEAR\_LENGTH\_MONTHS\_HEBREW** returns the number of months in a
    Hebrew year.
-   **YEAR\_LENGTH\_MONTHS\_HINDU\_LUNAR** returns the number of months
    in a Hindu lunar year.
-   **YEAR\_LENGTH\_MONTHS\_HINDU\_SOLAR** returns the number of months
    in a Hindu solar year.
-   **YEAR\_LENGTH\_MONTHS\_ISLAMIC** returns the number of months in an
    Islamic year.
-   **YEAR\_LENGTH\_MONTHS\_JULIAN** returns the number of months in a
    Julian year.
-   **YEAR\_LENGTH\_MONTHS\_PERSIAN** returns the number of months in a
    Persian year.
-   **YEAR\_LENGTH\_MONTHS\_REPUBLICAN** returns the number of months in
    a French Republican year.
-   **YEAR\_LENGTH\_MONTHS\_ROMAN** returns the number of months in a
    Roman year.
-   **YEAR\_TO\_DOMINICAL\_COMMON:** dominical numbers, Common calendar.
-   **YEAR\_TO\_DOMINICAL\_GREGORIAN:** dominical numbers, Gregorian
    calendar.
-   **YEAR\_TO\_DOMINICAL\_JULIAN:** dominical numbers, Julian calendar.
-   **YEAR\_TO\_EPACT\_GREGORIAN** returns the epact of a Gregorian
    year.
-   **YEAR\_TO\_EPACT\_JULIAN** returns the epact of a Julian year.
-   **YEAR\_TO\_GOLDEN\_NUMBER** returns the golden number of a Common
    year.
-   **YEAR\_TO\_INDICTION\_COMMON** returns the indiction number of a
    Common year.
-   **YEAR\_TO\_SCALIGER\_COMMON** converts a Common year to its
    Scaliger indices.
-   **YJ\_CHECK\_COMMON** checks a Common YJ date.
-   **YJ\_CHECK\_ENGLISH** checks an English YJ date.
-   **YJ\_CHECK\_GREGORIAN** checks a Gregorian YJ date.
-   **YJ\_CHECK\_HEBREW** checks a Hebrew YJ date.
-   **YJ\_CHECK\_ISLAMIC** checks an Islamic YJ date.
-   **YJ\_CHECK\_JULIAN** checks a Julian YJ date.
-   **YJ\_CHECK\_REPUBLICAN** checks a Republican YJ date.
-   **YJ\_CHECK\_ROMAN** checks a Roman YJ date.
-   **YJF\_CHECK\_COMMON** normalizes a Common YJF date.
-   **YJF\_CHECK\_ENGLISH** normalizes an English YJF date.
-   **YJF\_COMPARE** compares two YJF dates.
-   **YJF\_DIF\_COMMON** computes day difference between two Common YJF
    dates.
-   **YJF\_SWAP** swaps the data defining two YJF dates.
-   **YJF\_TO\_JED\_COMMON** converts a Common YJF date to a JED.
-   **YJF\_TO\_JED\_ENGLISH** converts an English YJF date to a JED.
-   **YJF\_TO\_JED\_GREGORIAN** converts a Gregorian YJF date to a JED.
-   **YJF\_TO\_JED\_HEBREW** converts a Hebrew YJF date to a JED.
-   **YJF\_TO\_JED\_ISLAMIC\_A** converts an Islamic-A YJF date to a
    JED.
-   **YJF\_TO\_JED\_ISLAMIC\_B** converts an Islamic-B YJF date to a
    JED.
-   **YJF\_TO\_JED\_JULIAN** converts a Julian YJF date to a JED.
-   **YJF\_TO\_JED\_REPUBLICAN** converts a Republican YJF date to a
    JED.
-   **YJF\_TO\_JED\_ROMAN** converts a Roman YJF date to a JED.
-   **YJF\_TO\_YMDF\_COMMON** converts a Common date from YJF to YMDF
    format.
-   **YJF\_TO\_YMDF\_ENGLISH** converts an English date from YJF to YMDF
    format.
-   **YJF\_TO\_YMDF\_GREGORIAN** converts a Gregorian date from YJF to
    YMDF format.
-   **YJF\_TO\_YMDF\_HEBREW** converts a YJF to YMDF date, both in the
    Hebrew calendar.
-   **YJF\_TO\_YMDF\_ISLAMIC:** YJF to YMDF date, both in the Islamic
    calendar.
-   **YJF\_TO\_YMDF\_JULIAN** converts a YJF to YMDF date, both in the
    Julian calendar.
-   **YJF\_TO\_YMDF\_REPUBLICAN:** YJF to YMDF date in the Republican
    calendar.
-   **YJF\_TO\_YMDF\_ROMAN** converts a YJF to YMDF date in the Roman
    calendar.
-   **YJF\_UNIFORM\_COMMON** picks a random Common YJF date between two
    given dates.
-   **YM\_CHECK\_ALEXANDRIAN** checks an Alexandrian YM date.
-   **YM\_CHECK\_BAHAI** checks a Bahia YM date.
-   **YM\_CHECK\_COMMON** checks a Common YM date.
-   **YM\_CHECK\_EG\_CIVIL** checks an Egyptian Civil YM date.
-   **YM\_CHECK\_ENGLISH** checks an English YM date.
-   **YM\_CHECK\_GREGORIAN** checks a Gregorian YM date.
-   **YM\_CHECK\_HEBREW** checks a Hebrew YM date.
-   **YM\_CHECK\_ISLAMIC** checks an Islamic YM date.
-   **YM\_CHECK\_JULIAN** checks a Julian YM date.
-   **YM\_CHECK\_REPUBLICAN** checks a Republican YM date.
-   **YM\_CHECK\_ROMAN** checks a Roman YM date.
-   **YMD\_CHECK\_ALEXANDRIAN** checks an Alexandrian YMD date.
-   **YMD\_CHECK\_COMMON** checks a Common YMD date.
-   **YMD\_CHECK\_EG\_CIVIL** checks an Egyptian Civil YMD date.
-   **YMD\_CHECK\_ENGLISH** checks an English YMD date.
-   **YMD\_CHECK\_GREGORIAN** checks a Gregorian YMD date.
-   **YMD\_CHECK\_HEBREW** checks a Hebrew YMD date.
-   **YMD\_CHECK\_ISLAMIC** checks an Islamic YMD date.
-   **YMD\_CHECK\_JULIAN** checks a Julian YMD date.
-   **YMD\_CHECK\_REPUBLICAN** checks a Republican YMD date.
-   **YMD\_CHECK\_ROMAN** checks a Roman YMD date.
-   **YMDF\_CHECK\_COMMON** checks a Common YMDF date.
-   **YMDF\_CHECK\_JULIAN** checks a Julian YMDF date.
-   **YMDF\_COMPARE** compares two YMDF dates.
-   **YMDF\_NEXT\_COMMON** returns the Common YMDF date of the next day.
-   **YMDF\_TO\_JED\_ALEXANDRIAN** converts an Alexandrian YMDF date to
    a JED.
-   **YMDF\_TO\_JED\_ARMENIAN** converts an Armenian YMDF date to a JED.
-   **YMDF\_TO\_JED\_BAHAI** converts a Bahai YMDF date to a JED.
-   **YMDF\_TO\_JED\_COMMON** converts a Common YMDF date to a JED.
-   **YMDF\_TO\_JED\_COPTIC** converts a Coptic YMDF date to a JED.
-   **YMDF\_TO\_JED\_EG\_CIVIL** converts an Egyptian Civil YMDF date to
    a JED.
-   **YMDF\_TO\_JED\_EG\_LUNAR** converts an Egyptian Lunar YMDF date to
    a JED.
-   **YMDF\_TO\_JED\_ENGLISH** converts an English YMDF date to a JED.
-   **YMDF\_TO\_JED\_ETHIOPIAN** converts an Ethiopian YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_GREGORIAN** converts a Gregorian YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_HEBREW** converts a Hebrew YMDF date to a JED.
-   **YMDF\_TO\_JED\_HINDU\_SOLAR** converts a Hindu solar YMDF date to
    a JED.
-   **YMDF\_TO\_JED\_ISLAMIC\_A** converts an Islamic A YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_ISLAMIC\_A2** converts an Islamic A YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_ISLAMIC\_B** converts an Islamic B YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_JELALI** converts a Jelali YMDF date to a JED.
-   **YMDF\_TO\_JED\_JULIAN** converts a Julian YMDF date to a JED.
-   **YMDF\_TO\_JED\_JULIAN2** converts a Julian YMDF date to a JED.
-   **YMDF\_TO\_JED\_KHWARIZMIAN** converts a Khwarizmian YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_MACEDONIAN** converts a Macedonian YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_PERSIAN** converts a Persian YMDF date to a JED.
-   **YMDF\_TO\_JED\_REPUBLICAN** converts a Republican YMDF date to a
    JED.
-   **YMDF\_TO\_JED\_ROMAN** converts a Roman YMDF date to a JED.
-   **YMDF\_TO\_JED\_SAKA** converts a Saka YMDF date to a JED.
-   **YMDF\_TO\_JED\_SOOR\_SAN** converts a Soor San YMDF date to a JED.
-   **YMDF\_TO\_JED\_SYRIAN** converts a Syrian YMDF date to a JED.
-   **YMDF\_TO\_JED\_ZOROASTRIAN** converts a Zoroastrian YMDF date to a
    JED.
-   **YMDF\_TO\_WEEKDAY\_COMMON** returns the weekday of a Common YMDF
    date.
-   **YMDF\_TO\_WEEKDAY\_ENGLISH** returns the weekday of an English
    YMDF date.
-   **YMDF\_TO\_WEEKDAY\_GREGORIAN** returns the weekday of a Gregorian
    YMDF date.
-   **YMDF\_TO\_WEEKDAY\_JULIAN** returns the weekday of a Julian YMDF
    date.
-   **YMDF\_TO\_YJF\_COMMON** converts from YMDF to YJF form in the
    Common calendar.
-   **YMDF\_TO\_YJF\_ENGLISH** converts from YMDF to YJF form in the
    English calendar.
-   **YMDF\_TO\_YJF\_GREGORIAN:** YMDF to YJF form in the Gregorian
    calendar.
-   **YMDF\_TO\_YJF\_HEBREW** converts from YMDF to YJF form in the
    Hebrew calendar.
-   **YMDF\_TO\_YJF\_ISLAMIC** converts from YMDF to YJF form in the
    Islamic calendar.
-   **YMDF\_TO\_YJF\_JULIAN** converts from YMDF to YJF form in the
    Julian calendar.
-   **YMDF\_TO\_YJF\_REPUBLICAN:** YMDF to YJF form in the Republican
    calendar.
-   **YMDF\_TO\_YJF\_ROMAN** converts from YMDF to YJF form in the Roman
    calendar.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 28 June 2010.*
