#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 5

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek(){
	return intArray[front];
}
bool isEmpty(){
	return itemCount == 0;
}
bool isFull(){
	return itemCount == MAX;
}
int size(){
	return itemCount;
}
void insert(int data){
	if(!isFull()){
		if(rear == MAX-1){
			rear = -1;
		}
		intArray[++rear] = data;
		itemCount++;
	} else {
		printf("The queue is full!");
	}
}
int removeData(){
	int data = intArray[front++];
	if(front == MAX){
		front = 0;
	}
	itemCount--;
	return data;
}
int main(){
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	if(isFull()){
		printf("The queue is full!\n");
	}
	int num = removeData();
	printf("The element removed: %d\n",num);

}
