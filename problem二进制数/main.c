/*Description
��һ������������ת��Ϊ��Ӧ��ʮ��������
Input
����һ�������������Իس��������ö�������Ϊ���������Ȳ�����31��
Output
���һ��������Ϊ�ö���������Ӧ��ʮ��������*/
#include <stdio.h>
#include <stdlib.h>
#define N 31

int main()
{
    int i,flag=1,num,n=0;
    char a[N];

    while(gets(a))
    {
    num=0;
    flag=1;
        for(i=0;a[i]&&flag;++i)
    {
    if(a[i]<'0'||a[i]>'1')
        flag=0;
        else
        num=2*num+a[i]-'0';
    }
    if(flag)
        printf("%d",num);
    }


    return 0;
}
