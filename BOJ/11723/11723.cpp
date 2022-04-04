#include <stdio.h>
#include <string.h>

bool arr[22];

int main(){
	int t,n;
	char com[10];
	scanf("%d",&t);
	while(t--){
		scanf("%s",com);
		if(!strcmp(com,"add")){
			scanf("%d",&n);
			if(arr[n] == 0)
				arr[n] = 1;
		}
		else if(!strcmp(com,"remove")){
			scanf("%d",&n);
			if(arr[n] == 1)
				arr[n] = 0;
			
		}
		else if(!strcmp(com,"check")){
			scanf("%d",&n);
			if(arr[n] == 0)
				printf("0\n");
			else
				printf("1\n");
		}
		else if(!strcmp(com,"toggle")){
			scanf("%d",&n);
			if(arr[n] == 0)
				arr[n] = 1;
			else
				arr[n] = 0;
			
		}
		else if(!strcmp(com,"all")){
			for(int i=1; i<=20; i++)
				arr[i] = 1;
		}
		else if(!strcmp(com,"empty")){
			for(int i=1; i<=20; i++)
				arr[i] = 0;
		}
	}
	
	return 0;
}
