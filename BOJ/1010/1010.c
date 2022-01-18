#include <stdio.h>

int main(){
	int t[50][50];
	int n, m;
	for(int k=1; k<31;k++)
		t[1][k] = k;
	for(int i=2; i<32;i++){
		t[i][i] = 1;
		for(int j=i+1; j<32;j++){
			t[i][j] = t[i-1][j-1] + t[i][j-1];
		}
	}
	int c;
	scanf("%d",&c);
	while(c--){
		scanf("%d %d",&n,&m);
		printf("%d\n",t[n][m]);
	}
	
}
