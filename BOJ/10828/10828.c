#include <stdio.h>
#include <string.h>

int arr[10003];

int t=-1;

void push(int x){
	arr[t+1] = x;
	t += 1;
}

void pop(){
	if(t == -1)
		printf("-1\n");
	else{
		printf("%d\n",arr[t]);
		t -= 1;
	}
}

void size(){
	printf("%d\n",t+1);
}

void empty(){
	if(t == -1)
		printf("1\n");
	else
		printf("0\n");
}

void top(){
	if(t == -1)
		printf("-1\n");
	else
		printf("%d\n",arr[t]);
}


int main(){
	int t,n;
	char com[10];
	scanf("%d",&t);
	while(t--){
		scanf("%s",com);
		if(!strcmp(com,"push")){
			scanf("%d",&n);
			push(n);
		}
		else if(!strcmp(com,"pop"))
			pop();
		else if(!strcmp(com,"size"))
			size();
		else if(!strcmp(com,"empty"))
			empty();
		else if(!strcmp(com,"top"))
			top();
	}
}
