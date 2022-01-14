#include <stdio.h>

int main(){
	int sum;
	int num;
	int k;
	scanf("%d",&num);
	for(int i =1; i<num;i++){
		sum = i;
		k = i;
		while(k){
			sum += k%10;
			k /= 10;
		}
		if(sum == num){
			printf("%d",i);
			return 0;
		}
	}
	printf("0");
}
