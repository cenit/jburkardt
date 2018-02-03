#! /bin/bash
#
g++ -c -I/$HOME/include cities_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cities_prb.cpp"
  exit
fi
#
g++ cities_prb.o /$HOME/libcpp/$ARCH/cities.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading cities_prb.o."
  exit
fi
#
rm cities_prb.o
#
mv a.out cities_prb
./cities_prb > cities_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running cities_prb."
  exit
fi
rm cities_prb
#
echo "Program output written to cities_prb_output.txt"
