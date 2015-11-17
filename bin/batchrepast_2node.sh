#!/bin/sh
#
# Number of nodes
#SBATCH -N 2
#
# Use nodes exclusive
#SBATCH --exclusive
#
#SBATCH --nodelist n01,n02
NUM=10
mkdir scale1
mkdir scale1/run$NUM
ssh n01 sudo cpupower frequency-set -f 2400MHz
ssh n02 sudo cpupower frequency-set -f 2400MHz
#ssh n02 sudo cpupower frequency-set -f 2400MHz
#ssh n03 sudo cpupower frequency-set -f 2400MHz
#ssh n04 sudo cpupower frequency-set -f 2400MHz
#./powermon.sh scale1/run$$NUM/power.log &
/power/timeit.sh /usr/bin/time -f%E -o scale1/run$NUM/run$1time.txt mpirun -n 400 -host n01,n02  ./hzombie_model ./hzombie_config.props ./run$NUM.props > scale1/run$NUM/run$NUM.log
mv power.* scale1/run$NUM

#mv scale1 high_freq_mon
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
