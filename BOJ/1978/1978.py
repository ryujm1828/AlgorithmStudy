check = [0 for i in range(1001)]

check[0] = 1
check[1] = 1

for i in range(2,1001):
    if check[i] == 0:
        k = 1000//i
        for j in range(i,k+1):
            check[i*j] = 1

N = int(input())

num = input().split()
res = 0

for i in num:
    if check[int(i)] == 0:
        res += 1

print(res)
