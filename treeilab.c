#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};


struct node *create();
void display();
void postorder(struct node *root);
void inorder(struct node *root);
void preorder(struct node *root);
void Search(struct node* root, int ele);
int main(){
	int ele;
	struct node *root;
	root=NULL;
	root=create();
	display();
	printf("Enter the elemen to be searched:\n");
	scanf("%d",&ele);
	Search(root,ele);
}



struct node *create(){
	int x;
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Entre the data for the node:\n");
	scanf("%d",&x);
	if(x==-1){
		return 0;
	}
	temp->data=x;
	printf("Enter the left child of %d:\n",x);
	temp->left=create();
	printf("Enter the right child of %d:\n",x);
	temp->right=create();
	
	return temp;
}

void display(){
	struct node *root;
	printf("The preorder is:\n");
	preorder(root);
	printf("The postorder is:\n");
	postorder(root);
	printf("The inorder is:\n");
	inorder(root);
}


void preorder(struct node *root){
	
	if(root==0){
		return;
	}
	printf("%d",root->data);
	preorder(root->left);
	printf(root->right);
}

void postorder(struct node *root){
	if(root==0){
		return ;
	}
	
	postorder(root->left);
	postorder(root->right);
	printf("%d",root->data);
}


void inorder(struct node *root){
	
	if(root==0){
		return;
	}
	
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
}

void Search(struct node* root, int ele)
{

    if(root==NULL)
    {
        printf("%d not found",ele);
        return;
    }
    else if(root->data == ele)
    {
        printf("\n%d found",ele);
        return;
    }
    else if(root->data > ele)
    {
        Search(root->left,ele);
    }
    else if(root->data < ele)
    {
        Search(root->right,ele);
    }

    
}
