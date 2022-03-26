#include <cstdio>
#include <algorithm>

using namespace std;
int main(){
	int arr[2][100010] = {0,};
	int dp[2][100010] = {0};
	int t;
	int n;
	scanf("%d",&t);
	while(t--){
		
		scanf("%d",&n);
		for(int i=0; i<n; i++)
			scanf("%d",&arr[0][i]);
		
		for(int i=0; i<n; i++)
			scanf("%d",&arr[1][i]);
		
		dp[0][0] = arr[0][0];
		dp[1][0] = arr[1][0];
		
		dp[0][1] = dp[1][0]+arr[0][1];
		dp[1][1] = dp[0][0]+arr[1][1];

		for(int i=2; i<n; i++){
			dp[0][i] = max(dp[1][i-1]+arr[0][i], max(dp[0][i-2],dp[1][i-2])+arr[0][i]);
			dp[1][i] = max(dp[0][i-1]+arr[1][i], max(dp[1][i-2],dp[0][i-2])+arr[1][i]);
			
		}
		
		printf("%d\n",max(dp[1][n-1],dp[0][n-1]));
	}
}
