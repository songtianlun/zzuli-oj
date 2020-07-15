#include <stdio.h>
#include <stdlib.h>

int main()
{
    double w,p,sum=0;
     while(scanf("%*s%lf%lf",&w,&p)!=EOF)
     {
         sum=sum+w*p;
     }
    printf("%.1f\n",sum);
    return 0;
}
