#include <stdio.h>

int main(void)
{
    int i,j,n,a=0;
    char ch[1000];

scanf("%d",&n);
getchar();
for(i=1;i<=n;i++)
{
    a=0;
    gets(ch);
    for(j=0;ch[j]!='\0';j++)
    {
        if(ch[j]>='0'&&ch[j]<='9')
        a++;
    }
    printf("%d\n",a);
}

    return 0;

}
