#include <stdio.h>
#include <stdlib.h>
# define CAP 5
int stack[CAP];
int top=-1;
void push(int);
int isFull(void);
int isEmpty(void);
int pop();
void peek();
void traverse();

int main(){
    int sv;
    int temp;
    while(1){
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Peek \n");
        printf("4. Traverse \n");
        printf("5. Quit \n");
        printf("Enter your choice\n");
        scanf("%d",&sv);
        switch(sv)
    {
        case 1 : printf("Please enter the pushing element\n");
                 scanf("%d",&temp);
                 push(temp);
                 break;

        case 2 : temp=pop();
                 if(temp==0){
                     printf("Stack is empty\n");
                 }
                 else{
                     printf("%d is popped element\n", temp);
                 }
                 break;
        case 3 : peek();
                 break;

        case 4 : traverse();
                 break;

        case 5 : exit(0);
                 break;
        default : printf("Invalid input\n");                
                 
    }
    }
    
}

void push(int ele){
    if(isFull()){
        printf("Stack is overflow\n");
    }
    else{
       top++;
       stack[top] = ele;
       printf("Pushed element is %d \n",ele);
    }
}


int isFull(){
    if(top==CAP-1){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(){
    if(isEmpty())
    {
        return 0;
    }
    else{
        return stack[top--];
   
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void peek(){

 if(isEmpty()){
     printf("Stack is empty \n");
 }
 else{
     printf("%d is the top element \n", stack[top]);
 }
}


void traverse(){
	int i;
    if(isEmpty()){
        printf("Stack is empty \n");
    }
    else{
        printf("stack elements are \n ");
        for(i=0;i<=top;i++){
            printf("%d \n" ,stack[i]);
        }
    }
}
