/*����Բ����ĵ���뾶r�͸�h������Բ����ı�������������Ļ�ϡ�Ҫ����Բ����Ϊ���º곣��

#define PI 3.14159*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    double r, h, s ;
    scanf("%lf%lf", &r, &h) ;
    s = 2 * PI * r * h + 2 * PI * r * r ;
    printf("%.2f\n",s);
    return 0;
}
