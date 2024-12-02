f=open("in.txt","r")
c=0
for line in f.readlines():
	l=list(map(int,line.strip().split(" ")))
	a=True
	for i in range(1,len(l)-1):
		if(abs(l[i]-l[i-1])<1 or abs(l[i]-l[i-1])>3)or(abs(l[i]-l[i+1])<1 or abs(l[i]-l[i+1])>3)or (l[i+1]>l[i] and l[i-1]>l[i])or (l[i+1]<l[i] and l[i-1]<l[i]):
			a=False
	if a:
		c+=1
print(c)
