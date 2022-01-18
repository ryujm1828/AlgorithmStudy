#include <stdio.h>
#include <math.h>
long num[1000003];

int main(){


	int input;
	int te;
	for(int i=2;i<1000001;i++){
		te = i;
		for(int j=1;i*j<1000001;j++){				//i의 약수 구하기 
			num[i*j] +=i;
		}
	}
	for(int i=2;i<1000001;i++)
	num[i] += num[i-1] + 1;
	int a;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&input);
		printf("%ld\n",num[input]+1);
	}
}
