#!/bin/bash
#
cp kmeans.hpp /$HOME/include
#
g++ -c -I /$HOME/include kmeans.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling kmeans.cpp"
  exit
fi
#
mv kmeans.o ~/libcpp/$ARCH/kmeans.o
#
echo "Library installed as ~/libcpp/$ARCH/kmeans.o"
