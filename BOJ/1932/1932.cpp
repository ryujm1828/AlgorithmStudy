#include <cstdio>
#include <algorithm>

using namespace std;

int pira[503][503] = {0,};
int dp[503][503] = {0,};


int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++)
			scanf("%d",&pira[i][j]);
	}
	
	dp[1][1] = pira[1][1];
	
	
	for(int i=2; i<=n; i++){
		for(int j=1; j<=i; j++){
			dp[i][j] = max(dp[i-1][j-1],dp[i-1][j]) + pira[i][j];
		}
	}
	
	int temp = 0;
	
	for(int i=1; i<=n; i++){
		if(temp<dp[n][i])
			temp = dp[n][i];
	}
	printf("%d",temp);
}
