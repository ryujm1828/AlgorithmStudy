#include <stdio.h>

int CalculateYear(int e,int s, int m,int year){
	if(e == s and e == m)
		return year + e;
	else{
		if(e-1 == 0)
			e = 15;
		else
			e -= 1;
		if(s-1 == 0)
			s = 28;
		else
			s -= 1;
		if(m-1 == 0)
			m = 19;
		else
			m -= 1;
		year += 1;
		return CalculateYear(e,s,m,year);
	}
}


int main(){
	int year = 0;
    int e;
    int s;
    int m;
    scanf("%d %d %d",&e,&s,&m);
	printf("%d",CalculateYear(e,s,m,year));
}
