#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *decimal(char *p)
{
    int i=0,j=0,l=0;
    //将字符串p表示的实数的自小数点开始的小数部分存入一个字符串，并由函数返回，若p为“123.456”，则返回的字符串为“.456”。若小数部分为0,返回空指针NULL。
    char *point=(char *)malloc(110 * sizeof(char));
    l=strlen(p);
    for(i=0;i<l;i++)//判断 。 的位置
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
