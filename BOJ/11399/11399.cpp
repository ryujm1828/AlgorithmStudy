#include <cstdio> 
#include <algorithm>

using namespace std;
int arr[1010];

int main(){
	int n;
	int sum = 0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			sum += arr[j];
		}
	}
	
	printf("%d",sum);
}
