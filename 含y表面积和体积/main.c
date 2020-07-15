/*  读入5个整数a, b, c, d 和 e，计算物体的表面积和体积。你可以想像该物体是一个长宽高为a, b, c 的长方体，每一面中央都是凹进去的，而凹进去的深度为 d，沒凹进去的边框宽度 e。*/

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
