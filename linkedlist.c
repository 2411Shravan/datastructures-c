#include<stdio.h>
#include<stdlib.h>



struct node{
	int data;
	struct node *link;
};



struct node *createlist(struct node *root);
struct node *addatend(struct node *root,int num);
struct node *addatbegin(struct node *root,int num);
void display(struct node *root);
void count(struct node *root);
struct node *deletenode(struct node *root,int num);
struct node *reversenode(struct node *root);


int main(){
	
	
	struct node *root=NULL;
	
	int sv;
	int num;
	while(1){
		printf("1.Create list \n");
		printf("2.Display \n");
		printf("3.Count \n");
		printf("4.Add at beginning \n");
		printf("5.Add at end \n");
		printf("6.Deletenode \n");
		printf("7.Reverse node\n");
		printf("8.Exit \n");
		
		printf("Choose your choice");
		scanf("%d",&sv);
		
		
		switch(sv){
			case 1 : root=createlist(root);
					 break;
					 
			case 2 : display(root);
					 break;
					 
		    case 3 : count(root);
					 break;
					 
			case 4 : printf("Enter the element to be added");
			         scanf("%d",&num);
					 root=addatbegin(root,num);	
					 break;
					 
					 
					 
			case 5 : printf("Enter the element to be added");
			         scanf("%d",&num);
					 root=addatend(root,num);	
					 break;
					 
					 
					 
			case 6 : printf("Enter the numberb to be deleted");
					 scanf("%d",&num);
					 root=deletenode(root,num);	
					 break;
			
			
			case 7 : root=reversenode(root);
			break;		 
					 
			case 8 : exit(0);
			break;
			
			
			default : printf("Invalid input");
			break;		 	 	 			 
			
		}
	}
}






struct node *createlist(struct node *root){
	
	int n,num;
	int i;
	printf("Enter the number of nodes:");
	scanf("%d",&n);
	
	if(n==0){
		printf("invalid input");
		return root;
	}
	
	else{
		printf("Enter the element to be inserted");
		scanf("%d",&num);
		root=addatbegin(root,num);
		for(i=2;i<=n;i++){
			printf("Enter the element to be inserted");
			scanf("%d",&num);
			root=addatend(root,num);
		}
		return root;
	}
}

struct node *addatbegin(struct node *root,int num){
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=root;
	root=temp;
	return root;	
}

struct node *addatend(struct node *root,int num){
	
	
	struct node *temp,*p;
	
	temp=(struct node*)malloc(sizeof(struct node));
	
	temp->data=num;
	p=root;
	while(p->link!=NULL){
		p=p->link;
	}
	
	
	p->link=temp;
	temp->link=NULL;

	
	
	return root;
}



void display(struct node *root){
	
	struct node *p;
	p=root;
	if(root==0){
		printf("Lit is empty");
	}
	else{
		
		while(p!=NULL){
			printf("%d \n",p->data);
			p=p->link;
		}
		
	}
	
	
}


void count(struct node *root){
	int count=0;
	struct node *p,*temp;
	
	p=root;
	while(p!=NULL){
		count++;
		p=p->link;
	}
	printf("%d is the count", count);
}







struct node *deletenode(struct node *root,int num){
	
	struct node *p,*temp;
	p=root;
	if(root==NULL){
		printf("List is empty");
	}
	
	else if(root->data==num){
		temp=root;
		root=temp->link;
		return root;
	}
	else{
		while(p->link!=NULL){
			if(p->link->data==num){
				temp=p->link;
				p->link=temp->link;
				temp->link=NULL;
				return root;
			}
			p=p->link;
		}
	}
	printf("Not found %d element in this list",num);
	return root;
}



struct node *reversenode(struct node *root){
	
	struct node *pre,*ptr,*next;
	
	
	pre=NULL;
	ptr=root;
	
	while(ptr!=NULL){
		next=ptr->link;
		ptr->link=pre;
		pre=ptr;
		ptr=next;
	}
	
	root=pre;
	return root;
	
}
