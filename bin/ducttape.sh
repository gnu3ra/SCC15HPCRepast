for x in 10
do
./snScale.sh $x
sleep 2
rm -rf output
rm -rf logs
rm human_out.h5
rm zombie_out.h5
rm Zombies.csv
done