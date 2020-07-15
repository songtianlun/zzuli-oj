#include <stdio.h>
#include <stdlib.h>
#define N 200

int main()
{
    int n,i,num;
    int S[N]={0};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%*6d%5d",&num);
        S[i]=6*100000+num;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",S[i]);
    }

    return 0;
}
