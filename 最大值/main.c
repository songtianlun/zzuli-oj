//����һ������n��n�������������n�����������ֵ��//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,number,max;

    scanf("%d",&n);
    i=1;
    scanf("%d",&max);
    for(i=1;i<=n-1;i++)
    {
        scanf("%d",&number);

        if(number>max)
            max=number;
    }
    printf("%d\n",max);
    return 0;
}
