#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int m = (2*n)-1;
	for(int i=1; i<m+1;i++){
		if(i>n){
			for(int j=n;j<i;j++)
				printf(" ");
			for(int k=m;k>i;k--)
				printf("**");
		}
		else{
			for(int j=n;j>i;j--)
				printf(" ");
			for(int k=1;k<i;k++)
				printf("**");
		}
		printf("*\n");
	}
}
