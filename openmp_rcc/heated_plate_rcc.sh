#!/bin/bash
#
#SBATCH -N 1
#SBATCH -c 8
#SBATCH -C intel
#SBATCH -J heated_plate
#SBATCH -p backfill
#SBATCH -t 00:12:00
#
date
echo "heated_plate_rcc.sh"
#
#  Compile the program with the OpenMP option.
#  Really, we should do this before we submit the job, since, if the program
#  doesn't compile, we're dead!
#
g++ -fopenmp -o heated_plate heated_plate_openmp.cpp
#
#  Run the program, requesting 1, 2, 4 and 8 threads.
#
echo ""
echo "  Run heated_plate with 1 OpenMP process."
export OMP_NUM_THREADS=1 
srun ./heated_plate
echo ""
echo "  Run heated_plate with 2 OpenMP processes."
export OMP_NUM_THREADS=2 
srun ./heated_plate
echo ""
echo "  Run heated_plate with 4 OpenMP processes."
export OMP_NUM_THREADS=4 
srun ./heated_plate
echo ""
echo "  Run heated_plate with 8 OpenMP processes."
export OMP_NUM_THREADS=8 
srun ./heated_plate
#
#  Delete the executable.
#
rm heated_plate
#
#  Terminate.
#
echo ""
echo "heated_plate_rcc.sh:"
echo "  Normal end of execution."
echo ""
date
#
exit

