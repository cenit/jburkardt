#! /bin/bash
#
cp continued_fraction.hpp /$HOME/include
#
g++ -c -I/$HOME/include continued_fraction.cpp
if [ $? -ne 0 ]; then
  echo "Compile error."
  exit
fi
#
mv continued_fraction.o ~/libcpp/continued_fraction.o
#
echo "Normal end of execution."
