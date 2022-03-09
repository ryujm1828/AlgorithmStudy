#include <cstdio>
#include <algorithm>

using namespace std;

int house[1003][3]; //0:R 1:G 2:B
int color[1003][3]; //color[i][j] : j색깔을 마지막으로 i번쨰 까지 칠한 것중 최소 


int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		scanf("%d %d %d",&house[i][0],&house[i][1],&house[i][2]);
		
	for(int i=0; i<3; i++)
		color[1][i] = house[1][i];
			
	for(int i=2; i<=n; i++){
		color[i][0] = min(color[i-1][1],color[i-1][2]) + house[i][0];
		color[i][1] = min(color[i-1][0],color[i-1][2]) + house[i][1];
		color[i][2] = min(color[i-1][0],color[i-1][1]) + house[i][2];
	}
	
	printf("%d",min(min(color[n][1],color[n][2]),color[n][0]));
}
