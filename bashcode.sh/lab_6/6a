read num

sum=0
item=$num
while [ $item -ne 0 ]
do
rem=`expr $item % 10`
sum=$(( (sum + rem) * 10))
item=`expr $item / 10`
done

if [ $((sum/10)) -eq $num  ];
then
echo "it is pallindrome"
else
echo "not pallindrome"

fi
