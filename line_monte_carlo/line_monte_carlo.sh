#!/bin/bash
#
cp line_monte_carlo.hpp /$HOME/include
#
g++ -c -I /$HOME/include line_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Compiler errors."
  exit
fi
#
mv line_monte_carlo.o ~/libcpp/line_monte_carlo.o
#
echo "Normal end of execution."
