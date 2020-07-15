#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,m,x1,i,demo;
    scanf("%d",&x);
    n=0;
    x1=x;
    demo=10;

    while(x1!=0)
    {
        x1=x1/10;
        n=n+1;
    }
     for(i=1;i<n-1;i++)
        {
            demo=demo*10;
        }
    while(n!=0)
    {

        m=x/demo;
        n=n-1;
        demo=demo/10;

        x=x-m*demo*10;
        printf("%d ",m);

    }
    return 0;
}
