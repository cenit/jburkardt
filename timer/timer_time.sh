#!/bin/bash
#
g++ -c timer_time.cpp
if [ $? -ne 0 ]; then
  echo "Compilation errors."
  exit
fi
#
g++ timer_time.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
mv a.out timer_time
#
./timer_time > timer_time.txt
if [ $? -ne 0 ]; then
  echo "Runtime errors."
  exit
fi
#
rm timer_time
rm timer_time.o
#
echo "Normal end of execution."
