#include <stdio.h>

int main(){
	int t;
	int res = 0;
	
	scanf("%d",&t);
	
	while(t--){
		char alp[27] = {0,};
		char a[1005] = {0,};
		scanf("%s",a);
		char temp = a[0];
		int x = 0;
		while(a[x] != 0){
			x += 1;
		}
		for(int i=0; i<x+1; i++){
			if(temp != a[i]){
				if(alp[temp-'a'] == 1){
					res -= 1;
					break;
				}
				alp[temp-'a'] = 1;
				temp = a[i];
			}
		}
		res += 1;
	}
	printf("%d",res);
}
