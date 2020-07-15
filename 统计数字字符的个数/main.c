//输入一行字符，以回车符作为输入结束的标志。统计其中数字字符的个数。//
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
