#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    int i,j,n,num[N][N],sum,x,y;
    int k=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&num[i][j]);
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=num[i][j];
        }
        if(sum%2==1)
        {
            k++;
            x=i;
        }
    }
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=num[i][j];
        }
        if(sum%2==1)
        {
            t++;
            y=j;
        }
    }
    if(k==1&&t==1)
        printf("Change bit(%d,%d)",x,y);
    else if(k==0&&t==0)
        printf("OK");
    else
        printf("Corrupt");
    return 0;
}
