#!/bin/bash
#
g++ -c fem2d_stokes.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem2d_stokes.cpp"
  exit
fi
#
mv fem2d_stokes.o ~/libcpp/$ARCH
#
echo "Object code installed as ~/libcpp/$ARCH/fem2d_stokes.o"
