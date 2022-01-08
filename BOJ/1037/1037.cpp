#include<stdio.h>

int main() {
	int a;
	int num;
	int max = 0;
	int min = 0;
	scanf("%d",&a);
	for(;a>0;a--){
		scanf("%d",&num);
		if(num>max)
			max = num;
		if(num<min or min == 0)
			min = num;
	}
	printf("%d",min*max);
}
