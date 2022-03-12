#include <stdio.h>

int main(){
	int a,b,v,k,x,y;
	scanf("%d %d %d",&a,&b,&v);
	
	v=v-a;
	
	k = a-b;
	x = v/k;
	y = v%k;
	
	if(y == 0)
		printf("%d",x+1);
	else
		printf("%d",x+2);
}
