mkdir scale1
mkdir scale1/run$1
ssh n00 sudo cpupower frequency-set -f 2000MHz
ssh n01 sudo cpupower frequency-set -f 2000MHz
ssh n02 sudo cpupower frequency-set -f 2000MHz
ssh n03 sudo cpupower frequency-set -f 2000MHz
ssh n04 sudo cpupower frequency-set -f 2000MHz
#./powermon.sh scale1/run$1/power.log &
salloc -N 3 /power/timeit.sh /usr/bin/time -f%E -o scale1/run$1/run$1time.txt mpirun -n 400 -host n00,n01,n02,n03,n04  ./hzombie_model ./hzombie_config.props ./run$1.props > scale1/run$1/run$1log.log
mv power.* scale1/run$1

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
