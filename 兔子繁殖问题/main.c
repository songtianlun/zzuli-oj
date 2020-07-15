/*这是一个有趣的古典数学问题，
著名意大利数学家Fibonacci曾提出一个问题：
有一对小兔子，从出生后第3个月起每个月都生一对兔子。
小兔子长到第3个月后每个月又生一对兔子。
按此规律，假设没有兔子死亡，第一个月有一对刚出生的小兔子，
问第n个月有多少对兔子？*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month,rabit,i,r1,r2,r3;
    i=1;
    r1=1;
    r2=0;
    r3=0;
    scanf("%d",&month);

    while(i<month)
    {
        r3=r2+r3;
        r2=r1;
        r1=r3;
        i=i+1;
    }
    printf("%d\n",r1+r2+r3);
    return 0;
}
