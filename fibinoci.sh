echo " Enter No of terms"
read n
f1=0
f2=1
echo "fibinocci series"
echo -n " $f1  $f2 "
while [ $n -ne 2 ] 
do
f=`expr $f1 + $f2`
echo -n " $f "
f1=$f2
f2=$f
n=`expr $n - 1`
done

