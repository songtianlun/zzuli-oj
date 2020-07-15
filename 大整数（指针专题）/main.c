#include <stdio.h>
#include <string.h>
int cmp(char *a,char *b);

int main()
{
    char a[106],b[106],c[106],ch[106];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    if(cmp(a,b)>=1)
    {
        strcpy(ch,a);
        strcpy(a,b);
        strcpy(b,ch);
    }

    if(cmp(a,c)>=1)
    {
        strcpy(ch,a);
        strcpy(a,c);
        strcpy(c,ch);
    }

    if(cmp(b,c)>=1)
    {
        strcpy(ch,b);
        strcpy(b,c);
        strcpy(c,ch);
    }

printf("%s\n",a);
printf("%s\n",b);
printf("%s\n",c);

    return 0;
}

int cmp(char *a,char *b)
{
    if(strlen(a)>strlen(b))
        return 1;
    else
    if(strlen(a)==strlen(b))
    {
    return strcmp(a,b);
    }
    else
        return -1;
}
