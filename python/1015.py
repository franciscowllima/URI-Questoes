import math
x1, y1 = input().split(' ')
x1 = float(x1)
y1 = float(y1)

x2, y2 = input().split(' ')
x2 = float(x2)
y2 = float(y2)
x3 = (x2 - x1) 
y3 = (y2 - y1)
distancia = (x3 * x3) + (y3 * y3)
raiz = math.sqrt(distancia)
print('{:.4f}'.format(raiz))