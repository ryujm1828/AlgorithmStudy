N = int(input()) #원하는 채널
M = int(input()) #금지 버튼 갯수

num = ''

if M != 0:
    num = input()
    num = num.strip()


m = abs(N-100)

for i in range(1000001):
    check = 0
    for j in num:
        if j in str(i):
            check = 1

    if check == 0:
        temp = abs(N-i)+len(str(i))
        if temp < m:
             m = temp

print(m)
