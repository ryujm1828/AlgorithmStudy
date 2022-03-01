#include <cstdio>

int check(int n){
	if(n == 1000)
		return 0;
	else if(n>=100){
		if(n/100 - (n/10)%10 == (n/10)%10 - (n%100)%10 )
			return 1;
		else
			return 0;
	}
	else{
		return 1;
	}
}


int main(){
	int n;
	scanf("%d",&n);
	int num = 0;
	for(int i=n; i>0; i--){
		if(check(i) == 1){
			num += 1;
		}
	}
	printf("%d",num);
}
