#!/bin/sh
#
# Number of nodes
#SBATCH -N 1
#
# Use nodes exclusive
#SBATCH --exclusive
#
#SBATCH --nodelist n03
NUM=10

#./powermon.sh scale1/run$$NUM/power.log &
mpirun -n 162 -host n03  ./hzombie_model ./hzombie_config.props ./hzombie_model_small.props
