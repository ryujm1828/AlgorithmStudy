#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

vector<int> a[1001];
bool check[1001];

queue<int> q;

void bfs(int node){
	check[node] = true;
	q.push(node);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i=0; i<a[x].size();i++){
			int next = a[x][i];
			if(check[next] == false)
				q.push(next);
				check[next] = true;
		}
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
			bfs(i);
		}
	}
	printf("%d",res);
}
