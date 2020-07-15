//输入x，计算上面公式的前10项和。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,flag;
    double x,num,demo,sum;
    sum=0;

    scanf("%lf",&x);
    num=x;
    demo=1;
    flag=1;
    for(i=1;i<=10;i++)
    {
        sum=sum+flag*num/demo;
        flag=-flag;
        num=num*x*x;
        demo=demo*(i*2)*(i*2+1);
        printf("%30lf%30lf%30lf\n",num,demo,sum);
    }
    printf("%.3f\n",sum);
    return 0;
}
