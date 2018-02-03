#! /bin/bash
#
cp triangle_interpolate.hpp /$HOME/include
#
g++ -c -I/$HOME/include triangle_interpolate.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_interpolate.cpp"
  exit
fi
#
mv triangle_interpolate.o ~/libcpp/$ARCH/triangle_interpolate.o
#
echo "Library installed as ~/libcpp/$ARCH/triangle_interpolate.o"
