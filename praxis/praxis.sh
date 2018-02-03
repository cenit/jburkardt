#! /bin/bash
#
cp praxis.hpp /$HOME/include
#
g++ -c -I/$HOME/include praxis.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling praxis.cpp"
  exit
fi
#
mv praxis.o ~/libcpp/$ARCH/praxis.o
#
echo "Library installed as ~/libcpp/$ARCH/praxis.o"
