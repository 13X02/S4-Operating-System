echo "1.Add 2.Subtract 3.Multiply 4.Divide 5.Modulous"
read n
echo "Enter Numbers"
read a
read b
case $n in 
1) s=`expr $a + $b `
echo " Sum is $s"
;;
2) s=`expr $a - $b `
echo " Difference is $s"
;;
3) s=`expr $a \* $b `
echo " Product is $s"
;;
4) if [ $b -eq 0 ]
then
echo "Not possible"
else
s=`echo "value=4;$a/$b" | bc`
echo "Result $s"
fi
;;
5) if [ $b -eq 0 ]
then
echo "Not possible"
else
s=`echo "scale=4;$a%$b" | bc`
echo "Result $s"
fi
;;
*)
echo"choose between 1 and 5"
;;
esac




