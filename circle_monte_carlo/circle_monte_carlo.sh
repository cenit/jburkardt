#!/bin/bash
#
cp circle_monte_carlo.hpp /$HOME/include
#
g++ -c -I /$HOME/include circle_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Compiler errors."
  exit
fi
#
mv circle_monte_carlo.o ~/libcpp/circle_monte_carlo.o
#
echo "Normal end of execution."
