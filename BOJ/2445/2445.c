#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<=i; j++)
			printf("*");
		for(int j=n; j>i+1; j--)
			printf(" ");
		for(int j=n; j>i+1; j--)
			printf(" ");
		for(int j=0; j<=i; j++)
			printf("*");
		printf("\n");
	}
	
	for(int i=0; i<n; i++){
		printf("**");
	}
	printf("\n");
	for(int i=0; i<n-1; i++){
		for(int j=n; j>i+1; j--)
			printf("*");
		for(int j=0; j<=i; j++)
			printf(" ");
		for(int j=0; j<=i; j++)
			printf(" ");
		for(int j=n; j>i+1; j--)
			printf("*");		
		printf("\n");
	}
}
