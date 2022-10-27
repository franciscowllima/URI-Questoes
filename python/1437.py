while(True):
    ent = int(input())
    if(ent == 0):
        break
    l = input()
    pos = 0
    #0 N
    #1 L
    #2 S
    #3 O
    for i in range(ent):
        if(l[i]=="D"):
            pos+=1
        elif(l[i]=="E"):
            pos-=1
        if(pos<0):
            pos=3
        if(pos>3):
            pos=0
    if(pos == 0):
        print("N")
    elif(pos == 1):
        print("L")
    elif(pos==2):
        print("S")
    else:
        print("O")