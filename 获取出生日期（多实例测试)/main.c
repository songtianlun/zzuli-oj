#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,month,day,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%*6d%4d%2d%2d%*d",&year,&month,&day);
    printf("%4d-%02d-%02d\n",year,month,day);

    }

    return 0;
}
