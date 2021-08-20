#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int data;
	struct node *pre;
	struct node *next;
};
int display(struct node *head);
struct node *push(struct node *head, int data);

int main(){
	struct node *head=NULL;
	int data,lar;
	char s[10];
 while(1)
    {
        printf("Enter node value:");
        scanf("%d",&data);
        head = push(head,data);
        printf("\nDo you want to enter more?(Y or N)\n");
        scanf("%s",s);
        if(s[0]=='n')
        {
            break;
        }
    }
    printf("Linked list is ");
    lar = display(head);
    printf("\nLargerst node is %d",lar);
}


struct node *push(struct node *head, int data){
	if(head==NULL){
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=data;
		temp->next=NULL;
		temp->pre=NULL;
		head=temp;
		return head;
		
	}
	
	else{
		struct node *nn;
		nn=(struct node *)malloc(sizeof(struct node));
		nn->data=data;
		nn->next=NULL;
		nn->pre=NULL;
		struct node *t;
		t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=nn;
		nn->pre=t;
		return head;
	}
}


int display(struct node *head){
	int l;
	l=head->data;
	struct node *p;
	p=head;
	while(p!=NULL){
		printf("%d",p->data);
		if(p->data > l){
			l=p->data;
		}
		p=p->next;
	}
	
	return l;
	
	
}
