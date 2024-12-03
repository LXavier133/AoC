i=0
while read -r line
do
	product=$(echo $line | awk -F'[(),]' '{print $2 * $3}')
	((i+=$product))
done < <(grep -o 'mul([0-9]\+,[0-9]\+)' input.txt)
echo $i
