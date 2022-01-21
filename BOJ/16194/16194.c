#include <stdio.h>
int p[1500];
int m[1500] = {0};

int main(){
	int n;
	scanf("%d",&n);

	for(int i=1; i<=n;i++)
		scanf("%d",&p[i]);
	m[1] = p[1];
	for(int i=1; i<=n;i++){
		for(int j=1 ; j<=i; j++){
			if(m[i] >= m[i-j]+p[j] or m[i] == 0)
				m[i] = m[i-j] + p[j];
			else
				m[i] = m[i];
		}
	}
	printf("%d",m[n]);
}
