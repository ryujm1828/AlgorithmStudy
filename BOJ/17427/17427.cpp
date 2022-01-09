#include <stdio.h>

int main(){
	int input;
	long num = 0;
	scanf("%d",&input);
	for(int i=1;i<=input; i++){
		num += i*(input/i);
	}
	printf("%ld",num);
}
