#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> num(5);
	
	for(int i =0; i<5; i++)
		scanf("%d",&num[i]);
	int temp = 0;
	int a = 1;
	while(1){
		for(int i =0; i<5; i++){
			if(a%num[i] == 0)
				temp += 1;
		}
		
		if(temp>=3){
			printf("%d",a);
			return 0;
		}
		
		a++;
		temp = 0;
		
	}
}
