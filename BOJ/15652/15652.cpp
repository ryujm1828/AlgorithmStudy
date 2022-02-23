#include <stdio.h>

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
		num[node] = i;
		start(node+1,n,m,i);
	}
}


int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	start(1,n,m,1);
}
