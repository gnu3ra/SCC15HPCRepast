#!/bin/sh
#
# Number of nodes
#SBATCH -N 1
#
# Use nodes exclusive
#SBATCH --exclusive
#
#SBATCH --nodelist n00
#./powermon.sh scale1/run$$NUM/power.log &
mpirun -n 4   ./hzombie_model ./hzombie_config.props ./run1.props

