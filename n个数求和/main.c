//输入一个整数n和n个整数，输出这n个整数的和。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,number,sum;

    scanf("%d",&n);
    sum=0;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&number);
        sum+=number;
    }

    printf("%d\n",sum);
    return 0;
}
