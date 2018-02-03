#!/bin/bash
#
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_a.txt .
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_b.txt .
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_r.txt .
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_w.txt .
cp ~/public.md/datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_x.txt .
#
~/bincpp/$ARCH/nint_exactness_mixed sparse_grid_mixed_d3_l2_ccxf2xgh 7 > sparse_grid_mixed_d3_l2_ccxf2xgh_exactness.txt
#
rm sparse_grid_mixed_d3_l2_ccxf2xgh_a.txt
rm sparse_grid_mixed_d3_l2_ccxf2xgh_b.txt
rm sparse_grid_mixed_d3_l2_ccxf2xgh_r.txt
rm sparse_grid_mixed_d3_l2_ccxf2xgh_w.txt
rm sparse_grid_mixed_d3_l2_ccxf2xgh_x.txt
#
echo "Program output written to sparse_grid_mixed_d3_l2_ccxf2xgh_exactness.txt"
