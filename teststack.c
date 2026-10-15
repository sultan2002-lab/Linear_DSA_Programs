 #include<stdio.h>
#include"stack.h"
int main(int argc, char* argv[]){
	int option,data;
	while(1){
	printf("1.push\n");
	printf("2.pop\n");
	printf("enter option:");
	scanf("%d",&option);
	switch(option){
		case 1:
		printf("enter data to be pushed\n");
		scanf("%d",&data);
		push (data);
		break;
		case 2:
		data = pop();
		if (data!= -1){
			printf("removed:%d\n",data);
		}
		break;
		case 3:
		printf("exit\n");
		return 0;
		default:
			printf("wrong option\n");

		}
	}
	return 0;
}
