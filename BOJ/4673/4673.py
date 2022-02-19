check = [0 for i in range(10001)]

i = 1;

for i in range(10001):
    temp = 0
    for j in str(i):
        temp += int(j)
    if i+temp <=10000:
        check[i+temp] = 1;

for i in range(1,10001):
    if check[i] == 0:
        print(i)
