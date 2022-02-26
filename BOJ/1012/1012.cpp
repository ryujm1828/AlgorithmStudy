#include <stdio.h>

bool field[100][100] = {0, };
bool check[100][100] = {0, };



void Dfs(int x, int y){
	check[x][y] = 1;
	if (field[x][y] == 0) return;
	
	
	if(check[x+1][y] == 0 and field[x+1][y] == 1)
		Dfs(x+1,y);
	if(x != 0){
		if(check[x-1][y] == 0 and field[x-1][y] == 1)
			Dfs(x-1,y);
	}
	if(check[x][y+1] == 0 and field[x][y+1] == 1) 
		Dfs(x,y+1);
	if (y != 0){
		if(check[x][y-1] == 0 and field[x][y-1] == 1)
			Dfs(x,y-1);
	}
}




int main(){
	int t;
	
	scanf("%d",&t);
	
	int m,n,k;
	int x,y;
	
	while(t--){
		int worm = 0;
		scanf("%d %d %d",&m,&n,&k);
		while(k--){
			scanf("%d %d",&x,&y);
			field[x][y] = 1;
		}
		
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(check[i][j] == 0){
					check[i][j] = 1;
					if(field[i][j] == 1){
						worm += 1;
						Dfs(i,j);
					}
				}
			}
		}
		printf("%d\n",worm);
		for(int i=0; i<=51; i++){
			for(int j=0; j<=51; j++){
				check[i][j] = 0;
				field[i][j] = 0;
			}
		}
		
	}
}
