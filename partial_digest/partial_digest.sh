#! /bin/bash
#
cp partial_digest.hpp /$HOME/include
#
g++ -c -I /$HOME/include partial_digest.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
mv partial_digest.o ~/libcpp/partial_digest.o
#
echo "Normal end of execution."
