/*数列的第一项为item，以后各项为前一项的平方根，求数列的前n项的和。
由两个整数item（item<10000）和n(n<1000)组成，item和n的含义如前所述。
输出该数列的和，占一行，要求精度保留2位小数。*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double item,sum;
    i=1;
    scanf("%lf%d",&item,&n);
    sum=item;
    while(i<=(n-1))
    {
    item=pow(item,1/2.0);
     sum=sum+item;
     i=i+1;
    }
    printf("%.2f\n",sum);
    return 0;
}
