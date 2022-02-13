#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[20010];
int check[20010];

bool dfs(int node,int c){
	check[node] = c;
	for(int i=0; i<a[node].size(); i++){
		int next = a[node][i];
		if(check[next] == 0){
            if (dfs(next, 3-c) == false) 
                return false;
		}
		else if(check[next] == check[node])
			return false;
		
	}
	return true;
}
int main(){
	int k,v,e;
	scanf("%d",&k);
	int x,y;
	while(k--){
		scanf("%d %d",&v,&e);
		
		for(int i=1; i<=v; i++){
			check[i] = 0;
			a[i].clear();
		}
		
		for(int i=0; i<e; i++){
			scanf("%d %d",&x,&y);
			a[x].push_back(y);
			a[y].push_back(x);
		}
	
		bool ok = true;
		for(int i=1; i<=v;i++){
			if(check[i] == 0){
				if (dfs(i,1) == false){
					ok = false;
				}
			}
		}
		if(ok == true)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
