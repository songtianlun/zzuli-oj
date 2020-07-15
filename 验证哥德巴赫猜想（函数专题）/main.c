#include <stdio.h>
#include <stdlib.h>
int prime(int i);

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=3;i<=n/2;i++)
    {
        if(prime(i)&&prime(n-i))
            printf("%d %d\n",i,n-i);
    }

    return 0;
}

int prime(int i)
{
    int x,y;
    if(i==1)
        return 0;
    y=(int)sqrt(i);
    for(x=2;x<=y;x++)
    {
        if(i%x==0)
            return 0;
    }
    return 1;
}
