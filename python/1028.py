flag = int(input())
def gcd(n1,n2):
	if(n2>n1):
		if(n2%n1==0):
			return n1
		else:
			return gcd(n2%n1,n1)
	else:
		if(n1%n2 ==0):
			return n2
		else:
			return gcd(n2,n1%n2)

for i in range(flag):
	ent = input().split()
	n1,n2 = ent
	n1 = int(n1)
	n2 = int(n2)
	print(gcd(n1,n2))