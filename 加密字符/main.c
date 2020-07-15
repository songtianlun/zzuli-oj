/*Description
从键盘输入一批字符，以@结束，按要求加密并输出。
Input
从键盘输入一批字符，占一行，以@结束。
Output
输出占一行
加密规则:
1）、所有字母均转换为小写。
2）、若是字母'a'到'y'，则转化为下一个字母。
3）、若是'z'，则转化为'a'。
4）、其它字符，保持不变。*/
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
