#include<stdio.h>
#include<stdlib.h>




struct student{
	
	char name[20];
	char usn[20];
	char branch[15];
	int sem;
	float cgpa;
};


int main(){
	
	struct student s[15];
	int n;
	printf("Enter the number of students: \n");
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		printf("Enter the name:\n");
		scanf("%s",s[i].name);
	
		printf("Enter the usn");
		scanf("%s",s[i].usn);
		printf("Enter the branch");
		scanf("%s",s[i].branch);
		printf("Enter your sem");
		scanf("%d",&s[i].sem);
		printf("Please enter your CGPA");
		scanf("%f",&s[i].cgpa);
	}
	
	
	printf("Displaying the information\n");
	
	for(i=0;i<n;i++){
		
		printf("Name : %s",s[i].name);
		printf("USN : %s",s[i].usn);
		printf("Branch : %s",s[i].branch);
		printf("Sem : %d",s[i].sem);
		printf("CGPA : %f",s[i].cgpa);
		
		
	}	
}





