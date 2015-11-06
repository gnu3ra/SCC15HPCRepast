for x in 1200 1400 1600 1800 2000 2200 2400
do 
./snScale.sh $x
sleep 2
rm -rf output
rm -rf logs
rm human_out.h5
rm zombie_out.h5
rm Zombies.csv
done
