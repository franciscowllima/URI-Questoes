count = int(input())

arr = []

for i in range(count):
  arr.append(int(input()))

numbers_in = 0
numbers_out = 0

for number in arr:
  if number > 9 and number < 21:
    numbers_in +=1
  else:
    numbers_out +=1

print('{} in'.format(numbers_in))
print('{} out'.format(numbers_out))