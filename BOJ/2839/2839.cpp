#include <stdio.h>

int dp[5003] = {0,};

int main(){
	int n;
	
	dp[3] = 1;
	dp[5] = 1;
	
	for(int i=6; i<=5000; i++){
		if(dp[i-5] >0)
			dp[i] = dp[i-5] + 1;
		else if(dp[i-3] > 0)
			dp[i] = dp[i-3] + 1;
		else
			dp[i] = 0;
	}
	scanf("%d",&n);
	
	
	if(dp[n] == 0)
		printf("-1");
	else
		printf("%d",dp[n]);
	
}
