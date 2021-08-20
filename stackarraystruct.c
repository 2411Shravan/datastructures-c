#include<stdio.h>
#include<stdlib.h>

struct stack{
	int top;
	int a[5];
}stack;
void push();
void pop();
void traverse();

int main(){
	stack.top=-1;
	loop();
	return 0;
}


void loop(){
  int ch;
  printf("1.Push \n");
  printf("2.Pop \n");
  printf("3.Traverse \n");
  printf("Press any other key to exit");
  
  
  scanf("%d",&ch);
  if(ch==1){
  	push();
  	loop();
  }
  else if(ch==2){
  	pop();
  	loop();
  }
  
  else if(ch==3){
  	traverse();
    loop();
  }
  else{
  	return;
  }
}



void push(){
int data;
printf("Enter the data to be inserted inide the stack:");
scanf("%d",&data);
   if(stack.top==4){
 	printf("Stack is full");
 }
 else{
 	stack.top++;
 	stack.a[stack.top]=data; 	
 }
}


void pop(){
	int k;
	if(stack.top==-1){
		printf("Stack is empty");
	}
	else{
		k=stack.a[stack.top];
		stack.top--;
		printf("The popped out element is %d",k);
	}
}

void traverse(){
	int i;
	if(stack.top!=-1){
		for(i=0;i<=stack.top;i++){
			printf("%d",stack.a[i]);
		}
	}
	else{
		printf("stack is empty");
	}
}
