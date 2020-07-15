#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int greater(char *s1, char *s2);
char *del(char *s1);

int main()
{
    int n,i,j;
    char *ch[20],*temp=NULL,str[200];
    char *str2=NULL;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str);
        str2=del(str);
        ch[i] = (char *)malloc(sizeof(char)*(strlen(str2)+1));
        strcpy(ch[i], str2);
    }
    for(j=0;j<n-1;j++)
        for(i=j+1;i<n;i++)
        if(greater(ch[j],ch[i])==1)
        {
            temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
        }
    for(i=0;i<n;i++)
        puts(ch[i]);
    return 0;
}

int greater(char *s1, char *s2)
{
    int i;
    if(strlen(s1)>strlen(s2))
        return 1;
    else if(strlen(s1)<strlen(s2))
        return -1;
    else
        for( i=0; s1[i] != ' '; i++)
        {
            if(s1[i] > s2[i])
                return 1;
            if(s1[i] < s2[i])
                return -1;
        }
        return 0;
}

char *del(char *s1)
{
    int i;
    char *ch1=s1;
    for(i=0;s1[i]!='\0';i++)
    {
     if(s1[i+1]=='\0')
        break;
     if(s1[i]!='0')
        break;
    }

    ch1=&s1[i];
    return ch1;
}
