echo "Enter Celcius"
read c
f=`echo "scale=4; ( $c*1.8 ) + 32" | bc`
echo "Farenheit is $f"

