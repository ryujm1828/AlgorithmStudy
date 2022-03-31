#include <stdio.h>

int GCD(int a, int b){
	if(a<b){
		int temp = a;
		a = b;
		b = temp;
	}
	if(b != 0)
		return GCD(b,a%b);
	else
		return a;
}

int LCM(int a,int b){
	int g = GCD(a,b);
	return g*(a/g)*(b/g);
}

int main(){
	int num1, num2,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&num1,&num2);
		printf("%d\n",LCM(num1,num2));
	}
}
