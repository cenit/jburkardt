#!/bin/bash
#
g++ -c timer_clock.cpp
if [ $? -ne 0 ]; then
  echo "Compilation errors."
  exit
fi
#
g++ timer_clock.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
mv a.out timer_clock
#
./timer_clock > timer_clock.txt
if [ $? -ne 0 ]; then
  echo "Runtime errors."
  exit
fi
#
rm timer_clock
rm timer_clock.o
#
echo "Normal end of execution."
