//��̼��㲢���һԪ���η���ax^2+bx+c=0������ʵ��������a��b��c��ֵ���û��Ӽ������룬����a��b��c��ֵ�ܱ�֤��������������ȵ�ʵ������b^2-4ac>0����//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,x1,x2;

    scanf("%lf%lf%lf",&a,&b,&c);
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    if(x1>x2)
    {
        printf("%7.2f%7.2f",x1,x2);
    }
    else
    {
        printf("%7.2f%7.2f",x2,x1);
    }
    return 0;
}
