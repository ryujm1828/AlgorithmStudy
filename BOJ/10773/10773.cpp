#include <stdio.h>

int arr[100010];

int main(){
	int k;
	int top = 0;
	int n;
	int sum = 0;
	scanf("%d",&k);
	while(k--){
		scanf("%d",&n);
		if(n == 0){
			arr[top-1] = 0;
			top--;
		}
		else{
			arr[top] = n;
			top++;
		}
	}
	for(int i=0; i<top; i++)
		sum += arr[i];
		
	printf("%d",sum);
}
