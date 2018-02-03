#! /bin/bash
#
g++ /$HOME/libcpp/calpak.o -lm
if [ $? -ne 0 ]; then
  echo "Load error."
  exit
fi
#
mv a.out calpak_test
./calpak_test > calpak_test.txt
if [ $? -ne 0 ]; then
  echo "Run error."
  exit
fi
rm calpak_test
#
echo "Normal end of execution."
