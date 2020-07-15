//已知不等式 1！+2！+3！+...+m！‹n,请编程对用户指定的n值计算并输出满足该不等式的m的整数解。//
//输入一个整数n，n为int范围内的正整型。//
//输出m的取值范围，具体格式见输出样例。m<=12//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double sum,demo,n;

    scanf("%lf",&n);
    demo=1;
    sum=0;
    i=1;

    while(1)
    {
        sum=sum+demo;
        i=i+1;
        demo=demo*i;
        printf("%lf\n",sum);
        if(sum>=n)
        break;
    }
    printf("m<=%d\n",i-2);
    printf("%lf",n);
    return 0;
}
