#include <stdio.h>
#include <stdlib.h>
#define N 41

int main()
{
    int n,i;
    long int f[N]={0};
    for(i=3;i<=41;i++)
    {
        f[1]=1,f[2]=2;
        f[i]=f[i-1]+f[i-2];
    }
    while(1)
    {
    scanf("%d",&n);
    if(n!=0)
    {
        printf("%d\n",f[n]);
    }
    else
        return 0;
    }
    return 0;
}
