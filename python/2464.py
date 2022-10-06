chave = input()
texto = input()
palavra = []
alfabeto = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", 
           "n", "o", "p", "q", "r", "s", "t", "u","v", "w", "x", "y", "z"]

for i in range(len(texto)):
    for j in range(len(chave)):
        if texto[i] == chave[j]:
            palavra.append(alfabeto[j])
print(''.join(palavra)) 


