inputSize = int(input())

for i in range(inputSize):
    words = input().split()

    code = ''
    for word in words:
        code += word[0] 
    print(code)