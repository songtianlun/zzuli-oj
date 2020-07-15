#include <stdio.h>
#include <stdlib.h>
struct sugar
{
    double money;
    int num;
};

int main()
{
    int n,nn,m,i,j,sum=0;
    double summ=0;
    struct sugar a[11],b;
    scanf("%d %d",&n,&m);
    nn=n;
    for(i=0;i<m;i++)
    {
        scanf("%lf ",&a[i].money);
        scanf("%d",&a[i].num);
    }
    for(i=0;i<m-1;i++)
        for(j=i+1;j<m;j++)
            if(a[i].money>a[j].money)
            {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
            }
    for(i=0;sum<nn;i++)
    {
        if(a[i].num>=n)
        {
            sum+=n;
            summ+=n*a[i].money*1.0;
        }
        else if(a[i].num<n)
        {
            sum+=a[i].num;
            summ+=a[i].num*a[i].money*1.0;
            n=n-a[i].num;
        }
    }
    printf("%.2lf\n",summ);
    return 0;
}
