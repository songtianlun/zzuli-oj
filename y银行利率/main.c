/*设银行1年期定期存款年利率为2.25%，存款本金为deposit元，试编程计算并输出n年后的本利之和。
输入一个正整数和一个实数，分别代表存款年数和存款本金*/

#include <math.h>

int main()
{
    double rate = 0.0225;
    double deposit,capital;
    int n,i;
    i=1;

    scanf("%d" ,&n);
    scanf("%lf" ,&deposit);


    while(i<=n)
    {
        capital = deposit*rate;
        deposit = deposit+capital;
        i=i+1;

    }
    printf("%lf\n",deposit);

    return 0;
}
