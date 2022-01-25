a,b = input().split()

c = ''
d = ''
for i in a[::-1]:
    c += i
for i in b[::-1]:
    d += i

x = str(int(c)+int(d))

y = ''

for i in x[::-1]:
    y += i

print(int(y))
