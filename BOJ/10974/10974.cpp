#include <stdio.h>
bool check[9] = {0};
int arr[9];


void go(int N, int node){
	if(node == N+1){
		for(int i=1; i<=N; i++)
			printf("%d ",arr[i]);
			
		printf("\n");
		return;
	}
		
	for(int i=1; i<=N; i++){
		if(check[i] == 0){
			check[i] = 1;
			arr[node] = i;
			go(N,node+1);
			check[i] = 0;
		}
	}
}




int main(){
	int n;
	scanf("%d",&n);
	
	go(n,1);
}
