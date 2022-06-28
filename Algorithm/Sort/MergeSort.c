#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
/*
5
5
4
3
2
1
*/
int *A;

//A의 p~q 
void Merge(int *A,int p,int q, int r){				//A수열을 p~q와 q+1~r까지 분할되었다고 가정
	//printf("%d~%d/%d~%d 병합\n",p,q,q+1,r);
	int n1 = q - p + 1;				//처음 인덱스 크기 (p~q) 
	int n2 = r-q;					//두번째 인덱스 크기 (q+1~r)
	int i,j,k;
	int *L;				//p~q 까지의 배열을 저장할 배열 L 
	int *R;				//q+1~r 까지의 배열을 저장할 배열 R 
	
	//각각 매모리 할당 
	L = (int *)malloc((n1+2)*sizeof(int));
	R = (int *)malloc((n2+2)*sizeof(int));
	
	for(i = 0; i<n1; i++)
		L[i] = A[p + i];		//p~q까지 수열 복사 
			
	for(i = 0; i<n2; i++)
		R[i] = A[q + i + 1];		//q+1~r까지 수열 복사
	
	L[n1] = MAX+1;				//n1에 max값+1 을 취함
	R[n2] = MAX+1;				//n2에 max값+1 을 취함
	
	i = 0;
	j = 0;
	
	for(k = p; k <= r; k++){		
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
	}
}

void MergeSort(int *A,int p,int r){
	
	int q;
	if (p < r){
		q = (p+r)/2;
		//printf("%d~%d/%d~%d 분할\n",p,q,q+1,r);
		MergeSort(A,p,q);
		MergeSort(A,q+1,r);
		Merge(A,p,q,r);	
	}
}

int main(){
	int n,i;
	scanf("%d",&n);
	A = (int *)malloc((n+1)*sizeof(int));
	for(i = 0; i<n; i++)
		scanf("%d",&A[i]);
	MergeSort(A,0,n-1);
	for(i = 0; i < n; i++)
		printf("%d\n",A[i]);
}
