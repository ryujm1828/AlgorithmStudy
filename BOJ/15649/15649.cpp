#include <stdio.h>

bool c[10];
int a[10];

void go(int index,int n, int m){
	if(index == m){
		for(int i=0; i<m; i++)
			printf("%d ",a[i]);
		printf("\n");
		return;
	}
	
	for(int i=1; i<=n; i++){
		if(c[i] == 0){
			c[i] = 1;
			a[index] = i;
			go(index+1,n,m);
			c[i] = 0;
		}
	}
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	go(0,n,m);
	return 0;
}
