#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	while(n != 1){
		for(int i=2; i<=n; i++){
			if(n % i == 0){
				while(n%i == 0){
					printf("%d\n",i);
					n /= i;
				}
			}
		}
	}
}