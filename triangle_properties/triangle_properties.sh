#!/bin/bash
#
cp triangle_properties.hpp /$HOME/include
#
g++ -c -I /$HOME/include triangle_properties.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_properties.cpp"
  exit
fi
#
mv triangle_properties.o ~/libcpp/$ARCH/triangle_properties.o
#
echo "Library installed as ~/libcpp/$ARCH/triangle_properties.o"
