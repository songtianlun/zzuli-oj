//����һ���ַ����Իس�����Ϊ��������ı�־��ͳ�����������ַ��ĸ�����//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char ch;
    num=0;

    while(ch=getchar(),ch!='\n')
    {
        if(ch>='0'&&ch<='9')
        num=num+1;
    }
    printf("%d\n",num);
    return 0;
}
