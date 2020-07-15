/*给你三个ASCII字符(不含空白字符:包括空格、制表符\t、回车换行符\n)，找出其中最大的那个
输入包含三个字符，之间有一个空格隔开。
输出ASII码最大的那个字符，占一行。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c,max;

    scanf("%c %c %c",&a,&b,&c);
        max=a;

    if(b>a)

        max=b;

    if(c>max)

        max=c;

    printf("%c",max);
    return 0;
}
