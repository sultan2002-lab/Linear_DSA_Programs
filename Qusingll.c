#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*rear=NULL,*front=NULL;
int enque(int data){
	struct node* temp=(struct node*)malloc(sizeof (struct node));
	if(temp==NULL)return -1;
	temp->data=data;
	temp->next=NULL;
	if(rear==NULL && front== NULL){
		front=temp;
		rear=temp;
	}else{
		rear->next=temp;
		rear=rear->next;
	}
	return 1;
}
int deque(){
	struct node* temp;
	temp=front;
	front=temp->next;
	temp->next=NULL;
	int x=temp->data;
	free(temp);
	if(front==NULL)rear=NULL;
	return x;
}
	
