#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,num,multiply=1;

    while(scanf("%d",&n)!=EOF)
    {
        multiply=1;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num%2!=0)
            multiply=multiply*num;
    }
    printf("%d\n",multiply);
    }
    return 0;
}
