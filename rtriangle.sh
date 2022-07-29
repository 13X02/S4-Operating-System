echo "enter base height hypotenuse"
read x
read y
read z
r1=`expr $x \* $x`
r2=`expr $y \* $y`
r3=`expr $r1 + $r2`
r4=`expr $z \* $z`
if [ $r4 -eq $r3 ]
then
echo "Right triangle"
else
echo "Not Right Triangle"
fi
