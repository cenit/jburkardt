#! /bin/bash
#
cp owens.hpp /$HOME/include
#
g++ -c -I /$HOME/include owens.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
mv owens.o ~/libcpp/owens.o
#
echo "Normal end of execution."
