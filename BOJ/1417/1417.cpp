#include <cstdio>

int n[51];

int main(){
	int N;
	int count = 0;
  
	scanf("%d",&N);
	for(int i=0; i<N; i++)
		scanf("%d",&n[i]);
	
	int temp = 0;
	
	for(int i=1; i<N; i++){
		if(n[temp] <= n[i])
			temp = i;
	}

		
	while(temp != 0){
		n[temp] -= 1;
		n[0] += 1;
		count += 1;
		for(int i=0; i<N; i++){
			if(n[temp] <= n[i])
				temp = i;
		}
	}
  
	printf("%d",count);
}
