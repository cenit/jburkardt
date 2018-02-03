#!/bin/bash
#
cp r4x4_t3_elements.txt fem_elements.txt
cp r4x4_t3_nodestxt fem_nodes.txt
~/bincpp/OSX/fem2d_project r8x8_t3 fem
#
echo "FEM2D_PROJECT created fem_values.txt"
