while True:
    
    # Entrada N, representando o número de casos teste
    n = int(input())
    
    # Condição de parada, pois a entrada  não deve ser processada
    if n == 0:
        break
    
    # Verificação se está nos casos propostos pela questão:
    # N (1 ≤ N < 10^5)
    elif 1 <= n <= 10**5:
        
        # Entrada do usuário(números para encontrar o solitário)
        numeros = [int(x) for x in input().split()]
        
        # Lista auxiliar em que iremos ver os pares.
        auxiliar = []
        for i in numeros:
            # Caso já possua o numero(i), ele remove do auxiliar e fecha o par.
            if i in auxiliar:
                auxiliar.remove(i)
            # Caso não possua o numero(i), o mesmo é inserido na lista.
            else:
                auxiliar.append(i)
        # Printa o número solitário, que no caso é o único elemento da lista 'auxiliar'
        # Pois não foi encontrado nenhum par pra ele.
        print(auxiliar[0])