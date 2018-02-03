#!/bin/bash
#
g++ -c fem2d_heat.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem2d_heat.cpp"
  exit
fi
#
mv fem2d_heat.o ~/libcpp/$ARCH
#
echo "Object code installed as $HOME/libcpp/$ARCH/fem2d_heat.o"

