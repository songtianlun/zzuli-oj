//给定两个整数m和n，求出m~n这段连续的整数中所有偶数的平方和以及所有奇数的立方和//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,x,y;
    x=0;
    y=0;
    scanf("%d%d",&m,&n);
    while(n>=m)
    {
        if(m%2==0)
        x=x+m*m;
        else
        y=y+m*m*m;
        m=m+1;
    }
    printf("%d %d\n",x,y);
    return 0;
}
