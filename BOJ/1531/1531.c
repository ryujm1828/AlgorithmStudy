#include <stdio.h>

int check[102][102] = {0, };

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	int x1,y1,x2,y2;
	int temp; 
	while(n--){
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for(int i=y1; i<=y2; i++){
			for(int j=x1; j<=x2; j++){
				check[j][i] += 1;
			}
		}
	}
	
	int num = 0;
	for(int i=100; i>=1; i--){
		for(int j=1; j<=100; j++){
			if(check[i][j] > m)
				num+= 1;
			//printf("%d",check[j][i]);       배열 모습 확인 코드
		}
		//printf("\n");                     배열 모습 확인 코드
	}
	printf("%d",num);
}
