echo "Enter a number"
read n
sum=0
while [ $n -ne 0 ]
do
rem=`expr $n % 10 `
sum=`expr $sum + $rem`
n=`expr n / 10`
done
echo $sum
