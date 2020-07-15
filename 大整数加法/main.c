#include <stdio.h>
#include <string.h>
#define N 1005

int main()
{
    int t,i,j,k,len1,len2,len3;
    char n1[N],n2[N],n3[N],n[N];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
    scanf("%s %s",n1,n2);
    len1=strlen(n1);
    len2=strlen(n2);

    if(len2>len1)
    {
        strcpy(n3,n1);
        strcpy(n1,n2);
        strcpy(n2,n3);
        len3=len1;
        len1=len2;
        len2=len3;
    }
    for(i=len1;i>0;i--)
        n[i]=n1[i-1];
        n[len1+1]='\0';
        n[0]='0';
    for(i=len1,k=len2-1;i>=0&&k>=0;i--,k--)
    {
        n[i]+=(n2[k]-'0');
    }
    for(i=len1;i>=0;i--)
    {
        if(n[i]>'9')
        {
            n[i]=n[i]-10;
            n[i-1]=n[i-1]+1;
        }
    }
    if(n[0]!='0')
        n[0]='1';
    if(n[0]=='0')
        for(i=1;i<=len1;i++)
        printf("%c",n[i]);
    else
        for(i=0;i<=len1;i++)
        printf("%c",n[i]);
    printf("\n");
    }
    return 0;
}
