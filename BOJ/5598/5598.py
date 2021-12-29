msg = input();
ret = '';
dic = {}

for c in range(26):
    dic[chr(65+((c+3)%26))] = chr(65+c)

for k in msg:
    msg = msg.replace(k,dic[k].lower())

 
msg = msg.upper()

print(msg)
