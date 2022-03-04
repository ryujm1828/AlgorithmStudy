#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int result = 0;
	for(int i=64; i>0; i/=2){
		if((n & i)== i)
			result +=1;
	}
	printf("%d",result);
}
