#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 120

void maxchar(char *str[],int n,int *max);

int main()
{
    char *str[N];
    char ch[]="*****";
    char ch1[6];
    int i=0,max=0,len;
    while(1)
    {
    gets(ch1);
    if(strcmp(ch1,ch)==0)
        break;
    else
        len=strlen(ch1);
    str[i]=(char *)malloc(sizeof(char)*(len+1));
        strcpy(str[i],ch1);
        i+=1;
    }

    maxchar(str,i,&max);
    puts(str[max]);
    return 0;
}

void maxchar(char *str[],int n,int *max)
{
    int i=0;
    *max=0;
    for(i=0;i<n;i++)
    {
        if(strcmp(str[i],str[(*max)]) > 0)
           (*max) = i;
    }
    return ;
}
