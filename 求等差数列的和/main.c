//���������������ֱ��ʾ�Ȳ����еĵ�һ����һ��͹��������еĺ͡�//
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
