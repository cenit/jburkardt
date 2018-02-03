#!/bin/bash
#
cp pink_noise.hpp /$HOME/include
#
g++ -c -I /$HOME/include pink_noise.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pink_noise.cpp"
  exit
fi
#
mv pink_noise.o ~/libcpp/$ARCH/pink_noise.o
#
echo "Library installed as ~/libcpp/$ARCH/pink_noise.o"
