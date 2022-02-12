#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node){
	check[node] = true;
	printf("%d ",node);
	for (int i=0; i<a[node].size();i++){
		int next = a[node][i];
		if (check[next] == false)
			dfs(next);
	}
}

void bfs(int node){
	check[node] = true;
	queue<int> q;
	q.push(node);
	while(!q.empty()){
		int x = q.front();
		printf("%d ",x);
		q.pop();
		for(int i=0; i<a[x].size();i++){
			int next = a[x][i];
			if(check[next] == false){
				q.push(next);
				check[next] = true;
			}
		}
	}
}

int main(){
	int n,m,v;
	scanf("%d %d %d",&n,&m,&v);
	int x,y;
	
	for(int i=0; i<m; i++){
		scanf("%d %d",&x,&y);
		a[x].push_back(y);
		a[y].push_back(x);
	}	
	
	for(int i=1; i<=n; i++)				//Quick Sort
		sort(a[i].begin(),a[i].end());
		
	dfs(v);
	
	for(int i=0; i<1002;i++)
		check[i] = false;
	
	printf("\n");
	
	bfs(v);
}
