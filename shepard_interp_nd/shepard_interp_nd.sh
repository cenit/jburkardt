#!/bin/bash
#
cp shepard_interp_nd.hpp /$HOME/include
#
g++ -c -I/$HOME/include shepard_interp_nd.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling shepard_interp_nd.cpp"
  exit
fi
#
mv shepard_interp_nd.o ~/libcpp/$ARCH/shepard_interp_nd.o
#
echo "Library installed as ~/libcpp/$ARCH/shepard_interp_nd.o"
