//已知某位学生的数学、英语和计算机课程的成绩，求该生三门课程的平均分。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double math, english, computer, average ;

    scanf("%lf%lf%lf", &math, &english, &computer);
    average = (math + english + computer) / 3 ;
    printf("%.2f\n" , average);
    return 0;
}
