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
    

