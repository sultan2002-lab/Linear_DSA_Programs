#include<stdio.h>
#include"queue.h"
int main(int argc,char* argv[]){
	int data;
	int option;
	while(1){
		printf("1.enque data\n");
		printf("2.deque data\n");
		printf("3.exit\n");
		printf("4.enter option");
		scanf("%d",&option);
	}
	switch(option){
		case 1:
			printf("enter queue data\n");
			scanf("%d",&data);
			enque(data);
			break;
		case 2:
			data=deque();
			if(data!=-1){
			printf("removed:%d",deque());
			}else {
				printf("queue is empty\n");
			}
			break;
		case 3:
			printf("exit\n");
			break;
		default:
			printf("wrong option\n");
	}
	return 0;
}
