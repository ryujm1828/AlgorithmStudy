#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
vector <int> deck(21000,-1);
	
int fro = 10100;
int bac = 10100;
int main(){

	int re;
	scanf("%d",&re);
	char com[15];
	int num;
	while(re--){
		scanf("%s",com);
		if(!strcmp(com,"push_back")){
			scanf("%d",&num);
			if(bac == fro){
				deck[bac] = num;
				bac ++;
				fro --;
			}
			else{
				deck[bac] = num;
				bac ++;
			}
		}
		else if(!strcmp(com,"push_front")){
			scanf("%d",&num);
			if(bac == fro){
				deck[fro] = num;
				bac ++;
				fro --;
			}
			else{
				deck[fro] = num;
				fro --;				
			}
		}
		else if(!strcmp(com,"pop_front")){
			if(fro == bac)
				printf("-1\n");
			else{
				printf("%d\n",deck[fro+1]);
				fro ++;
				deck[fro] = -1;
			}
		}
		else if(!strcmp(com,"pop_back")){
			if(fro == bac)
				printf("-1\n");
			else{
				printf("%d\n",deck[bac-1]);
				bac --;
				deck[bac] = -1;
			}
		}
		else if(!strcmp(com,"size")){
			if(bac == fro)
				printf("0\n");
			else
				printf("%d\n",bac-fro-1);				
		}

		else if(!strcmp(com,"empty")){
			if(deck[fro+1] == -1)
				printf("1\n");
			else
				printf("0\n");
		}
		else if(!strcmp(com,"front"))
			printf("%d\n",deck[fro+1]);
		else if(!strcmp(com,"back"))
			printf("%d\n",deck[bac-1]);
	}
}
//완전 문제 풀기용 쓰레기 코드니까 참고하지마세요
