#include <stdio.h>
#include <stdlib.h>

int main()
{
    double usdollar, rmb;

    scanf("%lf",&usdollar);
    rmb = usdollar * 6.5573;
    printf("%.2f\n",rmb);
    return 0;
}
