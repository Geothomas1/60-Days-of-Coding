num=input()
res = list(map(int, int(num)))
print(res)
odd=even=0
for i in range(len(res)):
  if i%2==0:
    even=even+num[i]
  else:
    odd=odd+num[i]
print(even-odd)