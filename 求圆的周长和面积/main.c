/*����Բ�İ뾶����Բ���ܳ��������
 Ҫ����Բ����Ϊ���º곣��
 #define PI 3.14159*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    double r, c ,s;

    scanf("%lf", &r);
    c = 2 * PI * r ;
    s = PI * r * r ;
    printf("%.2f %.2f\n",c ,s ) ;
    return 0;
}
