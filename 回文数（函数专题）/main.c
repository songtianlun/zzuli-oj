#include <stdio.h>
#include <math.h>
int back(int n);

int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(back(i)==i)
            printf("%d ",i);
    }
    return 0;
}

int back(int n)
{
    int x,m,nu=0,ten=1,i;
    m=log10(n);
    for(i=1;i<=m;i++)
        ten=ten*10;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        nu=nu+x*ten;
        ten=ten/10;
    }


    return nu;
}
