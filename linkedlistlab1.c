#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	char usn[50],name[50],branch[50],ph[15];
	int sem;
	struct node *link;
};

typedef struct node *NODE;

int count=0;
struct node * root=NULL;
struct node*insert();
void deleten();
void Insert();
void stack();
void queue();
void display();
struct node *create();
struct node *insert3();
struct node *insert2();
struct node *create2();




int main(){
	int ch,n;
	int i;
	while(1){
		
		int ch;
		printf("1.Create\n");
		printf("2.Display\n");
		printf("3.Insert\n");
		printf("4.Delete\n");
		printf("5.Stack\n");
		printf("6.Queue\n");
		printf("7.Exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch){
			case 1 : printf("How many student data you want to create\n");
					 scanf("%d",&n);
					for(i=0;i<n;i++){
							root=insert();
								}
			break;
			
			
			case 2 : display();
			break;
			
			case 3 : Insert();
			break;
			
			case 4 : deleten();
			break;
			
			case 5 : stack();
			break;
			
			case 6 : queue();
			break;
			
			
			case 7 : exit(0);
			break;
			
			
			default: printf("Invalid input\n");
			break;
		}
		
	}
}


struct node *insert(){
	struct node *p,*temp;
	temp=create();
	if(root==NULL){
		return temp;
	}
    p=root;
    while(p->link!=NULL){
    	p=p->link;
	}
	
	p->link=temp;
	
	return root;
}


void Insert(){
	int ch;
	while(1){
		printf("1.Insert at begin:\n");
		printf("2Insert at end:\n");
		printf("3.Exit");
		scanf("%d",&ch);
		switch(ch){
			case 1 : root=insert2();
			display();
			break;
			
			case 2 : root=insert3();
			display();
			break;
			
			case 3 : exit(0);
			break;
			
			default:printf("Invalid input");
			break;
		}
	}
}
struct node *insert2(){
	struct node *temp;
	temp=create2();
	if(root==NULL){
		return temp;
	}
	
	temp->link=root;
	return temp;
}
struct node *insert3()
{
    struct node *cur,*temp;
    temp = create2();

    if(root == NULL)
    {
      return temp;
    }
    cur = root;
    while(cur->link !=NULL)
    {
         cur = cur->link;
    }
    cur->link = temp;
    return root;
}

struct node *create2()
{
    struct node *snode;
    snode = (struct node*)malloc(sizeof(struct node));

    if(snode == NULL)
    {
        printf("\nMemory is not available");
        exit(1);
    }
    printf("Enter USN\n");
    scanf("%s",snode->usn);
    printf("Enter Name\n");
    scanf("%s",snode->name);
    printf("Enter Branch\n");
    scanf("%s",snode->branch);
    printf("Enter Sem\n");
    scanf("%d",&snode->sem);
    printf("Enter Ph.No");
    scanf("%s",snode->ph);
    
    snode->link=NULL;
    count++;
    return snode;
}
void deleten(){
}

void stack(){
}

void queue(){
}


struct node *create(){
	
	struct node *newn;
	newn=(struct node *)malloc(sizeof(struct node));
	printf("Enter USN:\n");
	scanf("%s",newn->usn);
	printf("Enter name:\n");
	scanf("%s",newn->name);
	printf("Enter branch:\n");
	scanf("%s",newn->branch);
	printf("Enter sem:\n");
	scanf("%d",&newn->sem);
	printf("Enter phone number:\n");
	scanf("%s",newn->ph);
	newn->link=NULL;
	count++;
	return newn;
	
}

void display(){
	
   struct node *cur;
    


    if(root == NULL)
    {

        printf("\nNo Contents to display in SLL \n");
        return;
    }
    printf("STUDENT Details\n");
    cur = root;
    printf("USN NAME BRANCH SEM Ph.NO.\n");
    while(cur!=0)
    {
       printf("%s %s %s %d ",cur->usn, cur->name,cur->branch, cur->sem);
       printf("%s\n",cur->ph);
       cur = cur->link;
       
    }
    printf("The no.of nodes in list is %d",count);
	
	
}
