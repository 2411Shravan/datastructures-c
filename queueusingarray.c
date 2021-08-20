#define CAP 5
#include <stdio.h>
#include <stdlib.h>


int queue[CAP];

int front =0;
int rear=0;
void insert(int);
void deleteElement();
void traverse();

int main(){

int sv;
int temp;

 while(1){
 	printf("1. Insert \n");
 	printf("2. Delete \n");
 	printf("3. Traverse \n");
 	printf("4. Exit \n");
 	
 	printf("Enter your choice");
 	scanf("%d",&sv);
 	
 	switch(sv){
 		case 1 : printf("Please enter the number to be inserted");
 		         scanf("%d",&temp);
 		         insert(temp);
 		         break;
 		         
 		case 2 : deleteElement();
		         break;
				 
	    case 3 : traverse();
		         break;
				 
		case 4 : exit(0);
		         break;
		         
		         
		default : printf("Invalid input");		 		 			          
	 }
 }




}



void insert(int elem)
{
	if(CAP==rear){
		printf("Queue is full!");
		
	}
	
	else{
		queue[rear]= elem;
		rear++;
	}
}


void deleteElement(){
	int j;
	if(front==rear){
		printf("Queue is empty");
	}
	else
	{
		printf("%d is deleted", queue[front]);
		front++;
	}
	
	
}

void traverse(){
	int i;
	if(front==rear){
		printf("Queue is empty");
	}
	
	else{
		for(i=front;i<rear;i++){
			printf("%d",queue[i]);
		}
	}
}
