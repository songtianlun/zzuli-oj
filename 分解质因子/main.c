#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,z,y,i=2;
    scanf("%d",&x);
    y=x;
for(i=2;i<=x;i++)
{
    if(x%i==0)
    {
        printf("%d",i);
        x=x/i;
        i=1;
        if(i+1>x) break;
        printf(" ");
    }
}
    return 0;
}
