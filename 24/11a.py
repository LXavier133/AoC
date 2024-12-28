import math
lista = list(map(int,"0 7 6618216 26481 885 42 202642 8791".split(" ")))
for i in range(75):
	ai=[]
	for a in lista:
		if a==0:
			ai.append(1)
		elif math.floor(math.log10(a))%2==1:
			x=(a%10**(math.log10(a)//2+1))
			ai.append(int(a//(10**(math.log10(a)//2+1))))
			ai.append(int(x))
		else:
			ai.append(a*2024)
	lista=ai
	print(i)
print(len(lista))
			
