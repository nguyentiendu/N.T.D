n = int(input())
f = 0
g = 1
for i in range(1,n):
	temp = g
	g = f + g
	f = temp
print (g)