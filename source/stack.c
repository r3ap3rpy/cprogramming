#include<stdio.h>
int MAXSIZE = 10;
int stack[10];
int top = -1;
int isempty(){
	if(top == -1){
		return 1;
	} else {
		return 0;	
	}
}
int isfull(){
	if(top == MAXSIZE){
		return 1;
	} else {
		return 0;
	}
}
int peek(){
	return stack[top];
}
int pop(){
	int data;
	if(!isempty()){
		data=stack[top];
		top = top -1;
		return data;
	} else {
		printf("The stack is exhausted!\n");
	}
}
int push(int data){
	if(!isfull()){
		top = top + 1;
		stack[top] = data;
	} else {
		printf("The stack is full!\n");
	}
}
int main(){
	push(3);
	push(4);
	push(5);
	printf("The element on top is: %d\n",peek());
	printf("Elements: \n");
	while(!isempty()){
		int data = pop();
		printf("\t%d\n",data);
	}
}
