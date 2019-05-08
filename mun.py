n = int(input())
x = 1036
def mun(x,n):
	if n==1:
		return x
	if (n%2!=0):
		z = mun(x,n//2)
		return z*z*x
	else:
		z = mun(x,n//2)
		return z*z
print (mun(x,n))