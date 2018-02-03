#!/bin/bash
#
~/bincpp/$ARCH/simple_ga > simple_ga_output.txt
#
if [ $? -ne 0 ]; then
  echo "Errors running simple_ga"
  exit
fi
#
echo "simple_ga read the input file simple_ga_input.txt, created simple_ga_output.txt"
