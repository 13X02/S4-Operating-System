x=10
y=5
#matching numbers with'=' returns 1 if equal
res=`expr $x = $y`
echo $res
#'/<' returns 1 if x<y
res=`expr $x \< $y`
echo $res
#'\!=' returns 1 if x not equal to y
res=`expr $x \!= $y`
echo $res

