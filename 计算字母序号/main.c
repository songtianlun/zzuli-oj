//输入一个英文字母（可能是大写，也可能是小写），输出该字母在字母表中的序号（’a’和’A’的序号为1）。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char ch;

    ch=getchar();
    ch = tolower(ch); //将xh转换为小写//
    x = ch - 'a'+ 1;
    printf("%d",x);

    return 0;
}
