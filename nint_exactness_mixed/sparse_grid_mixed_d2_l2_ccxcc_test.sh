#!/bin/bash
#
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_a.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_b.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_r.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_w.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_x.txt .
#
~/bincpp/$ARCH/nint_exactness_mixed sparse_grid_mixed_d2_l2_ccxcc 7 > sparse_grid_mixed_d2_l2_ccxcc_exactness.txt
#
rm sparse_grid_mixed_d2_l2_ccxcc_a.txt
rm sparse_grid_mixed_d2_l2_ccxcc_b.txt
rm sparse_grid_mixed_d2_l2_ccxcc_r.txt
rm sparse_grid_mixed_d2_l2_ccxcc_w.txt
rm sparse_grid_mixed_d2_l2_ccxcc_x.txt
#
echo "Program output written to sparse_grid_mixed_d2_l2_ccxcc_exactness.txt"
