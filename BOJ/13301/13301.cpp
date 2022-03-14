#include <stdio.h>

long long dp[81];

int main(){
    dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	
	for(int i=3; i<=80; i++)
		dp[i] = dp[i-1]+ dp[i-2];
	
	int n;
	scanf("%d",&n);
    if(n == 1)
        printf("4");
    else
    	printf("%lld",dp[n]*2 + (dp[n]+dp[n-1])*2);
	return 0;
}
