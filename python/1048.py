salario = float(input())
if salario > 0 and salario <= 400.00:
    aumento = salario + (salario * (15/100))
    print('Novo salario: {:.2f}'.format(aumento))
    reajuste = aumento - salario
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: 15 %')
elif salario > 400.00 and salario <= 800.00:
    aumento = salario + salario * (12/100)
    print('Novo salario: {:.2f}'.format(aumento))
    reajuste = aumento - salario
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: 12 %')
elif salario > 800.00 and salario <= 1200.00:
    aumento = salario + salario * (10/100)
    print('Novo salario: {:.2f}'.format(aumento))
    reajuste = aumento - salario
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: 10 %')
elif salario > 1200.00 and salario <= 2000.00:
    aumento = salario + salario * (7/100)
    print('Novo salario: {:.2f}'.format(aumento))
    reajuste = aumento - salario
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: 7 %')
else:
    aumento = salario + salario * (4/100)
    print('Novo salario: {:.2f}'.format(aumento))
    reajuste = aumento - salario
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: 4 %')
