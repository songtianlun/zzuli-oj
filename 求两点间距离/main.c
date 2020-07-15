//给定A(x1, y1), B(x2, y2)两点坐标，计算它们间的距离。//
#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, dist ;

    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) ;
    dist = sqrt( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) *(  y1 - y2 ) ) ;
    printf("%.2f\n", dist);
    return 0;
}
