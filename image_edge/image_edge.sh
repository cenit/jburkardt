#!/bin/bash
#
cp image_edge.hpp /$HOME/include
#
g++ -c -I /$HOME/include image_edge.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling image_edge.cpp"
  exit
fi
#
mv image_edge.o ~/libcpp/$ARCH/image_edge.o
#
echo "Library installed as ~/libcpp/$ARCH/image_edge.o"
