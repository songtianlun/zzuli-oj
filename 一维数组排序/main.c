#include <stdio.h>
#include <stdlib.h>
void sort(int a[], int n);
void PrintArr(int a[], int n);

int main()
{
    int i,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    PrintArr(a,n);
    return 0;
}

void sort(int a[], int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
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
