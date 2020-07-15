#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
    int i,n,layer[N],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&layer[i]);
    }
    sum=sum+6*layer[0];
    for(i=1;i<n;i++)
    {
        if((layer[i]-layer[i-1])>0)
            sum=sum+5+(layer[i]-layer[i-1])*6;
        else if((layer[i]-layer[i-1])<0)
            sum=sum+5+(layer[i-1]-layer[i])*4;
        else
            sum=sum+5;
    }
    printf("%d\n",sum+5);
    return 0;
}
