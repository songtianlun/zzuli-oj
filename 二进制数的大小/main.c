#include <stdio.h>
#include <string.h>
int bToD(char t[]);


int main()
{
    int i,j,x,n[4];
    char t[32];

    for(i=1;i<=3;i++)
    {
        scanf("%s",t);
        n[i]=bToD(t);
    }
    for(i=1;i<3;i++)
        for(j=2;j<=3;j++)
          if(n[i]>n[j])
          {
             x=n[i];
             n[i]=n[j];
             n[j]=x;
          }
    for(i=1;i<=3;i++)
    {
        if(i==1)
        printf("%d",n[i]);
        else
        printf(" %d",n[i]);
    }
    return 0;
}

int bToD(char t[])
{
    int i,j,d=0,k,two=1,n;
    for(i=strlen(t)-1,j=1;i>=0;i--,j++)
    {
        for(k=j-1;k>0;k--)
            two*=2;
        n=t[i]-48;
        d=d+n*two;
        two=1;

    }

    return d;
}
