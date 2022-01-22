#include <stdio.h>
long one[100001];
long two[100001];
long thr[100001];
int main(){

	one[1] = 1;
	two[1] = 0;
	thr[1] = 0;
    
	one[2] = 0;
	two[2] = 1;
	thr[2] = 0;
    
	one[3] = 1;
	two[3] = 1;
	thr[3] = 1;
	
	for(int i=4; i<=100000; i++){
		one[i] = (thr[i-1] + two[i-1])%1000000009;
		two[i] = (one[i-2] + thr[i-2])%1000000009;
		thr[i] = (one[i-3] + two[i-3])%1000000009;
	}
	int t;
	int n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%ld\n",(one[n]+two[n]+thr[n])%1000000009);
	}
}
