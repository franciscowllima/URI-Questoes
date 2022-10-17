listanum = []
a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
listanum.append(a)
listanum.append(b)
listanum.append(c)
crescente = sorted(listanum)
for c in crescente:
    print('{}'.format(c), end='\n')
print('')
for c in listanum:
    print('{}'.format(c), end='\n')