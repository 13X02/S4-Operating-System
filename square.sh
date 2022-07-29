echo "Enter side"
read a
sq=`echo "scale=4; $a*$a" | bc`
echo "Square is $sq"


