//����һ������n���������1-1/3+1/5-����ǰn��ĺ͡�//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,op;
    double sum,number;

    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n)
    {
        if(i%2==0)
            op=-1;
        else
            op=1;

        number=op*(1.0/(2*i-1));
        sum += number;
        i=i+1;
    }
    printf("%.2f\n",sum);
    return 0;
}
