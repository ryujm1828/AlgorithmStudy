#include <stdio.h>

int main(){
	int k[1005];
	k[1] = 1;
	k[2] = 3;
	for(int i=3;i<1001;i++)
		k[i] = (k[i-1] + k[i-2] + k[i-2])%10007;
	int n;
	scanf("%d",&n);
	printf("%d",k[n]);
}
