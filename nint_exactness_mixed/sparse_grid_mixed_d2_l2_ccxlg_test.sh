#!/bin/bash
#
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_a.txt .
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_b.txt .
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_r.txt .
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_w.txt .
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_x.txt .
#
~/bincpp/$ARCH/nint_exactness_mixed sparse_grid_mixed_d2_l2_ccxgl 7 > sparse_grid_mixed_d2_l2_ccxgl_exactness.txt
#
rm sparse_grid_mixed_d2_l2_ccxgl_a.txt
rm sparse_grid_mixed_d2_l2_ccxgl_b.txt
rm sparse_grid_mixed_d2_l2_ccxgl_r.txt
rm sparse_grid_mixed_d2_l2_ccxgl_w.txt
rm sparse_grid_mixed_d2_l2_ccxgl_x.txt
#
echo "Program output written to sparse_grid_mixed_d2_l2_ccxgl_exactness.txt"
