#include <cstdio>
#include <algorithm>

using namespace std;

char arr[53][53];

int main(){
	for(int i=0; i<=52; i++){
		for(int j=0; j<=52; j++)
			arr[i][j] = 'a';
	}
	
	int n,m;
	int size = 2;
	int res = 1;
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<n ;i++)
		scanf("%s",arr[i]);
	
	for(; size<=min(n,m); size++){
		for(int i=0; i<=m-size; i++){
			for(int j=0; j<=n-size; j++){
				if(arr[j][i] == arr[j+size-1][i] and arr[j][i] == arr[j][i+size-1] and arr[j][i] == arr[j+size-1][i+size-1] and arr[j][i] != 'a'){
					res = size;
					break;
				}
			}
		}
	}
	printf("%d",res*res);
}
