#!/bin/bash
#
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_a.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_b.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_r.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_w.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_x.txt .
#
~/bincpp/$ARCH/nint_exactness_mixed sparse_grid_mixed_d2_l2_ccxglg 7 > sparse_grid_mixed_d2_l2_ccxglg_exactness.txt
#
rm sparse_grid_mixed_d2_l2_ccxglg_a.txt
rm sparse_grid_mixed_d2_l2_ccxglg_b.txt
rm sparse_grid_mixed_d2_l2_ccxglg_r.txt
rm sparse_grid_mixed_d2_l2_ccxglg_w.txt
rm sparse_grid_mixed_d2_l2_ccxglg_x.txt
#
echo "Program output written to sparse_grid_mixed_d2_l2_ccxglg_exactness.txt"
