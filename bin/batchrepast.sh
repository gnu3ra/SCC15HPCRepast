#!/bin/sh
#
# Number of nodes
#SBATCH -N 5
#
# Use nodes exclusive
#SBATCH --exclusive
#
#
NUM=10
mkdir scale1
mkdir scale1/run$NUM
ssh n00 sudo cpupower frequency-set -f 2000MHz
ssh n01 sudo cpupower frequency-set -f 2000MHz
ssh n02 sudo cpupower frequency-set -f 2000MHz
ssh n03 sudo cpupower frequency-set -f 2000MHz
ssh n04 sudo cpupower frequency-set -f 2000MHz
#./powermon.sh scale1/run$$NUM/power.log &
/power/timeit.sh /usr/bin/time -f%E -o scale1/run$NUM/run$1time.txt mpirun -n 400 -host n00,n01,n02,n03,n04  ./hzombie_model ./hzombie_config.props ./run$NUM.props > scale1/run$NUM/run$NUM.log
mv power.* scale1/run$NUM

mv scale1 high_freq_mon
kill %%
kill %%
kill %%
kill %%
kill %%
kill %%
kill %%
kill %%
kill %%
kill %%
