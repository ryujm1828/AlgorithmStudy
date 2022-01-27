re = input()

two = [2,4,8,6]
three = [3,9,7,1]
four = [4,6]
seven = [7,9,3,1]
eight = [8,4,2,6]
nine = [9,1]

for i in range(int(re)):
    a,b = input().split()
    a = int(a)
    b = int(b)
    a = a%10
    if(a == 1):
        print(1)
    elif a == 2:
        print(two[b%4-1])
    elif a == 3:
        print(three[b%4-1])
    elif a == 4:
        print(four[b%2-1])
    elif a == 5:
        print(5)
    elif a == 6:
        print(6)
    elif a == 7:
        print(seven[b%4-1])
    elif a == 8:
        print(eight[b%4-1])
    elif a == 9:
        print(nine[b%2-1])
    elif a == 0:
        print(10)
