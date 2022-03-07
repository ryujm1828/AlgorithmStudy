#include <cstdio>
#include <algorithm>

using namespace std;

int w[103];
int v[103];
int p[103][100004]; //p[고려한 물건 번호][가방에 든 무게] = 최대 가치




int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	
	for(int i=1; i<=n; i++)
		scanf("%d %d",&w[i],&v[i]);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=k; j++){
			if(j >= w[i])
				p[i][j] = max(p[i-1][j],p[i-1][j-w[i]] + v[i]);
			else
				p[i][j] = p[i-1][j];
		}
	}
	
	printf("%d",p[n][k]);
}
