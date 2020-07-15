#include <stdio.h>
#include <stdlib.h>
void del(int a[], int n, int i);  /*删除数组a中下标为i的元素*/

void PrintArr(int a[], int n); /*输出数组a的前n个元素*/

int main()
{
    int a[1000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&i);
    del(a,n,i);
    PrintArr(a,n);
    return 0;
}

void del(int a[], int n, int i)
{
    int j;
    for(j=i;j<n-1;j++)
    {
        if(j>i-1)
        {
            a[j]=a[j+1];
        }
    }
}
void PrintArr(int a[], int n)
{
    int j;
    for(j=0;j<n-1;j++)
    {
        if(j==0)
            printf("%d",a[j]);
        else
            printf(" %d",a[j]);
    }
}
