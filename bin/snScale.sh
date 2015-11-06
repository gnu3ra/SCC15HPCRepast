mkdir scale1
mkdir scale1/run$1
sudo cpupower frequency-set -f $1MHz
srun -n 16 -N 1 timeit /usr/bin/time -f%E -o scale1/run$1/run$1time.txt /home/aballmer/new/SCC15HPCRepast/ext/MPICH/bin/mpirun -n 16 ./hzombie_model ./hzombie_config.props ./hzombie_model.props > scale1/run$1/run$1log.log
mv power.* scale1/run$1
