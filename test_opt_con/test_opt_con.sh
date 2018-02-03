#!/bin/bash
#
cp test_opt_con.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_opt_con.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_opt_con.cpp."
  exit
fi
#
mv test_opt_con.o ~/libcpp/$ARCH/test_opt_con.o
#
echo "Library installed as ~/libcpp/$ARCH/test_opt_con.o"
