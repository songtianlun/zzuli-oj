//输入一个整数n，输出数列1+1/3+1/5+……前n项的和。 //
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
     double number,sum;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        number=1.0/(2*i-1);
        sum+=number;
    }
    printf("%.2f\n",sum);
    return 0;
}
