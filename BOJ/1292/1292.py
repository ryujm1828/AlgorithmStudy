a,b = map(int,input().split())

i = a-1
c = [0 for i in range(1500)]
sum = 0
z = 0

for x in range(1,46):
    for y in range(x):
        c[z] = str(x)
        z += 1


while(i<b):
    sum += int(c[i])
    i += 1
    
print(sum)
