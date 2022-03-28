#include <stdio.h>

int is[52][52];
bool check[52][52];

void dfs(int x,int y){
	check[x][y] = 1;
	
	if(x != 0){
		if(check[x-1][y] == 0 && is[x-1][y] == 1 )				//4
			dfs(x-1,y);
		if(check[x-1][y+1] == 0 && is[x-1][y+1] == 1 )			//7
			dfs(x-1,y+1);
	}
	if(y != 0){
		if(check[x][y-1] == 0 && is[x][y-1] == 1)				//2
			dfs(x,y-1);
		if(check[x+1][y-1] == 0 && is[x+1][y-1] == 1)			//3
			dfs(x+1,y-1);
	}
	
	if(x != 0 && y != 0){
		if(check[x-1][y-1] == 0 && is[x-1][y-1] == 1 )				//1
			dfs(x-1,y-1);
	}
	
	if(check[x+1][y+1] == 0 && is[x+1][y+1] == 1)
		dfs(x+1,y+1);
	
	
	if(check[x][y+1] == 0 && is[x][y+1] == 1)					//8
		dfs(x,y+1);
	if(check[x+1][y] == 0 && is[x+1][y] == 1)					//6
		dfs(x+1,y);			
}


int main(){
	int w,h;
	int res;
	while(1){
		res = 0;
		for(int i=0; i<=51; i++){
			for(int j=0; j<=51; j++){
				is[j][i] = 0;
				check[j][i] = 0;
			}
		}
		
		scanf("%d %d",&w,&h);
		
		if(w == 0 && h == 0)
			return 0;
		
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++)
				scanf("%d",&is[j][i]);
		}
		
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(is[j][i] == 1 && check[j][i] == 0){
					res += 1;
					dfs(j,i);
				}
			}
		}
		printf("%d\n",res);
	}
	
	
	return 0;
}
