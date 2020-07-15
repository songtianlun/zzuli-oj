/*输入圆的半径，求圆的周长和面积。
 要求定义圆周率为如下宏常量
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
