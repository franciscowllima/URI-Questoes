higherNumber = 0
indexHigherNumber = 0
inputSize = 100

for i in range(inputSize):
    number = int(input())
    if number > higherNumber:
        higherNumber = number
        indexHigherNumber = i + 1

print(higherNumber)
print(indexHigherNumber)
