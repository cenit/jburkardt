#!/bin/bash
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o1_a0.5 5 0.5 0
rm gen_lag_o1_a0.5_r.txt gen_lag_o1_a0.5_w.txt gen_lag_o1_a0.5_x.txt
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o2_a0.5 5 0.5 0
rm gen_lag_o2_a0.5_r.txt gen_lag_o2_a0.5_w.txt gen_lag_o2_a0.5_x.txt
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o4_a0.5 10 0.5 0
rm gen_lag_o4_a0.5_r.txt gen_lag_o4_a0.5_w.txt gen_lag_o4_a0.5_x.txt
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o8_a0.5 18 0.5 0
rm gen_lag_o8_a0.5_r.txt gen_lag_o8_a0.5_w.txt gen_lag_o8_a0.5_x.txt
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o16_a0.5 35 0.5 0
rm gen_lag_o16_a0.5_r.txt gen_lag_o16_a0.5_w.txt gen_lag_o16_a0.5_x.txt
#
#  Repeat for modified rules.
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_modified_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_modified_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_modified_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o1_a0.5_modified 5 0.5 1
rm gen_lag_o1_a0.5_modified_r.txt gen_lag_o1_a0.5_modified_w.txt gen_lag_o1_a0.5_modified_x.txt
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_modified_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_modified_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_modified_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o2_a0.5_modified 5 0.5 1
rm gen_lag_o2_a0.5_modified_r.txt gen_lag_o2_a0.5_modified_w.txt gen_lag_o2_a0.5_modified_x.txt
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_modified_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_modified_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_modified_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o4_a0.5_modified 10 0.5 1
rm gen_lag_o4_a0.5_modified_r.txt gen_lag_o4_a0.5_modified_w.txt gen_lag_o4_a0.5_modified_x.txt
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_modified_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_modified_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_modified_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o8_a0.5_modified 18 0.5 1
rm gen_lag_o8_a0.5_modified_r.txt gen_lag_o8_a0.5_modified_w.txt gen_lag_o8_a0.5_modified_x.txt
#
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_modified_r.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_modified_w.txt .
cp ../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_modified_x.txt .
~/bincpp/$ARCH/int_exactness_gen_laguerre gen_lag_o16_a0.5_modified 35 0.5 1
rm gen_lag_o16_a0.5_modified_r.txt gen_lag_o16_a0.5_modified_w.txt gen_lag_o16_a0.5_modified_x.txt
