#include <stdio.h>

int arr[1010] =  {0};

int main(){
	arr[0] = 1;
	int n,k;
	scanf("%d %d",&n,&k);
	int re = n;
	int i = k;
	int check;
	printf("<");
	re -= 1;
	while(re--){
		check = 0;
		printf("%d, ",i);
		arr[i] = 1;
		while(check != k){
			i += 1;
			i %= n+1;
			if(arr[i] == 0){
				check++;
			}
		}
	}
	printf("%d>",i);
}
