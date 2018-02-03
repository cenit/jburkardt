#! /bin/bash
#
cp mgmres.hpp /$HOME/include
#
g++ -c -I /$HOME/include mgmres.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling mgmres.cpp"
  exit
fi
#
mv mgmres.o ~/libcpp/$ARCH/mgmres.o
#
echo "Library installed as ~/libcpp/$ARCH/mgmres.o"
