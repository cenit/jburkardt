#!/bin/bash
#
cp ppmb_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include ppmb_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ppmb_io.cpp"
  exit
fi
#
mv ppmb_io.o ~/libcpp/$ARCH/ppmb_io.o
#
echo "Library installed as ~/libcpp/$ARCH/ppmb_io.o"
