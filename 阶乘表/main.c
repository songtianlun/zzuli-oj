//输入一个正整数n(n<=20)，输出1到n之间阶乘表。//
#include <stdio.h>
#include <stdlib.h>

long int main()
{
    double x,n,i;

    scanf("%lf",&n);
    i=1.0;
    x=1.0;
    while(i<=n)
    {
        x=i*x;
        printf("%-4.0f%-20.0f\n",i,x);
        i=i+1;
    }
    return 0;
}
