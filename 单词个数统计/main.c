#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,n=0;
    char ch[1000];
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]!=' '&&ch[i+1]==' ')
            n++;
    }
    if(ch[strlen(ch)-1]!=' ')
    n++;
    printf("%d\n",n);
    return 0;
}
