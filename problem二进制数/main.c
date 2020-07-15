/*Description
将一个二进制数，转换为对应的十进制数。
Input
输入一个二进制数，以回车结束。该二进制数为正数，长度不超过31。
Output
输出一个整数，为该二进制数对应的十进制数。*/
#include <stdio.h>
#include <stdlib.h>
#define N 31

int main()
{
    int i,flag=1,num,n=0;
    char a[N];

    while(gets(a))
    {
    num=0;
    flag=1;
        for(i=0;a[i]&&flag;++i)
    {
    if(a[i]<'0'||a[i]>'1')
        flag=0;
        else
        num=2*num+a[i]-'0';
    }
    if(flag)
        printf("%d",num);
    }


    return 0;
}
