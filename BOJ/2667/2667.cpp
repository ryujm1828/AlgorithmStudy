#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;






int danzi[400] = {0}; //몇번째 단지인지 배열에 삽입 
int input[26][26];
int check[26][26] = {0};



void dfs(int x,int y,int num){
	if (input[x][y] == 0)
		check[x][y] = 1;
		
	else{
		check[x][y] = num;
		danzi[num] += 1;
		if(x != 0){
			if(check[x-1][y] == 0)
				dfs(x-1,y,num);			
		}
		if(y != 0){
			if(check[x][y-1] == 0)
				dfs(x,y-1,num);
		}
		if(check[x+1][y] == 0)
			dfs(x+1,y,num);
		if(check[x][y+1] == 0)
			dfs(x,y+1,num);
	}
}



int main(){
	int a;
	scanf("%d",&a);
	int n =1;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
		scanf("%1d", &input[j][i]);
		}
	}
	
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if(check[j][i] == 0){
				if(input[j][i] == 1)
					n += 1;
				dfs(j,i,n);
			}
		}
	}
	
	sort (danzi,danzi+400);
	int z = 0;
	int b = 0;
	while(z < 400){
		if(danzi[z] != 0)
			b+=1;
		z++;
	}
	printf("%d\n",b);
	z = 0;
	
	while(z < 400){
		if(danzi[z] != 0)
			printf("%d\n",danzi[z]);
		z++;
	}
}
