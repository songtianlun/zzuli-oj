//����һ������n��n�������������n�������ĺ͡�//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,number,sum;

    scanf("%d",&n);
    sum=0;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&number);
        sum+=number;
    }

    printf("%d\n",sum);
    return 0;
}
