#!/bin/bash
#
g++ -c my_calendar.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling my_calendar.cpp"
  exit
fi
#
g++ my_calendar.o
if [ $? -ne 0 ]; then
  echo "Errors loading my_calendar.o"
  exit
fi
#
rm my_calendar.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/my_calendar
#
echo "Executable installed as ~/bincpp/$ARCH/my_calendar"


