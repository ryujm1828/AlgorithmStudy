#include <stdio.h>

bool check[246920];

int main(){
	long long a,t,res;
	
	check[1] = 1;
	
	for(int i=2; i<=246912; i++){
		if(check[i] == 0){
			for(int j=2; j*i<=246912; j++){
				check[i*j] = 1;
			}
		}
	}

	while(1){
		res = 0;
		scanf("%d",&a);
		if(a == 0)
			break;
		for(int i=a+1; i<=2*a; i++){
			if(check[i] == 0)
				res += 1;
		}
		printf("%d\n",res);
	}
}
