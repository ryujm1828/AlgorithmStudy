#include <iostream>
#include<cmath>

using namespace std;

int dist(int x1,int y1,int x2, int y2){
	
	double ret = (pow(x1-x2,2)+pow(y1-y2,2));
	return ret;
}

int main(){
	int re;
	int x1,y1,r1,x2,y2,r2;
	int dis;
	int r;
	
	scanf("%d",&re);
	
	while(re--){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		dis = dist(x1,y1,x2,y2);
		
		r = pow(r1+r2,2);
		
		if((dis == 0 and r1 != r2) or (dis != 0 and dis > r) or (dis != 0 and dis<pow(r1-r2,2)))		//1.원 중심은 같은데 반지름이 다를때  2.원이 포함되지 않고 안 만날때 3. 원이 포함되고 안 만날때 	
			printf("0");
		else if(dis != 0 and dis<r and dis>pow(r1-r2,2))												//중심이 다르고,  반지름의 합 보다 중심 사이의 거리가 작으면서, 원의 중심이 다른 원에  포함되지 않을때 
			printf("2");
		else if(dis == 0 and r1 == r2)																	//두 원이 똑같을 때 
			printf("-1");
		else if((dis != 0 and dis == pow(r1-r2,2)) or (dis !=0 and dis == r))							//1.원이 포함되고 한 점에서 만날때 2.원이 포함되지 않고 한 점에서 만날때 
			printf("1");
		printf("\n");
	}
}
