#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    char num[1000];
    int i,j=0,n=0;
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='0'&&ch[i]<='9')
        {
            num[j]=ch[i];
            j++;
        }
        num[j+1]='\0';
    }
    for(i=0;num[i]!='\0';i++)
    {
        n=n*10+((int)num[i]-48);
    }
    printf("%d\n",n*2);
    return 0;
}
