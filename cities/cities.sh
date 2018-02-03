#! /bin/bash
#
cp cities.hpp /$HOME/include
#
g++ -c -I /$HOME/include cities.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cities.cpp"
  exit
fi
#
mv cities.o ~/libcpp/$ARCH/cities.o
#
echo "Library installed as ~/libcpp/$ARCH/cities.o"
