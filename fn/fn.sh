#! /bin/bash
#
cp fn.hpp /$HOME/include
#
g++ -c -I /$HOME/include fn.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fn.cpp"
  exit
fi
#
mv fn.o ~/libcpp/$ARCH/fn.o
#
echo "Library installed as ~/libcpp/$ARCH/fn.o"
