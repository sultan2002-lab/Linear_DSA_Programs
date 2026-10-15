#include<stdio.h>
#define SIZE 10
int stack[SIZE];
static int top=-1;
int push (int data){
	if (top==SIZE-1)return 0;
	stack[++top]=data;
	return 1;
}
int pop (){
	if(top==-1)return -1;
	return stack[top--];
}

