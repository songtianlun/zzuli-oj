/*悟空第一天摘下桃子若干，当即吃掉一半，还不过瘾，又多吃一个，
第二天又将剩下的桃子吃掉一半多一个，
以后每天吃掉前一天剩下的一半多一个，
到第n天准备吃的时候只剩下一个桃子。
聪明的你，请帮悟空算一下，他第一天开始吃的时候桃子一共有多少个呢？*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,peach,i;
    scanf("%d",&n);
    i=1;
    peach=1;
    while(i<n)
    {
        peach=(peach+1)*2;
        i=i+1;
    }
    printf("%d\n",peach);
    return 0;
}
