#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[201];
    int i,max=0;
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>max)
            max=ch[i];
    }
    for(i=0;ch[i]!='\0';i++)
    {
        printf("%c",ch[i]);
        if(ch[i]==max)
        {
            printf("(max)");
        }
    }
    return 0;
}
