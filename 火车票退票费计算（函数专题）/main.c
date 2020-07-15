#include <stdio.h>
#include <stdlib.h>
double CancelFee(double price);

int main()
{
    double price;
    scanf("%lf",&price);
    printf("%.1f\n",CancelFee(price));
    return 0;
}

double CancelFee(double price)
{
    double m,a;
    m=price*0.05;
    a=m-(int)m;
    if(a<0.25)
        m=m-a;
    else if(a>=0.25&&a<0.75)
        m=m-a+0.5;
    else
        m=m-a+1;
    return m;
}
