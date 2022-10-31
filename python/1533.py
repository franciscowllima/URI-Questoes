while(True):
    e = int(input())
    if(e==0):
        break
    s = list(map(int,input().split()))
    maior = s[0]
    sus = 0
    k = 1
    for k in range(e):
        if(s[k]>maior):
            sus = maior
            maior = s[k] 
        elif(s[k]>sus and s[k]!=maior):
            sus = s[k]
    print(s.index(sus)+1)