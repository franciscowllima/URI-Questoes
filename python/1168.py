# 1 -> 2 leds
# 2 -> 5 leds
# 3 -> 5 leds
# 4 -> 4 leds
# 5 -> 5 leds
# 6 -> 6 leds
# 7 -> 3 leds
# 8 -> 7 leds
# 9 -> 6 leds
# 0 -> 6 leds


# solução com dicionario:

dict_leds = {"1":2,"2":5,"3":5,"4":4,"5":5,"6":6,"7":3,"8":7,"9":6,"0":6}
n = int(input(""))
x = 0

while x<n:
    num = input()
    cont = 0 
    for i in num:
        if(i in dict_leds):
            cont += dict_leds[i]
    print(str(cont)+" leds")
    x = x+1
    

# solução com lista homogena(vetor).

#             0  1  2  3  4  5  6  7  8  9      número          
# lista_leds = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6] #qtd. de leds

# n = int(input(""))
# x = 0

# while x<n:
#     num = input()
#     cont = 0 
#     for i in num:
#        for j in range(len(lista_leds)):
#            if( int(i) == j):
#                cont += lista_leds[j]   
#     print(str(cont)+" leds")
#     x = x+1
