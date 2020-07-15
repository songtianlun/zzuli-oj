#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    char ch[1005];
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if((ch[i]>'9'||ch[i]<'0')&&(ch[i+1]>='0'&&ch[i+1]<='9'))
            sum++;
    }
    if(ch[0]>='0'&&ch[0]<='9')
        sum++;
    printf("%d\n",sum);
    return 0;
}
