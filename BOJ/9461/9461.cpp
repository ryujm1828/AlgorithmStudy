#include <stdio.h>
long arr[101];
int main(){
	int n;
	int t;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	for(int i=4; i<101; i++)
		arr[i] = arr[i-2] + arr[i-3];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%ld\n",arr[n]);
	}
}
