//给出三个整数，分别表示等差数列的第一项、最后一项和公差，求该数列的和。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, an, d, n ,sn ;

    scanf("%d%d%d" ,&a1, &an, &d) ;
    n = (an - a1) / d + 1 ;
    sn=n*(a1+an)/2;
    printf("%d\n",sn);
    return 0;
}
