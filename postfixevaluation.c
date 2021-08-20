#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int stack[50];
int top=-1;
int n;


void push(int num){
	
	stack[++top]=num;
}

int pop(){
	return stack[top--];
	
}

int main(){
char ch[50];
char *e;
int x1,x2,x3;
printf("Please enter the string:\n");
scanf("%s",ch);
e=ch;
while(e!='\0'){
	if(isalnum(*e)){
		n=(*e)-48;
		push(n);
	}
	else{
		x1=pop();
		x2=pop();
		if(*e=='+'){
			x3=x2+x1;
		}
		else if(*e=='-'){
			x3=x2-x1;
		}
		else if(*e=='*'){
			x3=x2*x1;
		}
		else if(*e=='/'){
			x3=x2/x1;
		}
		push(x3);
	}
	*e++;
}	


printf("%d is the final result",pop());
}
