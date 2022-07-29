echo "enter number"
read n
flag=0
for (( i=2; i < $n; i++ ))
do
if [ `expr $n % $i` -eq 0 ]
then
flag=1
fi
done
if [ $flag -eq 1 ]
then
echo "NOT Prime"
else
echo "Prime"
fi
