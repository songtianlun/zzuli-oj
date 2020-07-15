//编程计算并输出一元二次方程ax^2+bx+c=0的两个实根，其中a、b、c的值由用户从键盘输入，假设a、b、c的值能保证方程有两个不相等的实根（即b^2-4ac>0）。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,x1,x2;

    scanf("%lf%lf%lf",&a,&b,&c);
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    if(x1>x2)
    {
        printf("%7.2f%7.2f",x1,x2);
    }
    else
    {
        printf("%7.2f%7.2f",x2,x1);
    }
    return 0;
}
