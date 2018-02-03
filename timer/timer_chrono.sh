#!/bin/bash
#
g++ -c timer_chrono.cpp
if [ $? -ne 0 ]; then
  echo "Compilation errors."
  exit
fi
#
g++ timer_chrono.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
mv a.out timer_chrono
#
./timer_chrono > timer_chrono.txt
if [ $? -ne 0 ]; then
  echo "Runtime errors."
  exit
fi
#
rm timer_chrono
rm timer_chrono.o
#
echo "Normal end of execution."
