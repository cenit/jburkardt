#!/bin/bash
#
cp doomsday.hpp /$HOME/include
#
g++ -c -I /$HOME/include doomsday.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling doomsday.cpp"
  exit
fi
#
mv doomsday.o ~/libcpp/$ARCH/doomsday.o
#
echo "Library installed as ~/libcpp/$ARCH/doomsday.o"
