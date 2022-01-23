#include <stdio.h>

int main(){
	long k[91][2];
	k[1][0] = 0;
	k[1][1] = 1;
	
	for(int i=2; i<=90; i++){
		k[i][0] = k[i-1][0] + k[i-1][1];
		k[i][1] = k[i-1][0];
	}
	int n;
	scanf("%d",&n);
	printf("%ld",k[n][0]+k[n][1]);
}
