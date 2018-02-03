#!/bin/bash
#
cp compass_search.hpp /$HOME/include
#
g++ -c -I /$HOME/include compass_search.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling compass_search.cpp."
  exit
fi
#
mv compass_search.o ~/libcpp/$ARCH/compass_search.o
#
echo "Library installed as ~/libcpp/$ARCH/compass_search.o"
