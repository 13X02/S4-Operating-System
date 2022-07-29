echo "Enter Number"
read n
rev=0
rem=0
while [ $n -gt 0 ]
do
rem=`expr $n % 10`
rev=`expr $rev \* 10`
rev=`expr $rev + $rem`
n=`expr $n / 10`
done
echo "Reverse is $rev"
