i=0
a=1
while read -r line
do
	if [[ $line == "do()" ]]
	then
		a=1
	elif [[ $line == "don't()" ]]
	then
		a=0
	else
		if [[ $a == 1 ]]
		then
			product=$(echo $line | awk -F'[(),]' '{print $2 * $3}')
			((i+=$product))

		fi
	fi
done < <(grep -o -e "do()" -e "don't()" -e "mul([0-9]\+,[0-9]\+)" input.txt
)
echo $i
