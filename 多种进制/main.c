#include <stdio.h>
#include <stdlib.h>
void dToK(int n, int k, char str[]);

int main()
{
    int n;
    char str[100];

    scanf("%d",&n);

    dToK(n,2,str);
    printf("%s\n",str);

    dToK(n,3,str);
    printf("%s\n",str);

    dToK(n,7,str);
    printf("%s\n",str);

    dToK(n,8,str);
    printf("%s\n",str);

    return 0;
}
void dToK(int n, int k, char str[])
{
    int i,j,len;
    char num,ch;
    for(i=0;n!=0;i++)
    {
        num=n%k+48;
        str[i]=num;
        n=n/k;
    }
    str[i]='\0';
    len=i-1;
    for(j=0,i=len;j<i;j++,i--)
    {
        ch=str[j];
        str[j]=str[i];
        str[i]=ch;
    }
}
