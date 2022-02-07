check = [0 for i in range(1000001)]

    

for i in range(2,1000001):
    if check[i] == 0:
        k = 1000000//i
        for j in range(i,k+1):
            check[i*j] = 1


M,N = map(int,input().split())

for i in range(2,1000001):
    if check[i] == 0 and i>=M and i<=N:
        print(i)
