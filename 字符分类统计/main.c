//����һ���ַ����Իس�����Ϊ��������ı�־��ͳ������Ӣ����ĸ�������ַ��������ַ��ĸ�����//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int letter,digit,other;
    char ch;
    letter=digit=other=0;
    while(ch=getchar(),ch!='\n')
    {
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
            letter=letter+1;
        else if(ch>='0'&&ch<='9')
            digit=digit+1;
        else
            other=other+1;
    }
    printf("letter:%d\n",letter);
    printf("digit:%d\n",digit);
    printf("other:%d\n",other);
    return 0;
}
