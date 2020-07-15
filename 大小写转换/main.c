//输入一个字母，若是小写字母，则变为大写输出，否则，原样输出。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    ch=getchar();
    if(ch>='a'&&ch<='z')
        ch-=32;
    printf("%c",ch);
    return 0;
}
