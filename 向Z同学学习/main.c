/*Description
ZͬѧΪ��ʵ�����ȥ�������ε����룬�����Ժ�ÿ��ֻ����1Ԫ��ÿ��kԪ�Ϳ����ٵõ�1Ԫ��һ��ʼZͬѧ��MԪ���������Լ�ֶ����졣
Input
����2������M, k��(2 <= k <= M <= 1000)��
Output
���һ����������ʾMԪ�������ѵ�������*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,k,d;

    scanf("%d%d",&m,&k);
    for(d=0;m!=0;)
    {
            m=m-1;
            d=d+1;
        if(d%k==0)
            m=m+1;
    }
    printf("%d\n",d);
    return 0;
}
