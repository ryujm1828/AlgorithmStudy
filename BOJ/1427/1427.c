#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char A[100];

void Merge(char *A,int p,int q, int r){				//A수열을 p~q와 q+1~r까지 분할되었다고 가정
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
	
	L[n1] = -1;			
	R[n2] = -1;				
	
	i = 0;
	j = 0;
	
	for(k = p; k <= r; k++){	   //정복	
		if(L[i] >= R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
	}
}

void MergeSort(char *A,int p,int r){
	
	int q;
	if (p < r){
		q = (p+r)/2;
		MergeSort(A,p,q);
		MergeSort(A,q+1,r);
		Merge(A,p,q,r);	
	}
}

int main(){
	int n,i;
	scanf("%s",A);
	MergeSort(A,0,strlen(A)-1);
	printf("%s",A);
}
