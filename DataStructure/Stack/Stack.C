#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef int element;

typedef struct{
  element *data;
  int capacity;      
  int top;
} StackType;


void init_stack(StackType *s){		//Create a space to store one data
  s->top = -1;
  s->capacity = 1;
  s->data = (element *)malloc(s->capacity * sizeof(element));
}

int is_empty(StackType *s){
	if (s->top == -1)
		return 1;
	else
		return 0;
}

int is_full(StackType *s){
	if (s -> top == s->capacity * sizeof(element))
		return 1;
	else
		return 0;
}

void push(StackType *s, element item){
	if (is_full(s)){
		s->capacity *= 2;		//Auto Capacity Expend
		s->data = (element *)realloc(s->data, s->capacity * sizeof(element));
	}
	s->data[++(s->top)] = item;
}

element pop(StackType *s){
	if (is_empty(s)){
		printf("Stack is empty");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}

int main(){
	StackType stack;
	init_stack(&stack);
	push(&stack, 1);
	push(&stack, 2);
	printf("%d\n",pop(&stack));
	printf("empty : %d\n",is_empty(&stack));
	printf("%d\n",pop(&stack));
	printf("empty : %d\n",is_empty(&stack));
	free(stack.data);
	return 0;
}       
