/*输入第一行是一个整数T，表示有T组测试实例；
每组输入包括两行：
第一行一个数n表示接下来会有n个整数；
第二行空格隔开的n个数。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,I,i,n,num;
    int sum[100]={0};
    scanf("%d",&t);
    for(I=1;I<=t;I++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&num);
            sum[I]=sum[I]+num;
        }
    }
    for(I=1;I<=t;I++)
        printf("%d\n",sum[I]);
    return 0;
}
