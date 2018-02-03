#!/bin/bash
#
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_a.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_b.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_r.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_w.txt .
cp ~/public_html/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_x.txt .
#
~/bincpp/$ARCH/nint_exactness_mixed sparse_grid_mixed_d2_l2_f2xgj 7 > sparse_grid_mixed_d2_l2_f2xgj_exactness.txt
#
rm sparse_grid_mixed_d2_l2_f2xgj_a.txt
rm sparse_grid_mixed_d2_l2_f2xgj_b.txt
rm sparse_grid_mixed_d2_l2_f2xgj_r.txt
rm sparse_grid_mixed_d2_l2_f2xgj_w.txt
rm sparse_grid_mixed_d2_l2_f2xgj_x.txt
#
echo "Program output written to sparse_grid_mixed_d2_l2_f2xgj_exactness.txt"
