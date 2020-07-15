#include <stdio.h>
#include <stdlib.h>
int PrintLine(int i,int n);

int main()
{
    int i,j,n,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        num=PrintLine(i,n);
    }
    for(;i<=2*n-1;i++)
    {
        for(j=i-n;j>0;j--)
        {
            printf(" ");
        }
    num=PrintLine(i,n);
    }
    return 0;
}

int PrintLine(int i,int n)
{
    int j;
    if(i<=n)
    {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    for(;j<=i*2-1;j++)
    {
        printf("%d",2*i-j);
    }
    printf("\n");
    }
    else
    {
        for(j=1;j<=(2*n-i-1);j++)
    {
        printf("%d",j);
    }
    for(;j>0;j--)
    {
        printf("%d",j);
    }
    printf("\n");
    }

}
