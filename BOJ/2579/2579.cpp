#include <cstdio>
#include <algorithm>

using namespace std;

int st[303] = {0,};
int dp[303][3] = {0,};

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		scanf("%d",&st[i]);
	dp[1][1] = st[1];
	dp[2][1] = st[2];
	dp[2][2] = st[1] + st[2];
	dp[3][1] = st[1] + st[3];
	dp[3][2] = dp[2][1] + st[3];
	for(int i = 4; i<=n; i++){
		dp[i][1] = max(dp[i-2][1],dp[i-2][2]) + st[i];
		dp[i][2] = dp[i-1][1] + st[i];
	}
	
	printf("%d",max(dp[n][1],dp[n][2]));
}
