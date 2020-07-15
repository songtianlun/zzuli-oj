/*Description
Z同学为了实现暑假去云南旅游的梦想，决定以后每天只消费1元，每花k元就可以再得到1元，一开始Z同学有M元，问最多可以坚持多少天。
Input
输入2个整数M, k，(2 <= k <= M <= 1000)。
Output
输出一个整数，表示M元可以消费的天数。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,k,d;

    scanf("%d%d",&m,&k);
    for(d=0;m!=0;)
    {
            m=m-1;
            d=d+1;
        if(d%k==0)
            m=m+1;
    }
    printf("%d\n",d);
    return 0;
}
