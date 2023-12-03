arr=(12 35 27 44 61)

echo "Array in original order"
echo ${arr[*]}

for ((i = 0; i<5; i++))
do    
    for((j = 0; j<5-i-1; j++))
    do  
        if [ ${arr[j]} -gt ${arr[$((j+1))]} ]
        then
            t=${arr[j]}
            arr[$j]=${arr[$((j+1))]}  
            arr[$((j+1))]=$t
        fi
    done
done

echo "Array in sorted order :"
echo ${arr[*]}
