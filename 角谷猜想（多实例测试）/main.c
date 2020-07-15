#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;n!=1;i++)
        {
        if(n%2==0)
            n/=2;
        else
            n=n*3+1;
        }
        printf("%d\n",i-1);
    }

    return 0;
}
