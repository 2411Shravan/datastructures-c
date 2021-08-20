#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
	int data;
	struct node *link;
};

int append(struct node *root,int num);
void display(struct node *root);
int reversenode(struct node *root);




int main(){
	struct node *root=NULL;
	int n;
	char s[10];
	do{
	printf("Enter the value to append:\n");
	scanf("%d",&n);
	root=append(root,n);
	printf("Do you want to insert another node? Yes/No\n");
	scanf("%s",s);
		
		
		
	}while(strcmp(s,"Yes")==0);
	
	printf("The elements in the linked list are:\n");
	display(root);
	printf("The reversed elements are:\n");
	root=reversenode(root);
	display(root);
	
}


int append(struct node *root, int num){
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=NULL;
	
	if(root==NULL){
		root=temp;
		return;
	}
	else{
		p=root;
		while(p->link!=NULL){
			p=p->link;
		}
		
		p->link=temp;
	}
	return root;
}

void display(struct node *root){
struct node *p;
	p=root;
	if(root==0){
		printf("List is empty\n");
	}
	else{
		
		while(p!=NULL){
			printf("%d \n",p->data);
			p=p->link;
		}
		
	}
	

}

int reversenode(struct node *root){
struct node *pre,*next,*ptr;
	pre=NULL;
	ptr=root;
	
	while(ptr!=NULL){
		next=ptr->link;
		ptr->link=pre;
		pre=ptr;
		ptr=next;
	}
	root = pre;
	return root;
}
