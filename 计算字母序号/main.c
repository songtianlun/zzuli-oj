//����һ��Ӣ����ĸ�������Ǵ�д��Ҳ������Сд�����������ĸ����ĸ���е���ţ���a���͡�A�������Ϊ1����//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char ch;

    ch=getchar();
    ch = tolower(ch); //��xhת��ΪСд//
    x = ch - 'a'+ 1;
    printf("%d",x);

    return 0;
}
