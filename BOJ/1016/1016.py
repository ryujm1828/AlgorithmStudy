import math

check = [0 for i in range(1000004)]

min,max = map(int,input().split())



for i in range(2,int(math.sqrt(max)+1)):
    k = i*i
    x = max//k
    y = math.ceil((min//k))

    for j in range(y,x+1):
        if (j*k)-min >= 0:
            check[(j*k)-min] = 1;



num = 0

for i in range(0, max-min+1):
    if check[i] == 0:
        num += 1

print(num)
