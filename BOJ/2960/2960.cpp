#include <stdio.h>


bool arr[1010] = {0,};

int main(){
	int n,k;
	int count = 0;
	int res;
	scanf("%d %d",&n,&k);
	for(int i=2; i<=n; i++){
		if(arr[i] == 0){
			for(int j=1; j<=n/i; j++){
					if(arr[i*j] == 0){
					arr[i*j] = 1;
					count++;
					if(count == k){
						res = i*j;
						break;
					}
				}
			}
		}
	}
	
	printf("%d",res);
}
