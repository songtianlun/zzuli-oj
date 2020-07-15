//求1-2/3+3/5-4/7+5/9-6/11+...的前n项和，结果保留3位小数。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,op;
    double number,sum;

    scanf("%d",&n);
    sum=0;
    i=1;

    while(i<=n)
    {
        if(i%2==0)
            op=-1;
        else
            op=1;

        number=op*i/(2.0*i-1);
        sum+=number;
        i=i+1;
    }
    printf("%.3f\n",sum);
    return 0;
}
