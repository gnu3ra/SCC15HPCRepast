#!/bin/sh
#
# Number of nodes
#SBATCH -N 1
#
# Use nodes exclusive
#SBATCH --exclusive
#
#SBATCH --nodelist n02
NUM=9
mkdir scale1
mkdir scale1/run$NUM
#ssh n01 sudo cpupower frequency-set -f 2400MHz
ssh n02 sudo cpupower frequency-set -f 2400MHz
#ssh n02 sudo cpupower frequency-set -f 2400MHz
#ssh n03 sudo cpupower frequency-set -f 2400MHz
#ssh n04 sudo cpupower frequency-set -f 2400MHz
#./powermon.sh scale1/run$$NUM/power.log &
/power/timeit.sh /usr/bin/time -f%E -o scale1/run$NUM/run$1time.txt mpirun -n 100 -host n02  ./hzombie_model ./hzombie_config.props ./run$NUM.props > scale1/run$NUM/run$NUM.log
mv power.n02 scale1/run$NUM
rm power.*
mv scale1 1node_2400
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
