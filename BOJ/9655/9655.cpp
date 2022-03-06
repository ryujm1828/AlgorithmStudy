#include <stdio.h>

bool arr[1001];


int main(){
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 0;
	arr[4] = 1;
	
	for(int i=5; i<1001; i++)
		arr[i] = arr[i-4];
		
	int n;
	scanf("%d",&n);
	if(arr[n] == 0)
		printf("SK");
	else
		printf("CY");
	
}
