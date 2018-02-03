#!/bin/bash
#
gnuplot < hex_grid_1_1_1_commands.txt
gnuplot < hex_grid_2_2_3_commands.txt
gnuplot < hex_grid_3_4_10_commands.txt
gnuplot < hex_grid_4_6_21_commands.txt
gnuplot < hex_grid_5_8_36_commands.txt
gnuplot < hex_grid_6_10_55_commands.txt
gnuplot < hex_grid_7_12_78_commands.txt
gnuplot < hex_grid_8_14_105_commands.txt
gnuplot < hex_grid_9_16_136_commands.txt
gnuplot < hex_grid_10_18_171_commands.txt
gnuplot < hex_grid_11_20_210_commands.txt
gnuplot < hex_grid_21_39_800_commands.txt
#
mv *boundary.txt ../../datasets/square_hex_grid
mv *commands.txt ../../datasets/square_hex_grid
mv *data.txt ../../datasets/square_hex_grid
mv *.png ../../datasets/square_hex_grid
#
echo "Data files moves to ../../datasets/square_hex_grid"

