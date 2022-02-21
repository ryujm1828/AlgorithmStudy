#include <stdio.h>

bool check[10] = {0,};
int num[10];

void start(int node,int n,int m,int k){
	if(node == m+1){
		for(int i=1; i<=m; i++){
			printf("%d ",num[i]);
		}
		printf("\n");
		return;
	}
	for(int i=k; i<=n; i++){
		if(check[i] == 0){
			check[i] = 1;
			num[node] = i;
			start(node+1,n,m,i);
			check[i] = 0;
		}
	}
}


int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	start(1,n,m,1);
}
