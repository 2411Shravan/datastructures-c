#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct node{
	struct node *pre;
	struct node *next;
	int data;
};
void push();
void traverse();
void deletefrombeginning();
void deletefromend();
void addatbeginning();
void addatend();
void traverse();


struct node *head;
struct node *tail;


int main(){
	
	int ch;
	while(1){
		printf("1.Push the element\n");
		printf("2.Delete the element from beginning\n");
		printf("3.Delete the element from end\n");
		printf("4.Add at beginning\n");
		printf("5.Add at end\n");
		printf("6.Display\n");
		printf("7.Exit");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : push();
			break;
			
			case 2 : deletefrombeginning();
			break;
			
			
			case 3 : deletefromend();
			break;
			
			
			case 4 : addatbeginning();
			break;
			
			
			case 5 : addatend();
			break;
			
			case 6 : traverse();
			break;
			
			case 7 : exit(0);
			break;
			
			
			default : printf("Invalid input");
			break;
		}
	}
}


void push(){
	
	int sv;
	
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be inserted:\n");
	scanf("%d",&sv);
	newnode->pre=NULL;
	newnode->data=sv;
	newnode->next=NULL;
	
	
	if(head==NULL){
		head=newnode;
		tail=newnode;
	}
	
	else{
		tail->next=newnode;
		newnode->pre=head;
		tail=newnode;
		
	}
}






void addatbeginning(){
	int sv;
	
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be inserted:\n");
	scanf("%d",&sv);
	
	newnode->data=sv;
	newnode->pre=NULL;
	head->pre=newnode;
	newnode->next=head;
	head=newnode;
	
}


void addatend(){
	int sv;
	
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be inserted:\n");
	scanf("%d",&sv);
	
	newnode->data=sv;
	newnode->next=NULL;
	tail->next=newnode;
	newnode->pre=tail;
	tail=newnode;	
}




void deletefrombeginning(){
	if(head==NULL){
		printf("List is empty");
	}
	else{
			struct node *temp;
	temp=head;
	head=head->next;
	temp->next=NULL;
	
	head->pre=NULL;
	}

	
}


void deletefromend(){
	if(head==NULL){
		printf("List is empty");
	}
	else{
		struct node *temp;
	temp=tail;
	tail=tail->pre;
	temp->pre=NULL;
	tail->next=NULL;
	free(temp);
	}
	
	
	
}


void traverse(){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
}




















