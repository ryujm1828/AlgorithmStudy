#include<stdio.h>

int main(){
	int m,d;
	scanf("%d %d",&m,&d);
	int res = 0;
	while(m != 1){
		
		if(m-1 == 2)
			res += 28;
		
		else if(m-1 == 1 or m-1 == 3 or m-1 == 5 or m-1 == 7 or m-1 == 8 or m-1== 10 or m-1 == 12)
			res += 31;
		
		else if(m-1 == 4 or m-1 == 6 or m-1==9 or m-1== 11)
			res += 30;
		m -= 1;
	}
	res += d;
	res = res%7;
	if(res == 1)
		printf("MON");
	else if(res == 2)
		printf("TUE");
	else if(res == 3)
		printf("WED");
	else if(res == 4)
		printf("THU");
	else if(res == 5)
		printf("FRI");
	else if(res == 6)
		printf("SAT");
	else if(res == 0)
		printf("SUN");
}
