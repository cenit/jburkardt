#!/bin/bash
#
gnuplot < test01_energy_commands.txt
gnuplot < test01_evolution_commands.txt
gnuplot < test01_motion_commands.txt
#
gnuplot < test02_energy_commands.txt
gnuplot < test02_evolution_commands.txt
gnuplot < test02_motion_commands.txt
#
gnuplot < test03_energy_commands.txt
gnuplot < test03_evolution_commands.txt
gnuplot < test03_motion_commands.txt
#
gnuplot < test04_energy_commands.txt
gnuplot < test04_evolution_commands.txt
gnuplot < test04_motion_commands.txt
#
echo "All gnuplot plots created."
