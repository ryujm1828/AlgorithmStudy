n,m = map(int,input().split())

w_chess = [[0]*60 for i in range(60)]
b_chess = [[0]*60 for i in range(60)]

che = ['' for i in range(60)]
for i in range(n):
    k = input()
    che[i] += k

for i in range(n):
    for j in range(m):
        z = che[i][j]
        if((i+j)%2 == 1):
            if(z == 'W'):
                w_chess[i][j] = 1
            else:
                b_chess[i][j] = 1
        else:
            if(z == 'B'):
                w_chess[i][j] = 1
            else:
                b_chess[i][j] = 1

temp1 = 0;
temp2 = 0;
cor = int(99999999999)
	
for x in range(n-7):
	for y in range(m-7):
		for i in range(8):
			for j in range(8):
				if(str(b_chess[i+x][j+y]) == '1'):
					temp1 += 1
				if(str(w_chess[i+x][j+y]) == '1'):
					temp2 += 1
		if(cor>temp1):
			cor = temp1;
		if(cor>temp2):
			cor = temp2;	
		temp1 = 0
		temp2 = 0			
	
print(cor)
