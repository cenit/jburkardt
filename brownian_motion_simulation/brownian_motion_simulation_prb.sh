#!/bin/bash
#
g++ -c -I/$HOME/include brownian_motion_simulation_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling brownian_motion_simulation_prb.cpp"
  exit
fi
#
g++ brownian_motion_simulation_prb.o /$HOME/libcpp/$ARCH/brownian_motion_simulation.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading brownian_motion_simulation_prb.o."
  exit
fi
#
rm brownian_motion_simulation_prb.o
#
mv a.out brownian_motion_simulation_prb
./brownian_motion_simulation_prb > brownian_motion_simulation_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running brownian_motion_simulation_prb."
  exit
fi
rm brownian_motion_simulation_prb
#
echo "Program output written to brownian_motion_simulation_prb_output.txt"
