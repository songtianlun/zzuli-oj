#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,n,a,b;
    long int  multiply=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        multiply=1;
        scanf("%d%d",&a,&b);
        for(t=1;t<=b;t++)
        {
            multiply*=a;
            for(;multiply>=1000;)
                multiply%=1000;
        }
        printf("%ld\n",multiply);
    }

    return 0;
}
