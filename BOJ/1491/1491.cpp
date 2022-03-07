#include <cstdio>
bool check[5003][5003];
int count = 0;

void go(int x,int y,int n,int m,int dir){ //dir 동 : 6 서 : 4 북 : 8 남 : 2 
	count += 1;
	
	if(count == n*m){
		printf("%d %d",x,y);
		return;
	}
	check[x][y] = 1;
	
	if(dir == 6){
		if(check[x+1][y] == 1 or x == n-1)
			go(x,y+1,n,m,8);
		else
			go(x+1,y,n,m,dir);
	}
	else if(dir == 8){
		if(check[x][y+1] == 1 or y == m-1)
			go(x-1,y,n,m,4);
		else
			go(x,y+1,n,m,dir);
	}
	else if(dir == 4){
		if(check[x-1][y] == 1 or x == 0)
			go(x,y-1,n,m,2);
		else
			go(x-1,y,n,m,dir);
	}
	else if(dir == 2){
		if(check[x][y-1] == 1)
			go(x+1,y,n,m,6);
		else
			go(x,y-1,n,m,dir);
	}
	
}
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	
	go(0,0,N,M,6);
}
