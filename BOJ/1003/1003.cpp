#include <stdio.h>

int main(){
	int fibz[41];
	fibz[0] = 1;
	fibz[1] = 0;
	int fibo[41];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i=2; i<41;i++){
		fibz[i] = fibz[i-1] + fibz[i-2];
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	int re;
	int num;
	scanf("%d",&re);
	for(int i=0; i<re;i++){
		scanf("%d",&num);
		printf("%d %d\n",fibz[num],fibo[num]);
	}
}
