#include <stdio.h>
#include <stdlib.h>
int len(char *sp);

int main()
{
    int n;
    char ch[120];
    gets(ch);
    n=len(ch);
    printf("%d\n",n);
    return 0;
}

int len(char *sp)
{
    int i,n=0;
    for(i=0;sp[i]!='\0';i++)
    {
        if(sp[i]!=' ')
            n++;
    }
    return n;
}
