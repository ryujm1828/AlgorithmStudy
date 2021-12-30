msg = input();
num = msg.count(' ')+1
if msg[0] == ' ':
    num -= 1;
if msg[-1] == ' ':
    num -= 1;
print(num);
