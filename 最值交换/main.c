#include <stdio.h>
#include <stdlib.h>
int MinIndex(int a[], int n);
int MaxIndex(int a[], int n);
void PrintArr(int a[], int n);

int main()
{
    int n,a[10],i,ai,ii,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ai=MaxIndex(a,n);
    ii=MinIndex(a,n);





    PrintArr(a,n);

    return 0;
}

int MinIndex(int a[], int n)
{
    int i,min=100,ii,t;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            ii=i;
        }
    }
    t=a[0];
    a[0]=a[ii];
    a[ii]=t;
    return ii;
}
int MaxIndex(int a[], int n)
{
    int i,max=0,ai,t;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            ai=i;
        }
    }
    t=a[n-1];
    a[n-1]=a[ai];
    a[ai]=t;
    return ai;
}
void PrintArr(int a[], int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        if(j==0)
        printf("%d",a[j]);
        else
            printf(" %d",a[j]);
    }
}
