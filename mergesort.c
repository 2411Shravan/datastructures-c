#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* 2. Implement Merge Sort. Determine the time required to sort the elements in an array.
Repeat the experiment for different values of n and plot a graph of the time taken versus n.
This program is written by Shravan .V 4ni19is090 b-section
*/

void delay(int msec)
{
    clock_t goal = msec+clock();
    while(goal > clock());
}
void merge(int a[10000],int b[10000],int c[10000],int p,int q)
{
    int i=0,k=0,j=0;
    while(i<p && j<q)
    {
        if(b[i]<c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
        delay(10);
    }

    while(i<p)
    {
        a[k]=b[i];
        i++;
        k++;
        delay(10);
    }
    while(j<q)
    {
        a[k]=c[j];
        j++;
        k++;
        delay(10);
    }
}

void merge_sort(int a[10000],int n)
{
    int b[10000],c[10000],i,j,p,q;
    if(n>1)
    {
        for(i=0;i<n/2;i++)
        {
            b[i]=a[i];
        }
        p=i;

        for(i=n/2,j=0;i<n;i++,j++)
        {
            c[j]=a[i];
        }
        q=j;

        merge_sort(b,p);
        merge_sort(c,q);
        merge(a,b,c,p,q);
    }
    return;
}

int main()
{
    int a[10000],n,i;
    clock_t start, end;
    double time;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("\nThe elements are:");

    for(i=0;i<n;i++)
    {
        a[i]=(int)rand()%10000;
        printf("%d\t", a[i]);
    }

    start=clock();
    merge_sort(a,n);
    end=clock();

    printf("\nSorted list by Merge sort is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    time = (end-start)/CLK_TCK;

    printf("\nTime taken = %f",time);
}
