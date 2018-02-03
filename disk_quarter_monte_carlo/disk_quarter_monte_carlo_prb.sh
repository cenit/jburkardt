#! /bin/bash
#
g++ -c -g -I/$HOME/include disk_quarter_monte_carlo_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling disk_quarter_monte_carlo_prb.cpp"
  exit
fi
#
g++ disk_quarter_monte_carlo_prb.o /$HOME/libcpp/$ARCH/disk_quarter_monte_carlo.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading disk_quarter_monte_carlo_prb.o."
  exit
fi
#
rm disk_quarter_monte_carlo_prb.o
#
mv a.out disk_quarter_monte_carlo_prb
./disk_quarter_monte_carlo_prb > disk_quarter_monte_carlo_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running disk_quarter_monte_carlo_prb."
  exit
fi
rm disk_quarter_monte_carlo_prb
#
echo "Program output written to disk_quarter_monte_carlo_prb_output.txt"
