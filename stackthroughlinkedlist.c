#include<stdio.h>
#include<stdlib.h>



struct node{
 int data;
 struct node *link;

};


struct node *push(struct node *top, int act);
struct node *pop(struct node *top);
void display(struct node *top);

int main(){
  struct node *top=NULL;
   int sv;
   int act;

  printf("Stack operations:");
  while(1){
    printf("1.Push \n");
    printf("2.Pop \n");
    printf("3.Display \n");
    printf("4.Exit \n");

    printf("Please enter your option:");
    scanf("%d",&sv);
    switch(sv){

        case 1 : printf("Please enter the number : ");
                 scanf("%d",&act);
                 top = push(top, act);
                 break;



        case 2 : top = pop(top);
                        break;


        case 3 : display(top);
                  break;



         case 4 : exit(0);
                  break;



         default : printf("Invalid input");





    }





  }



}



struct node *push(struct node *top, int act){

 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));



  temp->data=act;
  temp->link=top;
  top=temp;
    
    
   return top;

}


struct node *pop(struct node *top){

struct node *temp;


if(top==NULL){

    printf("List is empty");

}

else{

     temp=top;
     printf("%d is popped",temp->data);
     top=top->link;
     temp->link=NULL;

}


return top;


}


void display(struct node *top){


    struct node *temp;

  temp=top;

  if(top==NULL){

    printf("Stack is empty");

  }


       
       else{

       while(temp!=NULL){



      printf("%d \n",temp->data);
     temp=temp->link;



  }

  }







}
