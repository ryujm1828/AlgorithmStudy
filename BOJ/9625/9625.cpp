#include <stdio.h>

int arra[50] = {0,};
int arrb[50] = {0,};

int main(){
	int n;
	arra[0] = 1;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		arra[i] = arrb[i-1];
		arrb[i] = arra[i-1]+arrb[i-1];
	}
	printf("%d %d",arra[n],arrb[n]);
	
	return 0;
}
