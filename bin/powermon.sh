while true
do
echo ENTRY >> $1
echo `date +%s` >> $1
#echo `snmpget -v2c -c public 10.17.200.110 1.3.6.1.4.1.21239.6.1.99.4.1.9.1.1` >> $1
#echo `snmpget -v2c -c public 10.17.200.111 1.3.6.1.4.1.21239.6.1.99.4.1.9.1.1` >> $1
sleep 1
done 