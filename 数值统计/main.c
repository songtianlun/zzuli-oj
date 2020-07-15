//统计给定的n个数中，负数、零和正数的个数。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,number,a,b,c;
    scanf("%d",&n);
    i=1;
    a=0;
    b=0;
    c=0;
    while(i<=n)
    {
        scanf("%d",&number);
        if(number<0)
        a=a+1;
        else if(number==0)
        b=b+1;
        else
        c=c+1;

        i=i+1;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
