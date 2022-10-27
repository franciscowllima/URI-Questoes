
n1 = int(input())
n2 = int(input())


if(n1>n2):
    y = range(n2,n1)
    x  = n1-n2
else:
    y = range(n1,n2)
    x = n2-n1
i=1
soma = 0
while(i<x):
  if(y[i]%2 != 0):
    soma += y[i]
  i+= 1

print(soma)