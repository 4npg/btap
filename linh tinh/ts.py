def dem(n):
	c=0
	for i in range(1,n+1):
		if n%i==0:
			c=c+1
		return c
A=[2,7,15,3,21,17,37]
for k in A:
	if dem(k)!=2:
		print(k, end=' ')