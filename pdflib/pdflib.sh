#!/bin/bash
#
cp pdflib.hpp /$HOME/include
#
g++ -c -I /$HOME/include pdflib.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pdflib.cpp"
  exit
fi
#
mv pdflib.o ~/libcpp/pdflib.o
#
echo "Library installed as ~/libcpp/pdflib.o"
