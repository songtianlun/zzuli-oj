/*  ����5������a, b, c, d �� e����������ı���������������������������һ�������Ϊa, b, c �ĳ����壬ÿһ�����붼�ǰ���ȥ�ģ�������ȥ�����Ϊ d���]����ȥ�ı߿��� e��*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e ,C, S ;
    int x, y, z;
    scanf("%d/n",&a);
    scanf("%d/n",&b);
    scanf("%d/n",&c);
    scanf("%d/n",&d);
    scanf("%d/n",&e);

    x=a-2*e;
    y=b-2*e;
    z=c-2*e;
    C = (a*b+a*c+b*c)*2+(x*d+y*d+z*d)*8;
    S = a*b*c-(x*z*d*4+y*z*d*2);
    printf("%d %d\n",C,S);
    return 0;
}
