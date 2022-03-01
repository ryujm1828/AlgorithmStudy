n = int(input())
msg = [[] for i in range(101)]
dic = [{} for i in range(101)]
for i in range(n):
    num = 0
    string = input()
    for j in string:
        if j not in dic[i]:
            dic[i][j] = str(num)
            num += 1
        msg[i] += dic[i][j]

cor = 0
for i in range(n-1):
    for j in range(i+1,n):
        if msg[i] == msg[j]:
            cor += 1
print(cor)
