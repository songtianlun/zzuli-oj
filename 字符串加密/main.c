/*输入一串字符（长度不超过100）和一个正整数k，
将其中的英文字母加密并输出加密后的字符串，非英文字母不变。
加密思想：将每个字母c加一个序数k，即用它后面的第k个字母代替，
变换公式：c=c+k。如果字母为z，则后一个字母是a，也就是字母字符形成一个圆。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char ch[100];
    int k,i,n,l;
    gets(ch);
    scanf("%d",&k);
    n=k%26;
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            if(ch[i]+n<='z')
            ch[i]=ch[i]+n;
            else
            ch[i]=ch[i]+n-26;
        }
        if(ch[i]>='A'&&ch[i]<='Z')
        {
            if(ch[i]+n<='Z')
            ch[i]=ch[i]+n;
            else
            ch[i]=ch[i]+n-26;
        }

    }
    puts(ch);
    return 0;
}
