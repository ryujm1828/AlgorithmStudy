t = int(input())

for i in range(t):
    msg = input()
    l = 0

    for i in msg:
        if l < 0:
            break;
        if i == '(':
            l += 1
        elif i == ')':
            r += 1

    if(l == 0):
        print("YES")
    else:
        print("NO")
