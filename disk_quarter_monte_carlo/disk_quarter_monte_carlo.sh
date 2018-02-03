#! /bin/bash
#
cp disk_quarter_monte_carlo.hpp /$HOME/include
#
g++ -c -g -I/$HOME/include disk_quarter_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling disk_quarter_monte_carlo.cpp"
  exit
fi
#
mv disk_quarter_monte_carlo.o ~/libcpp/$ARCH/disk_quarter_monte_carlo.o
#
echo "Library installed as ~/libcpp/$ARCH/disk_quarter_monte_carlo.o"
