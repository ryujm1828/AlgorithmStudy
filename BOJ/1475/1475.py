check = [1 for k in range(10)]
count = 1;
n = input()

for i in n:
    i = int(i)
    if i == 6 or i == 9:
        if check[6] == 0 and check[9] == 0:
            count += 1;
            for j in range(10):
                check[j] += 1;
            check[i] -= 1;
        else:
            if check[6] > 0:
                check[6] -= 1;
            else:
                check[9] -= 1;
        
    else:
        if check[i] == 0:
            count += 1;
            for j in range(10):
                check[j] += 1;
            check[i] -= 1;
        else:
            check[i] -= 1;
            

print(count);
