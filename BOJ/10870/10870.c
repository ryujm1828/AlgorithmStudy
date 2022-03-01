#include <stdio.h>

int fibo(int a,int b,int re,int n){
	if(n == re)
		return b;
	return fibo(b,a+b,re+1,n);
}


int main(){
	int n;
	scanf("%d",&n);
	if(n == 0)
		printf("0");
	else
		printf("%d",fibo(0,1,1,n));
}
