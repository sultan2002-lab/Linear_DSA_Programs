#include<stdio.h>
#include<stdlib.h>
#include"lstack.h"
int main(int argc,char* argv[]){
	int option,data;
	while(1){
		printf("1.push data\n");
		printf("2.pop data\n");
		printf("3.enter exit\n");
		scanf("%d",&option);
	switch(option){
		case 1:
			printf("enter data to be pushed\n");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
			data=pop();
			if (data!= -1){
			printf("removed:%d\n",data);
			}else{
				printf("stack is empty\n");
			}
			break;

		case 3:
			printf("exit\n");
			return 0;
		default:
       			printf("wrong otion\n");

		}
	}
	return 0;
}	
