#include <stdio.h>
#include <string.h>
#define N 100
int KToD(char ch[], int k);


int main()
{
    char ch[N];
    int i,k,n,t,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s%d",ch,&k);
        t=KToD(ch,k);
        if(t>max)
            max=t;
    }
    printf("%d\n",max);
    return 0;
}

int KToD(char ch[], int k)
{
        int i,j,d=0,l,two=1,n;
    for(i=strlen(ch)-1,j=1;i>=0;i--,j++)
    {
        for(l=j-1;l>0;l--)
            two*=k;
        n=ch[i]-48;
        d=d+n*two;
        two=1;
    }

    return d;
}
