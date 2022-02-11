a,b = input().split()

if len(a)>len(b):
    te = a
    a = b
    b = te


res = 50

c = len(b)-len(a)
    
for i in range(c+1):
    temp = 0
    for j in range(len(a)):
        if a[j] != b[j+i]:
            temp += 1
    if res > temp:
         res = temp

print(res)
