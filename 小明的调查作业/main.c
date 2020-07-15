#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
    int i,n,t,a=0,j;
    int num[N]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&t);
            num[t]=num[t]+1;
        }
        for(i=0;i<N;i++)
    {
        if(num[i]>0)
        a=a+1;
    }
    printf("%d\n",a);
    j=1;
    for(i=0;i<N;i++)
    {
        if(num[i]>0)
        {
            if(j==1)
            {
        printf("%d",i);
        j=j+1;
            }
            else
                printf(" %d",i);
        }
    }
    return 0;
}
