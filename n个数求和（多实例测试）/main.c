/*�����һ����һ������T����ʾ��T�����ʵ����
ÿ������������У�
��һ��һ����n��ʾ����������n��������
�ڶ��пո������n������*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,I,i,n,num;
    int sum[100]={0};
    scanf("%d",&t);
    for(I=1;I<=t;I++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&num);
            sum[I]=sum[I]+num;
        }
    }
    for(I=1;I<=t;I++)
        printf("%d\n",sum[I]);
    return 0;
}
