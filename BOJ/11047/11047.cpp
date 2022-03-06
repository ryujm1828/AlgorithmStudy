#include <stdio.h>
long arr[10];

int main(){
	int n,temp;
	long long count,k;
    count = 0;
	scanf("%d %lld",&n,&k);
	for(int i=0; i<n; i++)
		scanf("%d",&arr[i]);
	temp = n-1;
	while(k != 0){
		if(k - arr[temp] <0)
			temp -= 1;
		else{
			count +=1;
			k -= arr[temp];
		}
	}
	printf("%lld",count);	
}
