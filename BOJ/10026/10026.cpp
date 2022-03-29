#include <stdio.h>

char arr[110][110];
bool check[110][110];

void dfs_1(int x,int y,char c){
	check[x][y] = 1;
	if(c == arr[x+1][y] && check[x+1][y] == 0)
		dfs_1(x+1,y,c);
	if(c == arr[x-1][y] && check[x-1][y] == 0)
		dfs_1(x-1,y,c);
	if(c == arr[x][y-1] && check[x][y-1] == 0)
		dfs_1(x,y-1,c);
	if(c == arr[x][y+1] && check[x][y+1] == 0)
		dfs_1(x,y+1,c);
}

void dfs_2(int x,int y,char c){
	check[x][y] = 1;
	if(c == 'R' || c == 'G'){
			if((arr[x+1][y] == 'R' || arr[x+1][y] == 'G')&& check[x+1][y] == 0)
				dfs_2(x+1,y,c);
			if((arr[x-1][y] == 'R' || arr[x-1][y] == 'G') && check[x-1][y] == 0)
				dfs_2(x-1,y,c);
			if((arr[x][y-1] == 'R' || arr[x][y-1] == 'G') && check[x][y-1] == 0)
				dfs_2(x,y-1,c);
			if((arr[x][y+1] == 'R' || arr[x][y+1] == 'G') && check[x][y+1] == 0)
				dfs_2(x,y+1,c);
	}
	else{
		if(c == arr[x+1][y] && check[x+1][y] == 0)
			dfs_2(x+1,y,c);
		if(c == arr[x-1][y] && check[x-1][y] == 0)
			dfs_2(x-1,y,c);
		if(c == arr[x][y-1] && check[x][y-1] == 0)
			dfs_2(x,y-1,c);
		if(c == arr[x][y+1] && check[x][y+1] == 0)
			dfs_2(x,y+1,c);
	}
	
}

int main(){
	int n;
	int res1 = 0;
	int res2 = 0;
	
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf(" %c",&arr[j][i]);
			
		}
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(check[j][i] == 0){
				dfs_1(j,i,arr[j][i]);
				res1 += 1;
			}
		}
	}
	
	for(int i=1; i<=100; i++){
		for(int j=1; j<=100; j++)
			check[j][i] = 0;
	}
	
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(check[j][i] == 0){
				dfs_2(j,i,arr[j][i]);
				res2 += 1;
			}
		}
	}
	
	
	printf("%d %d",res1,res2);
	
}
