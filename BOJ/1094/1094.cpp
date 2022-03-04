#include <stdio.h>



int main(){
	
	int n;
	int count = 1;
	scanf("%d",&n);
	int result = 64;
	int now = 32;
	while(result > n){
		if(result - now > n)
			result -= now;
		else if(result - now == n)
			break;
		else
			count += 1;
		now = now >> 1;    //now = now/2
		
	}
	printf("%d",count);
}
