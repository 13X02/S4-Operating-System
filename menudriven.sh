echo "1. date and time 2.Month 3.current shell"
read n
case $n in
1)
currentDate=`date`
echo $currentDate
;;
2)
echo `cal`
;;
3)
echo $SHELL
;;
*)
echo "default"
;;
esac

