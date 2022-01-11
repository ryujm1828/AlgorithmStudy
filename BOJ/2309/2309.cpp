#include <stdio.h>

int main(){
    int a[9];						//키를 담을 배열 
    int k;							
    int num = 0;					//9명의 키의 합 

    for(int i=0; i<9; i++){			//입력 받기 
    	scanf("%d",&a[i]);
    	num += a[i];
    }
    
	int temp;						//임시 저장소 
    for(int x=0;x<8;x++){			//배열을 오름차순으로 정렬 
    	for(int y=x+1;y<9;y++){
    		if(a[x]>a[y]){
    			temp = a[x];
    			a[x] = a[y];
    			a[y] = temp;
			}
		}
	}
	
    for(int j=0; j<8; j++){
    	k = j+1;
    	for(;k<9;k++){
    		if(num-a[j]-a[k] == 100){
    			for(int z=0; z<9; z++){
    				if(z!=j and z!=k)
    					printf("%d\n",a[z]);
				}
				return 0;
			}
		}
	}
}
