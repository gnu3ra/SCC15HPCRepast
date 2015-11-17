for x in 2000 2400
do
cat 1node_$x/run9/power.n02 | python avg_watts.py >> out.csv  
done
