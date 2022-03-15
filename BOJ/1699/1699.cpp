#include <stdio.h>

int dp[100010];

int main(){
	int temp;
	dp[0] = 0;
	dp[1] = 1;
	
	for(int i=2; i<=100000; i++){
		dp[i] = i;
		for(int j=1; j*j<=i; j++){
			if(dp[i] > 1 + dp[i-j*j]){
				dp[i] = 1 + dp[i-j*j];
			}
		}
	}
	
	int n;
	scanf("%d",&n);
	printf("%d",dp[n]);
	
}
