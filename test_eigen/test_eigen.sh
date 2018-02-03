#! /bin/bash
#
cp test_eigen.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_eigen.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_eigen.cpp."
  exit
fi
#
mv test_eigen.o ~/libcpp/test_eigen.o
#
echo "Normal end of execution."
