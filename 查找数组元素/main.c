#include <stdio.h>
#include <stdlib.h>
void del(int a[], int n, int x);  /*ɾ������a���±�Ϊx��Ԫ��*/
void PrintArr(int a[], int n); /*�������a��ǰn��Ԫ��*/
int find(int a[], int n, int x);

int main()
{
    int n,i,a[1000],answer=-1,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    answer=find(a,n,x);
    if(answer==-1)
        printf("Not Found");
        else
    {
        del(a,n,answer);
        PrintArr(a,n);
    }
    return 0;
}

int find(int a[], int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;
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
            printf("%4d",a[j]);
    }
}
