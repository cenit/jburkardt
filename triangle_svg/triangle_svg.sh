#!/bin/bash
#
cp triangle_svg.hpp /$HOME/include
#
g++ -c -I/$HOME/include triangle_svg.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_svg.cpp"
  exit
fi
#
mv triangle_svg.o ~/libcpp/$ARCH/triangle_svg.o
#
echo "Library installed as ~/libcpp/$ARCH/triangle_svg.o"
