/*假设银行一年整存零取的月息为x，现在某人手头有一笔钱，
他打算在今后5年中，
每年年底取出1000元作为孩子来年的教育金，
到第5年孩子毕业时刚好取完这笔钱，
请编程计算第1年年初时他应存入银行多少钱。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    double x,m;
    scanf("%lf",&x);
    m=0;
    while(i<=5)
    {
        m=m+1000;
        m=m/(1.0+x*12);

        i=i+1;
    }

    printf("%.2lf\n",m);
    return 0;
}
