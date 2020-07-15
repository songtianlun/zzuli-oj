//输入一个整数n和n个整数，输出这n个整数的最大值。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,number,max;

    scanf("%d",&n);
    i=1;
    scanf("%d",&max);
    for(i=1;i<=n-1;i++)
    {
        scanf("%d",&number);

        if(number>max)
            max=number;
    }
    printf("%d\n",max);
    return 0;
}
