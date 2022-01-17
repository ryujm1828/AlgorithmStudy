#include <stdio.h>

long num[1000005];

int main(){

	num[1] = 0;
	int	three;
	int two;
	int minus;

	for(int i=2;i<1000001;i++){
		if(i%3 != 0)
			three = 1000;
		else
			three = num[i/3];
		if(i%2 != 0)
			two = 1000;
		else
			two = num[i/2];
		minus = num[i-1];
		if(three>two){
			if(two>minus)
				num[i] = minus + 1;
			else
				num[i] = two + 1;
		}
		else{
			if(three>minus)
				num[i] = minus + 1;
			else
				num[i] = three + 1;
		}
	}
	int a;
	scanf("%d",&a);
	printf("%d",num[a]);
}
