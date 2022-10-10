while True:
    try:
        n = int(input())
        matrix=[]
        for i in range(0,n):
            matrix.append([])
            for j in range(0,n):
                matrix[i].append(0)

        for linha in range(n):
            for coluna in range(n):
                if linha + coluna == n-1:
                    matrix[linha][coluna] = 2
                elif linha == coluna:
                    matrix[linha][coluna] = 1
                else:    
                    matrix[linha][coluna] = 3
					
        for i in range(n):
            for j in range(n):
                print(matrix[i][j],end="")
            print("")

    except EOFError:
        break