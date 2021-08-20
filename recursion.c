#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int main()
{
	int n,rs;
	printf("Please enter the number of which factorial is expected :  ");
	scanf("%d",&n);
	rs = factorial(n);
	printf("%d is the result", rs);
	

	
	return 0;
}



int factorial (int n){
	int res;
	if(n==0){
		res= 1;
	}
	else{
		res=(n*factorial(n-1));
	}
	
	
	return res;
	
	
	

}
