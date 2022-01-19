#include <stdio.h>

int main(){
	int k[11];
	k[1] = 1;
	k[2] = 2;
	k[3] = 4;
	for(int i=4;i<11;i++)
		k[i] = k[i-1] + k[i-2] + k[i-3];		//k[i-1]은 +1이 추가될 때 k[i-2]는 +2가 추가될 때 k[i-3]은 +3이 추가될 때 
	int a;
	int n;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&n);
		printf("%d\n",k[n]);
	}
}
