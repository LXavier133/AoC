def difok(a,b):
	return abs(a-b)>=1 and abs(a-b)<=3
def sig(a,b):
	if a==b:
		return 0
	else:
		return abs(a-b)/(a-b)
f=open("input.txt","r")
c=0

for line in f.readlines():
	m=list(map(int,line.strip().split(" ")))
	p=False
	for i in range(0,len(m)):
		a=True
		l=m.copy()
		del l[i]
		for i in range(1,len(l)-1):
			if (not difok(l[i],l[i+1])) or (not difok(l[i],l[i-1])) or sig(l[i],l[i+1])==sig(l[i],l[i-1]):
				a=False
				break
		p=a or p
	if p:
		c+=1
print(c)
