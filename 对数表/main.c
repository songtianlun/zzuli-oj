//��������������m��n�����m��n֮��ÿ����������Ȼ������ //
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;

    scanf("%d%d",&m,&n);
    while(n>=m)
    {
        printf("%4d%8.4f\n",m,log(m));
        m=m+1;
    }
    return 0;
}
