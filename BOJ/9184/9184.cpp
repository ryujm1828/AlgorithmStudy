#include <stdio.h>
int w[21][21][21] = {0};
int ret(int a,int b, int c){
	if(a<=0 or b<=0 or c<=0)
		return 1;
	
	if(a>20 or b>20 or c>20)
		return ret(20,20,20);
	
	if(w[a][b][c] != 0)
		return w[a][b][c];
	
	if(a*b*c == 0){
		w[a][b][c] = 1;
	}
	
	else if(a<b and b<c){
		w[a][b][c] = ret(a,b,c-1) + ret(a,b-1,c-1) - ret(a,b-1,c);
	}
	else{
		w[a][b][c] = ret(a-1,b,c) + ret(a-1,b-1,c) + ret(a-1,b,c-1) - ret(a-1,b-1,c-1);
	
	}
	
	return w[a][b][c];	
}


int main(){
	int x,y,z;
	while(1){
	scanf("%d %d %d",&x,&y,&z);
	if(x == -1 and y ==-1 and z == -1)
		break;
	printf("w(%d, %d, %d) = %d\n",x,y,z,ret(x,y,z));
	}
}
