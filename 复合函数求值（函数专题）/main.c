#include <stdio.h>
#include <stdlib.h>
double funF(double x);
double funG(double x);

int main()
{
    double x;
    scanf("%lf",&x);
    printf("%.2f\n",funF(x));
    return 0;
}

double funF(double x)
{
    x=fabs(funG(x)-3)+fabs(funG(x)+1);
    return x;
}
double funG(double x)
{
    return pow(x,2)-3*x;
}
