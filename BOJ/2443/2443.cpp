#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<a+1;i++){			//행을 a개 만큼 출력 
		for(int j=1;j<i;j++)		//공백을 i번째열에 i-1만큼 출력 
			printf(" ");
		for(int k=i;k<a;k++)		//**을 i번째열에  a-i번 출력 
			printf("**");
		printf("*\n"); 
	}
}
