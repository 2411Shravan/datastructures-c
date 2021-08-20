#include<stdio.h>
#include<stdlib.h>

int Fact(int);

int main()
{
	int n,res;
	printf("Please enter the number of which factorial is expected :  ");
	scanf("%d ",&n);
	res = Fact(n);
	printf("%d is the result", res);
	return 0;

	
	
}



int Fact(int nef){

	if(nef==0){
		return 1;
	}
	else{
		return(nef*Fact(nef-1));
	}
	
	
	
	

}