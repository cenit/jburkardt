#!/bin/bash
#
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_a.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_b.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_r.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_w.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_x.txt .
#
~/bincpp/$ARCH/nint_exactness_mixed sparse_grid_mixed_d2_l3_ccxgp 9 > sparse_grid_mixed_d2_l3_ccxgp_exactness.txt
#
rm sparse_grid_mixed_d2_l3_ccxgp_a.txt
rm sparse_grid_mixed_d2_l3_ccxgp_b.txt
rm sparse_grid_mixed_d2_l3_ccxgp_r.txt
rm sparse_grid_mixed_d2_l3_ccxgp_w.txt
rm sparse_grid_mixed_d2_l3_ccxgp_x.txt
#
echo "Program output written to sparse_grid_mixed_d2_l3_ccxgp_exactness.txt"
