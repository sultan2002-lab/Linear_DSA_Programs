#include<stdio.h>
#include<stdlib.h>
void creatlist();
void traverse();
void insertnode();
void deletenode();
void reverselist();
struct node{
	int data;
	struct node* next;
}*head=NULL;
int main(){
	int option;
	while(1){
		printf("1.to create linked list\n");
		printf("2.to traverse linked list\n");
		printf("3.to insert node\n");
		printf("4.to delete node\n");
		printf("5.to reverselist\n");
		printf("6.exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				creatlist();
				break;
			 case 2:
                                traverse();
                                break;
			 case 3:
                                insertnode();
                                break;
			 case 4:
                                deletenode();
                                break;
			 case 5:
				reverselist();
				break;			
			 case 6:
                                exit(0);
			default:
				printf("wrong option\n");
		}

	}
	return 0;
}
	void creatlist(){
			int n;
			printf("enter num of nodes to be created\n");
			scanf("%d",&n);
			struct node* temp,*p;
			for(int i=1;i<=n;i++){
				temp=(struct node*)malloc(sizeof(struct node));
				temp->next=NULL;
				printf("enter data\n");
				scanf("%d",&temp->data);
				if(i==1){
					head=temp;
				}else{
					p=head;
					while(p->next!=NULL)p=p->next;
					p->next=temp;
				}
			}
	}


	void traverse(){
		struct node* temp=head;
		while(temp!=NULL){
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
void insertnode(){
	int pos,data;
	printf("enter position& data\n");
	scanf("%d%d",&pos,&data);
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	temp->data=data;
	if(pos==1){
		temp->next=head;
		head=temp;
	}else{
		int count=1;
		struct node* p=head;
		while(p->next!=NULL && count>pos-1){
			p=p->next;
			count++;
		}
		if(count==pos-1){
			temp->next=p->next;
			p->next=temp;
		}else{
			printf("position does not exist\n");
		}
	}
}
void deletenode(){
	int pos;
	printf("enter position\n");
	scanf("%d",&pos);
	struct node* p,*q;
	p=head;
	q=head;
	if(p==NULL){
		printf("list is empty\n");
		return ;
	}
	if(pos==1){
		head=p->next;
		p->next=NULL;
		free(p);
	}else{
		int count=1;
		while(p->next!=NULL && count<pos){
			q=p;
			p=p->next;
			count++;
		}
		q->next=p->next;
		p->next=NULL;
		free(p);
	}
			
}

	void reverselist(){
		struct node* p=NULL,*q=NULL,*temp=head;
		while(temp!=NULL){
			q=temp->next;
			temp->next=p;
			p=temp;
			temp=q;
		}
		head =p;
	}
