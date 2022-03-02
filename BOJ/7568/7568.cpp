#include <cstdio>

int main(){
	int n;
	int x[50];
	int y[50];
	int rank[50];
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
		rank[i] = 1;
	
	for(int i=0; i<n; i++)
		scanf("%d %d",&x[i],&y[i]);
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(x[i]<x[j] and y[i]<y[j])
				rank[i] += 1;
			else if(x[j] < x[i] and y[j] < y[i])
				rank[j] += 1;
		}
	}

	for(int i=0 ; i<n; i++)
		printf("%d ",rank[i]);
}
