/*Description
�Ӽ�������һ���ַ�����@��������Ҫ����ܲ������
Input
�Ӽ�������һ���ַ���ռһ�У���@������
Output
���ռһ��
���ܹ���:
1����������ĸ��ת��ΪСд��
2����������ĸ'a'��'y'����ת��Ϊ��һ����ĸ��
3��������'z'����ת��Ϊ'a'��
4���������ַ������ֲ��䡣*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;


while(ch=getchar(),ch!='@')
    {
    if(ch>='A'&&ch<='Z')
        ch+=32;
    if(ch>='a'&&ch<='y')
        ch=ch+1;
    else if(ch=='z')
        ch=ch-25;
    else
        ch=ch;

    printf("%c",ch);
    }
    return 0;
}
