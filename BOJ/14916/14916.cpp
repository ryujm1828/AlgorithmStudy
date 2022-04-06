#include <stdio.h>

int min(int a,int b){
	if(a<b)
		return a;
	else
		return b;
}

int dp[100100] = {0,};

int main(){
	int n;
	dp[2] = 1;
	dp[5] = 1;
	dp[4] = 2;
	
	for(int i=6; i<=100000; i++){
		if(dp[i-5] != 0)
			dp[i] = dp[i-5] + 1;
		else if(dp[i-2] != 0)
			dp[i] = dp[i-2] + 1;
	}
	
	scanf("%d",&n);
	if(dp[n] == 0)
		printf("-1");
	else
		printf("%d",dp[n]);
}
