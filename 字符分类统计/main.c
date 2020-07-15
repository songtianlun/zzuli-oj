//输入一行字符，以回车符作为输入结束的标志。统计其中英文字母、数字字符和其他字符的个数。//
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
