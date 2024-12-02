def dboa(a,b):
	return (a!=10 and b!=10) and (a==0 or b==0 or a==b)
def difok(a,b):
	return abs(a-b)>=1 and abs(a-b)<=3
def sig(a,b):
	if a==b:
		return 0
	else:
		return int(abs(a-b)/(a-b))
f=open("input.txt","r")
c=0
for line in f.readlines():
	a=False
	l=list(map(int,line.strip().split(" ")))
	pref=[0]*(len(l)+1)
	suf=[0]*(len(l)+1)
	for i in range(1,len(l)):
		if pref[i]==10 or (pref[i]!=0 and pref[i]!=sig(l[i],l[i-1])) or (not difok(l[i],l[i-1])):
			pref[i+1]=10
		else:
			pref[i+1]=sig(l[i],l[i-1])
	for i in range(1,len(l)):
		i=len(l)-1-i
		if suf[i+1]==10 or (suf[i+1]!=0 and suf[i+1]!=sig(l[i+1],l[i])) or (not difok(l[i+1],l[i])):
			suf[i]=10
		else:
			suf[i]=sig(l[i+1],l[i])
	for i in range(0, len(l)):
		if (dboa(pref[i],suf[i+1])):
			if i==0 or i==len(l)-1 or (difok(l[i-1],l[i+1]) and dboa(pref[i],sig(l[i+1],l[i-1])) and dboa(suf[i+1],sig(l[i+1],l[i-1]))):
				a=True
				break
	if a:
		c+=1
print(c)
