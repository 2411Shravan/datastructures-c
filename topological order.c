//Shravan .V usn- 4NI19IS090 B-section
//Topological order
#include<stdio.h>
void main()
{
int n, count =0, am[10][10], indegree[10], flag[10], i, j, k;
printf("This program is by Shravan .V b-section\n");
printf("Enter number of vertices:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
indegree[i]=0; flag[i]=0;
}

printf("\nEnter adjacency matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&am[i][j]);

printf("\nMatrix is :\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)

printf("%d\t",am[i][j]);
printf("\n");

}

for(i=0;i<n;i++)
for(j=0;j<n;j++)
indegree[i] += am[j][i];

printf("\nThe topological ordering is:\n");
while(count<n)
{
for(k=0;k<n;k++)
if((indegree[k]==0) && (flag[k]==0))
{
printf("%d\n",k);
flag[k]=1;
count++;
for(i=0;i<n;i++)
if(am[k][i]==1)
indegree[i]--;

}
}

}



