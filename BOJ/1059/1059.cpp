#include <stdio.h>

int main(){
	int L;
	scanf("%d",&L);
	int S[55];
	
	for(int i=0; i<L; i++)
		scanf("%d",&S[i]);
	
	int n;
	scanf("%d",&n);
	
	int m = 0;
	int M = -1;
	
	for(int i=0; i<L; i++){
		if(n == S[i]){
			printf("0");
			return 0;
		}
		else if(n>S[i] and S[i]>m)
			m = S[i];
		else if(n<S[i] and (S[i]<M or M == -1))
			M = S[i];
	}
	int pr = 0;
	int x = n;
	for(int i =m+1; i<=n; i++){
		if(i == n)
			x = n+1;
		else
			x = n;
		while(x<M){
			pr += 1;
			x++;	
		}
	}
	printf("%d",pr);
}
