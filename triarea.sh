echo "Enter sides"
read a
read b
read c
s=`echo "scale=4; ($a+$b+$c)/2" | bc`
r=`echo "scale=4; sqrt($s*($s-$a)*($s-$b)*($s-$c))" | bc`
echo "Area is $r"

