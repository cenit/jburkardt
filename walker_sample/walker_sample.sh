#! /bin/bash
#
cp walker_sample.hpp /$HOME/include
#
g++ -c -I/$HOME/include walker_sample.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling walker_sample.cpp"
  exit
fi
#
mv walker_sample.o ~/libcpp/$ARCH/walker_sample.o
#
echo "Library installed as ~/libcpp/$ARCH/walker_sample.o"
