a = input()
b = input()

num = [1,1,1]
for i in range(3):
    num[i] = int(a)*int(b[i])


for i in reversed(range(3)):
    print(num[i])

print(int(a)*int(b))
