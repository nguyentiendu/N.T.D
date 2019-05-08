def fibo(a):
	if (a==1 or a==2):
		return 1
	else:
		return fibo(a-1)+fibo(a-2)
n = int(input())
print(fibo(n))