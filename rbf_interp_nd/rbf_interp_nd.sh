#!/bin/bash
#
cp rbf_interp_nd.hpp /$HOME/include
#
g++ -c -I /$HOME/include rbf_interp_nd.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rbf_interp_nd.cpp"
  exit
fi
#
mv rbf_interp_nd.o ~/libcpp/$ARCH/rbf_interp_nd.o
#
echo "Library installed as ~/libcpp/$ARCH/rbf_interp_nd.o"
