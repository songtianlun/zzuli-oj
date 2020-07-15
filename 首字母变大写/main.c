#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[200];
    int i;
    gets(ch);
    if(ch[0]>='a'&&ch[0]<='z')
        ch[0]=ch[0]-32;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' '&&ch[i+1]!=' ')
        {
            if(ch[i+1]>='a'&&ch[i+1]<='z')
            ch[i+1]=ch[i+1]-32;
        }
    }
    puts(ch);
    return 0;
}
