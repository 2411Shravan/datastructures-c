#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};


struct node *front;
struct node *rear;

void push();
void pop();
void traverse();
int main(){
	int ch;
	while(1){
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.traverse\n");
		printf("4.exit\n");
		printf("Enter your choice :\n");
		scanf("%d",&ch);
		switch(ch){
			case 1 : push();
			         break;
			         
			case 2 : pop();
			         break;
			         
			case 3 : traverse();
			         break;
			         
			case 4 : exit(0);
			         break;         
			         
			default : printf("Invalid input\n");
			          break;         
		}
	}
}


void push(){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	
	
	int num;
	printf("Please enter the data to be inserted inside node:");
	scanf("%d",&num);
	temp->data=num;
	if(front==NULL){
		
			front = temp;  
            rear = temp;   
            front -> link = NULL;  
            rear -> link = NULL;  
	}
	else{
	
	 		rear -> link = temp;  
            rear = temp;  
            rear->link = NULL; 
	}
}


void pop(){
	if(front==NULL){
		printf("Underflow");
	}
	else{
			struct node *temp;
	temp=front;
	printf("The deleted element is %d",temp->data);
	front=front->link;
	temp->link=NULL;
	free(temp);
	}

}

void traverse(){
	struct node *temp;
	temp=front;
	if(front==NULL){
		printf("Underflow");
	}
	else{
		while(temp!=NULL){
			printf("%d",temp->data);
			
			temp=temp->link;
		}
	}
}
