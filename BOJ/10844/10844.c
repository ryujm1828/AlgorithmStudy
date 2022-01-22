#include <stdio.h>
long long k[101][10];

int main(){

	k[1][0] = 0;
	for(int i=1;i<=9;i++)
		k[1][i] = 1;
	
	for(int i=2;i<=100;i++){
		for(int j=0;j<=9;j++){
			if(j == 0)
				k[i][j] = k[i-1][1]%1000000000;
			else if(j == 9)
				k[i][j] = k[i-1][8]%1000000000;
			else
				k[i][j] = (k[i-1][j-1] + k[i-1][j+1])%1000000000;
		}
	}
	
	
	
	int n;
	long b = 0;
	
	scanf("%d",&n);
	for(int i=0;i<=9;i++)
		b+=k[n][i]%1000000000;	
	printf("%d",b%1000000000);
} 
