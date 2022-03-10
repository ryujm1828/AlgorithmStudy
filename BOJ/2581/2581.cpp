#include <stdio.h>

bool check[10003];

int main(){
	int a,b;
	int sum = 0;
	int min;
	check[1] = 1;
	
	for(int i=2; i<=10000; i++){
		if(check[i] == 0){
			for(int j=i; j*i<=10000; j++)
				check[i*j] = 1;
		}
	}
	scanf("%d",&a);
	scanf("%d",&b);
	
	for(int i=b; i>=a; i--){
		if(check[i] == 0){
			sum += i;
			min = i;
		}
	}
	
	if(sum == 0)
		printf("-1");
	else
		printf("%d\n%d",sum,min);
	
}
