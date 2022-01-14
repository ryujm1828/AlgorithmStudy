#include <stdio.h>
int main(){
	int n;
	int m;
	int card[100];
	long add;
	long max = -1;
	scanf("%d %d",&n,&m);
	for(int i= 0; i<n; i++){
		scanf("%d",&card[i]);
	}
	for(int x=0; x<n-2; x++){
		for(int y=x+1; y<n-1; y++){
			for(int z = y+1; z<n;z++){
				add = card[x] + card[y] + card[z];
				if(max<add and add<=m)
					max = add;
			}
		}
	}
	printf("%d",max);
}
