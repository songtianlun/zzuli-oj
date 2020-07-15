#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1002];
    int n,i,num=0,num1=0;
    gets(ch);
    scanf("%d",&n);
    for(i=strlen(ch)-1;i>=0;i--)
    {
        if(ch[i]=='1')
        num1++;
        else
        num1=0;

        if(num1>=n)
        {
            num++;
        }
    }
    printf("%d\n",num);
    return 0;
}
