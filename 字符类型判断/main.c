/*�Ӽ�������һ���ַ����жϸ��ַ��Ƿ��д��ĸ��Сд��ĸ�������ַ��������ַ����ֱ������Ӧ����ʾ��Ϣ��
����һ���ַ���
������ַ��Ǵ�д��ĸ���������upper��������Сд��ĸ���������lower�������������ַ����������digit�������������ַ����������other�������������˫���ţ���*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch;

    ch=getchar();
    if((ch>=48)&&(ch<=57))
        printf("digit");
    else if((ch>=65)&&(ch<=90))
        printf("upper");
        else if((ch>=97)&&(ch<=122))
        printf("lower");
        else
        printf("other");
    return 0;
}
