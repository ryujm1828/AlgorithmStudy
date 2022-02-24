#include <cstdio>
#include <algorithm>

using namespace std;

int num[10];
int check[10];
int arr[10]; 


void start(int node,int n,int m){
	if(node == m+1){
		for(int i=1; i<=m; i++){
			printf("%d ",num[i]);
		}
		printf("\n");
		return;
	}
	for(int i=0; i<n; i++){
		if(check[i] == 0){
			check[i] = 1;
			num[node] = arr[i];
			start(node+1,n,m);
			check[i] = 0;
		}
	}
}


int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
		scanf("%d",&arr[i]);
	sort(arr,arr+n);
	start(1,n,m);
}
