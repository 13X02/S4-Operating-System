echo "Enter Number"
read n
r=`expr $n % 2`
if [ $r -eq 0 ]
then
echo "$n is even"
else
echo "$n is odd"
fi

