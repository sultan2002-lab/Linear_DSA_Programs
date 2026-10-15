#include<stdio.h>
#define SIZE 10
static int rear=-1;
static int front=-1;
int enqueue(int data){
	if(rear==SIZE-1)return 0;
	enqueue[++rear]=data;
	if(rear==0)front=0;
	return 1;
}
int dequeue(int data){
	if(front==-1 && rear ==-1)return -1;
	int x=dequeue[++front];
	if(front>rear){
		front=-1;
		rear=-1;
	}
	return x;
}
