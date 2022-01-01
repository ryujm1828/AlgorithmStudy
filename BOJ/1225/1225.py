num1,num2= input().split();

sum1 = 0;
sum2 = 0;
for i in str(num1):
    sum1 += int(i);
for j in str(num2):
    sum2 += int(j);

print(sum1*sum2)    #a1*b1+a1*b2+....a2*b1+a2*b2+.... = (a1+a2+...)*(b1+b2+...)
