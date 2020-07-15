//输入一个整数n，输出数列1-1/3+1/5-……前n项的和。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,op;
    double sum,number;

    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n)
    {
        if(i%2==0)
            op=-1;
        else
            op=1;

        number=op*(1.0/(2*i-1));
        sum += number;
        i=i+1;
    }
    printf("%.2f\n",sum);
    return 0;
}
