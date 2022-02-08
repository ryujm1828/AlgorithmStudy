com = int(input())
con = int(input())

g = ([[0]*101 for i in range(101)])

virus = [0 for i in range(101)]

visit = [0 for i in range(com+1)]

virus[1] = 1;
for i in range(con):
    a,b = map(int,input().split())
    g[a][b] = 1
    g[b][a] = 1


q = ['1']


while q:
    for i in q:
        temp = 0
        for j in g[int(i)]:
            if(j == 1 and visit[temp] == 0):
                q.append(str(temp))
                virus[temp] = 1
                visit[temp] = 1
            temp += 1
        q.remove(i)
            
            
print(virus.count(1)-1)
