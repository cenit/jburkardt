#! /bin/bash
#
g++ -c -I/$HOME/include pdflib_test.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
g++ pdflib_test.o /$HOME/libcpp/pdflib.o /$HOME/libcpp/rnglib.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm pdflib_test.o
#
mv a.out pdflib_test
./pdflib_test > pdflib_test.txt
if [ $? -ne 0 ]; then
  echo "Run errors."
  exit
fi
rm pdflib_test
#
echo "Normal end of execution."
