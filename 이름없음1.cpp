#include <stdio.h>

int main(){
	int a;
	int max = 1;
	int row = 1;
	char temp;
	scanf("%d",&a);
	char candy[a][a];
	for(int i = 0; i<a;i++){
		scanf("%s",candy[i]);
	}
	
	for(int l = 0; l<a-1;l++){
		row = 1;
		for(int k= 0; k<a-1;k++){
			row = 1;
			temp = candy[l][k];							//사탕 바꾸기 
			candy[l][k] = candy[l][k+1];
			candy[l][k+1] = temp;
			for(int x=0; x<a;x++){						//체크 알고리즘 시작 
				for(int y=1; y<a;y++){
					if(candy[x][y] == candy[x][y-1])
						row += 1;
					else
						row = 1;
					if(row>max)
						max = row;
				}
			}
			for(int y=0; y<a;y++){
				for(int x=1; x<a;x++){
					if(candy[x][y] == candy[x-1][y])
						row += 1;
					else
						row = 1;
					if(row>max)
						max = row;
					}
				}
			candy[l][k+1] = candy[l][k];					//사탕 원래대로 
			candy[l][k] = temp;
			row = 1;
		}
	}
	row = 1;
	for(int l = 0; l<a-1;l++){
		row = 1;
		for(int k= 0; k<a-1;k++){
			temp = candy[l][k];
			candy[k][l] = candy[k+1][l];
			candy[k+1][l] = temp;
			for(int x=0; x<a;x++){						//체크 알고리즘 시작 
				row = 1;
				for(int y=1; y<a;y++){
					if(candy[x][y] == candy[x][y-1])
						row += 1;
					else
						row = 1;
					if(row>max)
						max = row;
				}
			}
			for(int y=0; y<a;y++){
				row = 1;
				for(int x=1; x<a;x++){
					if(candy[x][y] == candy[x-1][y])
						row += 1;
					else
						row = 1;
					if(row>max)
						max = row;
					}
				}
			candy[l][k+1] = candy[l][k];
			candy[l][k] = temp;
			row = 1; 
		}
	}
	printf("%d",max);
}
