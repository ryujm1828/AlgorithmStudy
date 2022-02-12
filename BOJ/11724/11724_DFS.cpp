#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node){
	check[node] = true;
	for(int i=0; i<a[node].size(); i++){
		int next = a[node][i];
		if(check[next] == false)
			dfs(next);
	}
}


int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int x,y;
	for(int i=0; i<m;i++){
		scanf("%d %d",&x,&y);
		a[x].push_back(y);
		a[y].push_back(x);
	}
	int res = 0;
	for(int i=1;i<=n;i++){
		if(check[i] == false){
			res += 1;
			dfs(i);
		}
	}
	printf("%d",res);
}
