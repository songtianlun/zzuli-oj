//����һ������n���������1+1/3+1/5+����ǰn��ĺ͡� //
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
     double number,sum;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        number=1.0/(2*i-1);
        sum+=number;
    }
    printf("%.2f\n",sum);
    return 0;
}
