#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[2000];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int b[2000];
	b[0] = 0;
	b[1] = a[1];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(b[i]>=b[i-j]+a[j])
				b[i] = b[i];
			else
				b[i] = b[i-j]+a[j];
		}
	}
	printf("%d",b[n]);
	return 0;
}
