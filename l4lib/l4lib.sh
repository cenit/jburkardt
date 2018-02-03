#!/bin/bash
#
cp l4lib.hpp /$HOME/include
#
g++ -c -I /$HOME/include l4lib.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling l4lib.cpp"
  exit
fi
#
mv l4lib.o ~/libcpp/l4lib.o
#
echo "Library installed as ~/libcpp/l4lib.o"
