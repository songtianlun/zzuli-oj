#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i,n,t;
    char num[100]={0};
    char *a=NULL,b='.';
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",num);
        scanf("%d",&n);
        a=strchr(num,b);
        if((int)(strlen(num)-(int)(a-num)-n-1)>=0)
        printf("%c\n",*(a+n));
        else
        printf("0\n");
    }
    return 0;
}
