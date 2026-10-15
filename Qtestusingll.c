#include<stdio.h>
#include<stdlib.h>
#include"Qusingll.h"
int main(int argc,char* argv[]){
	int data;
	int option;
	while(1){
		printf("1.enque data\n");
		printf("2.deque data\n");
		printf("3.exit\n");
		scanf("%d",&data);
	switch(option){
		case 1:
			printf("enter enque data\n");
			scanf("%d",&data);
			data=enque(data);
			if(data==-1){
				printf("unable to enque data\n");
			}else{
				printf("data succesfully entered\n");
			}
			
			break;
		case 2:
			data=deque();
			if(data==-1){
				printf("queue is empty\n");
			}else{
				printf("deque data =%d\n",data);
			}
			break;

		case 3:
			exit(0);
		default:
			printf("wrong option\n");
			break;
		}
	}return 0;
}


