#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct node{
	struct node *p1;
	element data;
	struct node *p2;
} node;

typedef struct{
	struct node* front;
	struct node* rear;
} list;

void init_list(list* l){
	l->front = NULL;
	l->rear = NULL;
}

int* get(list* l,int num){	//리스트의 num번째 노드값 
	int error = 0;
	element d = 0;
	int arr[2];
	node* n = l->front;
	for(int i=0; i<num; i++){
		if(n == NULL){
			fprintf(stderr,"There is no node.");
			error = 1;
			break;
		}
		else{
			n = n->p2;
			
		}
	}
	if(n != NULL)
		d = n->data;
	arr[0] = error;
	arr[1] = d;
	
	return arr;
}

void add_front(list* l,int num){		//리스트 맨 앞에 노드 추가
	node* newnode = (node *)malloc(sizeof(node *));
	newnode->data = num;
	newnode->p1 = NULL;
	if(l->front == NULL and l->rear == 0){
		l->front = newnode;
		l->rear = newnode;
	}
	else{
		newnode->p2 = l->front;
		l->front->p1 = newnode;
		l->front = newnode;
	}
}

void add_rear(list* l,int num){				//리스트 맨 뒤에 노드 추가
	node* newnode = (node *)malloc(sizeof(node *));
	newnode->data = num;
	newnode->p2 = NULL;
	if(l->front == NULL and l->rear == 0){
		l->front = newnode;
		l->rear = newnode;
	}
	else{
		newnode->p1 = l->rear;
		l->rear->p2 = newnode;
		l->rear = newnode;
	}
}

void del_front(list* l){			//리스트 맨 앞 노드 삭제
	if(l->front == NULL and l->rear == NULL)
		return;
	node* del = l->front;
	l->front->p2->p1 = NULL;
	l->front = l->front->p2;
	free(del);
}

void del_rear(list* l){
	if(l->front == NULL and l->rear == NULL)
		return;
	node* del = l->rear;
	l->rear->p1->p2 = NULL;
	l->rear = l->rear->p1;
	free(del);
}

void print_list(list* l){			//리스트 출력
	node* n = l->front;
	if(n != NULL){
		printf("%d",n->data);
		if(n->p2 != NULL)
			n = n->p2;
	}
	while(1){
		printf(" -> %d",n->data);
		if(n->p2 == NULL)
			break;
		n = n->p2;
	}
	printf("\n");
}

int get_size(list* l){			//리스트 사이즈 리턴
	if(l->front == NULL)
		return 0;
	int temp = 0;
	node* n = l->front;
	
	while(n != NULL){
		temp += 1;
		n = n->p2;
	}
	
	return temp;
}

int main(){
	list* l = (list *)malloc(sizeof(list));
	
	init_list(l);
	add_front(l,9);
	add_front(l,8);
	add_front(l,7);
	add_front(l,6);
	add_rear(l,10);
	print_list(l);
	
	del_front(l);
	print_list(l);
	del_rear(l);
	print_list(l);
	
	printf("size : %d\n",get_size(l));
	
	if(get(l,4)[0] == 0)
		printf("%d\n",get(l,4)[1]);

	if(get(l,1)[0] == 0)
		printf("\n%d\n",get(l,1)[1]);
	
	free(l);
	return 0;
}
