#include<stdio.h>
#include<stdlib.h>
void sum(int a[20][20],int rows,int columns);
int main(){

	int i,j,rows,columns;
	int a[20][20];
    printf("Please enter the number of rows:");
    scanf("%d",&rows);
    printf("PLease enter the number of columns:");
    scanf("%d",&columns);
    
    for(i=0;i<rows;i++){
    	for(j=0;j<columns;j++){
    		scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("Displaying the matrix:");
	for(i=0;i<rows;i++){
    	for(j=0;j<columns;j++){
    		printf("%d",a[i][j]);
		}
		printf("\n");
	}
	sum(a,rows,columns);
}


void sum(int a[20][20],int rows,int columns){
	
	
	int s;
	int i;
	int j;
	s=0;
		for(i=0;i<rows;i++){
    	for(j=0;j<columns;j++){
    	s=s+a[i][j];
		}
	
	}
	
	printf("The sum is %d",s);
}
