#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *decimal(char *p)
{
    int i=0,j=0,l=0;
    //���ַ���p��ʾ��ʵ������С���㿪ʼ��С�����ִ���һ���ַ��������ɺ������أ���pΪ��123.456�����򷵻ص��ַ���Ϊ��.456������С������Ϊ0,���ؿ�ָ��NULL��
    char *point=(char *)malloc(110 * sizeof(char));
    l=strlen(p);
    for(i=0;i<l;i++)//�ж� �� ��λ��
    {
        if(p[i]=='.')
        break;
    }

   while (i < l)
        point[j++] = p[i++];
     point[j]=' ';
    --j;
    while(point[j]=='0')
    {
        point[j--]=' ';
    }
    if (point[j] == '.') {
        return NULL;
    }
    return point;
}
int main()
{
    char str[110];
    gets(str);

   if(decimal(str)==NULL)
         printf("No decimal partn");
    else
        printf("0%s\n",decimal(str));


}
