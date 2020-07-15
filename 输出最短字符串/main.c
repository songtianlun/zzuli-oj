#include <stdio.h>
#include <string.h>
#define N 1000

int main()
{
    int i,n,minnum=1000;
    char ch[N],min[N];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(ch);
        if(strlen(ch)<minnum)
        {
            strcpy(min,ch);
            minnum=strlen(ch);
        }
    }
    puts(min);
    return 0;
}
