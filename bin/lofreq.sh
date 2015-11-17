mkdir scale1
mkdir scale1/run$1
sudo cpupower frequency-set -f 1200MHz
./powermon.sh scale1/run$1/power.log &
salloc -N 1 /power/timeit.sh /usr/bin/time -f%E -o scale1/run$1/run$1time.txt mpirun -n  $(expr $1 \* $1) -host n00 ./hzombie_model ./hzombie_config.props ./run$1.props > scale1/run$1/run$1log.log
mv power.n00 scale1/run$1

mv scale1 low_freq_mon
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
