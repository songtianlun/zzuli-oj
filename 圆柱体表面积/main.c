/*输入圆柱体的底面半径r和高h，计算圆柱体的表面积并输出到屏幕上。要求定义圆周率为如下宏常量

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
