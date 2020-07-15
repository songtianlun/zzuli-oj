//输入两个正整数，输出其最大公约数。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,r;

    scanf("%d%d",&n,&m);
    while(r=n%m,r!=0)
    {
        n=m;
        m=r;
    }
    printf("%d\n",m);
    return 0;
}
