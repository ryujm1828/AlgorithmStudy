#include <stdio.h>

int mod = 1000000009;

int main(){
	long d[100001][4];
	d[1][1] = 1;
	d[1][2] = 0;
	d[1][3] = 0;
	
	d[2][1] = 0;
	d[2][2] = 1;
	d[2][3] = 0;
	
	d[3][1] = 1;
	d[3][2] = 1;
	d[3][3] = 1;
	
	for(int i=4; i<=100000;i++){
		d[i][1] = (d[i-1][2]+d[i-1][3])%mod;
		d[i][2] = (d[i-2][1]+d[i-2][3])%mod;
		d[i][3] = (d[i-3][1]+d[i-3][2])%mod;
	}
    
	int n;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",(d[n][1]+d[n][2]+d[n][3])%mod);
	}
}
